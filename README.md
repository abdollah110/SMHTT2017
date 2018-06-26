# SMHTT2017


The main code where the analysis, categorization, .. are done is FinalSelection2D_relaxedFR.cc

This code is complied using the following command:

./Make.sh FinalSelection2D_relaxedFR.cc   

and the executable is called 'FinalSelection2D_relaxedFR.exe'. If there is any error, no executable will be produced.


To run the nominal and shape uncertainties, one should edit the following python script:

python   onerun_SCRIPT.py

In this script one should provide the location of the input files and the directory for output files  [note: these can be provided as the argument as will. This is in TODO list]

Once the above script is run and .txt file is generated. Please check the contect of the 'OneRun.txt' before running that.

# running the .txt script

    source  OneRun.txt


The Final Grand Hadded file here is called 'htt_tt.inputs-sm-13TeV-2D.root'. This root file will be the input the limit calculation business! You need to copy it in the the '/shapes/USCMS/' directory in the combine Harvester


# Link to the CombineHarvester twiki:
   [CombineHarvester twiki](http://cms-analysis.github.io/CombineHarvester/index.html)


# Checkout the CombineHarvester  [You need to do it once]

    export SCRAM_ARCH=slc6_amd64_gcc530

    scram project CMSSW CMSSW_8_1_0

    cd CMSSW_8_1_0/src

    cmsenv

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    
    // IMPORTANT: Checkout the recommended tag on the link above  (for the time being the master is fine)

    git clone https://github.com/cms-analysis/CombineHarvester.git CombineHarvester

    scram b -j 8


    cd CombineHarvester


# Just clone 2016 to make 2017

    cp -r  HTTSM2016 HTTSM2017


# put the new .cc file in the /src/ directory

    wget https://raw.githubusercontent.com/abdollah110/SMHTT2017/master/LIMIT_Calculation/src/HttSystematics_SMRun2.cc

    mv HttSystematics_SMRun2.cc   src/

# put the new .cpp file and .xml in the /bin/ directory

    wget https://raw.githubusercontent.com/abdollah110/SMHTT2017/master/LIMIT_Calculation/bin/MorphingSM2017.cpp

    mv  MorphingSM2017.cpp bin/ 


    wget https://raw.githubusercontent.com/abdollah110/SMHTT2017/master/LIMIT_Calculation/bin/BuildFile.xml 

    mv  BuildFile.xml   bin/


# This small script is needed to add autoMCStats  at the end of datacard:

    wget https://raw.githubusercontent.com/abdollah110/SMHTT2017/master/LIMIT_Calculation/bin/_do_mc_Stat.sh
    
    mv  _do_mc_Stat.sh   bin/



# craete a shape directory 

    mkdir -p shapes/USCMS

and copy the 'htt_tt.inputs-sm-13TeV-2D.root' file from last step in the shapes/USCMS directory


# compile

    scram b -j 8

(Note: whenever you change .cc or .cpp or .cml file you need to compile)

# creating datacards

    cd bin 

MorphingSM2017 --output_folder="TestJune26" --postfix="-2D" --control_region=0 --manual_rebin=false --real_data=false --mm_fit=false --ttbar_fit=false


# Now you have to add the autoMCStats at the end of the each datacards

    sh _do_mc_Stat.sh  output/TestJune26

# Building the workspaces:

    cd output/TestJune26

    combineTool.py -M T2W -i {cmb,tt}/* -o workspace.root --parallel 18

    (note:  cmb is just the combbination of all final state. For the time being it will be identical to tt)


# Calculating limits:
    combineTool.py -M Asymptotic -d */*/workspace.root --there -n .limit --parallel 18


# Collect the output:

    combineTool.py -M CollectLimits */*/*.limit.* --use-dirs -o limits.json


# Plotting the limit: [not for now. It requires several H mass points]


    python ../../../plotLimits_SM2.py limits_{cmb,em,et,mt,tt}.json:exp0 --auto-style --cms-sub Preliminary  -o lim_compare
    python ../../../plotLimits_SM2.py limits_cmb.json  --auto-style --cms-sub Preliminary     -o lim_expected_cmb
    python ../../../plotLimits_SM2.py limits_tt.json  --auto-style --cms-sub Preliminary     -o lim_expected_tt
    python ../../../plotLimits_SM2.py limits_mt.json  --auto-style --cms-sub Preliminary     -o lim_expected_mt
    python ../../../plotLimits_SM2.py limits_et.json  --auto-style --cms-sub Preliminary     -o lim_expected_et
    python ../../../plotLimits_SM2.py limits_em.json  --auto-style --cms-sub Preliminary     -o lim_expected_em


# run MaxLikelihoodFit

    combine -M MaxLikelihoodFit cmb/125/workspace.root --robustFit=1 --minimizerAlgoForMinos=Minuit2,Migrad  --rMin 0.5 --rMax 1.5 



# making the pulls

    python ../../../../../HiggsAnalysis/CombinedLimit/test/diffNuisances.py  mlfit.root -A -a --stol 0.99 --stol 0.99 --vtol 99. --vtol2 99. -f text mlfit.root > mlfit.txt


# postfit plots

    PostFitShapes -o postfit_shapes.root -m 125 -f mlfit.root:fit_s --postfit --sampling --print -d cmb/125/combined.txt.cmb



# Computing the expected significance:

    [PreFit Asimov]combine -M ProfileLikelihood --significance cmb/125/workspace.root -t -1 --expectSignal=1

    [PostFit Asimov]combine -M ProfileLikelihood --significance cmb/125/workspace.root -t -1 --toysFrequentist --expectSignal 1

    [PostFit]combine -M ProfileLikelihood --significance cmb/125/workspace.root 


# Descripton of running the likelihood 
    cp ../../../scripts/plot1DScan.py .

    cp ../../../scripts/texName.json .

    combine -M MultiDimFit -m 125 --algo grid --points 101 --rMin 0 --rMax 10 cmb/125/workspace.root -n nominal -t -1 --expectSignal

    combine -M MultiDimFit --algo none --rMin 0 --rMax 10 cmb/125/workspace.root -m 125 -n bestfit -t -1 --expectSignal --saveWorkspace

    combine -M MultiDimFit --algo grid --points 101 --rMin 0 --rMax 10 -m 125 -n stat higgsCombinebestfit.MultiDimFit.mH125.root -t -1 --expectSignal --snapshotName MultiDimFit --freezeParameters all --fastScan

    python ./plot1DScan.py --main higgsCombinenominal.MultiDimFit.mH125.root --POI r -o cms_output_freeze_All --others 'higgsCombinestat.MultiDimFit.mH125.root:Freeze all:2' --breakdown syst,stat












