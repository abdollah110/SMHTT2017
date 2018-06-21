//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 29 17:02:43 2018 by ROOT version 6.06/01
// from TTree tt_tree/tt_tree
// found on file: myntuples/mela_tt/DY2_svFit.root
//////////////////////////////////////////////////////////

#ifndef test_h
#define test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class test {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           lumi;
   Int_t           evt;
   Float_t         npv;
   Float_t         npu;
   Float_t         amcatNLO_weight;
   Float_t         jetpt_1;
   Float_t         jetpt_2;
   Float_t         pt_1;
   Float_t         px_1;
   Float_t         py_1;
   Float_t         pz_1;
   Float_t         phi_1;
   Float_t         eta_1;
   Float_t         m_1;
   Float_t         e_1;
   Float_t         q_1;
   Float_t         mt_1;
   Float_t         iso_1;
   Float_t         t1_decayMode;
   Float_t         againstElectronLooseMVA6_1;
   Float_t         againstElectronMediumMVA6_1;
   Float_t         againstElectronTightMVA6_1;
   Float_t         againstElectronVLooseMVA6_1;
   Float_t         againstElectronVTightMVA6_1;
   Float_t         againstMuonLoose3_1;
   Float_t         againstMuonTight3_1;
   Float_t         byVLooseIsolationMVArun2v1DBoldDMwLT_1;
   Float_t         byLooseIsolationMVArun2v1DBoldDMwLT_1;
   Float_t         byMediumIsolationMVArun2v1DBoldDMwLT_1;
   Float_t         byTightIsolationMVArun2v1DBoldDMwLT_1;
   Float_t         byVTightIsolationMVArun2v1DBoldDMwLT_1;
   Float_t         byVVTightIsolationMVArun2v1DBoldDMwLT_1;
   Float_t         byCombinedIsolationDeltaBetaCorrRaw3Hits_1;
   Float_t         byCombinedIsolationDeltaBetaCorrRaw3Hits_2;
   Float_t         byIsolationMVA3oldDMwoLTraw_1;
   Float_t         byIsolationMVA3oldDMwoLTraw_2;
   Float_t         pt_2;
   Float_t         px_2;
   Float_t         py_2;
   Float_t         pz_2;
   Float_t         phi_2;
   Float_t         eta_2;
   Float_t         m_2;
   Float_t         e_2;
   Float_t         q_2;
   Float_t         iso_2;
   Float_t         t2_decayMode;
   Float_t         againstElectronLooseMVA6_2;
   Float_t         againstElectronMediumMVA6_2;
   Float_t         againstElectronTightMVA6_2;
   Float_t         againstElectronVLooseMVA6_2;
   Float_t         againstElectronVTightMVA6_2;
   Float_t         againstMuonLoose3_2;
   Float_t         againstMuonTight3_2;
   Float_t         byVLooseIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byLooseIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byMediumIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byVTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byVVTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         genpX;
   Float_t         genpY;
   Float_t         genpT;
   Float_t         genM;
   Float_t         vispX;
   Float_t         vispY;
   Float_t         numGenJets;
   Float_t         pt_top1;
   Float_t         pt_top2;
   Float_t         genweight;
   Float_t         met_JESDown;
   Float_t         met_UESDown;
   Float_t         met_JESUp;
   Float_t         met_UESUp;
   Float_t         metphi_JESDown;
   Float_t         metphi_TESDown;
   Float_t         metphi_UESDown;
   Float_t         metphi_JESUp;
   Float_t         metphi_UESUp;
   Float_t         met;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         metcov01;
   Float_t         metphi;
   Float_t         met_px;
   Float_t         met_py;
   Int_t           gen_match_1;
   Int_t           gen_match_2;
   Int_t           nbtag;
   Int_t           nbtagL;
   Float_t         extraelec_veto;
   Float_t         extramuon_veto;
   Int_t           njets;
   Int_t           njetspt20;
   Int_t           njets_JESDown;
   Int_t           njetspt20_JESDown;
   Int_t           njets_JESUp;
   Int_t           njetspt20_JESUp;
   Float_t         jpt_1;
   Float_t         jeta_1;
   Float_t         jphi_1;
   Float_t         jcsv_1;
   Float_t         jpt_2;
   Float_t         jeta_2;
   Float_t         jphi_2;
   Float_t         jcsv_2;
   Float_t         bpt_1;
   Float_t         beta_1;
   Float_t         bphi_1;
   Float_t         bcsv_1;
   Float_t         bflavor_1;
   Float_t         bpt_2;
   Float_t         beta_2;
   Float_t         bphi_2;
   Float_t         bcsv_2;
   Float_t         bflavor_2;
   Float_t         passDoubleTau35;
   Float_t         matchDoubleTau35_1;
   Float_t         matchDoubleTau35_2;
   Float_t         filterDoubleTau35_1;
   Float_t         filterDoubleTau35_2;
   Float_t         passDoubleTauCmbIso35;
   Float_t         matchDoubleTauCmbIso35_1;
   Float_t         matchDoubleTauCmbIso35_2;
   Float_t         filterDoubleTauCmbIso35_1;
   Float_t         filterDoubleTauCmbIso35_2;
   Float_t         m_csv;
   Float_t         pt_csv;
   Float_t         eta_csv;
   Float_t         phi_scv;
   Float_t         met_csv;
   Float_t         mt_csv;
   Float_t         tau1_pt;
   Float_t         tau1_eta;
   Float_t         tau1_phi;
   Float_t         tau1_m;
   Float_t         tau2_pt;
   Float_t         tau2_eta;
   Float_t         tau2_phi;
   Float_t         tau2_m;
   Float_t         metcorr_ex;
   Float_t         metcorr_ey;
   Float_t         metcor;
   Float_t         metcorphi;
   Float_t         m_sv_UP;
   Float_t         pt_sv_UP;
   Float_t         eta_sv_UP;
   Float_t         phi_sv_UP;
   Float_t         met_sv_UP;
   Float_t         mt_sv_UP;
   Float_t         m_sv_DOWN;
   Float_t         pt_sv_DOWN;
   Float_t         eta_sv_DOWN;
   Float_t         phi_sv_DOWN;
   Float_t         met_sv_DOWN;
   Float_t         mt_sv_DOWN;
   Float_t         m_sv_DM0_UP;
   Float_t         pt_sv_DM0_UP;
   Float_t         eta_sv_DM0_UP;
   Float_t         phi_sv_DM0_UP;
   Float_t         met_sv_DM0_UP;
   Float_t         mt_sv_DM0_UP;
   Float_t         m_sv_DM0_DOWN;
   Float_t         pt_sv_DM0_DOWN;
   Float_t         eta_sv_DM0_DOWN;
   Float_t         phi_sv_DM0_DOWN;
   Float_t         met_sv_DM0_DOWN;
   Float_t         mt_sv_DM0_DOWN;
   Float_t         m_sv_DM1_UP;
   Float_t         pt_sv_DM1_UP;
   Float_t         eta_sv_DM1_UP;
   Float_t         phi_sv_DM1_UP;
   Float_t         met_sv_DM1_UP;
   Float_t         mt_sv_DM1_UP;
   Float_t         m_sv_DM1_DOWN;
   Float_t         pt_sv_DM1_DOWN;
   Float_t         eta_sv_DM1_DOWN;
   Float_t         phi_sv_DM1_DOWN;
   Float_t         met_sv_DM1_DOWN;
   Float_t         mt_sv_DM1_DOWN;
   Float_t         m_sv_DM10_UP;
   Float_t         pt_sv_DM10_UP;
   Float_t         eta_sv_DM10_UP;
   Float_t         phi_sv_DM10_UP;
   Float_t         met_sv_DM10_UP;
   Float_t         mt_sv_DM10_UP;
   Float_t         m_sv_DM10_DOWN;
   Float_t         pt_sv_DM10_DOWN;
   Float_t         eta_sv_DM10_DOWN;
   Float_t         phi_sv_DM10_DOWN;
   Float_t         met_sv_DM10_DOWN;
   Float_t         mt_sv_DM10_DOWN;
   Float_t         m_sv_UncMet_UP;
   Float_t         pt_sv_UncMet_UP;
   Float_t         eta_sv_UncMet_UP;
   Float_t         phi_sv_UncMet_UP;
   Float_t         met_sv_UncMet_UP;
   Float_t         mt_sv_UncMet_UP;
   Float_t         m_sv_UncMet_DOWN;
   Float_t         pt_sv_UncMet_DOWN;
   Float_t         eta_sv_UncMet_DOWN;
   Float_t         phi_sv_UncMet_DOWN;
   Float_t         met_sv_UncMet_DOWN;
   Float_t         mt_sv_UncMet_DOWN;
   Float_t         m_sv_ClusteredMet_UP;
   Float_t         pt_sv_ClusteredMet_UP;
   Float_t         eta_sv_ClusteredMet_UP;
   Float_t         phi_sv_ClusteredMet_UP;
   Float_t         met_sv_ClusteredMet_UP;
   Float_t         mt_sv_ClusteredMet_UP;
   Float_t         m_sv_ClusteredMet_DOWN;
   Float_t         pt_sv_ClusteredMet_DOWN;
   Float_t         eta_sv_ClusteredMet_DOWN;
   Float_t         phi_sv_ClusteredMet_DOWN;
   Float_t         met_sv_ClusteredMet_DOWN;
   Float_t         mt_sv_ClusteredMet_DOWN;
   Float_t         metcorClusteredDown;
   Float_t         metcorphiClusteredDown;
   Float_t         metcorClusteredUp;
   Float_t         metcorphiClusteredUp;
   Float_t         metcorUncDown;
   Float_t         metcorphiUncDown;
   Float_t         metcorUncUp;
   Float_t         metcorphiUncUp;
   Float_t         Dbkg;
   Float_t         mjj;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_aMCatNLO_weight;   //!
   TBranch        *b_jetpt_1;   //!
   TBranch        *b_jetpt_2;   //!
   TBranch        *b_pt_1;   //!
   TBranch        *b_px_1;   //!
   TBranch        *b_py_1;   //!
   TBranch        *b_pz_1;   //!
   TBranch        *b_phi_1;   //!
   TBranch        *b_eta_1;   //!
   TBranch        *b_m_1;   //!
   TBranch        *b_e_1;   //!
   TBranch        *b_q_1;   //!
   TBranch        *b_mt_1;   //!
   TBranch        *b_iso_1;   //!
   TBranch        *b_t1_decayMode;   //!
   TBranch        *b_againstElectronLooseMVA6_1;   //!
   TBranch        *b_againstElectronMediumMVA6_1;   //!
   TBranch        *b_againstElectronTightMVA6_1;   //!
   TBranch        *b_againstElectronVLooseMVA6_1;   //!
   TBranch        *b_againstElectronVTightMVA6_1;   //!
   TBranch        *b_againstMuonLoose3_1;   //!
   TBranch        *b_againstMuonTight3_1;   //!
   TBranch        *b_byVLooseIsolationMVArun2v1DBoldDMwLT_1;   //!
   TBranch        *b_byLooseIsolationMVArun2v1DBoldDMwLT_1;   //!
   TBranch        *b_byMediumIsolationMVArun2v1DBoldDMwLT_1;   //!
   TBranch        *b_byTightIsolationMVArun2v1DBoldDMwLT_1;   //!
   TBranch        *b_byVTightIsolationMVArun2v1DBoldDMwLT_1;   //!
   TBranch        *b_byVVTightIsolationMVArun2v1DBoldDMwLT_1;   //!
   TBranch        *b_byCombinedIsolationDeltaBetaCorrRaw3Hits_1;   //!
   TBranch        *b_byCombinedIsolationDeltaBetaCorrRaw3Hits_2;   //!
   TBranch        *b_byIsolationMVA3oldDMwoLTraw_1;   //!
   TBranch        *b_byIsolationMVA3oldDMwoLTraw_2;   //!
   TBranch        *b_pt_2;   //!
   TBranch        *b_px_2;   //!
   TBranch        *b_py_2;   //!
   TBranch        *b_pz_2;   //!
   TBranch        *b_phi_2;   //!
   TBranch        *b_eta_2;   //!
   TBranch        *b_m_2;   //!
   TBranch        *b_e_2;   //!
   TBranch        *b_q_2;   //!
   TBranch        *b_iso_2;   //!
   TBranch        *b_t2_decayMode;   //!
   TBranch        *b_againstElectronLooseMVA6_2;   //!
   TBranch        *b_againstElectronMediumMVA6_2;   //!
   TBranch        *b_againstElectronTightMVA6_2;   //!
   TBranch        *b_againstElectronVLooseMVA6_2;   //!
   TBranch        *b_againstElectronVTightMVA6_2;   //!
   TBranch        *b_againstMuonLoose3_2;   //!
   TBranch        *b_againstMuonTight3_2;   //!
   TBranch        *b_byVLooseIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byLooseIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byMediumIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVVTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_pt_top1;   //!
   TBranch        *b_pt_top2;   //!
   TBranch        *b_genweight;   //!
   TBranch        *b_met_JESDown;   //!
   TBranch        *b_met_UESDown;   //!
   TBranch        *b_met_JESUp;   //!
   TBranch        *b_met_UESUp;   //!
   TBranch        *b_metphi_JESDown;   //!
   TBranch        *b_metphi_TESDown;   //!
   TBranch        *b_metphi_UESDown;   //!
   TBranch        *b_metphi_JESUp;   //!
   TBranch        *b_metphi_UESUp;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metphi;   //!
   TBranch        *b_met_px;   //!
   TBranch        *b_met_py;   //!
   TBranch        *b_gen_match_1;   //!
   TBranch        *b_gen_match_2;   //!
   TBranch        *b_nbtag;   //!
   TBranch        *b_nbtagL;   //!
   TBranch        *b_extraelec_veto;   //!
   TBranch        *b_extramuon_veto;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_njetspt20;   //!
   TBranch        *b_njets_JESDown;   //!
   TBranch        *b_njetspt20_JESDown;   //!
   TBranch        *b_njets_JESUp;   //!
   TBranch        *b_njetspt20_JESUp;   //!
   TBranch        *b_jpt_1;   //!
   TBranch        *b_jeta_1;   //!
   TBranch        *b_jphi_1;   //!
   TBranch        *b_jcsv_1;   //!
   TBranch        *b_jpt_2;   //!
   TBranch        *b_jeta_2;   //!
   TBranch        *b_jphi_2;   //!
   TBranch        *b_jcsv_2;   //!
   TBranch        *b_bpt_1;   //!
   TBranch        *b_beta_1;   //!
   TBranch        *b_bphi_1;   //!
   TBranch        *b_bcsv_1;   //!
   TBranch        *b_bflavor_1;   //!
   TBranch        *b_bpt_2;   //!
   TBranch        *b_beta_2;   //!
   TBranch        *b_bphi_2;   //!
   TBranch        *b_bcsv_2;   //!
   TBranch        *b_bflavor_2;   //!
   TBranch        *b_passDoubleTau35;   //!
   TBranch        *b_matchDoubleTau35_1;   //!
   TBranch        *b_matchDoubleTau35_2;   //!
   TBranch        *b_filterDoubleTau35_1;   //!
   TBranch        *b_filterDoubleTau35_2;   //!
   TBranch        *b_passDoubleTauCmbIso35;   //!
   TBranch        *b_matchDoubleTauCmbIso35_1;   //!
   TBranch        *b_matchDoubleTauCmbIso35_2;   //!
   TBranch        *b_filterDoubleTauCmbIso35_1;   //!
   TBranch        *b_filterDoubleTauCmbIso35_2;   //!
   TBranch        *b_m_csv;   //!
   TBranch        *b_pt_csv;   //!
   TBranch        *b_eta_csv;   //!
   TBranch        *b_phi_csv;   //!
   TBranch        *b_met_csv;   //!
   TBranch        *b_mt_csv;   //!
   TBranch        *b_tau1_pt;   //!
   TBranch        *b_tau1_eta;   //!
   TBranch        *b_tau1_phi;   //!
   TBranch        *b_tau1_m;   //!
   TBranch        *b_tau2_pt;   //!
   TBranch        *b_tau2_eta;   //!
   TBranch        *b_tau2_phi;   //!
   TBranch        *b_tau2_m;   //!
   TBranch        *b_metcorr_ex;   //!
   TBranch        *b_metcorr_ey;   //!
   TBranch        *b_metcor;   //!
   TBranch        *b_metcorphi;   //!
   TBranch        *b_m_sv_UP;   //!
   TBranch        *b_pt_sv_UP;   //!
   TBranch        *b_eta_sv_UP;   //!
   TBranch        *b_phi_sv_UP;   //!
   TBranch        *b_met_sv_UP;   //!
   TBranch        *b_mt_sv_UP;   //!
   TBranch        *b_m_sv_DOWN;   //!
   TBranch        *b_pt_sv_DOWN;   //!
   TBranch        *b_eta_sv_DOWN;   //!
   TBranch        *b_phi_sv_DOWN;   //!
   TBranch        *b_met_sv_DOWN;   //!
   TBranch        *b_mt_sv_DOWN;   //!
   TBranch        *b_m_sv_DM0_UP;   //!
   TBranch        *b_pt_sv_DM0_UP;   //!
   TBranch        *b_eta_sv_DM0_UP;   //!
   TBranch        *b_phi_sv_DM0_UP;   //!
   TBranch        *b_met_sv_DM0_UP;   //!
   TBranch        *b_mt_sv_DM0_UP;   //!
   TBranch        *b_m_sv_DM0_DOWN;   //!
   TBranch        *b_pt_sv_DM0_DOWN;   //!
   TBranch        *b_eta_sv_DM0_DOWN;   //!
   TBranch        *b_phi_sv_DM0_DOWN;   //!
   TBranch        *b_met_sv_DM0_DOWN;   //!
   TBranch        *b_mt_sv_DM0_DOWN;   //!
   TBranch        *b_m_sv_DM1_UP;   //!
   TBranch        *b_pt_sv_DM1_UP;   //!
   TBranch        *b_eta_sv_DM1_UP;   //!
   TBranch        *b_phi_sv_DM1_UP;   //!
   TBranch        *b_met_sv_DM1_UP;   //!
   TBranch        *b_mt_sv_DM1_UP;   //!
   TBranch        *b_m_sv_DM1_DOWN;   //!
   TBranch        *b_pt_sv_DM1_DOWN;   //!
   TBranch        *b_eta_sv_DM1_DOWN;   //!
   TBranch        *b_phi_sv_DM1_DOWN;   //!
   TBranch        *b_met_sv_DM1_DOWN;   //!
   TBranch        *b_mt_sv_DM1_DOWN;   //!
   TBranch        *b_m_sv_DM10_UP;   //!
   TBranch        *b_pt_sv_DM10_UP;   //!
   TBranch        *b_eta_sv_DM10_UP;   //!
   TBranch        *b_phi_sv_DM10_UP;   //!
   TBranch        *b_met_sv_DM10_UP;   //!
   TBranch        *b_mt_sv_DM10_UP;   //!
   TBranch        *b_m_sv_DM10_DOWN;   //!
   TBranch        *b_pt_sv_DM10_DOWN;   //!
   TBranch        *b_eta_sv_DM10_DOWN;   //!
   TBranch        *b_phi_sv_DM10_DOWN;   //!
   TBranch        *b_met_sv_DM10_DOWN;   //!
   TBranch        *b_mt_sv_DM10_DOWN;   //!
   TBranch        *b_m_sv_UncMet_UP;   //!
   TBranch        *b_pt_sv_UncMet_UP;   //!
   TBranch        *b_eta_sv_UncMet_UP;   //!
   TBranch        *b_phi_sv_UncMet_UP;   //!
   TBranch        *b_met_sv_UncMet_UP;   //!
   TBranch        *b_mt_sv_UncMet_UP;   //!
   TBranch        *b_m_sv_UncMet_DOWN;   //!
   TBranch        *b_pt_sv_UncMet_DOWN;   //!
   TBranch        *b_eta_sv_UncMet_DOWN;   //!
   TBranch        *b_phi_sv_UncMet_DOWN;   //!
   TBranch        *b_met_sv_UncMet_DOWN;   //!
   TBranch        *b_mt_sv_UncMet_DOWN;   //!
   TBranch        *b_m_sv_ClusteredMet_UP;   //!
   TBranch        *b_pt_sv_ClusteredMet_UP;   //!
   TBranch        *b_eta_sv_ClusteredMet_UP;   //!
   TBranch        *b_phi_sv_ClusteredMet_UP;   //!
   TBranch        *b_met_sv_ClusteredMet_UP;   //!
   TBranch        *b_mt_sv_ClusteredMet_UP;   //!
   TBranch        *b_m_sv_ClusteredMet_DOWN;   //!
   TBranch        *b_pt_sv_ClusteredMet_DOWN;   //!
   TBranch        *b_eta_sv_ClusteredMet_DOWN;   //!
   TBranch        *b_phi_sv_ClusteredMet_DOWN;   //!
   TBranch        *b_met_sv_ClusteredMet_DOWN;   //!
   TBranch        *b_mt_sv_ClusteredMet_DOWN;   //!
   TBranch        *b_metcorClusteredDown;   //!
   TBranch        *b_metcorphiClusteredDown;   //!
   TBranch        *b_metcorClusteredUp;   //!
   TBranch        *b_metcorphiClusteredUp;   //!
   TBranch        *b_metcorUncDown;   //!
   TBranch        *b_metcorphiUncDown;   //!
   TBranch        *b_metcorUncUp;   //!
   TBranch        *b_metcorphiUncUp;   //!
   TBranch        *b_Dbkg;   //!
   TBranch        *b_mjj;   //!

   test(TTree *tree=0);
   virtual ~test();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef test_cxx
