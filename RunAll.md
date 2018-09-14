# Step 1 (Running FSA Ntuple)

  here is the code:  https://github.com/uwcms/FinalStateAnalysis/tree/miniAOD_8_0_25/NtupleTools/test
  
  here is my code: /afs/hep.wisc.edu/home/abdollah/Codes/FSA2016/CMSSW_8_0_26_patch1/src/FinalStateAnalysis/NtupleTools/test
  ### 1-a) run locally


 cmsRun make_ntuples_cfg.py channels="mt" isMC=0 isEmbedded=1 skipMET=1 maxEvents=100 paramFile=../python/parameters/ztt.py runningLocal=1 fullJES=0 inputFiles=file:root://cms-xrd-global.cern.ch//store/user/jbechtel/MuTau_data_2016_CMSSW826_freiburg/TauEmbedding_MuTau_data_2016_CMSSW826_Run2016B/92/merged_2191.root


   ### 1-b) submit condor
   
   To submit via condor I have prepared a script which run on the FSA ntuples and for each processes (i.e. 2016F Etau dataset), bunch them in group of 100 jobs



# Step 2 (Skimming FSA ntuples)

  
  here is my code in /afs:  /afs/hep.wisc.edu/home/abdollah/Codes/Embed/CMSSW_8_0_26_patch1/src/SMHTT2016/mt/Skim
  and the code in nfs_scrach=  
  
  ### 2-a) run locally

  ./Make skim_mt.cc
  ./skim_mt.exe mc muB_0_422.root /hdfs/store/user/abdollah/MiniAOD_Test/EmbeddingRun2016B-v2/make_ntuples_cfg-merged_880.root 0


   ### 2-b) submit condor





# Step 3 (Adding SVFit)

  here is the code: https://github.com/tmitchel/SubmitSVFit.git
  
  git checkout updateLT
  
  [also comment a line in the destructor of the ]
  
  here is my code: /nfs_scratch/abdollah/SVFit/CMSSW_9_4_4/src

  ### 3-a) run locally
  
   cd /nfs_scratch/abdollah/SVFit/CMSSW_9_4_4/ROOT/bin
   SVFitStandAloneFSATauDM inputFile=~/testcoolInputFile.root newFile=tmpOut.root doES=1 isWJets=0 metType=-1 
   
   

  ### 3-b) submit condor


