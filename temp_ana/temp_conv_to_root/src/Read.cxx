#include"Read.h"
#include<fstream>
#include<iostream>
#include<TFile.h>
#include<TTree.h>
#include<vector>
#include<TROOT.h>
#include<TStyle.h>
#include<TProfile.h>

using namespace std;
char char_tmp[1000];
int _time;
double _temperature[Layer_No][tempSensorNo];
long buffer1=0;
long buffer2=0;
long buffer3=0;
long buffer4=0;
long buffer=0;
string  find_datname(string str){
    int begin=0;
    int end=str.size();
    for (int i = 0; i < str.size(); ++i){
        //if(str[i]=='/') {begin=i; cout<<i<<" "<<str[i]<<endl;}
        //if(str[i]=='.') {end=i; cout<<i<<" "<<str[i]<<endl;}
        if(str[i]=='/') begin=i; 
        if(str[i]=='.') end=i; 
    }
    return str.substr(begin+1,end-begin-1);
}
void Clear(){
    _time=0;
    for (int i_layer = 0; i_layer < Layer_No; ++i_layer){
        for (int i_sensor= 0; i_sensor < tempSensorNo; ++i_sensor)
        {
            _temperature[i_layer][i_sensor]=0;
        }
    }
}
void SetTreeBranch(TTree *t){
    t->Branch("time",&_time);
    t->Branch("temperature",&_temperature,"_temperature[40][48]/D");
}
void ReadTreeBranch(TTree *t){
    Clear();
    t->SetBranchAddress("time",&_time);
    t->SetBranchAddress("temperature",&_temperature);
}
int ReadABag(ifstream &infile,std::vector<int> &buffer_v){
    if(infile.eof()==1){
        cout<<"infile read over"<<endl;
        return 0;
    }
    Clear();
    buffer_v.clear();
    while(infile.read((char*)(&buffer1),1) && infile.read((char*)(&buffer2),1)){
        buffer=buffer1*0x100+buffer2;
        buffer_v.push_back(buffer);
        if(buffer==0x2f27) break;
    }
    if(buffer_v.size()==(Layer_No*tempSensorNo+1)*2 && buffer_v.back()==0x2f27) return 1;
    else{
        cout<<" abnormal bag "<<buffer_v.size()<<" "<<buffer_v.back();
        buffer_v.clear();
        return 0;
    }
}
int Temperature::ReadDat(string input_dat,string output_path){
    int i_tmp;
    long start_time=0;
    double d_tmp=0;
    std::vector<int> buffer_v;
    string str_dat=find_datname(input_dat);
    cout<<str_dat<<endl;
    ifstream infile;
    string str_outfile=output_path+"/"+str_dat+".root";
    infile.open(input_dat,ios::binary|ios::in);
    if(!infile){
        cout<<"cant open "<<input_dat<<endl;
        return 0;
    }
    TFile *f_out;
    f_out = TFile::Open(str_outfile.c_str(),"RECREATE");
    if(!f_out){
        cout<<"cant create "<<str_outfile<<endl;
        return 0;
    }
    TTree *tree_temp = new TTree("Temperature","Temperature");
    SetTreeBranch(tree_temp);
    //while( infile.read((char*)(&buffer1),1) && infile.read((char*)(&buffer2),1) && infile.read((char*)(&buffer3),1) && infile.read((char*)(&buffer4),1)){
    while(infile.eof()!=1){
        if(ReadABag(infile,buffer_v)==0)continue;
        buffer1=buffer_v[0]/0x100;
        buffer2=buffer_v[0]-buffer1*0x100;
        buffer3=buffer_v[1]/0x100;
        buffer4=buffer_v[1]-buffer3*0x100;
        buffer_v.erase(buffer_v.begin(),buffer_v.begin()+2);
        buffer=buffer1*24*3600+buffer2*3600+buffer3*60+buffer4;
        //buffer=buffer2*3600+buffer3*60+buffer4;
        //if(!start_time) start_time=buffer;
        //_time = buffer - start_time;
        _time=buffer;
        for (int i = 0; i < Layer_No*tempSensorNo; ++i){
            buffer = buffer_v[i*2];
            i_tmp = (buffer>32767)?1:0;
            d_tmp=(buffer-i_tmp*pow(2,16))*256.0/pow(2,15);
            if(d_tmp<0 || d_tmp>100){
                cout<<"abnormal temperature "<<d_tmp<<endl;
                continue;
            }
            //infile.read((char*)(&buffer1),1); infile.read((char*)(&buffer2),1);
            buffer = buffer_v[i*2+1];
            int sensor=buffer/0x100;
            int layer=buffer-sensor*0x100;
            if (layer>=Layer_No || sensor>= tempSensorNo){
                cout<<"abnormal layer sensor "<<hex<<layer<<" "<<sensor<<" "<<buffer<<endl;
                continue;
            }
            if(_temperature[layer][sensor]!=0){
                cout<<"double count "<<layer<<" "<<sensor<<endl;
                continue;
            }
            _temperature[layer][sensor]=d_tmp;
        }
        cout<<_time<<" read over "<<_temperature[0][0]<<endl;
        tree_temp->Fill();
    }
    infile.close();
    f_out->cd();
    tree_temp->Write();
    f_out->Close();
    return 1;

}

