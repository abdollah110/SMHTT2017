./Make.sh FinalSelection2D_relaxedFR.cc

#./FinalSelection2D_relaxedFR.exe myntuples/April15/data_B.root files_nominal_Sys_1/data_B.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_C.root files_nominal_Sys_1/data_C.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_D.root files_nominal_Sys_1/data_D.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_E.root files_nominal_Sys_1/data_E.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_F.root files_nominal_Sys_1/data_F.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_G.root files_nominal_Sys_1/data_G.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_H_v2.root files_nominal_Sys_1/data_H_v2.root data_obs data_obs 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/data_H_v3.root files_nominal_Sys_1/data_H_v3.root data_obs data_obs 1
hadd -f files_nominal_Sys_1/data.root files_nominal_Sys_1/data_B.root files_nominal_Sys_1/data_C.root files_nominal_Sys_1/data_D.root files_nominal_Sys_1/data_E.root files_nominal_Sys_1/data_F.root files_nominal_Sys_1/data_G.root files_nominal_Sys_1/data_H_v2.root files_nominal_Sys_1/data_H_v3.root

#./FinalSelection2D_relaxedFR.exe myntuples/April15/ggH125.root files_nominal_Sys_1/SMH.root ggH125 SMH 1
#./FinalSelection2D_relaxedFR.exe myntuples/April22_svfit/VBF125.root files_nominal_Sys_1/VBF125.root VBF125 VBF125 1
#./FinalSelection2D_relaxedFR.exe myntuples/April22_svfit/ggH125.root files_nominal_Sys_1/ggH125.root ggH125 ggH125 1
#./FinalSelection2D_relaxedFR.exe myntuples/April22_svfit/WplusH125.root files_nominal_Sys_1/WplusH125.root WplusH125 WplusH125 1
#./FinalSelection2D_relaxedFR.exe myntuples/April22_svfit/WminusH125.root files_nominal_Sys_1/WminusH125.root WminusH125 WminusH125 1
#./FinalSelection2D_relaxedFR.exe myntuples/April22_svfit/ZH125.root files_nominal_Sys_1/ZH125.root ZH125 ZH125 1

./FinalSelection2D_relaxedFR.exe myntuples/April15/VBF125.root files_nominal_Sys_1/VBF125.root VBF125 VBF125 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/ggH125.root files_nominal_Sys_1/ggH125.root ggH125 ggH125 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/WplusH125.root files_nominal_Sys_1/WplusH125.root WplusH125 WplusH125 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/WminusH125.root files_nominal_Sys_1/WminusH125.root WminusH125 WminusH125 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/ZH125.root files_nominal_Sys_1/ZH125.root ZH125 ZH125 1
python Creat_WH.py
python Creat_sig.py 


./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext1.root files_nominal_Sys_1/ZTT_ext1.root ZTT ZTT 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext2.root files_nominal_Sys_1/ZTT_ext2.root ZTT ZTT 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY1.root files_nominal_Sys_1/ZTT1.root ZTT ZTT 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY2.root files_nominal_Sys_1/ZTT2.root ZTT ZTT 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY3.root files_nominal_Sys_1/ZTT3.root ZTT ZTT 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY4.root files_nominal_Sys_1/ZTT4.root ZTT ZTT 1
hadd -f files_nominal_Sys_1/ZTT.root files_nominal_Sys_1/ZTT_ext1.root files_nominal_Sys_1/ZTT_ext2.root files_nominal_Sys_1/ZTT1.root files_nominal_Sys_1/ZTT2.root files_nominal_Sys_1/ZTT3.root files_nominal_Sys_1/ZTT4.root 

./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext1.root files_nominal_Sys_1/ZL_ext1.root ZL ZL 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext2.root files_nominal_Sys_1/ZL_ext2.root ZL ZL 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY1.root files_nominal_Sys_1/ZL1.root ZL ZL 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY2.root files_nominal_Sys_1/ZL2.root ZL ZL 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY3.root files_nominal_Sys_1/ZL3.root ZL ZL 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY4.root files_nominal_Sys_1/ZL4.root ZL ZL 1
hadd -f files_nominal_Sys_1/ZL.root files_nominal_Sys_1/ZL_ext1.root files_nominal_Sys_1/ZL_ext2.root files_nominal_Sys_1/ZL1.root files_nominal_Sys_1/ZL2.root files_nominal_Sys_1/ZL3.root files_nominal_Sys_1/ZL4.root 

./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext1.root files_nominal_Sys_1/ZJ_ext1.root ZJ ZJ 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext2.root files_nominal_Sys_1/ZJ_ext2.root ZJ ZJ 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY1.root files_nominal_Sys_1/ZJ1.root ZJ ZJ 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY2.root files_nominal_Sys_1/ZJ2.root ZJ ZJ 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY3.root files_nominal_Sys_1/ZJ3.root ZJ ZJ 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY4.root files_nominal_Sys_1/ZJ4.root ZJ ZJ 1
hadd -f files_nominal_Sys_1/ZJ.root files_nominal_Sys_1/ZJ_ext1.root files_nominal_Sys_1/ZJ_ext2.root files_nominal_Sys_1/ZJ1.root files_nominal_Sys_1/ZJ2.root files_nominal_Sys_1/ZJ3.root files_nominal_Sys_1/ZJ4.root 

./FinalSelection2D_relaxedFR.exe myntuples/April15/TT.root files_nominal_Sys_1/TT.root TT TT 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/VV.root files_nominal_Sys_1/VV.root VV2L2Nu VV 1

./FinalSelection2D_relaxedFR.exe myntuples/April15/W.root files_nominal_Sys_1/W.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W_ext2.root files_nominal_Sys_1/W_ext2.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W1.root files_nominal_Sys_1/W1.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W2.root files_nominal_Sys_1/W2.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W2_ext1.root files_nominal_Sys_1/W2_ext1.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W3.root files_nominal_Sys_1/W3.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W3_ext1.root files_nominal_Sys_1/W3_ext1.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W4.root files_nominal_Sys_1/W4.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W4_ext1.root files_nominal_Sys_1/W4_ext1.root W W 1
./FinalSelection2D_relaxedFR.exe myntuples/April15/W4_ext2.root files_nominal_Sys_1/W4_ext2.root W W 1
hadd -f files_nominal_Sys_1/WJets.root files_nominal_Sys_1/W.root files_nominal_Sys_1/W_ext2.root files_nominal_Sys_1/W1.root files_nominal_Sys_1/W2.root files_nominal_Sys_1/W2_ext1.root files_nominal_Sys_1/W3.root files_nominal_Sys_1/W3_ext1.root files_nominal_Sys_1/W4.root files_nominal_Sys_1/W4_ext1.root files_nominal_Sys_1/W4_ext2.root

#python Creat_QCD.py

hadd -f final_nominal_Sys_1.root files_nominal_Sys_1/SMH.root files_nominal_Sys_1/ZTT.root files_nominal_Sys_1/ZJ.root files_nominal_Sys_1/ZL.root files_nominal_Sys_1/TT.root files_nominal_Sys_1/VV.root files_nominal_Sys_1/data.root files_nominal_Sys_1/WJets.root files_nominal_Sys_1/QCD.root files_nominal_Sys_1/VBF125.root files_nominal_Sys_1/ggH125.root files_nominal_Sys_1/WH125.root files_nominal_Sys_1/ZH125.root

python plot_tt_category.py

