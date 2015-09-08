/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Machine Code Emitter                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t HexagonMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(4076863488),	// A2_add
    UINT64_C(4211081344),	// A2_paddf
    UINT64_C(4211089536),	// A2_paddfnew
    UINT64_C(4211081216),	// A2_paddt
    UINT64_C(4211089408),	// A2_paddtnew
    UINT64_C(0),	// ADD64_rr
    UINT64_C(0),	// ADDASL
    UINT64_C(0),	// ADD_ri
    UINT64_C(0),	// ADD_ri_cNotPt
    UINT64_C(0),	// ADD_ri_cPt
    UINT64_C(0),	// ADD_ri_cdnNotPt
    UINT64_C(0),	// ADD_ri_cdnPt
    UINT64_C(0),	// ADD_rr
    UINT64_C(0),	// ADD_rr_cNotPt
    UINT64_C(0),	// ADD_rr_cPt
    UINT64_C(0),	// ADD_rr_cdnNotPt
    UINT64_C(0),	// ADD_rr_cdnPt
    UINT64_C(0),	// ADDi_ASLri_V4
    UINT64_C(0),	// ADDi_LSRri_V4
    UINT64_C(0),	// ADDi_MPYri_V4
    UINT64_C(0),	// ADDi_MPYrr_V4
    UINT64_C(0),	// ADDr_ADDri_V4
    UINT64_C(0),	// ADDr_MPYir_V4
    UINT64_C(0),	// ADDr_MPYri_V4
    UINT64_C(0),	// ADDr_MPYrr_V4
    UINT64_C(0),	// ADDr_SUBri_V4
    UINT64_C(0),	// ADDri_SUBr_V4
    UINT64_C(0),	// ADDri_acc
    UINT64_C(0),	// ADDrr_acc
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),	// ADJDYNALLOC
    UINT64_C(0),	// ALLOCFRAME
    UINT64_C(0),	// ALL_pp
    UINT64_C(0),	// AND_pnotp
    UINT64_C(0),	// AND_pp
    UINT64_C(0),	// AND_ri
    UINT64_C(0),	// AND_rr
    UINT64_C(0),	// AND_rr64
    UINT64_C(0),	// AND_rr_cNotPt
    UINT64_C(0),	// AND_rr_cPt
    UINT64_C(0),	// AND_rr_cdnNotPt
    UINT64_C(0),	// AND_rr_cdnPt
    UINT64_C(0),	// ANDd_NOTd_V4
    UINT64_C(0),	// ANDi_ASLri_V4
    UINT64_C(0),	// ANDi_LSRri_V4
    UINT64_C(0),	// ANDr_ANDr_NOTr_V4
    UINT64_C(0),	// ANDr_ANDrr_V4
    UINT64_C(0),	// ANDr_ORrr_V4
    UINT64_C(0),	// ANDr_XORrr_V4
    UINT64_C(0),	// ANY_pp
    UINT64_C(0),	// ARGEXTEND
    UINT64_C(0),	// ASL
    UINT64_C(0),	// ASLH
    UINT64_C(0),	// ASLH_cNotPt_V4
    UINT64_C(0),	// ASLH_cPt_V4
    UINT64_C(0),	// ASLH_cdnNotPt_V4
    UINT64_C(0),	// ASLH_cdnPt_V4
    UINT64_C(0),	// ASL_ADD_ri
    UINT64_C(0),	// ASL_ADD_rr
    UINT64_C(0),	// ASL_ADDd_ri
    UINT64_C(0),	// ASL_ADDd_rr
    UINT64_C(0),	// ASL_AND_ri
    UINT64_C(0),	// ASL_AND_rr
    UINT64_C(0),	// ASL_ANDd_ri
    UINT64_C(0),	// ASL_ANDd_rr
    UINT64_C(0),	// ASL_OR_ri
    UINT64_C(0),	// ASL_OR_rr
    UINT64_C(0),	// ASL_ORd_ri
    UINT64_C(0),	// ASL_ORd_rr
    UINT64_C(0),	// ASL_SUB_ri
    UINT64_C(0),	// ASL_SUB_rr
    UINT64_C(0),	// ASL_SUBd_ri
    UINT64_C(0),	// ASL_SUBd_rr
    UINT64_C(0),	// ASL_XOR_ri
    UINT64_C(0),	// ASL_XORd_ri
    UINT64_C(0),	// ASL_rr
    UINT64_C(0),	// ASLd
    UINT64_C(0),	// ASLd_ri
    UINT64_C(0),	// ASLd_rr_xor_V4
    UINT64_C(0),	// ASRH
    UINT64_C(0),	// ASRH_cNotPt_V4
    UINT64_C(0),	// ASRH_cPt_V4
    UINT64_C(0),	// ASRH_cdnNotPt_V4
    UINT64_C(0),	// ASRH_cdnPt_V4
    UINT64_C(0),	// ASR_ADD_ri
    UINT64_C(0),	// ASR_ADD_rr
    UINT64_C(0),	// ASR_ADDd_ri
    UINT64_C(0),	// ASR_ADDd_rr
    UINT64_C(0),	// ASR_AND_ri
    UINT64_C(0),	// ASR_AND_rr
    UINT64_C(0),	// ASR_ANDd_ri
    UINT64_C(0),	// ASR_ANDd_rr
    UINT64_C(0),	// ASR_OR_ri
    UINT64_C(0),	// ASR_OR_rr
    UINT64_C(0),	// ASR_ORd_ri
    UINT64_C(0),	// ASR_ORd_rr
    UINT64_C(0),	// ASR_SUB_ri
    UINT64_C(0),	// ASR_SUB_rr
    UINT64_C(0),	// ASR_SUBd_ri
    UINT64_C(0),	// ASR_SUBd_rr
    UINT64_C(0),	// ASR_ri
    UINT64_C(0),	// ASR_rr
    UINT64_C(0),	// ASRd_ri
    UINT64_C(0),	// ASRd_rr
    UINT64_C(0),	// ASRd_rr_xor_V4
    UINT64_C(0),	// BARRIER
    UINT64_C(1967128592),	// C4_cmpltei
    UINT64_C(1971322896),	// C4_cmplteui
    UINT64_C(1962934288),	// C4_cmpneqi
    UINT64_C(0),	// CALL
    UINT64_C(0),	// CALLR
    UINT64_C(0),	// CALLRv3
    UINT64_C(0),	// CALLv3
    UINT64_C(0),	// CLRBIT
    UINT64_C(0),	// CLRBIT_31
    UINT64_C(0),	// CMPEHexagon4rr
    UINT64_C(641728512),	// CMPEQn1_f_Jumpnv_nt_V4
    UINT64_C(641736704),	// CMPEQn1_f_Jumpnv_t_V4
    UINT64_C(637534208),	// CMPEQn1_t_Jumpnv_nt_V4
    UINT64_C(637542400),	// CMPEQn1_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPEQri
    UINT64_C(608174080),	// CMPEQri_f_Jumpnv_nt_V4
    UINT64_C(608182272),	// CMPEQri_f_Jumpnv_t_V4
    UINT64_C(603979776),	// CMPEQri_t_Jumpnv_nt_V4
    UINT64_C(603987968),	// CMPEQri_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPEQrr
    UINT64_C(541065216),	// CMPEQrr_f_Jumpnv_nt_V4
    UINT64_C(541073408),	// CMPEQrr_f_Jumpnv_t_V4
    UINT64_C(536870912),	// CMPEQrr_t_Jumpnv_nt_V4
    UINT64_C(536879104),	// CMPEQrr_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPGT64rr
    UINT64_C(0),	// CMPGTU64rr
    UINT64_C(0),	// CMPGTUri
    UINT64_C(624951296),	// CMPGTUri_f_Jumpnv_nt_V4
    UINT64_C(624959488),	// CMPGTUri_f_Jumpnv_t_V4
    UINT64_C(620756992),	// CMPGTUri_t_Jumpnv_nt_V4
    UINT64_C(620765184),	// CMPGTUri_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPGTUrr
    UINT64_C(557842432),	// CMPGTUrr_f_Jumpnv_nt_V4
    UINT64_C(557850624),	// CMPGTUrr_f_Jumpnv_t_V4
    UINT64_C(553648128),	// CMPGTUrr_t_Jumpnv_nt_V4
    UINT64_C(553656320),	// CMPGTUrr_t_Jumpnv_t_V4
    UINT64_C(650117120),	// CMPGTn1_f_Jumpnv_nt_V4
    UINT64_C(650125312),	// CMPGTn1_f_Jumpnv_t_V4
    UINT64_C(645922816),	// CMPGTn1_t_Jumpnv_nt_V4
    UINT64_C(645931008),	// CMPGTn1_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPGTri
    UINT64_C(616562688),	// CMPGTri_f_Jumpnv_nt_V4
    UINT64_C(616570880),	// CMPGTri_f_Jumpnv_t_V4
    UINT64_C(612368384),	// CMPGTri_t_Jumpnv_nt_V4
    UINT64_C(612376576),	// CMPGTri_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPGTrr
    UINT64_C(549453824),	// CMPGTrr_f_Jumpnv_nt_V4
    UINT64_C(549462016),	// CMPGTrr_f_Jumpnv_t_V4
    UINT64_C(545259520),	// CMPGTrr_t_Jumpnv_nt_V4
    UINT64_C(545267712),	// CMPGTrr_t_Jumpnv_t_V4
    UINT64_C(574619648),	// CMPLTUrr_f_Jumpnv_nt_V4
    UINT64_C(574627840),	// CMPLTUrr_f_Jumpnv_t_V4
    UINT64_C(570425344),	// CMPLTUrr_t_Jumpnv_nt_V4
    UINT64_C(570433536),	// CMPLTUrr_t_Jumpnv_t_V4
    UINT64_C(566231040),	// CMPLTrr_f_Jumpnv_nt_V4
    UINT64_C(566239232),	// CMPLTrr_f_Jumpnv_t_V4
    UINT64_C(562036736),	// CMPLTrr_t_Jumpnv_nt_V4
    UINT64_C(562044928),	// CMPLTrr_t_Jumpnv_t_V4
    UINT64_C(0),	// CMPbEQri_V4
    UINT64_C(0),	// CMPbEQrr_sbsb_V4
    UINT64_C(0),	// CMPbEQrr_ubub_V4
    UINT64_C(0),	// CMPbGTUri_V4
    UINT64_C(0),	// CMPbGTUrr_V4
    UINT64_C(0),	// CMPbGTrr_V4
    UINT64_C(0),	// CMPhEQri_V4
    UINT64_C(0),	// CMPhEQrr_shl_V4
    UINT64_C(0),	// CMPhEQrr_xor_V4
    UINT64_C(0),	// CMPhGTUri_V4
    UINT64_C(0),	// CMPhGTUrr_V4
    UINT64_C(0),	// CMPhGTrr_shl_V4
    UINT64_C(0),	// CMPnotEQ_rr
    UINT64_C(0),	// CMPnotGTU_rr
    UINT64_C(0),	// CMPnotGT_rr
    UINT64_C(0),	// COMBINE_Ii
    UINT64_C(0),	// COMBINE_Ir_V4
    UINT64_C(0),	// COMBINE_iI_V4
    UINT64_C(0),	// COMBINE_ii
    UINT64_C(0),	// COMBINE_rI_V4
    UINT64_C(0),	// COMBINE_rr
    UINT64_C(0),	// COMBINE_rr_cNotPt
    UINT64_C(0),	// COMBINE_rr_cPt
    UINT64_C(0),	// COMBINE_rr_cdnNotPt
    UINT64_C(0),	// COMBINE_rr_cdnPt
    UINT64_C(0),	// CONST32
    UINT64_C(0),	// CONST32GP_set
    UINT64_C(0),	// CONST32_Float_Real
    UINT64_C(0),	// CONST32_Int_Real
    UINT64_C(0),	// CONST32_Label
    UINT64_C(0),	// CONST32_set
    UINT64_C(0),	// CONST32_set_jt
    UINT64_C(0),	// CONST64_Float_Real
    UINT64_C(0),	// CONST64_Int_Real
    UINT64_C(0),	// CONVERT_d2df
    UINT64_C(0),	// CONVERT_d2sf
    UINT64_C(0),	// CONVERT_df2d
    UINT64_C(0),	// CONVERT_df2d_nchop
    UINT64_C(0),	// CONVERT_df2sf
    UINT64_C(0),	// CONVERT_df2ud
    UINT64_C(0),	// CONVERT_df2ud_nchop
    UINT64_C(0),	// CONVERT_df2uw
    UINT64_C(0),	// CONVERT_df2uw_nchop
    UINT64_C(0),	// CONVERT_df2w
    UINT64_C(0),	// CONVERT_df2w_nchop
    UINT64_C(0),	// CONVERT_sf2d
    UINT64_C(0),	// CONVERT_sf2d_nchop
    UINT64_C(0),	// CONVERT_sf2df
    UINT64_C(0),	// CONVERT_sf2ud
    UINT64_C(0),	// CONVERT_sf2ud_nchop
    UINT64_C(0),	// CONVERT_sf2uw
    UINT64_C(0),	// CONVERT_sf2uw_nchop
    UINT64_C(0),	// CONVERT_sf2w
    UINT64_C(0),	// CONVERT_sf2w_nchop
    UINT64_C(0),	// CONVERT_ud2df
    UINT64_C(0),	// CONVERT_ud2sf
    UINT64_C(0),	// CONVERT_uw2df
    UINT64_C(0),	// CONVERT_uw2sf
    UINT64_C(0),	// CONVERT_w2df
    UINT64_C(0),	// CONVERT_w2sf
    UINT64_C(0),	// CTLZ64_rr
    UINT64_C(0),	// CTLZ_rr
    UINT64_C(0),	// CTTZ64_rr
    UINT64_C(0),	// CTTZ_rr
    UINT64_C(0),	// DEALLOCFRAME
    UINT64_C(0),	// DEALLOC_RET_V4
    UINT64_C(0),	// DEALLOC_RET_cNotPt_V4
    UINT64_C(0),	// DEALLOC_RET_cNotdnPnt_V4
    UINT64_C(0),	// DEALLOC_RET_cNotdnPt_V4
    UINT64_C(0),	// DEALLOC_RET_cPt_V4
    UINT64_C(0),	// DEALLOC_RET_cdnPnt_V4
    UINT64_C(0),	// DEALLOC_RET_cdnPt_V4
    UINT64_C(1384120320),	// EH_RETURN_JMPR
    UINT64_C(0),
    UINT64_C(0),	// FCMPOEQ32_rr
    UINT64_C(0),	// FCMPOEQ64_rr
    UINT64_C(0),	// FCMPOGE32_rr
    UINT64_C(0),	// FCMPOGE64_rr
    UINT64_C(0),	// FCMPOGT32_rr
    UINT64_C(0),	// FCMPOGT64_rr
    UINT64_C(0),	// FCMPUEQ32_rr
    UINT64_C(0),	// FCMPUEQ64_rr
    UINT64_C(0),	// FCMPUGE32_rr
    UINT64_C(0),	// FCMPUGE64_rr
    UINT64_C(0),	// FCMPUGT32_rr
    UINT64_C(0),	// FCMPUGT64_rr
    UINT64_C(0),	// FCONST32_nsdata
    UINT64_C(0),	// FMADD_dp
    UINT64_C(0),	// FMADD_sp
    UINT64_C(0),	// FMAX_dp
    UINT64_C(0),	// FMAX_sp
    UINT64_C(0),	// FMIN_dp
    UINT64_C(0),	// FMIN_sp
    UINT64_C(0),	// HEXAGON_A2_abs
    UINT64_C(0),	// HEXAGON_A2_absp
    UINT64_C(0),	// HEXAGON_A2_abssat
    UINT64_C(0),	// HEXAGON_A2_add
    UINT64_C(0),	// HEXAGON_A2_addh_h16_hh
    UINT64_C(0),	// HEXAGON_A2_addh_h16_hl
    UINT64_C(0),	// HEXAGON_A2_addh_h16_lh
    UINT64_C(0),	// HEXAGON_A2_addh_h16_ll
    UINT64_C(0),	// HEXAGON_A2_addh_h16_sat_hh
    UINT64_C(0),	// HEXAGON_A2_addh_h16_sat_hl
    UINT64_C(0),	// HEXAGON_A2_addh_h16_sat_lh
    UINT64_C(0),	// HEXAGON_A2_addh_h16_sat_ll
    UINT64_C(0),	// HEXAGON_A2_addh_l16_hl
    UINT64_C(0),	// HEXAGON_A2_addh_l16_ll
    UINT64_C(0),	// HEXAGON_A2_addh_l16_sat_hl
    UINT64_C(0),	// HEXAGON_A2_addh_l16_sat_ll
    UINT64_C(0),	// HEXAGON_A2_addi
    UINT64_C(0),	// HEXAGON_A2_addp
    UINT64_C(0),	// HEXAGON_A2_addsat
    UINT64_C(0),	// HEXAGON_A2_and
    UINT64_C(0),	// HEXAGON_A2_andir
    UINT64_C(0),	// HEXAGON_A2_andp
    UINT64_C(0),	// HEXAGON_A2_aslh
    UINT64_C(0),	// HEXAGON_A2_asrh
    UINT64_C(0),	// HEXAGON_A2_combine_hh
    UINT64_C(0),	// HEXAGON_A2_combine_hl
    UINT64_C(0),	// HEXAGON_A2_combine_lh
    UINT64_C(0),	// HEXAGON_A2_combine_ll
    UINT64_C(0),	// HEXAGON_A2_combineii
    UINT64_C(0),	// HEXAGON_A2_combinew
    UINT64_C(0),	// HEXAGON_A2_max
    UINT64_C(0),	// HEXAGON_A2_maxu
    UINT64_C(0),	// HEXAGON_A2_min
    UINT64_C(0),	// HEXAGON_A2_minu
    UINT64_C(0),	// HEXAGON_A2_neg
    UINT64_C(0),	// HEXAGON_A2_negp
    UINT64_C(0),	// HEXAGON_A2_negsat
    UINT64_C(0),	// HEXAGON_A2_not
    UINT64_C(0),	// HEXAGON_A2_notp
    UINT64_C(0),	// HEXAGON_A2_or
    UINT64_C(0),	// HEXAGON_A2_orir
    UINT64_C(0),	// HEXAGON_A2_orp
    UINT64_C(0),	// HEXAGON_A2_sat
    UINT64_C(0),	// HEXAGON_A2_satb
    UINT64_C(0),	// HEXAGON_A2_sath
    UINT64_C(0),	// HEXAGON_A2_satub
    UINT64_C(0),	// HEXAGON_A2_satuh
    UINT64_C(0),	// HEXAGON_A2_sub
    UINT64_C(0),	// HEXAGON_A2_subh_h16_hh
    UINT64_C(0),	// HEXAGON_A2_subh_h16_hl
    UINT64_C(0),	// HEXAGON_A2_subh_h16_lh
    UINT64_C(0),	// HEXAGON_A2_subh_h16_ll
    UINT64_C(0),	// HEXAGON_A2_subh_h16_sat_hh
    UINT64_C(0),	// HEXAGON_A2_subh_h16_sat_hl
    UINT64_C(0),	// HEXAGON_A2_subh_h16_sat_lh
    UINT64_C(0),	// HEXAGON_A2_subh_h16_sat_ll
    UINT64_C(0),	// HEXAGON_A2_subh_l16_hl
    UINT64_C(0),	// HEXAGON_A2_subh_l16_ll
    UINT64_C(0),	// HEXAGON_A2_subh_l16_sat_hl
    UINT64_C(0),	// HEXAGON_A2_subh_l16_sat_ll
    UINT64_C(0),	// HEXAGON_A2_subp
    UINT64_C(0),	// HEXAGON_A2_subri
    UINT64_C(0),	// HEXAGON_A2_subsat
    UINT64_C(0),	// HEXAGON_A2_svaddh
    UINT64_C(0),	// HEXAGON_A2_svaddhs
    UINT64_C(0),	// HEXAGON_A2_svadduhs
    UINT64_C(0),	// HEXAGON_A2_svavgh
    UINT64_C(0),	// HEXAGON_A2_svavghs
    UINT64_C(0),	// HEXAGON_A2_svnavgh
    UINT64_C(0),	// HEXAGON_A2_svsubh
    UINT64_C(0),	// HEXAGON_A2_svsubhs
    UINT64_C(0),	// HEXAGON_A2_svsubuhs
    UINT64_C(0),	// HEXAGON_A2_swiz
    UINT64_C(0),	// HEXAGON_A2_sxtb
    UINT64_C(0),	// HEXAGON_A2_sxth
    UINT64_C(0),	// HEXAGON_A2_sxtw
    UINT64_C(0),	// HEXAGON_A2_tfr
    UINT64_C(0),	// HEXAGON_A2_tfrih
    UINT64_C(0),	// HEXAGON_A2_tfril
    UINT64_C(0),	// HEXAGON_A2_tfrp
    UINT64_C(0),	// HEXAGON_A2_tfrpi
    UINT64_C(0),	// HEXAGON_A2_tfrsi
    UINT64_C(0),	// HEXAGON_A2_vabsh
    UINT64_C(0),	// HEXAGON_A2_vabshsat
    UINT64_C(0),	// HEXAGON_A2_vabsw
    UINT64_C(0),	// HEXAGON_A2_vabswsat
    UINT64_C(0),	// HEXAGON_A2_vaddh
    UINT64_C(0),	// HEXAGON_A2_vaddhs
    UINT64_C(0),	// HEXAGON_A2_vaddub
    UINT64_C(0),	// HEXAGON_A2_vaddubs
    UINT64_C(0),	// HEXAGON_A2_vadduhs
    UINT64_C(0),	// HEXAGON_A2_vaddw
    UINT64_C(0),	// HEXAGON_A2_vaddws
    UINT64_C(0),	// HEXAGON_A2_vavgh
    UINT64_C(0),	// HEXAGON_A2_vavghcr
    UINT64_C(0),	// HEXAGON_A2_vavghr
    UINT64_C(0),	// HEXAGON_A2_vavgub
    UINT64_C(0),	// HEXAGON_A2_vavgubr
    UINT64_C(0),	// HEXAGON_A2_vavguh
    UINT64_C(0),	// HEXAGON_A2_vavguhr
    UINT64_C(0),	// HEXAGON_A2_vavguw
    UINT64_C(0),	// HEXAGON_A2_vavguwr
    UINT64_C(0),	// HEXAGON_A2_vavgw
    UINT64_C(0),	// HEXAGON_A2_vavgwcr
    UINT64_C(0),	// HEXAGON_A2_vavgwr
    UINT64_C(0),	// HEXAGON_A2_vcmpbeq
    UINT64_C(0),	// HEXAGON_A2_vcmpbgtu
    UINT64_C(0),	// HEXAGON_A2_vcmpheq
    UINT64_C(0),	// HEXAGON_A2_vcmphgt
    UINT64_C(0),	// HEXAGON_A2_vcmphgtu
    UINT64_C(0),	// HEXAGON_A2_vcmpweq
    UINT64_C(0),	// HEXAGON_A2_vcmpwgt
    UINT64_C(0),	// HEXAGON_A2_vcmpwgtu
    UINT64_C(0),	// HEXAGON_A2_vconj
    UINT64_C(0),	// HEXAGON_A2_vmaxh
    UINT64_C(0),	// HEXAGON_A2_vmaxub
    UINT64_C(0),	// HEXAGON_A2_vmaxuh
    UINT64_C(0),	// HEXAGON_A2_vmaxuw
    UINT64_C(0),	// HEXAGON_A2_vmaxw
    UINT64_C(0),	// HEXAGON_A2_vminh
    UINT64_C(0),	// HEXAGON_A2_vminub
    UINT64_C(0),	// HEXAGON_A2_vminuh
    UINT64_C(0),	// HEXAGON_A2_vminuw
    UINT64_C(0),	// HEXAGON_A2_vminw
    UINT64_C(0),	// HEXAGON_A2_vnavgh
    UINT64_C(0),	// HEXAGON_A2_vnavghcr
    UINT64_C(0),	// HEXAGON_A2_vnavghr
    UINT64_C(0),	// HEXAGON_A2_vnavgw
    UINT64_C(0),	// HEXAGON_A2_vnavgwcr
    UINT64_C(0),	// HEXAGON_A2_vnavgwr
    UINT64_C(0),	// HEXAGON_A2_vraddub
    UINT64_C(0),	// HEXAGON_A2_vraddub_acc
    UINT64_C(0),	// HEXAGON_A2_vrsadub
    UINT64_C(0),	// HEXAGON_A2_vrsadub_acc
    UINT64_C(0),	// HEXAGON_A2_vsubh
    UINT64_C(0),	// HEXAGON_A2_vsubhs
    UINT64_C(0),	// HEXAGON_A2_vsubub
    UINT64_C(0),	// HEXAGON_A2_vsububs
    UINT64_C(0),	// HEXAGON_A2_vsubuhs
    UINT64_C(0),	// HEXAGON_A2_vsubw
    UINT64_C(0),	// HEXAGON_A2_vsubws
    UINT64_C(0),	// HEXAGON_A2_xor
    UINT64_C(0),	// HEXAGON_A2_xorp
    UINT64_C(0),	// HEXAGON_A2_zxtb
    UINT64_C(0),	// HEXAGON_A2_zxth
    UINT64_C(0),	// HEXAGON_A4_cround_ri
    UINT64_C(0),	// HEXAGON_A4_cround_rr
    UINT64_C(0),	// HEXAGON_A4_modwrapu
    UINT64_C(0),	// HEXAGON_A4_round_ri
    UINT64_C(0),	// HEXAGON_A4_round_ri_sat
    UINT64_C(0),	// HEXAGON_A4_round_rr
    UINT64_C(0),	// HEXAGON_A4_round_rr_sat
    UINT64_C(0),	// HEXAGON_A5_vaddhubs
    UINT64_C(0),	// HEXAGON_C2_all8
    UINT64_C(0),	// HEXAGON_C2_and
    UINT64_C(0),	// HEXAGON_C2_andn
    UINT64_C(0),	// HEXAGON_C2_any8
    UINT64_C(0),	// HEXAGON_C2_cmpeq
    UINT64_C(0),	// HEXAGON_C2_cmpeqi
    UINT64_C(0),	// HEXAGON_C2_cmpeqp
    UINT64_C(0),	// HEXAGON_C2_cmpgei
    UINT64_C(0),	// HEXAGON_C2_cmpgeui
    UINT64_C(0),	// HEXAGON_C2_cmpgt
    UINT64_C(0),	// HEXAGON_C2_cmpgti
    UINT64_C(0),	// HEXAGON_C2_cmpgtp
    UINT64_C(0),	// HEXAGON_C2_cmpgtu
    UINT64_C(0),	// HEXAGON_C2_cmpgtui
    UINT64_C(0),	// HEXAGON_C2_cmpgtup
    UINT64_C(0),	// HEXAGON_C2_cmplt
    UINT64_C(0),	// HEXAGON_C2_cmpltu
    UINT64_C(0),	// HEXAGON_C2_mask
    UINT64_C(0),	// HEXAGON_C2_mux
    UINT64_C(0),	// HEXAGON_C2_muxii
    UINT64_C(0),	// HEXAGON_C2_muxir
    UINT64_C(0),	// HEXAGON_C2_muxri
    UINT64_C(0),	// HEXAGON_C2_not
    UINT64_C(0),	// HEXAGON_C2_or
    UINT64_C(0),	// HEXAGON_C2_orn
    UINT64_C(0),	// HEXAGON_C2_pxfer_map
    UINT64_C(0),	// HEXAGON_C2_tfrpr
    UINT64_C(0),	// HEXAGON_C2_tfrrp
    UINT64_C(0),	// HEXAGON_C2_vitpack
    UINT64_C(0),	// HEXAGON_C2_vmux
    UINT64_C(0),	// HEXAGON_C2_xor
    UINT64_C(0),	// HEXAGON_C4_fastcorner9
    UINT64_C(0),	// HEXAGON_C4_fastcorner9_not
    UINT64_C(0),	// HEXAGON_F2_conv_d2df
    UINT64_C(0),	// HEXAGON_F2_conv_d2sf
    UINT64_C(0),	// HEXAGON_F2_conv_df2d
    UINT64_C(0),	// HEXAGON_F2_conv_df2d_chop
    UINT64_C(0),	// HEXAGON_F2_conv_df2sf
    UINT64_C(0),	// HEXAGON_F2_conv_df2ud
    UINT64_C(0),	// HEXAGON_F2_conv_df2ud_chop
    UINT64_C(0),	// HEXAGON_F2_conv_df2uw
    UINT64_C(0),	// HEXAGON_F2_conv_df2uw_chop
    UINT64_C(0),	// HEXAGON_F2_conv_df2w
    UINT64_C(0),	// HEXAGON_F2_conv_df2w_chop
    UINT64_C(0),	// HEXAGON_F2_conv_sf2d
    UINT64_C(0),	// HEXAGON_F2_conv_sf2d_chop
    UINT64_C(0),	// HEXAGON_F2_conv_sf2df
    UINT64_C(0),	// HEXAGON_F2_conv_sf2ud
    UINT64_C(0),	// HEXAGON_F2_conv_sf2ud_chop
    UINT64_C(0),	// HEXAGON_F2_conv_sf2uw
    UINT64_C(0),	// HEXAGON_F2_conv_sf2uw_chop
    UINT64_C(0),	// HEXAGON_F2_conv_sf2w
    UINT64_C(0),	// HEXAGON_F2_conv_sf2w_chop
    UINT64_C(0),	// HEXAGON_F2_conv_ud2df
    UINT64_C(0),	// HEXAGON_F2_conv_ud2sf
    UINT64_C(0),	// HEXAGON_F2_conv_uw2df
    UINT64_C(0),	// HEXAGON_F2_conv_uw2sf
    UINT64_C(0),	// HEXAGON_F2_conv_w2df
    UINT64_C(0),	// HEXAGON_F2_conv_w2sf
    UINT64_C(0),	// HEXAGON_F2_dfadd
    UINT64_C(0),	// HEXAGON_F2_dfclass
    UINT64_C(0),	// HEXAGON_F2_dfcmpeq
    UINT64_C(0),	// HEXAGON_F2_dfcmpge
    UINT64_C(0),	// HEXAGON_F2_dfcmpgt
    UINT64_C(0),	// HEXAGON_F2_dfcmpuo
    UINT64_C(0),	// HEXAGON_F2_dffixupd
    UINT64_C(0),	// HEXAGON_F2_dffixupn
    UINT64_C(0),	// HEXAGON_F2_dffixupr
    UINT64_C(0),	// HEXAGON_F2_dffma
    UINT64_C(0),	// HEXAGON_F2_dffma_lib
    UINT64_C(0),	// HEXAGON_F2_dffma_sc
    UINT64_C(0),	// HEXAGON_F2_dffms
    UINT64_C(0),	// HEXAGON_F2_dffms_lib
    UINT64_C(0),	// HEXAGON_F2_dfimm_n
    UINT64_C(0),	// HEXAGON_F2_dfimm_p
    UINT64_C(0),	// HEXAGON_F2_dfmax
    UINT64_C(0),	// HEXAGON_F2_dfmin
    UINT64_C(0),	// HEXAGON_F2_dfmpy
    UINT64_C(0),	// HEXAGON_F2_dfsub
    UINT64_C(0),	// HEXAGON_F2_sfadd
    UINT64_C(0),	// HEXAGON_F2_sfclass
    UINT64_C(0),	// HEXAGON_F2_sfcmpeq
    UINT64_C(0),	// HEXAGON_F2_sfcmpge
    UINT64_C(0),	// HEXAGON_F2_sfcmpgt
    UINT64_C(0),	// HEXAGON_F2_sfcmpuo
    UINT64_C(0),	// HEXAGON_F2_sffixupd
    UINT64_C(0),	// HEXAGON_F2_sffixupn
    UINT64_C(0),	// HEXAGON_F2_sffixupr
    UINT64_C(0),	// HEXAGON_F2_sffma
    UINT64_C(0),	// HEXAGON_F2_sffma_lib
    UINT64_C(0),	// HEXAGON_F2_sffma_sc
    UINT64_C(0),	// HEXAGON_F2_sffms
    UINT64_C(0),	// HEXAGON_F2_sffms_lib
    UINT64_C(0),	// HEXAGON_F2_sfimm_n
    UINT64_C(0),	// HEXAGON_F2_sfimm_p
    UINT64_C(0),	// HEXAGON_F2_sfmax
    UINT64_C(0),	// HEXAGON_F2_sfmin
    UINT64_C(0),	// HEXAGON_F2_sfmpy
    UINT64_C(0),	// HEXAGON_F2_sfsub
    UINT64_C(0),	// HEXAGON_M2_acci
    UINT64_C(0),	// HEXAGON_M2_accii
    UINT64_C(0),	// HEXAGON_M2_cmaci_s0
    UINT64_C(0),	// HEXAGON_M2_cmacr_s0
    UINT64_C(0),	// HEXAGON_M2_cmacs_s0
    UINT64_C(0),	// HEXAGON_M2_cmacs_s1
    UINT64_C(0),	// HEXAGON_M2_cmacsc_s0
    UINT64_C(0),	// HEXAGON_M2_cmacsc_s1
    UINT64_C(0),	// HEXAGON_M2_cmpyi_s0
    UINT64_C(0),	// HEXAGON_M2_cmpyr_s0
    UINT64_C(0),	// HEXAGON_M2_cmpyrs_s0
    UINT64_C(0),	// HEXAGON_M2_cmpyrs_s1
    UINT64_C(0),	// HEXAGON_M2_cmpyrsc_s0
    UINT64_C(0),	// HEXAGON_M2_cmpyrsc_s1
    UINT64_C(0),	// HEXAGON_M2_cmpys_s0
    UINT64_C(0),	// HEXAGON_M2_cmpys_s1
    UINT64_C(0),	// HEXAGON_M2_cmpysc_s0
    UINT64_C(0),	// HEXAGON_M2_cmpysc_s1
    UINT64_C(0),	// HEXAGON_M2_cnacs_s0
    UINT64_C(0),	// HEXAGON_M2_cnacs_s1
    UINT64_C(0),	// HEXAGON_M2_cnacsc_s0
    UINT64_C(0),	// HEXAGON_M2_cnacsc_s1
    UINT64_C(0),	// HEXAGON_M2_dpmpyss_acc_s0
    UINT64_C(0),	// HEXAGON_M2_dpmpyss_nac_s0
    UINT64_C(0),	// HEXAGON_M2_dpmpyss_rnd_s0
    UINT64_C(0),	// HEXAGON_M2_dpmpyss_s0
    UINT64_C(0),	// HEXAGON_M2_dpmpyuu_acc_s0
    UINT64_C(0),	// HEXAGON_M2_dpmpyuu_nac_s0
    UINT64_C(0),	// HEXAGON_M2_dpmpyuu_s0
    UINT64_C(0),	// HEXAGON_M2_hmmpyh_rs1
    UINT64_C(0),	// HEXAGON_M2_hmmpyl_rs1
    UINT64_C(0),	// HEXAGON_M2_maci
    UINT64_C(0),	// HEXAGON_M2_macsin
    UINT64_C(0),	// HEXAGON_M2_macsip
    UINT64_C(0),	// HEXAGON_M2_mmachs_rs0
    UINT64_C(0),	// HEXAGON_M2_mmachs_rs1
    UINT64_C(0),	// HEXAGON_M2_mmachs_s0
    UINT64_C(0),	// HEXAGON_M2_mmachs_s1
    UINT64_C(0),	// HEXAGON_M2_mmacls_rs0
    UINT64_C(0),	// HEXAGON_M2_mmacls_rs1
    UINT64_C(0),	// HEXAGON_M2_mmacls_s0
    UINT64_C(0),	// HEXAGON_M2_mmacls_s1
    UINT64_C(0),	// HEXAGON_M2_mmacuhs_rs0
    UINT64_C(0),	// HEXAGON_M2_mmacuhs_rs1
    UINT64_C(0),	// HEXAGON_M2_mmacuhs_s0
    UINT64_C(0),	// HEXAGON_M2_mmacuhs_s1
    UINT64_C(0),	// HEXAGON_M2_mmaculs_rs0
    UINT64_C(0),	// HEXAGON_M2_mmaculs_rs1
    UINT64_C(0),	// HEXAGON_M2_mmaculs_s0
    UINT64_C(0),	// HEXAGON_M2_mmaculs_s1
    UINT64_C(0),	// HEXAGON_M2_mmpyh_rs0
    UINT64_C(0),	// HEXAGON_M2_mmpyh_rs1
    UINT64_C(0),	// HEXAGON_M2_mmpyh_s0
    UINT64_C(0),	// HEXAGON_M2_mmpyh_s1
    UINT64_C(0),	// HEXAGON_M2_mmpyl_rs0
    UINT64_C(0),	// HEXAGON_M2_mmpyl_rs1
    UINT64_C(0),	// HEXAGON_M2_mmpyl_s0
    UINT64_C(0),	// HEXAGON_M2_mmpyl_s1
    UINT64_C(0),	// HEXAGON_M2_mmpyuh_rs0
    UINT64_C(0),	// HEXAGON_M2_mmpyuh_rs1
    UINT64_C(0),	// HEXAGON_M2_mmpyuh_s0
    UINT64_C(0),	// HEXAGON_M2_mmpyuh_s1
    UINT64_C(0),	// HEXAGON_M2_mmpyul_rs0
    UINT64_C(0),	// HEXAGON_M2_mmpyul_rs1
    UINT64_C(0),	// HEXAGON_M2_mmpyul_s0
    UINT64_C(0),	// HEXAGON_M2_mmpyul_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_acc_sat_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_nac_sat_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_rnd_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpy_sat_rnd_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpy_up
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_acc_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_nac_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyd_rnd_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyi
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_acc_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyu_nac_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyu_up
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_acc_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_hh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_hh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_hl_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_hl_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_lh_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_lh_s1
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_ll_s0
    UINT64_C(0),	// HEXAGON_M2_mpyud_nac_ll_s1
    UINT64_C(0),	// HEXAGON_M2_mpyui
    UINT64_C(0),	// HEXAGON_M2_nacci
    UINT64_C(0),	// HEXAGON_M2_naccii
    UINT64_C(0),	// HEXAGON_M2_subacc
    UINT64_C(0),	// HEXAGON_M2_vabsdiffh
    UINT64_C(0),	// HEXAGON_M2_vabsdiffw
    UINT64_C(0),	// HEXAGON_M2_vcmac_s0_sat_i
    UINT64_C(0),	// HEXAGON_M2_vcmac_s0_sat_r
    UINT64_C(0),	// HEXAGON_M2_vcmpy_s0_sat_i
    UINT64_C(0),	// HEXAGON_M2_vcmpy_s0_sat_r
    UINT64_C(0),	// HEXAGON_M2_vcmpy_s1_sat_i
    UINT64_C(0),	// HEXAGON_M2_vcmpy_s1_sat_r
    UINT64_C(0),	// HEXAGON_M2_vdmacs_s0
    UINT64_C(0),	// HEXAGON_M2_vdmacs_s1
    UINT64_C(0),	// HEXAGON_M2_vdmpyrs_s0
    UINT64_C(0),	// HEXAGON_M2_vdmpyrs_s1
    UINT64_C(0),	// HEXAGON_M2_vdmpys_s0
    UINT64_C(0),	// HEXAGON_M2_vdmpys_s1
    UINT64_C(0),	// HEXAGON_M2_vmac2
    UINT64_C(0),	// HEXAGON_M2_vmac2es
    UINT64_C(0),	// HEXAGON_M2_vmac2es_s0
    UINT64_C(0),	// HEXAGON_M2_vmac2es_s1
    UINT64_C(0),	// HEXAGON_M2_vmac2s_s0
    UINT64_C(0),	// HEXAGON_M2_vmac2s_s1
    UINT64_C(0),	// HEXAGON_M2_vmpy2es_s0
    UINT64_C(0),	// HEXAGON_M2_vmpy2es_s1
    UINT64_C(0),	// HEXAGON_M2_vmpy2s_s0
    UINT64_C(0),	// HEXAGON_M2_vmpy2s_s0pack
    UINT64_C(0),	// HEXAGON_M2_vmpy2s_s1
    UINT64_C(0),	// HEXAGON_M2_vmpy2s_s1pack
    UINT64_C(0),	// HEXAGON_M2_vrcmaci_s0
    UINT64_C(0),	// HEXAGON_M2_vrcmaci_s0c
    UINT64_C(0),	// HEXAGON_M2_vrcmacr_s0
    UINT64_C(0),	// HEXAGON_M2_vrcmacr_s0c
    UINT64_C(0),	// HEXAGON_M2_vrcmpyi_s0
    UINT64_C(0),	// HEXAGON_M2_vrcmpyi_s0c
    UINT64_C(0),	// HEXAGON_M2_vrcmpyr_s0
    UINT64_C(0),	// HEXAGON_M2_vrcmpyr_s0c
    UINT64_C(0),	// HEXAGON_M2_vrmac_s0
    UINT64_C(0),	// HEXAGON_M2_vrmpy_s0
    UINT64_C(0),	// HEXAGON_M2_xor_xacc
    UINT64_C(0),	// HEXAGON_M4_and_and
    UINT64_C(0),	// HEXAGON_M4_and_andn
    UINT64_C(0),	// HEXAGON_M4_and_or
    UINT64_C(0),	// HEXAGON_M4_and_xor
    UINT64_C(0),	// HEXAGON_M4_or_and
    UINT64_C(0),	// HEXAGON_M4_or_andn
    UINT64_C(0),	// HEXAGON_M4_or_or
    UINT64_C(0),	// HEXAGON_M4_or_xor
    UINT64_C(0),	// HEXAGON_M4_xor_and
    UINT64_C(0),	// HEXAGON_M4_xor_andn
    UINT64_C(0),	// HEXAGON_M4_xor_or
    UINT64_C(0),	// HEXAGON_M5_vdmacbsu
    UINT64_C(0),	// HEXAGON_M5_vdmpybsu
    UINT64_C(0),	// HEXAGON_M5_vmacbsu
    UINT64_C(0),	// HEXAGON_M5_vmacbuu
    UINT64_C(0),	// HEXAGON_M5_vmpybsu
    UINT64_C(0),	// HEXAGON_M5_vmpybuu
    UINT64_C(0),	// HEXAGON_M5_vrmacbsu
    UINT64_C(0),	// HEXAGON_M5_vrmacbuu
    UINT64_C(0),	// HEXAGON_M5_vrmpybsu
    UINT64_C(0),	// HEXAGON_M5_vrmpybuu
    UINT64_C(0),	// HEXAGON_S2_addasl_rrri
    UINT64_C(0),	// HEXAGON_S2_asl_i_p
    UINT64_C(0),	// HEXAGON_S2_asl_i_p_acc
    UINT64_C(0),	// HEXAGON_S2_asl_i_p_and
    UINT64_C(0),	// HEXAGON_S2_asl_i_p_nac
    UINT64_C(0),	// HEXAGON_S2_asl_i_p_or
    UINT64_C(0),	// HEXAGON_S2_asl_i_p_xacc
    UINT64_C(0),	// HEXAGON_S2_asl_i_r
    UINT64_C(0),	// HEXAGON_S2_asl_i_r_acc
    UINT64_C(0),	// HEXAGON_S2_asl_i_r_and
    UINT64_C(0),	// HEXAGON_S2_asl_i_r_nac
    UINT64_C(0),	// HEXAGON_S2_asl_i_r_or
    UINT64_C(0),	// HEXAGON_S2_asl_i_r_sat
    UINT64_C(0),	// HEXAGON_S2_asl_i_r_xacc
    UINT64_C(0),	// HEXAGON_S2_asl_i_vh
    UINT64_C(0),	// HEXAGON_S2_asl_i_vw
    UINT64_C(0),	// HEXAGON_S2_asl_r_p
    UINT64_C(0),	// HEXAGON_S2_asl_r_p_acc
    UINT64_C(0),	// HEXAGON_S2_asl_r_p_and
    UINT64_C(0),	// HEXAGON_S2_asl_r_p_nac
    UINT64_C(0),	// HEXAGON_S2_asl_r_p_or
    UINT64_C(0),	// HEXAGON_S2_asl_r_r
    UINT64_C(0),	// HEXAGON_S2_asl_r_r_acc
    UINT64_C(0),	// HEXAGON_S2_asl_r_r_and
    UINT64_C(0),	// HEXAGON_S2_asl_r_r_nac
    UINT64_C(0),	// HEXAGON_S2_asl_r_r_or
    UINT64_C(0),	// HEXAGON_S2_asl_r_r_sat
    UINT64_C(0),	// HEXAGON_S2_asl_r_vh
    UINT64_C(0),	// HEXAGON_S2_asl_r_vw
    UINT64_C(0),	// HEXAGON_S2_asr_i_p
    UINT64_C(0),	// HEXAGON_S2_asr_i_p_acc
    UINT64_C(0),	// HEXAGON_S2_asr_i_p_and
    UINT64_C(0),	// HEXAGON_S2_asr_i_p_nac
    UINT64_C(0),	// HEXAGON_S2_asr_i_p_or
    UINT64_C(0),	// HEXAGON_S2_asr_i_p_rnd
    UINT64_C(0),	// HEXAGON_S2_asr_i_p_rnd_goodsyntax
    UINT64_C(0),	// HEXAGON_S2_asr_i_r
    UINT64_C(0),	// HEXAGON_S2_asr_i_r_acc
    UINT64_C(0),	// HEXAGON_S2_asr_i_r_and
    UINT64_C(0),	// HEXAGON_S2_asr_i_r_nac
    UINT64_C(0),	// HEXAGON_S2_asr_i_r_or
    UINT64_C(0),	// HEXAGON_S2_asr_i_r_rnd
    UINT64_C(0),	// HEXAGON_S2_asr_i_r_rnd_goodsyntax
    UINT64_C(0),	// HEXAGON_S2_asr_i_svw_trun
    UINT64_C(0),	// HEXAGON_S2_asr_i_vh
    UINT64_C(0),	// HEXAGON_S2_asr_i_vw
    UINT64_C(0),	// HEXAGON_S2_asr_r_p
    UINT64_C(0),	// HEXAGON_S2_asr_r_p_acc
    UINT64_C(0),	// HEXAGON_S2_asr_r_p_and
    UINT64_C(0),	// HEXAGON_S2_asr_r_p_nac
    UINT64_C(0),	// HEXAGON_S2_asr_r_p_or
    UINT64_C(0),	// HEXAGON_S2_asr_r_r
    UINT64_C(0),	// HEXAGON_S2_asr_r_r_acc
    UINT64_C(0),	// HEXAGON_S2_asr_r_r_and
    UINT64_C(0),	// HEXAGON_S2_asr_r_r_nac
    UINT64_C(0),	// HEXAGON_S2_asr_r_r_or
    UINT64_C(0),	// HEXAGON_S2_asr_r_r_sat
    UINT64_C(0),	// HEXAGON_S2_asr_r_svw_trun
    UINT64_C(0),	// HEXAGON_S2_asr_r_vh
    UINT64_C(0),	// HEXAGON_S2_asr_r_vw
    UINT64_C(0),	// HEXAGON_S2_cl0
    UINT64_C(0),	// HEXAGON_S2_cl0p
    UINT64_C(0),	// HEXAGON_S2_cl1
    UINT64_C(0),	// HEXAGON_S2_cl1p
    UINT64_C(0),	// HEXAGON_S2_clb
    UINT64_C(0),	// HEXAGON_S2_clbnorm
    UINT64_C(0),	// HEXAGON_S2_clbp
    UINT64_C(0),	// HEXAGON_S2_clrbit_i
    UINT64_C(0),	// HEXAGON_S2_clrbit_r
    UINT64_C(0),	// HEXAGON_S2_ct0
    UINT64_C(0),	// HEXAGON_S2_ct1
    UINT64_C(0),	// HEXAGON_S2_extractu
    UINT64_C(0),	// HEXAGON_S2_extractu_rp
    UINT64_C(0),	// HEXAGON_S2_extractup
    UINT64_C(0),	// HEXAGON_S2_extractup_rp
    UINT64_C(0),	// HEXAGON_S2_lsl_r_p
    UINT64_C(0),	// HEXAGON_S2_lsl_r_p_acc
    UINT64_C(0),	// HEXAGON_S2_lsl_r_p_and
    UINT64_C(0),	// HEXAGON_S2_lsl_r_p_nac
    UINT64_C(0),	// HEXAGON_S2_lsl_r_p_or
    UINT64_C(0),	// HEXAGON_S2_lsl_r_r
    UINT64_C(0),	// HEXAGON_S2_lsl_r_r_acc
    UINT64_C(0),	// HEXAGON_S2_lsl_r_r_and
    UINT64_C(0),	// HEXAGON_S2_lsl_r_r_nac
    UINT64_C(0),	// HEXAGON_S2_lsl_r_r_or
    UINT64_C(0),	// HEXAGON_S2_lsl_r_vh
    UINT64_C(0),	// HEXAGON_S2_lsl_r_vw
    UINT64_C(0),	// HEXAGON_S2_lsr_i_p
    UINT64_C(0),	// HEXAGON_S2_lsr_i_p_acc
    UINT64_C(0),	// HEXAGON_S2_lsr_i_p_and
    UINT64_C(0),	// HEXAGON_S2_lsr_i_p_nac
    UINT64_C(0),	// HEXAGON_S2_lsr_i_p_or
    UINT64_C(0),	// HEXAGON_S2_lsr_i_p_xacc
    UINT64_C(0),	// HEXAGON_S2_lsr_i_r
    UINT64_C(0),	// HEXAGON_S2_lsr_i_r_acc
    UINT64_C(0),	// HEXAGON_S2_lsr_i_r_and
    UINT64_C(0),	// HEXAGON_S2_lsr_i_r_nac
    UINT64_C(0),	// HEXAGON_S2_lsr_i_r_or
    UINT64_C(0),	// HEXAGON_S2_lsr_i_r_xacc
    UINT64_C(0),	// HEXAGON_S2_lsr_i_vh
    UINT64_C(0),	// HEXAGON_S2_lsr_i_vw
    UINT64_C(0),	// HEXAGON_S2_lsr_r_p
    UINT64_C(0),	// HEXAGON_S2_lsr_r_p_acc
    UINT64_C(0),	// HEXAGON_S2_lsr_r_p_and
    UINT64_C(0),	// HEXAGON_S2_lsr_r_p_nac
    UINT64_C(0),	// HEXAGON_S2_lsr_r_p_or
    UINT64_C(0),	// HEXAGON_S2_lsr_r_r
    UINT64_C(0),	// HEXAGON_S2_lsr_r_r_acc
    UINT64_C(0),	// HEXAGON_S2_lsr_r_r_and
    UINT64_C(0),	// HEXAGON_S2_lsr_r_r_nac
    UINT64_C(0),	// HEXAGON_S2_lsr_r_r_or
    UINT64_C(0),	// HEXAGON_S2_lsr_r_vh
    UINT64_C(0),	// HEXAGON_S2_lsr_r_vw
    UINT64_C(0),	// HEXAGON_S2_packhl
    UINT64_C(0),	// HEXAGON_S2_parityp
    UINT64_C(0),	// HEXAGON_S2_setbit_i
    UINT64_C(0),	// HEXAGON_S2_setbit_r
    UINT64_C(0),	// HEXAGON_S2_shuffeb
    UINT64_C(0),	// HEXAGON_S2_shuffeh
    UINT64_C(0),	// HEXAGON_S2_shuffob
    UINT64_C(0),	// HEXAGON_S2_shuffoh
    UINT64_C(0),	// HEXAGON_S2_svsathb
    UINT64_C(0),	// HEXAGON_S2_svsathub
    UINT64_C(0),	// HEXAGON_S2_togglebit_i
    UINT64_C(0),	// HEXAGON_S2_togglebit_r
    UINT64_C(0),	// HEXAGON_S2_tstbit_i
    UINT64_C(0),	// HEXAGON_S2_tstbit_r
    UINT64_C(0),	// HEXAGON_S2_valignib
    UINT64_C(0),	// HEXAGON_S2_valignrb
    UINT64_C(0),	// HEXAGON_S2_vcrotate
    UINT64_C(0),	// HEXAGON_S2_vrndpackwh
    UINT64_C(0),	// HEXAGON_S2_vrndpackwhs
    UINT64_C(0),	// HEXAGON_S2_vsathb
    UINT64_C(0),	// HEXAGON_S2_vsathb_nopack
    UINT64_C(0),	// HEXAGON_S2_vsathub
    UINT64_C(0),	// HEXAGON_S2_vsathub_nopack
    UINT64_C(0),	// HEXAGON_S2_vsatwh
    UINT64_C(0),	// HEXAGON_S2_vsatwh_nopack
    UINT64_C(0),	// HEXAGON_S2_vsatwuh
    UINT64_C(0),	// HEXAGON_S2_vsatwuh_nopack
    UINT64_C(0),	// HEXAGON_S2_vsplatrb
    UINT64_C(0),	// HEXAGON_S2_vsplatrh
    UINT64_C(0),	// HEXAGON_S2_vsxtbh
    UINT64_C(0),	// HEXAGON_S2_vsxthw
    UINT64_C(0),	// HEXAGON_S2_vtrunehb
    UINT64_C(0),	// HEXAGON_S2_vtrunewh
    UINT64_C(0),	// HEXAGON_S2_vtrunohb
    UINT64_C(0),	// HEXAGON_S2_vtrunowh
    UINT64_C(0),	// HEXAGON_S2_vzxtbh
    UINT64_C(0),	// HEXAGON_S2_vzxthw
    UINT64_C(0),	// HEXAGON_S4_or_andi
    UINT64_C(0),	// HEXAGON_S4_or_andix
    UINT64_C(0),	// HEXAGON_S4_or_ori
    UINT64_C(0),	// HEXAGON_S5_asrhub_rnd_sat_goodsyntax
    UINT64_C(0),	// HEXAGON_S5_asrhub_sat
    UINT64_C(0),	// HEXAGON_S5_popcountp
    UINT64_C(0),	// HEXAGON_S5_vasrhrnd_goodsyntax
    UINT64_C(0),	// HEXAGON_circ_ldd
    UINT64_C(0),	// HI
    UINT64_C(0),	// HI_jt
    UINT64_C(0),	// HI_label
    UINT64_C(0),	// HIi
    UINT64_C(0),	// Hexagon_A2_addpsat
    UINT64_C(0),	// Hexagon_A2_addsp
    UINT64_C(0),	// Hexagon_A2_maxp
    UINT64_C(0),	// Hexagon_A2_maxup
    UINT64_C(0),	// Hexagon_A4_andn
    UINT64_C(0),	// Hexagon_A4_combineir
    UINT64_C(0),	// Hexagon_A4_combineri
    UINT64_C(0),	// Hexagon_A4_orn
    UINT64_C(0),	// Hexagon_A4_rcmpeq
    UINT64_C(0),	// Hexagon_A4_rcmpeqi
    UINT64_C(0),	// Hexagon_A4_rcmpneq
    UINT64_C(0),	// Hexagon_A4_rcmpneqi
    UINT64_C(0),	// Hexagon_C2_bitsclr
    UINT64_C(0),	// Hexagon_C2_bitsclri
    UINT64_C(0),	// Hexagon_C2_bitsset
    UINT64_C(0),	// Hexagon_C4_and_and
    UINT64_C(0),	// Hexagon_C4_and_andn
    UINT64_C(0),	// Hexagon_C4_and_or
    UINT64_C(0),	// Hexagon_C4_and_orn
    UINT64_C(0),	// Hexagon_C4_cmplte
    UINT64_C(0),	// Hexagon_C4_cmpltei
    UINT64_C(0),	// Hexagon_C4_cmplteu
    UINT64_C(0),	// Hexagon_C4_fastcorner9
    UINT64_C(0),	// Hexagon_C4_fastcorner9_not
    UINT64_C(0),	// Hexagon_C4_or_and
    UINT64_C(0),	// Hexagon_C4_or_andn
    UINT64_C(0),	// Hexagon_C4_or_or
    UINT64_C(0),	// Hexagon_C4_or_orn
    UINT64_C(0),	// Hexagon_M2_mpysmi
    UINT64_C(0),	// Hexagon_M2_vradduh
    UINT64_C(0),	// Hexagon_M2_vrcmpys_acc_s1
    UINT64_C(0),	// Hexagon_M2_vrcmpys_s1
    UINT64_C(0),	// Hexagon_M2_vrcmpys_s1rp
    UINT64_C(0),	// Hexagon_M4_xor_xacc
    UINT64_C(0),	// Hexagon_S2_brev
    UINT64_C(0),	// Hexagon_S2_deinterleave
    UINT64_C(0),	// Hexagon_S2_insert
    UINT64_C(0),	// Hexagon_S2_insert_rp
    UINT64_C(0),	// Hexagon_S2_insertp
    UINT64_C(0),	// Hexagon_S2_insertp_rp
    UINT64_C(0),	// Hexagon_S2_interleave
    UINT64_C(0),	// Hexagon_S2_lfsp
    UINT64_C(0),	// Hexagon_S2_tableidxb_goodsyntax
    UINT64_C(0),	// Hexagon_S2_tableidxd_goodsyntax
    UINT64_C(0),	// Hexagon_S2_tableidxh_goodsyntax
    UINT64_C(0),	// Hexagon_S2_tableidxw_goodsyntax
    UINT64_C(0),	// Hexagon_S2_vspliceib
    UINT64_C(0),	// Hexagon_S2_vsplicerb
    UINT64_C(0),	// Hexagon_S4_addaddi
    UINT64_C(0),	// Hexagon_S4_andnp
    UINT64_C(0),	// Hexagon_S4_ornp
    UINT64_C(0),	// Hexagon_S4_subaddi
    UINT64_C(0),	// IMMEXT_b
    UINT64_C(0),	// IMMEXT_c
    UINT64_C(0),	// IMMEXT_g
    UINT64_C(0),	// IMMEXT_i
    UINT64_C(1476395008),	// JMP
    UINT64_C(1384120320),	// JMPR
    UINT64_C(1398800384),	// JMPR_f
    UINT64_C(1398802432),	// JMPR_fnew_ntV3
    UINT64_C(1398806528),	// JMPR_fnew_tV3
    UINT64_C(1396703232),	// JMPR_t
    UINT64_C(1396705280),	// JMPR_tnew_ntV3
    UINT64_C(1396709376),	// JMPR_tnew_tV3
    UINT64_C(1545601024),	// JMP_f
    UINT64_C(1545603072),	// JMP_fnew_nt
    UINT64_C(1545607168),	// JMP_fnew_t
    UINT64_C(1543503872),	// JMP_t
    UINT64_C(1543505920),	// JMP_tnew_nt
    UINT64_C(1543510016),	// JMP_tnew_t
    UINT64_C(1384120320),	// JMPret
    UINT64_C(1398800384),	// JMPret_f
    UINT64_C(1398802432),	// JMPret_fnew_ntV3
    UINT64_C(1398806528),	// JMPret_fnew_tV3
    UINT64_C(1396703232),	// JMPret_t
    UINT64_C(1396705280),	// JMPret_tnew_ntV3
    UINT64_C(1396709376),	// JMPret_tnew_tV3
    UINT64_C(0),	// LDb_GP_V4
    UINT64_C(0),	// LDb_GP_cNotPt_V4
    UINT64_C(0),	// LDb_GP_cPt_V4
    UINT64_C(0),	// LDb_GP_cdnNotPt_V4
    UINT64_C(0),	// LDb_GP_cdnPt_V4
    UINT64_C(0),	// LDd_GP_V4
    UINT64_C(0),	// LDd_GP_cNotPt_V4
    UINT64_C(0),	// LDd_GP_cPt_V4
    UINT64_C(0),	// LDd_GP_cdnNotPt_V4
    UINT64_C(0),	// LDd_GP_cdnPt_V4
    UINT64_C(0),	// LDh_GP_V4
    UINT64_C(0),	// LDh_GP_cNotPt_V4
    UINT64_C(0),	// LDh_GP_cPt_V4
    UINT64_C(0),	// LDh_GP_cdnNotPt_V4
    UINT64_C(0),	// LDh_GP_cdnPt_V4
    UINT64_C(0),	// LDrib
    UINT64_C(0),	// LDrib_abs_V4
    UINT64_C(0),	// LDrib_abs_cNotPt_V4
    UINT64_C(0),	// LDrib_abs_cPt_V4
    UINT64_C(0),	// LDrib_abs_cdnNotPt_V4
    UINT64_C(0),	// LDrib_abs_cdnPt_V4
    UINT64_C(0),	// LDrib_abs_set_V4
    UINT64_C(0),	// LDrib_cNotPt
    UINT64_C(0),	// LDrib_cPt
    UINT64_C(0),	// LDrib_cdnNotPt
    UINT64_C(0),	// LDrib_cdnPt
    UINT64_C(0),	// LDrib_ind_lo_V4
    UINT64_C(0),	// LDrib_indexed
    UINT64_C(0),	// LDrib_indexed_cNotPt
    UINT64_C(0),	// LDrib_indexed_cPt
    UINT64_C(0),	// LDrib_indexed_cdnNotPt
    UINT64_C(0),	// LDrib_indexed_cdnPt
    UINT64_C(0),	// LDrib_indexed_shl_V4
    UINT64_C(0),	// LDrib_indexed_shl_cNotPt_V4
    UINT64_C(0),	// LDrib_indexed_shl_cPt_V4
    UINT64_C(0),	// LDrib_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// LDrib_indexed_shl_cdnPt_V4
    UINT64_C(0),	// LDrid
    UINT64_C(0),	// LDrid_abs_V4
    UINT64_C(0),	// LDrid_abs_cNotPt_V4
    UINT64_C(0),	// LDrid_abs_cPt_V4
    UINT64_C(0),	// LDrid_abs_cdnNotPt_V4
    UINT64_C(0),	// LDrid_abs_cdnPt_V4
    UINT64_C(0),	// LDrid_abs_set_V4
    UINT64_C(0),	// LDrid_cNotPt
    UINT64_C(0),	// LDrid_cPt
    UINT64_C(0),	// LDrid_cdnNotPt
    UINT64_C(0),	// LDrid_cdnPt
    UINT64_C(0),	// LDrid_f
    UINT64_C(0),	// LDrid_ind_lo_V4
    UINT64_C(0),	// LDrid_indexed
    UINT64_C(0),	// LDrid_indexed_cNotPt
    UINT64_C(0),	// LDrid_indexed_cPt
    UINT64_C(0),	// LDrid_indexed_cdnNotPt
    UINT64_C(0),	// LDrid_indexed_cdnPt
    UINT64_C(0),	// LDrid_indexed_f
    UINT64_C(0),	// LDrid_indexed_shl_V4
    UINT64_C(0),	// LDrid_indexed_shl_cNotPt_V4
    UINT64_C(0),	// LDrid_indexed_shl_cPt_V4
    UINT64_C(0),	// LDrid_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// LDrid_indexed_shl_cdnPt_V4
    UINT64_C(0),	// LDrih
    UINT64_C(0),	// LDrih_abs_V4
    UINT64_C(0),	// LDrih_abs_cNotPt_V4
    UINT64_C(0),	// LDrih_abs_cPt_V4
    UINT64_C(0),	// LDrih_abs_cdnNotPt_V4
    UINT64_C(0),	// LDrih_abs_cdnPt_V4
    UINT64_C(0),	// LDrih_abs_set_V4
    UINT64_C(0),	// LDrih_cNotPt
    UINT64_C(0),	// LDrih_cPt
    UINT64_C(0),	// LDrih_cdnNotPt
    UINT64_C(0),	// LDrih_cdnPt
    UINT64_C(0),	// LDrih_ind_lo_V4
    UINT64_C(0),	// LDrih_indexed
    UINT64_C(0),	// LDrih_indexed_cNotPt
    UINT64_C(0),	// LDrih_indexed_cPt
    UINT64_C(0),	// LDrih_indexed_cdnNotPt
    UINT64_C(0),	// LDrih_indexed_cdnPt
    UINT64_C(0),	// LDrih_indexed_shl_V4
    UINT64_C(0),	// LDrih_indexed_shl_cNotPt_V4
    UINT64_C(0),	// LDrih_indexed_shl_cPt_V4
    UINT64_C(0),	// LDrih_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// LDrih_indexed_shl_cdnPt_V4
    UINT64_C(0),	// LDriub
    UINT64_C(0),	// LDriub_abs_V4
    UINT64_C(0),	// LDriub_abs_cNotPt_V4
    UINT64_C(0),	// LDriub_abs_cPt_V4
    UINT64_C(0),	// LDriub_abs_cdnNotPt_V4
    UINT64_C(0),	// LDriub_abs_cdnPt_V4
    UINT64_C(0),	// LDriub_abs_set_V4
    UINT64_C(0),	// LDriub_cNotPt
    UINT64_C(0),	// LDriub_cPt
    UINT64_C(0),	// LDriub_cdnNotPt
    UINT64_C(0),	// LDriub_cdnPt
    UINT64_C(0),	// LDriub_ind_anyext_lo_V4
    UINT64_C(0),	// LDriub_ind_lo_V4
    UINT64_C(0),	// LDriub_indexed
    UINT64_C(0),	// LDriub_indexed_cNotPt
    UINT64_C(0),	// LDriub_indexed_cPt
    UINT64_C(0),	// LDriub_indexed_cdnNotPt
    UINT64_C(0),	// LDriub_indexed_cdnPt
    UINT64_C(0),	// LDriub_indexed_shl_V4
    UINT64_C(0),	// LDriub_indexed_shl_cNotPt_V4
    UINT64_C(0),	// LDriub_indexed_shl_cPt_V4
    UINT64_C(0),	// LDriub_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// LDriub_indexed_shl_cdnPt_V4
    UINT64_C(0),	// LDriuh
    UINT64_C(0),	// LDriuh_abs_V4
    UINT64_C(0),	// LDriuh_abs_cNotPt_V4
    UINT64_C(0),	// LDriuh_abs_cPt_V4
    UINT64_C(0),	// LDriuh_abs_cdnNotPt_V4
    UINT64_C(0),	// LDriuh_abs_cdnPt_V4
    UINT64_C(0),	// LDriuh_abs_set_V4
    UINT64_C(0),	// LDriuh_cNotPt
    UINT64_C(0),	// LDriuh_cPt
    UINT64_C(0),	// LDriuh_cdnNotPt
    UINT64_C(0),	// LDriuh_cdnPt
    UINT64_C(0),	// LDriuh_ind_anyext_lo_V4
    UINT64_C(0),	// LDriuh_ind_lo_V4
    UINT64_C(0),	// LDriuh_indexed
    UINT64_C(0),	// LDriuh_indexed_cNotPt
    UINT64_C(0),	// LDriuh_indexed_cPt
    UINT64_C(0),	// LDriuh_indexed_cdnNotPt
    UINT64_C(0),	// LDriuh_indexed_cdnPt
    UINT64_C(0),	// LDriuh_indexed_shl_V4
    UINT64_C(0),	// LDriuh_indexed_shl_cNotPt_V4
    UINT64_C(0),	// LDriuh_indexed_shl_cPt_V4
    UINT64_C(0),	// LDriuh_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// LDriuh_indexed_shl_cdnPt_V4
    UINT64_C(0),	// LDriw
    UINT64_C(0),	// LDriw_abs_V4
    UINT64_C(0),	// LDriw_abs_cNotPt_V4
    UINT64_C(0),	// LDriw_abs_cPt_V4
    UINT64_C(0),	// LDriw_abs_cdnNotPt_V4
    UINT64_C(0),	// LDriw_abs_cdnPt_V4
    UINT64_C(0),	// LDriw_abs_set_V4
    UINT64_C(0),	// LDriw_cNotPt
    UINT64_C(0),	// LDriw_cPt
    UINT64_C(0),	// LDriw_cdnNotPt
    UINT64_C(0),	// LDriw_cdnPt
    UINT64_C(0),	// LDriw_f
    UINT64_C(0),	// LDriw_ind_lo_V4
    UINT64_C(0),	// LDriw_indexed
    UINT64_C(0),	// LDriw_indexed_cNotPt
    UINT64_C(0),	// LDriw_indexed_cPt
    UINT64_C(0),	// LDriw_indexed_cdnNotPt
    UINT64_C(0),	// LDriw_indexed_cdnPt
    UINT64_C(0),	// LDriw_indexed_f
    UINT64_C(0),	// LDriw_indexed_shl_V4
    UINT64_C(0),	// LDriw_indexed_shl_cNotPt_V4
    UINT64_C(0),	// LDriw_indexed_shl_cPt_V4
    UINT64_C(0),	// LDriw_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// LDriw_indexed_shl_cdnPt_V4
    UINT64_C(0),
    UINT64_C(0),	// LDub_GP_V4
    UINT64_C(0),	// LDub_GP_cNotPt_V4
    UINT64_C(0),	// LDub_GP_cPt_V4
    UINT64_C(0),	// LDub_GP_cdnNotPt_V4
    UINT64_C(0),	// LDub_GP_cdnPt_V4
    UINT64_C(0),	// LDuh_GP_V4
    UINT64_C(0),	// LDuh_GP_cNotPt_V4
    UINT64_C(0),	// LDuh_GP_cPt_V4
    UINT64_C(0),	// LDuh_GP_cdnNotPt_V4
    UINT64_C(0),	// LDuh_GP_cdnPt_V4
    UINT64_C(0),	// LDw_GP_V4
    UINT64_C(0),	// LDw_GP_cNotPt_V4
    UINT64_C(0),	// LDw_GP_cPt_V4
    UINT64_C(0),	// LDw_GP_cdnNotPt_V4
    UINT64_C(0),	// LDw_GP_cdnPt_V4
    UINT64_C(0),	// LO
    UINT64_C(0),	// LOOP0_i
    UINT64_C(0),	// LOOP0_r
    UINT64_C(0),	// LO_jt
    UINT64_C(0),	// LO_label
    UINT64_C(0),	// LOi
    UINT64_C(0),	// LSL_ADD_rr
    UINT64_C(0),	// LSL_ADDd_rr
    UINT64_C(0),	// LSL_AND_rr
    UINT64_C(0),	// LSL_ANDd_rr
    UINT64_C(0),	// LSL_OR_rr
    UINT64_C(0),	// LSL_ORd_rr
    UINT64_C(0),	// LSL_SUB_rr
    UINT64_C(0),	// LSL_SUBd_rr
    UINT64_C(0),	// LSL_rr
    UINT64_C(0),	// LSLd
    UINT64_C(0),	// LSLd_rr_xor_V4
    UINT64_C(0),	// LSLi_V4
    UINT64_C(0),	// LSR_ADD_ri
    UINT64_C(0),	// LSR_ADD_rr
    UINT64_C(0),	// LSR_ADDd_ri
    UINT64_C(0),	// LSR_ADDd_rr
    UINT64_C(0),	// LSR_AND_ri
    UINT64_C(0),	// LSR_AND_rr
    UINT64_C(0),	// LSR_ANDd_ri
    UINT64_C(0),	// LSR_ANDd_rr
    UINT64_C(0),	// LSR_OR_ri
    UINT64_C(0),	// LSR_OR_rr
    UINT64_C(0),	// LSR_ORd_ri
    UINT64_C(0),	// LSR_ORd_rr
    UINT64_C(0),	// LSR_SUB_ri
    UINT64_C(0),	// LSR_SUB_rr
    UINT64_C(0),	// LSR_SUBd_ri
    UINT64_C(0),	// LSR_SUBd_rr
    UINT64_C(0),	// LSR_XOR_ri
    UINT64_C(0),	// LSR_XORd_ri
    UINT64_C(0),	// LSR_ri
    UINT64_C(0),	// LSR_rr
    UINT64_C(0),	// LSRd_ri
    UINT64_C(0),	// LSRd_rr
    UINT64_C(0),	// LSRd_rr_xor_V4
    UINT64_C(0),	// MASK_p
    UINT64_C(0),	// MAXUd_rr
    UINT64_C(0),	// MAXUw_rr
    UINT64_C(0),	// MAXd_rr
    UINT64_C(0),	// MAXw_dd
    UINT64_C(0),	// MAXw_rr
    UINT64_C(0),	// MINUd_rr
    UINT64_C(0),	// MINUw_rr
    UINT64_C(0),	// MINd_rr
    UINT64_C(0),	// MINw_dd
    UINT64_C(0),	// MINw_rr
    UINT64_C(0),	// MPY
    UINT64_C(0),	// MPY64
    UINT64_C(0),	// MPY64_acc
    UINT64_C(0),	// MPY64_sub
    UINT64_C(0),	// MPYI
    UINT64_C(0),	// MPYI_acc_ri
    UINT64_C(0),	// MPYI_acc_rr
    UINT64_C(0),	// MPYI_ri
    UINT64_C(0),	// MPYI_rin
    UINT64_C(0),	// MPYI_riu
    UINT64_C(0),	// MPYI_sub_ri
    UINT64_C(0),	// MPYU
    UINT64_C(0),	// MPYU64
    UINT64_C(0),	// MPYU64_acc
    UINT64_C(0),	// MPYU64_sub
    UINT64_C(0),	// MPY_trsext
    UINT64_C(0),	// MUX_ii
    UINT64_C(0),	// MUX_ir
    UINT64_C(0),	// MUX_ri
    UINT64_C(0),	// MUX_rr
    UINT64_C(1056964608),	// MemOPb_ADDi_V4
    UINT64_C(1040187392),	// MemOPb_ADDr_V4
    UINT64_C(1040187456),	// MemOPb_ANDr_V4
    UINT64_C(1056964672),	// MemOPb_CLRBITi_V4
    UINT64_C(1040187488),	// MemOPb_ORr_V4
    UINT64_C(1056964704),	// MemOPb_SETBITi_V4
    UINT64_C(1056964640),	// MemOPb_SUBi_V4
    UINT64_C(1040187424),	// MemOPb_SUBr_V4
    UINT64_C(1059061760),	// MemOPh_ADDi_V4
    UINT64_C(1042284544),	// MemOPh_ADDr_V4
    UINT64_C(1042284608),	// MemOPh_ANDr_V4
    UINT64_C(1059061824),	// MemOPh_CLRBITi_V4
    UINT64_C(1042284640),	// MemOPh_ORr_V4
    UINT64_C(1059061856),	// MemOPh_SETBITi_V4
    UINT64_C(1059061792),	// MemOPh_SUBi_V4
    UINT64_C(1042284576),	// MemOPh_SUBr_V4
    UINT64_C(1061158912),	// MemOPw_ADDi_V4
    UINT64_C(1044381696),	// MemOPw_ADDr_V4
    UINT64_C(1044381760),	// MemOPw_ANDr_V4
    UINT64_C(1061158976),	// MemOPw_CLRBITi_V4
    UINT64_C(1044381792),	// MemOPw_ORr_V4
    UINT64_C(1061159008),	// MemOPw_SETBITi_V4
    UINT64_C(1061158944),	// MemOPw_SUBi_V4
    UINT64_C(1044381728),	// MemOPw_SUBr_V4
    UINT64_C(0),	// NOP
    UINT64_C(0),	// NOT_p
    UINT64_C(0),	// NOT_rr64
    UINT64_C(0),	// NTSTBIT_ri
    UINT64_C(0),	// NTSTBIT_rr
    UINT64_C(0),	// OR_pp
    UINT64_C(0),	// OR_ri
    UINT64_C(0),	// OR_rr
    UINT64_C(0),	// OR_rr64
    UINT64_C(0),	// OR_rr_cNotPt
    UINT64_C(0),	// OR_rr_cPt
    UINT64_C(0),	// OR_rr_cdnNotPt
    UINT64_C(0),	// OR_rr_cdnPt
    UINT64_C(0),	// ORd_NOTd_V4
    UINT64_C(0),	// ORi_ASLri_V4
    UINT64_C(0),	// ORi_LSRri_V4
    UINT64_C(0),	// ORr_ANDr_NOTr_V4
    UINT64_C(0),	// ORr_ANDri2_V4
    UINT64_C(0),	// ORr_ANDri_V4
    UINT64_C(0),	// ORr_ANDrr_V4
    UINT64_C(0),	// ORr_ORri_V4
    UINT64_C(0),	// ORr_ORrr_V4
    UINT64_C(0),	// ORr_XORrr_V4
    UINT64_C(0),	// POST_LDrib
    UINT64_C(0),	// POST_LDrib_cNotPt
    UINT64_C(0),	// POST_LDrib_cPt
    UINT64_C(0),	// POST_LDrib_cdnNotPt_V4
    UINT64_C(0),	// POST_LDrib_cdnPt_V4
    UINT64_C(0),	// POST_LDrid
    UINT64_C(0),	// POST_LDrid_cNotPt
    UINT64_C(0),	// POST_LDrid_cPt
    UINT64_C(0),	// POST_LDrid_cdnNotPt_V4
    UINT64_C(0),	// POST_LDrid_cdnPt_V4
    UINT64_C(0),	// POST_LDrih
    UINT64_C(0),	// POST_LDrih_cNotPt
    UINT64_C(0),	// POST_LDrih_cPt
    UINT64_C(0),	// POST_LDrih_cdnNotPt_V4
    UINT64_C(0),	// POST_LDrih_cdnPt_V4
    UINT64_C(0),	// POST_LDriub
    UINT64_C(0),	// POST_LDriub_cNotPt
    UINT64_C(0),	// POST_LDriub_cPt
    UINT64_C(0),	// POST_LDriub_cdnNotPt_V4
    UINT64_C(0),	// POST_LDriub_cdnPt_V4
    UINT64_C(0),	// POST_LDriuh
    UINT64_C(0),	// POST_LDriuh_cNotPt
    UINT64_C(0),	// POST_LDriuh_cPt
    UINT64_C(0),	// POST_LDriuh_cdnNotPt_V4
    UINT64_C(0),	// POST_LDriuh_cdnPt_V4
    UINT64_C(0),	// POST_LDriw
    UINT64_C(0),	// POST_LDriw_cNotPt
    UINT64_C(0),	// POST_LDriw_cPt
    UINT64_C(0),	// POST_LDriw_cdnNotPt_V4
    UINT64_C(0),	// POST_LDriw_cdnPt_V4
    UINT64_C(0),	// POST_STbri
    UINT64_C(0),	// POST_STbri_cNotPt
    UINT64_C(0),	// POST_STbri_cNotPt_nv_V4
    UINT64_C(0),	// POST_STbri_cPt
    UINT64_C(0),	// POST_STbri_cPt_nv_V4
    UINT64_C(0),	// POST_STbri_cdnNotPt_V4
    UINT64_C(0),	// POST_STbri_cdnNotPt_nv_V4
    UINT64_C(0),	// POST_STbri_cdnPt_V4
    UINT64_C(0),	// POST_STbri_cdnPt_nv_V4
    UINT64_C(0),	// POST_STbri_nv_V4
    UINT64_C(0),	// POST_STdri
    UINT64_C(0),	// POST_STdri_cNotPt
    UINT64_C(0),	// POST_STdri_cPt
    UINT64_C(0),	// POST_STdri_cdnNotPt_V4
    UINT64_C(0),	// POST_STdri_cdnPt_V4
    UINT64_C(0),	// POST_SThri
    UINT64_C(0),	// POST_SThri_cNotPt
    UINT64_C(0),	// POST_SThri_cNotPt_nv_V4
    UINT64_C(0),	// POST_SThri_cPt
    UINT64_C(0),	// POST_SThri_cPt_nv_V4
    UINT64_C(0),	// POST_SThri_cdnNotPt_V4
    UINT64_C(0),	// POST_SThri_cdnNotPt_nv_V4
    UINT64_C(0),	// POST_SThri_cdnPt_V4
    UINT64_C(0),	// POST_SThri_cdnPt_nv_V4
    UINT64_C(0),	// POST_SThri_nv_V4
    UINT64_C(0),	// POST_STwri
    UINT64_C(0),	// POST_STwri_cNotPt
    UINT64_C(0),	// POST_STwri_cNotPt_nv_V4
    UINT64_C(0),	// POST_STwri_cPt
    UINT64_C(0),	// POST_STwri_cPt_nv_V4
    UINT64_C(0),	// POST_STwri_cdnNotPt_V4
    UINT64_C(0),	// POST_STwri_cdnNotPt_nv_V4
    UINT64_C(0),	// POST_STwri_cdnPt_V4
    UINT64_C(0),	// POST_STwri_cdnPt_nv_V4
    UINT64_C(0),	// POST_STwri_nv_V4
    UINT64_C(0),	// RESTORE_DEALLOC_BEFORE_TAILCALL_V4
    UINT64_C(0),	// RESTORE_DEALLOC_RET_JMP_V4
    UINT64_C(0),	// SAVE_REGISTERS_CALL_V4
    UINT64_C(0),	// SETBIT
    UINT64_C(0),	// SETBIT_31
    UINT64_C(0),	// SI_to_SXTHI_asrh
    UINT64_C(0),	// STb_GP_V4
    UINT64_C(0),	// STb_GP_cNotPt_V4
    UINT64_C(0),	// STb_GP_cNotPt_nv_V4
    UINT64_C(0),	// STb_GP_cPt_V4
    UINT64_C(0),	// STb_GP_cPt_nv_V4
    UINT64_C(0),	// STb_GP_cdnNotPt_V4
    UINT64_C(0),	// STb_GP_cdnNotPt_nv_V4
    UINT64_C(0),	// STb_GP_cdnPt_V4
    UINT64_C(0),	// STb_GP_cdnPt_nv_V4
    UINT64_C(0),	// STb_GP_nv_V4
    UINT64_C(0),	// STd_GP_V4
    UINT64_C(0),	// STd_GP_cNotPt_V4
    UINT64_C(0),	// STd_GP_cPt_V4
    UINT64_C(0),	// STd_GP_cdnNotPt_V4
    UINT64_C(0),	// STd_GP_cdnPt_V4
    UINT64_C(0),	// STh_GP_V4
    UINT64_C(0),	// STh_GP_cNotPt_V4
    UINT64_C(0),	// STh_GP_cNotPt_nv_V4
    UINT64_C(0),	// STh_GP_cPt_V4
    UINT64_C(0),	// STh_GP_cPt_nv_V4
    UINT64_C(0),	// STh_GP_cdnNotPt_V4
    UINT64_C(0),	// STh_GP_cdnNotPt_nv_V4
    UINT64_C(0),	// STh_GP_cdnPt_V4
    UINT64_C(0),	// STh_GP_cdnPt_nv_V4
    UINT64_C(0),	// STh_GP_nv_V4
    UINT64_C(0),	// STrib
    UINT64_C(0),	// STrib_abs_V4
    UINT64_C(0),	// STrib_abs_cNotPt_V4
    UINT64_C(0),	// STrib_abs_cNotPt_nv_V4
    UINT64_C(0),	// STrib_abs_cPt_V4
    UINT64_C(0),	// STrib_abs_cPt_nv_V4
    UINT64_C(0),	// STrib_abs_cdnNotPt_V4
    UINT64_C(0),	// STrib_abs_cdnNotPt_nv_V4
    UINT64_C(0),	// STrib_abs_cdnPt_V4
    UINT64_C(0),	// STrib_abs_cdnPt_nv_V4
    UINT64_C(0),	// STrib_abs_nv_V4
    UINT64_C(0),	// STrib_abs_set_V4
    UINT64_C(0),	// STrib_cNotPt
    UINT64_C(0),	// STrib_cNotPt_nv_V4
    UINT64_C(0),	// STrib_cPt
    UINT64_C(0),	// STrib_cPt_nv_V4
    UINT64_C(0),	// STrib_cdnNotPt_V4
    UINT64_C(0),	// STrib_cdnNotPt_nv_V4
    UINT64_C(0),	// STrib_cdnPt_V4
    UINT64_C(0),	// STrib_cdnPt_nv_V4
    UINT64_C(0),	// STrib_imm_V4
    UINT64_C(0),	// STrib_imm_cNotPt_V4
    UINT64_C(0),	// STrib_imm_cPt_V4
    UINT64_C(0),	// STrib_imm_cdnNotPt_V4
    UINT64_C(0),	// STrib_imm_cdnPt_V4
    UINT64_C(0),	// STrib_indexed
    UINT64_C(0),	// STrib_indexed_cNotPt
    UINT64_C(0),	// STrib_indexed_cNotPt_nv_V4
    UINT64_C(0),	// STrib_indexed_cPt
    UINT64_C(0),	// STrib_indexed_cPt_nv_V4
    UINT64_C(0),	// STrib_indexed_cdnNotPt_V4
    UINT64_C(0),	// STrib_indexed_cdnNotPt_nv_V4
    UINT64_C(0),	// STrib_indexed_cdnPt_V4
    UINT64_C(0),	// STrib_indexed_cdnPt_nv_V4
    UINT64_C(0),	// STrib_indexed_nv_V4
    UINT64_C(0),	// STrib_indexed_shl_V4
    UINT64_C(0),	// STrib_indexed_shl_cNotPt_V4
    UINT64_C(0),	// STrib_indexed_shl_cNotPt_nv_V4
    UINT64_C(0),	// STrib_indexed_shl_cPt_V4
    UINT64_C(0),	// STrib_indexed_shl_cPt_nv_V4
    UINT64_C(0),	// STrib_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// STrib_indexed_shl_cdnNotPt_nv_V4
    UINT64_C(0),	// STrib_indexed_shl_cdnPt_V4
    UINT64_C(0),	// STrib_indexed_shl_cdnPt_nv_V4
    UINT64_C(0),	// STrib_indexed_shl_nv_V4
    UINT64_C(0),	// STrib_nv_V4
    UINT64_C(0),	// STrib_shl_V4
    UINT64_C(0),	// STrib_shl_nv_V4
    UINT64_C(0),	// STrid
    UINT64_C(0),	// STrid_abs_V4
    UINT64_C(0),	// STrid_abs_cNotPt_V4
    UINT64_C(0),	// STrid_abs_cPt_V4
    UINT64_C(0),	// STrid_abs_cdnNotPt_V4
    UINT64_C(0),	// STrid_abs_cdnPt_V4
    UINT64_C(0),	// STrid_abs_set_V4
    UINT64_C(0),	// STrid_cNotPt
    UINT64_C(0),	// STrid_cPt
    UINT64_C(0),	// STrid_cdnNotPt_V4
    UINT64_C(0),	// STrid_cdnPt_V4
    UINT64_C(0),	// STrid_f
    UINT64_C(0),	// STrid_indexed
    UINT64_C(0),	// STrid_indexed_cNotPt
    UINT64_C(0),	// STrid_indexed_cPt
    UINT64_C(0),	// STrid_indexed_cdnNotPt_V4
    UINT64_C(0),	// STrid_indexed_cdnPt_V4
    UINT64_C(0),	// STrid_indexed_f
    UINT64_C(0),	// STrid_indexed_shl_V4
    UINT64_C(0),	// STrid_indexed_shl_cNotPt_V4
    UINT64_C(0),	// STrid_indexed_shl_cPt_V4
    UINT64_C(0),	// STrid_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// STrid_indexed_shl_cdnPt_V4
    UINT64_C(0),	// STrid_shl_V4
    UINT64_C(0),	// STrih
    UINT64_C(0),	// STrih_abs_V4
    UINT64_C(0),	// STrih_abs_cNotPt_V4
    UINT64_C(0),	// STrih_abs_cNotPt_nv_V4
    UINT64_C(0),	// STrih_abs_cPt_V4
    UINT64_C(0),	// STrih_abs_cPt_nv_V4
    UINT64_C(0),	// STrih_abs_cdnNotPt_V4
    UINT64_C(0),	// STrih_abs_cdnNotPt_nv_V4
    UINT64_C(0),	// STrih_abs_cdnPt_V4
    UINT64_C(0),	// STrih_abs_cdnPt_nv_V4
    UINT64_C(0),	// STrih_abs_nv_V4
    UINT64_C(0),	// STrih_abs_set_V4
    UINT64_C(0),	// STrih_cNotPt
    UINT64_C(0),	// STrih_cNotPt_nv_V4
    UINT64_C(0),	// STrih_cPt
    UINT64_C(0),	// STrih_cPt_nv_V4
    UINT64_C(0),	// STrih_cdnNotPt_V4
    UINT64_C(0),	// STrih_cdnNotPt_nv_V4
    UINT64_C(0),	// STrih_cdnPt_V4
    UINT64_C(0),	// STrih_cdnPt_nv_V4
    UINT64_C(0),	// STrih_imm_V4
    UINT64_C(0),	// STrih_imm_cNotPt_V4
    UINT64_C(0),	// STrih_imm_cPt_V4
    UINT64_C(0),	// STrih_imm_cdnNotPt_V4
    UINT64_C(0),	// STrih_imm_cdnPt_V4
    UINT64_C(0),	// STrih_indexed
    UINT64_C(0),	// STrih_indexed_cNotPt
    UINT64_C(0),	// STrih_indexed_cNotPt_nv_V4
    UINT64_C(0),	// STrih_indexed_cPt
    UINT64_C(0),	// STrih_indexed_cPt_nv_V4
    UINT64_C(0),	// STrih_indexed_cdnNotPt_V4
    UINT64_C(0),	// STrih_indexed_cdnNotPt_nv_V4
    UINT64_C(0),	// STrih_indexed_cdnPt_V4
    UINT64_C(0),	// STrih_indexed_cdnPt_nv_V4
    UINT64_C(0),	// STrih_indexed_nv_V4
    UINT64_C(0),	// STrih_indexed_shl_V4
    UINT64_C(0),	// STrih_indexed_shl_cNotPt_V4
    UINT64_C(0),	// STrih_indexed_shl_cNotPt_nv_V4
    UINT64_C(0),	// STrih_indexed_shl_cPt_V4
    UINT64_C(0),	// STrih_indexed_shl_cPt_nv_V4
    UINT64_C(0),	// STrih_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// STrih_indexed_shl_cdnNotPt_nv_V4
    UINT64_C(0),	// STrih_indexed_shl_cdnPt_V4
    UINT64_C(0),	// STrih_indexed_shl_cdnPt_nv_V4
    UINT64_C(0),	// STrih_indexed_shl_nv_V4
    UINT64_C(0),	// STrih_nv_V4
    UINT64_C(0),	// STrih_offset_ext_V4
    UINT64_C(0),	// STrih_shl_V4
    UINT64_C(0),	// STrih_shl_nv_V4
    UINT64_C(0),	// STriw
    UINT64_C(0),	// STriw_abs_V4
    UINT64_C(0),	// STriw_abs_cNotPt_V4
    UINT64_C(0),	// STriw_abs_cNotPt_nv_V4
    UINT64_C(0),	// STriw_abs_cPt_V4
    UINT64_C(0),	// STriw_abs_cPt_nv_V4
    UINT64_C(0),	// STriw_abs_cdnNotPt_V4
    UINT64_C(0),	// STriw_abs_cdnNotPt_nv_V4
    UINT64_C(0),	// STriw_abs_cdnPt_V4
    UINT64_C(0),	// STriw_abs_cdnPt_nv_V4
    UINT64_C(0),	// STriw_abs_nv_V4
    UINT64_C(0),	// STriw_abs_set_V4
    UINT64_C(0),	// STriw_cNotPt
    UINT64_C(0),	// STriw_cNotPt_nv_V4
    UINT64_C(0),	// STriw_cPt
    UINT64_C(0),	// STriw_cPt_nv_V4
    UINT64_C(0),	// STriw_cdnNotPt_V4
    UINT64_C(0),	// STriw_cdnNotPt_nv_V4
    UINT64_C(0),	// STriw_cdnPt_V4
    UINT64_C(0),	// STriw_cdnPt_nv_V4
    UINT64_C(0),	// STriw_f
    UINT64_C(0),	// STriw_imm_V4
    UINT64_C(0),	// STriw_imm_cNotPt_V4
    UINT64_C(0),	// STriw_imm_cPt_V4
    UINT64_C(0),	// STriw_imm_cdnNotPt_V4
    UINT64_C(0),	// STriw_imm_cdnPt_V4
    UINT64_C(0),	// STriw_indexed
    UINT64_C(0),	// STriw_indexed_cNotPt
    UINT64_C(0),	// STriw_indexed_cNotPt_nv_V4
    UINT64_C(0),	// STriw_indexed_cPt
    UINT64_C(0),	// STriw_indexed_cPt_nv_V4
    UINT64_C(0),	// STriw_indexed_cdnNotPt_V4
    UINT64_C(0),	// STriw_indexed_cdnNotPt_nv_V4
    UINT64_C(0),	// STriw_indexed_cdnPt_V4
    UINT64_C(0),	// STriw_indexed_cdnPt_nv_V4
    UINT64_C(0),	// STriw_indexed_f
    UINT64_C(0),	// STriw_indexed_nv_V4
    UINT64_C(0),	// STriw_indexed_shl_V4
    UINT64_C(0),	// STriw_indexed_shl_cNotPt_V4
    UINT64_C(0),	// STriw_indexed_shl_cNotPt_nv_V4
    UINT64_C(0),	// STriw_indexed_shl_cPt_V4
    UINT64_C(0),	// STriw_indexed_shl_cPt_nv_V4
    UINT64_C(0),	// STriw_indexed_shl_cdnNotPt_V4
    UINT64_C(0),	// STriw_indexed_shl_cdnNotPt_nv_V4
    UINT64_C(0),	// STriw_indexed_shl_cdnPt_V4
    UINT64_C(0),	// STriw_indexed_shl_cdnPt_nv_V4
    UINT64_C(0),	// STriw_indexed_shl_nv_V4
    UINT64_C(0),	// STriw_nv_V4
    UINT64_C(0),	// STriw_offset_ext_V4
    UINT64_C(0),	// STriw_pred
    UINT64_C(0),	// STriw_pred_V4
    UINT64_C(0),	// STriw_shl_V4
    UINT64_C(0),	// STriw_shl_nv_V4
    UINT64_C(0),	// STw_GP_V4
    UINT64_C(0),	// STw_GP_cNotPt_V4
    UINT64_C(0),	// STw_GP_cNotPt_nv_V4
    UINT64_C(0),	// STw_GP_cPt_V4
    UINT64_C(0),	// STw_GP_cPt_nv_V4
    UINT64_C(0),	// STw_GP_cdnNotPt_V4
    UINT64_C(0),	// STw_GP_cdnNotPt_nv_V4
    UINT64_C(0),	// STw_GP_cdnPt_V4
    UINT64_C(0),	// STw_GP_cdnPt_nv_V4
    UINT64_C(0),	// STw_GP_nv_V4
    UINT64_C(0),	// SUB64_rr
    UINT64_C(0),	// SUB_ri
    UINT64_C(0),	// SUB_rr
    UINT64_C(0),	// SUB_rr_cNotPt
    UINT64_C(0),	// SUB_rr_cPt
    UINT64_C(0),	// SUB_rr_cdnNotPt
    UINT64_C(0),	// SUB_rr_cdnPt
    UINT64_C(0),	// SUBi_ASLri_V4
    UINT64_C(0),	// SUBi_LSRri_V4
    UINT64_C(0),	// SUBri_acc
    UINT64_C(0),	// SUBrr_acc
    UINT64_C(0),	// SXTB
    UINT64_C(0),	// SXTB_cNotPt_V4
    UINT64_C(0),	// SXTB_cPt_V4
    UINT64_C(0),	// SXTB_cdnNotPt_V4
    UINT64_C(0),	// SXTB_cdnPt_V4
    UINT64_C(0),	// SXTH
    UINT64_C(0),	// SXTH_cNotPt_V4
    UINT64_C(0),	// SXTH_cPt_V4
    UINT64_C(0),	// SXTH_cdnNotPt_V4
    UINT64_C(0),	// SXTH_cdnPt_V4
    UINT64_C(0),	// SXTW
    UINT64_C(1384120320),	// TCRETURNR
    UINT64_C(1476395008),	// TCRETURNtext
    UINT64_C(1476395008),	// TCRETURNtg
    UINT64_C(0),	// TFCR
    UINT64_C(0),	// TFR
    UINT64_C(4110483456),	// TFR64
    UINT64_C(4244701312),	// TFR64_cNotPt
    UINT64_C(4244701184),	// TFR64_cPt
    UINT64_C(4244709504),	// TFR64_cdnNotPt
    UINT64_C(4244709376),	// TFR64_cdnPt
    UINT64_C(0),	// TFRI
    UINT64_C(0),	// TFRI64
    UINT64_C(0),	// TFRI_V4
    UINT64_C(0),	// TFRI_cNotPt
    UINT64_C(0),	// TFRI_cNotPt_V4
    UINT64_C(0),	// TFRI_cNotPt_f
    UINT64_C(0),	// TFRI_cPt
    UINT64_C(0),	// TFRI_cPt_V4
    UINT64_C(0),	// TFRI_cPt_f
    UINT64_C(0),	// TFRI_cdnNotPt
    UINT64_C(0),	// TFRI_cdnNotPt_V4
    UINT64_C(0),	// TFRI_cdnPt
    UINT64_C(0),	// TFRI_cdnPt_V4
    UINT64_C(0),	// TFRI_f
    UINT64_C(0),	// TFR_FI
    UINT64_C(0),	// TFR_FI_immext_V4
    UINT64_C(0),	// TFR_PdFalse
    UINT64_C(0),	// TFR_PdRs
    UINT64_C(0),	// TFR_RsPd
    UINT64_C(0),	// TFR_cNotPt
    UINT64_C(0),	// TFR_cPt
    UINT64_C(0),	// TFR_cdnNotPt
    UINT64_C(0),	// TFR_cdnPt
    UINT64_C(0),	// TFR_condset_ii
    UINT64_C(0),	// TFR_condset_ii_f
    UINT64_C(0),	// TFR_condset_ir
    UINT64_C(0),	// TFR_condset_ir_f
    UINT64_C(0),	// TFR_condset_ri
    UINT64_C(0),	// TFR_condset_ri_f
    UINT64_C(0),	// TFR_condset_rr
    UINT64_C(0),	// TFR_condset_rr64_f
    UINT64_C(0),	// TFR_condset_rr_f
    UINT64_C(0),	// TOGBIT
    UINT64_C(0),	// TOGBIT_31
    UINT64_C(633339904),	// TSTBIT0_f_Jumpnv_nt_V4
    UINT64_C(633348096),	// TSTBIT0_f_Jumpnv_t_V4
    UINT64_C(629145600),	// TSTBIT0_t_Jumpnv_nt_V4
    UINT64_C(629153792),	// TSTBIT0_t_Jumpnv_t_V4
    UINT64_C(0),	// TSTBIT_ri
    UINT64_C(0),	// TSTBIT_rr
    UINT64_C(0),	// V4_A4_rcmpeq
    UINT64_C(0),	// V4_A4_rcmpeqi
    UINT64_C(0),	// V4_A4_rcmpneq
    UINT64_C(0),	// V4_A4_rcmpneqi
    UINT64_C(0),	// VALIGN_rrp
    UINT64_C(0),	// VITPACK_pp
    UINT64_C(0),	// VMUX_prr64
    UINT64_C(0),	// VSPLICE_rrp
    UINT64_C(0),	// XOR_pp
    UINT64_C(0),	// XOR_rr
    UINT64_C(0),	// XOR_rr64
    UINT64_C(0),	// XOR_rr_cNotPt
    UINT64_C(0),	// XOR_rr_cPt
    UINT64_C(0),	// XOR_rr_cdnNotPt
    UINT64_C(0),	// XOR_rr_cdnPt
    UINT64_C(0),	// XORd_XORdd
    UINT64_C(0),	// XORr_ANDr_NOTr_V4
    UINT64_C(0),	// XORr_ANDrr_V4
    UINT64_C(0),	// XORr_ORrr_V4
    UINT64_C(0),	// XORr_XORrr_V4
    UINT64_C(0),	// ZXTB
    UINT64_C(0),	// ZXTB_cNotPt_V4
    UINT64_C(0),	// ZXTB_cPt_V4
    UINT64_C(0),	// ZXTB_cdnNotPt_V4
    UINT64_C(0),	// ZXTB_cdnPt_V4
    UINT64_C(0),	// ZXTH
    UINT64_C(0),	// ZXTH_cNotPt_V4
    UINT64_C(0),	// ZXTH_cPt_V4
    UINT64_C(0),	// ZXTH_cdnNotPt_V4
    UINT64_C(0),	// ZXTH_cdnPt_V4
    UINT64_C(0),	// fADD64_rr
    UINT64_C(0),	// fADD_rr
    UINT64_C(0),	// fMUL64_rr
    UINT64_C(0),	// fMUL_rr
    UINT64_C(0),	// fSUB64_rr
    UINT64_C(0),	// fSUB_rr
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case Hexagon::ADD64_rr:
    case Hexagon::ADDASL:
    case Hexagon::ADD_ri:
    case Hexagon::ADD_ri_cNotPt:
    case Hexagon::ADD_ri_cPt:
    case Hexagon::ADD_ri_cdnNotPt:
    case Hexagon::ADD_ri_cdnPt:
    case Hexagon::ADD_rr:
    case Hexagon::ADD_rr_cNotPt:
    case Hexagon::ADD_rr_cPt:
    case Hexagon::ADD_rr_cdnNotPt:
    case Hexagon::ADD_rr_cdnPt:
    case Hexagon::ADDi_ASLri_V4:
    case Hexagon::ADDi_LSRri_V4:
    case Hexagon::ADDi_MPYri_V4:
    case Hexagon::ADDi_MPYrr_V4:
    case Hexagon::ADDr_ADDri_V4:
    case Hexagon::ADDr_MPYir_V4:
    case Hexagon::ADDr_MPYri_V4:
    case Hexagon::ADDr_MPYrr_V4:
    case Hexagon::ADDr_SUBri_V4:
    case Hexagon::ADDri_SUBr_V4:
    case Hexagon::ADDri_acc:
    case Hexagon::ADDrr_acc:
    case Hexagon::ADJDYNALLOC:
    case Hexagon::ALLOCFRAME:
    case Hexagon::ALL_pp:
    case Hexagon::AND_pnotp:
    case Hexagon::AND_pp:
    case Hexagon::AND_ri:
    case Hexagon::AND_rr:
    case Hexagon::AND_rr64:
    case Hexagon::AND_rr_cNotPt:
    case Hexagon::AND_rr_cPt:
    case Hexagon::AND_rr_cdnNotPt:
    case Hexagon::AND_rr_cdnPt:
    case Hexagon::ANDd_NOTd_V4:
    case Hexagon::ANDi_ASLri_V4:
    case Hexagon::ANDi_LSRri_V4:
    case Hexagon::ANDr_ANDr_NOTr_V4:
    case Hexagon::ANDr_ANDrr_V4:
    case Hexagon::ANDr_ORrr_V4:
    case Hexagon::ANDr_XORrr_V4:
    case Hexagon::ANY_pp:
    case Hexagon::ARGEXTEND:
    case Hexagon::ASL:
    case Hexagon::ASLH:
    case Hexagon::ASLH_cNotPt_V4:
    case Hexagon::ASLH_cPt_V4:
    case Hexagon::ASLH_cdnNotPt_V4:
    case Hexagon::ASLH_cdnPt_V4:
    case Hexagon::ASL_ADD_ri:
    case Hexagon::ASL_ADD_rr:
    case Hexagon::ASL_ADDd_ri:
    case Hexagon::ASL_ADDd_rr:
    case Hexagon::ASL_AND_ri:
    case Hexagon::ASL_AND_rr:
    case Hexagon::ASL_ANDd_ri:
    case Hexagon::ASL_ANDd_rr:
    case Hexagon::ASL_OR_ri:
    case Hexagon::ASL_OR_rr:
    case Hexagon::ASL_ORd_ri:
    case Hexagon::ASL_ORd_rr:
    case Hexagon::ASL_SUB_ri:
    case Hexagon::ASL_SUB_rr:
    case Hexagon::ASL_SUBd_ri:
    case Hexagon::ASL_SUBd_rr:
    case Hexagon::ASL_XOR_ri:
    case Hexagon::ASL_XORd_ri:
    case Hexagon::ASL_rr:
    case Hexagon::ASLd:
    case Hexagon::ASLd_ri:
    case Hexagon::ASLd_rr_xor_V4:
    case Hexagon::ASRH:
    case Hexagon::ASRH_cNotPt_V4:
    case Hexagon::ASRH_cPt_V4:
    case Hexagon::ASRH_cdnNotPt_V4:
    case Hexagon::ASRH_cdnPt_V4:
    case Hexagon::ASR_ADD_ri:
    case Hexagon::ASR_ADD_rr:
    case Hexagon::ASR_ADDd_ri:
    case Hexagon::ASR_ADDd_rr:
    case Hexagon::ASR_AND_ri:
    case Hexagon::ASR_AND_rr:
    case Hexagon::ASR_ANDd_ri:
    case Hexagon::ASR_ANDd_rr:
    case Hexagon::ASR_OR_ri:
    case Hexagon::ASR_OR_rr:
    case Hexagon::ASR_ORd_ri:
    case Hexagon::ASR_ORd_rr:
    case Hexagon::ASR_SUB_ri:
    case Hexagon::ASR_SUB_rr:
    case Hexagon::ASR_SUBd_ri:
    case Hexagon::ASR_SUBd_rr:
    case Hexagon::ASR_ri:
    case Hexagon::ASR_rr:
    case Hexagon::ASRd_ri:
    case Hexagon::ASRd_rr:
    case Hexagon::ASRd_rr_xor_V4:
    case Hexagon::BARRIER:
    case Hexagon::CALL:
    case Hexagon::CALLR:
    case Hexagon::CALLRv3:
    case Hexagon::CALLv3:
    case Hexagon::CLRBIT:
    case Hexagon::CLRBIT_31:
    case Hexagon::CMPEHexagon4rr:
    case Hexagon::CMPEQri:
    case Hexagon::CMPEQrr:
    case Hexagon::CMPGT64rr:
    case Hexagon::CMPGTU64rr:
    case Hexagon::CMPGTUri:
    case Hexagon::CMPGTUrr:
    case Hexagon::CMPGTri:
    case Hexagon::CMPGTrr:
    case Hexagon::CMPbEQri_V4:
    case Hexagon::CMPbEQrr_sbsb_V4:
    case Hexagon::CMPbEQrr_ubub_V4:
    case Hexagon::CMPbGTUri_V4:
    case Hexagon::CMPbGTUrr_V4:
    case Hexagon::CMPbGTrr_V4:
    case Hexagon::CMPhEQri_V4:
    case Hexagon::CMPhEQrr_shl_V4:
    case Hexagon::CMPhEQrr_xor_V4:
    case Hexagon::CMPhGTUri_V4:
    case Hexagon::CMPhGTUrr_V4:
    case Hexagon::CMPhGTrr_shl_V4:
    case Hexagon::CMPnotEQ_rr:
    case Hexagon::CMPnotGTU_rr:
    case Hexagon::CMPnotGT_rr:
    case Hexagon::COMBINE_Ii:
    case Hexagon::COMBINE_Ir_V4:
    case Hexagon::COMBINE_iI_V4:
    case Hexagon::COMBINE_ii:
    case Hexagon::COMBINE_rI_V4:
    case Hexagon::COMBINE_rr:
    case Hexagon::COMBINE_rr_cNotPt:
    case Hexagon::COMBINE_rr_cPt:
    case Hexagon::COMBINE_rr_cdnNotPt:
    case Hexagon::COMBINE_rr_cdnPt:
    case Hexagon::CONST32:
    case Hexagon::CONST32GP_set:
    case Hexagon::CONST32_Float_Real:
    case Hexagon::CONST32_Int_Real:
    case Hexagon::CONST32_Label:
    case Hexagon::CONST32_set:
    case Hexagon::CONST32_set_jt:
    case Hexagon::CONST64_Float_Real:
    case Hexagon::CONST64_Int_Real:
    case Hexagon::CONVERT_d2df:
    case Hexagon::CONVERT_d2sf:
    case Hexagon::CONVERT_df2d:
    case Hexagon::CONVERT_df2d_nchop:
    case Hexagon::CONVERT_df2sf:
    case Hexagon::CONVERT_df2ud:
    case Hexagon::CONVERT_df2ud_nchop:
    case Hexagon::CONVERT_df2uw:
    case Hexagon::CONVERT_df2uw_nchop:
    case Hexagon::CONVERT_df2w:
    case Hexagon::CONVERT_df2w_nchop:
    case Hexagon::CONVERT_sf2d:
    case Hexagon::CONVERT_sf2d_nchop:
    case Hexagon::CONVERT_sf2df:
    case Hexagon::CONVERT_sf2ud:
    case Hexagon::CONVERT_sf2ud_nchop:
    case Hexagon::CONVERT_sf2uw:
    case Hexagon::CONVERT_sf2uw_nchop:
    case Hexagon::CONVERT_sf2w:
    case Hexagon::CONVERT_sf2w_nchop:
    case Hexagon::CONVERT_ud2df:
    case Hexagon::CONVERT_ud2sf:
    case Hexagon::CONVERT_uw2df:
    case Hexagon::CONVERT_uw2sf:
    case Hexagon::CONVERT_w2df:
    case Hexagon::CONVERT_w2sf:
    case Hexagon::CTLZ64_rr:
    case Hexagon::CTLZ_rr:
    case Hexagon::CTTZ64_rr:
    case Hexagon::CTTZ_rr:
    case Hexagon::DEALLOCFRAME:
    case Hexagon::DEALLOC_RET_V4:
    case Hexagon::DEALLOC_RET_cNotPt_V4:
    case Hexagon::DEALLOC_RET_cNotdnPnt_V4:
    case Hexagon::DEALLOC_RET_cNotdnPt_V4:
    case Hexagon::DEALLOC_RET_cPt_V4:
    case Hexagon::DEALLOC_RET_cdnPnt_V4:
    case Hexagon::DEALLOC_RET_cdnPt_V4:
    case Hexagon::FCMPOEQ32_rr:
    case Hexagon::FCMPOEQ64_rr:
    case Hexagon::FCMPOGE32_rr:
    case Hexagon::FCMPOGE64_rr:
    case Hexagon::FCMPOGT32_rr:
    case Hexagon::FCMPOGT64_rr:
    case Hexagon::FCMPUEQ32_rr:
    case Hexagon::FCMPUEQ64_rr:
    case Hexagon::FCMPUGE32_rr:
    case Hexagon::FCMPUGE64_rr:
    case Hexagon::FCMPUGT32_rr:
    case Hexagon::FCMPUGT64_rr:
    case Hexagon::FCONST32_nsdata:
    case Hexagon::FMADD_dp:
    case Hexagon::FMADD_sp:
    case Hexagon::FMAX_dp:
    case Hexagon::FMAX_sp:
    case Hexagon::FMIN_dp:
    case Hexagon::FMIN_sp:
    case Hexagon::HEXAGON_A2_abs:
    case Hexagon::HEXAGON_A2_absp:
    case Hexagon::HEXAGON_A2_abssat:
    case Hexagon::HEXAGON_A2_add:
    case Hexagon::HEXAGON_A2_addh_h16_hh:
    case Hexagon::HEXAGON_A2_addh_h16_hl:
    case Hexagon::HEXAGON_A2_addh_h16_lh:
    case Hexagon::HEXAGON_A2_addh_h16_ll:
    case Hexagon::HEXAGON_A2_addh_h16_sat_hh:
    case Hexagon::HEXAGON_A2_addh_h16_sat_hl:
    case Hexagon::HEXAGON_A2_addh_h16_sat_lh:
    case Hexagon::HEXAGON_A2_addh_h16_sat_ll:
    case Hexagon::HEXAGON_A2_addh_l16_hl:
    case Hexagon::HEXAGON_A2_addh_l16_ll:
    case Hexagon::HEXAGON_A2_addh_l16_sat_hl:
    case Hexagon::HEXAGON_A2_addh_l16_sat_ll:
    case Hexagon::HEXAGON_A2_addi:
    case Hexagon::HEXAGON_A2_addp:
    case Hexagon::HEXAGON_A2_addsat:
    case Hexagon::HEXAGON_A2_and:
    case Hexagon::HEXAGON_A2_andir:
    case Hexagon::HEXAGON_A2_andp:
    case Hexagon::HEXAGON_A2_aslh:
    case Hexagon::HEXAGON_A2_asrh:
    case Hexagon::HEXAGON_A2_combine_hh:
    case Hexagon::HEXAGON_A2_combine_hl:
    case Hexagon::HEXAGON_A2_combine_lh:
    case Hexagon::HEXAGON_A2_combine_ll:
    case Hexagon::HEXAGON_A2_combineii:
    case Hexagon::HEXAGON_A2_combinew:
    case Hexagon::HEXAGON_A2_max:
    case Hexagon::HEXAGON_A2_maxu:
    case Hexagon::HEXAGON_A2_min:
    case Hexagon::HEXAGON_A2_minu:
    case Hexagon::HEXAGON_A2_neg:
    case Hexagon::HEXAGON_A2_negp:
    case Hexagon::HEXAGON_A2_negsat:
    case Hexagon::HEXAGON_A2_not:
    case Hexagon::HEXAGON_A2_notp:
    case Hexagon::HEXAGON_A2_or:
    case Hexagon::HEXAGON_A2_orir:
    case Hexagon::HEXAGON_A2_orp:
    case Hexagon::HEXAGON_A2_sat:
    case Hexagon::HEXAGON_A2_satb:
    case Hexagon::HEXAGON_A2_sath:
    case Hexagon::HEXAGON_A2_satub:
    case Hexagon::HEXAGON_A2_satuh:
    case Hexagon::HEXAGON_A2_sub:
    case Hexagon::HEXAGON_A2_subh_h16_hh:
    case Hexagon::HEXAGON_A2_subh_h16_hl:
    case Hexagon::HEXAGON_A2_subh_h16_lh:
    case Hexagon::HEXAGON_A2_subh_h16_ll:
    case Hexagon::HEXAGON_A2_subh_h16_sat_hh:
    case Hexagon::HEXAGON_A2_subh_h16_sat_hl:
    case Hexagon::HEXAGON_A2_subh_h16_sat_lh:
    case Hexagon::HEXAGON_A2_subh_h16_sat_ll:
    case Hexagon::HEXAGON_A2_subh_l16_hl:
    case Hexagon::HEXAGON_A2_subh_l16_ll:
    case Hexagon::HEXAGON_A2_subh_l16_sat_hl:
    case Hexagon::HEXAGON_A2_subh_l16_sat_ll:
    case Hexagon::HEXAGON_A2_subp:
    case Hexagon::HEXAGON_A2_subri:
    case Hexagon::HEXAGON_A2_subsat:
    case Hexagon::HEXAGON_A2_svaddh:
    case Hexagon::HEXAGON_A2_svaddhs:
    case Hexagon::HEXAGON_A2_svadduhs:
    case Hexagon::HEXAGON_A2_svavgh:
    case Hexagon::HEXAGON_A2_svavghs:
    case Hexagon::HEXAGON_A2_svnavgh:
    case Hexagon::HEXAGON_A2_svsubh:
    case Hexagon::HEXAGON_A2_svsubhs:
    case Hexagon::HEXAGON_A2_svsubuhs:
    case Hexagon::HEXAGON_A2_swiz:
    case Hexagon::HEXAGON_A2_sxtb:
    case Hexagon::HEXAGON_A2_sxth:
    case Hexagon::HEXAGON_A2_sxtw:
    case Hexagon::HEXAGON_A2_tfr:
    case Hexagon::HEXAGON_A2_tfrih:
    case Hexagon::HEXAGON_A2_tfril:
    case Hexagon::HEXAGON_A2_tfrp:
    case Hexagon::HEXAGON_A2_tfrpi:
    case Hexagon::HEXAGON_A2_tfrsi:
    case Hexagon::HEXAGON_A2_vabsh:
    case Hexagon::HEXAGON_A2_vabshsat:
    case Hexagon::HEXAGON_A2_vabsw:
    case Hexagon::HEXAGON_A2_vabswsat:
    case Hexagon::HEXAGON_A2_vaddh:
    case Hexagon::HEXAGON_A2_vaddhs:
    case Hexagon::HEXAGON_A2_vaddub:
    case Hexagon::HEXAGON_A2_vaddubs:
    case Hexagon::HEXAGON_A2_vadduhs:
    case Hexagon::HEXAGON_A2_vaddw:
    case Hexagon::HEXAGON_A2_vaddws:
    case Hexagon::HEXAGON_A2_vavgh:
    case Hexagon::HEXAGON_A2_vavghcr:
    case Hexagon::HEXAGON_A2_vavghr:
    case Hexagon::HEXAGON_A2_vavgub:
    case Hexagon::HEXAGON_A2_vavgubr:
    case Hexagon::HEXAGON_A2_vavguh:
    case Hexagon::HEXAGON_A2_vavguhr:
    case Hexagon::HEXAGON_A2_vavguw:
    case Hexagon::HEXAGON_A2_vavguwr:
    case Hexagon::HEXAGON_A2_vavgw:
    case Hexagon::HEXAGON_A2_vavgwcr:
    case Hexagon::HEXAGON_A2_vavgwr:
    case Hexagon::HEXAGON_A2_vcmpbeq:
    case Hexagon::HEXAGON_A2_vcmpbgtu:
    case Hexagon::HEXAGON_A2_vcmpheq:
    case Hexagon::HEXAGON_A2_vcmphgt:
    case Hexagon::HEXAGON_A2_vcmphgtu:
    case Hexagon::HEXAGON_A2_vcmpweq:
    case Hexagon::HEXAGON_A2_vcmpwgt:
    case Hexagon::HEXAGON_A2_vcmpwgtu:
    case Hexagon::HEXAGON_A2_vconj:
    case Hexagon::HEXAGON_A2_vmaxh:
    case Hexagon::HEXAGON_A2_vmaxub:
    case Hexagon::HEXAGON_A2_vmaxuh:
    case Hexagon::HEXAGON_A2_vmaxuw:
    case Hexagon::HEXAGON_A2_vmaxw:
    case Hexagon::HEXAGON_A2_vminh:
    case Hexagon::HEXAGON_A2_vminub:
    case Hexagon::HEXAGON_A2_vminuh:
    case Hexagon::HEXAGON_A2_vminuw:
    case Hexagon::HEXAGON_A2_vminw:
    case Hexagon::HEXAGON_A2_vnavgh:
    case Hexagon::HEXAGON_A2_vnavghcr:
    case Hexagon::HEXAGON_A2_vnavghr:
    case Hexagon::HEXAGON_A2_vnavgw:
    case Hexagon::HEXAGON_A2_vnavgwcr:
    case Hexagon::HEXAGON_A2_vnavgwr:
    case Hexagon::HEXAGON_A2_vraddub:
    case Hexagon::HEXAGON_A2_vraddub_acc:
    case Hexagon::HEXAGON_A2_vrsadub:
    case Hexagon::HEXAGON_A2_vrsadub_acc:
    case Hexagon::HEXAGON_A2_vsubh:
    case Hexagon::HEXAGON_A2_vsubhs:
    case Hexagon::HEXAGON_A2_vsubub:
    case Hexagon::HEXAGON_A2_vsububs:
    case Hexagon::HEXAGON_A2_vsubuhs:
    case Hexagon::HEXAGON_A2_vsubw:
    case Hexagon::HEXAGON_A2_vsubws:
    case Hexagon::HEXAGON_A2_xor:
    case Hexagon::HEXAGON_A2_xorp:
    case Hexagon::HEXAGON_A2_zxtb:
    case Hexagon::HEXAGON_A2_zxth:
    case Hexagon::HEXAGON_A4_cround_ri:
    case Hexagon::HEXAGON_A4_cround_rr:
    case Hexagon::HEXAGON_A4_modwrapu:
    case Hexagon::HEXAGON_A4_round_ri:
    case Hexagon::HEXAGON_A4_round_ri_sat:
    case Hexagon::HEXAGON_A4_round_rr:
    case Hexagon::HEXAGON_A4_round_rr_sat:
    case Hexagon::HEXAGON_A5_vaddhubs:
    case Hexagon::HEXAGON_C2_all8:
    case Hexagon::HEXAGON_C2_and:
    case Hexagon::HEXAGON_C2_andn:
    case Hexagon::HEXAGON_C2_any8:
    case Hexagon::HEXAGON_C2_cmpeq:
    case Hexagon::HEXAGON_C2_cmpeqi:
    case Hexagon::HEXAGON_C2_cmpeqp:
    case Hexagon::HEXAGON_C2_cmpgei:
    case Hexagon::HEXAGON_C2_cmpgeui:
    case Hexagon::HEXAGON_C2_cmpgt:
    case Hexagon::HEXAGON_C2_cmpgti:
    case Hexagon::HEXAGON_C2_cmpgtp:
    case Hexagon::HEXAGON_C2_cmpgtu:
    case Hexagon::HEXAGON_C2_cmpgtui:
    case Hexagon::HEXAGON_C2_cmpgtup:
    case Hexagon::HEXAGON_C2_cmplt:
    case Hexagon::HEXAGON_C2_cmpltu:
    case Hexagon::HEXAGON_C2_mask:
    case Hexagon::HEXAGON_C2_mux:
    case Hexagon::HEXAGON_C2_muxii:
    case Hexagon::HEXAGON_C2_muxir:
    case Hexagon::HEXAGON_C2_muxri:
    case Hexagon::HEXAGON_C2_not:
    case Hexagon::HEXAGON_C2_or:
    case Hexagon::HEXAGON_C2_orn:
    case Hexagon::HEXAGON_C2_pxfer_map:
    case Hexagon::HEXAGON_C2_tfrpr:
    case Hexagon::HEXAGON_C2_tfrrp:
    case Hexagon::HEXAGON_C2_vitpack:
    case Hexagon::HEXAGON_C2_vmux:
    case Hexagon::HEXAGON_C2_xor:
    case Hexagon::HEXAGON_C4_fastcorner9:
    case Hexagon::HEXAGON_C4_fastcorner9_not:
    case Hexagon::HEXAGON_F2_conv_d2df:
    case Hexagon::HEXAGON_F2_conv_d2sf:
    case Hexagon::HEXAGON_F2_conv_df2d:
    case Hexagon::HEXAGON_F2_conv_df2d_chop:
    case Hexagon::HEXAGON_F2_conv_df2sf:
    case Hexagon::HEXAGON_F2_conv_df2ud:
    case Hexagon::HEXAGON_F2_conv_df2ud_chop:
    case Hexagon::HEXAGON_F2_conv_df2uw:
    case Hexagon::HEXAGON_F2_conv_df2uw_chop:
    case Hexagon::HEXAGON_F2_conv_df2w:
    case Hexagon::HEXAGON_F2_conv_df2w_chop:
    case Hexagon::HEXAGON_F2_conv_sf2d:
    case Hexagon::HEXAGON_F2_conv_sf2d_chop:
    case Hexagon::HEXAGON_F2_conv_sf2df:
    case Hexagon::HEXAGON_F2_conv_sf2ud:
    case Hexagon::HEXAGON_F2_conv_sf2ud_chop:
    case Hexagon::HEXAGON_F2_conv_sf2uw:
    case Hexagon::HEXAGON_F2_conv_sf2uw_chop:
    case Hexagon::HEXAGON_F2_conv_sf2w:
    case Hexagon::HEXAGON_F2_conv_sf2w_chop:
    case Hexagon::HEXAGON_F2_conv_ud2df:
    case Hexagon::HEXAGON_F2_conv_ud2sf:
    case Hexagon::HEXAGON_F2_conv_uw2df:
    case Hexagon::HEXAGON_F2_conv_uw2sf:
    case Hexagon::HEXAGON_F2_conv_w2df:
    case Hexagon::HEXAGON_F2_conv_w2sf:
    case Hexagon::HEXAGON_F2_dfadd:
    case Hexagon::HEXAGON_F2_dfclass:
    case Hexagon::HEXAGON_F2_dfcmpeq:
    case Hexagon::HEXAGON_F2_dfcmpge:
    case Hexagon::HEXAGON_F2_dfcmpgt:
    case Hexagon::HEXAGON_F2_dfcmpuo:
    case Hexagon::HEXAGON_F2_dffixupd:
    case Hexagon::HEXAGON_F2_dffixupn:
    case Hexagon::HEXAGON_F2_dffixupr:
    case Hexagon::HEXAGON_F2_dffma:
    case Hexagon::HEXAGON_F2_dffma_lib:
    case Hexagon::HEXAGON_F2_dffma_sc:
    case Hexagon::HEXAGON_F2_dffms:
    case Hexagon::HEXAGON_F2_dffms_lib:
    case Hexagon::HEXAGON_F2_dfimm_n:
    case Hexagon::HEXAGON_F2_dfimm_p:
    case Hexagon::HEXAGON_F2_dfmax:
    case Hexagon::HEXAGON_F2_dfmin:
    case Hexagon::HEXAGON_F2_dfmpy:
    case Hexagon::HEXAGON_F2_dfsub:
    case Hexagon::HEXAGON_F2_sfadd:
    case Hexagon::HEXAGON_F2_sfclass:
    case Hexagon::HEXAGON_F2_sfcmpeq:
    case Hexagon::HEXAGON_F2_sfcmpge:
    case Hexagon::HEXAGON_F2_sfcmpgt:
    case Hexagon::HEXAGON_F2_sfcmpuo:
    case Hexagon::HEXAGON_F2_sffixupd:
    case Hexagon::HEXAGON_F2_sffixupn:
    case Hexagon::HEXAGON_F2_sffixupr:
    case Hexagon::HEXAGON_F2_sffma:
    case Hexagon::HEXAGON_F2_sffma_lib:
    case Hexagon::HEXAGON_F2_sffma_sc:
    case Hexagon::HEXAGON_F2_sffms:
    case Hexagon::HEXAGON_F2_sffms_lib:
    case Hexagon::HEXAGON_F2_sfimm_n:
    case Hexagon::HEXAGON_F2_sfimm_p:
    case Hexagon::HEXAGON_F2_sfmax:
    case Hexagon::HEXAGON_F2_sfmin:
    case Hexagon::HEXAGON_F2_sfmpy:
    case Hexagon::HEXAGON_F2_sfsub:
    case Hexagon::HEXAGON_M2_acci:
    case Hexagon::HEXAGON_M2_accii:
    case Hexagon::HEXAGON_M2_cmaci_s0:
    case Hexagon::HEXAGON_M2_cmacr_s0:
    case Hexagon::HEXAGON_M2_cmacs_s0:
    case Hexagon::HEXAGON_M2_cmacs_s1:
    case Hexagon::HEXAGON_M2_cmacsc_s0:
    case Hexagon::HEXAGON_M2_cmacsc_s1:
    case Hexagon::HEXAGON_M2_cmpyi_s0:
    case Hexagon::HEXAGON_M2_cmpyr_s0:
    case Hexagon::HEXAGON_M2_cmpyrs_s0:
    case Hexagon::HEXAGON_M2_cmpyrs_s1:
    case Hexagon::HEXAGON_M2_cmpyrsc_s0:
    case Hexagon::HEXAGON_M2_cmpyrsc_s1:
    case Hexagon::HEXAGON_M2_cmpys_s0:
    case Hexagon::HEXAGON_M2_cmpys_s1:
    case Hexagon::HEXAGON_M2_cmpysc_s0:
    case Hexagon::HEXAGON_M2_cmpysc_s1:
    case Hexagon::HEXAGON_M2_cnacs_s0:
    case Hexagon::HEXAGON_M2_cnacs_s1:
    case Hexagon::HEXAGON_M2_cnacsc_s0:
    case Hexagon::HEXAGON_M2_cnacsc_s1:
    case Hexagon::HEXAGON_M2_dpmpyss_acc_s0:
    case Hexagon::HEXAGON_M2_dpmpyss_nac_s0:
    case Hexagon::HEXAGON_M2_dpmpyss_rnd_s0:
    case Hexagon::HEXAGON_M2_dpmpyss_s0:
    case Hexagon::HEXAGON_M2_dpmpyuu_acc_s0:
    case Hexagon::HEXAGON_M2_dpmpyuu_nac_s0:
    case Hexagon::HEXAGON_M2_dpmpyuu_s0:
    case Hexagon::HEXAGON_M2_hmmpyh_rs1:
    case Hexagon::HEXAGON_M2_hmmpyl_rs1:
    case Hexagon::HEXAGON_M2_maci:
    case Hexagon::HEXAGON_M2_macsin:
    case Hexagon::HEXAGON_M2_macsip:
    case Hexagon::HEXAGON_M2_mmachs_rs0:
    case Hexagon::HEXAGON_M2_mmachs_rs1:
    case Hexagon::HEXAGON_M2_mmachs_s0:
    case Hexagon::HEXAGON_M2_mmachs_s1:
    case Hexagon::HEXAGON_M2_mmacls_rs0:
    case Hexagon::HEXAGON_M2_mmacls_rs1:
    case Hexagon::HEXAGON_M2_mmacls_s0:
    case Hexagon::HEXAGON_M2_mmacls_s1:
    case Hexagon::HEXAGON_M2_mmacuhs_rs0:
    case Hexagon::HEXAGON_M2_mmacuhs_rs1:
    case Hexagon::HEXAGON_M2_mmacuhs_s0:
    case Hexagon::HEXAGON_M2_mmacuhs_s1:
    case Hexagon::HEXAGON_M2_mmaculs_rs0:
    case Hexagon::HEXAGON_M2_mmaculs_rs1:
    case Hexagon::HEXAGON_M2_mmaculs_s0:
    case Hexagon::HEXAGON_M2_mmaculs_s1:
    case Hexagon::HEXAGON_M2_mmpyh_rs0:
    case Hexagon::HEXAGON_M2_mmpyh_rs1:
    case Hexagon::HEXAGON_M2_mmpyh_s0:
    case Hexagon::HEXAGON_M2_mmpyh_s1:
    case Hexagon::HEXAGON_M2_mmpyl_rs0:
    case Hexagon::HEXAGON_M2_mmpyl_rs1:
    case Hexagon::HEXAGON_M2_mmpyl_s0:
    case Hexagon::HEXAGON_M2_mmpyl_s1:
    case Hexagon::HEXAGON_M2_mmpyuh_rs0:
    case Hexagon::HEXAGON_M2_mmpyuh_rs1:
    case Hexagon::HEXAGON_M2_mmpyuh_s0:
    case Hexagon::HEXAGON_M2_mmpyuh_s1:
    case Hexagon::HEXAGON_M2_mmpyul_rs0:
    case Hexagon::HEXAGON_M2_mmpyul_rs1:
    case Hexagon::HEXAGON_M2_mmpyul_s0:
    case Hexagon::HEXAGON_M2_mmpyul_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_acc_sat_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_nac_sat_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_rnd_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_rnd_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_rnd_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_rnd_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_rnd_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_rnd_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_rnd_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_rnd_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_hh_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_hh_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_hl_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_hl_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_lh_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_lh_s1:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_ll_s0:
    case Hexagon::HEXAGON_M2_mpy_sat_rnd_ll_s1:
    case Hexagon::HEXAGON_M2_mpy_up:
    case Hexagon::HEXAGON_M2_mpyd_acc_hh_s0:
    case Hexagon::HEXAGON_M2_mpyd_acc_hh_s1:
    case Hexagon::HEXAGON_M2_mpyd_acc_hl_s0:
    case Hexagon::HEXAGON_M2_mpyd_acc_hl_s1:
    case Hexagon::HEXAGON_M2_mpyd_acc_lh_s0:
    case Hexagon::HEXAGON_M2_mpyd_acc_lh_s1:
    case Hexagon::HEXAGON_M2_mpyd_acc_ll_s0:
    case Hexagon::HEXAGON_M2_mpyd_acc_ll_s1:
    case Hexagon::HEXAGON_M2_mpyd_hh_s0:
    case Hexagon::HEXAGON_M2_mpyd_hh_s1:
    case Hexagon::HEXAGON_M2_mpyd_hl_s0:
    case Hexagon::HEXAGON_M2_mpyd_hl_s1:
    case Hexagon::HEXAGON_M2_mpyd_lh_s0:
    case Hexagon::HEXAGON_M2_mpyd_lh_s1:
    case Hexagon::HEXAGON_M2_mpyd_ll_s0:
    case Hexagon::HEXAGON_M2_mpyd_ll_s1:
    case Hexagon::HEXAGON_M2_mpyd_nac_hh_s0:
    case Hexagon::HEXAGON_M2_mpyd_nac_hh_s1:
    case Hexagon::HEXAGON_M2_mpyd_nac_hl_s0:
    case Hexagon::HEXAGON_M2_mpyd_nac_hl_s1:
    case Hexagon::HEXAGON_M2_mpyd_nac_lh_s0:
    case Hexagon::HEXAGON_M2_mpyd_nac_lh_s1:
    case Hexagon::HEXAGON_M2_mpyd_nac_ll_s0:
    case Hexagon::HEXAGON_M2_mpyd_nac_ll_s1:
    case Hexagon::HEXAGON_M2_mpyd_rnd_hh_s0:
    case Hexagon::HEXAGON_M2_mpyd_rnd_hh_s1:
    case Hexagon::HEXAGON_M2_mpyd_rnd_hl_s0:
    case Hexagon::HEXAGON_M2_mpyd_rnd_hl_s1:
    case Hexagon::HEXAGON_M2_mpyd_rnd_lh_s0:
    case Hexagon::HEXAGON_M2_mpyd_rnd_lh_s1:
    case Hexagon::HEXAGON_M2_mpyd_rnd_ll_s0:
    case Hexagon::HEXAGON_M2_mpyd_rnd_ll_s1:
    case Hexagon::HEXAGON_M2_mpyi:
    case Hexagon::HEXAGON_M2_mpyu_acc_hh_s0:
    case Hexagon::HEXAGON_M2_mpyu_acc_hh_s1:
    case Hexagon::HEXAGON_M2_mpyu_acc_hl_s0:
    case Hexagon::HEXAGON_M2_mpyu_acc_hl_s1:
    case Hexagon::HEXAGON_M2_mpyu_acc_lh_s0:
    case Hexagon::HEXAGON_M2_mpyu_acc_lh_s1:
    case Hexagon::HEXAGON_M2_mpyu_acc_ll_s0:
    case Hexagon::HEXAGON_M2_mpyu_acc_ll_s1:
    case Hexagon::HEXAGON_M2_mpyu_hh_s0:
    case Hexagon::HEXAGON_M2_mpyu_hh_s1:
    case Hexagon::HEXAGON_M2_mpyu_hl_s0:
    case Hexagon::HEXAGON_M2_mpyu_hl_s1:
    case Hexagon::HEXAGON_M2_mpyu_lh_s0:
    case Hexagon::HEXAGON_M2_mpyu_lh_s1:
    case Hexagon::HEXAGON_M2_mpyu_ll_s0:
    case Hexagon::HEXAGON_M2_mpyu_ll_s1:
    case Hexagon::HEXAGON_M2_mpyu_nac_hh_s0:
    case Hexagon::HEXAGON_M2_mpyu_nac_hh_s1:
    case Hexagon::HEXAGON_M2_mpyu_nac_hl_s0:
    case Hexagon::HEXAGON_M2_mpyu_nac_hl_s1:
    case Hexagon::HEXAGON_M2_mpyu_nac_lh_s0:
    case Hexagon::HEXAGON_M2_mpyu_nac_lh_s1:
    case Hexagon::HEXAGON_M2_mpyu_nac_ll_s0:
    case Hexagon::HEXAGON_M2_mpyu_nac_ll_s1:
    case Hexagon::HEXAGON_M2_mpyu_up:
    case Hexagon::HEXAGON_M2_mpyud_acc_hh_s0:
    case Hexagon::HEXAGON_M2_mpyud_acc_hh_s1:
    case Hexagon::HEXAGON_M2_mpyud_acc_hl_s0:
    case Hexagon::HEXAGON_M2_mpyud_acc_hl_s1:
    case Hexagon::HEXAGON_M2_mpyud_acc_lh_s0:
    case Hexagon::HEXAGON_M2_mpyud_acc_lh_s1:
    case Hexagon::HEXAGON_M2_mpyud_acc_ll_s0:
    case Hexagon::HEXAGON_M2_mpyud_acc_ll_s1:
    case Hexagon::HEXAGON_M2_mpyud_hh_s0:
    case Hexagon::HEXAGON_M2_mpyud_hh_s1:
    case Hexagon::HEXAGON_M2_mpyud_hl_s0:
    case Hexagon::HEXAGON_M2_mpyud_hl_s1:
    case Hexagon::HEXAGON_M2_mpyud_lh_s0:
    case Hexagon::HEXAGON_M2_mpyud_lh_s1:
    case Hexagon::HEXAGON_M2_mpyud_ll_s0:
    case Hexagon::HEXAGON_M2_mpyud_ll_s1:
    case Hexagon::HEXAGON_M2_mpyud_nac_hh_s0:
    case Hexagon::HEXAGON_M2_mpyud_nac_hh_s1:
    case Hexagon::HEXAGON_M2_mpyud_nac_hl_s0:
    case Hexagon::HEXAGON_M2_mpyud_nac_hl_s1:
    case Hexagon::HEXAGON_M2_mpyud_nac_lh_s0:
    case Hexagon::HEXAGON_M2_mpyud_nac_lh_s1:
    case Hexagon::HEXAGON_M2_mpyud_nac_ll_s0:
    case Hexagon::HEXAGON_M2_mpyud_nac_ll_s1:
    case Hexagon::HEXAGON_M2_mpyui:
    case Hexagon::HEXAGON_M2_nacci:
    case Hexagon::HEXAGON_M2_naccii:
    case Hexagon::HEXAGON_M2_subacc:
    case Hexagon::HEXAGON_M2_vabsdiffh:
    case Hexagon::HEXAGON_M2_vabsdiffw:
    case Hexagon::HEXAGON_M2_vcmac_s0_sat_i:
    case Hexagon::HEXAGON_M2_vcmac_s0_sat_r:
    case Hexagon::HEXAGON_M2_vcmpy_s0_sat_i:
    case Hexagon::HEXAGON_M2_vcmpy_s0_sat_r:
    case Hexagon::HEXAGON_M2_vcmpy_s1_sat_i:
    case Hexagon::HEXAGON_M2_vcmpy_s1_sat_r:
    case Hexagon::HEXAGON_M2_vdmacs_s0:
    case Hexagon::HEXAGON_M2_vdmacs_s1:
    case Hexagon::HEXAGON_M2_vdmpyrs_s0:
    case Hexagon::HEXAGON_M2_vdmpyrs_s1:
    case Hexagon::HEXAGON_M2_vdmpys_s0:
    case Hexagon::HEXAGON_M2_vdmpys_s1:
    case Hexagon::HEXAGON_M2_vmac2:
    case Hexagon::HEXAGON_M2_vmac2es:
    case Hexagon::HEXAGON_M2_vmac2es_s0:
    case Hexagon::HEXAGON_M2_vmac2es_s1:
    case Hexagon::HEXAGON_M2_vmac2s_s0:
    case Hexagon::HEXAGON_M2_vmac2s_s1:
    case Hexagon::HEXAGON_M2_vmpy2es_s0:
    case Hexagon::HEXAGON_M2_vmpy2es_s1:
    case Hexagon::HEXAGON_M2_vmpy2s_s0:
    case Hexagon::HEXAGON_M2_vmpy2s_s0pack:
    case Hexagon::HEXAGON_M2_vmpy2s_s1:
    case Hexagon::HEXAGON_M2_vmpy2s_s1pack:
    case Hexagon::HEXAGON_M2_vrcmaci_s0:
    case Hexagon::HEXAGON_M2_vrcmaci_s0c:
    case Hexagon::HEXAGON_M2_vrcmacr_s0:
    case Hexagon::HEXAGON_M2_vrcmacr_s0c:
    case Hexagon::HEXAGON_M2_vrcmpyi_s0:
    case Hexagon::HEXAGON_M2_vrcmpyi_s0c:
    case Hexagon::HEXAGON_M2_vrcmpyr_s0:
    case Hexagon::HEXAGON_M2_vrcmpyr_s0c:
    case Hexagon::HEXAGON_M2_vrmac_s0:
    case Hexagon::HEXAGON_M2_vrmpy_s0:
    case Hexagon::HEXAGON_M2_xor_xacc:
    case Hexagon::HEXAGON_M4_and_and:
    case Hexagon::HEXAGON_M4_and_andn:
    case Hexagon::HEXAGON_M4_and_or:
    case Hexagon::HEXAGON_M4_and_xor:
    case Hexagon::HEXAGON_M4_or_and:
    case Hexagon::HEXAGON_M4_or_andn:
    case Hexagon::HEXAGON_M4_or_or:
    case Hexagon::HEXAGON_M4_or_xor:
    case Hexagon::HEXAGON_M4_xor_and:
    case Hexagon::HEXAGON_M4_xor_andn:
    case Hexagon::HEXAGON_M4_xor_or:
    case Hexagon::HEXAGON_M5_vdmacbsu:
    case Hexagon::HEXAGON_M5_vdmpybsu:
    case Hexagon::HEXAGON_M5_vmacbsu:
    case Hexagon::HEXAGON_M5_vmacbuu:
    case Hexagon::HEXAGON_M5_vmpybsu:
    case Hexagon::HEXAGON_M5_vmpybuu:
    case Hexagon::HEXAGON_M5_vrmacbsu:
    case Hexagon::HEXAGON_M5_vrmacbuu:
    case Hexagon::HEXAGON_M5_vrmpybsu:
    case Hexagon::HEXAGON_M5_vrmpybuu:
    case Hexagon::HEXAGON_S2_addasl_rrri:
    case Hexagon::HEXAGON_S2_asl_i_p:
    case Hexagon::HEXAGON_S2_asl_i_p_acc:
    case Hexagon::HEXAGON_S2_asl_i_p_and:
    case Hexagon::HEXAGON_S2_asl_i_p_nac:
    case Hexagon::HEXAGON_S2_asl_i_p_or:
    case Hexagon::HEXAGON_S2_asl_i_p_xacc:
    case Hexagon::HEXAGON_S2_asl_i_r:
    case Hexagon::HEXAGON_S2_asl_i_r_acc:
    case Hexagon::HEXAGON_S2_asl_i_r_and:
    case Hexagon::HEXAGON_S2_asl_i_r_nac:
    case Hexagon::HEXAGON_S2_asl_i_r_or:
    case Hexagon::HEXAGON_S2_asl_i_r_sat:
    case Hexagon::HEXAGON_S2_asl_i_r_xacc:
    case Hexagon::HEXAGON_S2_asl_i_vh:
    case Hexagon::HEXAGON_S2_asl_i_vw:
    case Hexagon::HEXAGON_S2_asl_r_p:
    case Hexagon::HEXAGON_S2_asl_r_p_acc:
    case Hexagon::HEXAGON_S2_asl_r_p_and:
    case Hexagon::HEXAGON_S2_asl_r_p_nac:
    case Hexagon::HEXAGON_S2_asl_r_p_or:
    case Hexagon::HEXAGON_S2_asl_r_r:
    case Hexagon::HEXAGON_S2_asl_r_r_acc:
    case Hexagon::HEXAGON_S2_asl_r_r_and:
    case Hexagon::HEXAGON_S2_asl_r_r_nac:
    case Hexagon::HEXAGON_S2_asl_r_r_or:
    case Hexagon::HEXAGON_S2_asl_r_r_sat:
    case Hexagon::HEXAGON_S2_asl_r_vh:
    case Hexagon::HEXAGON_S2_asl_r_vw:
    case Hexagon::HEXAGON_S2_asr_i_p:
    case Hexagon::HEXAGON_S2_asr_i_p_acc:
    case Hexagon::HEXAGON_S2_asr_i_p_and:
    case Hexagon::HEXAGON_S2_asr_i_p_nac:
    case Hexagon::HEXAGON_S2_asr_i_p_or:
    case Hexagon::HEXAGON_S2_asr_i_p_rnd:
    case Hexagon::HEXAGON_S2_asr_i_p_rnd_goodsyntax:
    case Hexagon::HEXAGON_S2_asr_i_r:
    case Hexagon::HEXAGON_S2_asr_i_r_acc:
    case Hexagon::HEXAGON_S2_asr_i_r_and:
    case Hexagon::HEXAGON_S2_asr_i_r_nac:
    case Hexagon::HEXAGON_S2_asr_i_r_or:
    case Hexagon::HEXAGON_S2_asr_i_r_rnd:
    case Hexagon::HEXAGON_S2_asr_i_r_rnd_goodsyntax:
    case Hexagon::HEXAGON_S2_asr_i_svw_trun:
    case Hexagon::HEXAGON_S2_asr_i_vh:
    case Hexagon::HEXAGON_S2_asr_i_vw:
    case Hexagon::HEXAGON_S2_asr_r_p:
    case Hexagon::HEXAGON_S2_asr_r_p_acc:
    case Hexagon::HEXAGON_S2_asr_r_p_and:
    case Hexagon::HEXAGON_S2_asr_r_p_nac:
    case Hexagon::HEXAGON_S2_asr_r_p_or:
    case Hexagon::HEXAGON_S2_asr_r_r:
    case Hexagon::HEXAGON_S2_asr_r_r_acc:
    case Hexagon::HEXAGON_S2_asr_r_r_and:
    case Hexagon::HEXAGON_S2_asr_r_r_nac:
    case Hexagon::HEXAGON_S2_asr_r_r_or:
    case Hexagon::HEXAGON_S2_asr_r_r_sat:
    case Hexagon::HEXAGON_S2_asr_r_svw_trun:
    case Hexagon::HEXAGON_S2_asr_r_vh:
    case Hexagon::HEXAGON_S2_asr_r_vw:
    case Hexagon::HEXAGON_S2_cl0:
    case Hexagon::HEXAGON_S2_cl0p:
    case Hexagon::HEXAGON_S2_cl1:
    case Hexagon::HEXAGON_S2_cl1p:
    case Hexagon::HEXAGON_S2_clb:
    case Hexagon::HEXAGON_S2_clbnorm:
    case Hexagon::HEXAGON_S2_clbp:
    case Hexagon::HEXAGON_S2_clrbit_i:
    case Hexagon::HEXAGON_S2_clrbit_r:
    case Hexagon::HEXAGON_S2_ct0:
    case Hexagon::HEXAGON_S2_ct1:
    case Hexagon::HEXAGON_S2_extractu:
    case Hexagon::HEXAGON_S2_extractu_rp:
    case Hexagon::HEXAGON_S2_extractup:
    case Hexagon::HEXAGON_S2_extractup_rp:
    case Hexagon::HEXAGON_S2_lsl_r_p:
    case Hexagon::HEXAGON_S2_lsl_r_p_acc:
    case Hexagon::HEXAGON_S2_lsl_r_p_and:
    case Hexagon::HEXAGON_S2_lsl_r_p_nac:
    case Hexagon::HEXAGON_S2_lsl_r_p_or:
    case Hexagon::HEXAGON_S2_lsl_r_r:
    case Hexagon::HEXAGON_S2_lsl_r_r_acc:
    case Hexagon::HEXAGON_S2_lsl_r_r_and:
    case Hexagon::HEXAGON_S2_lsl_r_r_nac:
    case Hexagon::HEXAGON_S2_lsl_r_r_or:
    case Hexagon::HEXAGON_S2_lsl_r_vh:
    case Hexagon::HEXAGON_S2_lsl_r_vw:
    case Hexagon::HEXAGON_S2_lsr_i_p:
    case Hexagon::HEXAGON_S2_lsr_i_p_acc:
    case Hexagon::HEXAGON_S2_lsr_i_p_and:
    case Hexagon::HEXAGON_S2_lsr_i_p_nac:
    case Hexagon::HEXAGON_S2_lsr_i_p_or:
    case Hexagon::HEXAGON_S2_lsr_i_p_xacc:
    case Hexagon::HEXAGON_S2_lsr_i_r:
    case Hexagon::HEXAGON_S2_lsr_i_r_acc:
    case Hexagon::HEXAGON_S2_lsr_i_r_and:
    case Hexagon::HEXAGON_S2_lsr_i_r_nac:
    case Hexagon::HEXAGON_S2_lsr_i_r_or:
    case Hexagon::HEXAGON_S2_lsr_i_r_xacc:
    case Hexagon::HEXAGON_S2_lsr_i_vh:
    case Hexagon::HEXAGON_S2_lsr_i_vw:
    case Hexagon::HEXAGON_S2_lsr_r_p:
    case Hexagon::HEXAGON_S2_lsr_r_p_acc:
    case Hexagon::HEXAGON_S2_lsr_r_p_and:
    case Hexagon::HEXAGON_S2_lsr_r_p_nac:
    case Hexagon::HEXAGON_S2_lsr_r_p_or:
    case Hexagon::HEXAGON_S2_lsr_r_r:
    case Hexagon::HEXAGON_S2_lsr_r_r_acc:
    case Hexagon::HEXAGON_S2_lsr_r_r_and:
    case Hexagon::HEXAGON_S2_lsr_r_r_nac:
    case Hexagon::HEXAGON_S2_lsr_r_r_or:
    case Hexagon::HEXAGON_S2_lsr_r_vh:
    case Hexagon::HEXAGON_S2_lsr_r_vw:
    case Hexagon::HEXAGON_S2_packhl:
    case Hexagon::HEXAGON_S2_parityp:
    case Hexagon::HEXAGON_S2_setbit_i:
    case Hexagon::HEXAGON_S2_setbit_r:
    case Hexagon::HEXAGON_S2_shuffeb:
    case Hexagon::HEXAGON_S2_shuffeh:
    case Hexagon::HEXAGON_S2_shuffob:
    case Hexagon::HEXAGON_S2_shuffoh:
    case Hexagon::HEXAGON_S2_svsathb:
    case Hexagon::HEXAGON_S2_svsathub:
    case Hexagon::HEXAGON_S2_togglebit_i:
    case Hexagon::HEXAGON_S2_togglebit_r:
    case Hexagon::HEXAGON_S2_tstbit_i:
    case Hexagon::HEXAGON_S2_tstbit_r:
    case Hexagon::HEXAGON_S2_valignib:
    case Hexagon::HEXAGON_S2_valignrb:
    case Hexagon::HEXAGON_S2_vcrotate:
    case Hexagon::HEXAGON_S2_vrndpackwh:
    case Hexagon::HEXAGON_S2_vrndpackwhs:
    case Hexagon::HEXAGON_S2_vsathb:
    case Hexagon::HEXAGON_S2_vsathb_nopack:
    case Hexagon::HEXAGON_S2_vsathub:
    case Hexagon::HEXAGON_S2_vsathub_nopack:
    case Hexagon::HEXAGON_S2_vsatwh:
    case Hexagon::HEXAGON_S2_vsatwh_nopack:
    case Hexagon::HEXAGON_S2_vsatwuh:
    case Hexagon::HEXAGON_S2_vsatwuh_nopack:
    case Hexagon::HEXAGON_S2_vsplatrb:
    case Hexagon::HEXAGON_S2_vsplatrh:
    case Hexagon::HEXAGON_S2_vsxtbh:
    case Hexagon::HEXAGON_S2_vsxthw:
    case Hexagon::HEXAGON_S2_vtrunehb:
    case Hexagon::HEXAGON_S2_vtrunewh:
    case Hexagon::HEXAGON_S2_vtrunohb:
    case Hexagon::HEXAGON_S2_vtrunowh:
    case Hexagon::HEXAGON_S2_vzxtbh:
    case Hexagon::HEXAGON_S2_vzxthw:
    case Hexagon::HEXAGON_S4_or_andi:
    case Hexagon::HEXAGON_S4_or_andix:
    case Hexagon::HEXAGON_S4_or_ori:
    case Hexagon::HEXAGON_S5_asrhub_rnd_sat_goodsyntax:
    case Hexagon::HEXAGON_S5_asrhub_sat:
    case Hexagon::HEXAGON_S5_popcountp:
    case Hexagon::HEXAGON_S5_vasrhrnd_goodsyntax:
    case Hexagon::HEXAGON_circ_ldd:
    case Hexagon::HI:
    case Hexagon::HI_jt:
    case Hexagon::HI_label:
    case Hexagon::HIi:
    case Hexagon::Hexagon_A2_addpsat:
    case Hexagon::Hexagon_A2_addsp:
    case Hexagon::Hexagon_A2_maxp:
    case Hexagon::Hexagon_A2_maxup:
    case Hexagon::Hexagon_A4_andn:
    case Hexagon::Hexagon_A4_combineir:
    case Hexagon::Hexagon_A4_combineri:
    case Hexagon::Hexagon_A4_orn:
    case Hexagon::Hexagon_A4_rcmpeq:
    case Hexagon::Hexagon_A4_rcmpeqi:
    case Hexagon::Hexagon_A4_rcmpneq:
    case Hexagon::Hexagon_A4_rcmpneqi:
    case Hexagon::Hexagon_C2_bitsclr:
    case Hexagon::Hexagon_C2_bitsclri:
    case Hexagon::Hexagon_C2_bitsset:
    case Hexagon::Hexagon_C4_and_and:
    case Hexagon::Hexagon_C4_and_andn:
    case Hexagon::Hexagon_C4_and_or:
    case Hexagon::Hexagon_C4_and_orn:
    case Hexagon::Hexagon_C4_cmplte:
    case Hexagon::Hexagon_C4_cmpltei:
    case Hexagon::Hexagon_C4_cmplteu:
    case Hexagon::Hexagon_C4_fastcorner9:
    case Hexagon::Hexagon_C4_fastcorner9_not:
    case Hexagon::Hexagon_C4_or_and:
    case Hexagon::Hexagon_C4_or_andn:
    case Hexagon::Hexagon_C4_or_or:
    case Hexagon::Hexagon_C4_or_orn:
    case Hexagon::Hexagon_M2_mpysmi:
    case Hexagon::Hexagon_M2_vradduh:
    case Hexagon::Hexagon_M2_vrcmpys_acc_s1:
    case Hexagon::Hexagon_M2_vrcmpys_s1:
    case Hexagon::Hexagon_M2_vrcmpys_s1rp:
    case Hexagon::Hexagon_M4_xor_xacc:
    case Hexagon::Hexagon_S2_brev:
    case Hexagon::Hexagon_S2_deinterleave:
    case Hexagon::Hexagon_S2_insert:
    case Hexagon::Hexagon_S2_insert_rp:
    case Hexagon::Hexagon_S2_insertp:
    case Hexagon::Hexagon_S2_insertp_rp:
    case Hexagon::Hexagon_S2_interleave:
    case Hexagon::Hexagon_S2_lfsp:
    case Hexagon::Hexagon_S2_tableidxb_goodsyntax:
    case Hexagon::Hexagon_S2_tableidxd_goodsyntax:
    case Hexagon::Hexagon_S2_tableidxh_goodsyntax:
    case Hexagon::Hexagon_S2_tableidxw_goodsyntax:
    case Hexagon::Hexagon_S2_vspliceib:
    case Hexagon::Hexagon_S2_vsplicerb:
    case Hexagon::Hexagon_S4_addaddi:
    case Hexagon::Hexagon_S4_andnp:
    case Hexagon::Hexagon_S4_ornp:
    case Hexagon::Hexagon_S4_subaddi:
    case Hexagon::IMMEXT_b:
    case Hexagon::IMMEXT_c:
    case Hexagon::IMMEXT_g:
    case Hexagon::IMMEXT_i:
    case Hexagon::LDb_GP_V4:
    case Hexagon::LDb_GP_cNotPt_V4:
    case Hexagon::LDb_GP_cPt_V4:
    case Hexagon::LDb_GP_cdnNotPt_V4:
    case Hexagon::LDb_GP_cdnPt_V4:
    case Hexagon::LDd_GP_V4:
    case Hexagon::LDd_GP_cNotPt_V4:
    case Hexagon::LDd_GP_cPt_V4:
    case Hexagon::LDd_GP_cdnNotPt_V4:
    case Hexagon::LDd_GP_cdnPt_V4:
    case Hexagon::LDh_GP_V4:
    case Hexagon::LDh_GP_cNotPt_V4:
    case Hexagon::LDh_GP_cPt_V4:
    case Hexagon::LDh_GP_cdnNotPt_V4:
    case Hexagon::LDh_GP_cdnPt_V4:
    case Hexagon::LDrib:
    case Hexagon::LDrib_abs_V4:
    case Hexagon::LDrib_abs_cNotPt_V4:
    case Hexagon::LDrib_abs_cPt_V4:
    case Hexagon::LDrib_abs_cdnNotPt_V4:
    case Hexagon::LDrib_abs_cdnPt_V4:
    case Hexagon::LDrib_abs_set_V4:
    case Hexagon::LDrib_cNotPt:
    case Hexagon::LDrib_cPt:
    case Hexagon::LDrib_cdnNotPt:
    case Hexagon::LDrib_cdnPt:
    case Hexagon::LDrib_ind_lo_V4:
    case Hexagon::LDrib_indexed:
    case Hexagon::LDrib_indexed_cNotPt:
    case Hexagon::LDrib_indexed_cPt:
    case Hexagon::LDrib_indexed_cdnNotPt:
    case Hexagon::LDrib_indexed_cdnPt:
    case Hexagon::LDrib_indexed_shl_V4:
    case Hexagon::LDrib_indexed_shl_cNotPt_V4:
    case Hexagon::LDrib_indexed_shl_cPt_V4:
    case Hexagon::LDrib_indexed_shl_cdnNotPt_V4:
    case Hexagon::LDrib_indexed_shl_cdnPt_V4:
    case Hexagon::LDrid:
    case Hexagon::LDrid_abs_V4:
    case Hexagon::LDrid_abs_cNotPt_V4:
    case Hexagon::LDrid_abs_cPt_V4:
    case Hexagon::LDrid_abs_cdnNotPt_V4:
    case Hexagon::LDrid_abs_cdnPt_V4:
    case Hexagon::LDrid_abs_set_V4:
    case Hexagon::LDrid_cNotPt:
    case Hexagon::LDrid_cPt:
    case Hexagon::LDrid_cdnNotPt:
    case Hexagon::LDrid_cdnPt:
    case Hexagon::LDrid_f:
    case Hexagon::LDrid_ind_lo_V4:
    case Hexagon::LDrid_indexed:
    case Hexagon::LDrid_indexed_cNotPt:
    case Hexagon::LDrid_indexed_cPt:
    case Hexagon::LDrid_indexed_cdnNotPt:
    case Hexagon::LDrid_indexed_cdnPt:
    case Hexagon::LDrid_indexed_f:
    case Hexagon::LDrid_indexed_shl_V4:
    case Hexagon::LDrid_indexed_shl_cNotPt_V4:
    case Hexagon::LDrid_indexed_shl_cPt_V4:
    case Hexagon::LDrid_indexed_shl_cdnNotPt_V4:
    case Hexagon::LDrid_indexed_shl_cdnPt_V4:
    case Hexagon::LDrih:
    case Hexagon::LDrih_abs_V4:
    case Hexagon::LDrih_abs_cNotPt_V4:
    case Hexagon::LDrih_abs_cPt_V4:
    case Hexagon::LDrih_abs_cdnNotPt_V4:
    case Hexagon::LDrih_abs_cdnPt_V4:
    case Hexagon::LDrih_abs_set_V4:
    case Hexagon::LDrih_cNotPt:
    case Hexagon::LDrih_cPt:
    case Hexagon::LDrih_cdnNotPt:
    case Hexagon::LDrih_cdnPt:
    case Hexagon::LDrih_ind_lo_V4:
    case Hexagon::LDrih_indexed:
    case Hexagon::LDrih_indexed_cNotPt:
    case Hexagon::LDrih_indexed_cPt:
    case Hexagon::LDrih_indexed_cdnNotPt:
    case Hexagon::LDrih_indexed_cdnPt:
    case Hexagon::LDrih_indexed_shl_V4:
    case Hexagon::LDrih_indexed_shl_cNotPt_V4:
    case Hexagon::LDrih_indexed_shl_cPt_V4:
    case Hexagon::LDrih_indexed_shl_cdnNotPt_V4:
    case Hexagon::LDrih_indexed_shl_cdnPt_V4:
    case Hexagon::LDriub:
    case Hexagon::LDriub_abs_V4:
    case Hexagon::LDriub_abs_cNotPt_V4:
    case Hexagon::LDriub_abs_cPt_V4:
    case Hexagon::LDriub_abs_cdnNotPt_V4:
    case Hexagon::LDriub_abs_cdnPt_V4:
    case Hexagon::LDriub_abs_set_V4:
    case Hexagon::LDriub_cNotPt:
    case Hexagon::LDriub_cPt:
    case Hexagon::LDriub_cdnNotPt:
    case Hexagon::LDriub_cdnPt:
    case Hexagon::LDriub_ind_anyext_lo_V4:
    case Hexagon::LDriub_ind_lo_V4:
    case Hexagon::LDriub_indexed:
    case Hexagon::LDriub_indexed_cNotPt:
    case Hexagon::LDriub_indexed_cPt:
    case Hexagon::LDriub_indexed_cdnNotPt:
    case Hexagon::LDriub_indexed_cdnPt:
    case Hexagon::LDriub_indexed_shl_V4:
    case Hexagon::LDriub_indexed_shl_cNotPt_V4:
    case Hexagon::LDriub_indexed_shl_cPt_V4:
    case Hexagon::LDriub_indexed_shl_cdnNotPt_V4:
    case Hexagon::LDriub_indexed_shl_cdnPt_V4:
    case Hexagon::LDriuh:
    case Hexagon::LDriuh_abs_V4:
    case Hexagon::LDriuh_abs_cNotPt_V4:
    case Hexagon::LDriuh_abs_cPt_V4:
    case Hexagon::LDriuh_abs_cdnNotPt_V4:
    case Hexagon::LDriuh_abs_cdnPt_V4:
    case Hexagon::LDriuh_abs_set_V4:
    case Hexagon::LDriuh_cNotPt:
    case Hexagon::LDriuh_cPt:
    case Hexagon::LDriuh_cdnNotPt:
    case Hexagon::LDriuh_cdnPt:
    case Hexagon::LDriuh_ind_anyext_lo_V4:
    case Hexagon::LDriuh_ind_lo_V4:
    case Hexagon::LDriuh_indexed:
    case Hexagon::LDriuh_indexed_cNotPt:
    case Hexagon::LDriuh_indexed_cPt:
    case Hexagon::LDriuh_indexed_cdnNotPt:
    case Hexagon::LDriuh_indexed_cdnPt:
    case Hexagon::LDriuh_indexed_shl_V4:
    case Hexagon::LDriuh_indexed_shl_cNotPt_V4:
    case Hexagon::LDriuh_indexed_shl_cPt_V4:
    case Hexagon::LDriuh_indexed_shl_cdnNotPt_V4:
    case Hexagon::LDriuh_indexed_shl_cdnPt_V4:
    case Hexagon::LDriw:
    case Hexagon::LDriw_abs_V4:
    case Hexagon::LDriw_abs_cNotPt_V4:
    case Hexagon::LDriw_abs_cPt_V4:
    case Hexagon::LDriw_abs_cdnNotPt_V4:
    case Hexagon::LDriw_abs_cdnPt_V4:
    case Hexagon::LDriw_abs_set_V4:
    case Hexagon::LDriw_cNotPt:
    case Hexagon::LDriw_cPt:
    case Hexagon::LDriw_cdnNotPt:
    case Hexagon::LDriw_cdnPt:
    case Hexagon::LDriw_f:
    case Hexagon::LDriw_ind_lo_V4:
    case Hexagon::LDriw_indexed:
    case Hexagon::LDriw_indexed_cNotPt:
    case Hexagon::LDriw_indexed_cPt:
    case Hexagon::LDriw_indexed_cdnNotPt:
    case Hexagon::LDriw_indexed_cdnPt:
    case Hexagon::LDriw_indexed_f:
    case Hexagon::LDriw_indexed_shl_V4:
    case Hexagon::LDriw_indexed_shl_cNotPt_V4:
    case Hexagon::LDriw_indexed_shl_cPt_V4:
    case Hexagon::LDriw_indexed_shl_cdnNotPt_V4:
    case Hexagon::LDriw_indexed_shl_cdnPt_V4:
    case Hexagon::LDub_GP_V4:
    case Hexagon::LDub_GP_cNotPt_V4:
    case Hexagon::LDub_GP_cPt_V4:
    case Hexagon::LDub_GP_cdnNotPt_V4:
    case Hexagon::LDub_GP_cdnPt_V4:
    case Hexagon::LDuh_GP_V4:
    case Hexagon::LDuh_GP_cNotPt_V4:
    case Hexagon::LDuh_GP_cPt_V4:
    case Hexagon::LDuh_GP_cdnNotPt_V4:
    case Hexagon::LDuh_GP_cdnPt_V4:
    case Hexagon::LDw_GP_V4:
    case Hexagon::LDw_GP_cNotPt_V4:
    case Hexagon::LDw_GP_cPt_V4:
    case Hexagon::LDw_GP_cdnNotPt_V4:
    case Hexagon::LDw_GP_cdnPt_V4:
    case Hexagon::LO:
    case Hexagon::LOOP0_i:
    case Hexagon::LOOP0_r:
    case Hexagon::LO_jt:
    case Hexagon::LO_label:
    case Hexagon::LOi:
    case Hexagon::LSL_ADD_rr:
    case Hexagon::LSL_ADDd_rr:
    case Hexagon::LSL_AND_rr:
    case Hexagon::LSL_ANDd_rr:
    case Hexagon::LSL_OR_rr:
    case Hexagon::LSL_ORd_rr:
    case Hexagon::LSL_SUB_rr:
    case Hexagon::LSL_SUBd_rr:
    case Hexagon::LSL_rr:
    case Hexagon::LSLd:
    case Hexagon::LSLd_rr_xor_V4:
    case Hexagon::LSLi_V4:
    case Hexagon::LSR_ADD_ri:
    case Hexagon::LSR_ADD_rr:
    case Hexagon::LSR_ADDd_ri:
    case Hexagon::LSR_ADDd_rr:
    case Hexagon::LSR_AND_ri:
    case Hexagon::LSR_AND_rr:
    case Hexagon::LSR_ANDd_ri:
    case Hexagon::LSR_ANDd_rr:
    case Hexagon::LSR_OR_ri:
    case Hexagon::LSR_OR_rr:
    case Hexagon::LSR_ORd_ri:
    case Hexagon::LSR_ORd_rr:
    case Hexagon::LSR_SUB_ri:
    case Hexagon::LSR_SUB_rr:
    case Hexagon::LSR_SUBd_ri:
    case Hexagon::LSR_SUBd_rr:
    case Hexagon::LSR_XOR_ri:
    case Hexagon::LSR_XORd_ri:
    case Hexagon::LSR_ri:
    case Hexagon::LSR_rr:
    case Hexagon::LSRd_ri:
    case Hexagon::LSRd_rr:
    case Hexagon::LSRd_rr_xor_V4:
    case Hexagon::MASK_p:
    case Hexagon::MAXUd_rr:
    case Hexagon::MAXUw_rr:
    case Hexagon::MAXd_rr:
    case Hexagon::MAXw_dd:
    case Hexagon::MAXw_rr:
    case Hexagon::MINUd_rr:
    case Hexagon::MINUw_rr:
    case Hexagon::MINd_rr:
    case Hexagon::MINw_dd:
    case Hexagon::MINw_rr:
    case Hexagon::MPY:
    case Hexagon::MPY64:
    case Hexagon::MPY64_acc:
    case Hexagon::MPY64_sub:
    case Hexagon::MPYI:
    case Hexagon::MPYI_acc_ri:
    case Hexagon::MPYI_acc_rr:
    case Hexagon::MPYI_ri:
    case Hexagon::MPYI_rin:
    case Hexagon::MPYI_riu:
    case Hexagon::MPYI_sub_ri:
    case Hexagon::MPYU:
    case Hexagon::MPYU64:
    case Hexagon::MPYU64_acc:
    case Hexagon::MPYU64_sub:
    case Hexagon::MPY_trsext:
    case Hexagon::MUX_ii:
    case Hexagon::MUX_ir:
    case Hexagon::MUX_ri:
    case Hexagon::MUX_rr:
    case Hexagon::NOP:
    case Hexagon::NOT_p:
    case Hexagon::NOT_rr64:
    case Hexagon::NTSTBIT_ri:
    case Hexagon::NTSTBIT_rr:
    case Hexagon::OR_pp:
    case Hexagon::OR_ri:
    case Hexagon::OR_rr:
    case Hexagon::OR_rr64:
    case Hexagon::OR_rr_cNotPt:
    case Hexagon::OR_rr_cPt:
    case Hexagon::OR_rr_cdnNotPt:
    case Hexagon::OR_rr_cdnPt:
    case Hexagon::ORd_NOTd_V4:
    case Hexagon::ORi_ASLri_V4:
    case Hexagon::ORi_LSRri_V4:
    case Hexagon::ORr_ANDr_NOTr_V4:
    case Hexagon::ORr_ANDri2_V4:
    case Hexagon::ORr_ANDri_V4:
    case Hexagon::ORr_ANDrr_V4:
    case Hexagon::ORr_ORri_V4:
    case Hexagon::ORr_ORrr_V4:
    case Hexagon::ORr_XORrr_V4:
    case Hexagon::POST_LDrib:
    case Hexagon::POST_LDrib_cNotPt:
    case Hexagon::POST_LDrib_cPt:
    case Hexagon::POST_LDrib_cdnNotPt_V4:
    case Hexagon::POST_LDrib_cdnPt_V4:
    case Hexagon::POST_LDrid:
    case Hexagon::POST_LDrid_cNotPt:
    case Hexagon::POST_LDrid_cPt:
    case Hexagon::POST_LDrid_cdnNotPt_V4:
    case Hexagon::POST_LDrid_cdnPt_V4:
    case Hexagon::POST_LDrih:
    case Hexagon::POST_LDrih_cNotPt:
    case Hexagon::POST_LDrih_cPt:
    case Hexagon::POST_LDrih_cdnNotPt_V4:
    case Hexagon::POST_LDrih_cdnPt_V4:
    case Hexagon::POST_LDriub:
    case Hexagon::POST_LDriub_cNotPt:
    case Hexagon::POST_LDriub_cPt:
    case Hexagon::POST_LDriub_cdnNotPt_V4:
    case Hexagon::POST_LDriub_cdnPt_V4:
    case Hexagon::POST_LDriuh:
    case Hexagon::POST_LDriuh_cNotPt:
    case Hexagon::POST_LDriuh_cPt:
    case Hexagon::POST_LDriuh_cdnNotPt_V4:
    case Hexagon::POST_LDriuh_cdnPt_V4:
    case Hexagon::POST_LDriw:
    case Hexagon::POST_LDriw_cNotPt:
    case Hexagon::POST_LDriw_cPt:
    case Hexagon::POST_LDriw_cdnNotPt_V4:
    case Hexagon::POST_LDriw_cdnPt_V4:
    case Hexagon::POST_STbri:
    case Hexagon::POST_STbri_cNotPt:
    case Hexagon::POST_STbri_cNotPt_nv_V4:
    case Hexagon::POST_STbri_cPt:
    case Hexagon::POST_STbri_cPt_nv_V4:
    case Hexagon::POST_STbri_cdnNotPt_V4:
    case Hexagon::POST_STbri_cdnNotPt_nv_V4:
    case Hexagon::POST_STbri_cdnPt_V4:
    case Hexagon::POST_STbri_cdnPt_nv_V4:
    case Hexagon::POST_STbri_nv_V4:
    case Hexagon::POST_STdri:
    case Hexagon::POST_STdri_cNotPt:
    case Hexagon::POST_STdri_cPt:
    case Hexagon::POST_STdri_cdnNotPt_V4:
    case Hexagon::POST_STdri_cdnPt_V4:
    case Hexagon::POST_SThri:
    case Hexagon::POST_SThri_cNotPt:
    case Hexagon::POST_SThri_cNotPt_nv_V4:
    case Hexagon::POST_SThri_cPt:
    case Hexagon::POST_SThri_cPt_nv_V4:
    case Hexagon::POST_SThri_cdnNotPt_V4:
    case Hexagon::POST_SThri_cdnNotPt_nv_V4:
    case Hexagon::POST_SThri_cdnPt_V4:
    case Hexagon::POST_SThri_cdnPt_nv_V4:
    case Hexagon::POST_SThri_nv_V4:
    case Hexagon::POST_STwri:
    case Hexagon::POST_STwri_cNotPt:
    case Hexagon::POST_STwri_cNotPt_nv_V4:
    case Hexagon::POST_STwri_cPt:
    case Hexagon::POST_STwri_cPt_nv_V4:
    case Hexagon::POST_STwri_cdnNotPt_V4:
    case Hexagon::POST_STwri_cdnNotPt_nv_V4:
    case Hexagon::POST_STwri_cdnPt_V4:
    case Hexagon::POST_STwri_cdnPt_nv_V4:
    case Hexagon::POST_STwri_nv_V4:
    case Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4:
    case Hexagon::RESTORE_DEALLOC_RET_JMP_V4:
    case Hexagon::SAVE_REGISTERS_CALL_V4:
    case Hexagon::SETBIT:
    case Hexagon::SETBIT_31:
    case Hexagon::SI_to_SXTHI_asrh:
    case Hexagon::STb_GP_V4:
    case Hexagon::STb_GP_cNotPt_V4:
    case Hexagon::STb_GP_cNotPt_nv_V4:
    case Hexagon::STb_GP_cPt_V4:
    case Hexagon::STb_GP_cPt_nv_V4:
    case Hexagon::STb_GP_cdnNotPt_V4:
    case Hexagon::STb_GP_cdnNotPt_nv_V4:
    case Hexagon::STb_GP_cdnPt_V4:
    case Hexagon::STb_GP_cdnPt_nv_V4:
    case Hexagon::STb_GP_nv_V4:
    case Hexagon::STd_GP_V4:
    case Hexagon::STd_GP_cNotPt_V4:
    case Hexagon::STd_GP_cPt_V4:
    case Hexagon::STd_GP_cdnNotPt_V4:
    case Hexagon::STd_GP_cdnPt_V4:
    case Hexagon::STh_GP_V4:
    case Hexagon::STh_GP_cNotPt_V4:
    case Hexagon::STh_GP_cNotPt_nv_V4:
    case Hexagon::STh_GP_cPt_V4:
    case Hexagon::STh_GP_cPt_nv_V4:
    case Hexagon::STh_GP_cdnNotPt_V4:
    case Hexagon::STh_GP_cdnNotPt_nv_V4:
    case Hexagon::STh_GP_cdnPt_V4:
    case Hexagon::STh_GP_cdnPt_nv_V4:
    case Hexagon::STh_GP_nv_V4:
    case Hexagon::STrib:
    case Hexagon::STrib_abs_V4:
    case Hexagon::STrib_abs_cNotPt_V4:
    case Hexagon::STrib_abs_cNotPt_nv_V4:
    case Hexagon::STrib_abs_cPt_V4:
    case Hexagon::STrib_abs_cPt_nv_V4:
    case Hexagon::STrib_abs_cdnNotPt_V4:
    case Hexagon::STrib_abs_cdnNotPt_nv_V4:
    case Hexagon::STrib_abs_cdnPt_V4:
    case Hexagon::STrib_abs_cdnPt_nv_V4:
    case Hexagon::STrib_abs_nv_V4:
    case Hexagon::STrib_abs_set_V4:
    case Hexagon::STrib_cNotPt:
    case Hexagon::STrib_cNotPt_nv_V4:
    case Hexagon::STrib_cPt:
    case Hexagon::STrib_cPt_nv_V4:
    case Hexagon::STrib_cdnNotPt_V4:
    case Hexagon::STrib_cdnNotPt_nv_V4:
    case Hexagon::STrib_cdnPt_V4:
    case Hexagon::STrib_cdnPt_nv_V4:
    case Hexagon::STrib_imm_V4:
    case Hexagon::STrib_imm_cNotPt_V4:
    case Hexagon::STrib_imm_cPt_V4:
    case Hexagon::STrib_imm_cdnNotPt_V4:
    case Hexagon::STrib_imm_cdnPt_V4:
    case Hexagon::STrib_indexed:
    case Hexagon::STrib_indexed_cNotPt:
    case Hexagon::STrib_indexed_cNotPt_nv_V4:
    case Hexagon::STrib_indexed_cPt:
    case Hexagon::STrib_indexed_cPt_nv_V4:
    case Hexagon::STrib_indexed_cdnNotPt_V4:
    case Hexagon::STrib_indexed_cdnNotPt_nv_V4:
    case Hexagon::STrib_indexed_cdnPt_V4:
    case Hexagon::STrib_indexed_cdnPt_nv_V4:
    case Hexagon::STrib_indexed_nv_V4:
    case Hexagon::STrib_indexed_shl_V4:
    case Hexagon::STrib_indexed_shl_cNotPt_V4:
    case Hexagon::STrib_indexed_shl_cNotPt_nv_V4:
    case Hexagon::STrib_indexed_shl_cPt_V4:
    case Hexagon::STrib_indexed_shl_cPt_nv_V4:
    case Hexagon::STrib_indexed_shl_cdnNotPt_V4:
    case Hexagon::STrib_indexed_shl_cdnNotPt_nv_V4:
    case Hexagon::STrib_indexed_shl_cdnPt_V4:
    case Hexagon::STrib_indexed_shl_cdnPt_nv_V4:
    case Hexagon::STrib_indexed_shl_nv_V4:
    case Hexagon::STrib_nv_V4:
    case Hexagon::STrib_shl_V4:
    case Hexagon::STrib_shl_nv_V4:
    case Hexagon::STrid:
    case Hexagon::STrid_abs_V4:
    case Hexagon::STrid_abs_cNotPt_V4:
    case Hexagon::STrid_abs_cPt_V4:
    case Hexagon::STrid_abs_cdnNotPt_V4:
    case Hexagon::STrid_abs_cdnPt_V4:
    case Hexagon::STrid_abs_set_V4:
    case Hexagon::STrid_cNotPt:
    case Hexagon::STrid_cPt:
    case Hexagon::STrid_cdnNotPt_V4:
    case Hexagon::STrid_cdnPt_V4:
    case Hexagon::STrid_f:
    case Hexagon::STrid_indexed:
    case Hexagon::STrid_indexed_cNotPt:
    case Hexagon::STrid_indexed_cPt:
    case Hexagon::STrid_indexed_cdnNotPt_V4:
    case Hexagon::STrid_indexed_cdnPt_V4:
    case Hexagon::STrid_indexed_f:
    case Hexagon::STrid_indexed_shl_V4:
    case Hexagon::STrid_indexed_shl_cNotPt_V4:
    case Hexagon::STrid_indexed_shl_cPt_V4:
    case Hexagon::STrid_indexed_shl_cdnNotPt_V4:
    case Hexagon::STrid_indexed_shl_cdnPt_V4:
    case Hexagon::STrid_shl_V4:
    case Hexagon::STrih:
    case Hexagon::STrih_abs_V4:
    case Hexagon::STrih_abs_cNotPt_V4:
    case Hexagon::STrih_abs_cNotPt_nv_V4:
    case Hexagon::STrih_abs_cPt_V4:
    case Hexagon::STrih_abs_cPt_nv_V4:
    case Hexagon::STrih_abs_cdnNotPt_V4:
    case Hexagon::STrih_abs_cdnNotPt_nv_V4:
    case Hexagon::STrih_abs_cdnPt_V4:
    case Hexagon::STrih_abs_cdnPt_nv_V4:
    case Hexagon::STrih_abs_nv_V4:
    case Hexagon::STrih_abs_set_V4:
    case Hexagon::STrih_cNotPt:
    case Hexagon::STrih_cNotPt_nv_V4:
    case Hexagon::STrih_cPt:
    case Hexagon::STrih_cPt_nv_V4:
    case Hexagon::STrih_cdnNotPt_V4:
    case Hexagon::STrih_cdnNotPt_nv_V4:
    case Hexagon::STrih_cdnPt_V4:
    case Hexagon::STrih_cdnPt_nv_V4:
    case Hexagon::STrih_imm_V4:
    case Hexagon::STrih_imm_cNotPt_V4:
    case Hexagon::STrih_imm_cPt_V4:
    case Hexagon::STrih_imm_cdnNotPt_V4:
    case Hexagon::STrih_imm_cdnPt_V4:
    case Hexagon::STrih_indexed:
    case Hexagon::STrih_indexed_cNotPt:
    case Hexagon::STrih_indexed_cNotPt_nv_V4:
    case Hexagon::STrih_indexed_cPt:
    case Hexagon::STrih_indexed_cPt_nv_V4:
    case Hexagon::STrih_indexed_cdnNotPt_V4:
    case Hexagon::STrih_indexed_cdnNotPt_nv_V4:
    case Hexagon::STrih_indexed_cdnPt_V4:
    case Hexagon::STrih_indexed_cdnPt_nv_V4:
    case Hexagon::STrih_indexed_nv_V4:
    case Hexagon::STrih_indexed_shl_V4:
    case Hexagon::STrih_indexed_shl_cNotPt_V4:
    case Hexagon::STrih_indexed_shl_cNotPt_nv_V4:
    case Hexagon::STrih_indexed_shl_cPt_V4:
    case Hexagon::STrih_indexed_shl_cPt_nv_V4:
    case Hexagon::STrih_indexed_shl_cdnNotPt_V4:
    case Hexagon::STrih_indexed_shl_cdnNotPt_nv_V4:
    case Hexagon::STrih_indexed_shl_cdnPt_V4:
    case Hexagon::STrih_indexed_shl_cdnPt_nv_V4:
    case Hexagon::STrih_indexed_shl_nv_V4:
    case Hexagon::STrih_nv_V4:
    case Hexagon::STrih_offset_ext_V4:
    case Hexagon::STrih_shl_V4:
    case Hexagon::STrih_shl_nv_V4:
    case Hexagon::STriw:
    case Hexagon::STriw_abs_V4:
    case Hexagon::STriw_abs_cNotPt_V4:
    case Hexagon::STriw_abs_cNotPt_nv_V4:
    case Hexagon::STriw_abs_cPt_V4:
    case Hexagon::STriw_abs_cPt_nv_V4:
    case Hexagon::STriw_abs_cdnNotPt_V4:
    case Hexagon::STriw_abs_cdnNotPt_nv_V4:
    case Hexagon::STriw_abs_cdnPt_V4:
    case Hexagon::STriw_abs_cdnPt_nv_V4:
    case Hexagon::STriw_abs_nv_V4:
    case Hexagon::STriw_abs_set_V4:
    case Hexagon::STriw_cNotPt:
    case Hexagon::STriw_cNotPt_nv_V4:
    case Hexagon::STriw_cPt:
    case Hexagon::STriw_cPt_nv_V4:
    case Hexagon::STriw_cdnNotPt_V4:
    case Hexagon::STriw_cdnNotPt_nv_V4:
    case Hexagon::STriw_cdnPt_V4:
    case Hexagon::STriw_cdnPt_nv_V4:
    case Hexagon::STriw_f:
    case Hexagon::STriw_imm_V4:
    case Hexagon::STriw_imm_cNotPt_V4:
    case Hexagon::STriw_imm_cPt_V4:
    case Hexagon::STriw_imm_cdnNotPt_V4:
    case Hexagon::STriw_imm_cdnPt_V4:
    case Hexagon::STriw_indexed:
    case Hexagon::STriw_indexed_cNotPt:
    case Hexagon::STriw_indexed_cNotPt_nv_V4:
    case Hexagon::STriw_indexed_cPt:
    case Hexagon::STriw_indexed_cPt_nv_V4:
    case Hexagon::STriw_indexed_cdnNotPt_V4:
    case Hexagon::STriw_indexed_cdnNotPt_nv_V4:
    case Hexagon::STriw_indexed_cdnPt_V4:
    case Hexagon::STriw_indexed_cdnPt_nv_V4:
    case Hexagon::STriw_indexed_f:
    case Hexagon::STriw_indexed_nv_V4:
    case Hexagon::STriw_indexed_shl_V4:
    case Hexagon::STriw_indexed_shl_cNotPt_V4:
    case Hexagon::STriw_indexed_shl_cNotPt_nv_V4:
    case Hexagon::STriw_indexed_shl_cPt_V4:
    case Hexagon::STriw_indexed_shl_cPt_nv_V4:
    case Hexagon::STriw_indexed_shl_cdnNotPt_V4:
    case Hexagon::STriw_indexed_shl_cdnNotPt_nv_V4:
    case Hexagon::STriw_indexed_shl_cdnPt_V4:
    case Hexagon::STriw_indexed_shl_cdnPt_nv_V4:
    case Hexagon::STriw_indexed_shl_nv_V4:
    case Hexagon::STriw_nv_V4:
    case Hexagon::STriw_offset_ext_V4:
    case Hexagon::STriw_pred:
    case Hexagon::STriw_pred_V4:
    case Hexagon::STriw_shl_V4:
    case Hexagon::STriw_shl_nv_V4:
    case Hexagon::STw_GP_V4:
    case Hexagon::STw_GP_cNotPt_V4:
    case Hexagon::STw_GP_cNotPt_nv_V4:
    case Hexagon::STw_GP_cPt_V4:
    case Hexagon::STw_GP_cPt_nv_V4:
    case Hexagon::STw_GP_cdnNotPt_V4:
    case Hexagon::STw_GP_cdnNotPt_nv_V4:
    case Hexagon::STw_GP_cdnPt_V4:
    case Hexagon::STw_GP_cdnPt_nv_V4:
    case Hexagon::STw_GP_nv_V4:
    case Hexagon::SUB64_rr:
    case Hexagon::SUB_ri:
    case Hexagon::SUB_rr:
    case Hexagon::SUB_rr_cNotPt:
    case Hexagon::SUB_rr_cPt:
    case Hexagon::SUB_rr_cdnNotPt:
    case Hexagon::SUB_rr_cdnPt:
    case Hexagon::SUBi_ASLri_V4:
    case Hexagon::SUBi_LSRri_V4:
    case Hexagon::SUBri_acc:
    case Hexagon::SUBrr_acc:
    case Hexagon::SXTB:
    case Hexagon::SXTB_cNotPt_V4:
    case Hexagon::SXTB_cPt_V4:
    case Hexagon::SXTB_cdnNotPt_V4:
    case Hexagon::SXTB_cdnPt_V4:
    case Hexagon::SXTH:
    case Hexagon::SXTH_cNotPt_V4:
    case Hexagon::SXTH_cPt_V4:
    case Hexagon::SXTH_cdnNotPt_V4:
    case Hexagon::SXTH_cdnPt_V4:
    case Hexagon::SXTW:
    case Hexagon::TFCR:
    case Hexagon::TFR:
    case Hexagon::TFRI:
    case Hexagon::TFRI64:
    case Hexagon::TFRI_V4:
    case Hexagon::TFRI_cNotPt:
    case Hexagon::TFRI_cNotPt_V4:
    case Hexagon::TFRI_cNotPt_f:
    case Hexagon::TFRI_cPt:
    case Hexagon::TFRI_cPt_V4:
    case Hexagon::TFRI_cPt_f:
    case Hexagon::TFRI_cdnNotPt:
    case Hexagon::TFRI_cdnNotPt_V4:
    case Hexagon::TFRI_cdnPt:
    case Hexagon::TFRI_cdnPt_V4:
    case Hexagon::TFRI_f:
    case Hexagon::TFR_FI:
    case Hexagon::TFR_FI_immext_V4:
    case Hexagon::TFR_PdFalse:
    case Hexagon::TFR_PdRs:
    case Hexagon::TFR_RsPd:
    case Hexagon::TFR_cNotPt:
    case Hexagon::TFR_cPt:
    case Hexagon::TFR_cdnNotPt:
    case Hexagon::TFR_cdnPt:
    case Hexagon::TFR_condset_ii:
    case Hexagon::TFR_condset_ii_f:
    case Hexagon::TFR_condset_ir:
    case Hexagon::TFR_condset_ir_f:
    case Hexagon::TFR_condset_ri:
    case Hexagon::TFR_condset_ri_f:
    case Hexagon::TFR_condset_rr:
    case Hexagon::TFR_condset_rr64_f:
    case Hexagon::TFR_condset_rr_f:
    case Hexagon::TOGBIT:
    case Hexagon::TOGBIT_31:
    case Hexagon::TSTBIT_ri:
    case Hexagon::TSTBIT_rr:
    case Hexagon::V4_A4_rcmpeq:
    case Hexagon::V4_A4_rcmpeqi:
    case Hexagon::V4_A4_rcmpneq:
    case Hexagon::V4_A4_rcmpneqi:
    case Hexagon::VALIGN_rrp:
    case Hexagon::VITPACK_pp:
    case Hexagon::VMUX_prr64:
    case Hexagon::VSPLICE_rrp:
    case Hexagon::XOR_pp:
    case Hexagon::XOR_rr:
    case Hexagon::XOR_rr64:
    case Hexagon::XOR_rr_cNotPt:
    case Hexagon::XOR_rr_cPt:
    case Hexagon::XOR_rr_cdnNotPt:
    case Hexagon::XOR_rr_cdnPt:
    case Hexagon::XORd_XORdd:
    case Hexagon::XORr_ANDr_NOTr_V4:
    case Hexagon::XORr_ANDrr_V4:
    case Hexagon::XORr_ORrr_V4:
    case Hexagon::XORr_XORrr_V4:
    case Hexagon::ZXTB:
    case Hexagon::ZXTB_cNotPt_V4:
    case Hexagon::ZXTB_cPt_V4:
    case Hexagon::ZXTB_cdnNotPt_V4:
    case Hexagon::ZXTB_cdnPt_V4:
    case Hexagon::ZXTH:
    case Hexagon::ZXTH_cNotPt_V4:
    case Hexagon::ZXTH_cPt_V4:
    case Hexagon::ZXTH_cdnNotPt_V4:
    case Hexagon::ZXTH_cdnPt_V4:
    case Hexagon::fADD64_rr:
    case Hexagon::fADD_rr:
    case Hexagon::fMUL64_rr:
    case Hexagon::fMUL_rr:
    case Hexagon::fSUB64_rr:
    case Hexagon::fSUB_rr: {
      break;
    }
    case Hexagon::A2_paddf:
    case Hexagon::A2_paddfnew:
    case Hexagon::A2_paddt:
    case Hexagon::A2_paddtnew: {
      // op: Pu
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 5;
      // op: Rs
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 8;
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(31);
      break;
    }
    case Hexagon::A2_add: {
      // op: Rs
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 8;
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(31);
      break;
    }
    case Hexagon::MemOPh_ADDi_V4:
    case Hexagon::MemOPh_ADDr_V4:
    case Hexagon::MemOPh_ANDr_V4:
    case Hexagon::MemOPh_CLRBITi_V4:
    case Hexagon::MemOPh_ORr_V4:
    case Hexagon::MemOPh_SETBITi_V4:
    case Hexagon::MemOPh_SUBi_V4:
    case Hexagon::MemOPh_SUBr_V4: {
      // op: base
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: delta
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(31);
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(126)) << 6;
      break;
    }
    case Hexagon::MemOPw_ADDi_V4:
    case Hexagon::MemOPw_ADDr_V4:
    case Hexagon::MemOPw_ANDr_V4:
    case Hexagon::MemOPw_CLRBITi_V4:
    case Hexagon::MemOPw_ORr_V4:
    case Hexagon::MemOPw_SETBITi_V4:
    case Hexagon::MemOPw_SUBi_V4:
    case Hexagon::MemOPw_SUBr_V4: {
      // op: base
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: delta
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(31);
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(252)) << 5;
      break;
    }
    case Hexagon::MemOPb_ADDi_V4:
    case Hexagon::MemOPb_ADDr_V4:
    case Hexagon::MemOPb_ANDr_V4:
    case Hexagon::MemOPb_CLRBITi_V4:
    case Hexagon::MemOPb_ORr_V4:
    case Hexagon::MemOPb_SETBITi_V4:
    case Hexagon::MemOPb_SUBi_V4:
    case Hexagon::MemOPb_SUBr_V4: {
      // op: base
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: delta
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(31);
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(63)) << 7;
      break;
    }
    case Hexagon::JMP:
    case Hexagon::TCRETURNtext:
    case Hexagon::TCRETURNtg: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(16744448)) << 1;
      Value |= (op & UINT64_C(32764)) >> 1;
      break;
    }
    case Hexagon::EH_RETURN_JMPR:
    case Hexagon::JMPR:
    case Hexagon::JMPret:
    case Hexagon::TCRETURNR: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Hexagon::C4_cmplteui: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(3);
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(511)) << 5;
      break;
    }
    case Hexagon::C4_cmpltei:
    case Hexagon::C4_cmpneqi: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(3);
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      break;
    }
    case Hexagon::TFR64_cNotPt:
    case Hexagon::TFR64_cPt:
    case Hexagon::TFR64_cdnNotPt:
    case Hexagon::TFR64_cdnPt: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(31);
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 5;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(30)) << 16;
      Value |= (op & UINT64_C(30)) << 8;
      break;
    }
    case Hexagon::TFR64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(31);
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(30)) << 16;
      Value |= (op & UINT64_C(30)) << 8;
      break;
    }
    case Hexagon::JMPR_f:
    case Hexagon::JMPR_fnew_ntV3:
    case Hexagon::JMPR_fnew_tV3:
    case Hexagon::JMPR_t:
    case Hexagon::JMPR_tnew_ntV3:
    case Hexagon::JMPR_tnew_tV3:
    case Hexagon::JMPret_f:
    case Hexagon::JMPret_fnew_ntV3:
    case Hexagon::JMPret_fnew_tV3:
    case Hexagon::JMPret_t:
    case Hexagon::JMPret_tnew_ntV3:
    case Hexagon::JMPret_tnew_tV3: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 8;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Hexagon::JMP_f:
    case Hexagon::JMP_fnew_nt:
    case Hexagon::JMP_fnew_t:
    case Hexagon::JMP_t:
    case Hexagon::JMP_tnew_nt:
    case Hexagon::JMP_tnew_t: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 8;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(98304)) << 7;
      Value |= (op & UINT64_C(31744)) << 6;
      Value |= (op & UINT64_C(512)) << 4;
      Value |= (op & UINT64_C(508)) >> 1;
      break;
    }
    case Hexagon::CMPLTUrr_f_Jumpnv_nt_V4:
    case Hexagon::CMPLTUrr_f_Jumpnv_t_V4:
    case Hexagon::CMPLTUrr_t_Jumpnv_nt_V4:
    case Hexagon::CMPLTUrr_t_Jumpnv_t_V4:
    case Hexagon::CMPLTrr_f_Jumpnv_nt_V4:
    case Hexagon::CMPLTrr_f_Jumpnv_t_V4:
    case Hexagon::CMPLTrr_t_Jumpnv_nt_V4:
    case Hexagon::CMPLTrr_t_Jumpnv_t_V4: {
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 8;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 16;
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      break;
    }
    case Hexagon::CMPEQn1_f_Jumpnv_nt_V4:
    case Hexagon::CMPEQn1_f_Jumpnv_t_V4:
    case Hexagon::CMPEQn1_t_Jumpnv_nt_V4:
    case Hexagon::CMPEQn1_t_Jumpnv_t_V4:
    case Hexagon::CMPGTn1_f_Jumpnv_nt_V4:
    case Hexagon::CMPGTn1_f_Jumpnv_t_V4:
    case Hexagon::CMPGTn1_t_Jumpnv_nt_V4:
    case Hexagon::CMPGTn1_t_Jumpnv_t_V4:
    case Hexagon::TSTBIT0_f_Jumpnv_nt_V4:
    case Hexagon::TSTBIT0_f_Jumpnv_t_V4:
    case Hexagon::TSTBIT0_t_Jumpnv_nt_V4:
    case Hexagon::TSTBIT0_t_Jumpnv_t_V4: {
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 16;
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      break;
    }
    case Hexagon::CMPEQri_f_Jumpnv_nt_V4:
    case Hexagon::CMPEQri_f_Jumpnv_t_V4:
    case Hexagon::CMPEQri_t_Jumpnv_nt_V4:
    case Hexagon::CMPEQri_t_Jumpnv_t_V4:
    case Hexagon::CMPEQrr_f_Jumpnv_nt_V4:
    case Hexagon::CMPEQrr_f_Jumpnv_t_V4:
    case Hexagon::CMPEQrr_t_Jumpnv_nt_V4:
    case Hexagon::CMPEQrr_t_Jumpnv_t_V4:
    case Hexagon::CMPGTUri_f_Jumpnv_nt_V4:
    case Hexagon::CMPGTUri_f_Jumpnv_t_V4:
    case Hexagon::CMPGTUri_t_Jumpnv_nt_V4:
    case Hexagon::CMPGTUri_t_Jumpnv_t_V4:
    case Hexagon::CMPGTUrr_f_Jumpnv_nt_V4:
    case Hexagon::CMPGTUrr_f_Jumpnv_t_V4:
    case Hexagon::CMPGTUrr_t_Jumpnv_nt_V4:
    case Hexagon::CMPGTUrr_t_Jumpnv_t_V4:
    case Hexagon::CMPGTri_f_Jumpnv_nt_V4:
    case Hexagon::CMPGTri_f_Jumpnv_t_V4:
    case Hexagon::CMPGTri_t_Jumpnv_nt_V4:
    case Hexagon::CMPGTri_t_Jumpnv_t_V4:
    case Hexagon::CMPGTrr_f_Jumpnv_nt_V4:
    case Hexagon::CMPGTrr_f_Jumpnv_t_V4:
    case Hexagon::CMPGTrr_t_Jumpnv_nt_V4:
    case Hexagon::CMPGTrr_t_Jumpnv_t_V4: {
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 16;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 8;
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