int Temperature::TempAna(string input_file,string output_path){
    double avg_temperature[Layer_No][tempSensorNo];
    TFile *f_out;
    TFile *f_in;
    string str_root=find_datname(input_file);
    cout<<str_root<<endl;
    string output_file=output_path+"/"+str_root+"_ana.root";
    f_out = TFile::Open(output_file.c_str(),"RECREATE");
    if(!f_out){
        cout<<"cant open "<<output_file<<endl;
        return 0;
    }
    f_in = TFile::Open(input_file.c_str(),"READ");
    if(!f_in){
        cout<<"cant open "<<input_file<<endl;
        return 0;
    }
    sprintf(char_tmp,"Temperature");
    TTree *tree_temp;
    tree_temp = (TTree*)f_in->Get(char_tmp);
    if(!tree_temp){
        cout<<"cant get tree "<<char_tmp<<endl;
        return 0;
    }
    TH2D *h2_temp[Layer_No];
    TH2D *h2_temp_ref[Layer_No];
    TCanvas *C_h2_temp[Layer_No];
    TCanvas *C_h2_temp_ref[Layer_No];
    TGraph *g_temp[Layer_No][tempSensorNo];
    TGraph *g_temp_ref[Layer_No][tempSensorNo];
    for (int i_layer = 0; i_layer < Layer_No; ++i_layer)
    {
        sprintf(char_tmp,"h_temp layer%d",i_layer);
        h2_temp[i_layer] = new TH2D(char_tmp,char_tmp,6,-360,360,8,-390,390);
        h2_temp[i_layer]->GetXaxis()->SetTitle("X[mm]");
        h2_temp[i_layer]->GetYaxis()->SetTitle("Y[mm]");
        for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor){
            avg_temperature[i_layer][i_sensor]=0;
            sprintf(char_tmp,"g temp layer%d sensor%d",i_layer,i_sensor);
            g_temp[i_layer][i_sensor]=new TGraph();
            g_temp[i_layer][i_sensor]->SetTitle(char_tmp);
            g_temp[i_layer][i_sensor]->SetName(char_tmp);
            g_temp[i_layer][i_sensor]->GetXaxis()->SetTitle("time[s]");
            g_temp[i_layer][i_sensor]->GetYaxis()->SetTitle("Temperature[degree]");
        }
    }

    ReadTreeBranch(tree_temp);
    for (int i = 0; i < tree_temp->GetEntries(); ++i)//for the sake of package error
    {
        Clear();
        tree_temp->GetEntry(i);
        for (int i_layer = 0; i_layer < Layer_No; ++i_layer){
            for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor){
                double temperature=_temperature[i_layer][i_sensor];
                if(temperature<=0 || temperature>=100){
                    cout<<"abnormal temperature "<<i_layer<<" "<<i_sensor<<" "<<temperature<<endl;
                    continue;
                }
                g_temp[i_layer][i_sensor]->SetPoint(i,i,temperature);
                avg_temperature[i_layer][i_sensor]+=temperature;
            }
        }
    }
    for (int i_layer = 0; i_layer < Layer_No; ++i_layer){
        f_out->cd();
        sprintf(char_tmp,"layer%d",i_layer);
        f_out->mkdir(char_tmp);
        f_out->cd(char_tmp);
        for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor){
            g_temp[i_layer][i_sensor]->Write();
            avg_temperature[i_layer][i_sensor]=avg_temperature[i_layer][i_sensor]/(tree_temp->GetEntries());
            int i_tmp=i_sensor/16;
            double y = temp_Y[i_sensor - i_tmp*16];                                          
            double x = temp_X[i_sensor - i_tmp*16] + (i_tmp - 1)*HBU_X;
            h2_temp[i_layer]->Fill(x,y,avg_temperature[i_layer][i_sensor]); 
        }
        sprintf(char_tmp,"C temp layer%d",i_layer);
        C_h2_temp[i_layer]=new TCanvas(char_tmp,char_tmp);
        h2_temp[i_layer]->Draw("COLTEXTZ");
        h2_temp[i_layer]->Write();
        C_h2_temp[i_layer]->Write();
    }
    f_out->Close();
    return 1;
}

