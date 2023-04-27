#ifndef TreeRead_h_
#define TreeRead_h_

#include<TROOT.h>
#include<TChain.h>
#include<TFile.h>
#include<TH1.h>
#include<TF1.h>
#include<TH2.h>
#include<TGraph.h>
#include<TCanvas.h>
#include<TLegend.h>
#include<TObjArray.h>
#include<vector>


    static const int Layer_No = 40;
    static const int chipNo = 9;
    static const int channelNo = 36;
    static const int memoryNo = 2;
    static const int tempSensorNo = 48;
using namespace std;

class Temperature
{
    public:

    private:
    vector<double>* _temp;
    double _triggerID;

    TTree* fNtuple;
    double temp_X[16]={-51.97602,96.5327,-29.61132,93.03004,96.77654,-30.99054,-15.0114,95.45574,-52.72532,101.0666,-13.48994,108.36148,-16.8122,			60.30468,-46.79696,95.96628};
    double temp_Y[16]={-305.95316,-312.0898,-263.761982,-263.5758,-153.95956,-151.003,238.94034,250.63196,131.10718,130.3401,35.30092,36.40074,
		       -43.93184,-44.92498,358.32542,357.23322};
    double HBU_X=241.8;
    double HBU_Y=786.29;
    public:
    void  Init();//定义内联函数，也可以在实现的时候加上inline关键字，都只是一个提示
    int ReadDat(string temp_name,string hist_name);
    //int TempAna(string data_list,string temp_ref,string output_path);
    int TempAna(string input_file,string output_path);
    void findLayerID(string dataname);
    int LayerID=100;
    vector<int> realLayerID;

    protected:
    TF1* chargefun;
    TF1* timefun;
    TFile *outfile;
    TTree *tree;
    //void Clear();

    // Memory Cells Level
  };

#endif
