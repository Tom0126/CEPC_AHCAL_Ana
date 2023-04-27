void plot()
{
    static const int totalLayerNo = 32;
    static const int tempSensorNo = 16;
    TGraph* gp[32][16];
    TGraph* gpLayer[32];
    for(int ii=0; ii!=totalLayerNo; ii++)
    {
        char hname[50];
        sprintf(hname,"Layer%d",ii);
        gpLayer[ii] = new TGraph();
        for(int jj=0; jj!=tempSensorNo; jj++)
        {
            sprintf(hname,"Layer%d_TempSensor%d",ii,jj);
            gp[ii][jj] = new TGraph();
        }}
    TCanvas* cc = new TCanvas("cc","",10,10,1800,600);

    ifstream filelist("./datalist.txt");
    if(!filelist.good()){cout<<"open datalist file failed !"<<endl; exit(0);}
    // *********************************************************************************
    int totalTriggerID=0;
    int _totalPoints=0;
    int _MaxTemp=30;
    int _MinTemp=12;
    int _startTrigerID=0; int _endTrigerID =0;
    const int nbins = 9;
    double binRange[nbins+1]={0};
    vector<int> startPoint;
    TLine* line[nbins];
    int totalFile=0;
    for(int ll=0; !filelist.eof(); ll++)
    //for(int ll=0; ll<nbins; ll++)
    {
        totalFile++;
        string tempname;
        filelist>>tempname;
        if(filelist.eof()) break;
        //if(ll!=15) continue;
        //tempname.insert(0,"/mnt2/ScECAL_CR/results/tempHist/");
        cout<<ll<<" : "<<tempname<<endl;
        vector<vector<double>>* tempLayer; //tempLayer->resize(totalLayerNo);
        for(int i=0; i<totalLayerNo; i++) tempLayer=0;
        double _triggerID;
        TFile* tempfile = new TFile(tempname.c_str());
        TTree* fNtuple;
        tempfile->GetObject("T_temp",fNtuple);
        if(!fNtuple){ cout<<" Get temperature tree object failed !!!"<<endl;return;}
        fNtuple ->SetBranchAddress("cycleID",&_triggerID);
        fNtuple ->SetBranchAddress("tempLayer",&tempLayer);

        TH1F* htemp[totalLayerNo];
        for(int i=0; i<totalLayerNo; i++){
            char hname[50];
            sprintf(hname,"layer_%d",i);
            htemp[i] = new TH1F(hname,hname,100,12,30);
        }
        int totalEntries = fNtuple->GetEntries();
        for(int entry=0; entry!=totalEntries; ++entry)
        {
            fNtuple->GetEntry(entry);
            if(entry==0) _startTrigerID = _triggerID;
            int deltaTrigerID = _startTrigerID - _endTrigerID;
            _triggerID -= deltaTrigerID;
            //if(tempLayer->at(0).size()==0) continue;
            for(int i=0; i<totalLayerNo; i++){
                if(tempLayer->at(i).size()!=0)
                    htemp[i]->Fill(tempLayer->at(i).at(0));
                }
            //cout<<entry<<" : "<<tempLayer->at(0).size()<<endl;
            for(unsigned i_p=0; i_p!=tempLayer->at(11).size(); i_p++){
                gp[0][i_p]->SetPoint(_totalPoints,(double)_triggerID,tempLayer->at(11).at(i_p));
            }
            for(unsigned i_p=0; i_p!=tempLayer->at(15).size(); i_p++){
                gp[1][i_p]->SetPoint(_totalPoints,(double)_triggerID,tempLayer->at(15).at(i_p));
            }
            _totalPoints++;
            if(entry==(totalEntries-1)) _endTrigerID = _triggerID;
        } 
        for(int i=0; i<totalLayerNo; i++){
            double temp = htemp[i]->GetMean();
            gpLayer[i]->SetPoint(ll,ll,temp);
        }
        startPoint.push_back(_endTrigerID);
        //line[ll] = new TLine((double)_endTrigerID,_MinTemp,(double)_endTrigerID,_MaxTemp);
        //line[ll]->SetLineWidth(3);
        //line[ll]->SetLineColor(4);
        //binRange[ll+1] = _endTrigerID;
    }
    // =============================================================================
    cc->cd();
    gStyle->SetOptStat(false);
    gPad->SetMargin(.08,.05,.13,.1);
    gPad->SetGridy();
    //TH2D* hh = new TH2D("hh","",nbins,binRange,10,_MinTemp,_MaxTemp);
    TH2D* hh = new TH2D("hh","",nbins,0,_endTrigerID,10,_MinTemp,_MaxTemp);
    hh->Draw();
    hh->GetYaxis()->SetTitle("Temperature [ {}^{o}C ]");
    hh->GetYaxis()->SetTitleOffset(.55);
    hh->GetYaxis()->CenterTitle();
    hh->GetYaxis()->SetTitleSize(0.04);
    hh->GetYaxis()->SetLabelSize(0.04);
    hh->GetXaxis()->SetTitle("Date");
    hh->GetXaxis()->SetTitleOffset(1.45);
    hh->GetXaxis()->CenterTitle();
    hh->GetXaxis()->SetTitleSize(0.04);
    hh->GetXaxis()->SetLabelSize(0.06);
    for(int bin=0; bin<nbins; bin++){
        //if(bin%2==1) continue; 
        //line[bin]->Draw("same");
        char hname[50];
        sprintf(hname,"%d",(bin+1)*10);
        //if(bin<30) sprintf(hname,"12/%d/2020",17+bin/2);
        //else sprintf(hname,"01/%d/2021",(bin-30)/2+1);
        hh->GetXaxis()->SetBinLabel(bin+1,hname);
    }
    //TGaxis* axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymin(), gPad->GetUxmax(), gPad->GetUymin(),
    //                            0,100,510,"+L");
    //axis->SetLineColor(2);
    //axis->Draw();
    TLegend* lg = new TLegend(.81,.7,.95,.895);
    gp[0][0]->SetMarkerColor(2);
    gp[0][0]->SetMarkerSize(1.5);
    gp[0][0]->SetMarkerStyle(20);
    gp[0][0]->SetFillColor(0);
    gp[0][0]->Draw("sameP");
    gp[0][1]->SetMarkerColor(3);
    gp[0][1]->SetMarkerSize(1.5);
    gp[0][1]->SetMarkerStyle(20);
    gp[0][1]->SetFillColor(0);
    gp[0][1]->Draw("sameP");
    gp[1][0]->SetMarkerColor(4);
    gp[1][0]->SetMarkerSize(1.5);
    gp[1][0]->SetMarkerStyle(20);
    gp[1][0]->SetFillColor(0);
    gp[1][0]->Draw("sameP");
    lg->AddEntry(gp[0][0],"Layer0_sensor0");
    lg->AddEntry(gp[0][1],"Layer0_sensor1");
    lg->AddEntry(gp[1][0],"Layer1_sensor0");
    lg->SetFillColor(0);
    lg->SetLineWidth(0);
    lg->Draw();

    TCanvas* c = new TCanvas("c","",10,10,1800,600);
    TH2D* h = new TH2D("h","",10,0,totalFile,10,_MinTemp,_MaxTemp);
    h->Draw();
    h->GetYaxis()->SetTitle("Temperature [ {}^{o}C ]");
    h->GetYaxis()->SetTitleOffset(.55);
    h->GetYaxis()->CenterTitle();
    h->GetYaxis()->SetTitleSize(0.04);
    h->GetYaxis()->SetLabelSize(0.04);
    h->GetXaxis()->SetTitle("Date");
    h->GetXaxis()->SetTitleOffset(1.25);
    h->GetXaxis()->CenterTitle();
    h->GetXaxis()->SetTitleSize(0.04);
    h->GetXaxis()->SetLabelSize(0.04);
   
    TLegend* lg2 = new TLegend(.9,.1,.97,.9);
    for(int i=0; i<totalLayerNo; i++){
        gpLayer[i]->SetMarkerColor(1+i);
        gpLayer[i]->SetMarkerSize(1.5);
        gpLayer[i]->SetMarkerStyle(20);
        gpLayer[i]->SetFillColor(0);
        gpLayer[i]->Draw("sameP");
        char lname[50];
        sprintf(lname,"Layer_%d",i);
        lg2->AddEntry(gpLayer[i],lname);
    }
    lg2->SetFillColor(0);
    lg2->SetLineWidth(0);
    lg2->Draw();
}
