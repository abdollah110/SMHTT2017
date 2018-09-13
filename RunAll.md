# Step 1 (Running FSA Ntuple)




  https://github.com/uwcms/FinalStateAnalysis/tree/miniAOD_8_0_25/NtupleTools/test


cmsRun make_ntuples_cfg.py channels="mt" isMC=0 isEmbedded=1 skipMET=1 maxEvents=100 paramFile=../python/parameters/ztt.py runningLocal=1 fullJES=0 inputFiles=file:root://cms-xrd-global.cern.ch//store/user/jbechtel/MuTau_data_2016_CMSSW826_freiburg/TauEmbedding_MuTau_data_2016_CMSSW826_Run2016B/92/merged_2191.root
