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

namespace Mips {
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
    ABSQ_S_PH	= 20,
    ABSQ_S_QB	= 21,
    ABSQ_S_W	= 22,
    ADD	= 23,
    ADDIUPC	= 24,
    ADDIUR1SP_MM	= 25,
    ADDIUR2_MM	= 26,
    ADDIUS5_MM	= 27,
    ADDIUSP_MM	= 28,
    ADDQH_PH	= 29,
    ADDQH_R_PH	= 30,
    ADDQH_R_W	= 31,
    ADDQH_W	= 32,
    ADDQ_PH	= 33,
    ADDQ_S_PH	= 34,
    ADDQ_S_W	= 35,
    ADDSC	= 36,
    ADDS_A_B	= 37,
    ADDS_A_D	= 38,
    ADDS_A_H	= 39,
    ADDS_A_W	= 40,
    ADDS_S_B	= 41,
    ADDS_S_D	= 42,
    ADDS_S_H	= 43,
    ADDS_S_W	= 44,
    ADDS_U_B	= 45,
    ADDS_U_D	= 46,
    ADDS_U_H	= 47,
    ADDS_U_W	= 48,
    ADDU16_MM	= 49,
    ADDUH_QB	= 50,
    ADDUH_R_QB	= 51,
    ADDU_PH	= 52,
    ADDU_QB	= 53,
    ADDU_S_PH	= 54,
    ADDU_S_QB	= 55,
    ADDVI_B	= 56,
    ADDVI_D	= 57,
    ADDVI_H	= 58,
    ADDVI_W	= 59,
    ADDV_B	= 60,
    ADDV_D	= 61,
    ADDV_H	= 62,
    ADDV_W	= 63,
    ADDWC	= 64,
    ADD_A_B	= 65,
    ADD_A_D	= 66,
    ADD_A_H	= 67,
    ADD_A_W	= 68,
    ADD_MM	= 69,
    ADDi	= 70,
    ADDi_MM	= 71,
    ADDiu	= 72,
    ADDiu_MM	= 73,
    ADDu	= 74,
    ADDu_MM	= 75,
    ADJCALLSTACKDOWN	= 76,
    ADJCALLSTACKUP	= 77,
    ALIGN	= 78,
    ALUIPC	= 79,
    AND	= 80,
    AND16_MM	= 81,
    AND64	= 82,
    ANDI_B	= 83,
    AND_MM	= 84,
    AND_V	= 85,
    AND_V_D_PSEUDO	= 86,
    AND_V_H_PSEUDO	= 87,
    AND_V_W_PSEUDO	= 88,
    ANDi	= 89,
    ANDi64	= 90,
    ANDi_MM	= 91,
    APPEND	= 92,
    ASUB_S_B	= 93,
    ASUB_S_D	= 94,
    ASUB_S_H	= 95,
    ASUB_S_W	= 96,
    ASUB_U_B	= 97,
    ASUB_U_D	= 98,
    ASUB_U_H	= 99,
    ASUB_U_W	= 100,
    ATOMIC_CMP_SWAP_I16	= 101,
    ATOMIC_CMP_SWAP_I32	= 102,
    ATOMIC_CMP_SWAP_I64	= 103,
    ATOMIC_CMP_SWAP_I8	= 104,
    ATOMIC_LOAD_ADD_I16	= 105,
    ATOMIC_LOAD_ADD_I32	= 106,
    ATOMIC_LOAD_ADD_I64	= 107,
    ATOMIC_LOAD_ADD_I8	= 108,
    ATOMIC_LOAD_AND_I16	= 109,
    ATOMIC_LOAD_AND_I32	= 110,
    ATOMIC_LOAD_AND_I64	= 111,
    ATOMIC_LOAD_AND_I8	= 112,
    ATOMIC_LOAD_NAND_I16	= 113,
    ATOMIC_LOAD_NAND_I32	= 114,
    ATOMIC_LOAD_NAND_I64	= 115,
    ATOMIC_LOAD_NAND_I8	= 116,
    ATOMIC_LOAD_OR_I16	= 117,
    ATOMIC_LOAD_OR_I32	= 118,
    ATOMIC_LOAD_OR_I64	= 119,
    ATOMIC_LOAD_OR_I8	= 120,
    ATOMIC_LOAD_SUB_I16	= 121,
    ATOMIC_LOAD_SUB_I32	= 122,
    ATOMIC_LOAD_SUB_I64	= 123,
    ATOMIC_LOAD_SUB_I8	= 124,
    ATOMIC_LOAD_XOR_I16	= 125,
    ATOMIC_LOAD_XOR_I32	= 126,
    ATOMIC_LOAD_XOR_I64	= 127,
    ATOMIC_LOAD_XOR_I8	= 128,
    ATOMIC_SWAP_I16	= 129,
    ATOMIC_SWAP_I32	= 130,
    ATOMIC_SWAP_I64	= 131,
    ATOMIC_SWAP_I8	= 132,
    AUI	= 133,
    AUIPC	= 134,
    AVER_S_B	= 135,
    AVER_S_D	= 136,
    AVER_S_H	= 137,
    AVER_S_W	= 138,
    AVER_U_B	= 139,
    AVER_U_D	= 140,
    AVER_U_H	= 141,
    AVER_U_W	= 142,
    AVE_S_B	= 143,
    AVE_S_D	= 144,
    AVE_S_H	= 145,
    AVE_S_W	= 146,
    AVE_U_B	= 147,
    AVE_U_D	= 148,
    AVE_U_H	= 149,
    AVE_U_W	= 150,
    AddiuRxImmX16	= 151,
    AddiuRxPcImmX16	= 152,
    AddiuRxRxImm16	= 153,
    AddiuRxRxImmX16	= 154,
    AddiuRxRyOffMemX16	= 155,
    AddiuSpImm16	= 156,
    AddiuSpImmX16	= 157,
    AdduRxRyRz16	= 158,
    AndRxRxRy16	= 159,
    B	= 160,
    BADDu	= 161,
    BAL	= 162,
    BALC	= 163,
    BALIGN	= 164,
    BAL_BR	= 165,
    BC	= 166,
    BC1EQZ	= 167,
    BC1F	= 168,
    BC1FL	= 169,
    BC1F_MM	= 170,
    BC1NEZ	= 171,
    BC1T	= 172,
    BC1TL	= 173,
    BC1T_MM	= 174,
    BC2EQZ	= 175,
    BC2NEZ	= 176,
    BCLRI_B	= 177,
    BCLRI_D	= 178,
    BCLRI_H	= 179,
    BCLRI_W	= 180,
    BCLR_B	= 181,
    BCLR_D	= 182,
    BCLR_H	= 183,
    BCLR_W	= 184,
    BEQ	= 185,
    BEQ64	= 186,
    BEQC	= 187,
    BEQL	= 188,
    BEQZALC	= 189,
    BEQZC	= 190,
    BEQZC_MM	= 191,
    BEQ_MM	= 192,
    BGEC	= 193,
    BGEUC	= 194,
    BGEZ	= 195,
    BGEZ64	= 196,
    BGEZAL	= 197,
    BGEZALC	= 198,
    BGEZALL	= 199,
    BGEZALS_MM	= 200,
    BGEZAL_MM	= 201,
    BGEZC	= 202,
    BGEZL	= 203,
    BGEZ_MM	= 204,
    BGTZ	= 205,
    BGTZ64	= 206,
    BGTZALC	= 207,
    BGTZC	= 208,
    BGTZL	= 209,
    BGTZ_MM	= 210,
    BINSLI_B	= 211,
    BINSLI_D	= 212,
    BINSLI_H	= 213,
    BINSLI_W	= 214,
    BINSL_B	= 215,
    BINSL_D	= 216,
    BINSL_H	= 217,
    BINSL_W	= 218,
    BINSRI_B	= 219,
    BINSRI_D	= 220,
    BINSRI_H	= 221,
    BINSRI_W	= 222,
    BINSR_B	= 223,
    BINSR_D	= 224,
    BINSR_H	= 225,
    BINSR_W	= 226,
    BITREV	= 227,
    BITSWAP	= 228,
    BLEZ	= 229,
    BLEZ64	= 230,
    BLEZALC	= 231,
    BLEZC	= 232,
    BLEZL	= 233,
    BLEZ_MM	= 234,
    BLTC	= 235,
    BLTUC	= 236,
    BLTZ	= 237,
    BLTZ64	= 238,
    BLTZAL	= 239,
    BLTZALC	= 240,
    BLTZALL	= 241,
    BLTZALS_MM	= 242,
    BLTZAL_MM	= 243,
    BLTZC	= 244,
    BLTZL	= 245,
    BLTZ_MM	= 246,
    BMNZI_B	= 247,
    BMNZ_V	= 248,
    BMZI_B	= 249,
    BMZ_V	= 250,
    BNE	= 251,
    BNE64	= 252,
    BNEC	= 253,
    BNEGI_B	= 254,
    BNEGI_D	= 255,
    BNEGI_H	= 256,
    BNEGI_W	= 257,
    BNEG_B	= 258,
    BNEG_D	= 259,
    BNEG_H	= 260,
    BNEG_W	= 261,
    BNEL	= 262,
    BNEZALC	= 263,
    BNEZC	= 264,
    BNEZC_MM	= 265,
    BNE_MM	= 266,
    BNVC	= 267,
    BNZ_B	= 268,
    BNZ_D	= 269,
    BNZ_H	= 270,
    BNZ_V	= 271,
    BNZ_W	= 272,
    BOVC	= 273,
    BPOSGE32	= 274,
    BPOSGE32_PSEUDO	= 275,
    BREAK	= 276,
    BREAK_MM	= 277,
    BSELI_B	= 278,
    BSEL_D_PSEUDO	= 279,
    BSEL_FD_PSEUDO	= 280,
    BSEL_FW_PSEUDO	= 281,
    BSEL_H_PSEUDO	= 282,
    BSEL_V	= 283,
    BSEL_W_PSEUDO	= 284,
    BSETI_B	= 285,
    BSETI_D	= 286,
    BSETI_H	= 287,
    BSETI_W	= 288,
    BSET_B	= 289,
    BSET_D	= 290,
    BSET_H	= 291,
    BSET_W	= 292,
    BZ_B	= 293,
    BZ_D	= 294,
    BZ_H	= 295,
    BZ_V	= 296,
    BZ_W	= 297,
    BeqzRxImm16	= 298,
    BeqzRxImmX16	= 299,
    Bimm16	= 300,
    BimmX16	= 301,
    BnezRxImm16	= 302,
    BnezRxImmX16	= 303,
    Break16	= 304,
    Bteqz16	= 305,
    BteqzT8CmpX16	= 306,
    BteqzT8CmpiX16	= 307,
    BteqzT8SltX16	= 308,
    BteqzT8SltiX16	= 309,
    BteqzT8SltiuX16	= 310,
    BteqzT8SltuX16	= 311,
    BteqzX16	= 312,
    Btnez16	= 313,
    BtnezT8CmpX16	= 314,
    BtnezT8CmpiX16	= 315,
    BtnezT8SltX16	= 316,
    BtnezT8SltiX16	= 317,
    BtnezT8SltiuX16	= 318,
    BtnezT8SltuX16	= 319,
    BtnezX16	= 320,
    BuildPairF64	= 321,
    BuildPairF64_64	= 322,
    CACHE	= 323,
    CACHE_R6	= 324,
    CEIL_L_D64	= 325,
    CEIL_L_S	= 326,
    CEIL_W_D32	= 327,
    CEIL_W_D64	= 328,
    CEIL_W_MM	= 329,
    CEIL_W_S	= 330,
    CEIL_W_S_MM	= 331,
    CEQI_B	= 332,
    CEQI_D	= 333,
    CEQI_H	= 334,
    CEQI_W	= 335,
    CEQ_B	= 336,
    CEQ_D	= 337,
    CEQ_H	= 338,
    CEQ_W	= 339,
    CFC1	= 340,
    CFC1_MM	= 341,
    CFCMSA	= 342,
    CINS	= 343,
    CINS32	= 344,
    CLASS_D	= 345,
    CLASS_S	= 346,
    CLEI_S_B	= 347,
    CLEI_S_D	= 348,
    CLEI_S_H	= 349,
    CLEI_S_W	= 350,
    CLEI_U_B	= 351,
    CLEI_U_D	= 352,
    CLEI_U_H	= 353,
    CLEI_U_W	= 354,
    CLE_S_B	= 355,
    CLE_S_D	= 356,
    CLE_S_H	= 357,
    CLE_S_W	= 358,
    CLE_U_B	= 359,
    CLE_U_D	= 360,
    CLE_U_H	= 361,
    CLE_U_W	= 362,
    CLO	= 363,
    CLO_MM	= 364,
    CLO_R6	= 365,
    CLTI_S_B	= 366,
    CLTI_S_D	= 367,
    CLTI_S_H	= 368,
    CLTI_S_W	= 369,
    CLTI_U_B	= 370,
    CLTI_U_D	= 371,
    CLTI_U_H	= 372,
    CLTI_U_W	= 373,
    CLT_S_B	= 374,
    CLT_S_D	= 375,
    CLT_S_H	= 376,
    CLT_S_W	= 377,
    CLT_U_B	= 378,
    CLT_U_D	= 379,
    CLT_U_H	= 380,
    CLT_U_W	= 381,
    CLZ	= 382,
    CLZ_MM	= 383,
    CLZ_R6	= 384,
    CMPGDU_EQ_QB	= 385,
    CMPGDU_LE_QB	= 386,
    CMPGDU_LT_QB	= 387,
    CMPGU_EQ_QB	= 388,
    CMPGU_LE_QB	= 389,
    CMPGU_LT_QB	= 390,
    CMPU_EQ_QB	= 391,
    CMPU_LE_QB	= 392,
    CMPU_LT_QB	= 393,
    CMP_EQ_D	= 394,
    CMP_EQ_PH	= 395,
    CMP_EQ_S	= 396,
    CMP_F_D	= 397,
    CMP_F_S	= 398,
    CMP_LE_D	= 399,
    CMP_LE_PH	= 400,
    CMP_LE_S	= 401,
    CMP_LT_D	= 402,
    CMP_LT_PH	= 403,
    CMP_LT_S	= 404,
    CMP_SAF_D	= 405,
    CMP_SAF_S	= 406,
    CMP_SEQ_D	= 407,
    CMP_SEQ_S	= 408,
    CMP_SLE_D	= 409,
    CMP_SLE_S	= 410,
    CMP_SLT_D	= 411,
    CMP_SLT_S	= 412,
    CMP_SUEQ_D	= 413,
    CMP_SUEQ_S	= 414,
    CMP_SULE_D	= 415,
    CMP_SULE_S	= 416,
    CMP_SULT_D	= 417,
    CMP_SULT_S	= 418,
    CMP_SUN_D	= 419,
    CMP_SUN_S	= 420,
    CMP_UEQ_D	= 421,
    CMP_UEQ_S	= 422,
    CMP_ULE_D	= 423,
    CMP_ULE_S	= 424,
    CMP_ULT_D	= 425,
    CMP_ULT_S	= 426,
    CMP_UN_D	= 427,
    CMP_UN_S	= 428,
    CONSTPOOL_ENTRY	= 429,
    COPY_FD_PSEUDO	= 430,
    COPY_FW_PSEUDO	= 431,
    COPY_S_B	= 432,
    COPY_S_D	= 433,
    COPY_S_H	= 434,
    COPY_S_W	= 435,
    COPY_U_B	= 436,
    COPY_U_D	= 437,
    COPY_U_H	= 438,
    COPY_U_W	= 439,
    CTC1	= 440,
    CTC1_MM	= 441,
    CTCMSA	= 442,
    CVT_D32_S	= 443,
    CVT_D32_W	= 444,
    CVT_D32_W_MM	= 445,
    CVT_D64_L	= 446,
    CVT_D64_S	= 447,
    CVT_D64_W	= 448,
    CVT_D_S_MM	= 449,
    CVT_L_D64	= 450,
    CVT_L_D64_MM	= 451,
    CVT_L_S	= 452,
    CVT_L_S_MM	= 453,
    CVT_S_D32	= 454,
    CVT_S_D32_MM	= 455,
    CVT_S_D64	= 456,
    CVT_S_L	= 457,
    CVT_S_W	= 458,
    CVT_S_W_MM	= 459,
    CVT_W_D32	= 460,
    CVT_W_D64	= 461,
    CVT_W_MM	= 462,
    CVT_W_S	= 463,
    CVT_W_S_MM	= 464,
    C_EQ_D32	= 465,
    C_EQ_D64	= 466,
    C_EQ_S	= 467,
    C_F_D32	= 468,
    C_F_D64	= 469,
    C_F_S	= 470,
    C_LE_D32	= 471,
    C_LE_D64	= 472,
    C_LE_S	= 473,
    C_LT_D32	= 474,
    C_LT_D64	= 475,
    C_LT_S	= 476,
    C_NGE_D32	= 477,
    C_NGE_D64	= 478,
    C_NGE_S	= 479,
    C_NGLE_D32	= 480,
    C_NGLE_D64	= 481,
    C_NGLE_S	= 482,
    C_NGL_D32	= 483,
    C_NGL_D64	= 484,
    C_NGL_S	= 485,
    C_NGT_D32	= 486,
    C_NGT_D64	= 487,
    C_NGT_S	= 488,
    C_OLE_D32	= 489,
    C_OLE_D64	= 490,
    C_OLE_S	= 491,
    C_OLT_D32	= 492,
    C_OLT_D64	= 493,
    C_OLT_S	= 494,
    C_SEQ_D32	= 495,
    C_SEQ_D64	= 496,
    C_SEQ_S	= 497,
    C_SF_D32	= 498,
    C_SF_D64	= 499,
    C_SF_S	= 500,
    C_UEQ_D32	= 501,
    C_UEQ_D64	= 502,
    C_UEQ_S	= 503,
    C_ULE_D32	= 504,
    C_ULE_D64	= 505,
    C_ULE_S	= 506,
    C_ULT_D32	= 507,
    C_ULT_D64	= 508,
    C_ULT_S	= 509,
    C_UN_D32	= 510,
    C_UN_D64	= 511,
    C_UN_S	= 512,
    CmpRxRy16	= 513,
    CmpiRxImm16	= 514,
    CmpiRxImmX16	= 515,
    Constant32	= 516,
    DADD	= 517,
    DADDi	= 518,
    DADDiu	= 519,
    DADDu	= 520,
    DAHI	= 521,
    DALIGN	= 522,
    DATI	= 523,
    DAUI	= 524,
    DBITSWAP	= 525,
    DCLO	= 526,
    DCLO_R6	= 527,
    DCLZ	= 528,
    DCLZ_R6	= 529,
    DDIV	= 530,
    DDIVU	= 531,
    DERET	= 532,
    DERET_MM	= 533,
    DEXT	= 534,
    DEXTM	= 535,
    DEXTU	= 536,
    DI	= 537,
    DINS	= 538,
    DINSM	= 539,
    DINSU	= 540,
    DIV	= 541,
    DIVU	= 542,
    DIV_S_B	= 543,
    DIV_S_D	= 544,
    DIV_S_H	= 545,
    DIV_S_W	= 546,
    DIV_U_B	= 547,
    DIV_U_D	= 548,
    DIV_U_H	= 549,
    DIV_U_W	= 550,
    DI_MM	= 551,
    DLSA	= 552,
    DLSA_R6	= 553,
    DMFC0	= 554,
    DMFC1	= 555,
    DMFC2	= 556,
    DMOD	= 557,
    DMODU	= 558,
    DMTC0	= 559,
    DMTC1	= 560,
    DMTC2	= 561,
    DMUH	= 562,
    DMUHU	= 563,
    DMUL	= 564,
    DMULT	= 565,
    DMULTu	= 566,
    DMULU	= 567,
    DMUL_R6	= 568,
    DOTP_S_D	= 569,
    DOTP_S_H	= 570,
    DOTP_S_W	= 571,
    DOTP_U_D	= 572,
    DOTP_U_H	= 573,
    DOTP_U_W	= 574,
    DPADD_S_D	= 575,
    DPADD_S_H	= 576,
    DPADD_S_W	= 577,
    DPADD_U_D	= 578,
    DPADD_U_H	= 579,
    DPADD_U_W	= 580,
    DPAQX_SA_W_PH	= 581,
    DPAQX_S_W_PH	= 582,
    DPAQ_SA_L_W	= 583,
    DPAQ_S_W_PH	= 584,
    DPAU_H_QBL	= 585,
    DPAU_H_QBR	= 586,
    DPAX_W_PH	= 587,
    DPA_W_PH	= 588,
    DPOP	= 589,
    DPSQX_SA_W_PH	= 590,
    DPSQX_S_W_PH	= 591,
    DPSQ_SA_L_W	= 592,
    DPSQ_S_W_PH	= 593,
    DPSUB_S_D	= 594,
    DPSUB_S_H	= 595,
    DPSUB_S_W	= 596,
    DPSUB_U_D	= 597,
    DPSUB_U_H	= 598,
    DPSUB_U_W	= 599,
    DPSU_H_QBL	= 600,
    DPSU_H_QBR	= 601,
    DPSX_W_PH	= 602,
    DPS_W_PH	= 603,
    DROTR	= 604,
    DROTR32	= 605,
    DROTRV	= 606,
    DSBH	= 607,
    DSDIV	= 608,
    DSHD	= 609,
    DSLL	= 610,
    DSLL32	= 611,
    DSLL64_32	= 612,
    DSLLV	= 613,
    DSRA	= 614,
    DSRA32	= 615,
    DSRAV	= 616,
    DSRL	= 617,
    DSRL32	= 618,
    DSRLV	= 619,
    DSUB	= 620,
    DSUBu	= 621,
    DUDIV	= 622,
    DivRxRy16	= 623,
    DivuRxRy16	= 624,
    EHB	= 625,
    EI	= 626,
    EI_MM	= 627,
    ERET	= 628,
    ERET_MM	= 629,
    EXT	= 630,
    EXTP	= 631,
    EXTPDP	= 632,
    EXTPDPV	= 633,
    EXTPV	= 634,
    EXTRV_RS_W	= 635,
    EXTRV_R_W	= 636,
    EXTRV_S_H	= 637,
    EXTRV_W	= 638,
    EXTR_RS_W	= 639,
    EXTR_R_W	= 640,
    EXTR_S_H	= 641,
    EXTR_W	= 642,
    EXTS	= 643,
    EXTS32	= 644,
    EXT_MM	= 645,
    ExtractElementF64	= 646,
    ExtractElementF64_64	= 647,
    FABS_D	= 648,
    FABS_D32	= 649,
    FABS_D64	= 650,
    FABS_MM	= 651,
    FABS_S	= 652,
    FABS_S_MM	= 653,
    FABS_W	= 654,
    FADD_D	= 655,
    FADD_D32	= 656,
    FADD_D64	= 657,
    FADD_MM	= 658,
    FADD_S	= 659,
    FADD_S_MM	= 660,
    FADD_W	= 661,
    FCAF_D	= 662,
    FCAF_W	= 663,
    FCEQ_D	= 664,
    FCEQ_W	= 665,
    FCLASS_D	= 666,
    FCLASS_W	= 667,
    FCLE_D	= 668,
    FCLE_W	= 669,
    FCLT_D	= 670,
    FCLT_W	= 671,
    FCMP_D32	= 672,
    FCMP_D32_MM	= 673,
    FCMP_D64	= 674,
    FCMP_S32	= 675,
    FCMP_S32_MM	= 676,
    FCNE_D	= 677,
    FCNE_W	= 678,
    FCOR_D	= 679,
    FCOR_W	= 680,
    FCUEQ_D	= 681,
    FCUEQ_W	= 682,
    FCULE_D	= 683,
    FCULE_W	= 684,
    FCULT_D	= 685,
    FCULT_W	= 686,
    FCUNE_D	= 687,
    FCUNE_W	= 688,
    FCUN_D	= 689,
    FCUN_W	= 690,
    FDIV_D	= 691,
    FDIV_D32	= 692,
    FDIV_D64	= 693,
    FDIV_MM	= 694,
    FDIV_S	= 695,
    FDIV_S_MM	= 696,
    FDIV_W	= 697,
    FEXDO_H	= 698,
    FEXDO_W	= 699,
    FEXP2_D	= 700,
    FEXP2_D_1_PSEUDO	= 701,
    FEXP2_W	= 702,
    FEXP2_W_1_PSEUDO	= 703,
    FEXUPL_D	= 704,
    FEXUPL_W	= 705,
    FEXUPR_D	= 706,
    FEXUPR_W	= 707,
    FFINT_S_D	= 708,
    FFINT_S_W	= 709,
    FFINT_U_D	= 710,
    FFINT_U_W	= 711,
    FFQL_D	= 712,
    FFQL_W	= 713,
    FFQR_D	= 714,
    FFQR_W	= 715,
    FILL_B	= 716,
    FILL_D	= 717,
    FILL_FD_PSEUDO	= 718,
    FILL_FW_PSEUDO	= 719,
    FILL_H	= 720,
    FILL_W	= 721,
    FLOG2_D	= 722,
    FLOG2_W	= 723,
    FLOOR_L_D64	= 724,
    FLOOR_L_S	= 725,
    FLOOR_W_D32	= 726,
    FLOOR_W_D64	= 727,
    FLOOR_W_MM	= 728,
    FLOOR_W_S	= 729,
    FLOOR_W_S_MM	= 730,
    FMADD_D	= 731,
    FMADD_W	= 732,
    FMAX_A_D	= 733,
    FMAX_A_W	= 734,
    FMAX_D	= 735,
    FMAX_W	= 736,
    FMIN_A_D	= 737,
    FMIN_A_W	= 738,
    FMIN_D	= 739,
    FMIN_W	= 740,
    FMOV_D32	= 741,
    FMOV_D32_MM	= 742,
    FMOV_D64	= 743,
    FMOV_S	= 744,
    FMOV_S_MM	= 745,
    FMSUB_D	= 746,
    FMSUB_W	= 747,
    FMUL_D	= 748,
    FMUL_D32	= 749,
    FMUL_D64	= 750,
    FMUL_MM	= 751,
    FMUL_S	= 752,
    FMUL_S_MM	= 753,
    FMUL_W	= 754,
    FNEG_D32	= 755,
    FNEG_D64	= 756,
    FNEG_MM	= 757,
    FNEG_S	= 758,
    FNEG_S_MM	= 759,
    FRCP_D	= 760,
    FRCP_W	= 761,
    FRINT_D	= 762,
    FRINT_W	= 763,
    FRSQRT_D	= 764,
    FRSQRT_W	= 765,
    FSAF_D	= 766,
    FSAF_W	= 767,
    FSEQ_D	= 768,
    FSEQ_W	= 769,
    FSLE_D	= 770,
    FSLE_W	= 771,
    FSLT_D	= 772,
    FSLT_W	= 773,
    FSNE_D	= 774,
    FSNE_W	= 775,
    FSOR_D	= 776,
    FSOR_W	= 777,
    FSQRT_D	= 778,
    FSQRT_D32	= 779,
    FSQRT_D64	= 780,
    FSQRT_MM	= 781,
    FSQRT_S	= 782,
    FSQRT_S_MM	= 783,
    FSQRT_W	= 784,
    FSUB_D	= 785,
    FSUB_D32	= 786,
    FSUB_D64	= 787,
    FSUB_MM	= 788,
    FSUB_S	= 789,
    FSUB_S_MM	= 790,
    FSUB_W	= 791,
    FSUEQ_D	= 792,
    FSUEQ_W	= 793,
    FSULE_D	= 794,
    FSULE_W	= 795,
    FSULT_D	= 796,
    FSULT_W	= 797,
    FSUNE_D	= 798,
    FSUNE_W	= 799,
    FSUN_D	= 800,
    FSUN_W	= 801,
    FTINT_S_D	= 802,
    FTINT_S_W	= 803,
    FTINT_U_D	= 804,
    FTINT_U_W	= 805,
    FTQ_H	= 806,
    FTQ_W	= 807,
    FTRUNC_S_D	= 808,
    FTRUNC_S_W	= 809,
    FTRUNC_U_D	= 810,
    FTRUNC_U_W	= 811,
    GotPrologue16	= 812,
    HADD_S_D	= 813,
    HADD_S_H	= 814,
    HADD_S_W	= 815,
    HADD_U_D	= 816,
    HADD_U_H	= 817,
    HADD_U_W	= 818,
    HSUB_S_D	= 819,
    HSUB_S_H	= 820,
    HSUB_S_W	= 821,
    HSUB_U_D	= 822,
    HSUB_U_H	= 823,
    HSUB_U_W	= 824,
    ILVEV_B	= 825,
    ILVEV_D	= 826,
    ILVEV_H	= 827,
    ILVEV_W	= 828,
    ILVL_B	= 829,
    ILVL_D	= 830,
    ILVL_H	= 831,
    ILVL_W	= 832,
    ILVOD_B	= 833,
    ILVOD_D	= 834,
    ILVOD_H	= 835,
    ILVOD_W	= 836,
    ILVR_B	= 837,
    ILVR_D	= 838,
    ILVR_H	= 839,
    ILVR_W	= 840,
    INS	= 841,
    INSERT_B	= 842,
    INSERT_B_VIDX_PSEUDO	= 843,
    INSERT_D	= 844,
    INSERT_D_VIDX_PSEUDO	= 845,
    INSERT_FD_PSEUDO	= 846,
    INSERT_FD_VIDX_PSEUDO	= 847,
    INSERT_FW_PSEUDO	= 848,
    INSERT_FW_VIDX_PSEUDO	= 849,
    INSERT_H	= 850,
    INSERT_H_VIDX_PSEUDO	= 851,
    INSERT_W	= 852,
    INSERT_W_VIDX_PSEUDO	= 853,
    INSV	= 854,
    INSVE_B	= 855,
    INSVE_D	= 856,
    INSVE_H	= 857,
    INSVE_W	= 858,
    INS_MM	= 859,
    J	= 860,
    JAL	= 861,
    JALR	= 862,
    JALR16_MM	= 863,
    JALR64	= 864,
    JALR64Pseudo	= 865,
    JALRPseudo	= 866,
    JALRS16_MM	= 867,
    JALRS_MM	= 868,
    JALR_HB	= 869,
    JALR_MM	= 870,
    JALS_MM	= 871,
    JALX	= 872,
    JAL_MM	= 873,
    JIALC	= 874,
    JIC	= 875,
    JR	= 876,
    JR16_MM	= 877,
    JR64	= 878,
    JRADDIUSP	= 879,
    JRC16_MM	= 880,
    JR_HB	= 881,
    JR_HB_R6	= 882,
    JR_MM	= 883,
    J_MM	= 884,
    Jal16	= 885,
    JalB16	= 886,
    JrRa16	= 887,
    JrcRa16	= 888,
    JrcRx16	= 889,
    JumpLinkReg16	= 890,
    LB	= 891,
    LB64	= 892,
    LBUX	= 893,
    LB_MM	= 894,
    LBu	= 895,
    LBu64	= 896,
    LBu_MM	= 897,
    LD	= 898,
    LDC1	= 899,
    LDC164	= 900,
    LDC1_MM	= 901,
    LDC2	= 902,
    LDC2_R6	= 903,
    LDC3	= 904,
    LDI_B	= 905,
    LDI_D	= 906,
    LDI_H	= 907,
    LDI_W	= 908,
    LDL	= 909,
    LDPC	= 910,
    LDR	= 911,
    LDXC1	= 912,
    LDXC164	= 913,
    LD_B	= 914,
    LD_D	= 915,
    LD_H	= 916,
    LD_W	= 917,
    LEA_ADDiu	= 918,
    LEA_ADDiu64	= 919,
    LEA_ADDiu_MM	= 920,
    LH	= 921,
    LH64	= 922,
    LHX	= 923,
    LH_MM	= 924,
    LHu	= 925,
    LHu64	= 926,
    LHu_MM	= 927,
    LI16_MM	= 928,
    LL	= 929,
    LLD	= 930,
    LLD_R6	= 931,
    LL_MM	= 932,
    LL_R6	= 933,
    LOAD_ACC128	= 934,
    LOAD_ACC64	= 935,
    LOAD_ACC64DSP	= 936,
    LOAD_CCOND_DSP	= 937,
    LONG_BRANCH_ADDiu	= 938,
    LONG_BRANCH_DADDiu	= 939,
    LONG_BRANCH_LUi	= 940,
    LSA	= 941,
    LSA_R6	= 942,
    LUXC1	= 943,
    LUXC164	= 944,
    LUXC1_MM	= 945,
    LUi	= 946,
    LUi64	= 947,
    LUi_MM	= 948,
    LW	= 949,
    LW64	= 950,
    LWC1	= 951,
    LWC1_MM	= 952,
    LWC2	= 953,
    LWC2_R6	= 954,
    LWC3	= 955,
    LWL	= 956,
    LWL64	= 957,
    LWL_MM	= 958,
    LWPC	= 959,
    LWR	= 960,
    LWR64	= 961,
    LWR_MM	= 962,
    LWUPC	= 963,
    LWU_MM	= 964,
    LWX	= 965,
    LWXC1	= 966,
    LWXC1_MM	= 967,
    LW_MM	= 968,
    LWu	= 969,
    LbRxRyOffMemX16	= 970,
    LbuRxRyOffMemX16	= 971,
    LhRxRyOffMemX16	= 972,
    LhuRxRyOffMemX16	= 973,
    LiRxImm16	= 974,
    LiRxImmAlignX16	= 975,
    LiRxImmX16	= 976,
    LoadAddr32Imm	= 977,
    LoadAddr32Reg	= 978,
    LoadImm32Reg	= 979,
    LoadImm64Reg	= 980,
    LwConstant32	= 981,
    LwRxPcTcp16	= 982,
    LwRxPcTcpX16	= 983,
    LwRxRyOffMemX16	= 984,
    LwRxSpImmX16	= 985,
    MADD	= 986,
    MADDF_D	= 987,
    MADDF_S	= 988,
    MADDR_Q_H	= 989,
    MADDR_Q_W	= 990,
    MADDU	= 991,
    MADDU_DSP	= 992,
    MADDU_MM	= 993,
    MADDV_B	= 994,
    MADDV_D	= 995,
    MADDV_H	= 996,
    MADDV_W	= 997,
    MADD_D32	= 998,
    MADD_D32_MM	= 999,
    MADD_D64	= 1000,
    MADD_DSP	= 1001,
    MADD_MM	= 1002,
    MADD_Q_H	= 1003,
    MADD_Q_W	= 1004,
    MADD_S	= 1005,
    MADD_S_MM	= 1006,
    MAQ_SA_W_PHL	= 1007,
    MAQ_SA_W_PHR	= 1008,
    MAQ_S_W_PHL	= 1009,
    MAQ_S_W_PHR	= 1010,
    MAXA_D	= 1011,
    MAXA_S	= 1012,
    MAXI_S_B	= 1013,
    MAXI_S_D	= 1014,
    MAXI_S_H	= 1015,
    MAXI_S_W	= 1016,
    MAXI_U_B	= 1017,
    MAXI_U_D	= 1018,
    MAXI_U_H	= 1019,
    MAXI_U_W	= 1020,
    MAX_A_B	= 1021,
    MAX_A_D	= 1022,
    MAX_A_H	= 1023,
    MAX_A_W	= 1024,
    MAX_D	= 1025,
    MAX_S	= 1026,
    MAX_S_B	= 1027,
    MAX_S_D	= 1028,
    MAX_S_H	= 1029,
    MAX_S_W	= 1030,
    MAX_U_B	= 1031,
    MAX_U_D	= 1032,
    MAX_U_H	= 1033,
    MAX_U_W	= 1034,
    MFC0	= 1035,
    MFC1	= 1036,
    MFC1_MM	= 1037,
    MFC2	= 1038,
    MFHC1_D32	= 1039,
    MFHC1_D64	= 1040,
    MFHC1_MM	= 1041,
    MFHI	= 1042,
    MFHI16_MM	= 1043,
    MFHI64	= 1044,
    MFHI_DSP	= 1045,
    MFHI_MM	= 1046,
    MFLO	= 1047,
    MFLO16_MM	= 1048,
    MFLO64	= 1049,
    MFLO_DSP	= 1050,
    MFLO_MM	= 1051,
    MINA_D	= 1052,
    MINA_S	= 1053,
    MINI_S_B	= 1054,
    MINI_S_D	= 1055,
    MINI_S_H	= 1056,
    MINI_S_W	= 1057,
    MINI_U_B	= 1058,
    MINI_U_D	= 1059,
    MINI_U_H	= 1060,
    MINI_U_W	= 1061,
    MIN_A_B	= 1062,
    MIN_A_D	= 1063,
    MIN_A_H	= 1064,
    MIN_A_W	= 1065,
    MIN_D	= 1066,
    MIN_S	= 1067,
    MIN_S_B	= 1068,
    MIN_S_D	= 1069,
    MIN_S_H	= 1070,
    MIN_S_W	= 1071,
    MIN_U_B	= 1072,
    MIN_U_D	= 1073,
    MIN_U_H	= 1074,
    MIN_U_W	= 1075,
    MIPSeh_return32	= 1076,
    MIPSeh_return64	= 1077,
    MOD	= 1078,
    MODSUB	= 1079,
    MODU	= 1080,
    MOD_S_B	= 1081,
    MOD_S_D	= 1082,
    MOD_S_H	= 1083,
    MOD_S_W	= 1084,
    MOD_U_B	= 1085,
    MOD_U_D	= 1086,
    MOD_U_H	= 1087,
    MOD_U_W	= 1088,
    MOVE16_MM	= 1089,
    MOVE_V	= 1090,
    MOVF_D32	= 1091,
    MOVF_D32_MM	= 1092,
    MOVF_D64	= 1093,
    MOVF_I	= 1094,
    MOVF_I64	= 1095,
    MOVF_I_MM	= 1096,
    MOVF_S	= 1097,
    MOVF_S_MM	= 1098,
    MOVN_I64_D64	= 1099,
    MOVN_I64_I	= 1100,
    MOVN_I64_I64	= 1101,
    MOVN_I64_S	= 1102,
    MOVN_I_D32	= 1103,
    MOVN_I_D32_MM	= 1104,
    MOVN_I_D64	= 1105,
    MOVN_I_I	= 1106,
    MOVN_I_I64	= 1107,
    MOVN_I_MM	= 1108,
    MOVN_I_S	= 1109,
    MOVN_I_S_MM	= 1110,
    MOVT_D32	= 1111,
    MOVT_D32_MM	= 1112,
    MOVT_D64	= 1113,
    MOVT_I	= 1114,
    MOVT_I64	= 1115,
    MOVT_I_MM	= 1116,
    MOVT_S	= 1117,
    MOVT_S_MM	= 1118,
    MOVZ_I64_D64	= 1119,
    MOVZ_I64_I	= 1120,
    MOVZ_I64_I64	= 1121,
    MOVZ_I64_S	= 1122,
    MOVZ_I_D32	= 1123,
    MOVZ_I_D32_MM	= 1124,
    MOVZ_I_D64	= 1125,
    MOVZ_I_I	= 1126,
    MOVZ_I_I64	= 1127,
    MOVZ_I_MM	= 1128,
    MOVZ_I_S	= 1129,
    MOVZ_I_S_MM	= 1130,
    MSUB	= 1131,
    MSUBF_D	= 1132,
    MSUBF_S	= 1133,
    MSUBR_Q_H	= 1134,
    MSUBR_Q_W	= 1135,
    MSUBU	= 1136,
    MSUBU_DSP	= 1137,
    MSUBU_MM	= 1138,
    MSUBV_B	= 1139,
    MSUBV_D	= 1140,
    MSUBV_H	= 1141,
    MSUBV_W	= 1142,
    MSUB_D32	= 1143,
    MSUB_D32_MM	= 1144,
    MSUB_D64	= 1145,
    MSUB_DSP	= 1146,
    MSUB_MM	= 1147,
    MSUB_Q_H	= 1148,
    MSUB_Q_W	= 1149,
    MSUB_S	= 1150,
    MSUB_S_MM	= 1151,
    MTC0	= 1152,
    MTC1	= 1153,
    MTC1_MM	= 1154,
    MTC2	= 1155,
    MTHC1_D32	= 1156,
    MTHC1_D64	= 1157,
    MTHC1_MM	= 1158,
    MTHI	= 1159,
    MTHI64	= 1160,
    MTHI_DSP	= 1161,
    MTHI_MM	= 1162,
    MTHLIP	= 1163,
    MTLO	= 1164,
    MTLO64	= 1165,
    MTLO_DSP	= 1166,
    MTLO_MM	= 1167,
    MTM0	= 1168,
    MTM1	= 1169,
    MTM2	= 1170,
    MTP0	= 1171,
    MTP1	= 1172,
    MTP2	= 1173,
    MUH	= 1174,
    MUHU	= 1175,
    MUL	= 1176,
    MULEQ_S_W_PHL	= 1177,
    MULEQ_S_W_PHR	= 1178,
    MULEU_S_PH_QBL	= 1179,
    MULEU_S_PH_QBR	= 1180,
    MULQ_RS_PH	= 1181,
    MULQ_RS_W	= 1182,
    MULQ_S_PH	= 1183,
    MULQ_S_W	= 1184,
    MULR_Q_H	= 1185,
    MULR_Q_W	= 1186,
    MULSAQ_S_W_PH	= 1187,
    MULSA_W_PH	= 1188,
    MULT	= 1189,
    MULTU_DSP	= 1190,
    MULT_DSP	= 1191,
    MULT_MM	= 1192,
    MULTu	= 1193,
    MULTu_MM	= 1194,
    MULU	= 1195,
    MULV_B	= 1196,
    MULV_D	= 1197,
    MULV_H	= 1198,
    MULV_W	= 1199,
    MUL_MM	= 1200,
    MUL_PH	= 1201,
    MUL_Q_H	= 1202,
    MUL_Q_W	= 1203,
    MUL_R6	= 1204,
    MUL_S_PH	= 1205,
    Mfhi16	= 1206,
    Mflo16	= 1207,
    Move32R16	= 1208,
    MoveR3216	= 1209,
    MultRxRy16	= 1210,
    MultRxRyRz16	= 1211,
    MultuRxRy16	= 1212,
    MultuRxRyRz16	= 1213,
    NLOC_B	= 1214,
    NLOC_D	= 1215,
    NLOC_H	= 1216,
    NLOC_W	= 1217,
    NLZC_B	= 1218,
    NLZC_D	= 1219,
    NLZC_H	= 1220,
    NLZC_W	= 1221,
    NMADD_D32	= 1222,
    NMADD_D32_MM	= 1223,
    NMADD_D64	= 1224,
    NMADD_S	= 1225,
    NMADD_S_MM	= 1226,
    NMSUB_D32	= 1227,
    NMSUB_D32_MM	= 1228,
    NMSUB_D64	= 1229,
    NMSUB_S	= 1230,
    NMSUB_S_MM	= 1231,
    NOP	= 1232,
    NOR	= 1233,
    NOR64	= 1234,
    NORI_B	= 1235,
    NOR_MM	= 1236,
    NOR_V	= 1237,
    NOR_V_D_PSEUDO	= 1238,
    NOR_V_H_PSEUDO	= 1239,
    NOR_V_W_PSEUDO	= 1240,
    NOT16_MM	= 1241,
    NegRxRy16	= 1242,
    NotRxRy16	= 1243,
    OR	= 1244,
    OR16_MM	= 1245,
    OR64	= 1246,
    ORI_B	= 1247,
    OR_MM	= 1248,
    OR_V	= 1249,
    OR_V_D_PSEUDO	= 1250,
    OR_V_H_PSEUDO	= 1251,
    OR_V_W_PSEUDO	= 1252,
    ORi	= 1253,
    ORi64	= 1254,
    ORi_MM	= 1255,
    OrRxRxRy16	= 1256,
    PACKRL_PH	= 1257,
    PAUSE	= 1258,
    PCKEV_B	= 1259,
    PCKEV_D	= 1260,
    PCKEV_H	= 1261,
    PCKEV_W	= 1262,
    PCKOD_B	= 1263,
    PCKOD_D	= 1264,
    PCKOD_H	= 1265,
    PCKOD_W	= 1266,
    PCNT_B	= 1267,
    PCNT_D	= 1268,
    PCNT_H	= 1269,
    PCNT_W	= 1270,
    PICK_PH	= 1271,
    PICK_QB	= 1272,
    POP	= 1273,
    PRECEQU_PH_QBL	= 1274,
    PRECEQU_PH_QBLA	= 1275,
    PRECEQU_PH_QBR	= 1276,
    PRECEQU_PH_QBRA	= 1277,
    PRECEQ_W_PHL	= 1278,
    PRECEQ_W_PHR	= 1279,
    PRECEU_PH_QBL	= 1280,
    PRECEU_PH_QBLA	= 1281,
    PRECEU_PH_QBR	= 1282,
    PRECEU_PH_QBRA	= 1283,
    PRECRQU_S_QB_PH	= 1284,
    PRECRQ_PH_W	= 1285,
    PRECRQ_QB_PH	= 1286,
    PRECRQ_RS_PH_W	= 1287,
    PRECR_QB_PH	= 1288,
    PRECR_SRA_PH_W	= 1289,
    PRECR_SRA_R_PH_W	= 1290,
    PREF	= 1291,
    PREF_R6	= 1292,
    PREPEND	= 1293,
    PseudoCMPU_EQ_QB	= 1294,
    PseudoCMPU_LE_QB	= 1295,
    PseudoCMPU_LT_QB	= 1296,
    PseudoCMP_EQ_PH	= 1297,
    PseudoCMP_LE_PH	= 1298,
    PseudoCMP_LT_PH	= 1299,
    PseudoCVT_D32_W	= 1300,
    PseudoCVT_D64_L	= 1301,
    PseudoCVT_D64_W	= 1302,
    PseudoCVT_S_L	= 1303,
    PseudoCVT_S_W	= 1304,
    PseudoDMULT	= 1305,
    PseudoDMULTu	= 1306,
    PseudoDSDIV	= 1307,
    PseudoDUDIV	= 1308,
    PseudoIndirectBranch	= 1309,
    PseudoIndirectBranch64	= 1310,
    PseudoMADD	= 1311,
    PseudoMADDU	= 1312,
    PseudoMFHI	= 1313,
    PseudoMFHI64	= 1314,
    PseudoMFLO	= 1315,
    PseudoMFLO64	= 1316,
    PseudoMSUB	= 1317,
    PseudoMSUBU	= 1318,
    PseudoMTLOHI	= 1319,
    PseudoMTLOHI64	= 1320,
    PseudoMTLOHI_DSP	= 1321,
    PseudoMULT	= 1322,
    PseudoMULTu	= 1323,
    PseudoPICK_PH	= 1324,
    PseudoPICK_QB	= 1325,
    PseudoReturn	= 1326,
    PseudoReturn64	= 1327,
    PseudoSDIV	= 1328,
    PseudoUDIV	= 1329,
    RADDU_W_QB	= 1330,
    RDDSP	= 1331,
    RDHWR	= 1332,
    RDHWR64	= 1333,
    REPLV_PH	= 1334,
    REPLV_QB	= 1335,
    REPL_PH	= 1336,
    REPL_QB	= 1337,
    RINT_D	= 1338,
    RINT_S	= 1339,
    ROTR	= 1340,
    ROTRV	= 1341,
    ROTRV_MM	= 1342,
    ROTR_MM	= 1343,
    ROUND_L_D64	= 1344,
    ROUND_L_S	= 1345,
    ROUND_W_D32	= 1346,
    ROUND_W_D64	= 1347,
    ROUND_W_MM	= 1348,
    ROUND_W_S	= 1349,
    ROUND_W_S_MM	= 1350,
    Restore16	= 1351,
    RestoreX16	= 1352,
    RetRA	= 1353,
    RetRA16	= 1354,
    SAT_S_B	= 1355,
    SAT_S_D	= 1356,
    SAT_S_H	= 1357,
    SAT_S_W	= 1358,
    SAT_U_B	= 1359,
    SAT_U_D	= 1360,
    SAT_U_H	= 1361,
    SAT_U_W	= 1362,
    SB	= 1363,
    SB64	= 1364,
    SB_MM	= 1365,
    SC	= 1366,
    SCD	= 1367,
    SCD_R6	= 1368,
    SC_MM	= 1369,
    SC_R6	= 1370,
    SD	= 1371,
    SDBBP	= 1372,
    SDBBP_R6	= 1373,
    SDC1	= 1374,
    SDC164	= 1375,
    SDC1_MM	= 1376,
    SDC2	= 1377,
    SDC2_R6	= 1378,
    SDC3	= 1379,
    SDIV	= 1380,
    SDIV_MM	= 1381,
    SDL	= 1382,
    SDR	= 1383,
    SDXC1	= 1384,
    SDXC164	= 1385,
    SEB	= 1386,
    SEB64	= 1387,
    SEB_MM	= 1388,
    SEH	= 1389,
    SEH64	= 1390,
    SEH_MM	= 1391,
    SELEQZ	= 1392,
    SELEQZ64	= 1393,
    SELEQZ_D	= 1394,
    SELEQZ_S	= 1395,
    SELNEZ	= 1396,
    SELNEZ64	= 1397,
    SELNEZ_D	= 1398,
    SELNEZ_S	= 1399,
    SEL_D	= 1400,
    SEL_S	= 1401,
    SEQ	= 1402,
    SEQi	= 1403,
    SH	= 1404,
    SH64	= 1405,
    SHF_B	= 1406,
    SHF_H	= 1407,
    SHF_W	= 1408,
    SHILO	= 1409,
    SHILOV	= 1410,
    SHLLV_PH	= 1411,
    SHLLV_QB	= 1412,
    SHLLV_S_PH	= 1413,
    SHLLV_S_W	= 1414,
    SHLL_PH	= 1415,
    SHLL_QB	= 1416,
    SHLL_S_PH	= 1417,
    SHLL_S_W	= 1418,
    SHRAV_PH	= 1419,
    SHRAV_QB	= 1420,
    SHRAV_R_PH	= 1421,
    SHRAV_R_QB	= 1422,
    SHRAV_R_W	= 1423,
    SHRA_PH	= 1424,
    SHRA_QB	= 1425,
    SHRA_R_PH	= 1426,
    SHRA_R_QB	= 1427,
    SHRA_R_W	= 1428,
    SHRLV_PH	= 1429,
    SHRLV_QB	= 1430,
    SHRL_PH	= 1431,
    SHRL_QB	= 1432,
    SH_MM	= 1433,
    SLDI_B	= 1434,
    SLDI_D	= 1435,
    SLDI_H	= 1436,
    SLDI_W	= 1437,
    SLD_B	= 1438,
    SLD_D	= 1439,
    SLD_H	= 1440,
    SLD_W	= 1441,
    SLL	= 1442,
    SLL16_MM	= 1443,
    SLL64_32	= 1444,
    SLL64_64	= 1445,
    SLLI_B	= 1446,
    SLLI_D	= 1447,
    SLLI_H	= 1448,
    SLLI_W	= 1449,
    SLLV	= 1450,
    SLLV_MM	= 1451,
    SLL_B	= 1452,
    SLL_D	= 1453,
    SLL_H	= 1454,
    SLL_MM	= 1455,
    SLL_W	= 1456,
    SLT	= 1457,
    SLT64	= 1458,
    SLT_MM	= 1459,
    SLTi	= 1460,
    SLTi64	= 1461,
    SLTi_MM	= 1462,
    SLTiu	= 1463,
    SLTiu64	= 1464,
    SLTiu_MM	= 1465,
    SLTu	= 1466,
    SLTu64	= 1467,
    SLTu_MM	= 1468,
    SNE	= 1469,
    SNEi	= 1470,
    SNZ_B_PSEUDO	= 1471,
    SNZ_D_PSEUDO	= 1472,
    SNZ_H_PSEUDO	= 1473,
    SNZ_V_PSEUDO	= 1474,
    SNZ_W_PSEUDO	= 1475,
    SPLATI_B	= 1476,
    SPLATI_D	= 1477,
    SPLATI_H	= 1478,
    SPLATI_W	= 1479,
    SPLAT_B	= 1480,
    SPLAT_D	= 1481,
    SPLAT_H	= 1482,
    SPLAT_W	= 1483,
    SRA	= 1484,
    SRAI_B	= 1485,
    SRAI_D	= 1486,
    SRAI_H	= 1487,
    SRAI_W	= 1488,
    SRARI_B	= 1489,
    SRARI_D	= 1490,
    SRARI_H	= 1491,
    SRARI_W	= 1492,
    SRAR_B	= 1493,
    SRAR_D	= 1494,
    SRAR_H	= 1495,
    SRAR_W	= 1496,
    SRAV	= 1497,
    SRAV_MM	= 1498,
    SRA_B	= 1499,
    SRA_D	= 1500,
    SRA_H	= 1501,
    SRA_MM	= 1502,
    SRA_W	= 1503,
    SRL	= 1504,
    SRL16_MM	= 1505,
    SRLI_B	= 1506,
    SRLI_D	= 1507,
    SRLI_H	= 1508,
    SRLI_W	= 1509,
    SRLRI_B	= 1510,
    SRLRI_D	= 1511,
    SRLRI_H	= 1512,
    SRLRI_W	= 1513,
    SRLR_B	= 1514,
    SRLR_D	= 1515,
    SRLR_H	= 1516,
    SRLR_W	= 1517,
    SRLV	= 1518,
    SRLV_MM	= 1519,
    SRL_B	= 1520,
    SRL_D	= 1521,
    SRL_H	= 1522,
    SRL_MM	= 1523,
    SRL_W	= 1524,
    SSNOP	= 1525,
    STORE_ACC128	= 1526,
    STORE_ACC64	= 1527,
    STORE_ACC64DSP	= 1528,
    STORE_CCOND_DSP	= 1529,
    ST_B	= 1530,
    ST_D	= 1531,
    ST_H	= 1532,
    ST_W	= 1533,
    SUB	= 1534,
    SUBQH_PH	= 1535,
    SUBQH_R_PH	= 1536,
    SUBQH_R_W	= 1537,
    SUBQH_W	= 1538,
    SUBQ_PH	= 1539,
    SUBQ_S_PH	= 1540,
    SUBQ_S_W	= 1541,
    SUBSUS_U_B	= 1542,
    SUBSUS_U_D	= 1543,
    SUBSUS_U_H	= 1544,
    SUBSUS_U_W	= 1545,
    SUBSUU_S_B	= 1546,
    SUBSUU_S_D	= 1547,
    SUBSUU_S_H	= 1548,
    SUBSUU_S_W	= 1549,
    SUBS_S_B	= 1550,
    SUBS_S_D	= 1551,
    SUBS_S_H	= 1552,
    SUBS_S_W	= 1553,
    SUBS_U_B	= 1554,
    SUBS_U_D	= 1555,
    SUBS_U_H	= 1556,
    SUBS_U_W	= 1557,
    SUBU16_MM	= 1558,
    SUBUH_QB	= 1559,
    SUBUH_R_QB	= 1560,
    SUBU_PH	= 1561,
    SUBU_QB	= 1562,
    SUBU_S_PH	= 1563,
    SUBU_S_QB	= 1564,
    SUBVI_B	= 1565,
    SUBVI_D	= 1566,
    SUBVI_H	= 1567,
    SUBVI_W	= 1568,
    SUBV_B	= 1569,
    SUBV_D	= 1570,
    SUBV_H	= 1571,
    SUBV_W	= 1572,
    SUB_MM	= 1573,
    SUBu	= 1574,
    SUBu_MM	= 1575,
    SUXC1	= 1576,
    SUXC164	= 1577,
    SUXC1_MM	= 1578,
    SW	= 1579,
    SW64	= 1580,
    SWC1	= 1581,
    SWC1_MM	= 1582,
    SWC2	= 1583,
    SWC2_R6	= 1584,
    SWC3	= 1585,
    SWL	= 1586,
    SWL64	= 1587,
    SWL_MM	= 1588,
    SWR	= 1589,
    SWR64	= 1590,
    SWR_MM	= 1591,
    SWXC1	= 1592,
    SWXC1_MM	= 1593,
    SW_MM	= 1594,
    SYNC	= 1595,
    SYNC_MM	= 1596,
    SYSCALL	= 1597,
    SYSCALL_MM	= 1598,
    SZ_B_PSEUDO	= 1599,
    SZ_D_PSEUDO	= 1600,
    SZ_H_PSEUDO	= 1601,
    SZ_V_PSEUDO	= 1602,
    SZ_W_PSEUDO	= 1603,
    Save16	= 1604,
    SaveX16	= 1605,
    SbRxRyOffMemX16	= 1606,
    SebRx16	= 1607,
    SehRx16	= 1608,
    SelBeqZ	= 1609,
    SelBneZ	= 1610,
    SelTBteqZCmp	= 1611,
    SelTBteqZCmpi	= 1612,
    SelTBteqZSlt	= 1613,
    SelTBteqZSlti	= 1614,
    SelTBteqZSltiu	= 1615,
    SelTBteqZSltu	= 1616,
    SelTBtneZCmp	= 1617,
    SelTBtneZCmpi	= 1618,
    SelTBtneZSlt	= 1619,
    SelTBtneZSlti	= 1620,
    SelTBtneZSltiu	= 1621,
    SelTBtneZSltu	= 1622,
    ShRxRyOffMemX16	= 1623,
    SllX16	= 1624,
    SllvRxRy16	= 1625,
    SltCCRxRy16	= 1626,
    SltRxRy16	= 1627,
    SltiCCRxImmX16	= 1628,
    SltiRxImm16	= 1629,
    SltiRxImmX16	= 1630,
    SltiuCCRxImmX16	= 1631,
    SltiuRxImm16	= 1632,
    SltiuRxImmX16	= 1633,
    SltuCCRxRy16	= 1634,
    SltuRxRy16	= 1635,
    SltuRxRyRz16	= 1636,
    SraX16	= 1637,
    SravRxRy16	= 1638,
    SrlX16	= 1639,
    SrlvRxRy16	= 1640,
    SubuRxRyRz16	= 1641,
    SwRxRyOffMemX16	= 1642,
    SwRxSpImmX16	= 1643,
    TAILCALL	= 1644,
    TAILCALL64_R	= 1645,
    TAILCALL_R	= 1646,
    TEQ	= 1647,
    TEQI	= 1648,
    TEQI_MM	= 1649,
    TEQ_MM	= 1650,
    TGE	= 1651,
    TGEI	= 1652,
    TGEIU	= 1653,
    TGEIU_MM	= 1654,
    TGEI_MM	= 1655,
    TGEU	= 1656,
    TGEU_MM	= 1657,
    TGE_MM	= 1658,
    TLBP	= 1659,
    TLBP_MM	= 1660,
    TLBR	= 1661,
    TLBR_MM	= 1662,
    TLBWI	= 1663,
    TLBWI_MM	= 1664,
    TLBWR	= 1665,
    TLBWR_MM	= 1666,
    TLT	= 1667,
    TLTI	= 1668,
    TLTIU_MM	= 1669,
    TLTI_MM	= 1670,
    TLTU	= 1671,
    TLTU_MM	= 1672,
    TLT_MM	= 1673,
    TNE	= 1674,
    TNEI	= 1675,
    TNEI_MM	= 1676,
    TNE_MM	= 1677,
    TRAP	= 1678,
    TRUNC_L_D64	= 1679,
    TRUNC_L_S	= 1680,
    TRUNC_W_D32	= 1681,
    TRUNC_W_D64	= 1682,
    TRUNC_W_MM	= 1683,
    TRUNC_W_S	= 1684,
    TRUNC_W_S_MM	= 1685,
    TTLTIU	= 1686,
    UDIV	= 1687,
    UDIV_MM	= 1688,
    V3MULU	= 1689,
    VMM0	= 1690,
    VMULU	= 1691,
    VSHF_B	= 1692,
    VSHF_D	= 1693,
    VSHF_H	= 1694,
    VSHF_W	= 1695,
    WAIT	= 1696,
    WAIT_MM	= 1697,
    WRDSP	= 1698,
    WSBH	= 1699,
    WSBH_MM	= 1700,
    XOR	= 1701,
    XOR16_MM	= 1702,
    XOR64	= 1703,
    XORI_B	= 1704,
    XOR_MM	= 1705,
    XOR_V	= 1706,
    XOR_V_D_PSEUDO	= 1707,
    XOR_V_H_PSEUDO	= 1708,
    XOR_V_W_PSEUDO	= 1709,
    XORi	= 1710,
    XORi64	= 1711,
    XORi_MM	= 1712,
    XorRxRxRy16	= 1713,
    INSTRUCTION_LIST_END = 1714
  };
namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDU	= 1,
    II_ADDIU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_DMFC1	= 20,
    II_DMTC1	= 21,
    II_DMUL	= 22,
    II_DMULT	= 23,
    II_DMULTU	= 24,
    II_POP	= 25,
    II_DROTR	= 26,
    II_DROTR32	= 27,
    II_DROTRV	= 28,
    II_DDIV	= 29,
    II_DSLL	= 30,
    II_DSLL32	= 31,
    II_DSLLV	= 32,
    II_DSRA	= 33,
    II_DSRA32	= 34,
    II_DSRAV	= 35,
    II_DSRL	= 36,
    II_DSRL32	= 37,
    II_DSRLV	= 38,
    II_DSUB	= 39,
    II_DSUBU	= 40,
    II_DDIVU	= 41,
    II_ABS	= 42,
    II_ADD_D	= 43,
    II_ADD_S	= 44,
    II_DIV_D	= 45,
    II_DIV_S	= 46,
    II_FLOOR	= 47,
    II_MOV_D	= 48,
    II_MOV_S	= 49,
    II_MUL_D	= 50,
    II_MUL_S	= 51,
    II_NEG	= 52,
    II_SQRT_D	= 53,
    II_SQRT_S	= 54,
    II_SUB_D	= 55,
    II_SUB_S	= 56,
    II_LB	= 57,
    II_LBU	= 58,
    II_LD	= 59,
    II_LDC1	= 60,
    II_LDL	= 61,
    II_LDR	= 62,
    II_LDXC1	= 63,
    II_LH	= 64,
    II_LHU	= 65,
    II_LUXC1	= 66,
    II_LUI	= 67,
    II_LW	= 68,
    II_LWC1	= 69,
    II_LWL	= 70,
    II_LWR	= 71,
    II_LWU	= 72,
    II_LWXC1	= 73,
    II_MADD	= 74,
    II_MADDU	= 75,
    II_MADD_D	= 76,
    II_MADD_S	= 77,
    II_MFC1	= 78,
    II_MFHC1	= 79,
    II_MFHI_MFLO	= 80,
    II_MOVF_D	= 81,
    II_MOVF	= 82,
    II_MOVF_S	= 83,
    II_MOVN_D	= 84,
    II_MOVN	= 85,
    II_MOVN_S	= 86,
    II_MOVT_D	= 87,
    II_MOVT	= 88,
    II_MOVT_S	= 89,
    II_MOVZ_D	= 90,
    II_MOVZ	= 91,
    II_MOVZ_S	= 92,
    II_MSUB	= 93,
    II_MSUBU	= 94,
    II_MSUB_D	= 95,
    II_MSUB_S	= 96,
    II_MTC1	= 97,
    II_MTHC1	= 98,
    II_MTHI_MTLO	= 99,
    II_MUL	= 100,
    II_MULT	= 101,
    II_MULTU	= 102,
    II_NMADD_D	= 103,
    II_NMADD_S	= 104,
    II_NMSUB_D	= 105,
    II_NMSUB_S	= 106,
    II_NOR	= 107,
    II_OR	= 108,
    II_ORI	= 109,
    II_DIV	= 110,
    II_DIVU	= 111,
    II_RDHWR	= 112,
    II_ROTR	= 113,
    II_ROTRV	= 114,
    II_ROUND	= 115,
    II_RESTORE	= 116,
    II_SB	= 117,
    II_SD	= 118,
    II_SDC1	= 119,
    II_SDL	= 120,
    II_SDR	= 121,
    II_SDXC1	= 122,
    II_SEB	= 123,
    II_SEH	= 124,
    II_SEQ_SNE	= 125,
    II_SEQI_SNEI	= 126,
    II_SH	= 127,
    II_SLL	= 128,
    II_SLLV	= 129,
    II_SLT_SLTU	= 130,
    II_SLTI_SLTIU	= 131,
    II_SRA	= 132,
    II_SRAV	= 133,
    II_SRL	= 134,
    II_SRLV	= 135,
    II_SUBU	= 136,
    II_SUXC1	= 137,
    II_SW	= 138,
    II_SWC1	= 139,
    II_SWL	= 140,
    II_SWR	= 141,
    II_SWXC1	= 142,
    II_SAVE	= 143,
    II_TRUNC	= 144,
    II_XOR	= 145,
    II_XORI	= 146,
    SCHED_LIST_END = 147
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

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
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
  { 20,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #20 = ABSQ_S_PH
  { 21,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #21 = ABSQ_S_QB
  { 22,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #22 = ABSQ_S_W
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #23 = ADD
  { 24,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #24 = ADDIUPC
  { 25,	2,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #25 = ADDIUR1SP_MM
  { 26,	3,	1,	0,	2,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #26 = ADDIUR2_MM
  { 27,	3,	1,	0,	2,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #27 = ADDIUS5_MM
  { 28,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #28 = ADDIUSP_MM
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #29 = ADDQH_PH
  { 30,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #30 = ADDQH_R_PH
  { 31,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #31 = ADDQH_R_W
  { 32,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #32 = ADDQH_W
  { 33,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #33 = ADDQ_PH
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #34 = ADDQ_S_PH
  { 35,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #35 = ADDQ_S_W
  { 36,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #36 = ADDSC
  { 37,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #37 = ADDS_A_B
  { 38,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #38 = ADDS_A_D
  { 39,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #39 = ADDS_A_H
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #40 = ADDS_A_W
  { 41,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #41 = ADDS_S_B
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #42 = ADDS_S_D
  { 43,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #43 = ADDS_S_H
  { 44,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #44 = ADDS_S_W
  { 45,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #45 = ADDS_U_B
  { 46,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #46 = ADDS_U_D
  { 47,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #47 = ADDS_U_H
  { 48,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #48 = ADDS_U_W
  { 49,	3,	1,	1,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #49 = ADDU16_MM
  { 50,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #50 = ADDUH_QB
  { 51,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #51 = ADDUH_R_QB
  { 52,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #52 = ADDU_PH
  { 53,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #53 = ADDU_QB
  { 54,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #54 = ADDU_S_PH
  { 55,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #55 = ADDU_S_QB
  { 56,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #56 = ADDVI_B
  { 57,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #57 = ADDVI_D
  { 58,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #58 = ADDVI_H
  { 59,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #59 = ADDVI_W
  { 60,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #60 = ADDV_B
  { 61,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #61 = ADDV_D
  { 62,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #62 = ADDV_H
  { 63,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #63 = ADDV_W
  { 64,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #64 = ADDWC
  { 65,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #65 = ADD_A_B
  { 66,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #66 = ADD_A_D
  { 67,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #67 = ADD_A_H
  { 68,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #68 = ADD_A_W
  { 69,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #69 = ADD_MM
  { 70,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #70 = ADDi
  { 71,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #71 = ADDi_MM
  { 72,	3,	1,	2,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #72 = ADDiu
  { 73,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #73 = ADDiu_MM
  { 74,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #74 = ADDu
  { 75,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #75 = ADDu_MM
  { 76,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #76 = ADJCALLSTACKDOWN
  { 77,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8,0,nullptr },  // Inst #77 = ADJCALLSTACKUP
  { 78,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #78 = ALIGN
  { 79,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #79 = ALUIPC
  { 80,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #80 = AND
  { 81,	3,	1,	4,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #81 = AND16_MM
  { 82,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #82 = AND64
  { 83,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #83 = ANDI_B
  { 84,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #84 = AND_MM
  { 85,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #85 = AND_V
  { 86,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #86 = AND_V_D_PSEUDO
  { 87,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #87 = AND_V_H_PSEUDO
  { 88,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #88 = AND_V_W_PSEUDO
  { 89,	3,	1,	5,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #89 = ANDi
  { 90,	3,	1,	4,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #90 = ANDi64
  { 91,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #91 = ANDi_MM
  { 92,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #92 = APPEND
  { 93,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #93 = ASUB_S_B
  { 94,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #94 = ASUB_S_D
  { 95,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #95 = ASUB_S_H
  { 96,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #96 = ASUB_S_W
  { 97,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #97 = ASUB_U_B
  { 98,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #98 = ASUB_U_D
  { 99,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #99 = ASUB_U_H
  { 100,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #100 = ASUB_U_W
  { 101,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #101 = ATOMIC_CMP_SWAP_I16
  { 102,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #102 = ATOMIC_CMP_SWAP_I32
  { 103,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #103 = ATOMIC_CMP_SWAP_I64
  { 104,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #104 = ATOMIC_CMP_SWAP_I8
  { 105,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #105 = ATOMIC_LOAD_ADD_I16
  { 106,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #106 = ATOMIC_LOAD_ADD_I32
  { 107,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #107 = ATOMIC_LOAD_ADD_I64
  { 108,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #108 = ATOMIC_LOAD_ADD_I8
  { 109,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #109 = ATOMIC_LOAD_AND_I16
  { 110,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #110 = ATOMIC_LOAD_AND_I32
  { 111,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #111 = ATOMIC_LOAD_AND_I64
  { 112,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #112 = ATOMIC_LOAD_AND_I8
  { 113,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #113 = ATOMIC_LOAD_NAND_I16
  { 114,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #114 = ATOMIC_LOAD_NAND_I32
  { 115,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #115 = ATOMIC_LOAD_NAND_I64
  { 116,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #116 = ATOMIC_LOAD_NAND_I8
  { 117,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #117 = ATOMIC_LOAD_OR_I16
  { 118,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #118 = ATOMIC_LOAD_OR_I32
  { 119,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #119 = ATOMIC_LOAD_OR_I64
  { 120,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #120 = ATOMIC_LOAD_OR_I8
  { 121,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #121 = ATOMIC_LOAD_SUB_I16
  { 122,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #122 = ATOMIC_LOAD_SUB_I32
  { 123,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #123 = ATOMIC_LOAD_SUB_I64
  { 124,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #124 = ATOMIC_LOAD_SUB_I8
  { 125,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #125 = ATOMIC_LOAD_XOR_I16
  { 126,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #126 = ATOMIC_LOAD_XOR_I32
  { 127,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #127 = ATOMIC_LOAD_XOR_I64
  { 128,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #128 = ATOMIC_LOAD_XOR_I8
  { 129,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #129 = ATOMIC_SWAP_I16
  { 130,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #130 = ATOMIC_SWAP_I32
  { 131,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #131 = ATOMIC_SWAP_I64
  { 132,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #132 = ATOMIC_SWAP_I8
  { 133,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #133 = AUI
  { 134,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #134 = AUIPC
  { 135,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #135 = AVER_S_B
  { 136,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #136 = AVER_S_D
  { 137,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #137 = AVER_S_H
  { 138,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #138 = AVER_S_W
  { 139,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #139 = AVER_U_B
  { 140,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #140 = AVER_U_D
  { 141,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #141 = AVER_U_H
  { 142,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #142 = AVER_U_W
  { 143,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #143 = AVE_S_B
  { 144,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #144 = AVE_S_D
  { 145,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #145 = AVE_S_H
  { 146,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #146 = AVE_S_W
  { 147,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #147 = AVE_U_B
  { 148,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #148 = AVE_U_D
  { 149,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #149 = AVE_U_H
  { 150,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #150 = AVE_U_W
  { 151,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #151 = AddiuRxImmX16
  { 152,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #152 = AddiuRxPcImmX16
  { 153,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #153 = AddiuRxRxImm16
  { 154,	3,	1,	6,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #154 = AddiuRxRxImmX16
  { 155,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #155 = AddiuRxRyOffMemX16
  { 156,	1,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #156 = AddiuSpImm16
  { 157,	1,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #157 = AddiuSpImmX16
  { 158,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #158 = AdduRxRyRz16
  { 159,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #159 = AndRxRxRy16
  { 160,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #160 = B
  { 161,	3,	1,	8,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #161 = BADDu
  { 162,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #162 = BAL
  { 163,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #163 = BALC
  { 164,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #164 = BALIGN
  { 165,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #165 = BAL_BR
  { 166,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #166 = BC
  { 167,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #167 = BC1EQZ
  { 168,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #168 = BC1F
  { 169,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #169 = BC1FL
  { 170,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #170 = BC1F_MM
  { 171,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #171 = BC1NEZ
  { 172,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #172 = BC1T
  { 173,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #173 = BC1TL
  { 174,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #174 = BC1T_MM
  { 175,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #175 = BC2EQZ
  { 176,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #176 = BC2NEZ
  { 177,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #177 = BCLRI_B
  { 178,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #178 = BCLRI_D
  { 179,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #179 = BCLRI_H
  { 180,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #180 = BCLRI_W
  { 181,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #181 = BCLR_B
  { 182,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #182 = BCLR_D
  { 183,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #183 = BCLR_H
  { 184,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #184 = BCLR_W
  { 185,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #185 = BEQ
  { 186,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo48,0,nullptr },  // Inst #186 = BEQ64
  { 187,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #187 = BEQC
  { 188,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #188 = BEQL
  { 189,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #189 = BEQZALC
  { 190,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #190 = BEQZC
  { 191,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #191 = BEQZC_MM
  { 192,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #192 = BEQ_MM
  { 193,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #193 = BGEC
  { 194,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #194 = BGEUC
  { 195,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #195 = BGEZ
  { 196,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #196 = BGEZ64
  { 197,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #197 = BGEZAL
  { 198,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #198 = BGEZALC
  { 199,	2,	0,	7,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #199 = BGEZALL
  { 200,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #200 = BGEZALS_MM
  { 201,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #201 = BGEZAL_MM
  { 202,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #202 = BGEZC
  { 203,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #203 = BGEZL
  { 204,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #204 = BGEZ_MM
  { 205,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #205 = BGTZ
  { 206,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #206 = BGTZ64
  { 207,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #207 = BGTZALC
  { 208,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #208 = BGTZC
  { 209,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #209 = BGTZL
  { 210,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #210 = BGTZ_MM
  { 211,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #211 = BINSLI_B
  { 212,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #212 = BINSLI_D
  { 213,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #213 = BINSLI_H
  { 214,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #214 = BINSLI_W
  { 215,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #215 = BINSL_B
  { 216,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #216 = BINSL_D
  { 217,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #217 = BINSL_H
  { 218,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #218 = BINSL_W
  { 219,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #219 = BINSRI_B
  { 220,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #220 = BINSRI_D
  { 221,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #221 = BINSRI_H
  { 222,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #222 = BINSRI_W
  { 223,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #223 = BINSR_B
  { 224,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #224 = BINSR_D
  { 225,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #225 = BINSR_H
  { 226,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #226 = BINSR_W
  { 227,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #227 = BITREV
  { 228,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #228 = BITSWAP
  { 229,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #229 = BLEZ
  { 230,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #230 = BLEZ64
  { 231,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #231 = BLEZALC
  { 232,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #232 = BLEZC
  { 233,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #233 = BLEZL
  { 234,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #234 = BLEZ_MM
  { 235,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #235 = BLTC
  { 236,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #236 = BLTUC
  { 237,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #237 = BLTZ
  { 238,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #238 = BLTZ64
  { 239,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #239 = BLTZAL
  { 240,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #240 = BLTZALC
  { 241,	2,	0,	7,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #241 = BLTZALL
  { 242,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #242 = BLTZALS_MM
  { 243,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #243 = BLTZAL_MM
  { 244,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #244 = BLTZC
  { 245,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #245 = BLTZL
  { 246,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #246 = BLTZ_MM
  { 247,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #247 = BMNZI_B
  { 248,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #248 = BMNZ_V
  { 249,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #249 = BMZI_B
  { 250,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #250 = BMZ_V
  { 251,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #251 = BNE
  { 252,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo48,0,nullptr },  // Inst #252 = BNE64
  { 253,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #253 = BNEC
  { 254,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #254 = BNEGI_B
  { 255,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #255 = BNEGI_D
  { 256,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #256 = BNEGI_H
  { 257,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #257 = BNEGI_W
  { 258,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #258 = BNEG_B
  { 259,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #259 = BNEG_D
  { 260,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #260 = BNEG_H
  { 261,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #261 = BNEG_W
  { 262,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #262 = BNEL
  { 263,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo49,0,nullptr },  // Inst #263 = BNEZALC
  { 264,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #264 = BNEZC
  { 265,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #265 = BNEZC_MM
  { 266,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #266 = BNE_MM
  { 267,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #267 = BNVC
  { 268,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo59,0,nullptr },  // Inst #268 = BNZ_B
  { 269,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo60,0,nullptr },  // Inst #269 = BNZ_D
  { 270,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo61,0,nullptr },  // Inst #270 = BNZ_H
  { 271,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo59,0,nullptr },  // Inst #271 = BNZ_V
  { 272,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #272 = BNZ_W
  { 273,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #273 = BOVC
  { 274,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #274 = BPOSGE32
  { 275,	1,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo63,0,nullptr },  // Inst #275 = BPOSGE32_PSEUDO
  { 276,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #276 = BREAK
  { 277,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #277 = BREAK_MM
  { 278,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #278 = BSELI_B
  { 279,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #279 = BSEL_D_PSEUDO
  { 280,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #280 = BSEL_FD_PSEUDO
  { 281,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #281 = BSEL_FW_PSEUDO
  { 282,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #282 = BSEL_H_PSEUDO
  { 283,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #283 = BSEL_V
  { 284,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #284 = BSEL_W_PSEUDO
  { 285,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #285 = BSETI_B
  { 286,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #286 = BSETI_D
  { 287,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #287 = BSETI_H
  { 288,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #288 = BSETI_W
  { 289,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #289 = BSET_B
  { 290,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #290 = BSET_D
  { 291,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #291 = BSET_H
  { 292,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #292 = BSET_W
  { 293,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo59,0,nullptr },  // Inst #293 = BZ_B
  { 294,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo60,0,nullptr },  // Inst #294 = BZ_D
  { 295,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo61,0,nullptr },  // Inst #295 = BZ_H
  { 296,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo59,0,nullptr },  // Inst #296 = BZ_V
  { 297,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #297 = BZ_W
  { 298,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #298 = BeqzRxImm16
  { 299,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #299 = BeqzRxImmX16
  { 300,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #300 = Bimm16
  { 301,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #301 = BimmX16
  { 302,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #302 = BnezRxImm16
  { 303,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #303 = BnezRxImmX16
  { 304,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #304 = Break16
  { 305,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #305 = Bteqz16
  { 306,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #306 = BteqzT8CmpX16
  { 307,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #307 = BteqzT8CmpiX16
  { 308,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #308 = BteqzT8SltX16
  { 309,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #309 = BteqzT8SltiX16
  { 310,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #310 = BteqzT8SltiuX16
  { 311,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #311 = BteqzT8SltuX16
  { 312,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #312 = BteqzX16
  { 313,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #313 = Btnez16
  { 314,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #314 = BtnezT8CmpX16
  { 315,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #315 = BtnezT8CmpiX16
  { 316,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #316 = BtnezT8SltX16
  { 317,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #317 = BtnezT8SltiX16
  { 318,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #318 = BtnezT8SltiuX16
  { 319,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #319 = BtnezT8SltuX16
  { 320,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #320 = BtnezX16
  { 321,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #321 = BuildPairF64
  { 322,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #322 = BuildPairF64_64
  { 323,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #323 = CACHE
  { 324,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #324 = CACHE_R6
  { 325,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #325 = CEIL_L_D64
  { 326,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #326 = CEIL_L_S
  { 327,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #327 = CEIL_W_D32
  { 328,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #328 = CEIL_W_D64
  { 329,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #329 = CEIL_W_MM
  { 330,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #330 = CEIL_W_S
  { 331,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #331 = CEIL_W_S_MM
  { 332,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #332 = CEQI_B
  { 333,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #333 = CEQI_D
  { 334,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #334 = CEQI_H
  { 335,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #335 = CEQI_W
  { 336,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #336 = CEQ_B
  { 337,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #337 = CEQ_D
  { 338,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #338 = CEQ_H
  { 339,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #339 = CEQ_W
  { 340,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #340 = CFC1
  { 341,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #341 = CFC1_MM
  { 342,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #342 = CFCMSA
  { 343,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #343 = CINS
  { 344,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #344 = CINS32
  { 345,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #345 = CLASS_D
  { 346,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #346 = CLASS_S
  { 347,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #347 = CLEI_S_B
  { 348,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #348 = CLEI_S_D
  { 349,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #349 = CLEI_S_H
  { 350,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #350 = CLEI_S_W
  { 351,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #351 = CLEI_U_B
  { 352,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #352 = CLEI_U_D
  { 353,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #353 = CLEI_U_H
  { 354,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #354 = CLEI_U_W
  { 355,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #355 = CLE_S_B
  { 356,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #356 = CLE_S_D
  { 357,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #357 = CLE_S_H
  { 358,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #358 = CLE_S_W
  { 359,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #359 = CLE_U_B
  { 360,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #360 = CLE_U_D
  { 361,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #361 = CLE_U_H
  { 362,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #362 = CLE_U_W
  { 363,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #363 = CLO
  { 364,	2,	1,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #364 = CLO_MM
  { 365,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #365 = CLO_R6
  { 366,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #366 = CLTI_S_B
  { 367,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #367 = CLTI_S_D
  { 368,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #368 = CLTI_S_H
  { 369,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #369 = CLTI_S_W
  { 370,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #370 = CLTI_U_B
  { 371,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #371 = CLTI_U_D
  { 372,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #372 = CLTI_U_H
  { 373,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #373 = CLTI_U_W
  { 374,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #374 = CLT_S_B
  { 375,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #375 = CLT_S_D
  { 376,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #376 = CLT_S_H
  { 377,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #377 = CLT_S_W
  { 378,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #378 = CLT_U_B
  { 379,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #379 = CLT_U_D
  { 380,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #380 = CLT_U_H
  { 381,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #381 = CLT_U_W
  { 382,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #382 = CLZ
  { 383,	2,	1,	12,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #383 = CLZ_MM
  { 384,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #384 = CLZ_R6
  { 385,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo78,0,nullptr },  // Inst #385 = CMPGDU_EQ_QB
  { 386,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo78,0,nullptr },  // Inst #386 = CMPGDU_LE_QB
  { 387,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo78,0,nullptr },  // Inst #387 = CMPGDU_LT_QB
  { 388,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #388 = CMPGU_EQ_QB
  { 389,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #389 = CMPGU_LE_QB
  { 390,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #390 = CMPGU_LT_QB
  { 391,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #391 = CMPU_EQ_QB
  { 392,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #392 = CMPU_LE_QB
  { 393,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #393 = CMPU_LT_QB
  { 394,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #394 = CMP_EQ_D
  { 395,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #395 = CMP_EQ_PH
  { 396,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #396 = CMP_EQ_S
  { 397,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #397 = CMP_F_D
  { 398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #398 = CMP_F_S
  { 399,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #399 = CMP_LE_D
  { 400,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #400 = CMP_LE_PH
  { 401,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #401 = CMP_LE_S
  { 402,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #402 = CMP_LT_D
  { 403,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #403 = CMP_LT_PH
  { 404,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #404 = CMP_LT_S
  { 405,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #405 = CMP_SAF_D
  { 406,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #406 = CMP_SAF_S
  { 407,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #407 = CMP_SEQ_D
  { 408,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #408 = CMP_SEQ_S
  { 409,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #409 = CMP_SLE_D
  { 410,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #410 = CMP_SLE_S
  { 411,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #411 = CMP_SLT_D
  { 412,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #412 = CMP_SLT_S
  { 413,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #413 = CMP_SUEQ_D
  { 414,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #414 = CMP_SUEQ_S
  { 415,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #415 = CMP_SULE_D
  { 416,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #416 = CMP_SULE_S
  { 417,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #417 = CMP_SULT_D
  { 418,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #418 = CMP_SULT_S
  { 419,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #419 = CMP_SUN_D
  { 420,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #420 = CMP_SUN_S
  { 421,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #421 = CMP_UEQ_D
  { 422,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #422 = CMP_UEQ_S
  { 423,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #423 = CMP_ULE_D
  { 424,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #424 = CMP_ULE_S
  { 425,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #425 = CMP_ULT_D
  { 426,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #426 = CMP_ULT_S
  { 427,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #427 = CMP_UN_D
  { 428,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #428 = CMP_UN_S
  { 429,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #429 = CONSTPOOL_ENTRY
  { 430,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #430 = COPY_FD_PSEUDO
  { 431,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #431 = COPY_FW_PSEUDO
  { 432,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #432 = COPY_S_B
  { 433,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #433 = COPY_S_D
  { 434,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #434 = COPY_S_H
  { 435,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #435 = COPY_S_W
  { 436,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #436 = COPY_U_B
  { 437,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #437 = COPY_U_D
  { 438,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #438 = COPY_U_H
  { 439,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #439 = COPY_U_W
  { 440,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #440 = CTC1
  { 441,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #441 = CTC1_MM
  { 442,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #442 = CTCMSA
  { 443,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #443 = CVT_D32_S
  { 444,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #444 = CVT_D32_W
  { 445,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #445 = CVT_D32_W_MM
  { 446,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #446 = CVT_D64_L
  { 447,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #447 = CVT_D64_S
  { 448,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #448 = CVT_D64_W
  { 449,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #449 = CVT_D_S_MM
  { 450,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #450 = CVT_L_D64
  { 451,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #451 = CVT_L_D64_MM
  { 452,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #452 = CVT_L_S
  { 453,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #453 = CVT_L_S_MM
  { 454,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #454 = CVT_S_D32
  { 455,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #455 = CVT_S_D32_MM
  { 456,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #456 = CVT_S_D64
  { 457,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #457 = CVT_S_L
  { 458,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #458 = CVT_S_W
  { 459,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #459 = CVT_S_W_MM
  { 460,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #460 = CVT_W_D32
  { 461,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #461 = CVT_W_D64
  { 462,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #462 = CVT_W_MM
  { 463,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #463 = CVT_W_S
  { 464,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #464 = CVT_W_S_MM
  { 465,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #465 = C_EQ_D32
  { 466,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #466 = C_EQ_D64
  { 467,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #467 = C_EQ_S
  { 468,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #468 = C_F_D32
  { 469,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #469 = C_F_D64
  { 470,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #470 = C_F_S
  { 471,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #471 = C_LE_D32
  { 472,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #472 = C_LE_D64
  { 473,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #473 = C_LE_S
  { 474,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #474 = C_LT_D32
  { 475,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #475 = C_LT_D64
  { 476,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #476 = C_LT_S
  { 477,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #477 = C_NGE_D32
  { 478,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #478 = C_NGE_D64
  { 479,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #479 = C_NGE_S
  { 480,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #480 = C_NGLE_D32
  { 481,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #481 = C_NGLE_D64
  { 482,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #482 = C_NGLE_S
  { 483,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #483 = C_NGL_D32
  { 484,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #484 = C_NGL_D64
  { 485,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #485 = C_NGL_S
  { 486,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #486 = C_NGT_D32
  { 487,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #487 = C_NGT_D64
  { 488,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #488 = C_NGT_S
  { 489,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #489 = C_OLE_D32
  { 490,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #490 = C_OLE_D64
  { 491,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #491 = C_OLE_S
  { 492,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #492 = C_OLT_D32
  { 493,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #493 = C_OLT_D64
  { 494,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #494 = C_OLT_S
  { 495,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #495 = C_SEQ_D32
  { 496,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #496 = C_SEQ_D64
  { 497,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #497 = C_SEQ_S
  { 498,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #498 = C_SF_D32
  { 499,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #499 = C_SF_D64
  { 500,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #500 = C_SF_S
  { 501,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #501 = C_UEQ_D32
  { 502,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #502 = C_UEQ_D64
  { 503,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #503 = C_UEQ_S
  { 504,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #504 = C_ULE_D32
  { 505,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #505 = C_ULE_D64
  { 506,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #506 = C_ULE_S
  { 507,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #507 = C_ULT_D32
  { 508,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #508 = C_ULT_D64
  { 509,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #509 = C_ULT_S
  { 510,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #510 = C_UN_D32
  { 511,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #511 = C_UN_D64
  { 512,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #512 = C_UN_S
  { 513,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo91,0,nullptr },  // Inst #513 = CmpRxRy16
  { 514,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38,0,nullptr },  // Inst #514 = CmpiRxImm16
  { 515,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38,0,nullptr },  // Inst #515 = CmpiRxImmX16
  { 516,	1,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #516 = Constant32
  { 517,	3,	1,	17,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #517 = DADD
  { 518,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #518 = DADDi
  { 519,	3,	1,	18,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #519 = DADDiu
  { 520,	3,	1,	19,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #520 = DADDu
  { 521,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #521 = DAHI
  { 522,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #522 = DALIGN
  { 523,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #523 = DATI
  { 524,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #524 = DAUI
  { 525,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #525 = DBITSWAP
  { 526,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #526 = DCLO
  { 527,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #527 = DCLO_R6
  { 528,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #528 = DCLZ
  { 529,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #529 = DCLZ_R6
  { 530,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #530 = DDIV
  { 531,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #531 = DDIVU
  { 532,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #532 = DERET
  { 533,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #533 = DERET_MM
  { 534,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #534 = DEXT
  { 535,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #535 = DEXTM
  { 536,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #536 = DEXTU
  { 537,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #537 = DI
  { 538,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #538 = DINS
  { 539,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #539 = DINSM
  { 540,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #540 = DINSU
  { 541,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #541 = DIV
  { 542,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #542 = DIVU
  { 543,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #543 = DIV_S_B
  { 544,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #544 = DIV_S_D
  { 545,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #545 = DIV_S_H
  { 546,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #546 = DIV_S_W
  { 547,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #547 = DIV_U_B
  { 548,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #548 = DIV_U_D
  { 549,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #549 = DIV_U_H
  { 550,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #550 = DIV_U_W
  { 551,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #551 = DI_MM
  { 552,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #552 = DLSA
  { 553,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #553 = DLSA_R6
  { 554,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #554 = DMFC0
  { 555,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #555 = DMFC1
  { 556,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #556 = DMFC2
  { 557,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #557 = DMOD
  { 558,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #558 = DMODU
  { 559,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #559 = DMTC0
  { 560,	2,	1,	21,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #560 = DMTC1
  { 561,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #561 = DMTC2
  { 562,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #562 = DMUH
  { 563,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #563 = DMUHU
  { 564,	3,	1,	22,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo31,0,nullptr },  // Inst #564 = DMUL
  { 565,	2,	0,	23,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo94,0,nullptr },  // Inst #565 = DMULT
  { 566,	2,	0,	24,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo94,0,nullptr },  // Inst #566 = DMULTu
  { 567,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #567 = DMULU
  { 568,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #568 = DMUL_R6
  { 569,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #569 = DOTP_S_D
  { 570,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #570 = DOTP_S_H
  { 571,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #571 = DOTP_S_W
  { 572,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #572 = DOTP_U_D
  { 573,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #573 = DOTP_U_H
  { 574,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #574 = DOTP_U_W
  { 575,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #575 = DPADD_S_D
  { 576,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #576 = DPADD_S_H
  { 577,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #577 = DPADD_S_W
  { 578,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #578 = DPADD_U_D
  { 579,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #579 = DPADD_U_H
  { 580,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #580 = DPADD_U_W
  { 581,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #581 = DPAQX_SA_W_PH
  { 582,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #582 = DPAQX_S_W_PH
  { 583,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #583 = DPAQ_SA_L_W
  { 584,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #584 = DPAQ_S_W_PH
  { 585,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #585 = DPAU_H_QBL
  { 586,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #586 = DPAU_H_QBR
  { 587,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #587 = DPAX_W_PH
  { 588,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #588 = DPA_W_PH
  { 589,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #589 = DPOP
  { 590,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #590 = DPSQX_SA_W_PH
  { 591,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #591 = DPSQX_S_W_PH
  { 592,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #592 = DPSQ_SA_L_W
  { 593,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #593 = DPSQ_S_W_PH
  { 594,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #594 = DPSUB_S_D
  { 595,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #595 = DPSUB_S_H
  { 596,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #596 = DPSUB_S_W
  { 597,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #597 = DPSUB_U_D
  { 598,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #598 = DPSUB_U_H
  { 599,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #599 = DPSUB_U_W
  { 600,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #600 = DPSU_H_QBL
  { 601,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #601 = DPSU_H_QBR
  { 602,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #602 = DPSX_W_PH
  { 603,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #603 = DPS_W_PH
  { 604,	3,	1,	26,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #604 = DROTR
  { 605,	3,	1,	27,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #605 = DROTR32
  { 606,	3,	1,	28,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #606 = DROTRV
  { 607,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #607 = DSBH
  { 608,	2,	0,	29,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo94,0,nullptr },  // Inst #608 = DSDIV
  { 609,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #609 = DSHD
  { 610,	3,	1,	30,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #610 = DSLL
  { 611,	3,	1,	31,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #611 = DSLL32
  { 612,	2,	1,	30,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #612 = DSLL64_32
  { 613,	3,	1,	32,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #613 = DSLLV
  { 614,	3,	1,	33,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #614 = DSRA
  { 615,	3,	1,	34,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #615 = DSRA32
  { 616,	3,	1,	35,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #616 = DSRAV
  { 617,	3,	1,	36,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #617 = DSRL
  { 618,	3,	1,	37,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #618 = DSRL32
  { 619,	3,	1,	38,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #619 = DSRLV
  { 620,	3,	1,	39,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #620 = DSUB
  { 621,	3,	1,	40,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #621 = DSUBu
  { 622,	2,	0,	41,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo94,0,nullptr },  // Inst #622 = DUDIV
  { 623,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo91,0,nullptr },  // Inst #623 = DivRxRy16
  { 624,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo91,0,nullptr },  // Inst #624 = DivuRxRy16
  { 625,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #625 = EHB
  { 626,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #626 = EI
  { 627,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #627 = EI_MM
  { 628,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #628 = ERET
  { 629,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #629 = ERET_MM
  { 630,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #630 = EXT
  { 631,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo108,0,nullptr },  // Inst #631 = EXTP
  { 632,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo108,0,nullptr },  // Inst #632 = EXTPDP
  { 633,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo109,0,nullptr },  // Inst #633 = EXTPDPV
  { 634,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo109,0,nullptr },  // Inst #634 = EXTPV
  { 635,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo109,0,nullptr },  // Inst #635 = EXTRV_RS_W
  { 636,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo109,0,nullptr },  // Inst #636 = EXTRV_R_W
  { 637,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo109,0,nullptr },  // Inst #637 = EXTRV_S_H
  { 638,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo109,0,nullptr },  // Inst #638 = EXTRV_W
  { 639,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo108,0,nullptr },  // Inst #639 = EXTR_RS_W
  { 640,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo108,0,nullptr },  // Inst #640 = EXTR_R_W
  { 641,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo108,0,nullptr },  // Inst #641 = EXTR_S_H
  { 642,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo108,0,nullptr },  // Inst #642 = EXTR_W
  { 643,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #643 = EXTS
  { 644,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #644 = EXTS32
  { 645,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #645 = EXT_MM
  { 646,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #646 = ExtractElementF64
  { 647,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #647 = ExtractElementF64_64
  { 648,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #648 = FABS_D
  { 649,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #649 = FABS_D32
  { 650,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #650 = FABS_D64
  { 651,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #651 = FABS_MM
  { 652,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #652 = FABS_S
  { 653,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #653 = FABS_S_MM
  { 654,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #654 = FABS_W
  { 655,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #655 = FADD_D
  { 656,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #656 = FADD_D32
  { 657,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #657 = FADD_D64
  { 658,	3,	1,	43,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #658 = FADD_MM
  { 659,	3,	1,	44,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #659 = FADD_S
  { 660,	3,	1,	44,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #660 = FADD_S_MM
  { 661,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #661 = FADD_W
  { 662,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #662 = FCAF_D
  { 663,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #663 = FCAF_W
  { 664,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #664 = FCEQ_D
  { 665,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #665 = FCEQ_W
  { 666,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #666 = FCLASS_D
  { 667,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #667 = FCLASS_W
  { 668,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #668 = FCLE_D
  { 669,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #669 = FCLE_W
  { 670,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #670 = FCLT_D
  { 671,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #671 = FCLT_W
  { 672,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo117,0,nullptr },  // Inst #672 = FCMP_D32
  { 673,	3,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo117,0,nullptr },  // Inst #673 = FCMP_D32_MM
  { 674,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo118,0,nullptr },  // Inst #674 = FCMP_D64
  { 675,	3,	0,	16,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo119,0,nullptr },  // Inst #675 = FCMP_S32
  { 676,	3,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo119,0,nullptr },  // Inst #676 = FCMP_S32_MM
  { 677,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #677 = FCNE_D
  { 678,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #678 = FCNE_W
  { 679,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #679 = FCOR_D
  { 680,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #680 = FCOR_W
  { 681,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #681 = FCUEQ_D
  { 682,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #682 = FCUEQ_W
  { 683,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #683 = FCULE_D
  { 684,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #684 = FCULE_W
  { 685,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #685 = FCULT_D
  { 686,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #686 = FCULT_W
  { 687,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #687 = FCUNE_D
  { 688,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #688 = FCUNE_W
  { 689,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #689 = FCUN_D
  { 690,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #690 = FCUN_W
  { 691,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #691 = FDIV_D
  { 692,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #692 = FDIV_D32
  { 693,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #693 = FDIV_D64
  { 694,	3,	1,	45,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #694 = FDIV_MM
  { 695,	3,	1,	46,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #695 = FDIV_S
  { 696,	3,	1,	46,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #696 = FDIV_S_MM
  { 697,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #697 = FDIV_W
  { 698,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #698 = FEXDO_H
  { 699,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #699 = FEXDO_W
  { 700,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #700 = FEXP2_D
  { 701,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #701 = FEXP2_D_1_PSEUDO
  { 702,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #702 = FEXP2_W
  { 703,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #703 = FEXP2_W_1_PSEUDO
  { 704,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #704 = FEXUPL_D
  { 705,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #705 = FEXUPL_W
  { 706,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #706 = FEXUPR_D
  { 707,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #707 = FEXUPR_W
  { 708,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #708 = FFINT_S_D
  { 709,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #709 = FFINT_S_W
  { 710,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #710 = FFINT_U_D
  { 711,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #711 = FFINT_U_W
  { 712,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #712 = FFQL_D
  { 713,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #713 = FFQL_W
  { 714,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #714 = FFQR_D
  { 715,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #715 = FFQR_W
  { 716,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #716 = FILL_B
  { 717,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #717 = FILL_D
  { 718,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #718 = FILL_FD_PSEUDO
  { 719,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo129,0,nullptr },  // Inst #719 = FILL_FW_PSEUDO
  { 720,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #720 = FILL_H
  { 721,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #721 = FILL_W
  { 722,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #722 = FLOG2_D
  { 723,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #723 = FLOG2_W
  { 724,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #724 = FLOOR_L_D64
  { 725,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #725 = FLOOR_L_S
  { 726,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #726 = FLOOR_W_D32
  { 727,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #727 = FLOOR_W_D64
  { 728,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #728 = FLOOR_W_MM
  { 729,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #729 = FLOOR_W_S
  { 730,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #730 = FLOOR_W_S_MM
  { 731,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #731 = FMADD_D
  { 732,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #732 = FMADD_W
  { 733,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #733 = FMAX_A_D
  { 734,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #734 = FMAX_A_W
  { 735,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #735 = FMAX_D
  { 736,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #736 = FMAX_W
  { 737,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #737 = FMIN_A_D
  { 738,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #738 = FMIN_A_W
  { 739,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #739 = FMIN_D
  { 740,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #740 = FMIN_W
  { 741,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #741 = FMOV_D32
  { 742,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #742 = FMOV_D32_MM
  { 743,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #743 = FMOV_D64
  { 744,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #744 = FMOV_S
  { 745,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #745 = FMOV_S_MM
  { 746,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #746 = FMSUB_D
  { 747,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #747 = FMSUB_W
  { 748,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #748 = FMUL_D
  { 749,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #749 = FMUL_D32
  { 750,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #750 = FMUL_D64
  { 751,	3,	1,	50,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #751 = FMUL_MM
  { 752,	3,	1,	51,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #752 = FMUL_S
  { 753,	3,	1,	51,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #753 = FMUL_S_MM
  { 754,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #754 = FMUL_W
  { 755,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #755 = FNEG_D32
  { 756,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #756 = FNEG_D64
  { 757,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #757 = FNEG_MM
  { 758,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #758 = FNEG_S
  { 759,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #759 = FNEG_S_MM
  { 760,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #760 = FRCP_D
  { 761,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #761 = FRCP_W
  { 762,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #762 = FRINT_D
  { 763,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #763 = FRINT_W
  { 764,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #764 = FRSQRT_D
  { 765,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #765 = FRSQRT_W
  { 766,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #766 = FSAF_D
  { 767,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #767 = FSAF_W
  { 768,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #768 = FSEQ_D
  { 769,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #769 = FSEQ_W
  { 770,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #770 = FSLE_D
  { 771,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #771 = FSLE_W
  { 772,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #772 = FSLT_D
  { 773,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #773 = FSLT_W
  { 774,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #774 = FSNE_D
  { 775,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #775 = FSNE_W
  { 776,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #776 = FSOR_D
  { 777,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #777 = FSOR_W
  { 778,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #778 = FSQRT_D
  { 779,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #779 = FSQRT_D32
  { 780,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #780 = FSQRT_D64
  { 781,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #781 = FSQRT_MM
  { 782,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #782 = FSQRT_S
  { 783,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #783 = FSQRT_S_MM
  { 784,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #784 = FSQRT_W
  { 785,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #785 = FSUB_D
  { 786,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #786 = FSUB_D32
  { 787,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #787 = FSUB_D64
  { 788,	3,	1,	55,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #788 = FSUB_MM
  { 789,	3,	1,	56,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #789 = FSUB_S
  { 790,	3,	1,	56,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #790 = FSUB_S_MM
  { 791,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #791 = FSUB_W
  { 792,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #792 = FSUEQ_D
  { 793,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #793 = FSUEQ_W
  { 794,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #794 = FSULE_D
  { 795,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #795 = FSULE_W
  { 796,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #796 = FSULT_D
  { 797,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #797 = FSULT_W
  { 798,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #798 = FSUNE_D
  { 799,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #799 = FSUNE_W
  { 800,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #800 = FSUN_D
  { 801,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #801 = FSUN_W
  { 802,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #802 = FTINT_S_D
  { 803,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #803 = FTINT_S_W
  { 804,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #804 = FTINT_U_D
  { 805,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #805 = FTINT_U_W
  { 806,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #806 = FTQ_H
  { 807,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #807 = FTQ_W
  { 808,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #808 = FTRUNC_S_D
  { 809,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #809 = FTRUNC_S_W
  { 810,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #810 = FTRUNC_U_D
  { 811,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #811 = FTRUNC_U_W
  { 812,	4,	2,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #812 = GotPrologue16
  { 813,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #813 = HADD_S_D
  { 814,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #814 = HADD_S_H
  { 815,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #815 = HADD_S_W
  { 816,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #816 = HADD_U_D
  { 817,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #817 = HADD_U_H
  { 818,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #818 = HADD_U_W
  { 819,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #819 = HSUB_S_D
  { 820,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #820 = HSUB_S_H
  { 821,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #821 = HSUB_S_W
  { 822,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #822 = HSUB_U_D
  { 823,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #823 = HSUB_U_H
  { 824,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #824 = HSUB_U_W
  { 825,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #825 = ILVEV_B
  { 826,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #826 = ILVEV_D
  { 827,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #827 = ILVEV_H
  { 828,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #828 = ILVEV_W
  { 829,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #829 = ILVL_B
  { 830,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #830 = ILVL_D
  { 831,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #831 = ILVL_H
  { 832,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #832 = ILVL_W
  { 833,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #833 = ILVOD_B
  { 834,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #834 = ILVOD_D
  { 835,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #835 = ILVOD_H
  { 836,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #836 = ILVOD_W
  { 837,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #837 = ILVR_B
  { 838,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #838 = ILVR_D
  { 839,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #839 = ILVR_H
  { 840,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #840 = ILVR_W
  { 841,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #841 = INS
  { 842,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #842 = INSERT_B
  { 843,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #843 = INSERT_B_VIDX_PSEUDO
  { 844,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #844 = INSERT_D
  { 845,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #845 = INSERT_D_VIDX_PSEUDO
  { 846,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #846 = INSERT_FD_PSEUDO
  { 847,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #847 = INSERT_FD_VIDX_PSEUDO
  { 848,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo140,0,nullptr },  // Inst #848 = INSERT_FW_PSEUDO
  { 849,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #849 = INSERT_FW_VIDX_PSEUDO
  { 850,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #850 = INSERT_H
  { 851,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #851 = INSERT_H_VIDX_PSEUDO
  { 852,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #852 = INSERT_W
  { 853,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #853 = INSERT_W_VIDX_PSEUDO
  { 854,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo146,0,nullptr },  // Inst #854 = INSV
  { 855,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #855 = INSVE_B
  { 856,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #856 = INSVE_D
  { 857,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #857 = INSVE_H
  { 858,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #858 = INSVE_W
  { 859,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #859 = INS_MM
  { 860,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #860 = J
  { 861,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #861 = JAL
  { 862,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo12,0,nullptr },  // Inst #862 = JALR
  { 863,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo63,0,nullptr },  // Inst #863 = JALR16_MM
  { 864,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo94,0,nullptr },  // Inst #864 = JALR64
  { 865,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo151,0,nullptr },  // Inst #865 = JALR64Pseudo
  { 866,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo63,0,nullptr },  // Inst #866 = JALRPseudo
  { 867,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo63,0,nullptr },  // Inst #867 = JALRS16_MM
  { 868,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo12,0,nullptr },  // Inst #868 = JALRS_MM
  { 869,	2,	1,	0,	4,	0|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #869 = JALR_HB
  { 870,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo12,0,nullptr },  // Inst #870 = JALR_MM
  { 871,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #871 = JALS_MM
  { 872,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #872 = JALX
  { 873,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #873 = JAL_MM
  { 874,	2,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo14,0,nullptr },  // Inst #874 = JIALC
  { 875,	2,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo14,0,nullptr },  // Inst #875 = JIC
  { 876,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #876 = JR
  { 877,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #877 = JR16_MM
  { 878,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #878 = JR64
  { 879,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #879 = JRADDIUSP
  { 880,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #880 = JRC16_MM
  { 881,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #881 = JR_HB
  { 882,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #882 = JR_HB_R6
  { 883,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #883 = JR_MM
  { 884,	1,	0,	7,	4,	0|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #884 = J_MM
  { 885,	1,	0,	6,	6,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #885 = Jal16
  { 886,	1,	0,	6,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #886 = JalB16
  { 887,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #887 = JrRa16
  { 888,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #888 = JrcRa16
  { 889,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #889 = JrcRx16
  { 890,	1,	0,	7,	2,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo152,0,nullptr },  // Inst #890 = JumpLinkReg16
  { 891,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #891 = LB
  { 892,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #892 = LB64
  { 893,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #893 = LBUX
  { 894,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #894 = LB_MM
  { 895,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #895 = LBu
  { 896,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #896 = LBu64
  { 897,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #897 = LBu_MM
  { 898,	3,	1,	59,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #898 = LD
  { 899,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #899 = LDC1
  { 900,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #900 = LDC164
  { 901,	3,	1,	60,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #901 = LDC1_MM
  { 902,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #902 = LDC2
  { 903,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #903 = LDC2_R6
  { 904,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #904 = LDC3
  { 905,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #905 = LDI_B
  { 906,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #906 = LDI_D
  { 907,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #907 = LDI_H
  { 908,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #908 = LDI_W
  { 909,	4,	1,	61,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #909 = LDL
  { 910,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #910 = LDPC
  { 911,	4,	1,	62,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #911 = LDR
  { 912,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #912 = LDXC1
  { 913,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #913 = LDXC164
  { 914,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #914 = LD_B
  { 915,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #915 = LD_D
  { 916,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #916 = LD_H
  { 917,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #917 = LD_W
  { 918,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #918 = LEA_ADDiu
  { 919,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #919 = LEA_ADDiu64
  { 920,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #920 = LEA_ADDiu_MM
  { 921,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #921 = LH
  { 922,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #922 = LH64
  { 923,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #923 = LHX
  { 924,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #924 = LH_MM
  { 925,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #925 = LHu
  { 926,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #926 = LHu64
  { 927,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #927 = LHu_MM
  { 928,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #928 = LI16_MM
  { 929,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #929 = LL
  { 930,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #930 = LLD
  { 931,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #931 = LLD_R6
  { 932,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #932 = LL_MM
  { 933,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #933 = LL_R6
  { 934,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #934 = LOAD_ACC128
  { 935,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #935 = LOAD_ACC64
  { 936,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #936 = LOAD_ACC64DSP
  { 937,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #937 = LOAD_CCOND_DSP
  { 938,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #938 = LONG_BRANCH_ADDiu
  { 939,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #939 = LONG_BRANCH_DADDiu
  { 940,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #940 = LONG_BRANCH_LUi
  { 941,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #941 = LSA
  { 942,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #942 = LSA_R6
  { 943,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #943 = LUXC1
  { 944,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #944 = LUXC164
  { 945,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #945 = LUXC1_MM
  { 946,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #946 = LUi
  { 947,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #947 = LUi64
  { 948,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #948 = LUi_MM
  { 949,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #949 = LW
  { 950,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #950 = LW64
  { 951,	3,	1,	69,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #951 = LWC1
  { 952,	3,	1,	69,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #952 = LWC1_MM
  { 953,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #953 = LWC2
  { 954,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #954 = LWC2_R6
  { 955,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #955 = LWC3
  { 956,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #956 = LWL
  { 957,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #957 = LWL64
  { 958,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #958 = LWL_MM
  { 959,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #959 = LWPC
  { 960,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #960 = LWR
  { 961,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #961 = LWR64
  { 962,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #962 = LWR_MM
  { 963,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #963 = LWUPC
  { 964,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #964 = LWU_MM
  { 965,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #965 = LWX
  { 966,	3,	1,	73,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #966 = LWXC1
  { 967,	3,	1,	73,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #967 = LWXC1_MM
  { 968,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #968 = LW_MM
  { 969,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #969 = LWu
  { 970,	4,	1,	57,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #970 = LbRxRyOffMemX16
  { 971,	4,	1,	58,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #971 = LbuRxRyOffMemX16
  { 972,	4,	1,	64,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #972 = LhRxRyOffMemX16
  { 973,	4,	1,	65,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #973 = LhuRxRyOffMemX16
  { 974,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #974 = LiRxImm16
  { 975,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #975 = LiRxImmAlignX16
  { 976,	2,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #976 = LiRxImmX16
  { 977,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #977 = LoadAddr32Imm
  { 978,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #978 = LoadAddr32Reg
  { 979,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #979 = LoadImm32Reg
  { 980,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #980 = LoadImm64Reg
  { 981,	3,	1,	3,	2,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #981 = LwConstant32
  { 982,	3,	1,	68,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #982 = LwRxPcTcp16
  { 983,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #983 = LwRxPcTcpX16
  { 984,	4,	1,	68,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #984 = LwRxRyOffMemX16
  { 985,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo187,0,nullptr },  // Inst #985 = LwRxSpImmX16
  { 986,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #986 = MADD
  { 987,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #987 = MADDF_D
  { 988,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #988 = MADDF_S
  { 989,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #989 = MADDR_Q_H
  { 990,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #990 = MADDR_Q_W
  { 991,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #991 = MADDU
  { 992,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #992 = MADDU_DSP
  { 993,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #993 = MADDU_MM
  { 994,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #994 = MADDV_B
  { 995,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #995 = MADDV_D
  { 996,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #996 = MADDV_H
  { 997,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #997 = MADDV_W
  { 998,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #998 = MADD_D32
  { 999,	4,	1,	76,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #999 = MADD_D32_MM
  { 1000,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1000 = MADD_D64
  { 1001,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #1001 = MADD_DSP
  { 1002,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1002 = MADD_MM
  { 1003,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1003 = MADD_Q_H
  { 1004,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1004 = MADD_Q_W
  { 1005,	4,	1,	77,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1005 = MADD_S
  { 1006,	4,	1,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1006 = MADD_S_MM
  { 1007,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #1007 = MAQ_SA_W_PHL
  { 1008,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #1008 = MAQ_SA_W_PHR
  { 1009,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #1009 = MAQ_S_W_PHL
  { 1010,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #1010 = MAQ_S_W_PHR
  { 1011,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #1011 = MAXA_D
  { 1012,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1012 = MAXA_S
  { 1013,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1013 = MAXI_S_B
  { 1014,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1014 = MAXI_S_D
  { 1015,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1015 = MAXI_S_H
  { 1016,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1016 = MAXI_S_W
  { 1017,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1017 = MAXI_U_B
  { 1018,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1018 = MAXI_U_D
  { 1019,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1019 = MAXI_U_H
  { 1020,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1020 = MAXI_U_W
  { 1021,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1021 = MAX_A_B
  { 1022,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1022 = MAX_A_D
  { 1023,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1023 = MAX_A_H
  { 1024,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1024 = MAX_A_W
  { 1025,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #1025 = MAX_D
  { 1026,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1026 = MAX_S
  { 1027,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1027 = MAX_S_B
  { 1028,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1028 = MAX_S_D
  { 1029,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1029 = MAX_S_H
  { 1030,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1030 = MAX_S_W
  { 1031,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1031 = MAX_U_B
  { 1032,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1032 = MAX_U_D
  { 1033,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1033 = MAX_U_H
  { 1034,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1034 = MAX_U_W
  { 1035,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1035 = MFC0
  { 1036,	2,	1,	78,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1036 = MFC1
  { 1037,	2,	1,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1037 = MFC1_MM
  { 1038,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1038 = MFC2
  { 1039,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1039 = MFHC1_D32
  { 1040,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1040 = MFHC1_D64
  { 1041,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1041 = MFHC1_MM
  { 1042,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo63,0,nullptr },  // Inst #1042 = MFHI
  { 1043,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo63,0,nullptr },  // Inst #1043 = MFHI16_MM
  { 1044,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo151,0,nullptr },  // Inst #1044 = MFHI64
  { 1045,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1045 = MFHI_DSP
  { 1046,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo63,0,nullptr },  // Inst #1046 = MFHI_MM
  { 1047,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo63,0,nullptr },  // Inst #1047 = MFLO
  { 1048,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo63,0,nullptr },  // Inst #1048 = MFLO16_MM
  { 1049,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo151,0,nullptr },  // Inst #1049 = MFLO64
  { 1050,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1050 = MFLO_DSP
  { 1051,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo63,0,nullptr },  // Inst #1051 = MFLO_MM
  { 1052,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #1052 = MINA_D
  { 1053,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1053 = MINA_S
  { 1054,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1054 = MINI_S_B
  { 1055,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1055 = MINI_S_D
  { 1056,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1056 = MINI_S_H
  { 1057,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1057 = MINI_S_W
  { 1058,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1058 = MINI_U_B
  { 1059,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1059 = MINI_U_D
  { 1060,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1060 = MINI_U_H
  { 1061,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1061 = MINI_U_W
  { 1062,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1062 = MIN_A_B
  { 1063,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1063 = MIN_A_D
  { 1064,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1064 = MIN_A_H
  { 1065,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1065 = MIN_A_W
  { 1066,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #1066 = MIN_D
  { 1067,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1067 = MIN_S
  { 1068,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1068 = MIN_S_B
  { 1069,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1069 = MIN_S_D
  { 1070,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1070 = MIN_S_H
  { 1071,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1071 = MIN_S_W
  { 1072,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1072 = MIN_U_B
  { 1073,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1073 = MIN_U_D
  { 1074,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1074 = MIN_U_H
  { 1075,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1075 = MIN_U_W
  { 1076,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo198,0,nullptr },  // Inst #1076 = MIPSeh_return32
  { 1077,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo199,0,nullptr },  // Inst #1077 = MIPSeh_return64
  { 1078,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1078 = MOD
  { 1079,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1079 = MODSUB
  { 1080,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1080 = MODU
  { 1081,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1081 = MOD_S_B
  { 1082,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1082 = MOD_S_D
  { 1083,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1083 = MOD_S_H
  { 1084,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1084 = MOD_S_W
  { 1085,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1085 = MOD_U_B
  { 1086,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1086 = MOD_U_D
  { 1087,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1087 = MOD_U_H
  { 1088,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1088 = MOD_U_W
  { 1089,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1089 = MOVE16_MM
  { 1090,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1090 = MOVE_V
  { 1091,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1091 = MOVF_D32
  { 1092,	4,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1092 = MOVF_D32_MM
  { 1093,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1093 = MOVF_D64
  { 1094,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1094 = MOVF_I
  { 1095,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1095 = MOVF_I64
  { 1096,	4,	1,	82,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1096 = MOVF_I_MM
  { 1097,	4,	1,	83,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1097 = MOVF_S
  { 1098,	4,	1,	83,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1098 = MOVF_S_MM
  { 1099,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1099 = MOVN_I64_D64
  { 1100,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1100 = MOVN_I64_I
  { 1101,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1101 = MOVN_I64_I64
  { 1102,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1102 = MOVN_I64_S
  { 1103,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1103 = MOVN_I_D32
  { 1104,	4,	1,	84,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1104 = MOVN_I_D32_MM
  { 1105,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1105 = MOVN_I_D64
  { 1106,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1106 = MOVN_I_I
  { 1107,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1107 = MOVN_I_I64
  { 1108,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1108 = MOVN_I_MM
  { 1109,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1109 = MOVN_I_S
  { 1110,	4,	1,	86,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1110 = MOVN_I_S_MM
  { 1111,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1111 = MOVT_D32
  { 1112,	4,	1,	87,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1112 = MOVT_D32_MM
  { 1113,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1113 = MOVT_D64
  { 1114,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1114 = MOVT_I
  { 1115,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1115 = MOVT_I64
  { 1116,	4,	1,	88,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1116 = MOVT_I_MM
  { 1117,	4,	1,	89,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1117 = MOVT_S
  { 1118,	4,	1,	89,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1118 = MOVT_S_MM
  { 1119,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1119 = MOVZ_I64_D64
  { 1120,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1120 = MOVZ_I64_I
  { 1121,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1121 = MOVZ_I64_I64
  { 1122,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1122 = MOVZ_I64_S
  { 1123,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1123 = MOVZ_I_D32
  { 1124,	4,	1,	90,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1124 = MOVZ_I_D32_MM
  { 1125,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1125 = MOVZ_I_D64
  { 1126,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1126 = MOVZ_I_I
  { 1127,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1127 = MOVZ_I_I64
  { 1128,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1128 = MOVZ_I_MM
  { 1129,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1129 = MOVZ_I_S
  { 1130,	4,	1,	92,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1130 = MOVZ_I_S_MM
  { 1131,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1131 = MSUB
  { 1132,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1132 = MSUBF_D
  { 1133,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1133 = MSUBF_S
  { 1134,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1134 = MSUBR_Q_H
  { 1135,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1135 = MSUBR_Q_W
  { 1136,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1136 = MSUBU
  { 1137,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #1137 = MSUBU_DSP
  { 1138,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1138 = MSUBU_MM
  { 1139,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #1139 = MSUBV_B
  { 1140,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #1140 = MSUBV_D
  { 1141,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1141 = MSUBV_H
  { 1142,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1142 = MSUBV_W
  { 1143,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1143 = MSUB_D32
  { 1144,	4,	1,	95,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1144 = MSUB_D32_MM
  { 1145,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1145 = MSUB_D64
  { 1146,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #1146 = MSUB_DSP
  { 1147,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1147 = MSUB_MM
  { 1148,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1148 = MSUB_Q_H
  { 1149,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1149 = MSUB_Q_W
  { 1150,	4,	1,	96,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1150 = MSUB_S
  { 1151,	4,	1,	96,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1151 = MSUB_S_MM
  { 1152,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1152 = MTC0
  { 1153,	2,	1,	97,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1153 = MTC1
  { 1154,	2,	1,	97,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1154 = MTC1_MM
  { 1155,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1155 = MTC2
  { 1156,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1156 = MTHC1_D32
  { 1157,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1157 = MTHC1_D64
  { 1158,	2,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1158 = MTHC1_MM
  { 1159,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo63,0,nullptr },  // Inst #1159 = MTHI
  { 1160,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo151,0,nullptr },  // Inst #1160 = MTHI64
  { 1161,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1161 = MTHI_DSP
  { 1162,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo63,0,nullptr },  // Inst #1162 = MTHI_MM
  { 1163,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo220,0,nullptr },  // Inst #1163 = MTHLIP
  { 1164,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo63,0,nullptr },  // Inst #1164 = MTLO
  { 1165,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo151,0,nullptr },  // Inst #1165 = MTLO64
  { 1166,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1166 = MTLO_DSP
  { 1167,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo63,0,nullptr },  // Inst #1167 = MTLO_MM
  { 1168,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo151,0,nullptr },  // Inst #1168 = MTM0
  { 1169,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo151,0,nullptr },  // Inst #1169 = MTM1
  { 1170,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo151,0,nullptr },  // Inst #1170 = MTM2
  { 1171,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo151,0,nullptr },  // Inst #1171 = MTP0
  { 1172,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo151,0,nullptr },  // Inst #1172 = MTP1
  { 1173,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo151,0,nullptr },  // Inst #1173 = MTP2
  { 1174,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1174 = MUH
  { 1175,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1175 = MUHU
  { 1176,	3,	1,	100,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1176 = MUL
  { 1177,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo78,0,nullptr },  // Inst #1177 = MULEQ_S_W_PHL
  { 1178,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo78,0,nullptr },  // Inst #1178 = MULEQ_S_W_PHR
  { 1179,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo18,0,nullptr },  // Inst #1179 = MULEU_S_PH_QBL
  { 1180,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo18,0,nullptr },  // Inst #1180 = MULEU_S_PH_QBR
  { 1181,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo18,0,nullptr },  // Inst #1181 = MULQ_RS_PH
  { 1182,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo13,0,nullptr },  // Inst #1182 = MULQ_RS_W
  { 1183,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo18,0,nullptr },  // Inst #1183 = MULQ_S_PH
  { 1184,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo13,0,nullptr },  // Inst #1184 = MULQ_S_W
  { 1185,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1185 = MULR_Q_H
  { 1186,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1186 = MULR_Q_W
  { 1187,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo104,0,nullptr },  // Inst #1187 = MULSAQ_S_W_PH
  { 1188,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #1188 = MULSA_W_PH
  { 1189,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1189 = MULT
  { 1190,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1190 = MULTU_DSP
  { 1191,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1191 = MULT_DSP
  { 1192,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1192 = MULT_MM
  { 1193,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1193 = MULTu
  { 1194,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1194 = MULTu_MM
  { 1195,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1195 = MULU
  { 1196,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1196 = MULV_B
  { 1197,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1197 = MULV_D
  { 1198,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1198 = MULV_H
  { 1199,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1199 = MULV_W
  { 1200,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1200 = MUL_MM
  { 1201,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo18,0,nullptr },  // Inst #1201 = MUL_PH
  { 1202,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1202 = MUL_Q_H
  { 1203,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1203 = MUL_Q_W
  { 1204,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1204 = MUL_R6
  { 1205,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo18,0,nullptr },  // Inst #1205 = MUL_S_PH
  { 1206,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo152,0,nullptr },  // Inst #1206 = Mfhi16
  { 1207,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo152,0,nullptr },  // Inst #1207 = Mflo16
  { 1208,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1208 = Move32R16
  { 1209,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1209 = MoveR3216
  { 1210,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo91,0,nullptr },  // Inst #1210 = MultRxRy16
  { 1211,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo41,0,nullptr },  // Inst #1211 = MultRxRyRz16
  { 1212,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo91,0,nullptr },  // Inst #1212 = MultuRxRy16
  { 1213,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo41,0,nullptr },  // Inst #1213 = MultuRxRyRz16
  { 1214,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1214 = NLOC_B
  { 1215,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #1215 = NLOC_D
  { 1216,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1216 = NLOC_H
  { 1217,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #1217 = NLOC_W
  { 1218,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1218 = NLZC_B
  { 1219,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #1219 = NLZC_D
  { 1220,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1220 = NLZC_H
  { 1221,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #1221 = NLZC_W
  { 1222,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1222 = NMADD_D32
  { 1223,	4,	1,	103,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1223 = NMADD_D32_MM
  { 1224,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1224 = NMADD_D64
  { 1225,	4,	1,	104,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1225 = NMADD_S
  { 1226,	4,	1,	104,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1226 = NMADD_S_MM
  { 1227,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1227 = NMSUB_D32
  { 1228,	4,	1,	105,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1228 = NMSUB_D32_MM
  { 1229,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1229 = NMSUB_D64
  { 1230,	4,	1,	106,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1230 = NMSUB_S
  { 1231,	4,	1,	106,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1231 = NMSUB_S_MM
  { 1232,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1232 = NOP
  { 1233,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1233 = NOR
  { 1234,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1234 = NOR64
  { 1235,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1235 = NORI_B
  { 1236,	3,	1,	107,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1236 = NOR_MM
  { 1237,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1237 = NOR_V
  { 1238,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1238 = NOR_V_D_PSEUDO
  { 1239,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1239 = NOR_V_H_PSEUDO
  { 1240,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1240 = NOR_V_W_PSEUDO
  { 1241,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1241 = NOT16_MM
  { 1242,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #1242 = NegRxRy16
  { 1243,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #1243 = NotRxRy16
  { 1244,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1244 = OR
  { 1245,	3,	1,	108,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #1245 = OR16_MM
  { 1246,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1246 = OR64
  { 1247,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1247 = ORI_B
  { 1248,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1248 = OR_MM
  { 1249,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1249 = OR_V
  { 1250,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1250 = OR_V_D_PSEUDO
  { 1251,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1251 = OR_V_H_PSEUDO
  { 1252,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1252 = OR_V_W_PSEUDO
  { 1253,	3,	1,	109,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1253 = ORi
  { 1254,	3,	1,	108,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1254 = ORi64
  { 1255,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1255 = ORi_MM
  { 1256,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1256 = OrRxRxRy16
  { 1257,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1257 = PACKRL_PH
  { 1258,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1258 = PAUSE
  { 1259,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1259 = PCKEV_B
  { 1260,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1260 = PCKEV_D
  { 1261,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1261 = PCKEV_H
  { 1262,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1262 = PCKEV_W
  { 1263,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1263 = PCKOD_B
  { 1264,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1264 = PCKOD_D
  { 1265,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1265 = PCKOD_H
  { 1266,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1266 = PCKOD_W
  { 1267,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1267 = PCNT_B
  { 1268,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #1268 = PCNT_D
  { 1269,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1269 = PCNT_H
  { 1270,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #1270 = PCNT_W
  { 1271,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo18,0,nullptr },  // Inst #1271 = PICK_PH
  { 1272,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo18,0,nullptr },  // Inst #1272 = PICK_QB
  { 1273,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1273 = POP
  { 1274,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1274 = PRECEQU_PH_QBL
  { 1275,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1275 = PRECEQU_PH_QBLA
  { 1276,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1276 = PRECEQU_PH_QBR
  { 1277,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1277 = PRECEQU_PH_QBRA
  { 1278,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1278 = PRECEQ_W_PHL
  { 1279,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1279 = PRECEQ_W_PHR
  { 1280,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1280 = PRECEU_PH_QBL
  { 1281,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1281 = PRECEU_PH_QBLA
  { 1282,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1282 = PRECEU_PH_QBR
  { 1283,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1283 = PRECEU_PH_QBRA
  { 1284,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo18,0,nullptr },  // Inst #1284 = PRECRQU_S_QB_PH
  { 1285,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1285 = PRECRQ_PH_W
  { 1286,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1286 = PRECRQ_QB_PH
  { 1287,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo228,0,nullptr },  // Inst #1287 = PRECRQ_RS_PH_W
  { 1288,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1288 = PRECR_QB_PH
  { 1289,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1289 = PRECR_SRA_PH_W
  { 1290,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1290 = PRECR_SRA_R_PH_W
  { 1291,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1291 = PREF
  { 1292,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1292 = PREF_R6
  { 1293,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1293 = PREPEND
  { 1294,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1294 = PseudoCMPU_EQ_QB
  { 1295,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1295 = PseudoCMPU_LE_QB
  { 1296,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1296 = PseudoCMPU_LT_QB
  { 1297,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1297 = PseudoCMP_EQ_PH
  { 1298,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1298 = PseudoCMP_LE_PH
  { 1299,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1299 = PseudoCMP_LT_PH
  { 1300,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1300 = PseudoCVT_D32_W
  { 1301,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #1301 = PseudoCVT_D64_L
  { 1302,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1302 = PseudoCVT_D64_W
  { 1303,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #1303 = PseudoCVT_S_L
  { 1304,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1304 = PseudoCVT_S_W
  { 1305,	3,	1,	23,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1305 = PseudoDMULT
  { 1306,	3,	1,	24,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1306 = PseudoDMULTu
  { 1307,	3,	1,	29,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1307 = PseudoDSDIV
  { 1308,	3,	1,	41,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1308 = PseudoDUDIV
  { 1309,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1309 = PseudoIndirectBranch
  { 1310,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #1310 = PseudoIndirectBranch64
  { 1311,	4,	1,	74,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1311 = PseudoMADD
  { 1312,	4,	1,	75,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1312 = PseudoMADDU
  { 1313,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1313 = PseudoMFHI
  { 1314,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1314 = PseudoMFHI64
  { 1315,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1315 = PseudoMFLO
  { 1316,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1316 = PseudoMFLO64
  { 1317,	4,	1,	93,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1317 = PseudoMSUB
  { 1318,	4,	1,	94,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1318 = PseudoMSUBU
  { 1319,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1319 = PseudoMTLOHI
  { 1320,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1320 = PseudoMTLOHI64
  { 1321,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1321 = PseudoMTLOHI_DSP
  { 1322,	3,	1,	101,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1322 = PseudoMULT
  { 1323,	3,	1,	102,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1323 = PseudoMULTu
  { 1324,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1324 = PseudoPICK_PH
  { 1325,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1325 = PseudoPICK_QB
  { 1326,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1326 = PseudoReturn
  { 1327,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #1327 = PseudoReturn64
  { 1328,	3,	1,	110,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1328 = PseudoSDIV
  { 1329,	3,	1,	111,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1329 = PseudoUDIV
  { 1330,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1330 = RADDU_W_QB
  { 1331,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1331 = RDDSP
  { 1332,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1332 = RDHWR
  { 1333,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1333 = RDHWR64
  { 1334,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1334 = REPLV_PH
  { 1335,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1335 = REPLV_QB
  { 1336,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1336 = REPL_PH
  { 1337,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1337 = REPL_QB
  { 1338,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #1338 = RINT_D
  { 1339,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1339 = RINT_S
  { 1340,	3,	1,	113,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1340 = ROTR
  { 1341,	3,	1,	114,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1341 = ROTRV
  { 1342,	3,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1342 = ROTRV_MM
  { 1343,	3,	1,	113,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1343 = ROTR_MM
  { 1344,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #1344 = ROUND_L_D64
  { 1345,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #1345 = ROUND_L_S
  { 1346,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1346 = ROUND_W_D32
  { 1347,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #1347 = ROUND_W_D64
  { 1348,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1348 = ROUND_W_MM
  { 1349,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1349 = ROUND_W_S
  { 1350,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1350 = ROUND_W_S_MM
  { 1351,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1351 = Restore16
  { 1352,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1352 = RestoreX16
  { 1353,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1353 = RetRA
  { 1354,	0,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1354 = RetRA16
  { 1355,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1355 = SAT_S_B
  { 1356,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1356 = SAT_S_D
  { 1357,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1357 = SAT_S_H
  { 1358,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1358 = SAT_S_W
  { 1359,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1359 = SAT_U_B
  { 1360,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1360 = SAT_U_D
  { 1361,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1361 = SAT_U_H
  { 1362,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1362 = SAT_U_W
  { 1363,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1363 = SB
  { 1364,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1364 = SB64
  { 1365,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1365 = SB_MM
  { 1366,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1366 = SC
  { 1367,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1367 = SCD
  { 1368,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1368 = SCD_R6
  { 1369,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1369 = SC_MM
  { 1370,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1370 = SC_R6
  { 1371,	3,	0,	118,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1371 = SD
  { 1372,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1372 = SDBBP
  { 1373,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1373 = SDBBP_R6
  { 1374,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1374 = SDC1
  { 1375,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #1375 = SDC164
  { 1376,	3,	0,	119,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1376 = SDC1_MM
  { 1377,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #1377 = SDC2
  { 1378,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #1378 = SDC2_R6
  { 1379,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1379 = SDC3
  { 1380,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1380 = SDIV
  { 1381,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1381 = SDIV_MM
  { 1382,	3,	0,	120,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1382 = SDL
  { 1383,	3,	0,	121,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1383 = SDR
  { 1384,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1384 = SDXC1
  { 1385,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1385 = SDXC164
  { 1386,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1386 = SEB
  { 1387,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #1387 = SEB64
  { 1388,	2,	1,	123,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1388 = SEB_MM
  { 1389,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1389 = SEH
  { 1390,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #1390 = SEH64
  { 1391,	2,	1,	124,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1391 = SEH_MM
  { 1392,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1392 = SELEQZ
  { 1393,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1393 = SELEQZ64
  { 1394,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #1394 = SELEQZ_D
  { 1395,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1395 = SELEQZ_S
  { 1396,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1396 = SELNEZ
  { 1397,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1397 = SELNEZ64
  { 1398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #1398 = SELNEZ_D
  { 1399,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1399 = SELNEZ_S
  { 1400,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1400 = SEL_D
  { 1401,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1401 = SEL_S
  { 1402,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1402 = SEQ
  { 1403,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1403 = SEQi
  { 1404,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1404 = SH
  { 1405,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1405 = SH64
  { 1406,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1406 = SHF_B
  { 1407,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1407 = SHF_H
  { 1408,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1408 = SHF_W
  { 1409,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1409 = SHILO
  { 1410,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1410 = SHILOV
  { 1411,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo252,0,nullptr },  // Inst #1411 = SHLLV_PH
  { 1412,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo252,0,nullptr },  // Inst #1412 = SHLLV_QB
  { 1413,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo252,0,nullptr },  // Inst #1413 = SHLLV_S_PH
  { 1414,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo13,0,nullptr },  // Inst #1414 = SHLLV_S_W
  { 1415,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo253,0,nullptr },  // Inst #1415 = SHLL_PH
  { 1416,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo253,0,nullptr },  // Inst #1416 = SHLL_QB
  { 1417,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo253,0,nullptr },  // Inst #1417 = SHLL_S_PH
  { 1418,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo28,0,nullptr },  // Inst #1418 = SHLL_S_W
  { 1419,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1419 = SHRAV_PH
  { 1420,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1420 = SHRAV_QB
  { 1421,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1421 = SHRAV_R_PH
  { 1422,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1422 = SHRAV_R_QB
  { 1423,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1423 = SHRAV_R_W
  { 1424,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1424 = SHRA_PH
  { 1425,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1425 = SHRA_QB
  { 1426,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1426 = SHRA_R_PH
  { 1427,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1427 = SHRA_R_QB
  { 1428,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1428 = SHRA_R_W
  { 1429,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1429 = SHRLV_PH
  { 1430,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1430 = SHRLV_QB
  { 1431,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1431 = SHRL_PH
  { 1432,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1432 = SHRL_QB
  { 1433,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1433 = SH_MM
  { 1434,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1434 = SLDI_B
  { 1435,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1435 = SLDI_D
  { 1436,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #1436 = SLDI_H
  { 1437,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #1437 = SLDI_W
  { 1438,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1438 = SLD_B
  { 1439,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1439 = SLD_D
  { 1440,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1440 = SLD_H
  { 1441,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1441 = SLD_W
  { 1442,	3,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1442 = SLL
  { 1443,	3,	1,	128,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1443 = SLL16_MM
  { 1444,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #1444 = SLL64_32
  { 1445,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1445 = SLL64_64
  { 1446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1446 = SLLI_B
  { 1447,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1447 = SLLI_D
  { 1448,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1448 = SLLI_H
  { 1449,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1449 = SLLI_W
  { 1450,	3,	1,	129,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1450 = SLLV
  { 1451,	3,	1,	129,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1451 = SLLV_MM
  { 1452,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1452 = SLL_B
  { 1453,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1453 = SLL_D
  { 1454,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1454 = SLL_H
  { 1455,	3,	1,	128,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1455 = SLL_MM
  { 1456,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1456 = SLL_W
  { 1457,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1457 = SLT
  { 1458,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1458 = SLT64
  { 1459,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1459 = SLT_MM
  { 1460,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1460 = SLTi
  { 1461,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo259,0,nullptr },  // Inst #1461 = SLTi64
  { 1462,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1462 = SLTi_MM
  { 1463,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1463 = SLTiu
  { 1464,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo259,0,nullptr },  // Inst #1464 = SLTiu64
  { 1465,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1465 = SLTiu_MM
  { 1466,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1466 = SLTu
  { 1467,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1467 = SLTu64
  { 1468,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1468 = SLTu_MM
  { 1469,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1469 = SNE
  { 1470,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1470 = SNEi
  { 1471,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1471 = SNZ_B_PSEUDO
  { 1472,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1472 = SNZ_D_PSEUDO
  { 1473,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1473 = SNZ_H_PSEUDO
  { 1474,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1474 = SNZ_V_PSEUDO
  { 1475,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1475 = SNZ_W_PSEUDO
  { 1476,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1476 = SPLATI_B
  { 1477,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1477 = SPLATI_D
  { 1478,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1478 = SPLATI_H
  { 1479,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1479 = SPLATI_W
  { 1480,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1480 = SPLAT_B
  { 1481,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1481 = SPLAT_D
  { 1482,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1482 = SPLAT_H
  { 1483,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo267,0,nullptr },  // Inst #1483 = SPLAT_W
  { 1484,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1484 = SRA
  { 1485,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1485 = SRAI_B
  { 1486,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1486 = SRAI_D
  { 1487,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1487 = SRAI_H
  { 1488,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1488 = SRAI_W
  { 1489,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1489 = SRARI_B
  { 1490,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1490 = SRARI_D
  { 1491,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1491 = SRARI_H
  { 1492,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1492 = SRARI_W
  { 1493,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1493 = SRAR_B
  { 1494,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1494 = SRAR_D
  { 1495,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1495 = SRAR_H
  { 1496,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1496 = SRAR_W
  { 1497,	3,	1,	133,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1497 = SRAV
  { 1498,	3,	1,	133,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1498 = SRAV_MM
  { 1499,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1499 = SRA_B
  { 1500,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1500 = SRA_D
  { 1501,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1501 = SRA_H
  { 1502,	3,	1,	132,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1502 = SRA_MM
  { 1503,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1503 = SRA_W
  { 1504,	3,	1,	134,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1504 = SRL
  { 1505,	3,	1,	134,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1505 = SRL16_MM
  { 1506,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1506 = SRLI_B
  { 1507,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1507 = SRLI_D
  { 1508,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1508 = SRLI_H
  { 1509,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1509 = SRLI_W
  { 1510,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1510 = SRLRI_B
  { 1511,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1511 = SRLRI_D
  { 1512,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1512 = SRLRI_H
  { 1513,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1513 = SRLRI_W
  { 1514,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1514 = SRLR_B
  { 1515,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1515 = SRLR_D
  { 1516,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1516 = SRLR_H
  { 1517,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1517 = SRLR_W
  { 1518,	3,	1,	135,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1518 = SRLV
  { 1519,	3,	1,	135,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1519 = SRLV_MM
  { 1520,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1520 = SRL_B
  { 1521,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1521 = SRL_D
  { 1522,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1522 = SRL_H
  { 1523,	3,	1,	134,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1523 = SRL_MM
  { 1524,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1524 = SRL_W
  { 1525,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1525 = SSNOP
  { 1526,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #1526 = STORE_ACC128
  { 1527,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #1527 = STORE_ACC64
  { 1528,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1528 = STORE_ACC64DSP
  { 1529,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #1529 = STORE_CCOND_DSP
  { 1530,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1530 = ST_B
  { 1531,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1531 = ST_D
  { 1532,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1532 = ST_H
  { 1533,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #1533 = ST_W
  { 1534,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1534 = SUB
  { 1535,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1535 = SUBQH_PH
  { 1536,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1536 = SUBQH_R_PH
  { 1537,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1537 = SUBQH_R_W
  { 1538,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1538 = SUBQH_W
  { 1539,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #1539 = SUBQ_PH
  { 1540,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #1540 = SUBQ_S_PH
  { 1541,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #1541 = SUBQ_S_W
  { 1542,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1542 = SUBSUS_U_B
  { 1543,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1543 = SUBSUS_U_D
  { 1544,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1544 = SUBSUS_U_H
  { 1545,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1545 = SUBSUS_U_W
  { 1546,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1546 = SUBSUU_S_B
  { 1547,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1547 = SUBSUU_S_D
  { 1548,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1548 = SUBSUU_S_H
  { 1549,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1549 = SUBSUU_S_W
  { 1550,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1550 = SUBS_S_B
  { 1551,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1551 = SUBS_S_D
  { 1552,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1552 = SUBS_S_H
  { 1553,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1553 = SUBS_S_W
  { 1554,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1554 = SUBS_U_B
  { 1555,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1555 = SUBS_U_D
  { 1556,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1556 = SUBS_U_H
  { 1557,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1557 = SUBS_U_W
  { 1558,	3,	1,	136,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1558 = SUBU16_MM
  { 1559,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1559 = SUBUH_QB
  { 1560,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1560 = SUBUH_R_QB
  { 1561,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #1561 = SUBU_PH
  { 1562,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #1562 = SUBU_QB
  { 1563,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #1563 = SUBU_S_PH
  { 1564,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #1564 = SUBU_S_QB
  { 1565,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1565 = SUBVI_B
  { 1566,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1566 = SUBVI_D
  { 1567,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1567 = SUBVI_H
  { 1568,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1568 = SUBVI_W
  { 1569,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1569 = SUBV_B
  { 1570,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1570 = SUBV_D
  { 1571,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1571 = SUBV_H
  { 1572,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1572 = SUBV_W
  { 1573,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1573 = SUB_MM
  { 1574,	3,	1,	136,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1574 = SUBu
  { 1575,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1575 = SUBu_MM
  { 1576,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1576 = SUXC1
  { 1577,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1577 = SUXC164
  { 1578,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1578 = SUXC1_MM
  { 1579,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1579 = SW
  { 1580,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1580 = SW64
  { 1581,	3,	0,	139,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #1581 = SWC1
  { 1582,	3,	0,	139,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #1582 = SWC1_MM
  { 1583,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #1583 = SWC2
  { 1584,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #1584 = SWC2_R6
  { 1585,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1585 = SWC3
  { 1586,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1586 = SWL
  { 1587,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1587 = SWL64
  { 1588,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #1588 = SWL_MM
  { 1589,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1589 = SWR
  { 1590,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1590 = SWR64
  { 1591,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #1591 = SWR_MM
  { 1592,	3,	0,	142,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1592 = SWXC1
  { 1593,	3,	0,	142,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1593 = SWXC1_MM
  { 1594,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1594 = SW_MM
  { 1595,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1595 = SYNC
  { 1596,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1596 = SYNC_MM
  { 1597,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1597 = SYSCALL
  { 1598,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1598 = SYSCALL_MM
  { 1599,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1599 = SZ_B_PSEUDO
  { 1600,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1600 = SZ_D_PSEUDO
  { 1601,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1601 = SZ_H_PSEUDO
  { 1602,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1602 = SZ_V_PSEUDO
  { 1603,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1603 = SZ_W_PSEUDO
  { 1604,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1604 = Save16
  { 1605,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1605 = SaveX16
  { 1606,	4,	0,	117,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1606 = SbRxRyOffMemX16
  { 1607,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo268,0,nullptr },  // Inst #1607 = SebRx16
  { 1608,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo268,0,nullptr },  // Inst #1608 = SehRx16
  { 1609,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo269,0,nullptr },  // Inst #1609 = SelBeqZ
  { 1610,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo269,0,nullptr },  // Inst #1610 = SelBneZ
  { 1611,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1611 = SelTBteqZCmp
  { 1612,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1612 = SelTBteqZCmpi
  { 1613,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1613 = SelTBteqZSlt
  { 1614,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1614 = SelTBteqZSlti
  { 1615,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1615 = SelTBteqZSltiu
  { 1616,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1616 = SelTBteqZSltu
  { 1617,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1617 = SelTBtneZCmp
  { 1618,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1618 = SelTBtneZCmpi
  { 1619,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1619 = SelTBtneZSlt
  { 1620,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1620 = SelTBtneZSlti
  { 1621,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1621 = SelTBtneZSltiu
  { 1622,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1622 = SelTBtneZSltu
  { 1623,	4,	0,	127,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1623 = ShRxRyOffMemX16
  { 1624,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1624 = SllX16
  { 1625,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1625 = SllvRxRy16
  { 1626,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #1626 = SltCCRxRy16
  { 1627,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo91,0,nullptr },  // Inst #1627 = SltRxRy16
  { 1628,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1628 = SltiCCRxImmX16
  { 1629,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38,0,nullptr },  // Inst #1629 = SltiRxImm16
  { 1630,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38,0,nullptr },  // Inst #1630 = SltiRxImmX16
  { 1631,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1631 = SltiuCCRxImmX16
  { 1632,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38,0,nullptr },  // Inst #1632 = SltiuRxImm16
  { 1633,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38,0,nullptr },  // Inst #1633 = SltiuRxImmX16
  { 1634,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #1634 = SltuCCRxRy16
  { 1635,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo91,0,nullptr },  // Inst #1635 = SltuRxRy16
  { 1636,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41,0,nullptr },  // Inst #1636 = SltuRxRyRz16
  { 1637,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1637 = SraX16
  { 1638,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1638 = SravRxRy16
  { 1639,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1639 = SrlX16
  { 1640,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1640 = SrlvRxRy16
  { 1641,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #1641 = SubuRxRyRz16
  { 1642,	4,	0,	138,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1642 = SwRxRyOffMemX16
  { 1643,	3,	0,	138,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1643 = SwRxSpImmX16
  { 1644,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #1644 = TAILCALL
  { 1645,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo151,0,nullptr },  // Inst #1645 = TAILCALL64_R
  { 1646,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo63,0,nullptr },  // Inst #1646 = TAILCALL_R
  { 1647,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1647 = TEQ
  { 1648,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1648 = TEQI
  { 1649,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1649 = TEQI_MM
  { 1650,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1650 = TEQ_MM
  { 1651,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1651 = TGE
  { 1652,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1652 = TGEI
  { 1653,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1653 = TGEIU
  { 1654,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1654 = TGEIU_MM
  { 1655,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1655 = TGEI_MM
  { 1656,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1656 = TGEU
  { 1657,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1657 = TGEU_MM
  { 1658,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1658 = TGE_MM
  { 1659,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1659 = TLBP
  { 1660,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1660 = TLBP_MM
  { 1661,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1661 = TLBR
  { 1662,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1662 = TLBR_MM
  { 1663,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1663 = TLBWI
  { 1664,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1664 = TLBWI_MM
  { 1665,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1665 = TLBWR
  { 1666,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1666 = TLBWR_MM
  { 1667,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1667 = TLT
  { 1668,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1668 = TLTI
  { 1669,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1669 = TLTIU_MM
  { 1670,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1670 = TLTI_MM
  { 1671,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1671 = TLTU
  { 1672,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1672 = TLTU_MM
  { 1673,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1673 = TLT_MM
  { 1674,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1674 = TNE
  { 1675,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1675 = TNEI
  { 1676,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1676 = TNEI_MM
  { 1677,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1677 = TNE_MM
  { 1678,	0,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1678 = TRAP
  { 1679,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #1679 = TRUNC_L_D64
  { 1680,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #1680 = TRUNC_L_S
  { 1681,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1681 = TRUNC_W_D32
  { 1682,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #1682 = TRUNC_W_D64
  { 1683,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1683 = TRUNC_W_MM
  { 1684,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1684 = TRUNC_W_S
  { 1685,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1685 = TRUNC_W_S_MM
  { 1686,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1686 = TTLTIU
  { 1687,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1687 = UDIV
  { 1688,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1688 = UDIV_MM
  { 1689,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo31,0,nullptr },  // Inst #1689 = V3MULU
  { 1690,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo31,0,nullptr },  // Inst #1690 = VMM0
  { 1691,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo31,0,nullptr },  // Inst #1691 = VMULU
  { 1692,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #1692 = VSHF_B
  { 1693,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #1693 = VSHF_D
  { 1694,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1694 = VSHF_H
  { 1695,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1695 = VSHF_W
  { 1696,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1696 = WAIT
  { 1697,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1697 = WAIT_MM
  { 1698,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1698 = WRDSP
  { 1699,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1699 = WSBH
  { 1700,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1700 = WSBH_MM
  { 1701,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1701 = XOR
  { 1702,	3,	1,	145,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #1702 = XOR16_MM
  { 1703,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1703 = XOR64
  { 1704,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1704 = XORI_B
  { 1705,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1705 = XOR_MM
  { 1706,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1706 = XOR_V
  { 1707,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1707 = XOR_V_D_PSEUDO
  { 1708,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1708 = XOR_V_H_PSEUDO
  { 1709,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1709 = XOR_V_W_PSEUDO
  { 1710,	3,	1,	146,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1710 = XORi
  { 1711,	3,	1,	145,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1711 = XORi64
  { 1712,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1712 = XORi_MM
  { 1713,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1713 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'L', 'D', 'C', '1', 0,
  /* 32 */ 'S', 'D', 'C', '1', 0,
  /* 37 */ 'C', 'F', 'C', '1', 0,
  /* 42 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 48 */ 'C', 'T', 'C', '1', 0,
  /* 53 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 59 */ 'L', 'W', 'C', '1', 0,
  /* 64 */ 'S', 'W', 'C', '1', 0,
  /* 69 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 75 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 87 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 99 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'M', 'T', 'M', '1', 0,
  /* 110 */ 'M', 'T', 'P', '1', 0,
  /* 115 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 122 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 132 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 142 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 151 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 161 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 170 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 180 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 201 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 211 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 221 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 230 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 239 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 248 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 256 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 265 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 276 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 287 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 297 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 306 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 315 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 324 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 334 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 344 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 353 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 362 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 372 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 382 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 392 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 402 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 411 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 421 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 430 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 439 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 448 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 460 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 472 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 483 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 495 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 505 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 514 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 534 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 554 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 575 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 595 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 611 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 631 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 651 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 670 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 677 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 684 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 692 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 699 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 706 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 715 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 725 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 741 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 754 */ 'L', 'D', 'C', '2', 0,
  /* 759 */ 'S', 'D', 'C', '2', 0,
  /* 764 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 770 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 776 */ 'L', 'W', 'C', '2', 0,
  /* 781 */ 'S', 'W', 'C', '2', 0,
  /* 786 */ 'M', 'T', 'M', '2', 0,
  /* 791 */ 'M', 'T', 'P', '2', 0,
  /* 796 */ 'L', 'D', 'C', '3', 0,
  /* 801 */ 'S', 'D', 'C', '3', 0,
  /* 806 */ 'L', 'W', 'C', '3', 0,
  /* 811 */ 'S', 'W', 'C', '3', 0,
  /* 816 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 823 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 830 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 838 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 846 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 854 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 862 */ 'S', 'E', 'B', '6', '4', 0,
  /* 868 */ 'L', 'B', '6', '4', 0,
  /* 873 */ 'S', 'B', '6', '4', 0,
  /* 878 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 889 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 901 */ 'A', 'N', 'D', '6', '4', 0,
  /* 907 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 917 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 927 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 940 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 953 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 962 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 972 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 981 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 991 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1001 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1012 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1022 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1032 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1041 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1050 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1059 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1067 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1076 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1087 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1098 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1108 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1117 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1129 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1141 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1152 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1164 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1174 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1183 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1192 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1202 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1212 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1221 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1230 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1240 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1250 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1260 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1270 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1279 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1289 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1298 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1307 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1316 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1328 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1340 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1351 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1363 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1373 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1379 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1392 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1410 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1416 */ 'L', 'H', '6', '4', 0,
  /* 1421 */ 'S', 'H', '6', '4', 0,
  /* 1426 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1439 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1454 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1461 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1474 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1487 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1507 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1527 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1548 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1568 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1577 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1588 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1599 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1615 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1635 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1655 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1674 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1683 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1689 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1695 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1708 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1715 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1721 */ 'J', 'R', '6', '4', 0,
  /* 1726 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1733 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1739 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1745 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1753 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1759 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1765 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1771 */ 'L', 'W', '6', '4', 0,
  /* 1776 */ 'S', 'W', '6', '4', 0,
  /* 1781 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1788 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1795 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 1804 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 1813 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1820 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1827 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 1843 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 1864 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1873 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 1896 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 1903 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1910 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1917 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1923 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1938 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1954 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1960 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1966 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1973 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1985 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1993 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2003 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2011 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2018 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2038 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2058 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2079 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2099 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2115 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2135 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2155 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2174 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2184 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2191 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2202 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2210 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2225 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2240 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2255 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2270 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2277 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2284 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2300 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2316 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2332 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2348 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2365 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2382 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2401 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2417 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2433 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2449 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2463 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2476 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2489 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2504 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2520 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2531 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2544 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2557 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2571 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2585 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2601 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2614 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2627 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2635 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2651 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2664 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2678 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2692 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2706 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2720 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2736 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2752 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2767 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2782 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2791 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2800 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2808 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2815 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 2825 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 2839 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 2846 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2860 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2867 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 2875 */ 'J', 'a', 'l', '1', '6', 0,
  /* 2881 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 2894 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2904 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2916 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2928 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2941 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2956 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2968 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2980 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 2987 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2994 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3006 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3014 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3022 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3030 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3042 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3055 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3065 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3075 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3085 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3096 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3106 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3117 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3129 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3140 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3151 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3161 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3172 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3183 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3195 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3206 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3218 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3231 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3244 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3257 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3270 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3284 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3292 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3300 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3308 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3316 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3324 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3332 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 3340 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 3349 */ 'S', 'C', '_', 'R', '6', 0,
  /* 3355 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 3362 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 3369 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 3378 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 3386 */ 'L', 'L', '_', 'R', '6', 0,
  /* 3392 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 3400 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 3408 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 3417 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 3425 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3437 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3450 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 3469 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 3488 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3508 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3527 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3542 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3561 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 3580 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 3598 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3613 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3629 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3644 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3660 */ 'D', 'S', 'R', 'A', 0,
  /* 3665 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3671 */ 'D', 'L', 'S', 'A', 0,
  /* 3676 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 3683 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 3690 */ 'S', 'E', 'B', 0,
  /* 3694 */ 'E', 'H', 'B', 0,
  /* 3698 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 3704 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 3712 */ 'L', 'B', 0,
  /* 3715 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3723 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3736 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3748 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3765 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3774 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3783 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 3797 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 3805 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 3813 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 3821 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3834 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3846 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3863 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 3873 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3884 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3895 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 3906 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 3916 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3926 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3936 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3949 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3961 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3978 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 3986 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 3994 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4003 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4012 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4021 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4030 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4041 */ 'S', 'B', 0,
  /* 4044 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4051 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4062 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 4068 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 4076 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 4084 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 4093 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 4101 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 4108 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 4115 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 4121 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 4129 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 4137 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 4145 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 4152 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 4159 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 4166 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 4173 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 4180 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 4188 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 4196 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 4203 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 4210 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 4219 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 4226 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 4234 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 4242 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 4250 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 4257 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 4264 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 4273 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 4282 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 4290 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 4298 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 4306 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 4313 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 4321 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 4328 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 4334 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 4340 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 4348 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 4355 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 4361 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 4368 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 4375 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 4382 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 4390 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 4397 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 4406 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 4414 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 4422 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 4430 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 4439 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 4448 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 4457 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 4466 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 4474 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 4483 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 4492 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 4501 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 4509 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 4517 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 4528 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 4536 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 4544 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 4553 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 4561 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 4568 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 4575 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 4584 */ 'S', 'T', '_', 'B', 0,
  /* 4589 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 4598 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 4606 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 4614 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 4622 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 4631 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 4640 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 4649 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 4658 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 4666 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 4675 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 4684 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 4693 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 4704 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 4712 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 4720 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 4728 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 4736 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 4745 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 4753 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 4761 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 4769 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 4777 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 4784 */ 'B', 'Z', '_', 'B', 0,
  /* 4789 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 4795 */ 'B', 'C', 0,
  /* 4798 */ 'B', 'G', 'E', 'C', 0,
  /* 4803 */ 'B', 'N', 'E', 'C', 0,
  /* 4808 */ 'J', 'I', 'C', 0,
  /* 4812 */ 'B', 'A', 'L', 'C', 0,
  /* 4817 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 4823 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4831 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4839 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4847 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 4855 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 4863 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 4871 */ 'S', 'Y', 'N', 'C', 0,
  /* 4876 */ 'L', 'D', 'P', 'C', 0,
  /* 4881 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 4887 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 4894 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 4902 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 4908 */ 'L', 'W', 'P', 'C', 0,
  /* 4913 */ 'B', 'E', 'Q', 'C', 0,
  /* 4918 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4924 */ 'B', 'L', 'T', 'C', 0,
  /* 4929 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 4935 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 4941 */ 'B', 'N', 'V', 'C', 0,
  /* 4946 */ 'B', 'O', 'V', 'C', 0,
  /* 4951 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4957 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 4963 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 4969 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 4975 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 4981 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 4987 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 4993 */ 'S', 'C', 'D', 0,
  /* 4997 */ 'D', 'A', 'D', 'D', 0,
  /* 5002 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5013 */ 'D', 'S', 'H', 'D', 0,
  /* 5018 */ 'L', 'L', 'D', 0,
  /* 5022 */ 'A', 'N', 'D', 0,
  /* 5026 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5034 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 5041 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 5054 */ 'D', 'M', 'O', 'D', 0,
  /* 5059 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 5076 */ 'S', 'D', 0,
  /* 5079 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 5087 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 5095 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 5102 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 5108 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 5115 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 5123 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 5132 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 5141 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 5150 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 5157 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 5165 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 5172 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 5179 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 5186 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 5194 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 5200 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 5208 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 5216 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 5223 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 5230 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 5240 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 5248 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5256 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5267 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 5277 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 5286 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 5293 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 5300 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 5308 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 5316 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 5324 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 5331 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 5338 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 5348 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 5356 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 5364 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 5371 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 5379 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 5386 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 5393 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 5400 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 5408 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 5415 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 5422 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 5431 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 5438 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 5446 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 5454 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 5462 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 5471 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 5480 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 5488 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 5496 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 5504 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 5510 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 5517 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 5523 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 5532 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 5539 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 5545 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 5553 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 5560 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 5567 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 5574 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 5581 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 5588 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 5598 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 5607 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 5614 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 5621 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5628 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5638 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5646 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5654 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5665 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5675 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 5684 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 5691 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 5698 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 5705 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 5712 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 5719 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 5728 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 5735 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 5743 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 5750 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 5757 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 5766 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5775 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5784 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5794 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 5805 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5814 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5824 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 5832 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 5840 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 5848 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 5857 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 5866 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 5875 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 5884 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 5892 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 5901 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 5910 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 5919 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 5928 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 5936 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 5944 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5954 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5964 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 5975 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 5983 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 5991 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 6000 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 6008 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 6015 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6022 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6029 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6039 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 6047 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6055 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6066 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 6076 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 6085 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 6092 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 6100 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 6109 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6117 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6126 */ 'S', 'T', '_', 'D', 0,
  /* 6131 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6140 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6149 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6159 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 6170 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6179 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6189 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 6197 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 6205 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 6213 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 6222 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 6231 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 6240 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 6249 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 6257 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 6266 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 6275 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 6284 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 6293 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 6304 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 6312 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 6320 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6330 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6340 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 6348 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 6356 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 6365 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 6373 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 6381 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 6389 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 6397 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 6404 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 6411 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 6418 */ 'B', 'Z', '_', 'D', 0,
  /* 6423 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 6432 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 6438 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 6447 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 6460 */ 'T', 'G', 'E', 0,
  /* 6464 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 6470 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 6477 */ 'B', 'N', 'E', 0,
  /* 6481 */ 'S', 'N', 'E', 0,
  /* 6485 */ 'T', 'N', 'E', 0,
  /* 6489 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 6495 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 6505 */ 'B', 'C', '1', 'F', 0,
  /* 6510 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 6523 */ 'P', 'R', 'E', 'F', 0,
  /* 6528 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6543 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6557 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 6571 */ 'D', 'S', 'B', 'H', 0,
  /* 6576 */ 'W', 'S', 'B', 'H', 0,
  /* 6581 */ 'S', 'E', 'H', 0,
  /* 6585 */ 'L', 'H', 0,
  /* 6588 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 6596 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6609 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6621 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6637 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 6653 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6662 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6671 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 6685 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 6693 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 6701 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 6709 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 6719 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 6726 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 6734 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 6742 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 6758 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 6768 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6779 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6790 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 6801 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 6812 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 6822 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 6831 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6841 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6851 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6861 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6871 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6881 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6891 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 6902 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 6918 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 6926 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 6934 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 6943 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 6952 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 6961 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 6970 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6979 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6990 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7004 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7018 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7027 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7039 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7053 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7065 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7078 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7091 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7101 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7111 */ 'S', 'H', 0,
  /* 7114 */ 'D', 'M', 'U', 'H', 0,
  /* 7119 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 7125 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 7133 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 7141 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 7150 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 7158 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 7165 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 7172 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 7178 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 7186 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 7194 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 7202 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 7209 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 7216 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 7223 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 7230 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 7238 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 7245 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 7252 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 7261 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 7268 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 7276 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 7284 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 7292 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 7301 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 7310 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 7318 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 7326 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 7334 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 7341 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 7347 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 7353 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 7361 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 7368 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 7376 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 7382 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 7388 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 7397 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 7406 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 7414 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 7424 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 7434 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 7443 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 7450 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 7457 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 7464 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 7472 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 7479 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7488 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7497 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7507 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7516 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7526 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 7534 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 7542 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 7550 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 7559 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 7568 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 7577 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 7586 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 7594 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 7603 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 7612 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 7621 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 7630 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 7639 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 7647 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 7655 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 7666 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 7674 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 7684 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 7692 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 7701 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 7709 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 7716 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 7723 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 7732 */ 'S', 'T', '_', 'H', 0,
  /* 7737 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7746 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7755 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7765 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7774 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7784 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 7792 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 7800 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 7808 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 7817 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 7826 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 7835 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 7844 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 7852 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 7861 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 7870 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 7879 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 7888 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 7899 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 7907 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 7915 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 7923 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 7931 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 7940 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 7948 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 7956 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 7964 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 7972 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 7979 */ 'B', 'Z', '_', 'H', 0,
  /* 7984 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 7990 */ 'D', 'I', 0,
  /* 7993 */ 'T', 'G', 'E', 'I', 0,
  /* 7998 */ 'T', 'N', 'E', 'I', 0,
  /* 8003 */ 'D', 'A', 'H', 'I', 0,
  /* 8008 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 8019 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 8032 */ 'P', 'H', 'I', 0,
  /* 8036 */ 'M', 'T', 'H', 'I', 0,
  /* 8041 */ 'T', 'E', 'Q', 'I', 0,
  /* 8046 */ 'D', 'A', 'T', 'I', 0,
  /* 8051 */ 'T', 'L', 'T', 'I', 0,
  /* 8056 */ 'D', 'A', 'U', 'I', 0,
  /* 8061 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 8067 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8078 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8089 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 8096 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 8105 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 8114 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 8121 */ 'J', 0,
  /* 8123 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 8129 */ 'B', 'A', 'L', 0,
  /* 8133 */ 'J', 'A', 'L', 0,
  /* 8137 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 8144 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 8151 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8166 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8180 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8195 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8206 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8217 */ 'L', 'D', 'L', 0,
  /* 8221 */ 'S', 'D', 'L', 0,
  /* 8225 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8234 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8243 */ 'B', 'N', 'E', 'L', 0,
  /* 8248 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 8254 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8267 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8280 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8292 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8306 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 8315 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 8323 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 8331 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 8339 */ 'K', 'I', 'L', 'L', 0,
  /* 8344 */ 'D', 'S', 'L', 'L', 0,
  /* 8349 */ 'B', 'E', 'Q', 'L', 0,
  /* 8354 */ 'D', 'S', 'R', 'L', 0,
  /* 8359 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 8365 */ 'D', 'M', 'U', 'L', 0,
  /* 8370 */ 'L', 'W', 'L', 0,
  /* 8374 */ 'S', 'W', 'L', 0,
  /* 8378 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 8384 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 8390 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 8396 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 8402 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 8418 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 8432 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8440 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8448 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8456 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8464 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8473 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8482 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8490 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8498 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8506 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8514 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8523 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8532 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8541 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8550 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8563 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8576 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8588 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8602 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8616 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8628 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8641 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8653 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8665 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 8677 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 8688 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 8701 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 8712 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 8721 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 8730 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 8740 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 8750 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 8758 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 8767 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 8776 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 8786 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 8794 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 8804 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 8813 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 8824 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 8833 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 8843 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 8853 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 8860 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 8867 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 8873 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 8879 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 8887 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 8895 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 8903 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 8909 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 8918 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 8927 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 8935 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 8943 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 8950 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 8957 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 8964 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 8971 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 8979 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 8987 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 8995 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 9002 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 9008 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 9014 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 9020 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 9028 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 9036 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 9044 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 9052 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 9060 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 9068 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 9077 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 9087 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 9097 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 9107 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 9117 */ 'J', '_', 'M', 'M', 0,
  /* 9122 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 9131 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 9138 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 9148 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 9158 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 9169 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 9176 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 9183 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 9191 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 9198 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 9205 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 9212 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 9220 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 9228 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 9236 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 9249 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 9260 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9267 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9274 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 9282 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 9288 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 9296 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 9303 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 9310 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 9318 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 9327 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 9334 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 9341 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 9349 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9357 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9368 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9379 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 9386 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 9395 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9405 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9416 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9426 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9437 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9448 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 9458 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 9468 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 9480 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 9492 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 9502 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 9513 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 9523 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 9534 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 9544 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 9554 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 9564 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9577 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9590 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9602 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9615 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9626 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 9634 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 9643 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 9651 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 9658 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 9665 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 9673 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 9682 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 9689 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 9698 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 9707 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 9715 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 9724 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 9733 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 9741 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 9748 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 9756 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9764 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9772 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9780 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 9788 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 9796 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 9805 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 9811 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 9817 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 9830 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 9841 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 9852 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 9862 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 9873 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 9884 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 9893 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 9901 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 9909 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 9916 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 9924 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 9932 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 9940 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 9948 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 9956 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 9964 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 9971 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 9978 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 9986 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 9994 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 10001 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 10009 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 10018 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 10031 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 10040 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 10050 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 10056 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 10062 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 10069 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 10076 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 10092 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 10109 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10126 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10143 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10159 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10172 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10184 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10199 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10214 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10231 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10246 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10260 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10275 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10290 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10305 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10318 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10330 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10344 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10359 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10374 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10389 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10402 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10414 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10427 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10439 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10454 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10469 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10486 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10501 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10515 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10530 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10545 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10560 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10573 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10585 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10606 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10628 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10649 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10670 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10692 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10713 */ 'D', 'C', 'L', 'O', 0,
  /* 10718 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 10729 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 10735 */ 'M', 'T', 'L', 'O', 0,
  /* 10740 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 10749 */ 'T', 'R', 'A', 'P', 0,
  /* 10754 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 10763 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 10769 */ 'T', 'L', 'B', 'P', 0,
  /* 10774 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 10781 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 10788 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 10794 */ 'D', 'P', 'O', 'P', 0,
  /* 10799 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 10813 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 10828 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 10834 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 10840 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 10849 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 10858 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 10873 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 10889 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10898 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10915 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10924 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 10933 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 10942 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 10951 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 10961 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 10971 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 10981 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 10991 */ 'E', 'X', 'T', 'P', 0,
  /* 10996 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 11011 */ 'B', 'E', 'Q', 0,
  /* 11015 */ 'S', 'E', 'Q', 0,
  /* 11019 */ 'T', 'E', 'Q', 0,
  /* 11023 */ 'T', 'L', 'B', 'R', 0,
  /* 11028 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11043 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11057 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11072 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11083 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11094 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 11101 */ 'L', 'D', 'R', 0,
  /* 11105 */ 'S', 'D', 'R', 0,
  /* 11109 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11122 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11135 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11147 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11161 */ 'J', 'R', 0,
  /* 11164 */ 'J', 'A', 'L', 'R', 0,
  /* 11169 */ 'N', 'O', 'R', 0,
  /* 11173 */ 'X', 'O', 'R', 0,
  /* 11177 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 11183 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 11189 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 11195 */ 'L', 'W', 'R', 0,
  /* 11199 */ 'S', 'W', 'R', 0,
  /* 11203 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 11216 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 11227 */ 'C', 'I', 'N', 'S', 0,
  /* 11232 */ 'D', 'I', 'N', 'S', 0,
  /* 11237 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 11254 */ 'E', 'X', 'T', 'S', 0,
  /* 11259 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 11269 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 11279 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 11290 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 11301 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 11308 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 11315 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 11322 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 11330 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 11337 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 11345 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 11353 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 11362 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 11370 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 11380 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 11391 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11399 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11409 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 11416 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 11425 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 11435 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 11443 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 11451 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 11458 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 11465 */ 'C', '_', 'F', '_', 'S', 0,
  /* 11471 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 11479 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 11486 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 11495 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 11504 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 11510 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 11518 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 11525 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 11535 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 11545 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 11554 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 11564 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 11572 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 11578 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 11588 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 11595 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 11604 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 11612 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 11622 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11633 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11641 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11651 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 11658 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 11667 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 11674 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 11682 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 11690 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 11698 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 11708 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 11719 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 11727 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 11737 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 11744 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 11753 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 11760 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 11768 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 11775 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 11782 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 11789 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 11799 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 11809 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 11818 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 11828 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 11836 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 11842 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 11851 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 11860 */ 'B', 'C', '1', 'T', 0,
  /* 11865 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 11871 */ 'W', 'A', 'I', 'T', 0,
  /* 11876 */ 'S', 'L', 'T', 0,
  /* 11880 */ 'T', 'L', 'T', 0,
  /* 11884 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 11896 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 11907 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 11918 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 11933 */ 'D', 'E', 'X', 'T', 0,
  /* 11938 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 11950 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 11962 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 11968 */ 'T', 'G', 'E', 'U', 0,
  /* 11973 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 11979 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 11985 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 11992 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 11999 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 12005 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 12011 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 12017 */ 'T', 'L', 'T', 'U', 0,
  /* 12022 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 12028 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 12034 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 12040 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 12047 */ 'D', 'D', 'I', 'V', 0,
  /* 12052 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 12064 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 12075 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 12087 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 12098 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 12104 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 12110 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 12117 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 12125 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 12131 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 12138 */ 'I', 'N', 'S', 'V', 0,
  /* 12143 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 12149 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 12156 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 12163 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 12169 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 12175 */ 'B', 'Z', '_', 'V', 0,
  /* 12180 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 12186 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 12192 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 12199 */ 'L', 'W', 0,
  /* 12202 */ 'S', 'W', 0,
  /* 12205 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 12221 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 12229 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 12237 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 12253 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 12259 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 12267 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 12276 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 12285 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 12294 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 12301 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 12309 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 12316 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 12323 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 12330 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 12338 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 12344 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 12352 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 12360 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 12367 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 12374 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 12382 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 12390 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 12397 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 12404 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 12412 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 12420 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 12428 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 12435 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 12442 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 12449 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 12456 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 12471 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 12483 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 12500 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 12515 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 12523 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 12531 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 12538 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 12545 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 12553 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 12560 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 12567 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 12576 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 12583 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 12591 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 12599 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 12607 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 12616 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 12625 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 12633 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 12641 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 12649 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 12656 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 12662 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 12671 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 12678 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 12684 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 12692 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 12699 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 12706 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 12718 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 12730 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 12737 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 12744 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 12751 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 12759 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 12766 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 12773 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 12780 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 12788 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 12796 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 12802 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 12811 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 12820 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 12828 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 12838 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 12848 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 12857 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 12864 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 12871 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 12878 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 12885 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 12892 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 12901 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 12908 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 12916 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 12923 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 12930 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 12939 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 12949 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 12959 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 12968 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 12978 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 12988 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 12995 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 13005 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 13015 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 13026 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 13035 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13044 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13053 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13063 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 13074 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 13083 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 13093 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 13101 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 13109 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 13117 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 13126 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 13135 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 13144 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 13153 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 13162 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 13170 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 13179 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 13188 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 13197 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 13206 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 13215 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 13224 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 13233 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 13242 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 13250 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 13258 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 13268 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 13278 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 13292 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 13303 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 13311 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 13321 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 13329 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 13338 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 13346 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 13353 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 13360 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 13367 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 13375 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 13383 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 13390 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 13398 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 13407 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 13415 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 13424 */ 'S', 'T', '_', 'W', 0,
  /* 13429 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13438 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13447 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13457 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 13468 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 13477 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 13487 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 13495 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 13503 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 13511 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 13520 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 13529 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 13538 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 13547 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 13555 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 13564 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 13573 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 13582 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 13591 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 13602 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 13610 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 13618 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 13628 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 13638 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 13646 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 13654 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 13663 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 13671 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 13679 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 13687 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 13695 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 13702 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 13709 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 13717 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 13724 */ 'B', 'Z', '_', 'W', 0,
  /* 13729 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 13735 */ 'L', 'H', 'X', 0,
  /* 13739 */ 'J', 'A', 'L', 'X', 0,
  /* 13744 */ 'L', 'B', 'U', 'X', 0,
  /* 13749 */ 'L', 'W', 'X', 0,
  /* 13753 */ 'C', 'O', 'P', 'Y', 0,
  /* 13758 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 13774 */ 'B', 'G', 'E', 'Z', 0,
  /* 13779 */ 'B', 'L', 'E', 'Z', 0,
  /* 13784 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 13791 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 13798 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 13805 */ 'D', 'C', 'L', 'Z', 0,
  /* 13810 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 13817 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 13824 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 13831 */ 'B', 'G', 'T', 'Z', 0,
  /* 13836 */ 'B', 'L', 'T', 'Z', 0,
  /* 13841 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 13849 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 13857 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 13870 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 13884 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 'R', 'e', 'g', 0,
  /* 13897 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 13918 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 13924 */ 'A', 'N', 'D', 'i', 0,
  /* 13929 */ 'S', 'N', 'E', 'i', 0,
  /* 13934 */ 'S', 'E', 'Q', 'i', 0,
  /* 13939 */ 'X', 'O', 'R', 'i', 0,
  /* 13944 */ 'S', 'L', 'T', 'i', 0,
  /* 13949 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 13965 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 13979 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 13993 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 14007 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 14021 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 14035 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 14048 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14061 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14072 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 14085 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 14098 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 14111 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 14124 */ 'L', 'B', 'u', 0,
  /* 14128 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 14134 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 14140 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 14146 */ 'L', 'H', 'u', 0,
  /* 14150 */ 'S', 'L', 'T', 'u', 0,
  /* 14155 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 14168 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 14180 */ 'L', 'W', 'u', 0,
  /* 14184 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14203 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14213 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14231 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 14237 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 14252 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 14267 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 14281 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    8032U, 10040U, 10076U, 8234U, 8225U, 8339U, 6528U, 6543U, 
    6510U, 6557U, 11237U, 6495U, 6447U, 13753U, 6470U, 11918U, 
    5041U, 10740U, 11907U, 5059U, 6861U, 3906U, 13206U, 4998U, 
    4894U, 9236U, 8677U, 8701U, 9249U, 6662U, 6779U, 12949U, 
    12523U, 6734U, 6841U, 13188U, 4918U, 4084U, 5132U, 7141U, 
    12276U, 4492U, 5919U, 7630U, 13233U, 4684U, 6284U, 7879U, 
    13582U, 8843U, 3774U, 3884U, 6926U, 3986U, 6881U, 3926U, 
    4298U, 5496U, 7326U, 12641U, 4754U, 6374U, 7949U, 13672U, 
    4951U, 4068U, 5115U, 7125U, 12259U, 8928U, 13919U, 9932U, 
    14197U, 10022U, 14135U, 9986U, 10092U, 10996U, 10063U, 4887U, 
    5022U, 8721U, 901U, 4173U, 8943U, 12143U, 10260U, 10344U, 
    10515U, 13924U, 1896U, 9940U, 5034U, 4397U, 5766U, 7479U, 
    13035U, 4589U, 6131U, 7737U, 13429U, 2115U, 611U, 1615U, 
    3542U, 2038U, 534U, 1507U, 3469U, 2079U, 575U, 1548U, 
    3508U, 2058U, 554U, 1527U, 3488U, 2155U, 651U, 1655U, 
    3580U, 2018U, 514U, 1487U, 3450U, 2135U, 631U, 1635U, 
    3561U, 2099U, 595U, 1599U, 3527U, 8057U, 4881U, 4474U, 
    5901U, 7603U, 13215U, 4666U, 6266U, 7861U, 13564U, 4422U, 
    5840U, 7542U, 13109U, 4614U, 6205U, 7800U, 13503U, 2557U, 
    2433U, 2941U, 2585U, 2382U, 2881U, 2449U, 3244U, 3183U, 
    3692U, 14134U, 8129U, 4812U, 10062U, 11094U, 4795U, 13810U, 
    6505U, 8248U, 8971U, 13784U, 11860U, 8359U, 9626U, 13817U, 
    13791U, 4234U, 5446U, 7276U, 12591U, 4368U, 5691U, 7450U, 
    12864U, 11011U, 1715U, 4913U, 8349U, 4847U, 4975U, 8918U, 
    9260U, 4798U, 4929U, 13774U, 1781U, 8137U, 4823U, 8323U, 
    9357U, 9138U, 4957U, 8378U, 9893U, 13831U, 1813U, 4855U, 
    4981U, 8390U, 9916U, 4210U, 5422U, 7252U, 12567U, 4340U, 
    5545U, 7353U, 12684U, 4264U, 5462U, 7292U, 12607U, 4382U, 
    5735U, 7464U, 12908U, 12040U, 10755U, 13779U, 1788U, 4831U, 
    4963U, 8384U, 9901U, 4924U, 4935U, 13836U, 1820U, 8144U, 
    4863U, 8331U, 9368U, 9148U, 4987U, 8396U, 9924U, 4313U, 
    12192U, 4306U, 12180U, 6477U, 1373U, 4803U, 4180U, 5400U, 
    7230U, 12545U, 4152U, 5379U, 7209U, 12449U, 8243U, 4839U, 
    4969U, 8909U, 8957U, 4941U, 4789U, 6432U, 7984U, 12186U, 
    13729U, 4946U, 505U, 10143U, 8123U, 9122U, 4188U, 10246U, 
    10184U, 10439U, 10330U, 12156U, 10501U, 4282U, 5480U, 7310U, 
    12625U, 4561U, 6008U, 7709U, 13346U, 4784U, 6418U, 7979U, 
    12175U, 13724U, 2968U, 2614U, 2980U, 2627U, 2956U, 2601U, 
    2867U, 3292U, 2678U, 2225U, 2706U, 2255U, 2736U, 2767U, 
    2791U, 3284U, 2664U, 2210U, 2692U, 2240U, 2720U, 2752U, 
    2782U, 1379U, 1827U, 6464U, 3369U, 1141U, 11545U, 472U, 
    1340U, 9852U, 11809U, 9590U, 4219U, 5431U, 7261U, 12576U, 
    4355U, 5615U, 7376U, 12767U, 37U, 8448U, 3676U, 11227U, 
    692U, 5758U, 11674U, 4430U, 5848U, 7550U, 13117U, 4622U, 
    6213U, 7808U, 13511U, 4414U, 5832U, 7534U, 13101U, 4606U, 
    6197U, 7792U, 13495U, 10714U, 9205U, 3401U, 4448U, 5866U, 
    7568U, 13135U, 4640U, 6231U, 7826U, 13529U, 4509U, 5936U, 
    7647U, 13250U, 4712U, 6312U, 7907U, 13610U, 13806U, 9909U, 
    3418U, 3821U, 3723U, 3936U, 3834U, 3736U, 3949U, 3852U, 
    3754U, 3967U, 5675U, 6748U, 11658U, 5371U, 11471U, 5277U, 
    6643U, 11416U, 6076U, 6908U, 11744U, 5338U, 11425U, 5628U, 
    11612U, 5230U, 11370U, 6029U, 11698U, 5654U, 11622U, 5256U, 
    11380U, 6055U, 11708U, 5588U, 11578U, 5665U, 11641U, 5267U, 
    11399U, 6066U, 11727U, 5598U, 11595U, 13758U, 10231U, 10486U, 
    4544U, 5991U, 7692U, 13329U, 4736U, 6356U, 7931U, 13654U, 
    48U, 8482U, 3683U, 11259U, 12211U, 9817U, 8408U, 11269U, 
    12243U, 9437U, 1164U, 8688U, 11564U, 9502U, 362U, 8628U, 
    1230U, 8424U, 13284U, 9873U, 495U, 1363U, 9884U, 11828U, 
    9615U, 344U, 1212U, 11651U, 248U, 1059U, 11465U, 221U, 
    1032U, 11409U, 402U, 1270U, 11737U, 180U, 991U, 11345U, 
    190U, 1001U, 11353U, 287U, 1098U, 11510U, 372U, 1240U, 
    11682U, 201U, 1012U, 11362U, 382U, 1250U, 11690U, 324U, 
    1192U, 11604U, 230U, 1041U, 11451U, 334U, 1202U, 11633U, 
    211U, 1022U, 11391U, 392U, 1260U, 11719U, 306U, 1174U, 
    11588U, 3065U, 2904U, 2531U, 743U, 4997U, 13918U, 14196U, 
    14140U, 8003U, 10069U, 8046U, 8056U, 10754U, 10713U, 3400U, 
    13805U, 3417U, 12047U, 12028U, 11865U, 9634U, 11933U, 10056U, 
    12022U, 7990U, 11232U, 10050U, 12011U, 12048U, 12029U, 4528U, 
    5975U, 7666U, 13303U, 4720U, 6340U, 7915U, 13638U, 9014U, 
    3671U, 3332U, 0U, 42U, 764U, 5054U, 11962U, 6U, 
    53U, 770U, 7114U, 11973U, 8365U, 11890U, 14161U, 11999U, 
    3392U, 5892U, 7594U, 13170U, 6257U, 7852U, 13555U, 5814U, 
    7516U, 13083U, 6179U, 7774U, 13477U, 6990U, 7065U, 12706U, 
    7027U, 8195U, 11072U, 7091U, 6970U, 10794U, 7004U, 7078U, 
    12718U, 7053U, 5784U, 7497U, 13053U, 6149U, 7755U, 13447U, 
    8206U, 11083U, 7101U, 7018U, 11177U, 684U, 12131U, 6571U, 
    12058U, 5013U, 8344U, 670U, 715U, 12098U, 3660U, 115U, 
    12034U, 8354U, 677U, 12104U, 4046U, 14128U, 12081U, 3151U, 
    3129U, 3694U, 7995U, 9022U, 11866U, 9635U, 11934U, 10991U, 
    10774U, 12117U, 12125U, 13015U, 12978U, 7674U, 13709U, 13005U, 
    12959U, 7612U, 12916U, 11254U, 699U, 9682U, 1392U, 1843U, 
    5750U, 353U, 1221U, 9341U, 11667U, 9513U, 12988U, 5179U, 
    161U, 972U, 8927U, 11330U, 9416U, 12323U, 5324U, 12428U, 
    5614U, 12766U, 5757U, 13026U, 5216U, 12360U, 6015U, 13353U, 
    315U, 8616U, 1183U, 706U, 8665U, 5286U, 12390U, 5705U, 
    12878U, 5638U, 12780U, 5240U, 12374U, 6039U, 13367U, 5300U, 
    12404U, 5574U, 12737U, 6397U, 430U, 1298U, 9756U, 11775U, 
    9544U, 13695U, 7368U, 12751U, 5087U, 10109U, 12229U, 10126U, 
    5523U, 12662U, 5719U, 12892U, 5944U, 13258U, 6320U, 13618U, 
    5532U, 12671U, 5728U, 12901U, 4321U, 5510U, 10199U, 10454U, 
    7334U, 12649U, 5079U, 12221U, 1152U, 11554U, 483U, 1351U, 
    9862U, 11818U, 9602U, 5186U, 12330U, 5141U, 12285U, 6411U, 
    13717U, 5123U, 12267U, 5567U, 12730U, 439U, 8653U, 1307U, 
    11782U, 9554U, 5157U, 12301U, 5553U, 297U, 1108U, 9183U, 
    11518U, 9492U, 12692U, 256U, 1067U, 8979U, 11479U, 9458U, 
    5607U, 12759U, 6092U, 13390U, 6117U, 13415U, 5331U, 12435U, 
    5621U, 12773U, 5223U, 12367U, 6022U, 13360U, 5293U, 12397U, 
    5712U, 12885U, 6109U, 411U, 1279U, 9673U, 11760U, 9523U, 
    13407U, 5150U, 142U, 953U, 8879U, 11315U, 9395U, 12294U, 
    5646U, 12788U, 5248U, 12382U, 6047U, 13375U, 5308U, 12412U, 
    5581U, 12744U, 5954U, 13268U, 6330U, 13628U, 7382U, 12796U, 
    5794U, 13063U, 6159U, 13457U, 2825U, 5805U, 7507U, 13074U, 
    6170U, 7765U, 13468U, 5775U, 7488U, 13044U, 6140U, 7746U, 
    13438U, 4769U, 6389U, 7964U, 13687U, 4348U, 5560U, 7361U, 
    12699U, 4129U, 5208U, 7186U, 12352U, 4390U, 5743U, 7472U, 
    12923U, 11228U, 4575U, 10585U, 6100U, 10628U, 10214U, 10606U, 
    10469U, 10670U, 7723U, 10649U, 13398U, 10692U, 12138U, 4137U, 
    5316U, 7194U, 12420U, 9379U, 8121U, 8133U, 11164U, 8794U, 
    1726U, 14048U, 14061U, 8813U, 9386U, 3704U, 9288U, 9349U, 
    13739U, 9131U, 4817U, 4808U, 11161U, 8786U, 1721U, 10981U, 
    8712U, 3698U, 3340U, 9282U, 9117U, 2875U, 2011U, 2808U, 
    2800U, 3014U, 2846U, 3712U, 868U, 13744U, 8867U, 14124U, 
    1954U, 9971U, 5019U, 27U, 816U, 8432U, 754U, 3300U, 
    796U, 4167U, 5394U, 7224U, 12539U, 8217U, 4876U, 11101U, 
    69U, 830U, 4116U, 5195U, 7173U, 12339U, 14203U, 1973U, 
    10018U, 6585U, 1416U, 13735U, 9002U, 14146U, 1960U, 9994U, 
    8750U, 8312U, 5018U, 3362U, 9163U, 3386U, 3425U, 878U, 
    10799U, 10858U, 14213U, 14184U, 13949U, 3672U, 3333U, 81U, 
    846U, 8514U, 13961U, 1917U, 9964U, 12199U, 1771U, 59U, 
    8498U, 776U, 3316U, 806U, 8370U, 1683U, 9191U, 4908U, 
    11195U, 1753U, 9327U, 4902U, 9741U, 13749U, 93U, 8532U, 
    9805U, 14180U, 2284U, 2348U, 2316U, 2365U, 2894U, 2635U, 
    2520U, 14021U, 13870U, 13857U, 13884U, 741U, 2994U, 2651U, 
    2401U, 2463U, 5008U, 5356U, 11443U, 7424U, 12838U, 11956U, 
    10961U, 9698U, 4753U, 6373U, 7948U, 13671U, 171U, 8564U, 
    982U, 10849U, 8935U, 7397U, 12811U, 11338U, 9427U, 8254U, 
    11109U, 8280U, 11135U, 5108U, 11308U, 4457U, 5875U, 7577U, 
    13144U, 4649U, 6240U, 7835U, 13538U, 4093U, 5142U, 7150U, 
    12286U, 6412U, 11836U, 4536U, 5983U, 7684U, 13321U, 4728U, 
    6348U, 7923U, 13646U, 1U, 43U, 8456U, 765U, 122U, 
    907U, 8464U, 8014U, 8740U, 1432U, 10889U, 9036U, 10724U, 
    8776U, 1701U, 10924U, 9212U, 5095U, 11301U, 4439U, 5857U, 
    7559U, 13126U, 4631U, 6222U, 7817U, 13520U, 4076U, 5124U, 
    7133U, 12268U, 5568U, 11572U, 4466U, 5884U, 7586U, 13162U, 
    4658U, 6249U, 7844U, 13547U, 725U, 1938U, 5055U, 4044U, 
    11963U, 4406U, 5824U, 7526U, 13093U, 4598U, 6189U, 7784U, 
    13487U, 8730U, 12149U, 239U, 8576U, 1050U, 8089U, 1568U, 
    9077U, 11458U, 9448U, 927U, 8067U, 1461U, 11279U, 265U, 
    8588U, 1076U, 8096U, 1577U, 9087U, 11486U, 9468U, 421U, 
    8641U, 1289U, 8114U, 1674U, 9097U, 11768U, 9534U, 940U, 
    8078U, 1474U, 11290U, 276U, 8602U, 1087U, 8105U, 1588U, 
    9107U, 11495U, 9480U, 4057U, 5348U, 11435U, 7414U, 12828U, 
    11944U, 10951U, 9689U, 4745U, 6365U, 7940U, 13663U, 152U, 
    8551U, 963U, 10840U, 8887U, 7388U, 12802U, 11323U, 9406U, 
    7U, 54U, 8490U, 771U, 132U, 917U, 8473U, 8036U, 
    1454U, 10915U, 9044U, 10781U, 10735U, 1708U, 10933U, 9220U, 
    17U, 105U, 786U, 22U, 110U, 791U, 7115U, 11974U, 
    8366U, 8292U, 11147U, 8151U, 11028U, 6801U, 12995U, 6851U, 
    13197U, 7434U, 12848U, 7039U, 6979U, 11891U, 10971U, 10942U, 
    9665U, 14162U, 10009U, 11994U, 4777U, 6404U, 7972U, 13702U, 
    9184U, 6719U, 7406U, 12820U, 3393U, 6822U, 2860U, 2987U, 
    2174U, 1993U, 3085U, 3218U, 3117U, 3270U, 4101U, 5165U, 
    7158U, 12309U, 4108U, 5172U, 7165U, 12316U, 170U, 8563U, 
    981U, 11337U, 9426U, 151U, 8550U, 962U, 11322U, 9405U, 
    10790U, 11169U, 1733U, 4250U, 9296U, 12163U, 10275U, 10359U, 
    10530U, 8824U, 3055U, 3096U, 11170U, 8805U, 1734U, 4251U, 
    9297U, 12164U, 10276U, 10360U, 10531U, 13940U, 1904U, 9949U, 
    3195U, 6709U, 6489U, 4761U, 6381U, 7956U, 13679U, 4121U, 
    5200U, 7178U, 12344U, 4568U, 6085U, 7716U, 13383U, 6677U, 
    3789U, 10795U, 8180U, 3613U, 11057U, 3644U, 8267U, 11122U, 
    8166U, 3598U, 11043U, 3629U, 6621U, 12471U, 6596U, 12500U, 
    6609U, 12456U, 12483U, 6523U, 3378U, 5026U, 3846U, 3748U, 
    3961U, 6742U, 6637U, 6902U, 12205U, 8402U, 12237U, 8418U, 
    13278U, 11884U, 14155U, 12052U, 12075U, 13897U, 1873U, 5002U, 
    11950U, 8008U, 1426U, 10718U, 1695U, 4051U, 11938U, 8019U, 
    1439U, 10898U, 11896U, 14168U, 6671U, 3783U, 14035U, 1923U, 
    12064U, 12087U, 4030U, 10828U, 11189U, 1745U, 6952U, 4012U, 
    6693U, 3805U, 6093U, 11753U, 11178U, 12132U, 9796U, 9310U, 
    1129U, 11535U, 460U, 1328U, 9841U, 11799U, 9577U, 2815U, 
    2191U, 3665U, 2003U, 4501U, 5928U, 7639U, 13242U, 4704U, 
    6304U, 7899U, 13602U, 4041U, 873U, 8873U, 4921U, 4993U, 
    3355U, 8903U, 3349U, 5076U, 10763U, 3408U, 32U, 823U, 
    8440U, 759U, 3308U, 801U, 12059U, 9764U, 8221U, 11105U, 
    75U, 838U, 3690U, 862U, 8860U, 6581U, 1410U, 8995U, 
    13824U, 1804U, 6438U, 11851U, 13798U, 1795U, 6423U, 11842U, 
    5504U, 11504U, 11015U, 13934U, 7111U, 1421U, 4146U, 7203U, 
    12443U, 10729U, 12110U, 6943U, 4003U, 6891U, 13311U, 6685U, 
    3797U, 6812U, 13153U, 6934U, 3994U, 6790U, 3895U, 12968U, 
    6588U, 3715U, 6758U, 3863U, 12930U, 6961U, 4021U, 6701U, 
    3813U, 9008U, 4166U, 5393U, 7223U, 12538U, 4115U, 5194U, 
    7172U, 12338U, 8345U, 8758U, 716U, 1864U, 4196U, 5408U, 
    7238U, 12553U, 12099U, 9780U, 4328U, 5517U, 7341U, 9169U, 
    12656U, 11876U, 1765U, 9651U, 13944U, 1910U, 9956U, 14231U, 
    1985U, 10031U, 14150U, 1966U, 10001U, 6481U, 13929U, 10159U, 
    10305U, 10389U, 10414U, 10560U, 4273U, 5471U, 7301U, 12616U, 
    4553U, 6000U, 7701U, 13338U, 3661U, 4159U, 5386U, 7216U, 
    12531U, 4226U, 5438U, 7268U, 12583U, 4361U, 5684U, 7443U, 
    12857U, 12035U, 9748U, 4062U, 5102U, 7119U, 8853U, 12253U, 
    8355U, 8767U, 4203U, 5415U, 7245U, 12560U, 4242U, 5454U, 
    7284U, 12599U, 4375U, 5698U, 7457U, 12871U, 12105U, 9788U, 
    4334U, 5539U, 7347U, 9176U, 12678U, 10788U, 3437U, 889U, 
    10813U, 10873U, 4584U, 6126U, 7732U, 13424U, 4047U, 6653U, 
    6768U, 12939U, 12515U, 6726U, 6831U, 13179U, 4693U, 6293U, 
    7888U, 13591U, 4517U, 5964U, 7655U, 13292U, 4483U, 5910U, 
    7621U, 13224U, 4675U, 6275U, 7870U, 13573U, 8833U, 3765U, 
    3873U, 6918U, 3978U, 6871U, 3916U, 4290U, 5488U, 7318U, 
    12633U, 4746U, 6366U, 7941U, 13664U, 8880U, 14129U, 9978U, 
    87U, 854U, 8523U, 12202U, 1776U, 64U, 8506U, 781U, 
    3324U, 811U, 8374U, 1689U, 9198U, 11199U, 1759U, 9334U, 
    99U, 8541U, 9811U, 4871U, 8895U, 8315U, 9158U, 10172U, 
    10318U, 10402U, 10427U, 10573U, 2839U, 2202U, 2300U, 3006U, 
    3022U, 13849U, 13841U, 14085U, 13979U, 14111U, 14007U, 14252U, 
    14281U, 14072U, 13965U, 14098U, 13993U, 14237U, 14267U, 2332U, 
    2270U, 3161U, 3030U, 3075U, 2489U, 2916U, 2544U, 2504U, 
    2928U, 2571U, 3042U, 3106U, 3257U, 2184U, 3140U, 2277U, 
    3172U, 3231U, 2417U, 2476U, 8306U, 11203U, 11216U, 11019U, 
    8041U, 9052U, 9267U, 6460U, 7993U, 11979U, 9715U, 9020U, 
    11968U, 9707U, 8950U, 10769U, 9228U, 11023U, 9274U, 8061U, 
    9068U, 11183U, 9318U, 11880U, 8051U, 9724U, 9060U, 12017U, 
    9733U, 9658U, 6485U, 7998U, 9028U, 8964U, 10749U, 1117U, 
    11525U, 448U, 1316U, 9830U, 11789U, 9564U, 11985U, 12082U, 
    9772U, 11992U, 12U, 12005U, 4145U, 5364U, 7202U, 12442U, 
    11871U, 9643U, 10834U, 6576U, 8987U, 11173U, 8804U, 1739U, 
    4257U, 9303U, 12169U, 10290U, 10374U, 10545U, 13939U, 1903U, 
    9948U, 3206U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1714);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1714);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget21 = 5,
  brtarget26 = 6,
  brtarget_mm = 7,
  calloffset16 = 8,
  calltarget = 9,
  calltarget_mm = 10,
  condcode = 11,
  cpinst_operand = 12,
  f32imm = 13,
  f64imm = 14,
  i16imm = 15,
  i1imm = 16,
  i32imm = 17,
  i64imm = 18,
  i8imm = 19,
  imm32 = 20,
  imm64 = 21,
  jmpoffset16 = 22,
  jmptarget = 23,
  jmptarget_mm = 24,
  mem = 25,
  mem16 = 26,
  mem16_ea = 27,
  mem_ea = 28,
  mem_mm_12 = 29,
  mem_msa = 30,
  mem_simm11 = 31,
  mem_simm9 = 32,
  pcrel16 = 33,
  simm10 = 34,
  simm10_64 = 35,
  simm11 = 36,
  simm12 = 37,
  simm16 = 38,
  simm16_64 = 39,
  simm18_lsl3 = 40,
  simm19_lsl2 = 41,
  simm20 = 42,
  simm3_lsa2 = 43,
  simm4 = 44,
  simm5 = 45,
  simm7 = 46,
  simm9 = 47,
  simm9_addiusp = 48,
  size_ext = 49,
  size_ins = 50,
  uimm10 = 51,
  uimm16 = 52,
  uimm16_64 = 53,
  uimm2 = 54,
  uimm20 = 55,
  uimm3 = 56,
  uimm3_shift = 57,
  uimm4 = 58,
  uimm5 = 59,
  uimm5_lsl2 = 60,
  uimm6 = 61,
  uimm6_lsl2 = 62,
  uimm8 = 63,
  uimmz = 64,
  vsplat_simm10 = 65,
  vsplat_simm5 = 66,
  vsplat_uimm1 = 67,
  vsplat_uimm2 = 68,
  vsplat_uimm3 = 69,
  vsplat_uimm4 = 70,
  vsplat_uimm5 = 71,
  vsplat_uimm6 = 72,
  vsplat_uimm8 = 73,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 169;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