test::test(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("myntuples/mela_tt/DY2_svFit.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("myntuples/mela_tt/DY2_svFit.root");
      }
      f->GetObject("tt_tree",tree);

   }
   Init(tree);
}

test::~test()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t test::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t test::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void test::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("amcatNLO_weight", &amcatNLO_weight, &b_aMCatNLO_weight);
   fChain->SetBranchAddress("jetpt_1", &jetpt_1, &b_jetpt_1);
   fChain->SetBranchAddress("jetpt_2", &jetpt_2, &b_jetpt_2);
   fChain->SetBranchAddress("pt_1", &pt_1, &b_pt_1);
   fChain->SetBranchAddress("px_1", &px_1, &b_px_1);
   fChain->SetBranchAddress("py_1", &py_1, &b_py_1);
   fChain->SetBranchAddress("pz_1", &pz_1, &b_pz_1);
   fChain->SetBranchAddress("phi_1", &phi_1, &b_phi_1);
   fChain->SetBranchAddress("eta_1", &eta_1, &b_eta_1);
   fChain->SetBranchAddress("m_1", &m_1, &b_m_1);
   fChain->SetBranchAddress("e_1", &e_1, &b_e_1);
   fChain->SetBranchAddress("q_1", &q_1, &b_q_1);
   fChain->SetBranchAddress("mt_1", &mt_1, &b_mt_1);
   fChain->SetBranchAddress("iso_1", &iso_1, &b_iso_1);
   fChain->SetBranchAddress("t1_decayMode", &t1_decayMode, &b_t1_decayMode);
   fChain->SetBranchAddress("againstElectronLooseMVA6_1", &againstElectronLooseMVA6_1, &b_againstElectronLooseMVA6_1);
   fChain->SetBranchAddress("againstElectronMediumMVA6_1", &againstElectronMediumMVA6_1, &b_againstElectronMediumMVA6_1);
   fChain->SetBranchAddress("againstElectronTightMVA6_1", &againstElectronTightMVA6_1, &b_againstElectronTightMVA6_1);
   fChain->SetBranchAddress("againstElectronVLooseMVA6_1", &againstElectronVLooseMVA6_1, &b_againstElectronVLooseMVA6_1);
   fChain->SetBranchAddress("againstElectronVTightMVA6_1", &againstElectronVTightMVA6_1, &b_againstElectronVTightMVA6_1);
   fChain->SetBranchAddress("againstMuonLoose3_1", &againstMuonLoose3_1, &b_againstMuonLoose3_1);
   fChain->SetBranchAddress("againstMuonTight3_1", &againstMuonTight3_1, &b_againstMuonTight3_1);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBoldDMwLT_1", &byVLooseIsolationMVArun2v1DBoldDMwLT_1, &b_byVLooseIsolationMVArun2v1DBoldDMwLT_1);
   fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBoldDMwLT_1", &byLooseIsolationMVArun2v1DBoldDMwLT_1, &b_byLooseIsolationMVArun2v1DBoldDMwLT_1);
   fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBoldDMwLT_1", &byMediumIsolationMVArun2v1DBoldDMwLT_1, &b_byMediumIsolationMVArun2v1DBoldDMwLT_1);
   fChain->SetBranchAddress("byTightIsolationMVArun2v1DBoldDMwLT_1", &byTightIsolationMVArun2v1DBoldDMwLT_1, &b_byTightIsolationMVArun2v1DBoldDMwLT_1);
   fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBoldDMwLT_1", &byVTightIsolationMVArun2v1DBoldDMwLT_1, &b_byVTightIsolationMVArun2v1DBoldDMwLT_1);
   fChain->SetBranchAddress("byVVTightIsolationMVArun2v1DBoldDMwLT_1", &byVVTightIsolationMVArun2v1DBoldDMwLT_1, &b_byVVTightIsolationMVArun2v1DBoldDMwLT_1);
   fChain->SetBranchAddress("byCombinedIsolationDeltaBetaCorrRaw3Hits_1", &byCombinedIsolationDeltaBetaCorrRaw3Hits_1, &b_byCombinedIsolationDeltaBetaCorrRaw3Hits_1);
   fChain->SetBranchAddress("byCombinedIsolationDeltaBetaCorrRaw3Hits_2", &byCombinedIsolationDeltaBetaCorrRaw3Hits_2, &b_byCombinedIsolationDeltaBetaCorrRaw3Hits_2);
   fChain->SetBranchAddress("byIsolationMVA3oldDMwoLTraw_1", &byIsolationMVA3oldDMwoLTraw_1, &b_byIsolationMVA3oldDMwoLTraw_1);
   fChain->SetBranchAddress("byIsolationMVA3oldDMwoLTraw_2", &byIsolationMVA3oldDMwoLTraw_2, &b_byIsolationMVA3oldDMwoLTraw_2);
   fChain->SetBranchAddress("pt_2", &pt_2, &b_pt_2);
   fChain->SetBranchAddress("px_2", &px_2, &b_px_2);
   fChain->SetBranchAddress("py_2", &py_2, &b_py_2);
   fChain->SetBranchAddress("pz_2", &pz_2, &b_pz_2);
   fChain->SetBranchAddress("phi_2", &phi_2, &b_phi_2);
   fChain->SetBranchAddress("eta_2", &eta_2, &b_eta_2);
   fChain->SetBranchAddress("m_2", &m_2, &b_m_2);
   fChain->SetBranchAddress("e_2", &e_2, &b_e_2);
   fChain->SetBranchAddress("q_2", &q_2, &b_q_2);
   fChain->SetBranchAddress("iso_2", &iso_2, &b_iso_2);
   fChain->SetBranchAddress("t2_decayMode", &t2_decayMode, &b_t2_decayMode);
   fChain->SetBranchAddress("againstElectronLooseMVA6_2", &againstElectronLooseMVA6_2, &b_againstElectronLooseMVA6_2);
   fChain->SetBranchAddress("againstElectronMediumMVA6_2", &againstElectronMediumMVA6_2, &b_againstElectronMediumMVA6_2);
   fChain->SetBranchAddress("againstElectronTightMVA6_2", &againstElectronTightMVA6_2, &b_againstElectronTightMVA6_2);
   fChain->SetBranchAddress("againstElectronVLooseMVA6_2", &againstElectronVLooseMVA6_2, &b_againstElectronVLooseMVA6_2);
   fChain->SetBranchAddress("againstElectronVTightMVA6_2", &againstElectronVTightMVA6_2, &b_againstElectronVTightMVA6_2);
   fChain->SetBranchAddress("againstMuonLoose3_2", &againstMuonLoose3_2, &b_againstMuonLoose3_2);
   fChain->SetBranchAddress("againstMuonTight3_2", &againstMuonTight3_2, &b_againstMuonTight3_2);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBoldDMwLT_2", &byVLooseIsolationMVArun2v1DBoldDMwLT_2, &b_byVLooseIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBoldDMwLT_2", &byLooseIsolationMVArun2v1DBoldDMwLT_2, &b_byLooseIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBoldDMwLT_2", &byMediumIsolationMVArun2v1DBoldDMwLT_2, &b_byMediumIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byTightIsolationMVArun2v1DBoldDMwLT_2", &byTightIsolationMVArun2v1DBoldDMwLT_2, &b_byTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBoldDMwLT_2", &byVTightIsolationMVArun2v1DBoldDMwLT_2, &b_byVTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVVTightIsolationMVArun2v1DBoldDMwLT_2", &byVVTightIsolationMVArun2v1DBoldDMwLT_2, &b_byVVTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("genpX", &genpX, &b_genpX);
   fChain->SetBranchAddress("genpY", &genpY, &b_genpY);
   fChain->SetBranchAddress("genpT", &genpT, &b_genpT);
   fChain->SetBranchAddress("genM", &genM, &b_genM);
   fChain->SetBranchAddress("vispX", &vispX, &b_vispX);
   fChain->SetBranchAddress("vispY", &vispY, &b_vispY);
   fChain->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   fChain->SetBranchAddress("pt_top1", &pt_top1, &b_pt_top1);
   fChain->SetBranchAddress("pt_top2", &pt_top2, &b_pt_top2);
   fChain->SetBranchAddress("genweight", &genweight, &b_genweight);
   fChain->SetBranchAddress("met_JESDown", &met_JESDown, &b_met_JESDown);
   fChain->SetBranchAddress("met_UESDown", &met_UESDown, &b_met_UESDown);
   fChain->SetBranchAddress("met_JESUp", &met_JESUp, &b_met_JESUp);
   fChain->SetBranchAddress("met_UESUp", &met_UESUp, &b_met_UESUp);
   fChain->SetBranchAddress("metphi_JESDown", &metphi_JESDown, &b_metphi_JESDown);
   fChain->SetBranchAddress("metphi_TESDown", &metphi_TESDown, &b_metphi_TESDown);
   fChain->SetBranchAddress("metphi_UESDown", &metphi_UESDown, &b_metphi_UESDown);
   fChain->SetBranchAddress("metphi_JESUp", &metphi_JESUp, &b_metphi_JESUp);
   fChain->SetBranchAddress("metphi_UESUp", &metphi_UESUp, &b_metphi_UESUp);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metSig", &metSig, &b_metSig);
   fChain->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   fChain->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   fChain->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   fChain->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   fChain->SetBranchAddress("metphi", &metphi, &b_metphi);
   fChain->SetBranchAddress("met_px", &met_px, &b_met_px);
   fChain->SetBranchAddress("met_py", &met_py, &b_met_py);
   fChain->SetBranchAddress("gen_match_1", &gen_match_1, &b_gen_match_1);
   fChain->SetBranchAddress("gen_match_2", &gen_match_2, &b_gen_match_2);
   fChain->SetBranchAddress("nbtag", &nbtag, &b_nbtag);
   fChain->SetBranchAddress("nbtagL", &nbtagL, &b_nbtagL);
   fChain->SetBranchAddress("extraelec_veto", &extraelec_veto, &b_extraelec_veto);
   fChain->SetBranchAddress("extramuon_veto", &extramuon_veto, &b_extramuon_veto);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("njetspt20", &njetspt20, &b_njetspt20);
   fChain->SetBranchAddress("njets_JESDown", &njets_JESDown, &b_njets_JESDown);
   fChain->SetBranchAddress("njetspt20_JESDown", &njetspt20_JESDown, &b_njetspt20_JESDown);
   fChain->SetBranchAddress("njets_JESUp", &njets_JESUp, &b_njets_JESUp);
   fChain->SetBranchAddress("njetspt20_JESUp", &njetspt20_JESUp, &b_njetspt20_JESUp);
   fChain->SetBranchAddress("jpt_1", &jpt_1, &b_jpt_1);
   fChain->SetBranchAddress("jeta_1", &jeta_1, &b_jeta_1);
   fChain->SetBranchAddress("jphi_1", &jphi_1, &b_jphi_1);
   fChain->SetBranchAddress("jcsv_1", &jcsv_1, &b_jcsv_1);
   fChain->SetBranchAddress("jpt_2", &jpt_2, &b_jpt_2);
   fChain->SetBranchAddress("jeta_2", &jeta_2, &b_jeta_2);
   fChain->SetBranchAddress("jphi_2", &jphi_2, &b_jphi_2);
   fChain->SetBranchAddress("jcsv_2", &jcsv_2, &b_jcsv_2);
   fChain->SetBranchAddress("bpt_1", &bpt_1, &b_bpt_1);
   fChain->SetBranchAddress("beta_1", &beta_1, &b_beta_1);
   fChain->SetBranchAddress("bphi_1", &bphi_1, &b_bphi_1);
   fChain->SetBranchAddress("bcsv_1", &bcsv_1, &b_bcsv_1);
   fChain->SetBranchAddress("bflavor_1", &bflavor_1, &b_bflavor_1);
   fChain->SetBranchAddress("bpt_2", &bpt_2, &b_bpt_2);
   fChain->SetBranchAddress("beta_2", &beta_2, &b_beta_2);
   fChain->SetBranchAddress("bphi_2", &bphi_2, &b_bphi_2);
   fChain->SetBranchAddress("bcsv_2", &bcsv_2, &b_bcsv_2);
   fChain->SetBranchAddress("bflavor_2", &bflavor_2, &b_bflavor_2);
   fChain->SetBranchAddress("passDoubleTau35", &passDoubleTau35, &b_passDoubleTau35);
   fChain->SetBranchAddress("matchDoubleTau35_1", &matchDoubleTau35_1, &b_matchDoubleTau35_1);
   fChain->SetBranchAddress("matchDoubleTau35_2", &matchDoubleTau35_2, &b_matchDoubleTau35_2);
   fChain->SetBranchAddress("filterDoubleTau35_1", &filterDoubleTau35_1, &b_filterDoubleTau35_1);
   fChain->SetBranchAddress("filterDoubleTau35_2", &filterDoubleTau35_2, &b_filterDoubleTau35_2);
   fChain->SetBranchAddress("passDoubleTauCmbIso35", &passDoubleTauCmbIso35, &b_passDoubleTauCmbIso35);
   fChain->SetBranchAddress("matchDoubleTauCmbIso35_1", &matchDoubleTauCmbIso35_1, &b_matchDoubleTauCmbIso35_1);
   fChain->SetBranchAddress("matchDoubleTauCmbIso35_2", &matchDoubleTauCmbIso35_2, &b_matchDoubleTauCmbIso35_2);
   fChain->SetBranchAddress("filterDoubleTauCmbIso35_1", &filterDoubleTauCmbIso35_1, &b_filterDoubleTauCmbIso35_1);
   fChain->SetBranchAddress("filterDoubleTauCmbIso35_2", &filterDoubleTauCmbIso35_2, &b_filterDoubleTauCmbIso35_2);
   fChain->SetBranchAddress("m_csv", &m_csv, &b_m_csv);
   fChain->SetBranchAddress("pt_csv", &pt_csv, &b_pt_csv);
   fChain->SetBranchAddress("eta_csv", &eta_csv, &b_eta_csv);
   fChain->SetBranchAddress("phi_scv", &phi_scv, &b_phi_csv);
   fChain->SetBranchAddress("met_csv", &met_csv, &b_met_csv);
   fChain->SetBranchAddress("mt_csv", &mt_csv, &b_mt_csv);
   fChain->SetBranchAddress("tau1_pt", &tau1_pt, &b_tau1_pt);
   fChain->SetBranchAddress("tau1_eta", &tau1_eta, &b_tau1_eta);
   fChain->SetBranchAddress("tau1_phi", &tau1_phi, &b_tau1_phi);
   fChain->SetBranchAddress("tau1_m", &tau1_m, &b_tau1_m);
   fChain->SetBranchAddress("tau2_pt", &tau2_pt, &b_tau2_pt);
   fChain->SetBranchAddress("tau2_eta", &tau2_eta, &b_tau2_eta);
   fChain->SetBranchAddress("tau2_phi", &tau2_phi, &b_tau2_phi);
   fChain->SetBranchAddress("tau2_m", &tau2_m, &b_tau2_m);
   fChain->SetBranchAddress("metcorr_ex", &metcorr_ex, &b_metcorr_ex);
   fChain->SetBranchAddress("metcorr_ey", &metcorr_ey, &b_metcorr_ey);
   fChain->SetBranchAddress("metcor", &metcor, &b_metcor);
   fChain->SetBranchAddress("metcorphi", &metcorphi, &b_metcorphi);
   fChain->SetBranchAddress("m_sv_UP", &m_sv_UP, &b_m_sv_UP);
   fChain->SetBranchAddress("pt_sv_UP", &pt_sv_UP, &b_pt_sv_UP);
   fChain->SetBranchAddress("eta_sv_UP", &eta_sv_UP, &b_eta_sv_UP);
   fChain->SetBranchAddress("phi_sv_UP", &phi_sv_UP, &b_phi_sv_UP);
   fChain->SetBranchAddress("met_sv_UP", &met_sv_UP, &b_met_sv_UP);
   fChain->SetBranchAddress("mt_sv_UP", &mt_sv_UP, &b_mt_sv_UP);
   fChain->SetBranchAddress("m_sv_DOWN", &m_sv_DOWN, &b_m_sv_DOWN);
   fChain->SetBranchAddress("pt_sv_DOWN", &pt_sv_DOWN, &b_pt_sv_DOWN);
   fChain->SetBranchAddress("eta_sv_DOWN", &eta_sv_DOWN, &b_eta_sv_DOWN);
   fChain->SetBranchAddress("phi_sv_DOWN", &phi_sv_DOWN, &b_phi_sv_DOWN);
   fChain->SetBranchAddress("met_sv_DOWN", &met_sv_DOWN, &b_met_sv_DOWN);
   fChain->SetBranchAddress("mt_sv_DOWN", &mt_sv_DOWN, &b_mt_sv_DOWN);
   fChain->SetBranchAddress("m_sv_DM0_UP", &m_sv_DM0_UP, &b_m_sv_DM0_UP);
   fChain->SetBranchAddress("pt_sv_DM0_UP", &pt_sv_DM0_UP, &b_pt_sv_DM0_UP);
   fChain->SetBranchAddress("eta_sv_DM0_UP", &eta_sv_DM0_UP, &b_eta_sv_DM0_UP);
   fChain->SetBranchAddress("phi_sv_DM0_UP", &phi_sv_DM0_UP, &b_phi_sv_DM0_UP);
   fChain->SetBranchAddress("met_sv_DM0_UP", &met_sv_DM0_UP, &b_met_sv_DM0_UP);
   fChain->SetBranchAddress("mt_sv_DM0_UP", &mt_sv_DM0_UP, &b_mt_sv_DM0_UP);
   fChain->SetBranchAddress("m_sv_DM0_DOWN", &m_sv_DM0_DOWN, &b_m_sv_DM0_DOWN);
   fChain->SetBranchAddress("pt_sv_DM0_DOWN", &pt_sv_DM0_DOWN, &b_pt_sv_DM0_DOWN);
   fChain->SetBranchAddress("eta_sv_DM0_DOWN", &eta_sv_DM0_DOWN, &b_eta_sv_DM0_DOWN);
   fChain->SetBranchAddress("phi_sv_DM0_DOWN", &phi_sv_DM0_DOWN, &b_phi_sv_DM0_DOWN);
   fChain->SetBranchAddress("met_sv_DM0_DOWN", &met_sv_DM0_DOWN, &b_met_sv_DM0_DOWN);
   fChain->SetBranchAddress("mt_sv_DM0_DOWN", &mt_sv_DM0_DOWN, &b_mt_sv_DM0_DOWN);
   fChain->SetBranchAddress("m_sv_DM1_UP", &m_sv_DM1_UP, &b_m_sv_DM1_UP);
   fChain->SetBranchAddress("pt_sv_DM1_UP", &pt_sv_DM1_UP, &b_pt_sv_DM1_UP);
   fChain->SetBranchAddress("eta_sv_DM1_UP", &eta_sv_DM1_UP, &b_eta_sv_DM1_UP);
   fChain->SetBranchAddress("phi_sv_DM1_UP", &phi_sv_DM1_UP, &b_phi_sv_DM1_UP);
   fChain->SetBranchAddress("met_sv_DM1_UP", &met_sv_DM1_UP, &b_met_sv_DM1_UP);
   fChain->SetBranchAddress("mt_sv_DM1_UP", &mt_sv_DM1_UP, &b_mt_sv_DM1_UP);
   fChain->SetBranchAddress("m_sv_DM1_DOWN", &m_sv_DM1_DOWN, &b_m_sv_DM1_DOWN);
   fChain->SetBranchAddress("pt_sv_DM1_DOWN", &pt_sv_DM1_DOWN, &b_pt_sv_DM1_DOWN);
   fChain->SetBranchAddress("eta_sv_DM1_DOWN", &eta_sv_DM1_DOWN, &b_eta_sv_DM1_DOWN);
   fChain->SetBranchAddress("phi_sv_DM1_DOWN", &phi_sv_DM1_DOWN, &b_phi_sv_DM1_DOWN);
   fChain->SetBranchAddress("met_sv_DM1_DOWN", &met_sv_DM1_DOWN, &b_met_sv_DM1_DOWN);
   fChain->SetBranchAddress("mt_sv_DM1_DOWN", &mt_sv_DM1_DOWN, &b_mt_sv_DM1_DOWN);
   fChain->SetBranchAddress("m_sv_DM10_UP", &m_sv_DM10_UP, &b_m_sv_DM10_UP);
   fChain->SetBranchAddress("pt_sv_DM10_UP", &pt_sv_DM10_UP, &b_pt_sv_DM10_UP);
   fChain->SetBranchAddress("eta_sv_DM10_UP", &eta_sv_DM10_UP, &b_eta_sv_DM10_UP);
   fChain->SetBranchAddress("phi_sv_DM10_UP", &phi_sv_DM10_UP, &b_phi_sv_DM10_UP);
   fChain->SetBranchAddress("met_sv_DM10_UP", &met_sv_DM10_UP, &b_met_sv_DM10_UP);
   fChain->SetBranchAddress("mt_sv_DM10_UP", &mt_sv_DM10_UP, &b_mt_sv_DM10_UP);
   fChain->SetBranchAddress("m_sv_DM10_DOWN", &m_sv_DM10_DOWN, &b_m_sv_DM10_DOWN);
   fChain->SetBranchAddress("pt_sv_DM10_DOWN", &pt_sv_DM10_DOWN, &b_pt_sv_DM10_DOWN);
   fChain->SetBranchAddress("eta_sv_DM10_DOWN", &eta_sv_DM10_DOWN, &b_eta_sv_DM10_DOWN);
   fChain->SetBranchAddress("phi_sv_DM10_DOWN", &phi_sv_DM10_DOWN, &b_phi_sv_DM10_DOWN);
   fChain->SetBranchAddress("met_sv_DM10_DOWN", &met_sv_DM10_DOWN, &b_met_sv_DM10_DOWN);
   fChain->SetBranchAddress("mt_sv_DM10_DOWN", &mt_sv_DM10_DOWN, &b_mt_sv_DM10_DOWN);
   fChain->SetBranchAddress("m_sv_UncMet_UP", &m_sv_UncMet_UP, &b_m_sv_UncMet_UP);
   fChain->SetBranchAddress("pt_sv_UncMet_UP", &pt_sv_UncMet_UP, &b_pt_sv_UncMet_UP);
   fChain->SetBranchAddress("eta_sv_UncMet_UP", &eta_sv_UncMet_UP, &b_eta_sv_UncMet_UP);
   fChain->SetBranchAddress("phi_sv_UncMet_UP", &phi_sv_UncMet_UP, &b_phi_sv_UncMet_UP);
   fChain->SetBranchAddress("met_sv_UncMet_UP", &met_sv_UncMet_UP, &b_met_sv_UncMet_UP);
   fChain->SetBranchAddress("mt_sv_UncMet_UP", &mt_sv_UncMet_UP, &b_mt_sv_UncMet_UP);
   fChain->SetBranchAddress("m_sv_UncMet_DOWN", &m_sv_UncMet_DOWN, &b_m_sv_UncMet_DOWN);
   fChain->SetBranchAddress("pt_sv_UncMet_DOWN", &pt_sv_UncMet_DOWN, &b_pt_sv_UncMet_DOWN);
   fChain->SetBranchAddress("eta_sv_UncMet_DOWN", &eta_sv_UncMet_DOWN, &b_eta_sv_UncMet_DOWN);
   fChain->SetBranchAddress("phi_sv_UncMet_DOWN", &phi_sv_UncMet_DOWN, &b_phi_sv_UncMet_DOWN);
   fChain->SetBranchAddress("met_sv_UncMet_DOWN", &met_sv_UncMet_DOWN, &b_met_sv_UncMet_DOWN);
   fChain->SetBranchAddress("mt_sv_UncMet_DOWN", &mt_sv_UncMet_DOWN, &b_mt_sv_UncMet_DOWN);
   fChain->SetBranchAddress("m_sv_ClusteredMet_UP", &m_sv_ClusteredMet_UP, &b_m_sv_ClusteredMet_UP);
   fChain->SetBranchAddress("pt_sv_ClusteredMet_UP", &pt_sv_ClusteredMet_UP, &b_pt_sv_ClusteredMet_UP);
   fChain->SetBranchAddress("eta_sv_ClusteredMet_UP", &eta_sv_ClusteredMet_UP, &b_eta_sv_ClusteredMet_UP);
   fChain->SetBranchAddress("phi_sv_ClusteredMet_UP", &phi_sv_ClusteredMet_UP, &b_phi_sv_ClusteredMet_UP);
   fChain->SetBranchAddress("met_sv_ClusteredMet_UP", &met_sv_ClusteredMet_UP, &b_met_sv_ClusteredMet_UP);
   fChain->SetBranchAddress("mt_sv_ClusteredMet_UP", &mt_sv_ClusteredMet_UP, &b_mt_sv_ClusteredMet_UP);
   fChain->SetBranchAddress("m_sv_ClusteredMet_DOWN", &m_sv_ClusteredMet_DOWN, &b_m_sv_ClusteredMet_DOWN);
   fChain->SetBranchAddress("pt_sv_ClusteredMet_DOWN", &pt_sv_ClusteredMet_DOWN, &b_pt_sv_ClusteredMet_DOWN);
   fChain->SetBranchAddress("eta_sv_ClusteredMet_DOWN", &eta_sv_ClusteredMet_DOWN, &b_eta_sv_ClusteredMet_DOWN);
   fChain->SetBranchAddress("phi_sv_ClusteredMet_DOWN", &phi_sv_ClusteredMet_DOWN, &b_phi_sv_ClusteredMet_DOWN);
   fChain->SetBranchAddress("met_sv_ClusteredMet_DOWN", &met_sv_ClusteredMet_DOWN, &b_met_sv_ClusteredMet_DOWN);
   fChain->SetBranchAddress("mt_sv_ClusteredMet_DOWN", &mt_sv_ClusteredMet_DOWN, &b_mt_sv_ClusteredMet_DOWN);
   fChain->SetBranchAddress("metcorClusteredDown", &metcorClusteredDown, &b_metcorClusteredDown);
   fChain->SetBranchAddress("metcorphiClusteredDown", &metcorphiClusteredDown, &b_metcorphiClusteredDown);
   fChain->SetBranchAddress("metcorClusteredUp", &metcorClusteredUp, &b_metcorClusteredUp);
   fChain->SetBranchAddress("metcorphiClusteredUp", &metcorphiClusteredUp, &b_metcorphiClusteredUp);
   fChain->SetBranchAddress("metcorUncDown", &metcorUncDown, &b_metcorUncDown);
   fChain->SetBranchAddress("metcorphiUncDown", &metcorphiUncDown, &b_metcorphiUncDown);
   fChain->SetBranchAddress("metcorUncUp", &metcorUncUp, &b_metcorUncUp);
   fChain->SetBranchAddress("metcorphiUncUp", &metcorphiUncUp, &b_metcorphiUncUp);
   fChain->SetBranchAddress("Dbkg", &Dbkg, &b_Dbkg);
   fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
   Notify();
}

Bool_t test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void test::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t test::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef test_cxx
