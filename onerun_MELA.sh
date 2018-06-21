./Make.sh FinalSelection2D_relaxedFR.cc

./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_B_svFit.root files_nominal/data_B.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_C_svFit.root files_nominal/data_C.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_D_svFit.root files_nominal/data_D.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_E_svFit.root files_nominal/data_E.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_F_svFit.root files_nominal/data_F.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_G_svFit.root files_nominal/data_G.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_H_v2_svFit.root files_nominal/data_H_v2.root data_obs data_obs 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/data_H_v3_svFit.root files_nominal/data_H_v3.root data_obs data_obs 0
hadd -f files_nominal/data.root files_nominal/data_B.root files_nominal/data_C.root files_nominal/data_D.root files_nominal/data_E.root files_nominal/data_F.root files_nominal/data_G.root files_nominal/data_H_v2.root files_nominal/data_H_v3.root

./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/VBF125_svFit.root files_nominal/VBF125.root VBF125 VBF125 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/ggH125_svFit.root files_nominal/ggH125.root ggH125 ggH125 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/WplusH125_svFit.root files_nominal/WplusH125.root WplusH125 WplusH125 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/WminusH125_svFit.root files_nominal/WminusH125.root WminusH125 WminusH125 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/ZH125_svFit.root files_nominal/ZH125.root ZH125 ZH125 0
python Creat_WH.py
python Creat_sig.py 


./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY_ext1_svFit.root files_nominal/ZTT_ext1.root ZTT ZTT 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY_ext2_svFit.root files_nominal/ZTT_ext2.root ZTT ZTT 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY1_svFit.root files_nominal/ZTT1.root ZTT ZTT 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY2_svFit.root files_nominal/ZTT2.root ZTT ZTT 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY3_svFit.root files_nominal/ZTT3.root ZTT ZTT 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY4_svFit.root files_nominal/ZTT4.root ZTT ZTT 0
hadd -f files_nominal/ZTT.root files_nominal/ZTT_ext1.root files_nominal/ZTT_ext2.root files_nominal/ZTT1.root files_nominal/ZTT2.root files_nominal/ZTT3.root files_nominal/ZTT4.root 

./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY_ext1_svFit.root files_nominal/ZL_ext1.root ZL ZL 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY_ext2_svFit.root files_nominal/ZL_ext2.root ZL ZL 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY1_svFit.root files_nominal/ZL1.root ZL ZL 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY2_svFit.root files_nominal/ZL2.root ZL ZL 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY3_svFit.root files_nominal/ZL3.root ZL ZL 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY4_svFit.root files_nominal/ZL4.root ZL ZL 0
hadd -f files_nominal/ZL.root files_nominal/ZL_ext1.root files_nominal/ZL_ext2.root files_nominal/ZL1.root files_nominal/ZL2.root files_nominal/ZL3.root files_nominal/ZL4.root 

./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY_ext1_svFit.root files_nominal/ZJ_ext1.root ZJ ZJ 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY_ext2_svFit.root files_nominal/ZJ_ext2.root ZJ ZJ 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY1_svFit.root files_nominal/ZJ1.root ZJ ZJ 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY2_svFit.root files_nominal/ZJ2.root ZJ ZJ 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY3_svFit.root files_nominal/ZJ3.root ZJ ZJ 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/DY4_svFit.root files_nominal/ZJ4.root ZJ ZJ 0
hadd -f files_nominal/ZJ.root files_nominal/ZJ_ext1.root files_nominal/ZJ_ext2.root files_nominal/ZJ1.root files_nominal/ZJ2.root files_nominal/ZJ3.root files_nominal/ZJ4.root 

./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/TT_svFit.root files_nominal/TT.root TT TT 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/VV_svFit.root files_nominal/VV.root VV2L2Nu VV 0

./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W_svFit.root files_nominal/W.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W_ext2_svFit.root files_nominal/W_ext2.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W1_svFit.root files_nominal/W1.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W2_svFit.root files_nominal/W2.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W2_ext1_svFit.root files_nominal/W2_ext1.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W3_svFit.root files_nominal/W3.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W3_ext1_svFit.root files_nominal/W3_ext1.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W4_svFit.root files_nominal/W4.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W4_ext1_svFit.root files_nominal/W4_ext1.root W W 0
./FinalSelection2D_relaxedFR.exe myntuples/mela_tt/W4_ext2_svFit.root files_nominal/W4_ext2.root W W 0
hadd -f files_nominal/WJets.root files_nominal/W.root files_nominal/W_ext2.root files_nominal/W1.root files_nominal/W2.root files_nominal/W2_ext1.root files_nominal/W3.root files_nominal/W3_ext1.root files_nominal/W4.root files_nominal/W4_ext1.root files_nominal/W4_ext2.root

python Creat_QCD.py

hadd -f final_nominal.root files_nominal/SMH.root files_nominal/ZTT.root files_nominal/ZJ.root files_nominal/ZL.root files_nominal/TT.root files_nominal/VV.root files_nominal/data.root files_nominal/WJets.root files_nominal/QCD.root files_nominal/VBF125.root files_nominal/ggH125.root files_nominal/WH125.root files_nominal/ZH125.root
#hadd -f final_nominal.root files_nominal/SMH.root files_nominal/ZTT.root files_nominal/ZJ.root files_nominal/ZL.root files_nominal/TT.root files_nominal/VV.root files_nominal/WJets.root files_nominal/VBF125.root files_nominal/ggH125.root files_nominal/WH125.root files_nominal/ZH125.root

#python plot_tt_category.py

