
{
 // also attempt at fiddling with stats box
 gStyle->SetOptFit(1111);
 
 TFile *f = TFile::Open("histo2930eres.root");
 //TFile *f=new TFile("histo.root"); 
 //f->cd();
 TH1F *h=(TH1F*)f->Get("h1");
 peak=h->GetMean() ;
 sig=h->GetStdDev();
 cout << peak << "  " << sig << endl;
 h->Fit("gaus", "","",975,1025);
 h->SetFillColorAlpha(38, 1);
 h->SetXTitle("Energy (Gev)");
 h->SetYTitle("Number of Entries / 5 GeV");
 TPaveStats *ptstats = new TPaveStats(0.8,0.7,0.98,0.935,"brNDC");
    ptstats->SetName("stats");
    ptstats->SetBorderSize(1);
    ptstats->SetFillColor(0);
    ptstats->SetTextAlign(12);
    ptstats->SetTextFont(42);
    ptstats->SetTextSize(0.02736842);
    ptstats->SetOptStat(1110);
    ptstats->SetOptFit(1111);
    ptstats->Draw();
    h->GetListOfFunctions()->Add(ptstats);
    ptstats->SetParent(h);


// {
// // a super simplistic macro to read in a histo, and fit gaus with fit range set to some random range given the original histo mean and rms, 
// // also attempt at fiddling with stats box
// gStyle->SetOptFit(1111);
// TFile *f = TFile::Open("histo2930eres.root");
// //TFile *f=new TFile("histo.root"); 
// //f->cd();
// TH1F *h=(TH1F*)f->Get("h1");
// peak=h->GetMean();
// sig=h->GetStdDev();
// cout << peak << "  " << sig << endl;
// h->Fit("gaus", "","",peak-2.*sig,peak+3.0*sig);
// TPaveStats *ptstats = new TPaveStats(0.62,0.535,0.98,0.935,"brNDC");
//    ptstats->SetName("stats");
//    ptstats->SetBorderSize(1);
//    ptstats->SetFillColor(0);
//    ptstats->SetTextAlign(12);
//    ptstats->SetTextFont(42);
//    ptstats->SetTextSize(0.02736842);
//    ptstats->SetOptStat(1110);
//    ptstats->SetOptFit(1111);
//    ptstats->Draw();
//    h->GetListOfFunctions()->Add(ptstats);
//    ptstats->SetParent(h);
// }
