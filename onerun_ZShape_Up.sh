./Make.sh FinalSelection2D_relaxedFR.cc


./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext1.root files_nominal_Z_Up/ZTT_ext1.root ZTT ZTT  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext2.root files_nominal_Z_Up/ZTT_ext2.root ZTT ZTT  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY1.root files_nominal_Z_Up/ZTT1.root ZTT ZTT  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY2.root files_nominal_Z_Up/ZTT2.root ZTT ZTT  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY3.root files_nominal_Z_Up/ZTT3.root ZTT ZTT  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY4.root files_nominal_Z_Up/ZTT4.root ZTT ZTT  10
hadd -f files_nominal_Z_Up/ZTT.root files_nominal_Z_Up/ZTT_ext1.root files_nominal_Z_Up/ZTT_ext2.root files_nominal_Z_Up/ZTT1.root files_nominal_Z_Up/ZTT2.root files_nominal_Z_Up/ZTT3.root files_nominal_Z_Up/ZTT4.root 

./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext1.root files_nominal_Z_Up/ZL_ext1.root ZL ZL  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext2.root files_nominal_Z_Up/ZL_ext2.root ZL ZL  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY1.root files_nominal_Z_Up/ZL1.root ZL ZL  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY2.root files_nominal_Z_Up/ZL2.root ZL ZL  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY3.root files_nominal_Z_Up/ZL3.root ZL ZL  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY4.root files_nominal_Z_Up/ZL4.root ZL ZL  10
hadd -f files_nominal_Z_Up/ZL.root files_nominal_Z_Up/ZL_ext1.root files_nominal_Z_Up/ZL_ext2.root files_nominal_Z_Up/ZL1.root files_nominal_Z_Up/ZL2.root files_nominal_Z_Up/ZL3.root files_nominal_Z_Up/ZL4.root 

./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext1.root files_nominal_Z_Up/ZJ_ext1.root ZJ ZJ  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY_ext2.root files_nominal_Z_Up/ZJ_ext2.root ZJ ZJ  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY1.root files_nominal_Z_Up/ZJ1.root ZJ ZJ  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY2.root files_nominal_Z_Up/ZJ2.root ZJ ZJ  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY3.root files_nominal_Z_Up/ZJ3.root ZJ ZJ  10
./FinalSelection2D_relaxedFR.exe myntuples/April15/DY4.root files_nominal_Z_Up/ZJ4.root ZJ ZJ  10
hadd -f files_nominal_Z_Up/ZJ.root files_nominal_Z_Up/ZJ_ext1.root files_nominal_Z_Up/ZJ_ext2.root files_nominal_Z_Up/ZJ1.root files_nominal_Z_Up/ZJ2.root files_nominal_Z_Up/ZJ3.root files_nominal_Z_Up/ZJ4.root 


