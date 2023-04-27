#include <TH1.h>
#include "TGraph.h"
int temp()
{
    static const int totalLayerNo = 32;
    static const int tempSensorNo = 16;
    double _triggerID=0;
    vector<vector<double>>* tempLayer=0;
    char  infile_name[]="/mnt2/ScECAL_CR/results/tempHist/20210128_1300_cosmicRayTst.root";
    char  outfile_name[]="temp.root";
    char  char_tmp[1000];
    TFile* tempfile;
    TFile* outfile;
    tempfile=TFile::Open(infile_name,"READ");
    if(!tempfile){
    	cout<<"cant read"<<infile_name<<endl;
    	return 0;
    }
    TTree* fNtuple;
    tempfile->GetObject("T_temp",fNtuple);
    if(!fNtuple){ 
    	cout<<" Get temperature tree object failed !!!"<<endl;
    	return 0;
    }
    fNtuple ->SetBranchAddress("cycleID",&_triggerID);
    fNtuple ->SetBranchAddress("tempLayer",&tempLayer);
    outfile=TFile::Open(outfile_name,"RECREATE");
    if(!outfile){
    	cout<<"cant read"<<outfile_name<<endl;
    	return 0;
    }
    TH1D *h_temp[totalLayerNo][tempSensorNo];
    TH2D *h2_temp_time[totalLayerNo][tempSensorNo];
    TH1D *h_temp_re[totalLayerNo][tempSensorNo];
    TH2D *h2_temp_time_re[totalLayerNo][tempSensorNo];
    TGraph *g_Layer[tempSensorNo];
    TGraph *g_Sensor[totalLayerNo];
    for (int i_layer = 0; i_layer < totalLayerNo; ++i_layer)
    {
    	for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor)
    	{
    		sprintf(char_tmp,"temperature layer%d sensor%d",i_layer,i_sensor);
    		h_temp[i_layer][i_sensor]=new TH1D(char_tmp,char_tmp,300,5,35);
    		h_temp[i_layer][i_sensor]->GetXaxis()->SetTitle("temperature");
    		sprintf(char_tmp,"temperature time layer%d sensor%d",i_layer,i_sensor);
    		h2_temp_time[i_layer][i_sensor]=new TH2D(char_tmp,char_tmp,300,-0,1,300,5,35);
    		h2_temp_time[i_layer][i_sensor]->GetXaxis()->SetTitle("time");
    		h2_temp_time[i_layer][i_sensor]->GetYaxis()->SetTitle("temperature");
    		sprintf(char_tmp,"relative temperature layer%d sensor%d",i_layer,i_sensor);
    		h_temp_re[i_layer][i_sensor]=new TH1D(char_tmp,char_tmp,300,-15,15);
    		h_temp_re[i_layer][i_sensor]->GetXaxis()->SetTitle("temperature");
    		sprintf(char_tmp,"relative temperature time layer%d sensor%d",i_layer,i_sensor);
    		h2_temp_time_re[i_layer][i_sensor]=new TH2D(char_tmp,char_tmp,300,0,1,300,-15,15);
    		h2_temp_time_re[i_layer][i_sensor]->GetXaxis()->SetTitle("time");
    		h2_temp_time_re[i_layer][i_sensor]->GetYaxis()->SetTitle("temperature");
    	}
    }
    for (int i_layer = 0; i_layer < totalLayerNo; ++i_layer){
    	sprintf(char_tmp,"Layer%d",i_layer);
    	g_Sensor[i_layer]=new TGraph();
    	g_Sensor[i_layer]->SetTitle(char_tmp);
    	g_Sensor[i_layer]->SetName(char_tmp);
    	g_Sensor[i_layer]->GetXaxis()->SetTitle("Sensor No");
    	g_Sensor[i_layer]->GetYaxis()->SetTitle("Temperature");
    }
    for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor){
    	sprintf(char_tmp,"Sensor%d",i_sensor);
    	g_Layer[i_sensor]=new TGraph();
    	g_Layer[i_sensor]->SetTitle(char_tmp);
    	g_Layer[i_sensor]->SetName(char_tmp);
    	g_Layer[i_sensor]->GetXaxis()->SetTitle("Layer No");
    	g_Layer[i_sensor]->GetYaxis()->SetTitle("Temperature");
    }
    fNtuple->GetEntry(fNtuple->GetEntries()-1);
    double _endTrigerID=_triggerID;
    fNtuple->GetEntry(0);
    double _startTrigerID=_triggerID;
    double _deltaTrigerID=_endTrigerID - _startTrigerID;
    double temperature_ref=0;
    cout<<" reference temperature"<<temperature_ref<<endl;
    for(int entry=0; entry!=fNtuple->GetEntries(); ++entry){
        fNtuple->GetEntry(entry);
        for(int i_layer=0; i_layer<totalLayerNo; i_layer++){
            if(tempLayer->at(i_layer).size()==0) continue;
            if(tempLayer->at(i_layer).size()!=tempSensorNo){
            	cout<<"wrong sensor No "<<tempLayer->at(i_layer).size()<<endl;
            	continue;
            }
            temperature_ref=tempLayer->at(i_layer).at(0);          
            for (int i_sensor = 0; i_sensor < tempLayer->at(i_layer).size(); ++i_sensor){
            	double temperature_now = tempLayer->at(i_layer).at(i_sensor);
            	h_temp[i_layer][i_sensor]->Fill(temperature_now);
            	h2_temp_time[i_layer][i_sensor]->Fill((_triggerID - _startTrigerID)/_deltaTrigerID,temperature_now);
            	h_temp_re[i_layer][i_sensor]->Fill(temperature_now - temperature_ref);
            	h2_temp_time_re[i_layer][i_sensor]->Fill((_triggerID - _startTrigerID)/_deltaTrigerID,temperature_now - temperature_ref);
            }    
        }
    }
    for (int i_layer = 0; i_layer < totalLayerNo; ++i_layer){
    	outfile->cd();
    	sprintf(char_tmp,"layer%d",i_layer);
    	outfile->mkdir(char_tmp);
    	outfile->cd(char_tmp);
    	for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor){
    		h_temp[i_layer][i_sensor]->Write();
    		h2_temp_time[i_layer][i_sensor]->Write();
    		h_temp_re[i_layer][i_sensor]->Write();
    		h2_temp_time_re[i_layer][i_sensor]->Write();
    		//cout<<i_layer<<" "<<i_sensor<<" "<<h_temp[i_layer][i_sensor]->GetMean()<<endl;
    		g_Sensor[i_layer]->SetPoint(i_sensor,i_sensor,h_temp[i_layer][i_sensor]->GetMean());
    		g_Layer[i_sensor]->SetPoint(i_layer,i_layer,h_temp[i_layer][i_sensor]->GetMean());
    	}
    }
    outfile->cd();
    sprintf(char_tmp,"g Layer");
    outfile->mkdir(char_tmp);
    outfile->cd(char_tmp);
    TCanvas *C_Layer=new TCanvas(char_tmp,char_tmp);
    TLegend *L_Layer=new TLegend(0.7,0.7,0.9,0.9);
    for (int i_sensor = 0; i_sensor < tempSensorNo; ++i_sensor){
    	g_Layer[i_sensor]->Write();
    	g_Layer[i_sensor]->SetLineColor(i_sensor+1);
    	g_Layer[i_sensor]->SetMarkerColor(i_sensor+1);
    	if (i_sensor==0) g_Layer[i_sensor]->Draw("A*sameL");
    	else g_Layer[i_sensor]->Draw("same*L");
    	sprintf(char_tmp,"sensor%d",i_sensor);
    	L_Layer->AddEntry(g_Layer[i_sensor],char_tmp,"L");
    }
    L_Layer->Draw();
    C_Layer->Write();
    outfile->cd();
    sprintf(char_tmp,"g sensor");
    outfile->mkdir(char_tmp);
    outfile->cd(char_tmp);
    TCanvas *C_Sensor=new TCanvas(char_tmp,char_tmp);
    TLegend *L_Sensor=new TLegend(0.7,0.7,0.9,0.9);
    for (int i_layer = 0; i_layer < totalLayerNo; ++i_layer){
    	g_Sensor[i_layer]->Write();
    	g_Sensor[i_layer]->SetLineColor(i_layer+1);
    	g_Sensor[i_layer]->SetMarkerColor(i_layer+1);
    	if (i_layer==0) g_Sensor[i_layer]->Draw("A*sameL");
    	else g_Sensor[i_layer]->Draw("same*L");
    	sprintf(char_tmp,"Layer%d",i_layer);
    	L_Sensor->AddEntry(g_Sensor[i_layer],char_tmp,"L");
    }
    L_Sensor->Draw();
    C_Sensor->Write();
    return 0;
}