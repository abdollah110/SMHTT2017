# Step 1 (Running FSA Ntuple)

  here is the code:  https://github.com/uwcms/FinalStateAnalysis/tree/miniAOD_8_0_25/NtupleTools/test
  
  here is my code: /afs/hep.wisc.edu/home/abdollah/Codes/FSA2016/CMSSW_8_0_26_patch1/src/FinalStateAnalysis/NtupleTools/test
  ### 1-a) run locally


 cmsRun make_ntuples_cfg.py channels="mt" isMC=0 isEmbedded=1 skipMET=1 maxEvents=100 paramFile=../python/parameters/ztt.py runningLocal=1 fullJES=0 inputFiles=file:root://cms-xrd-global.cern.ch//store/user/jbechtel/MuTau_data_2016_CMSSW826_freiburg/TauEmbedding_MuTau_data_2016_CMSSW826_Run2016B/92/merged_2191.root


   ### 1-b) submit condor
   
   To submit via condor



# Step 2 (Skimming FSA ntuples)


  ### 2-a) run locally




   ### 2-b) submit condor

