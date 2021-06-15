void ChainRunJob2p9to3p0()
{
TChain chain("ana/hgc");
chain.Add("/data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/1TeV/singleeE1000n500_eta2p9to3p0_ntuple_file1.root");
chain.Add("/data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/1TeV/singleeE1000n500_eta2p9to3p0_ntuple_file2.root");
chain.Add("/data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/1TeV/singleeE1000n500_eta2p9to3p0_ntuple_file3.root");
chain.Add("/data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/1TeV/singleeE1000n500_eta2p9to3p0_ntuple_file4.root");





chain.Process("My2p9to3p0sum.C");
}
