// macro for reading back and putting in form the histograms created by TestSuite.cc
{
TFile f("histos.root");
int bcr, bcrstart=-5,bcrend=3;

char name[50] ;

 for (bcr=bcrstart;bcr<=bcrend;bcr++)
   {
     //SimTracks
     sprintf(name,"Tracks_bcr_%d",bcr);
     TH1I *trhist = (TH1I*)f.Get(name);
     sprintf(name,"SignalTracks_bcr_%d",bcr);
     TH1I *trhistsig = (TH1I*)f.Get(name);
     sprintf(name,"VtxPointers_%d",bcr);
     TH1I *trindhist = (TH1I*)f.Get(name);
     sprintf(name,"VtxPointers_signal_%d",bcr);
     TH1I *trindhistsig = (TH1I*)f.Get(name);
     std::cout <<std::endl;
     std::cout <<"[OVAL] Mean of track pileup histo (bcrossings) "<<trhist->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of track signal histo (bcrossings) "<<trhistsig->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of track pileup histo (vtx indices) "<<trindhist->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of track signal histo (vtx indices) "<<trindhistsig->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;

     //SimVertices
     sprintf(name,"Vertices_bcr_%d",bcr);
     TH1I *vtxhist = (TH1I*)f.Get(name);
     sprintf(name,"SignalVertices_bcr_%d",bcr);
     TH1I *vtxhistsig = (TH1I*)f.Get(name);
     sprintf(name,"TrackPointers_%d",bcr);
     TH1I *vtxindhist = (TH1I*)f.Get(name);
     sprintf(name,"TrackPointers_signal_%d",bcr);
     TH1I *vtxindhistsig = (TH1I*)f.Get(name);

     std::cout <<std::endl;
     std::cout <<"[OVAL] Mean of vertex pileup histo (bcrossings) "<<vtxhist->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of vertex signal histo (bcrossings) "<<vtxhistsig->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of vertex pileup histo (track indices) "<<vtxindhist->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of vertex signal histo (track indices) "<<vtxindhistsig->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;

     // Tracker
     sprintf(name,"TrackerHit_Tof_bcr_%d",bcr);
     TH1I *tofhist = (TH1I*)f.Get(name);
     sprintf(name,"SignalTrackerHit_Tof_bcr_%d",bcr);
     TH1I * tofhist_sig = (TH1I*)f.Get(name);
     std::cout <<std::endl;
     std::cout <<"[OVAL] Mean of tracker pileup histo (ToF) "<<tofhist->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of tracker signal histo (ToF) "<<tofhist_sig->GetMean()<<" for bunchcrossing "<<bcr<<std::endl;

     //Ecal
     sprintf(name,"EcalEBHit_Tof_bcr_%d",bcr);
     TH1I * tofecalhist = (TH1I*)f.Get(name);
     sprintf(name,"SignalEcalEBHit_Tof_bcr_%d",bcr);
     TH1I * tofecalhist_sig = (TH1I*)f.Get(name);
     std::cout <<std::endl;
     std::cout <<"[OVAL] Mean of Ecal pileup histo (ToF) "<<tofecalhist->GetMean()<<", sigma: "<<tofecalhist->GetRMS()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of Ecal signal histo (ToF) "<<tofecalhist_sig->GetMean()<<", sigma: "<<tofecalhist_sig->GetRMS()<<" for bunchcrossing "<<bcr<<std::endl;

     //Hcal
     sprintf(name,"HcalHit_Tof_bcr_%d",bcr);
     TH1I * tofhcalhist =  (TH1I*)f.Get(name);
     sprintf(name,"SignalHcalHit_Tof_bcr_%d",bcr);
     TH1I * tofhcalhist_sig = (TH1I*)f.Get(name);
     std::cout <<std::endl;
     std::cout <<"[OVAL] Mean of Hcal pileup histo (ToF) "<<tofhcalhist->GetMean()<<", sigma: "<<tofhcalhist->GetRMS()<<" for bunchcrossing "<<bcr<<std::endl;
     std::cout <<"[OVAL] Mean of Hcal signal histo (ToF) "<<tofhcalhist_sig->GetMean()<<", sigma: "<<tofhcalhist_sig->GetRMS()<<" for bunchcrossing "<<bcr<<std::endl;
   }
}
