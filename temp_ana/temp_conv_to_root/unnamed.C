void unnamed()
{
//=========Macro generated from canvas: Temperature HBU0/Temperature HBU0
//=========  (Mon Nov 29 17:26:20 2021) by ROOT version 6.14/04
   TCanvas *Temperature HBU0 = new TCanvas("Temperature HBU0", "Temperature HBU0",321,166,700,500);
   Temperature HBU0->SetHighLightColor(2);
   Temperature HBU0->Range(-1.5125,22.14447,13.6125,22.21483);
   Temperature HBU0->SetFillColor(0);
   Temperature HBU0->SetBorderMode(0);
   Temperature HBU0->SetBorderSize(2);
   Temperature HBU0->SetFrameBorderMode(0);
   Temperature HBU0->SetFrameBorderMode(0);
   
   Double_t g temp0_fx17[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp0_fy17[12] = {
   22.1562,
   22.1641,
   22.1641,
   22.1719,
   22.1641,
   22.1641,
   22.1641,
   22.1641,
   22.1953,
   22.1875,
   22.2031,
   22.1953};
   TGraph *graph = new TGraph(12,g temp0_fx17,g temp0_fy17);
   graph->SetName("g temp0");
   graph->SetTitle("g temp0");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp0117 = new TH1F("Graph_Graph_gsPtemp0117","g temp0",100,0,12.1);
   Graph_Graph_gsPtemp0117->SetMinimum(22.15151);
   Graph_Graph_gsPtemp0117->SetMaximum(22.20779);
   Graph_Graph_gsPtemp0117->SetDirectory(0);
   Graph_Graph_gsPtemp0117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp0117->SetLineColor(ci);
   Graph_Graph_gsPtemp0117->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp0117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp0117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp0117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp0117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp0117->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp0117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp0117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp0117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp0117->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp0117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp0117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp0117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp0117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp0117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp0117);
   
   graph->Draw("apl");
   
   Double_t g temp1_fx18[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp1_fy18[12] = {
   22.2109,
   22.2188,
   22.2188,
   22.2109,
   22.2031,
   22.2109,
   22.2109,
   22.2109,
   22.2188,
   22.25,
   22.2734,
   22.2578};
   graph = new TGraph(12,g temp1_fx18,g temp1_fy18);
   graph->SetName("g temp1");
   graph->SetTitle("g temp1");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp1218 = new TH1F("Graph_Graph_gsPtemp1218","g temp1",100,0,12.1);
   Graph_Graph_gsPtemp1218->SetMinimum(22.19607);
   Graph_Graph_gsPtemp1218->SetMaximum(22.28043);
   Graph_Graph_gsPtemp1218->SetDirectory(0);
   Graph_Graph_gsPtemp1218->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp1218->SetLineColor(ci);
   Graph_Graph_gsPtemp1218->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp1218->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp1218->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp1218->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp1218->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp1218->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp1218->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp1218->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp1218->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp1218->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp1218->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp1218->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp1218->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp1218->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp1218->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp1218);
   
   graph->Draw("pl");
   
   Double_t g temp2_fx19[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp2_fy19[12] = {
   22.6172,
   22.6094,
   22.6094,
   22.6172,
   22.6094,
   22.6094,
   22.625,
   22.625,
   22.6328,
   22.6562,
   22.6406,
   22.6562};
   graph = new TGraph(12,g temp2_fx19,g temp2_fy19);
   graph->SetName("g temp2");
   graph->SetTitle("g temp2");
   graph->SetFillStyle(1000);
   graph->SetLineColor(3);
   graph->SetMarkerColor(3);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp2319 = new TH1F("Graph_Graph_gsPtemp2319","g temp2",100,0,12.1);
   Graph_Graph_gsPtemp2319->SetMinimum(22.60472);
   Graph_Graph_gsPtemp2319->SetMaximum(22.66088);
   Graph_Graph_gsPtemp2319->SetDirectory(0);
   Graph_Graph_gsPtemp2319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp2319->SetLineColor(ci);
   Graph_Graph_gsPtemp2319->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp2319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp2319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp2319->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp2319->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp2319->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp2319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp2319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp2319->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp2319->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp2319->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp2319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp2319->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp2319->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp2319->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp2319);
   
   graph->Draw("pl");
   
   Double_t g temp3_fx20[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp3_fy20[12] = {
   22.3203,
   22.3125,
   22.3281,
   22.3359,
   22.3203,
   22.3203,
   22.3203,
   22.3281,
   22.3359,
   22.3438,
   22.3594,
   22.375};
   graph = new TGraph(12,g temp3_fx20,g temp3_fy20);
   graph->SetName("g temp3");
   graph->SetTitle("g temp3");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp3420 = new TH1F("Graph_Graph_gsPtemp3420","g temp3",100,0,12.1);
   Graph_Graph_gsPtemp3420->SetMinimum(22.30625);
   Graph_Graph_gsPtemp3420->SetMaximum(22.38125);
   Graph_Graph_gsPtemp3420->SetDirectory(0);
   Graph_Graph_gsPtemp3420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp3420->SetLineColor(ci);
   Graph_Graph_gsPtemp3420->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp3420->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp3420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp3420->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp3420->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp3420->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp3420->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp3420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp3420->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp3420->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp3420->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp3420->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp3420->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp3420->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp3420->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp3420);
   
   graph->Draw("pl");
   
   Double_t g temp4_fx21[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp4_fy21[12] = {
   23.1016,
   23.0938,
   23.1094,
   23.0938,
   23.1016,
   23.1094,
   23.1094,
   23.1016,
   23.1328,
   23.1406,
   23.1562,
   23.1562};
   graph = new TGraph(12,g temp4_fx21,g temp4_fy21);
   graph->SetName("g temp4");
   graph->SetTitle("g temp4");
   graph->SetFillStyle(1000);
   graph->SetLineColor(5);
   graph->SetMarkerColor(5);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp4521 = new TH1F("Graph_Graph_gsPtemp4521","g temp4",100,0,12.1);
   Graph_Graph_gsPtemp4521->SetMinimum(23.08756);
   Graph_Graph_gsPtemp4521->SetMaximum(23.16244);
   Graph_Graph_gsPtemp4521->SetDirectory(0);
   Graph_Graph_gsPtemp4521->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp4521->SetLineColor(ci);
   Graph_Graph_gsPtemp4521->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp4521->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp4521->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp4521->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp4521->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp4521->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp4521->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp4521->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp4521->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp4521->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp4521->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp4521->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp4521->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp4521->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp4521->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp4521);
   
   graph->Draw("pl");
   
   Double_t g temp5_fx22[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp5_fy22[12] = {
   22.4453,
   22.4531,
   22.4531,
   22.4531,
   22.4453,
   22.4609,
   22.4453,
   22.4609,
   22.4766,
   22.4922,
   22.5,
   22.4844};
   graph = new TGraph(12,g temp5_fx22,g temp5_fy22);
   graph->SetName("g temp5");
   graph->SetTitle("g temp5");
   graph->SetFillStyle(1000);
   graph->SetLineColor(6);
   graph->SetMarkerColor(6);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp5622 = new TH1F("Graph_Graph_gsPtemp5622","g temp5",100,0,12.1);
   Graph_Graph_gsPtemp5622->SetMinimum(22.43983);
   Graph_Graph_gsPtemp5622->SetMaximum(22.50547);
   Graph_Graph_gsPtemp5622->SetDirectory(0);
   Graph_Graph_gsPtemp5622->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp5622->SetLineColor(ci);
   Graph_Graph_gsPtemp5622->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp5622->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp5622->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp5622->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp5622->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp5622->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp5622->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp5622->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp5622->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp5622->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp5622->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp5622->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp5622->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp5622->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp5622->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp5622);
   
   graph->Draw("pl");
   
   Double_t g temp6_fx23[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp6_fy23[12] = {
   22.5469,
   22.5391,
   22.5391,
   22.5547,
   22.5469,
   22.5547,
   22.5547,
   22.5547,
   22.5625,
   22.5781,
   22.5859,
   22.6016};
   graph = new TGraph(12,g temp6_fx23,g temp6_fy23);
   graph->SetName("g temp6");
   graph->SetTitle("g temp6");
   graph->SetFillStyle(1000);
   graph->SetLineColor(7);
   graph->SetMarkerColor(7);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp6723 = new TH1F("Graph_Graph_gsPtemp6723","g temp6",100,0,12.1);
   Graph_Graph_gsPtemp6723->SetMinimum(22.53285);
   Graph_Graph_gsPtemp6723->SetMaximum(22.60785);
   Graph_Graph_gsPtemp6723->SetDirectory(0);
   Graph_Graph_gsPtemp6723->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp6723->SetLineColor(ci);
   Graph_Graph_gsPtemp6723->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp6723->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp6723->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp6723->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp6723->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp6723->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp6723->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp6723->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp6723->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp6723->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp6723->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp6723->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp6723->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp6723->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp6723->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp6723);
   
   graph->Draw("pl");
   
   Double_t g temp7_fx24[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp7_fy24[12] = {
   22.4531,
   22.4453,
   22.4453,
   22.4531,
   22.4609,
   22.4531,
   22.4609,
   22.4531,
   22.4766,
   22.4844,
   22.5,
   22.4844};
   graph = new TGraph(12,g temp7_fx24,g temp7_fy24);
   graph->SetName("g temp7");
   graph->SetTitle("g temp7");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp7824 = new TH1F("Graph_Graph_gsPtemp7824","g temp7",100,0,12.1);
   Graph_Graph_gsPtemp7824->SetMinimum(22.43983);
   Graph_Graph_gsPtemp7824->SetMaximum(22.50547);
   Graph_Graph_gsPtemp7824->SetDirectory(0);
   Graph_Graph_gsPtemp7824->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp7824->SetLineColor(ci);
   Graph_Graph_gsPtemp7824->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp7824->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp7824->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp7824->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp7824->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp7824->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp7824->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp7824->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp7824->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp7824->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp7824->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp7824->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp7824->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp7824->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp7824->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp7824);
   
   graph->Draw("pl");
   
   Double_t g temp8_fx25[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp8_fy25[12] = {
   23.2812,
   23.2812,
   23.2891,
   23.2656,
   23.2656,
   23.2812,
   23.2656,
   23.2734,
   23.3125,
   23.3125,
   23.3125,
   23.3203};
   graph = new TGraph(12,g temp8_fx25,g temp8_fy25);
   graph->SetName("g temp8");
   graph->SetTitle("g temp8");
   graph->SetFillStyle(1000);
   graph->SetLineColor(9);
   graph->SetMarkerColor(9);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp8925 = new TH1F("Graph_Graph_gsPtemp8925","g temp8",100,0,12.1);
   Graph_Graph_gsPtemp8925->SetMinimum(23.26013);
   Graph_Graph_gsPtemp8925->SetMaximum(23.32577);
   Graph_Graph_gsPtemp8925->SetDirectory(0);
   Graph_Graph_gsPtemp8925->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp8925->SetLineColor(ci);
   Graph_Graph_gsPtemp8925->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp8925->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp8925->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp8925->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp8925->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp8925->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp8925->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp8925->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp8925->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp8925->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp8925->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp8925->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp8925->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp8925->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp8925->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp8925);
   
   graph->Draw("pl");
   
   Double_t g temp9_fx26[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp9_fy26[12] = {
   22.5,
   22.4844,
   22.5,
   22.4922,
   22.5078,
   22.5078,
   22.5,
   22.5,
   22.5156,
   22.5234,
   22.5547,
   22.5703};
   graph = new TGraph(12,g temp9_fx26,g temp9_fy26);
   graph->SetName("g temp9");
   graph->SetTitle("g temp9");
   graph->SetFillStyle(1000);
   graph->SetLineColor(10);
   graph->SetMarkerColor(10);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp91026 = new TH1F("Graph_Graph_gsPtemp91026","g temp9",100,0,12.1);
   Graph_Graph_gsPtemp91026->SetMinimum(22.47581);
   Graph_Graph_gsPtemp91026->SetMaximum(22.57889);
   Graph_Graph_gsPtemp91026->SetDirectory(0);
   Graph_Graph_gsPtemp91026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp91026->SetLineColor(ci);
   Graph_Graph_gsPtemp91026->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp91026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp91026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp91026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp91026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp91026->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp91026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp91026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp91026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp91026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp91026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp91026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp91026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp91026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp91026->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp91026);
   
   graph->Draw("pl");
   
   Double_t g temp10_fx27[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp10_fy27[12] = {
   22.6172,
   22.625,
   22.6094,
   22.6172,
   22.6172,
   22.6328,
   22.625,
   22.6328,
   22.6328,
   22.6484,
   22.6562,
   22.6641};
   graph = new TGraph(12,g temp10_fx27,g temp10_fy27);
   graph->SetName("g temp10");
   graph->SetTitle("g temp10");
   graph->SetFillStyle(1000);
   graph->SetLineColor(11);
   graph->SetMarkerColor(11);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp101127 = new TH1F("Graph_Graph_gsPtemp101127","g temp10",100,0,12.1);
   Graph_Graph_gsPtemp101127->SetMinimum(22.60393);
   Graph_Graph_gsPtemp101127->SetMaximum(22.66957);
   Graph_Graph_gsPtemp101127->SetDirectory(0);
   Graph_Graph_gsPtemp101127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp101127->SetLineColor(ci);
   Graph_Graph_gsPtemp101127->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp101127->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp101127->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp101127->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp101127->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp101127->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp101127->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp101127->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp101127->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp101127->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp101127->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp101127->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp101127->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp101127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp101127->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp101127);
   
   graph->Draw("pl");
   
   Double_t g temp11_fx28[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp11_fy28[12] = {
   23.2969,
   23.3047,
   23.3125,
   23.2969,
   23.2891,
   23.3125,
   23.2969,
   23.3125,
   23.3203,
   23.3438,
   23.3672,
   23.3594};
   graph = new TGraph(12,g temp11_fx28,g temp11_fy28);
   graph->SetName("g temp11");
   graph->SetTitle("g temp11");
   graph->SetFillStyle(1000);
   graph->SetLineColor(12);
   graph->SetMarkerColor(12);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp111228 = new TH1F("Graph_Graph_gsPtemp111228","g temp11",100,0,12.1);
   Graph_Graph_gsPtemp111228->SetMinimum(23.28129);
   Graph_Graph_gsPtemp111228->SetMaximum(23.37501);
   Graph_Graph_gsPtemp111228->SetDirectory(0);
   Graph_Graph_gsPtemp111228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp111228->SetLineColor(ci);
   Graph_Graph_gsPtemp111228->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp111228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp111228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp111228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp111228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp111228->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp111228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp111228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp111228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp111228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp111228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp111228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp111228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp111228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp111228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp111228);
   
   graph->Draw("pl");
   
   Double_t g temp12_fx29[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp12_fy29[12] = {
   23.0625,
   23.0547,
   23.0547,
   23.0391,
   23.0391,
   23.0391,
   23.0391,
   23.0469,
   23.0625,
   23.0703,
   23.0859,
   23.0859};
   graph = new TGraph(12,g temp12_fx29,g temp12_fy29);
   graph->SetName("g temp12");
   graph->SetTitle("g temp12");
   graph->SetFillStyle(1000);
   graph->SetLineColor(13);
   graph->SetMarkerColor(13);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp121329 = new TH1F("Graph_Graph_gsPtemp121329","g temp12",100,0,12.1);
   Graph_Graph_gsPtemp121329->SetMinimum(23.03442);
   Graph_Graph_gsPtemp121329->SetMaximum(23.09058);
   Graph_Graph_gsPtemp121329->SetDirectory(0);
   Graph_Graph_gsPtemp121329->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp121329->SetLineColor(ci);
   Graph_Graph_gsPtemp121329->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp121329->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp121329->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp121329->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp121329->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp121329->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp121329->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp121329->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp121329->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp121329->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp121329->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp121329->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp121329->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp121329->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp121329->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp121329);
   
   graph->Draw("pl");
   
   Double_t g temp13_fx30[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp13_fy30[12] = {
   22.7422,
   22.75,
   22.75,
   22.7422,
   22.7578,
   22.75,
   22.7578,
   22.75,
   22.7734,
   22.7734,
   22.7969,
   22.7891};
   graph = new TGraph(12,g temp13_fx30,g temp13_fy30);
   graph->SetName("g temp13");
   graph->SetTitle("g temp13");
   graph->SetFillStyle(1000);
   graph->SetLineColor(14);
   graph->SetMarkerColor(14);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp131430 = new TH1F("Graph_Graph_gsPtemp131430","g temp13",100,0,12.1);
   Graph_Graph_gsPtemp131430->SetMinimum(22.73673);
   Graph_Graph_gsPtemp131430->SetMaximum(22.80237);
   Graph_Graph_gsPtemp131430->SetDirectory(0);
   Graph_Graph_gsPtemp131430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp131430->SetLineColor(ci);
   Graph_Graph_gsPtemp131430->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp131430->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp131430->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp131430->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp131430->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp131430->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp131430->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp131430->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp131430->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp131430->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp131430->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp131430->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp131430->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp131430->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp131430->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp131430);
   
   graph->Draw("pl");
   
   Double_t g temp14_fx31[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp14_fy31[12] = {
   22.8594,
   22.8516,
   22.8594,
   22.8594,
   22.8672,
   22.8594,
   22.8672,
   22.8594,
   22.8672,
   22.8828,
   22.9141,
   22.8984};
   graph = new TGraph(12,g temp14_fx31,g temp14_fy31);
   graph->SetName("g temp14");
   graph->SetTitle("g temp14");
   graph->SetFillStyle(1000);
   graph->SetLineColor(15);
   graph->SetMarkerColor(15);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp141531 = new TH1F("Graph_Graph_gsPtemp141531","g temp14",100,0,12.1);
   Graph_Graph_gsPtemp141531->SetMinimum(22.84535);
   Graph_Graph_gsPtemp141531->SetMaximum(22.92035);
   Graph_Graph_gsPtemp141531->SetDirectory(0);
   Graph_Graph_gsPtemp141531->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp141531->SetLineColor(ci);
   Graph_Graph_gsPtemp141531->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp141531->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp141531->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp141531->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp141531->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp141531->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp141531->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp141531->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp141531->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp141531->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp141531->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp141531->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp141531->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp141531->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp141531->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp141531);
   
   graph->Draw("pl");
   
   Double_t g temp15_fx32[12] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t g temp15_fy32[12] = {
   22.7344,
   22.7578,
   22.7344,
   22.75,
   22.7422,
   22.7578,
   22.75,
   22.75,
   22.7578,
   22.7891,
   22.7891,
   22.8047};
   graph = new TGraph(12,g temp15_fx32,g temp15_fy32);
   graph->SetName("g temp15");
   graph->SetTitle("g temp15");
   graph->SetFillStyle(1000);
   graph->SetLineColor(16);
   graph->SetMarkerColor(16);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph_gsPtemp151632 = new TH1F("Graph_Graph_gsPtemp151632","g temp15",100,0,12.1);
   Graph_Graph_gsPtemp151632->SetMinimum(22.72737);
   Graph_Graph_gsPtemp151632->SetMaximum(22.81173);
   Graph_Graph_gsPtemp151632->SetDirectory(0);
   Graph_Graph_gsPtemp151632->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gsPtemp151632->SetLineColor(ci);
   Graph_Graph_gsPtemp151632->GetXaxis()->SetTitle("Data No");
   Graph_Graph_gsPtemp151632->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp151632->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp151632->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp151632->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp151632->GetYaxis()->SetTitle("Temperature");
   Graph_Graph_gsPtemp151632->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp151632->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp151632->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp151632->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_gsPtemp151632->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gsPtemp151632->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gsPtemp151632->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gsPtemp151632->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gsPtemp151632->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_g temp151632);
   
   graph->Draw("pl");
   
   TLegend *leg = new TLegend(0.8997135,0.1012658,0.9899713,0.9008439,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("g temp0","channel0","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp1","channel1","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp2","channel2","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp3","channel3","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp4","channel4","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp5","channel5","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp6","channel6","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp7","channel7","L");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp8","channel8","L");
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp9","channel9","L");
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp10","channel10","L");
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp11","channel11","L");
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp12","channel12","L");
   entry->SetLineColor(13);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp13","channel13","L");
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp14","channel14","L");
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("g temp15","channel15","L");
   entry->SetLineColor(16);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4240974,0.9342405,0.5759026,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("g temp0");
   pt->Draw();
   Temperature HBU0->Modified();
   Temperature HBU0->cd();
   Temperature HBU0->SetSelected(Temperature HBU0);
}
