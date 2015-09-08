/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace XCore {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    ADD_2rus	= 20,
    ADD_3r	= 21,
    ADJCALLSTACKDOWN	= 22,
    ADJCALLSTACKUP	= 23,
    ANDNOT_2r	= 24,
    AND_3r	= 25,
    ASHR_l2rus	= 26,
    ASHR_l3r	= 27,
    BAU_1r	= 28,
    BITREV_l2r	= 29,
    BLACP_lu10	= 30,
    BLACP_u10	= 31,
    BLAT_lu6	= 32,
    BLAT_u6	= 33,
    BLA_1r	= 34,
    BLRB_lu10	= 35,
    BLRB_u10	= 36,
    BLRF_lu10	= 37,
    BLRF_u10	= 38,
    BRBF_lru6	= 39,
    BRBF_ru6	= 40,
    BRBT_lru6	= 41,
    BRBT_ru6	= 42,
    BRBU_lu6	= 43,
    BRBU_u6	= 44,
    BRFF_lru6	= 45,
    BRFF_ru6	= 46,
    BRFT_lru6	= 47,
    BRFT_ru6	= 48,
    BRFU_lu6	= 49,
    BRFU_u6	= 50,
    BRU_1r	= 51,
    BR_JT	= 52,
    BR_JT32	= 53,
    BYTEREV_l2r	= 54,
    CHKCT_2r	= 55,
    CHKCT_rus	= 56,
    CLRE_0R	= 57,
    CLRPT_1R	= 58,
    CLRSR_branch_lu6	= 59,
    CLRSR_branch_u6	= 60,
    CLRSR_lu6	= 61,
    CLRSR_u6	= 62,
    CLZ_l2r	= 63,
    CRC8_l4r	= 64,
    CRC_l3r	= 65,
    DCALL_0R	= 66,
    DENTSP_0R	= 67,
    DGETREG_1r	= 68,
    DIVS_l3r	= 69,
    DIVU_l3r	= 70,
    DRESTSP_0R	= 71,
    DRET_0R	= 72,
    ECALLF_1r	= 73,
    ECALLT_1r	= 74,
    EDU_1r	= 75,
    EEF_2r	= 76,
    EET_2r	= 77,
    EEU_1r	= 78,
    EH_RETURN	= 79,
    ENDIN_2r	= 80,
    ENTSP_lu6	= 81,
    ENTSP_u6	= 82,
    EQ_2rus	= 83,
    EQ_3r	= 84,
    EXTDP_lu6	= 85,
    EXTDP_u6	= 86,
    EXTSP_lu6	= 87,
    EXTSP_u6	= 88,
    FRAME_TO_ARGS_OFFSET	= 89,
    FREER_1r	= 90,
    FREET_0R	= 91,
    GETD_l2r	= 92,
    GETED_0R	= 93,
    GETET_0R	= 94,
    GETID_0R	= 95,
    GETKEP_0R	= 96,
    GETKSP_0R	= 97,
    GETN_l2r	= 98,
    GETPS_l2r	= 99,
    GETR_rus	= 100,
    GETSR_lu6	= 101,
    GETSR_u6	= 102,
    GETST_2r	= 103,
    GETTS_2r	= 104,
    INCT_2r	= 105,
    INITCP_2r	= 106,
    INITDP_2r	= 107,
    INITLR_l2r	= 108,
    INITPC_2r	= 109,
    INITSP_2r	= 110,
    INPW_l2rus	= 111,
    INSHR_2r	= 112,
    INT_2r	= 113,
    IN_2r	= 114,
    Int_MemBarrier	= 115,
    KCALL_1r	= 116,
    KCALL_lu6	= 117,
    KCALL_u6	= 118,
    KENTSP_lu6	= 119,
    KENTSP_u6	= 120,
    KRESTSP_lu6	= 121,
    KRESTSP_u6	= 122,
    KRET_0R	= 123,
    LADD_l5r	= 124,
    LD16S_3r	= 125,
    LD8U_3r	= 126,
    LDA16B_l3r	= 127,
    LDA16F_l3r	= 128,
    LDAPB_lu10	= 129,
    LDAPB_u10	= 130,
    LDAPF_lu10	= 131,
    LDAPF_lu10_ba	= 132,
    LDAPF_u10	= 133,
    LDAWB_l2rus	= 134,
    LDAWB_l3r	= 135,
    LDAWCP_lu6	= 136,
    LDAWCP_u6	= 137,
    LDAWDP_lru6	= 138,
    LDAWDP_ru6	= 139,
    LDAWFI	= 140,
    LDAWF_l2rus	= 141,
    LDAWF_l3r	= 142,
    LDAWSP_lru6	= 143,
    LDAWSP_ru6	= 144,
    LDC_lru6	= 145,
    LDC_ru6	= 146,
    LDET_0R	= 147,
    LDIVU_l5r	= 148,
    LDSED_0R	= 149,
    LDSPC_0R	= 150,
    LDSSR_0R	= 151,
    LDWCP_lru6	= 152,
    LDWCP_lu10	= 153,
    LDWCP_ru6	= 154,
    LDWCP_u10	= 155,
    LDWDP_lru6	= 156,
    LDWDP_ru6	= 157,
    LDWFI	= 158,
    LDWSP_lru6	= 159,
    LDWSP_ru6	= 160,
    LDW_2rus	= 161,
    LDW_3r	= 162,
    LMUL_l6r	= 163,
    LSS_3r	= 164,
    LSUB_l5r	= 165,
    LSU_3r	= 166,
    MACCS_l4r	= 167,
    MACCU_l4r	= 168,
    MJOIN_1r	= 169,
    MKMSK_2r	= 170,
    MKMSK_rus	= 171,
    MSYNC_1r	= 172,
    MUL_l3r	= 173,
    NEG	= 174,
    NOT	= 175,
    OR_3r	= 176,
    OUTCT_2r	= 177,
    OUTCT_rus	= 178,
    OUTPW_l2rus	= 179,
    OUTSHR_2r	= 180,
    OUTT_2r	= 181,
    OUT_2r	= 182,
    PEEK_2r	= 183,
    REMS_l3r	= 184,
    REMU_l3r	= 185,
    RETSP_lu6	= 186,
    RETSP_u6	= 187,
    SELECT_CC	= 188,
    SETCLK_l2r	= 189,
    SETCP_1r	= 190,
    SETC_l2r	= 191,
    SETC_lru6	= 192,
    SETC_ru6	= 193,
    SETDP_1r	= 194,
    SETD_2r	= 195,
    SETEV_1r	= 196,
    SETKEP_0R	= 197,
    SETN_l2r	= 198,
    SETPSC_2r	= 199,
    SETPS_l2r	= 200,
    SETPT_2r	= 201,
    SETRDY_l2r	= 202,
    SETSP_1r	= 203,
    SETSR_branch_lu6	= 204,
    SETSR_branch_u6	= 205,
    SETSR_lu6	= 206,
    SETSR_u6	= 207,
    SETTW_l2r	= 208,
    SETV_1r	= 209,
    SEXT_2r	= 210,
    SEXT_rus	= 211,
    SHL_2rus	= 212,
    SHL_3r	= 213,
    SHR_2rus	= 214,
    SHR_3r	= 215,
    SSYNC_0r	= 216,
    ST16_l3r	= 217,
    ST8_l3r	= 218,
    STET_0R	= 219,
    STSED_0R	= 220,
    STSPC_0R	= 221,
    STSSR_0R	= 222,
    STWDP_lru6	= 223,
    STWDP_ru6	= 224,
    STWFI	= 225,
    STWSP_lru6	= 226,
    STWSP_ru6	= 227,
    STW_2rus	= 228,
    STW_l3r	= 229,
    SUB_2rus	= 230,
    SUB_3r	= 231,
    SYNCR_1r	= 232,
    TESTCT_2r	= 233,
    TESTLCL_l2r	= 234,
    TESTWCT_2r	= 235,
    TSETMR_2r	= 236,
    TSETR_3r	= 237,
    TSTART_1R	= 238,
    WAITEF_1R	= 239,
    WAITET_1R	= 240,
    WAITEU_0R	= 241,
    XOR_l3r	= 242,
    ZEXT_2r	= 243,
    ZEXT_rus	= 244,
    INSTRUCTION_LIST_END = 245
  };
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
}
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { XCore::SP, 0 };
static const uint16_t ImplicitList2[] = { XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR, 0 };
static const uint16_t ImplicitList3[] = { XCore::R11, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4,0,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6,0,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9,0,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #20 = ADD_2rus
  { 21,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #21 = ADD_3r
  { 22,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #22 = ADJCALLSTACKDOWN
  { 23,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8,0,nullptr },  // Inst #23 = ADJCALLSTACKUP
  { 24,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #24 = ANDNOT_2r
  { 25,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #25 = AND_3r
  { 26,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #26 = ASHR_l2rus
  { 27,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #27 = ASHR_l3r
  { 28,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #28 = BAU_1r
  { 29,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #29 = BITREV_l2r
  { 30,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2,0,nullptr },  // Inst #30 = BLACP_lu10
  { 31,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2,0,nullptr },  // Inst #31 = BLACP_u10
  { 32,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo2,0,nullptr },  // Inst #32 = BLAT_lu6
  { 33,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo2,0,nullptr },  // Inst #33 = BLAT_u6
  { 34,	1,	0,	0,	2,	0|(1<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #34 = BLA_1r
  { 35,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5,0,nullptr },  // Inst #35 = BLRB_lu10
  { 36,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5,0,nullptr },  // Inst #36 = BLRB_u10
  { 37,	1,	0,	0,	4,	0|(1<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5,0,nullptr },  // Inst #37 = BLRF_lu10
  { 38,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5,0,nullptr },  // Inst #38 = BLRF_u10
  { 39,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #39 = BRBF_lru6
  { 40,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #40 = BRBF_ru6
  { 41,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #41 = BRBT_lru6
  { 42,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #42 = BRBT_ru6
  { 43,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #43 = BRBU_lu6
  { 44,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #44 = BRBU_u6
  { 45,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #45 = BRFF_lru6
  { 46,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #46 = BRFF_ru6
  { 47,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #47 = BRFT_lru6
  { 48,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #48 = BRFT_ru6
  { 49,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #49 = BRFU_lu6
  { 50,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #50 = BRFU_u6
  { 51,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #51 = BRU_1r
  { 52,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #52 = BR_JT
  { 53,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #53 = BR_JT32
  { 54,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #54 = BYTEREV_l2r
  { 55,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #55 = CHKCT_2r
  { 56,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #56 = CHKCT_rus
  { 57,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #57 = CLRE_0R
  { 58,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #58 = CLRPT_1R
  { 59,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #59 = CLRSR_branch_lu6
  { 60,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #60 = CLRSR_branch_u6
  { 61,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #61 = CLRSR_lu6
  { 62,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #62 = CLRSR_u6
  { 63,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #63 = CLZ_l2r
  { 64,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #64 = CRC8_l4r
  { 65,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #65 = CRC_l3r
  { 66,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #66 = DCALL_0R
  { 67,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr,0,nullptr },  // Inst #67 = DENTSP_0R
  { 68,	1,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #68 = DGETREG_1r
  { 69,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #69 = DIVS_l3r
  { 70,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #70 = DIVU_l3r
  { 71,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr,0,nullptr },  // Inst #71 = DRESTSP_0R
  { 72,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #72 = DRET_0R
  { 73,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #73 = ECALLF_1r
  { 74,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #74 = ECALLT_1r
  { 75,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #75 = EDU_1r
  { 76,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #76 = EEF_2r
  { 77,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #77 = EET_2r
  { 78,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #78 = EEU_1r
  { 79,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #79 = EH_RETURN
  { 80,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #80 = ENDIN_2r
  { 81,	1,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #81 = ENTSP_lu6
  { 82,	1,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #82 = ENTSP_u6
  { 83,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #83 = EQ_2rus
  { 84,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #84 = EQ_3r
  { 85,	1,	0,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #85 = EXTDP_lu6
  { 86,	1,	0,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #86 = EXTDP_u6
  { 87,	1,	0,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #87 = EXTSP_lu6
  { 88,	1,	0,	0,	2,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #88 = EXTSP_u6
  { 89,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #89 = FRAME_TO_ARGS_OFFSET
  { 90,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #90 = FREER_1r
  { 91,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #91 = FREET_0R
  { 92,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #92 = GETD_l2r
  { 93,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr,0,nullptr },  // Inst #93 = GETED_0R
  { 94,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr,0,nullptr },  // Inst #94 = GETET_0R
  { 95,	0,	0,	0,	2,	0, 0x0ULL, nullptr, ImplicitList3, nullptr,0,nullptr },  // Inst #95 = GETID_0R
  { 96,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr,0,nullptr },  // Inst #96 = GETKEP_0R
  { 97,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr,0,nullptr },  // Inst #97 = GETKSP_0R
  { 98,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #98 = GETN_l2r
  { 99,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #99 = GETPS_l2r
  { 100,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #100 = GETR_rus
  { 101,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #101 = GETSR_lu6
  { 102,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #102 = GETSR_u6
  { 103,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #103 = GETST_2r
  { 104,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #104 = GETTS_2r
  { 105,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #105 = INCT_2r
  { 106,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #106 = INITCP_2r
  { 107,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #107 = INITDP_2r
  { 108,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #108 = INITLR_l2r
  { 109,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #109 = INITPC_2r
  { 110,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #110 = INITSP_2r
  { 111,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #111 = INPW_l2rus
  { 112,	3,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #112 = INSHR_2r
  { 113,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #113 = INT_2r
  { 114,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #114 = IN_2r
  { 115,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #115 = Int_MemBarrier
  { 116,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #116 = KCALL_1r
  { 117,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #117 = KCALL_lu6
  { 118,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #118 = KCALL_u6
  { 119,	1,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #119 = KENTSP_lu6
  { 120,	1,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #120 = KENTSP_u6
  { 121,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #121 = KRESTSP_lu6
  { 122,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #122 = KRESTSP_u6
  { 123,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr,0,nullptr },  // Inst #123 = KRET_0R
  { 124,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #124 = LADD_l5r
  { 125,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #125 = LD16S_3r
  { 126,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #126 = LD8U_3r
  { 127,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #127 = LDA16B_l3r
  { 128,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #128 = LDA16F_l3r
  { 129,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #129 = LDAPB_lu10
  { 130,	1,	0,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #130 = LDAPB_u10
  { 131,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #131 = LDAPF_lu10
  { 132,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #132 = LDAPF_lu10_ba
  { 133,	1,	0,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #133 = LDAPF_u10
  { 134,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #134 = LDAWB_l2rus
  { 135,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #135 = LDAWB_l3r
  { 136,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #136 = LDAWCP_lu6
  { 137,	1,	0,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #137 = LDAWCP_u6
  { 138,	2,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #138 = LDAWDP_lru6
  { 139,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #139 = LDAWDP_ru6
  { 140,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #140 = LDAWFI
  { 141,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #141 = LDAWF_l2rus
  { 142,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #142 = LDAWF_l3r
  { 143,	2,	1,	0,	4,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo22,0,nullptr },  // Inst #143 = LDAWSP_lru6
  { 144,	2,	1,	0,	2,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo22,0,nullptr },  // Inst #144 = LDAWSP_ru6
  { 145,	2,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #145 = LDC_lru6
  { 146,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #146 = LDC_ru6
  { 147,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #147 = LDET_0R
  { 148,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #148 = LDIVU_l5r
  { 149,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #149 = LDSED_0R
  { 150,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #150 = LDSPC_0R
  { 151,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #151 = LDSSR_0R
  { 152,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #152 = LDWCP_lru6
  { 153,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #153 = LDWCP_lu10
  { 154,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #154 = LDWCP_ru6
  { 155,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #155 = LDWCP_u10
  { 156,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #156 = LDWDP_lru6
  { 157,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #157 = LDWDP_ru6
  { 158,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #158 = LDWFI
  { 159,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList1, nullptr, OperandInfo22,0,nullptr },  // Inst #159 = LDWSP_lru6
  { 160,	2,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList1, nullptr, OperandInfo22,0,nullptr },  // Inst #160 = LDWSP_ru6
  { 161,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #161 = LDW_2rus
  { 162,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #162 = LDW_3r
  { 163,	6,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #163 = LMUL_l6r
  { 164,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #164 = LSS_3r
  { 165,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #165 = LSUB_l5r
  { 166,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #166 = LSU_3r
  { 167,	6,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #167 = MACCS_l4r
  { 168,	6,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #168 = MACCU_l4r
  { 169,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #169 = MJOIN_1r
  { 170,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #170 = MKMSK_2r
  { 171,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #171 = MKMSK_rus
  { 172,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #172 = MSYNC_1r
  { 173,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #173 = MUL_l3r
  { 174,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #174 = NEG
  { 175,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #175 = NOT
  { 176,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #176 = OR_3r
  { 177,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #177 = OUTCT_2r
  { 178,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #178 = OUTCT_rus
  { 179,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #179 = OUTPW_l2rus
  { 180,	3,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #180 = OUTSHR_2r
  { 181,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #181 = OUTT_2r
  { 182,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #182 = OUT_2r
  { 183,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #183 = PEEK_2r
  { 184,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #184 = REMS_l3r
  { 185,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #185 = REMU_l3r
  { 186,	1,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #186 = RETSP_lu6
  { 187,	1,	0,	0,	2,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2,0,nullptr },  // Inst #187 = RETSP_u6
  { 188,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #188 = SELECT_CC
  { 189,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #189 = SETCLK_l2r
  { 190,	1,	0,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #190 = SETCP_1r
  { 191,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #191 = SETC_l2r
  { 192,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #192 = SETC_lru6
  { 193,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #193 = SETC_ru6
  { 194,	1,	0,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #194 = SETDP_1r
  { 195,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #195 = SETD_2r
  { 196,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo14,0,nullptr },  // Inst #196 = SETEV_1r
  { 197,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, nullptr,0,nullptr },  // Inst #197 = SETKEP_0R
  { 198,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #198 = SETN_l2r
  { 199,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #199 = SETPSC_2r
  { 200,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #200 = SETPS_l2r
  { 201,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #201 = SETPT_2r
  { 202,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #202 = SETRDY_l2r
  { 203,	1,	0,	0,	2,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #203 = SETSP_1r
  { 204,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #204 = SETSR_branch_lu6
  { 205,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #205 = SETSR_branch_u6
  { 206,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #206 = SETSR_lu6
  { 207,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #207 = SETSR_u6
  { 208,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #208 = SETTW_l2r
  { 209,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo14,0,nullptr },  // Inst #209 = SETV_1r
  { 210,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #210 = SEXT_2r
  { 211,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #211 = SEXT_rus
  { 212,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #212 = SHL_2rus
  { 213,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #213 = SHL_3r
  { 214,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #214 = SHR_2rus
  { 215,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #215 = SHR_3r
  { 216,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #216 = SSYNC_0r
  { 217,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #217 = ST16_l3r
  { 218,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #218 = ST8_l3r
  { 219,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #219 = STET_0R
  { 220,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #220 = STSED_0R
  { 221,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #221 = STSPC_0R
  { 222,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr,0,nullptr },  // Inst #222 = STSSR_0R
  { 223,	2,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #223 = STWDP_lru6
  { 224,	2,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #224 = STWDP_ru6
  { 225,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #225 = STWFI
  { 226,	2,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList1, nullptr, OperandInfo22,0,nullptr },  // Inst #226 = STWSP_lru6
  { 227,	2,	0,	0,	2,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList1, nullptr, OperandInfo22,0,nullptr },  // Inst #227 = STWSP_ru6
  { 228,	3,	0,	0,	2,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #228 = STW_2rus
  { 229,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #229 = STW_l3r
  { 230,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #230 = SUB_2rus
  { 231,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #231 = SUB_3r
  { 232,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #232 = SYNCR_1r
  { 233,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #233 = TESTCT_2r
  { 234,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #234 = TESTLCL_l2r
  { 235,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #235 = TESTWCT_2r
  { 236,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #236 = TSETMR_2r
  { 237,	3,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #237 = TSETR_3r
  { 238,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #238 = TSTART_1R
  { 239,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #239 = WAITEF_1R
  { 240,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #240 = WAITET_1R
  { 241,	0,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #241 = WAITEU_0R
  { 242,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #242 = XOR_l3r
  { 243,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #243 = ZEXT_2r
  { 244,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #244 = ZEXT_rus
};

extern const char XCoreInstrNameData[] = {
  /* 0 */ 'L', 'D', 'A', 'P', 'B', '_', 'u', '1', '0', 0,
  /* 10 */ 'B', 'L', 'R', 'B', '_', 'u', '1', '0', 0,
  /* 19 */ 'L', 'D', 'A', 'P', 'F', '_', 'u', '1', '0', 0,
  /* 29 */ 'B', 'L', 'R', 'F', '_', 'u', '1', '0', 0,
  /* 38 */ 'B', 'L', 'A', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 48 */ 'L', 'D', 'W', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 58 */ 'L', 'D', 'A', 'P', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 69 */ 'B', 'L', 'R', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 79 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 90 */ 'B', 'L', 'R', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 100 */ 'B', 'L', 'A', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 111 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 122 */ 'B', 'R', '_', 'J', 'T', '3', '2', 0,
  /* 130 */ 'K', 'C', 'A', 'L', 'L', '_', 'u', '6', 0,
  /* 139 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'u', '6', 0,
  /* 149 */ 'E', 'X', 'T', 'D', 'P', '_', 'u', '6', 0,
  /* 158 */ 'R', 'E', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 167 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 177 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 188 */ 'E', 'X', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 197 */ 'C', 'L', 'R', 'S', 'R', '_', 'u', '6', 0,
  /* 206 */ 'G', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 215 */ 'S', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 224 */ 'B', 'L', 'A', 'T', '_', 'u', '6', 0,
  /* 232 */ 'B', 'R', 'B', 'U', '_', 'u', '6', 0,
  /* 240 */ 'B', 'R', 'F', 'U', '_', 'u', '6', 0,
  /* 248 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 264 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 280 */ 'K', 'C', 'A', 'L', 'L', '_', 'l', 'u', '6', 0,
  /* 290 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'l', 'u', '6', 0,
  /* 301 */ 'E', 'X', 'T', 'D', 'P', '_', 'l', 'u', '6', 0,
  /* 311 */ 'R', 'E', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 321 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 332 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 344 */ 'E', 'X', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 354 */ 'C', 'L', 'R', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 364 */ 'G', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 374 */ 'S', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 384 */ 'B', 'L', 'A', 'T', '_', 'l', 'u', '6', 0,
  /* 393 */ 'B', 'R', 'B', 'U', '_', 'l', 'u', '6', 0,
  /* 402 */ 'B', 'R', 'F', 'U', '_', 'l', 'u', '6', 0,
  /* 411 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 428 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 445 */ 'L', 'D', 'C', '_', 'r', 'u', '6', 0,
  /* 453 */ 'S', 'E', 'T', 'C', '_', 'r', 'u', '6', 0,
  /* 462 */ 'B', 'R', 'B', 'F', '_', 'r', 'u', '6', 0,
  /* 471 */ 'B', 'R', 'F', 'F', '_', 'r', 'u', '6', 0,
  /* 480 */ 'L', 'D', 'W', 'C', 'P', '_', 'r', 'u', '6', 0,
  /* 490 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 501 */ 'L', 'D', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 511 */ 'S', 'T', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 521 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 532 */ 'L', 'D', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 542 */ 'S', 'T', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 552 */ 'B', 'R', 'B', 'T', '_', 'r', 'u', '6', 0,
  /* 561 */ 'B', 'R', 'F', 'T', '_', 'r', 'u', '6', 0,
  /* 570 */ 'L', 'D', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 579 */ 'S', 'E', 'T', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 589 */ 'B', 'R', 'B', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 599 */ 'B', 'R', 'F', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 609 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 620 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 632 */ 'L', 'D', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 643 */ 'S', 'T', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 654 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 666 */ 'L', 'D', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 677 */ 'S', 'T', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 688 */ 'B', 'R', 'B', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 698 */ 'B', 'R', 'F', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 708 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', 0,
  /* 718 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 731 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 748 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 761 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 768 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 778 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 791 */ 'N', 'E', 'G', 0,
  /* 795 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 810 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 824 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 838 */ 'L', 'D', 'A', 'W', 'F', 'I', 0,
  /* 845 */ 'L', 'D', 'W', 'F', 'I', 0,
  /* 851 */ 'S', 'T', 'W', 'F', 'I', 0,
  /* 857 */ 'P', 'H', 'I', 0,
  /* 861 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 870 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 879 */ 'K', 'I', 'L', 'L', 0,
  /* 884 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 894 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 910 */ 'E', 'H', '_', 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 920 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 937 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 946 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 961 */ 'L', 'D', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 970 */ 'S', 'T', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 979 */ 'L', 'D', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 988 */ 'S', 'T', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 997 */ 'G', 'E', 'T', 'E', 'D', '_', '0', 'R', 0,
  /* 1006 */ 'G', 'E', 'T', 'I', 'D', '_', '0', 'R', 0,
  /* 1015 */ 'C', 'L', 'R', 'E', '_', '0', 'R', 0,
  /* 1023 */ 'D', 'C', 'A', 'L', 'L', '_', '0', 'R', 0,
  /* 1032 */ 'G', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1042 */ 'S', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1052 */ 'G', 'E', 'T', 'K', 'S', 'P', '_', '0', 'R', 0,
  /* 1062 */ 'D', 'E', 'N', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1072 */ 'D', 'R', 'E', 'S', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1083 */ 'L', 'D', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1092 */ 'S', 'T', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1101 */ 'L', 'D', 'E', 'T', '_', '0', 'R', 0,
  /* 1109 */ 'F', 'R', 'E', 'E', 'T', '_', '0', 'R', 0,
  /* 1118 */ 'D', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1126 */ 'K', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1134 */ 'G', 'E', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1143 */ 'S', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1151 */ 'W', 'A', 'I', 'T', 'E', 'U', '_', '0', 'R', 0,
  /* 1161 */ 'W', 'A', 'I', 'T', 'E', 'F', '_', '1', 'R', 0,
  /* 1171 */ 'W', 'A', 'I', 'T', 'E', 'T', '_', '1', 'R', 0,
  /* 1181 */ 'C', 'L', 'R', 'P', 'T', '_', '1', 'R', 0,
  /* 1190 */ 'T', 'S', 'T', 'A', 'R', 'T', '_', '1', 'R', 0,
  /* 1200 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1217 */ 'F', 'R', 'A', 'M', 'E', '_', 'T', 'O', '_', 'A', 'R', 'G', 'S', '_', 'O', 'F', 'F', 'S', 'E', 'T', 0,
  /* 1238 */ 'B', 'R', '_', 'J', 'T', 0,
  /* 1244 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1255 */ 'N', 'O', 'T', 0,
  /* 1259 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1274 */ 'C', 'O', 'P', 'Y', 0,
  /* 1279 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', '_', 'b', 'a', 0,
  /* 1293 */ 'S', 'S', 'Y', 'N', 'C', '_', '0', 'r', 0,
  /* 1302 */ 'B', 'L', 'A', '_', '1', 'r', 0,
  /* 1309 */ 'M', 'S', 'Y', 'N', 'C', '_', '1', 'r', 0,
  /* 1318 */ 'E', 'C', 'A', 'L', 'L', 'F', '_', '1', 'r', 0,
  /* 1328 */ 'D', 'G', 'E', 'T', 'R', 'E', 'G', '_', '1', 'r', 0,
  /* 1339 */ 'K', 'C', 'A', 'L', 'L', '_', '1', 'r', 0,
  /* 1348 */ 'M', 'J', 'O', 'I', 'N', '_', '1', 'r', 0,
  /* 1357 */ 'S', 'E', 'T', 'C', 'P', '_', '1', 'r', 0,
  /* 1366 */ 'S', 'E', 'T', 'D', 'P', '_', '1', 'r', 0,
  /* 1375 */ 'S', 'E', 'T', 'S', 'P', '_', '1', 'r', 0,
  /* 1384 */ 'S', 'Y', 'N', 'C', 'R', '_', '1', 'r', 0,
  /* 1393 */ 'F', 'R', 'E', 'E', 'R', '_', '1', 'r', 0,
  /* 1402 */ 'E', 'C', 'A', 'L', 'L', 'T', '_', '1', 'r', 0,
  /* 1412 */ 'B', 'A', 'U', '_', '1', 'r', 0,
  /* 1419 */ 'E', 'D', 'U', '_', '1', 'r', 0,
  /* 1426 */ 'E', 'E', 'U', '_', '1', 'r', 0,
  /* 1433 */ 'B', 'R', 'U', '_', '1', 'r', 0,
  /* 1440 */ 'S', 'E', 'T', 'E', 'V', '_', '1', 'r', 0,
  /* 1449 */ 'S', 'E', 'T', 'V', '_', '1', 'r', 0,
  /* 1457 */ 'I', 'N', 'I', 'T', 'P', 'C', '_', '2', 'r', 0,
  /* 1467 */ 'S', 'E', 'T', 'P', 'S', 'C', '_', '2', 'r', 0,
  /* 1477 */ 'S', 'E', 'T', 'D', '_', '2', 'r', 0,
  /* 1485 */ 'E', 'E', 'F', '_', '2', 'r', 0,
  /* 1492 */ 'P', 'E', 'E', 'K', '_', '2', 'r', 0,
  /* 1500 */ 'M', 'K', 'M', 'S', 'K', '_', '2', 'r', 0,
  /* 1509 */ 'E', 'N', 'D', 'I', 'N', '_', '2', 'r', 0,
  /* 1518 */ 'I', 'N', 'I', 'T', 'C', 'P', '_', '2', 'r', 0,
  /* 1528 */ 'I', 'N', 'I', 'T', 'D', 'P', '_', '2', 'r', 0,
  /* 1538 */ 'I', 'N', 'I', 'T', 'S', 'P', '_', '2', 'r', 0,
  /* 1548 */ 'I', 'N', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1557 */ 'O', 'U', 'T', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1567 */ 'T', 'S', 'E', 'T', 'M', 'R', '_', '2', 'r', 0,
  /* 1577 */ 'G', 'E', 'T', 'T', 'S', '_', '2', 'r', 0,
  /* 1586 */ 'C', 'H', 'K', 'C', 'T', '_', '2', 'r', 0,
  /* 1595 */ 'I', 'N', 'C', 'T', '_', '2', 'r', 0,
  /* 1603 */ 'T', 'E', 'S', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1613 */ 'O', 'U', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1622 */ 'T', 'E', 'S', 'T', 'W', 'C', 'T', '_', '2', 'r', 0,
  /* 1633 */ 'E', 'E', 'T', '_', '2', 'r', 0,
  /* 1640 */ 'I', 'N', 'T', '_', '2', 'r', 0,
  /* 1647 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', '2', 'r', 0,
  /* 1657 */ 'S', 'E', 'T', 'P', 'T', '_', '2', 'r', 0,
  /* 1666 */ 'G', 'E', 'T', 'S', 'T', '_', '2', 'r', 0,
  /* 1675 */ 'O', 'U', 'T', 'T', '_', '2', 'r', 0,
  /* 1683 */ 'O', 'U', 'T', '_', '2', 'r', 0,
  /* 1690 */ 'S', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1698 */ 'Z', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1706 */ 'S', 'E', 'T', 'C', '_', 'l', '2', 'r', 0,
  /* 1715 */ 'G', 'E', 'T', 'D', '_', 'l', '2', 'r', 0,
  /* 1724 */ 'S', 'E', 'T', 'C', 'L', 'K', '_', 'l', '2', 'r', 0,
  /* 1735 */ 'T', 'E', 'S', 'T', 'L', 'C', 'L', '_', 'l', '2', 'r', 0,
  /* 1747 */ 'G', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 1756 */ 'S', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 1765 */ 'I', 'N', 'I', 'T', 'L', 'R', '_', 'l', '2', 'r', 0,
  /* 1776 */ 'G', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1786 */ 'S', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1796 */ 'B', 'Y', 'T', 'E', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1808 */ 'B', 'I', 'T', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1819 */ 'S', 'E', 'T', 'T', 'W', '_', 'l', '2', 'r', 0,
  /* 1829 */ 'S', 'E', 'T', 'R', 'D', 'Y', '_', 'l', '2', 'r', 0,
  /* 1840 */ 'C', 'L', 'Z', '_', 'l', '2', 'r', 0,
  /* 1848 */ 'S', 'U', 'B', '_', '3', 'r', 0,
  /* 1855 */ 'A', 'D', 'D', '_', '3', 'r', 0,
  /* 1862 */ 'A', 'N', 'D', '_', '3', 'r', 0,
  /* 1869 */ 'S', 'H', 'L', '_', '3', 'r', 0,
  /* 1876 */ 'E', 'Q', '_', '3', 'r', 0,
  /* 1882 */ 'S', 'H', 'R', '_', '3', 'r', 0,
  /* 1889 */ 'O', 'R', '_', '3', 'r', 0,
  /* 1895 */ 'T', 'S', 'E', 'T', 'R', '_', '3', 'r', 0,
  /* 1904 */ 'L', 'D', '1', '6', 'S', '_', '3', 'r', 0,
  /* 1913 */ 'L', 'S', 'S', '_', '3', 'r', 0,
  /* 1920 */ 'L', 'D', '8', 'U', '_', '3', 'r', 0,
  /* 1928 */ 'L', 'S', 'U', '_', '3', 'r', 0,
  /* 1935 */ 'L', 'D', 'W', '_', '3', 'r', 0,
  /* 1942 */ 'S', 'T', '1', '6', '_', 'l', '3', 'r', 0,
  /* 1951 */ 'S', 'T', '8', '_', 'l', '3', 'r', 0,
  /* 1959 */ 'L', 'D', 'A', '1', '6', 'B', '_', 'l', '3', 'r', 0,
  /* 1970 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '3', 'r', 0,
  /* 1980 */ 'C', 'R', 'C', '_', 'l', '3', 'r', 0,
  /* 1988 */ 'L', 'D', 'A', '1', '6', 'F', '_', 'l', '3', 'r', 0,
  /* 1999 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '3', 'r', 0,
  /* 2009 */ 'M', 'U', 'L', '_', 'l', '3', 'r', 0,
  /* 2017 */ 'A', 'S', 'H', 'R', '_', 'l', '3', 'r', 0,
  /* 2026 */ 'X', 'O', 'R', '_', 'l', '3', 'r', 0,
  /* 2034 */ 'R', 'E', 'M', 'S', '_', 'l', '3', 'r', 0,
  /* 2043 */ 'D', 'I', 'V', 'S', '_', 'l', '3', 'r', 0,
  /* 2052 */ 'R', 'E', 'M', 'U', '_', 'l', '3', 'r', 0,
  /* 2061 */ 'D', 'I', 'V', 'U', '_', 'l', '3', 'r', 0,
  /* 2070 */ 'S', 'T', 'W', '_', 'l', '3', 'r', 0,
  /* 2078 */ 'C', 'R', 'C', '8', '_', 'l', '4', 'r', 0,
  /* 2087 */ 'M', 'A', 'C', 'C', 'S', '_', 'l', '4', 'r', 0,
  /* 2097 */ 'M', 'A', 'C', 'C', 'U', '_', 'l', '4', 'r', 0,
  /* 2107 */ 'L', 'S', 'U', 'B', '_', 'l', '5', 'r', 0,
  /* 2116 */ 'L', 'A', 'D', 'D', '_', 'l', '5', 'r', 0,
  /* 2125 */ 'L', 'D', 'I', 'V', 'U', '_', 'l', '5', 'r', 0,
  /* 2135 */ 'L', 'M', 'U', 'L', '_', 'l', '6', 'r', 0,
  /* 2144 */ 'I', 'n', 't', '_', 'M', 'e', 'm', 'B', 'a', 'r', 'r', 'i', 'e', 'r', 0,
  /* 2159 */ 'S', 'U', 'B', '_', '2', 'r', 'u', 's', 0,
  /* 2168 */ 'A', 'D', 'D', '_', '2', 'r', 'u', 's', 0,
  /* 2177 */ 'S', 'H', 'L', '_', '2', 'r', 'u', 's', 0,
  /* 2186 */ 'E', 'Q', '_', '2', 'r', 'u', 's', 0,
  /* 2194 */ 'S', 'H', 'R', '_', '2', 'r', 'u', 's', 0,
  /* 2203 */ 'L', 'D', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 2212 */ 'S', 'T', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 2221 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2233 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2245 */ 'A', 'S', 'H', 'R', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2256 */ 'I', 'N', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2267 */ 'O', 'U', 'T', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2279 */ 'M', 'K', 'M', 'S', 'K', '_', 'r', 'u', 's', 0,
  /* 2289 */ 'G', 'E', 'T', 'R', '_', 'r', 'u', 's', 0,
  /* 2298 */ 'C', 'H', 'K', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 2308 */ 'O', 'U', 'T', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 2318 */ 'S', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
  /* 2327 */ 'Z', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
};

extern const unsigned XCoreInstrNameIndices[] = {
    857U, 884U, 894U, 870U, 861U, 879U, 795U, 810U, 
    778U, 824U, 1200U, 768U, 748U, 1274U, 761U, 1259U, 
    718U, 937U, 1244U, 731U, 2168U, 1855U, 920U, 946U, 
    1647U, 1862U, 2245U, 2017U, 1412U, 1808U, 100U, 38U, 
    384U, 224U, 1302U, 69U, 10U, 90U, 29U, 589U, 
    462U, 688U, 552U, 393U, 232U, 599U, 471U, 698U, 
    561U, 402U, 240U, 1433U, 1238U, 122U, 1796U, 1586U, 
    2298U, 1015U, 1181U, 411U, 248U, 354U, 197U, 1840U, 
    2078U, 1980U, 1023U, 1062U, 1328U, 2043U, 2061U, 1072U, 
    1118U, 1318U, 1402U, 1419U, 1485U, 1633U, 1426U, 910U, 
    1509U, 322U, 168U, 2186U, 1876U, 301U, 149U, 344U, 
    188U, 1217U, 1393U, 1109U, 1715U, 997U, 1134U, 1006U, 
    1032U, 1052U, 1747U, 1776U, 2289U, 364U, 206U, 1666U, 
    1577U, 1595U, 1518U, 1528U, 1765U, 1457U, 1538U, 2256U, 
    1548U, 1640U, 1512U, 2144U, 1339U, 280U, 130U, 321U, 
    167U, 332U, 177U, 1126U, 2116U, 1904U, 1920U, 1959U, 
    1988U, 58U, 0U, 79U, 1279U, 19U, 2221U, 1970U, 
    290U, 139U, 620U, 490U, 838U, 2233U, 1999U, 654U, 
    521U, 570U, 445U, 1101U, 2125U, 979U, 961U, 1083U, 
    609U, 111U, 480U, 48U, 632U, 501U, 845U, 666U, 
    532U, 2203U, 1935U, 2135U, 1913U, 2107U, 1928U, 2087U, 
    2097U, 1348U, 1500U, 2279U, 1309U, 2009U, 791U, 1255U, 
    1889U, 1613U, 2308U, 2267U, 1557U, 1675U, 1683U, 1492U, 
    2034U, 2052U, 311U, 158U, 708U, 1724U, 1357U, 1706U, 
    579U, 453U, 1366U, 1477U, 1440U, 1042U, 1756U, 1467U, 
    1786U, 1657U, 1829U, 1375U, 428U, 264U, 374U, 215U, 
    1819U, 1449U, 1690U, 2318U, 2177U, 1869U, 2194U, 1882U, 
    1293U, 1942U, 1951U, 1143U, 988U, 970U, 1092U, 643U, 
    511U, 851U, 677U, 542U, 2212U, 2070U, 2159U, 1848U, 
    1384U, 1603U, 1735U, 1622U, 1567U, 1895U, 1190U, 1161U, 
    1171U, 1151U, 2026U, 1698U, 2327U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 245);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfo {
  explicit XCoreGenInstrInfo(int SO = -1, int DO = -1);
  virtual ~XCoreGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 245);
}
XCoreGenInstrInfo::~XCoreGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace XCore {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace XCore
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace XCore {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace XCore
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace XCore {
namespace OpTypes { 
enum OperandType {
  InlineJT = 0,
  InlineJT32 = 1,
  MEMii = 2,
  brtarget = 3,
  brtarget_neg = 4,
  f32imm = 5,
  f64imm = 6,
  i16imm = 7,
  i1imm = 8,
  i32imm = 9,
  i64imm = 10,
  i8imm = 11,
  pcrel_imm = 12,
  pcrel_imm_neg = 13,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace XCore
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
