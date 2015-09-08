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

namespace PPC {
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
    ADD4	= 20,
    ADD4TLS	= 21,
    ADD4o	= 22,
    ADD8	= 23,
    ADD8TLS	= 24,
    ADD8TLS_	= 25,
    ADD8o	= 26,
    ADDC	= 27,
    ADDC8	= 28,
    ADDC8o	= 29,
    ADDCo	= 30,
    ADDE	= 31,
    ADDE8	= 32,
    ADDE8o	= 33,
    ADDEo	= 34,
    ADDI	= 35,
    ADDI8	= 36,
    ADDIC	= 37,
    ADDIC8	= 38,
    ADDICo	= 39,
    ADDIS	= 40,
    ADDIS8	= 41,
    ADDISdtprelHA	= 42,
    ADDISdtprelHA32	= 43,
    ADDISgotTprelHA	= 44,
    ADDIStlsgdHA	= 45,
    ADDIStlsldHA	= 46,
    ADDIStocHA	= 47,
    ADDIdtprelL	= 48,
    ADDIdtprelL32	= 49,
    ADDItlsgdL	= 50,
    ADDItlsgdL32	= 51,
    ADDItlsldL	= 52,
    ADDItlsldL32	= 53,
    ADDItocL	= 54,
    ADDME	= 55,
    ADDME8	= 56,
    ADDME8o	= 57,
    ADDMEo	= 58,
    ADDZE	= 59,
    ADDZE8	= 60,
    ADDZE8o	= 61,
    ADDZEo	= 62,
    ADJCALLSTACKDOWN	= 63,
    ADJCALLSTACKUP	= 64,
    AND	= 65,
    AND8	= 66,
    AND8o	= 67,
    ANDC	= 68,
    ANDC8	= 69,
    ANDC8o	= 70,
    ANDCo	= 71,
    ANDISo	= 72,
    ANDISo8	= 73,
    ANDIo	= 74,
    ANDIo8	= 75,
    ANDIo_1_EQ_BIT	= 76,
    ANDIo_1_EQ_BIT8	= 77,
    ANDIo_1_GT_BIT	= 78,
    ANDIo_1_GT_BIT8	= 79,
    ANDo	= 80,
    ATOMIC_CMP_SWAP_I16	= 81,
    ATOMIC_CMP_SWAP_I32	= 82,
    ATOMIC_CMP_SWAP_I64	= 83,
    ATOMIC_CMP_SWAP_I8	= 84,
    ATOMIC_LOAD_ADD_I16	= 85,
    ATOMIC_LOAD_ADD_I32	= 86,
    ATOMIC_LOAD_ADD_I64	= 87,
    ATOMIC_LOAD_ADD_I8	= 88,
    ATOMIC_LOAD_AND_I16	= 89,
    ATOMIC_LOAD_AND_I32	= 90,
    ATOMIC_LOAD_AND_I64	= 91,
    ATOMIC_LOAD_AND_I8	= 92,
    ATOMIC_LOAD_NAND_I16	= 93,
    ATOMIC_LOAD_NAND_I32	= 94,
    ATOMIC_LOAD_NAND_I64	= 95,
    ATOMIC_LOAD_NAND_I8	= 96,
    ATOMIC_LOAD_OR_I16	= 97,
    ATOMIC_LOAD_OR_I32	= 98,
    ATOMIC_LOAD_OR_I64	= 99,
    ATOMIC_LOAD_OR_I8	= 100,
    ATOMIC_LOAD_SUB_I16	= 101,
    ATOMIC_LOAD_SUB_I32	= 102,
    ATOMIC_LOAD_SUB_I64	= 103,
    ATOMIC_LOAD_SUB_I8	= 104,
    ATOMIC_LOAD_XOR_I16	= 105,
    ATOMIC_LOAD_XOR_I32	= 106,
    ATOMIC_LOAD_XOR_I64	= 107,
    ATOMIC_LOAD_XOR_I8	= 108,
    ATOMIC_SWAP_I16	= 109,
    ATOMIC_SWAP_I32	= 110,
    ATOMIC_SWAP_I64	= 111,
    ATOMIC_SWAP_I8	= 112,
    B	= 113,
    BA	= 114,
    BC	= 115,
    BCC	= 116,
    BCCA	= 117,
    BCCCTR	= 118,
    BCCCTR8	= 119,
    BCCCTRL	= 120,
    BCCCTRL8	= 121,
    BCCL	= 122,
    BCCLA	= 123,
    BCCLR	= 124,
    BCCLRL	= 125,
    BCCTR	= 126,
    BCCTR8	= 127,
    BCCTR8n	= 128,
    BCCTRL	= 129,
    BCCTRL8	= 130,
    BCCTRL8n	= 131,
    BCCTRLn	= 132,
    BCCTRn	= 133,
    BCL	= 134,
    BCLR	= 135,
    BCLRL	= 136,
    BCLRLn	= 137,
    BCLRn	= 138,
    BCLalways	= 139,
    BCLn	= 140,
    BCTR	= 141,
    BCTR8	= 142,
    BCTRL	= 143,
    BCTRL8	= 144,
    BCn	= 145,
    BDNZ	= 146,
    BDNZ8	= 147,
    BDNZA	= 148,
    BDNZAm	= 149,
    BDNZAp	= 150,
    BDNZL	= 151,
    BDNZLA	= 152,
    BDNZLAm	= 153,
    BDNZLAp	= 154,
    BDNZLR	= 155,
    BDNZLR8	= 156,
    BDNZLRL	= 157,
    BDNZLRLm	= 158,
    BDNZLRLp	= 159,
    BDNZLRm	= 160,
    BDNZLRp	= 161,
    BDNZLm	= 162,
    BDNZLp	= 163,
    BDNZm	= 164,
    BDNZp	= 165,
    BDZ	= 166,
    BDZ8	= 167,
    BDZA	= 168,
    BDZAm	= 169,
    BDZAp	= 170,
    BDZL	= 171,
    BDZLA	= 172,
    BDZLAm	= 173,
    BDZLAp	= 174,
    BDZLR	= 175,
    BDZLR8	= 176,
    BDZLRL	= 177,
    BDZLRLm	= 178,
    BDZLRLp	= 179,
    BDZLRm	= 180,
    BDZLRp	= 181,
    BDZLm	= 182,
    BDZLp	= 183,
    BDZm	= 184,
    BDZp	= 185,
    BL	= 186,
    BL8	= 187,
    BL8_NOP	= 188,
    BL8_NOP_TLS	= 189,
    BL8_TLS	= 190,
    BL8_TLS_	= 191,
    BLA	= 192,
    BLA8	= 193,
    BLA8_NOP	= 194,
    BLR	= 195,
    BLRL	= 196,
    BL_TLS	= 197,
    BRINC	= 198,
    CLRLSLDI	= 199,
    CLRLSLDIo	= 200,
    CLRLSLWI	= 201,
    CLRLSLWIo	= 202,
    CLRRDI	= 203,
    CLRRDIo	= 204,
    CLRRWI	= 205,
    CLRRWIo	= 206,
    CMPD	= 207,
    CMPDI	= 208,
    CMPLD	= 209,
    CMPLDI	= 210,
    CMPLW	= 211,
    CMPLWI	= 212,
    CMPW	= 213,
    CMPWI	= 214,
    CNTLZD	= 215,
    CNTLZDo	= 216,
    CNTLZW	= 217,
    CNTLZWo	= 218,
    CR6SET	= 219,
    CR6UNSET	= 220,
    CRAND	= 221,
    CRANDC	= 222,
    CREQV	= 223,
    CRNAND	= 224,
    CRNOR	= 225,
    CROR	= 226,
    CRORC	= 227,
    CRSET	= 228,
    CRUNSET	= 229,
    CRXOR	= 230,
    DCBA	= 231,
    DCBF	= 232,
    DCBI	= 233,
    DCBST	= 234,
    DCBT	= 235,
    DCBTST	= 236,
    DCBZ	= 237,
    DCBZL	= 238,
    DCCCI	= 239,
    DIVD	= 240,
    DIVDU	= 241,
    DIVDUo	= 242,
    DIVDo	= 243,
    DIVW	= 244,
    DIVWU	= 245,
    DIVWUo	= 246,
    DIVWo	= 247,
    DSS	= 248,
    DSSALL	= 249,
    DST	= 250,
    DST64	= 251,
    DSTST	= 252,
    DSTST64	= 253,
    DSTSTT	= 254,
    DSTSTT64	= 255,
    DSTT	= 256,
    DSTT64	= 257,
    DYNALLOC	= 258,
    DYNALLOC8	= 259,
    EH_SjLj_LongJmp32	= 260,
    EH_SjLj_LongJmp64	= 261,
    EH_SjLj_SetJmp32	= 262,
    EH_SjLj_SetJmp64	= 263,
    EH_SjLj_Setup	= 264,
    EIEIO	= 265,
    EQV	= 266,
    EQV8	= 267,
    EQV8o	= 268,
    EQVo	= 269,
    EVABS	= 270,
    EVADDIW	= 271,
    EVADDSMIAAW	= 272,
    EVADDSSIAAW	= 273,
    EVADDUMIAAW	= 274,
    EVADDUSIAAW	= 275,
    EVADDW	= 276,
    EVAND	= 277,
    EVANDC	= 278,
    EVCMPEQ	= 279,
    EVCMPGTS	= 280,
    EVCMPGTU	= 281,
    EVCMPLTS	= 282,
    EVCMPLTU	= 283,
    EVCNTLSW	= 284,
    EVCNTLZW	= 285,
    EVDIVWS	= 286,
    EVDIVWU	= 287,
    EVEQV	= 288,
    EVEXTSB	= 289,
    EVEXTSH	= 290,
    EVLDD	= 291,
    EVLDDX	= 292,
    EVLDH	= 293,
    EVLDHX	= 294,
    EVLDW	= 295,
    EVLDWX	= 296,
    EVLHHESPLAT	= 297,
    EVLHHESPLATX	= 298,
    EVLHHOSSPLAT	= 299,
    EVLHHOSSPLATX	= 300,
    EVLHHOUSPLAT	= 301,
    EVLHHOUSPLATX	= 302,
    EVLWHE	= 303,
    EVLWHEX	= 304,
    EVLWHOS	= 305,
    EVLWHOSX	= 306,
    EVLWHOU	= 307,
    EVLWHOUX	= 308,
    EVLWHSPLAT	= 309,
    EVLWHSPLATX	= 310,
    EVLWWSPLAT	= 311,
    EVLWWSPLATX	= 312,
    EVMERGEHI	= 313,
    EVMERGEHILO	= 314,
    EVMERGELO	= 315,
    EVMERGELOHI	= 316,
    EVMHEGSMFAA	= 317,
    EVMHEGSMFAN	= 318,
    EVMHEGSMIAA	= 319,
    EVMHEGSMIAN	= 320,
    EVMHEGUMIAA	= 321,
    EVMHEGUMIAN	= 322,
    EVMHESMF	= 323,
    EVMHESMFA	= 324,
    EVMHESMFAAW	= 325,
    EVMHESMFANW	= 326,
    EVMHESMI	= 327,
    EVMHESMIA	= 328,
    EVMHESMIAAW	= 329,
    EVMHESMIANW	= 330,
    EVMHESSF	= 331,
    EVMHESSFA	= 332,
    EVMHESSFAAW	= 333,
    EVMHESSFANW	= 334,
    EVMHESSIAAW	= 335,
    EVMHESSIANW	= 336,
    EVMHEUMI	= 337,
    EVMHEUMIA	= 338,
    EVMHEUMIAAW	= 339,
    EVMHEUMIANW	= 340,
    EVMHEUSIAAW	= 341,
    EVMHEUSIANW	= 342,
    EVMHOGSMFAA	= 343,
    EVMHOGSMFAN	= 344,
    EVMHOGSMIAA	= 345,
    EVMHOGSMIAN	= 346,
    EVMHOGUMIAA	= 347,
    EVMHOGUMIAN	= 348,
    EVMHOSMF	= 349,
    EVMHOSMFA	= 350,
    EVMHOSMFAAW	= 351,
    EVMHOSMFANW	= 352,
    EVMHOSMI	= 353,
    EVMHOSMIA	= 354,
    EVMHOSMIAAW	= 355,
    EVMHOSMIANW	= 356,
    EVMHOSSF	= 357,
    EVMHOSSFA	= 358,
    EVMHOSSFAAW	= 359,
    EVMHOSSFANW	= 360,
    EVMHOSSIAAW	= 361,
    EVMHOSSIANW	= 362,
    EVMHOUMI	= 363,
    EVMHOUMIA	= 364,
    EVMHOUMIAAW	= 365,
    EVMHOUMIANW	= 366,
    EVMHOUSIAAW	= 367,
    EVMHOUSIANW	= 368,
    EVMRA	= 369,
    EVMWHSMF	= 370,
    EVMWHSMFA	= 371,
    EVMWHSMI	= 372,
    EVMWHSMIA	= 373,
    EVMWHSSF	= 374,
    EVMWHSSFA	= 375,
    EVMWHUMI	= 376,
    EVMWHUMIA	= 377,
    EVMWLSMIAAW	= 378,
    EVMWLSMIANW	= 379,
    EVMWLSSIAAW	= 380,
    EVMWLSSIANW	= 381,
    EVMWLUMI	= 382,
    EVMWLUMIA	= 383,
    EVMWLUMIAAW	= 384,
    EVMWLUMIANW	= 385,
    EVMWLUSIAAW	= 386,
    EVMWLUSIANW	= 387,
    EVMWSMF	= 388,
    EVMWSMFA	= 389,
    EVMWSMFAA	= 390,
    EVMWSMFAN	= 391,
    EVMWSMI	= 392,
    EVMWSMIA	= 393,
    EVMWSMIAA	= 394,
    EVMWSMIAN	= 395,
    EVMWSSF	= 396,
    EVMWSSFA	= 397,
    EVMWSSFAA	= 398,
    EVMWSSFAN	= 399,
    EVMWUMI	= 400,
    EVMWUMIA	= 401,
    EVMWUMIAA	= 402,
    EVMWUMIAN	= 403,
    EVNAND	= 404,
    EVNEG	= 405,
    EVNOR	= 406,
    EVOR	= 407,
    EVORC	= 408,
    EVRLW	= 409,
    EVRLWI	= 410,
    EVRNDW	= 411,
    EVSLW	= 412,
    EVSLWI	= 413,
    EVSPLATFI	= 414,
    EVSPLATI	= 415,
    EVSRWIS	= 416,
    EVSRWIU	= 417,
    EVSRWS	= 418,
    EVSRWU	= 419,
    EVSTDD	= 420,
    EVSTDDX	= 421,
    EVSTDH	= 422,
    EVSTDHX	= 423,
    EVSTDW	= 424,
    EVSTDWX	= 425,
    EVSTWHE	= 426,
    EVSTWHEX	= 427,
    EVSTWHO	= 428,
    EVSTWHOX	= 429,
    EVSTWWE	= 430,
    EVSTWWEX	= 431,
    EVSTWWO	= 432,
    EVSTWWOX	= 433,
    EVSUBFSMIAAW	= 434,
    EVSUBFSSIAAW	= 435,
    EVSUBFUMIAAW	= 436,
    EVSUBFUSIAAW	= 437,
    EVSUBFW	= 438,
    EVSUBIFW	= 439,
    EVXOR	= 440,
    EXTLDI	= 441,
    EXTLDIo	= 442,
    EXTLWI	= 443,
    EXTLWIo	= 444,
    EXTRDI	= 445,
    EXTRDIo	= 446,
    EXTRWI	= 447,
    EXTRWIo	= 448,
    EXTSB	= 449,
    EXTSB8	= 450,
    EXTSB8_32_64	= 451,
    EXTSB8o	= 452,
    EXTSBo	= 453,
    EXTSH	= 454,
    EXTSH8	= 455,
    EXTSH8_32_64	= 456,
    EXTSH8o	= 457,
    EXTSHo	= 458,
    EXTSW	= 459,
    EXTSW_32_64	= 460,
    EXTSW_32_64o	= 461,
    EXTSWo	= 462,
    FABSD	= 463,
    FABSDo	= 464,
    FABSS	= 465,
    FABSSo	= 466,
    FADD	= 467,
    FADDS	= 468,
    FADDSo	= 469,
    FADDo	= 470,
    FADDrtz	= 471,
    FCFID	= 472,
    FCFIDS	= 473,
    FCFIDSo	= 474,
    FCFIDU	= 475,
    FCFIDUS	= 476,
    FCFIDUSo	= 477,
    FCFIDUo	= 478,
    FCFIDo	= 479,
    FCMPUD	= 480,
    FCMPUS	= 481,
    FCPSGND	= 482,
    FCPSGNDo	= 483,
    FCPSGNS	= 484,
    FCPSGNSo	= 485,
    FCTID	= 486,
    FCTIDUZ	= 487,
    FCTIDUZo	= 488,
    FCTIDZ	= 489,
    FCTIDZo	= 490,
    FCTIDo	= 491,
    FCTIW	= 492,
    FCTIWUZ	= 493,
    FCTIWUZo	= 494,
    FCTIWZ	= 495,
    FCTIWZo	= 496,
    FCTIWo	= 497,
    FDIV	= 498,
    FDIVS	= 499,
    FDIVSo	= 500,
    FDIVo	= 501,
    FMADD	= 502,
    FMADDS	= 503,
    FMADDSo	= 504,
    FMADDo	= 505,
    FMR	= 506,
    FMRo	= 507,
    FMSUB	= 508,
    FMSUBS	= 509,
    FMSUBSo	= 510,
    FMSUBo	= 511,
    FMUL	= 512,
    FMULS	= 513,
    FMULSo	= 514,
    FMULo	= 515,
    FNABSD	= 516,
    FNABSDo	= 517,
    FNABSS	= 518,
    FNABSSo	= 519,
    FNEGD	= 520,
    FNEGDo	= 521,
    FNEGS	= 522,
    FNEGSo	= 523,
    FNMADD	= 524,
    FNMADDS	= 525,
    FNMADDSo	= 526,
    FNMADDo	= 527,
    FNMSUB	= 528,
    FNMSUBS	= 529,
    FNMSUBSo	= 530,
    FNMSUBo	= 531,
    FRE	= 532,
    FRES	= 533,
    FRESo	= 534,
    FREo	= 535,
    FRIMD	= 536,
    FRIMDo	= 537,
    FRIMS	= 538,
    FRIMSo	= 539,
    FRIND	= 540,
    FRINDo	= 541,
    FRINS	= 542,
    FRINSo	= 543,
    FRIPD	= 544,
    FRIPDo	= 545,
    FRIPS	= 546,
    FRIPSo	= 547,
    FRIZD	= 548,
    FRIZDo	= 549,
    FRIZS	= 550,
    FRIZSo	= 551,
    FRSP	= 552,
    FRSPo	= 553,
    FRSQRTE	= 554,
    FRSQRTES	= 555,
    FRSQRTESo	= 556,
    FRSQRTEo	= 557,
    FSELD	= 558,
    FSELDo	= 559,
    FSELS	= 560,
    FSELSo	= 561,
    FSQRT	= 562,
    FSQRTS	= 563,
    FSQRTSo	= 564,
    FSQRTo	= 565,
    FSUB	= 566,
    FSUBS	= 567,
    FSUBSo	= 568,
    FSUBo	= 569,
    GETtlsADDR	= 570,
    GETtlsADDR32	= 571,
    GETtlsldADDR	= 572,
    GETtlsldADDR32	= 573,
    GetGBRO	= 574,
    ICBI	= 575,
    ICBT	= 576,
    ICCCI	= 577,
    INSLWI	= 578,
    INSLWIo	= 579,
    INSRDI	= 580,
    INSRDIo	= 581,
    INSRWI	= 582,
    INSRWIo	= 583,
    ISEL	= 584,
    ISEL8	= 585,
    ISYNC	= 586,
    LA	= 587,
    LAx	= 588,
    LBZ	= 589,
    LBZ8	= 590,
    LBZU	= 591,
    LBZU8	= 592,
    LBZUX	= 593,
    LBZUX8	= 594,
    LBZX	= 595,
    LBZX8	= 596,
    LD	= 597,
    LDARX	= 598,
    LDBRX	= 599,
    LDU	= 600,
    LDUX	= 601,
    LDX	= 602,
    LDgotTprelL	= 603,
    LDgotTprelL32	= 604,
    LDinto_toc	= 605,
    LDtoc	= 606,
    LDtocBA	= 607,
    LDtocCPT	= 608,
    LDtocJTI	= 609,
    LDtocL	= 610,
    LFD	= 611,
    LFDU	= 612,
    LFDUX	= 613,
    LFDX	= 614,
    LFIWAX	= 615,
    LFIWZX	= 616,
    LFS	= 617,
    LFSU	= 618,
    LFSUX	= 619,
    LFSX	= 620,
    LHA	= 621,
    LHA8	= 622,
    LHAU	= 623,
    LHAU8	= 624,
    LHAUX	= 625,
    LHAUX8	= 626,
    LHAX	= 627,
    LHAX8	= 628,
    LHBRX	= 629,
    LHZ	= 630,
    LHZ8	= 631,
    LHZU	= 632,
    LHZU8	= 633,
    LHZUX	= 634,
    LHZUX8	= 635,
    LHZX	= 636,
    LHZX8	= 637,
    LI	= 638,
    LI8	= 639,
    LIS	= 640,
    LIS8	= 641,
    LMW	= 642,
    LSWI	= 643,
    LVEBX	= 644,
    LVEHX	= 645,
    LVEWX	= 646,
    LVSL	= 647,
    LVSR	= 648,
    LVX	= 649,
    LVXL	= 650,
    LWA	= 651,
    LWARX	= 652,
    LWAUX	= 653,
    LWAX	= 654,
    LWAX_32	= 655,
    LWA_32	= 656,
    LWBRX	= 657,
    LWZ	= 658,
    LWZ8	= 659,
    LWZU	= 660,
    LWZU8	= 661,
    LWZUX	= 662,
    LWZUX8	= 663,
    LWZX	= 664,
    LWZX8	= 665,
    LWZtoc	= 666,
    LXSDX	= 667,
    LXVD2X	= 668,
    LXVDSX	= 669,
    LXVW4X	= 670,
    MBAR	= 671,
    MCRF	= 672,
    MFCR	= 673,
    MFCR8	= 674,
    MFCTR	= 675,
    MFCTR8	= 676,
    MFDCR	= 677,
    MFFS	= 678,
    MFLR	= 679,
    MFLR8	= 680,
    MFMSR	= 681,
    MFOCRF	= 682,
    MFOCRF8	= 683,
    MFSPR	= 684,
    MFSR	= 685,
    MFSRIN	= 686,
    MFTB	= 687,
    MFTB8	= 688,
    MFVRSAVE	= 689,
    MFVRSAVEv	= 690,
    MFVSCR	= 691,
    MSYNC	= 692,
    MTCRF	= 693,
    MTCRF8	= 694,
    MTCTR	= 695,
    MTCTR8	= 696,
    MTCTR8loop	= 697,
    MTCTRloop	= 698,
    MTDCR	= 699,
    MTFSB0	= 700,
    MTFSB1	= 701,
    MTFSF	= 702,
    MTLR	= 703,
    MTLR8	= 704,
    MTMSR	= 705,
    MTMSRD	= 706,
    MTOCRF	= 707,
    MTOCRF8	= 708,
    MTSPR	= 709,
    MTSR	= 710,
    MTSRIN	= 711,
    MTVRSAVE	= 712,
    MTVRSAVEv	= 713,
    MTVSCR	= 714,
    MULHD	= 715,
    MULHDU	= 716,
    MULHDUo	= 717,
    MULHDo	= 718,
    MULHW	= 719,
    MULHWU	= 720,
    MULHWUo	= 721,
    MULHWo	= 722,
    MULLD	= 723,
    MULLDo	= 724,
    MULLI	= 725,
    MULLI8	= 726,
    MULLW	= 727,
    MULLWo	= 728,
    MovePCtoLR	= 729,
    MovePCtoLR8	= 730,
    NAND	= 731,
    NAND8	= 732,
    NAND8o	= 733,
    NANDo	= 734,
    NEG	= 735,
    NEG8	= 736,
    NEG8o	= 737,
    NEGo	= 738,
    NOP	= 739,
    NOP_GT_PWR6	= 740,
    NOP_GT_PWR7	= 741,
    NOR	= 742,
    NOR8	= 743,
    NOR8o	= 744,
    NORo	= 745,
    OR	= 746,
    OR8	= 747,
    OR8o	= 748,
    ORC	= 749,
    ORC8	= 750,
    ORC8o	= 751,
    ORCo	= 752,
    ORI	= 753,
    ORI8	= 754,
    ORIS	= 755,
    ORIS8	= 756,
    ORo	= 757,
    POPCNTD	= 758,
    POPCNTW	= 759,
    PPC32GOT	= 760,
    PPC32PICGOT	= 761,
    RESTORE_CR	= 762,
    RESTORE_CRBIT	= 763,
    RESTORE_VRSAVE	= 764,
    RFCI	= 765,
    RFDI	= 766,
    RFI	= 767,
    RFID	= 768,
    RFMCI	= 769,
    RLDCL	= 770,
    RLDCLo	= 771,
    RLDCR	= 772,
    RLDCRo	= 773,
    RLDIC	= 774,
    RLDICL	= 775,
    RLDICL_32_64	= 776,
    RLDICLo	= 777,
    RLDICR	= 778,
    RLDICRo	= 779,
    RLDICo	= 780,
    RLDIMI	= 781,
    RLDIMIo	= 782,
    RLWIMI	= 783,
    RLWIMI8	= 784,
    RLWIMI8o	= 785,
    RLWIMIo	= 786,
    RLWINM	= 787,
    RLWINM8	= 788,
    RLWINM8o	= 789,
    RLWINMo	= 790,
    RLWNM	= 791,
    RLWNMo	= 792,
    ROTRDI	= 793,
    ROTRDIo	= 794,
    ROTRWI	= 795,
    ROTRWIo	= 796,
    SC	= 797,
    SELECT_CC_F4	= 798,
    SELECT_CC_F8	= 799,
    SELECT_CC_I4	= 800,
    SELECT_CC_I8	= 801,
    SELECT_CC_VRRC	= 802,
    SELECT_CC_VSFRC	= 803,
    SELECT_CC_VSRC	= 804,
    SELECT_F4	= 805,
    SELECT_F8	= 806,
    SELECT_I4	= 807,
    SELECT_I8	= 808,
    SELECT_VRRC	= 809,
    SELECT_VSFRC	= 810,
    SELECT_VSRC	= 811,
    SLBIA	= 812,
    SLBIE	= 813,
    SLBMFEE	= 814,
    SLBMTE	= 815,
    SLD	= 816,
    SLDI	= 817,
    SLDIo	= 818,
    SLDo	= 819,
    SLW	= 820,
    SLWI	= 821,
    SLWIo	= 822,
    SLWo	= 823,
    SPILL_CR	= 824,
    SPILL_CRBIT	= 825,
    SPILL_VRSAVE	= 826,
    SRAD	= 827,
    SRADI	= 828,
    SRADIo	= 829,
    SRADo	= 830,
    SRAW	= 831,
    SRAWI	= 832,
    SRAWIo	= 833,
    SRAWo	= 834,
    SRD	= 835,
    SRDI	= 836,
    SRDIo	= 837,
    SRDo	= 838,
    SRW	= 839,
    SRWI	= 840,
    SRWIo	= 841,
    SRWo	= 842,
    STB	= 843,
    STB8	= 844,
    STBU	= 845,
    STBU8	= 846,
    STBUX	= 847,
    STBUX8	= 848,
    STBX	= 849,
    STBX8	= 850,
    STD	= 851,
    STDBRX	= 852,
    STDCX	= 853,
    STDU	= 854,
    STDUX	= 855,
    STDX	= 856,
    STFD	= 857,
    STFDU	= 858,
    STFDUX	= 859,
    STFDX	= 860,
    STFIWX	= 861,
    STFS	= 862,
    STFSU	= 863,
    STFSUX	= 864,
    STFSX	= 865,
    STH	= 866,
    STH8	= 867,
    STHBRX	= 868,
    STHU	= 869,
    STHU8	= 870,
    STHUX	= 871,
    STHUX8	= 872,
    STHX	= 873,
    STHX8	= 874,
    STMW	= 875,
    STSWI	= 876,
    STVEBX	= 877,
    STVEHX	= 878,
    STVEWX	= 879,
    STVX	= 880,
    STVXL	= 881,
    STW	= 882,
    STW8	= 883,
    STWBRX	= 884,
    STWCX	= 885,
    STWU	= 886,
    STWU8	= 887,
    STWUX	= 888,
    STWUX8	= 889,
    STWX	= 890,
    STWX8	= 891,
    STXSDX	= 892,
    STXVD2X	= 893,
    STXVW4X	= 894,
    SUBF	= 895,
    SUBF8	= 896,
    SUBF8o	= 897,
    SUBFC	= 898,
    SUBFC8	= 899,
    SUBFC8o	= 900,
    SUBFCo	= 901,
    SUBFE	= 902,
    SUBFE8	= 903,
    SUBFE8o	= 904,
    SUBFEo	= 905,
    SUBFIC	= 906,
    SUBFIC8	= 907,
    SUBFME	= 908,
    SUBFME8	= 909,
    SUBFME8o	= 910,
    SUBFMEo	= 911,
    SUBFZE	= 912,
    SUBFZE8	= 913,
    SUBFZE8o	= 914,
    SUBFZEo	= 915,
    SUBFo	= 916,
    SUBI	= 917,
    SUBIC	= 918,
    SUBICo	= 919,
    SUBIS	= 920,
    SYNC	= 921,
    TAILB	= 922,
    TAILB8	= 923,
    TAILBA	= 924,
    TAILBA8	= 925,
    TAILBCTR	= 926,
    TAILBCTR8	= 927,
    TCRETURNai	= 928,
    TCRETURNai8	= 929,
    TCRETURNdi	= 930,
    TCRETURNdi8	= 931,
    TCRETURNri	= 932,
    TCRETURNri8	= 933,
    TD	= 934,
    TDI	= 935,
    TLBIA	= 936,
    TLBIE	= 937,
    TLBIEL	= 938,
    TLBIVAX	= 939,
    TLBLD	= 940,
    TLBLI	= 941,
    TLBRE	= 942,
    TLBRE2	= 943,
    TLBSX	= 944,
    TLBSX2	= 945,
    TLBSX2D	= 946,
    TLBSYNC	= 947,
    TLBWE	= 948,
    TLBWE2	= 949,
    TRAP	= 950,
    TW	= 951,
    TWI	= 952,
    UPDATE_VRSAVE	= 953,
    UpdateGBR	= 954,
    VADDCUW	= 955,
    VADDFP	= 956,
    VADDSBS	= 957,
    VADDSHS	= 958,
    VADDSWS	= 959,
    VADDUBM	= 960,
    VADDUBS	= 961,
    VADDUHM	= 962,
    VADDUHS	= 963,
    VADDUWM	= 964,
    VADDUWS	= 965,
    VAND	= 966,
    VANDC	= 967,
    VAVGSB	= 968,
    VAVGSH	= 969,
    VAVGSW	= 970,
    VAVGUB	= 971,
    VAVGUH	= 972,
    VAVGUW	= 973,
    VCFSX	= 974,
    VCFSX_0	= 975,
    VCFUX	= 976,
    VCFUX_0	= 977,
    VCMPBFP	= 978,
    VCMPBFPo	= 979,
    VCMPEQFP	= 980,
    VCMPEQFPo	= 981,
    VCMPEQUB	= 982,
    VCMPEQUBo	= 983,
    VCMPEQUH	= 984,
    VCMPEQUHo	= 985,
    VCMPEQUW	= 986,
    VCMPEQUWo	= 987,
    VCMPGEFP	= 988,
    VCMPGEFPo	= 989,
    VCMPGTFP	= 990,
    VCMPGTFPo	= 991,
    VCMPGTSB	= 992,
    VCMPGTSBo	= 993,
    VCMPGTSH	= 994,
    VCMPGTSHo	= 995,
    VCMPGTSW	= 996,
    VCMPGTSWo	= 997,
    VCMPGTUB	= 998,
    VCMPGTUBo	= 999,
    VCMPGTUH	= 1000,
    VCMPGTUHo	= 1001,
    VCMPGTUW	= 1002,
    VCMPGTUWo	= 1003,
    VCTSXS	= 1004,
    VCTSXS_0	= 1005,
    VCTUXS	= 1006,
    VCTUXS_0	= 1007,
    VEXPTEFP	= 1008,
    VLOGEFP	= 1009,
    VMADDFP	= 1010,
    VMAXFP	= 1011,
    VMAXSB	= 1012,
    VMAXSH	= 1013,
    VMAXSW	= 1014,
    VMAXUB	= 1015,
    VMAXUH	= 1016,
    VMAXUW	= 1017,
    VMHADDSHS	= 1018,
    VMHRADDSHS	= 1019,
    VMINFP	= 1020,
    VMINSB	= 1021,
    VMINSH	= 1022,
    VMINSW	= 1023,
    VMINUB	= 1024,
    VMINUH	= 1025,
    VMINUW	= 1026,
    VMLADDUHM	= 1027,
    VMRGHB	= 1028,
    VMRGHH	= 1029,
    VMRGHW	= 1030,
    VMRGLB	= 1031,
    VMRGLH	= 1032,
    VMRGLW	= 1033,
    VMSUMMBM	= 1034,
    VMSUMSHM	= 1035,
    VMSUMSHS	= 1036,
    VMSUMUBM	= 1037,
    VMSUMUHM	= 1038,
    VMSUMUHS	= 1039,
    VMULESB	= 1040,
    VMULESH	= 1041,
    VMULEUB	= 1042,
    VMULEUH	= 1043,
    VMULOSB	= 1044,
    VMULOSH	= 1045,
    VMULOUB	= 1046,
    VMULOUH	= 1047,
    VNMSUBFP	= 1048,
    VNOR	= 1049,
    VOR	= 1050,
    VPERM	= 1051,
    VPKPX	= 1052,
    VPKSHSS	= 1053,
    VPKSHUS	= 1054,
    VPKSWSS	= 1055,
    VPKSWUS	= 1056,
    VPKUHUM	= 1057,
    VPKUHUS	= 1058,
    VPKUWUM	= 1059,
    VPKUWUS	= 1060,
    VREFP	= 1061,
    VRFIM	= 1062,
    VRFIN	= 1063,
    VRFIP	= 1064,
    VRFIZ	= 1065,
    VRLB	= 1066,
    VRLH	= 1067,
    VRLW	= 1068,
    VRSQRTEFP	= 1069,
    VSEL	= 1070,
    VSL	= 1071,
    VSLB	= 1072,
    VSLDOI	= 1073,
    VSLH	= 1074,
    VSLO	= 1075,
    VSLW	= 1076,
    VSPLTB	= 1077,
    VSPLTH	= 1078,
    VSPLTISB	= 1079,
    VSPLTISH	= 1080,
    VSPLTISW	= 1081,
    VSPLTW	= 1082,
    VSR	= 1083,
    VSRAB	= 1084,
    VSRAH	= 1085,
    VSRAW	= 1086,
    VSRB	= 1087,
    VSRH	= 1088,
    VSRO	= 1089,
    VSRW	= 1090,
    VSUBCUW	= 1091,
    VSUBFP	= 1092,
    VSUBSBS	= 1093,
    VSUBSHS	= 1094,
    VSUBSWS	= 1095,
    VSUBUBM	= 1096,
    VSUBUBS	= 1097,
    VSUBUHM	= 1098,
    VSUBUHS	= 1099,
    VSUBUWM	= 1100,
    VSUBUWS	= 1101,
    VSUM2SWS	= 1102,
    VSUM4SBS	= 1103,
    VSUM4SHS	= 1104,
    VSUM4UBS	= 1105,
    VSUMSWS	= 1106,
    VUPKHPX	= 1107,
    VUPKHSB	= 1108,
    VUPKHSH	= 1109,
    VUPKLPX	= 1110,
    VUPKLSB	= 1111,
    VUPKLSH	= 1112,
    VXOR	= 1113,
    V_SET0	= 1114,
    V_SET0B	= 1115,
    V_SET0H	= 1116,
    V_SETALLONES	= 1117,
    V_SETALLONESB	= 1118,
    V_SETALLONESH	= 1119,
    WAIT	= 1120,
    WRTEE	= 1121,
    WRTEEI	= 1122,
    XOR	= 1123,
    XOR8	= 1124,
    XOR8o	= 1125,
    XORI	= 1126,
    XORI8	= 1127,
    XORIS	= 1128,
    XORIS8	= 1129,
    XORo	= 1130,
    XSABSDP	= 1131,
    XSADDDP	= 1132,
    XSCMPODP	= 1133,
    XSCMPUDP	= 1134,
    XSCPSGNDP	= 1135,
    XSCVDPSP	= 1136,
    XSCVDPSXDS	= 1137,
    XSCVDPSXWS	= 1138,
    XSCVDPUXDS	= 1139,
    XSCVDPUXWS	= 1140,
    XSCVSPDP	= 1141,
    XSCVSXDDP	= 1142,
    XSCVUXDDP	= 1143,
    XSDIVDP	= 1144,
    XSMADDADP	= 1145,
    XSMADDMDP	= 1146,
    XSMAXDP	= 1147,
    XSMINDP	= 1148,
    XSMSUBADP	= 1149,
    XSMSUBMDP	= 1150,
    XSMULDP	= 1151,
    XSNABSDP	= 1152,
    XSNEGDP	= 1153,
    XSNMADDADP	= 1154,
    XSNMADDMDP	= 1155,
    XSNMSUBADP	= 1156,
    XSNMSUBMDP	= 1157,
    XSRDPI	= 1158,
    XSRDPIC	= 1159,
    XSRDPIM	= 1160,
    XSRDPIP	= 1161,
    XSRDPIZ	= 1162,
    XSREDP	= 1163,
    XSRSQRTEDP	= 1164,
    XSSQRTDP	= 1165,
    XSSUBDP	= 1166,
    XSTDIVDP	= 1167,
    XSTSQRTDP	= 1168,
    XVABSDP	= 1169,
    XVABSSP	= 1170,
    XVADDDP	= 1171,
    XVADDSP	= 1172,
    XVCMPEQDP	= 1173,
    XVCMPEQDPo	= 1174,
    XVCMPEQSP	= 1175,
    XVCMPEQSPo	= 1176,
    XVCMPGEDP	= 1177,
    XVCMPGEDPo	= 1178,
    XVCMPGESP	= 1179,
    XVCMPGESPo	= 1180,
    XVCMPGTDP	= 1181,
    XVCMPGTDPo	= 1182,
    XVCMPGTSP	= 1183,
    XVCMPGTSPo	= 1184,
    XVCPSGNDP	= 1185,
    XVCPSGNSP	= 1186,
    XVCVDPSP	= 1187,
    XVCVDPSXDS	= 1188,
    XVCVDPSXWS	= 1189,
    XVCVDPUXDS	= 1190,
    XVCVDPUXWS	= 1191,
    XVCVSPDP	= 1192,
    XVCVSPSXDS	= 1193,
    XVCVSPSXWS	= 1194,
    XVCVSPUXDS	= 1195,
    XVCVSPUXWS	= 1196,
    XVCVSXDDP	= 1197,
    XVCVSXDSP	= 1198,
    XVCVSXWDP	= 1199,
    XVCVSXWSP	= 1200,
    XVCVUXDDP	= 1201,
    XVCVUXDSP	= 1202,
    XVCVUXWDP	= 1203,
    XVCVUXWSP	= 1204,
    XVDIVDP	= 1205,
    XVDIVSP	= 1206,
    XVMADDADP	= 1207,
    XVMADDASP	= 1208,
    XVMADDMDP	= 1209,
    XVMADDMSP	= 1210,
    XVMAXDP	= 1211,
    XVMAXSP	= 1212,
    XVMINDP	= 1213,
    XVMINSP	= 1214,
    XVMSUBADP	= 1215,
    XVMSUBASP	= 1216,
    XVMSUBMDP	= 1217,
    XVMSUBMSP	= 1218,
    XVMULDP	= 1219,
    XVMULSP	= 1220,
    XVNABSDP	= 1221,
    XVNABSSP	= 1222,
    XVNEGDP	= 1223,
    XVNEGSP	= 1224,
    XVNMADDADP	= 1225,
    XVNMADDASP	= 1226,
    XVNMADDMDP	= 1227,
    XVNMADDMSP	= 1228,
    XVNMSUBADP	= 1229,
    XVNMSUBASP	= 1230,
    XVNMSUBMDP	= 1231,
    XVNMSUBMSP	= 1232,
    XVRDPI	= 1233,
    XVRDPIC	= 1234,
    XVRDPIM	= 1235,
    XVRDPIP	= 1236,
    XVRDPIZ	= 1237,
    XVREDP	= 1238,
    XVRESP	= 1239,
    XVRSPI	= 1240,
    XVRSPIC	= 1241,
    XVRSPIM	= 1242,
    XVRSPIP	= 1243,
    XVRSPIZ	= 1244,
    XVRSQRTEDP	= 1245,
    XVRSQRTESP	= 1246,
    XVSQRTDP	= 1247,
    XVSQRTSP	= 1248,
    XVSUBDP	= 1249,
    XVSUBSP	= 1250,
    XVTDIVDP	= 1251,
    XVTDIVSP	= 1252,
    XVTSQRTDP	= 1253,
    XVTSQRTSP	= 1254,
    XXLAND	= 1255,
    XXLANDC	= 1256,
    XXLNOR	= 1257,
    XXLOR	= 1258,
    XXLORf	= 1259,
    XXLXOR	= 1260,
    XXMRGHW	= 1261,
    XXMRGLW	= 1262,
    XXPERMDI	= 1263,
    XXSEL	= 1264,
    XXSLDWI	= 1265,
    XXSPLTW	= 1266,
    gBC	= 1267,
    gBCA	= 1268,
    gBCCTR	= 1269,
    gBCCTRL	= 1270,
    gBCL	= 1271,
    gBCLA	= 1272,
    gBCLR	= 1273,
    gBCLRL	= 1274,
    INSTRUCTION_LIST_END = 1275
  };
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_IntSimple	= 1,
    IIC_IntGeneral	= 2,
    IIC_BrB	= 3,
    IIC_VecFP	= 4,
    IIC_IntCompare	= 5,
    IIC_BrCR	= 6,
    IIC_LdStDCBF	= 7,
    IIC_LdStLoad	= 8,
    IIC_IntDivD	= 9,
    IIC_IntDivW	= 10,
    IIC_FPGeneral	= 11,
    IIC_FPAddSub	= 12,
    IIC_FPCompare	= 13,
    IIC_FPDivD	= 14,
    IIC_FPDivS	= 15,
    IIC_FPFused	= 16,
    IIC_FPSqrtD	= 17,
    IIC_FPSqrtS	= 18,
    IIC_LdStICBI	= 19,
    IIC_SprISYNC	= 20,
    IIC_LdStLoadUpd	= 21,
    IIC_LdStLoadUpdX	= 22,
    IIC_LdStLD	= 23,
    IIC_LdStLDARX	= 24,
    IIC_LdStLDU	= 25,
    IIC_LdStLDUX	= 26,
    IIC_LdStLFD	= 27,
    IIC_LdStLFDU	= 28,
    IIC_LdStLFDUX	= 29,
    IIC_LdStLHA	= 30,
    IIC_LdStLHAU	= 31,
    IIC_LdStLHAUX	= 32,
    IIC_LdStLMW	= 33,
    IIC_LdStLWA	= 34,
    IIC_LdStLWARX	= 35,
    IIC_BrMCR	= 36,
    IIC_SprMFCR	= 37,
    IIC_SprMFSPR	= 38,
    IIC_IntMFFS	= 39,
    IIC_SprMFMSR	= 40,
    IIC_SprMFCRF	= 41,
    IIC_SprMFSR	= 42,
    IIC_SprMFTB	= 43,
    IIC_LdStStore	= 44,
    IIC_LdStSync	= 45,
    IIC_BrMCRX	= 46,
    IIC_SprMTSPR	= 47,
    IIC_IntMTFSB0	= 48,
    IIC_SprMTMSR	= 49,
    IIC_SprMTMSRD	= 50,
    IIC_SprMTSR	= 51,
    IIC_IntMulHW	= 52,
    IIC_IntMulHWU	= 53,
    IIC_IntMulHD	= 54,
    IIC_IntMulLI	= 55,
    IIC_SprRFI	= 56,
    IIC_IntRFID	= 57,
    IIC_IntRotateD	= 58,
    IIC_IntRotateDI	= 59,
    IIC_IntRotate	= 60,
    IIC_SprSLBIA	= 61,
    IIC_SprSLBIE	= 62,
    IIC_SprSLBMFEE	= 63,
    IIC_SprSLBMTE	= 64,
    IIC_IntShift	= 65,
    IIC_LdStStoreUpd	= 66,
    IIC_LdStSTD	= 67,
    IIC_LdStSTDCX	= 68,
    IIC_LdStSTDU	= 69,
    IIC_LdStSTDUX	= 70,
    IIC_LdStSTFD	= 71,
    IIC_LdStSTFDU	= 72,
    IIC_LdStSTWCX	= 73,
    IIC_IntTrapD	= 74,
    IIC_SprTLBIA	= 75,
    IIC_SprTLBIE	= 76,
    IIC_SprTLBIEL	= 77,
    IIC_SprTLBSYNC	= 78,
    IIC_IntTrapW	= 79,
    IIC_VecGeneral	= 80,
    IIC_VecFPCompare	= 81,
    IIC_VecPerm	= 82,
    SCHED_LIST_END = 83
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

static const uint16_t ImplicitList1[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList2[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList3[] = { PPC::CARRY, PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::R1, 0 };
static const uint16_t ImplicitList5[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList6[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList7[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList8[] = { PPC::LR, 0 };
static const uint16_t ImplicitList9[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList10[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList11[] = { PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList13[] = { PPC::CTR, PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList14[] = { PPC::CTR8, PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList15[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList16[] = { PPC::X1, 0 };
static const uint16_t ImplicitList17[] = { PPC::CR1, 0 };
static const uint16_t ImplicitList18[] = { PPC::X2, 0 };
static const uint16_t ImplicitList19[] = { PPC::CR6, 0 };
static const uint16_t ImplicitList20[] = { PPC::LR, PPC::CTR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo120[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo121[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo124[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo126[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
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
  { 20,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #20 = ADD4
  { 21,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #21 = ADD4TLS
  { 22,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #22 = ADD4o
  { 23,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #23 = ADD8
  { 24,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #24 = ADD8TLS
  { 25,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #25 = ADD8TLS_
  { 26,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #26 = ADD8o
  { 27,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList2, OperandInfo11,0,nullptr },  // Inst #27 = ADDC
  { 28,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #28 = ADDC8
  { 29,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList3, OperandInfo13,0,nullptr },  // Inst #29 = ADDC8o
  { 30,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList3, OperandInfo11,0,nullptr },  // Inst #30 = ADDCo
  { 31,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo11,0,nullptr },  // Inst #31 = ADDE
  { 32,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #32 = ADDE8
  { 33,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo13,0,nullptr },  // Inst #33 = ADDE8o
  { 34,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo11,0,nullptr },  // Inst #34 = ADDEo
  { 35,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #35 = ADDI
  { 36,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #36 = ADDI8
  { 37,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #37 = ADDIC
  { 38,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #38 = ADDIC8
  { 39,	3,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #39 = ADDICo
  { 40,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #40 = ADDIS
  { 41,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #41 = ADDIS8
  { 42,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #42 = ADDISdtprelHA
  { 43,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #43 = ADDISdtprelHA32
  { 44,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #44 = ADDISgotTprelHA
  { 45,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #45 = ADDIStlsgdHA
  { 46,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #46 = ADDIStlsldHA
  { 47,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #47 = ADDIStocHA
  { 48,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #48 = ADDIdtprelL
  { 49,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #49 = ADDIdtprelL32
  { 50,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #50 = ADDItlsgdL
  { 51,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #51 = ADDItlsgdL32
  { 52,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #52 = ADDItlsldL
  { 53,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #53 = ADDItlsldL32
  { 54,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #54 = ADDItocL
  { 55,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo17,0,nullptr },  // Inst #55 = ADDME
  { 56,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo18,0,nullptr },  // Inst #56 = ADDME8
  { 57,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo18,0,nullptr },  // Inst #57 = ADDME8o
  { 58,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo17,0,nullptr },  // Inst #58 = ADDMEo
  { 59,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo17,0,nullptr },  // Inst #59 = ADDZE
  { 60,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo18,0,nullptr },  // Inst #60 = ADDZE8
  { 61,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo18,0,nullptr },  // Inst #61 = ADDZE8o
  { 62,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo17,0,nullptr },  // Inst #62 = ADDZEo
  { 63,	1,	0,	0,	4,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #63 = ADJCALLSTACKDOWN
  { 64,	2,	0,	0,	4,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo7,0,nullptr },  // Inst #64 = ADJCALLSTACKUP
  { 65,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #65 = AND
  { 66,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #66 = AND8
  { 67,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #67 = AND8o
  { 68,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #68 = ANDC
  { 69,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #69 = ANDC8
  { 70,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #70 = ANDC8o
  { 71,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #71 = ANDCo
  { 72,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #72 = ANDISo
  { 73,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #73 = ANDISo8
  { 74,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #74 = ANDIo
  { 75,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #75 = ANDIo8
  { 76,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #76 = ANDIo_1_EQ_BIT
  { 77,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #77 = ANDIo_1_EQ_BIT8
  { 78,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #78 = ANDIo_1_GT_BIT
  { 79,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #79 = ANDIo_1_GT_BIT8
  { 80,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #80 = ANDo
  { 81,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #81 = ATOMIC_CMP_SWAP_I16
  { 82,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #82 = ATOMIC_CMP_SWAP_I32
  { 83,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #83 = ATOMIC_CMP_SWAP_I64
  { 84,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #84 = ATOMIC_CMP_SWAP_I8
  { 85,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #85 = ATOMIC_LOAD_ADD_I16
  { 86,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #86 = ATOMIC_LOAD_ADD_I32
  { 87,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #87 = ATOMIC_LOAD_ADD_I64
  { 88,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #88 = ATOMIC_LOAD_ADD_I8
  { 89,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #89 = ATOMIC_LOAD_AND_I16
  { 90,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #90 = ATOMIC_LOAD_AND_I32
  { 91,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #91 = ATOMIC_LOAD_AND_I64
  { 92,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #92 = ATOMIC_LOAD_AND_I8
  { 93,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #93 = ATOMIC_LOAD_NAND_I16
  { 94,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #94 = ATOMIC_LOAD_NAND_I32
  { 95,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #95 = ATOMIC_LOAD_NAND_I64
  { 96,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #96 = ATOMIC_LOAD_NAND_I8
  { 97,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #97 = ATOMIC_LOAD_OR_I16
  { 98,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #98 = ATOMIC_LOAD_OR_I32
  { 99,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #99 = ATOMIC_LOAD_OR_I64
  { 100,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #100 = ATOMIC_LOAD_OR_I8
  { 101,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #101 = ATOMIC_LOAD_SUB_I16
  { 102,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #102 = ATOMIC_LOAD_SUB_I32
  { 103,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #103 = ATOMIC_LOAD_SUB_I64
  { 104,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #104 = ATOMIC_LOAD_SUB_I8
  { 105,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #105 = ATOMIC_LOAD_XOR_I16
  { 106,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #106 = ATOMIC_LOAD_XOR_I32
  { 107,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #107 = ATOMIC_LOAD_XOR_I64
  { 108,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #108 = ATOMIC_LOAD_XOR_I8
  { 109,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #109 = ATOMIC_SWAP_I16
  { 110,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #110 = ATOMIC_SWAP_I32
  { 111,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #111 = ATOMIC_SWAP_I64
  { 112,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #112 = ATOMIC_SWAP_I8
  { 113,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #113 = B
  { 114,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #114 = BA
  { 115,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #115 = BC
  { 116,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #116 = BCC
  { 117,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #117 = BCCA
  { 118,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, nullptr, OperandInfo27,0,nullptr },  // Inst #118 = BCCCTR
  { 119,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, nullptr, OperandInfo27,0,nullptr },  // Inst #119 = BCCCTR8
  { 120,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList8, OperandInfo27,0,nullptr },  // Inst #120 = BCCCTRL
  { 121,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo27,0,nullptr },  // Inst #121 = BCCCTRL8
  { 122,	3,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo26,0,nullptr },  // Inst #122 = BCCL
  { 123,	3,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo26,0,nullptr },  // Inst #123 = BCCLA
  { 124,	2,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, nullptr, OperandInfo27,0,nullptr },  // Inst #124 = BCCLR
  { 125,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo27,0,nullptr },  // Inst #125 = BCCLRL
  { 126,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, nullptr, OperandInfo28,0,nullptr },  // Inst #126 = BCCTR
  { 127,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, nullptr, OperandInfo28,0,nullptr },  // Inst #127 = BCCTR8
  { 128,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, nullptr, OperandInfo28,0,nullptr },  // Inst #128 = BCCTR8n
  { 129,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList8, OperandInfo28,0,nullptr },  // Inst #129 = BCCTRL
  { 130,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo28,0,nullptr },  // Inst #130 = BCCTRL8
  { 131,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo28,0,nullptr },  // Inst #131 = BCCTRL8n
  { 132,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList8, OperandInfo28,0,nullptr },  // Inst #132 = BCCTRLn
  { 133,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, nullptr, OperandInfo28,0,nullptr },  // Inst #133 = BCCTRn
  { 134,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo25,0,nullptr },  // Inst #134 = BCL
  { 135,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, nullptr, OperandInfo28,0,nullptr },  // Inst #135 = BCLR
  { 136,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo28,0,nullptr },  // Inst #136 = BCLRL
  { 137,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo28,0,nullptr },  // Inst #137 = BCLRLn
  { 138,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #138 = BCLRn
  { 139,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo5,0,nullptr },  // Inst #139 = BCLalways
  { 140,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo25,0,nullptr },  // Inst #140 = BCLn
  { 141,	0,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, nullptr, nullptr,0,nullptr },  // Inst #141 = BCTR
  { 142,	0,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, nullptr, nullptr,0,nullptr },  // Inst #142 = BCTR8
  { 143,	0,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList7, ImplicitList8, nullptr,0,nullptr },  // Inst #143 = BCTRL
  { 144,	0,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList9, ImplicitList10, nullptr,0,nullptr },  // Inst #144 = BCTRL8
  { 145,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #145 = BCn
  { 146,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #146 = BDNZ
  { 147,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, ImplicitList6, OperandInfo5,0,nullptr },  // Inst #147 = BDNZ8
  { 148,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #148 = BDNZA
  { 149,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #149 = BDNZAm
  { 150,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #150 = BDNZAp
  { 151,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #151 = BDNZL
  { 152,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #152 = BDNZLA
  { 153,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #153 = BDNZLAm
  { 154,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #154 = BDNZLAp
  { 155,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #155 = BDNZLR
  { 156,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList6, nullptr,0,nullptr },  // Inst #156 = BDNZLR8
  { 157,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #157 = BDNZLRL
  { 158,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #158 = BDNZLRLm
  { 159,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #159 = BDNZLRLp
  { 160,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #160 = BDNZLRm
  { 161,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #161 = BDNZLRp
  { 162,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #162 = BDNZLm
  { 163,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #163 = BDNZLp
  { 164,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #164 = BDNZm
  { 165,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #165 = BDNZp
  { 166,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #166 = BDZ
  { 167,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, ImplicitList6, OperandInfo5,0,nullptr },  // Inst #167 = BDZ8
  { 168,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #168 = BDZA
  { 169,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #169 = BDZAm
  { 170,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #170 = BDZAp
  { 171,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #171 = BDZL
  { 172,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #172 = BDZLA
  { 173,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #173 = BDZLAm
  { 174,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #174 = BDZLAp
  { 175,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #175 = BDZLR
  { 176,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList6, nullptr,0,nullptr },  // Inst #176 = BDZLR8
  { 177,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #177 = BDZLRL
  { 178,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #178 = BDZLRLm
  { 179,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #179 = BDZLRLp
  { 180,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #180 = BDZLRm
  { 181,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, nullptr,0,nullptr },  // Inst #181 = BDZLRp
  { 182,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #182 = BDZLm
  { 183,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #183 = BDZLp
  { 184,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #184 = BDZm
  { 185,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #185 = BDZp
  { 186,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo5,0,nullptr },  // Inst #186 = BL
  { 187,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #187 = BL8
  { 188,	1,	0,	3,	8,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #188 = BL8_NOP
  { 189,	2,	0,	3,	8,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo7,0,nullptr },  // Inst #189 = BL8_NOP_TLS
  { 190,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo7,0,nullptr },  // Inst #190 = BL8_TLS
  { 191,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo7,0,nullptr },  // Inst #191 = BL8_TLS_
  { 192,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo5,0,nullptr },  // Inst #192 = BLA
  { 193,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #193 = BLA8
  { 194,	1,	0,	3,	8,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #194 = BLA8_NOP
  { 195,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, ImplicitList12, nullptr, nullptr,0,nullptr },  // Inst #195 = BLR
  { 196,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList8, nullptr,0,nullptr },  // Inst #196 = BLRL
  { 197,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList8, OperandInfo7,0,nullptr },  // Inst #197 = BL_TLS
  { 198,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #198 = BRINC
  { 199,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #199 = CLRLSLDI
  { 200,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #200 = CLRLSLDIo
  { 201,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #201 = CLRLSLWI
  { 202,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #202 = CLRLSLWIo
  { 203,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #203 = CLRRDI
  { 204,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #204 = CLRRDIo
  { 205,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #205 = CLRRWI
  { 206,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #206 = CLRRWIo
  { 207,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #207 = CMPD
  { 208,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #208 = CMPDI
  { 209,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #209 = CMPLD
  { 210,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #210 = CMPLDI
  { 211,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #211 = CMPLW
  { 212,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #212 = CMPLWI
  { 213,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #213 = CMPW
  { 214,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #214 = CMPWI
  { 215,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #215 = CNTLZD
  { 216,	2,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #216 = CNTLZDo
  { 217,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #217 = CNTLZW
  { 218,	2,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #218 = CNTLZWo
  { 219,	0,	0,	6,	4,	0, 0x0ULL, nullptr, ImplicitList15, nullptr,0,nullptr },  // Inst #219 = CR6SET
  { 220,	0,	0,	6,	4,	0, 0x0ULL, nullptr, ImplicitList15, nullptr,0,nullptr },  // Inst #220 = CR6UNSET
  { 221,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #221 = CRAND
  { 222,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #222 = CRANDC
  { 223,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #223 = CREQV
  { 224,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #224 = CRNAND
  { 225,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #225 = CRNOR
  { 226,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #226 = CROR
  { 227,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #227 = CRORC
  { 228,	1,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #228 = CRSET
  { 229,	1,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #229 = CRUNSET
  { 230,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #230 = CRXOR
  { 231,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #231 = DCBA
  { 232,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #232 = DCBF
  { 233,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #233 = DCBI
  { 234,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #234 = DCBST
  { 235,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #235 = DCBT
  { 236,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #236 = DCBTST
  { 237,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #237 = DCBZ
  { 238,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #238 = DCBZL
  { 239,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #239 = DCCCI
  { 240,	3,	1,	9,	4,	0, 0xdULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #240 = DIVD
  { 241,	3,	1,	9,	4,	0, 0xdULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #241 = DIVDU
  { 242,	3,	1,	9,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #242 = DIVDUo
  { 243,	3,	1,	9,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #243 = DIVDo
  { 244,	3,	1,	10,	4,	0, 0xdULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #244 = DIVW
  { 245,	3,	1,	10,	4,	0, 0xdULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #245 = DIVWU
  { 246,	3,	1,	10,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #246 = DIVWUo
  { 247,	3,	1,	10,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #247 = DIVWo
  { 248,	1,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,PPC::DeprecatedDST,nullptr },  // Inst #248 = DSS
  { 249,	0,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,PPC::DeprecatedDST,nullptr },  // Inst #249 = DSSALL
  { 250,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,PPC::DeprecatedDST,nullptr },  // Inst #250 = DST
  { 251,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,PPC::DeprecatedDST,nullptr },  // Inst #251 = DST64
  { 252,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,PPC::DeprecatedDST,nullptr },  // Inst #252 = DSTST
  { 253,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,PPC::DeprecatedDST,nullptr },  // Inst #253 = DSTST64
  { 254,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,PPC::DeprecatedDST,nullptr },  // Inst #254 = DSTSTT
  { 255,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,PPC::DeprecatedDST,nullptr },  // Inst #255 = DSTSTT64
  { 256,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,PPC::DeprecatedDST,nullptr },  // Inst #256 = DSTT
  { 257,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,PPC::DeprecatedDST,nullptr },  // Inst #257 = DSTT64
  { 258,	4,	1,	0,	4,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo39,0,nullptr },  // Inst #258 = DYNALLOC
  { 259,	4,	1,	0,	4,	0, 0x0ULL, ImplicitList16, ImplicitList16, OperandInfo40,0,nullptr },  // Inst #259 = DYNALLOC8
  { 260,	1,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #260 = EH_SjLj_LongJmp32
  { 261,	1,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #261 = EH_SjLj_LongJmp64
  { 262,	2,	1,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo41,0,nullptr },  // Inst #262 = EH_SjLj_SetJmp32
  { 263,	2,	1,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41,0,nullptr },  // Inst #263 = EH_SjLj_SetJmp64
  { 264,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #264 = EH_SjLj_Setup
  { 265,	0,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #265 = EIEIO
  { 266,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #266 = EQV
  { 267,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #267 = EQV8
  { 268,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #268 = EQV8o
  { 269,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #269 = EQVo
  { 270,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #270 = EVABS
  { 271,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #271 = EVADDIW
  { 272,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #272 = EVADDSMIAAW
  { 273,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #273 = EVADDSSIAAW
  { 274,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #274 = EVADDUMIAAW
  { 275,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #275 = EVADDUSIAAW
  { 276,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #276 = EVADDW
  { 277,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #277 = EVAND
  { 278,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #278 = EVANDC
  { 279,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #279 = EVCMPEQ
  { 280,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #280 = EVCMPGTS
  { 281,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #281 = EVCMPGTU
  { 282,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #282 = EVCMPLTS
  { 283,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #283 = EVCMPLTU
  { 284,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #284 = EVCNTLSW
  { 285,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #285 = EVCNTLZW
  { 286,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #286 = EVDIVWS
  { 287,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #287 = EVDIVWU
  { 288,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #288 = EVEQV
  { 289,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #289 = EVEXTSB
  { 290,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #290 = EVEXTSH
  { 291,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #291 = EVLDD
  { 292,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #292 = EVLDDX
  { 293,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #293 = EVLDH
  { 294,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #294 = EVLDHX
  { 295,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #295 = EVLDW
  { 296,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #296 = EVLDWX
  { 297,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #297 = EVLHHESPLAT
  { 298,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #298 = EVLHHESPLATX
  { 299,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #299 = EVLHHOSSPLAT
  { 300,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #300 = EVLHHOSSPLATX
  { 301,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #301 = EVLHHOUSPLAT
  { 302,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #302 = EVLHHOUSPLATX
  { 303,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #303 = EVLWHE
  { 304,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #304 = EVLWHEX
  { 305,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #305 = EVLWHOS
  { 306,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #306 = EVLWHOSX
  { 307,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #307 = EVLWHOU
  { 308,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #308 = EVLWHOUX
  { 309,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #309 = EVLWHSPLAT
  { 310,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #310 = EVLWHSPLATX
  { 311,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #311 = EVLWWSPLAT
  { 312,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #312 = EVLWWSPLATX
  { 313,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #313 = EVMERGEHI
  { 314,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #314 = EVMERGEHILO
  { 315,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #315 = EVMERGELO
  { 316,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #316 = EVMERGELOHI
  { 317,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #317 = EVMHEGSMFAA
  { 318,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #318 = EVMHEGSMFAN
  { 319,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #319 = EVMHEGSMIAA
  { 320,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #320 = EVMHEGSMIAN
  { 321,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #321 = EVMHEGUMIAA
  { 322,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #322 = EVMHEGUMIAN
  { 323,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #323 = EVMHESMF
  { 324,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #324 = EVMHESMFA
  { 325,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #325 = EVMHESMFAAW
  { 326,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #326 = EVMHESMFANW
  { 327,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #327 = EVMHESMI
  { 328,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #328 = EVMHESMIA
  { 329,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #329 = EVMHESMIAAW
  { 330,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #330 = EVMHESMIANW
  { 331,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #331 = EVMHESSF
  { 332,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #332 = EVMHESSFA
  { 333,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #333 = EVMHESSFAAW
  { 334,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #334 = EVMHESSFANW
  { 335,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #335 = EVMHESSIAAW
  { 336,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #336 = EVMHESSIANW
  { 337,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #337 = EVMHEUMI
  { 338,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #338 = EVMHEUMIA
  { 339,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #339 = EVMHEUMIAAW
  { 340,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #340 = EVMHEUMIANW
  { 341,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #341 = EVMHEUSIAAW
  { 342,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #342 = EVMHEUSIANW
  { 343,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #343 = EVMHOGSMFAA
  { 344,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #344 = EVMHOGSMFAN
  { 345,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #345 = EVMHOGSMIAA
  { 346,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #346 = EVMHOGSMIAN
  { 347,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #347 = EVMHOGUMIAA
  { 348,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #348 = EVMHOGUMIAN
  { 349,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #349 = EVMHOSMF
  { 350,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #350 = EVMHOSMFA
  { 351,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #351 = EVMHOSMFAAW
  { 352,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #352 = EVMHOSMFANW
  { 353,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #353 = EVMHOSMI
  { 354,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #354 = EVMHOSMIA
  { 355,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #355 = EVMHOSMIAAW
  { 356,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #356 = EVMHOSMIANW
  { 357,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #357 = EVMHOSSF
  { 358,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #358 = EVMHOSSFA
  { 359,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #359 = EVMHOSSFAAW
  { 360,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #360 = EVMHOSSFANW
  { 361,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #361 = EVMHOSSIAAW
  { 362,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #362 = EVMHOSSIANW
  { 363,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #363 = EVMHOUMI
  { 364,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #364 = EVMHOUMIA
  { 365,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #365 = EVMHOUMIAAW
  { 366,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #366 = EVMHOUMIANW
  { 367,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #367 = EVMHOUSIAAW
  { 368,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #368 = EVMHOUSIANW
  { 369,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #369 = EVMRA
  { 370,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #370 = EVMWHSMF
  { 371,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #371 = EVMWHSMFA
  { 372,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #372 = EVMWHSMI
  { 373,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #373 = EVMWHSMIA
  { 374,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #374 = EVMWHSSF
  { 375,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #375 = EVMWHSSFA
  { 376,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #376 = EVMWHUMI
  { 377,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #377 = EVMWHUMIA
  { 378,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #378 = EVMWLSMIAAW
  { 379,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #379 = EVMWLSMIANW
  { 380,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #380 = EVMWLSSIAAW
  { 381,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #381 = EVMWLSSIANW
  { 382,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #382 = EVMWLUMI
  { 383,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #383 = EVMWLUMIA
  { 384,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #384 = EVMWLUMIAAW
  { 385,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #385 = EVMWLUMIANW
  { 386,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #386 = EVMWLUSIAAW
  { 387,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #387 = EVMWLUSIANW
  { 388,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #388 = EVMWSMF
  { 389,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #389 = EVMWSMFA
  { 390,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #390 = EVMWSMFAA
  { 391,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #391 = EVMWSMFAN
  { 392,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #392 = EVMWSMI
  { 393,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #393 = EVMWSMIA
  { 394,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #394 = EVMWSMIAA
  { 395,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #395 = EVMWSMIAN
  { 396,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #396 = EVMWSSF
  { 397,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #397 = EVMWSSFA
  { 398,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #398 = EVMWSSFAA
  { 399,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #399 = EVMWSSFAN
  { 400,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #400 = EVMWUMI
  { 401,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #401 = EVMWUMIA
  { 402,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #402 = EVMWUMIAA
  { 403,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #403 = EVMWUMIAN
  { 404,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #404 = EVNAND
  { 405,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #405 = EVNEG
  { 406,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #406 = EVNOR
  { 407,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #407 = EVOR
  { 408,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #408 = EVORC
  { 409,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #409 = EVRLW
  { 410,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #410 = EVRLWI
  { 411,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #411 = EVRNDW
  { 412,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #412 = EVSLW
  { 413,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #413 = EVSLWI
  { 414,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #414 = EVSPLATFI
  { 415,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #415 = EVSPLATI
  { 416,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #416 = EVSRWIS
  { 417,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #417 = EVSRWIU
  { 418,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #418 = EVSRWS
  { 419,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #419 = EVSRWU
  { 420,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #420 = EVSTDD
  { 421,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #421 = EVSTDDX
  { 422,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #422 = EVSTDH
  { 423,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #423 = EVSTDHX
  { 424,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #424 = EVSTDW
  { 425,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #425 = EVSTDWX
  { 426,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #426 = EVSTWHE
  { 427,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #427 = EVSTWHEX
  { 428,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #428 = EVSTWHO
  { 429,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #429 = EVSTWHOX
  { 430,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #430 = EVSTWWE
  { 431,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #431 = EVSTWWEX
  { 432,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #432 = EVSTWWO
  { 433,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #433 = EVSTWWOX
  { 434,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #434 = EVSUBFSMIAAW
  { 435,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #435 = EVSUBFSSIAAW
  { 436,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #436 = EVSUBFUMIAAW
  { 437,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #437 = EVSUBFUSIAAW
  { 438,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #438 = EVSUBFW
  { 439,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #439 = EVSUBIFW
  { 440,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #440 = EVXOR
  { 441,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #441 = EXTLDI
  { 442,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #442 = EXTLDIo
  { 443,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #443 = EXTLWI
  { 444,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #444 = EXTLWIo
  { 445,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #445 = EXTRDI
  { 446,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #446 = EXTRDIo
  { 447,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #447 = EXTRWI
  { 448,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #448 = EXTRWIo
  { 449,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #449 = EXTSB
  { 450,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #450 = EXTSB8
  { 451,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #451 = EXTSB8_32_64
  { 452,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #452 = EXTSB8o
  { 453,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #453 = EXTSBo
  { 454,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #454 = EXTSH
  { 455,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #455 = EXTSH8
  { 456,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #456 = EXTSH8_32_64
  { 457,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #457 = EXTSH8o
  { 458,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #458 = EXTSHo
  { 459,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #459 = EXTSW
  { 460,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #460 = EXTSW_32_64
  { 461,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo45,0,nullptr },  // Inst #461 = EXTSW_32_64o
  { 462,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #462 = EXTSWo
  { 463,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #463 = FABSD
  { 464,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #464 = FABSDo
  { 465,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #465 = FABSS
  { 466,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #466 = FABSSo
  { 467,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo48,0,nullptr },  // Inst #467 = FADD
  { 468,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo49,0,nullptr },  // Inst #468 = FADDS
  { 469,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo49,0,nullptr },  // Inst #469 = FADDSo
  { 470,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo48,0,nullptr },  // Inst #470 = FADDo
  { 471,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList11, nullptr, OperandInfo48,0,nullptr },  // Inst #471 = FADDrtz
  { 472,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #472 = FCFID
  { 473,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo50,0,nullptr },  // Inst #473 = FCFIDS
  { 474,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo50,0,nullptr },  // Inst #474 = FCFIDSo
  { 475,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #475 = FCFIDU
  { 476,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo50,0,nullptr },  // Inst #476 = FCFIDUS
  { 477,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo50,0,nullptr },  // Inst #477 = FCFIDUSo
  { 478,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #478 = FCFIDUo
  { 479,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #479 = FCFIDo
  { 480,	3,	1,	13,	4,	0|(1<<MCID::Compare), 0x18ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #480 = FCMPUD
  { 481,	3,	1,	13,	4,	0|(1<<MCID::Compare), 0x18ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #481 = FCMPUS
  { 482,	3,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #482 = FCPSGND
  { 483,	3,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo48,0,nullptr },  // Inst #483 = FCPSGNDo
  { 484,	3,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #484 = FCPSGNS
  { 485,	3,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo49,0,nullptr },  // Inst #485 = FCPSGNSo
  { 486,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #486 = FCTID
  { 487,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #487 = FCTIDUZ
  { 488,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #488 = FCTIDUZo
  { 489,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #489 = FCTIDZ
  { 490,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #490 = FCTIDZo
  { 491,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #491 = FCTIDo
  { 492,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #492 = FCTIW
  { 493,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #493 = FCTIWUZ
  { 494,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #494 = FCTIWUZo
  { 495,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #495 = FCTIWZ
  { 496,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #496 = FCTIWZo
  { 497,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #497 = FCTIWo
  { 498,	3,	1,	14,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo48,0,nullptr },  // Inst #498 = FDIV
  { 499,	3,	1,	15,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo49,0,nullptr },  // Inst #499 = FDIVS
  { 500,	3,	1,	15,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo49,0,nullptr },  // Inst #500 = FDIVSo
  { 501,	3,	1,	14,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo48,0,nullptr },  // Inst #501 = FDIVo
  { 502,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo53,0,nullptr },  // Inst #502 = FMADD
  { 503,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo54,0,nullptr },  // Inst #503 = FMADDS
  { 504,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo54,0,nullptr },  // Inst #504 = FMADDSo
  { 505,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo53,0,nullptr },  // Inst #505 = FMADDo
  { 506,	2,	1,	11,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #506 = FMR
  { 507,	2,	1,	11,	4,	0, 0x0ULL, nullptr, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #507 = FMRo
  { 508,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo53,0,nullptr },  // Inst #508 = FMSUB
  { 509,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo54,0,nullptr },  // Inst #509 = FMSUBS
  { 510,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo54,0,nullptr },  // Inst #510 = FMSUBSo
  { 511,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo53,0,nullptr },  // Inst #511 = FMSUBo
  { 512,	3,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo48,0,nullptr },  // Inst #512 = FMUL
  { 513,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo49,0,nullptr },  // Inst #513 = FMULS
  { 514,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo49,0,nullptr },  // Inst #514 = FMULSo
  { 515,	3,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo48,0,nullptr },  // Inst #515 = FMULo
  { 516,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #516 = FNABSD
  { 517,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #517 = FNABSDo
  { 518,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #518 = FNABSS
  { 519,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #519 = FNABSSo
  { 520,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #520 = FNEGD
  { 521,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #521 = FNEGDo
  { 522,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #522 = FNEGS
  { 523,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #523 = FNEGSo
  { 524,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo53,0,nullptr },  // Inst #524 = FNMADD
  { 525,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo54,0,nullptr },  // Inst #525 = FNMADDS
  { 526,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo54,0,nullptr },  // Inst #526 = FNMADDSo
  { 527,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo53,0,nullptr },  // Inst #527 = FNMADDo
  { 528,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo53,0,nullptr },  // Inst #528 = FNMSUB
  { 529,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, nullptr, OperandInfo54,0,nullptr },  // Inst #529 = FNMSUBS
  { 530,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo54,0,nullptr },  // Inst #530 = FNMSUBSo
  { 531,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo53,0,nullptr },  // Inst #531 = FNMSUBo
  { 532,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #532 = FRE
  { 533,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #533 = FRES
  { 534,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #534 = FRESo
  { 535,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #535 = FREo
  { 536,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #536 = FRIMD
  { 537,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #537 = FRIMDo
  { 538,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo47,0,nullptr },  // Inst #538 = FRIMS
  { 539,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #539 = FRIMSo
  { 540,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #540 = FRIND
  { 541,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #541 = FRINDo
  { 542,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo47,0,nullptr },  // Inst #542 = FRINS
  { 543,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #543 = FRINSo
  { 544,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #544 = FRIPD
  { 545,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #545 = FRIPDo
  { 546,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo47,0,nullptr },  // Inst #546 = FRIPS
  { 547,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #547 = FRIPSo
  { 548,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #548 = FRIZD
  { 549,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #549 = FRIZDo
  { 550,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo47,0,nullptr },  // Inst #550 = FRIZS
  { 551,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #551 = FRIZSo
  { 552,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo50,0,nullptr },  // Inst #552 = FRSP
  { 553,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo50,0,nullptr },  // Inst #553 = FRSPo
  { 554,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #554 = FRSQRTE
  { 555,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #555 = FRSQRTES
  { 556,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #556 = FRSQRTESo
  { 557,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #557 = FRSQRTEo
  { 558,	4,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #558 = FSELD
  { 559,	4,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo53,0,nullptr },  // Inst #559 = FSELDo
  { 560,	4,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #560 = FSELS
  { 561,	4,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList17, OperandInfo55,0,nullptr },  // Inst #561 = FSELSo
  { 562,	2,	1,	17,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo46,0,nullptr },  // Inst #562 = FSQRT
  { 563,	2,	1,	18,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo47,0,nullptr },  // Inst #563 = FSQRTS
  { 564,	2,	1,	18,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo47,0,nullptr },  // Inst #564 = FSQRTSo
  { 565,	2,	1,	17,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo46,0,nullptr },  // Inst #565 = FSQRTo
  { 566,	3,	1,	12,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo48,0,nullptr },  // Inst #566 = FSUB
  { 567,	3,	1,	11,	4,	0, 0x18ULL, ImplicitList11, nullptr, OperandInfo49,0,nullptr },  // Inst #567 = FSUBS
  { 568,	3,	1,	11,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo49,0,nullptr },  // Inst #568 = FSUBSo
  { 569,	3,	1,	12,	4,	0, 0x18ULL, ImplicitList11, ImplicitList17, OperandInfo48,0,nullptr },  // Inst #569 = FSUBo
  { 570,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #570 = GETtlsADDR
  { 571,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #571 = GETtlsADDR32
  { 572,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #572 = GETtlsldADDR
  { 573,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #573 = GETtlsldADDR32
  { 574,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #574 = GetGBRO
  { 575,	2,	0,	19,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #575 = ICBI
  { 576,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #576 = ICBT
  { 577,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #577 = ICCCI
  { 578,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #578 = INSLWI
  { 579,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #579 = INSLWIo
  { 580,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #580 = INSRDI
  { 581,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #581 = INSRDIo
  { 582,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #582 = INSRWI
  { 583,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #583 = INSRWIo
  { 584,	4,	1,	2,	4,	0|(1<<MCID::Select), 0x8ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #584 = ISEL
  { 585,	4,	1,	2,	4,	0|(1<<MCID::Select), 0x8ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #585 = ISEL8
  { 586,	0,	0,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #586 = ISYNC
  { 587,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #587 = LA
  { 588,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #588 = LAx
  { 589,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #589 = LBZ
  { 590,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #590 = LBZ8
  { 591,	4,	2,	21,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #591 = LBZU
  { 592,	4,	2,	21,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #592 = LBZU8
  { 593,	4,	2,	22,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #593 = LBZUX
  { 594,	4,	2,	22,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #594 = LBZUX8
  { 595,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #595 = LBZX
  { 596,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #596 = LBZX8
  { 597,	3,	1,	23,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #597 = LD
  { 598,	3,	1,	24,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #598 = LDARX
  { 599,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #599 = LDBRX
  { 600,	4,	2,	25,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #600 = LDU
  { 601,	4,	2,	26,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #601 = LDUX
  { 602,	3,	1,	23,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #602 = LDX
  { 603,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #603 = LDgotTprelL
  { 604,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #604 = LDgotTprelL32
  { 605,	2,	0,	23,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, ImplicitList18, OperandInfo68,0,nullptr },  // Inst #605 = LDinto_toc
  { 606,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #606 = LDtoc
  { 607,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #607 = LDtocBA
  { 608,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #608 = LDtocCPT
  { 609,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #609 = LDtocJTI
  { 610,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #610 = LDtocL
  { 611,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #611 = LFD
  { 612,	4,	2,	28,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #612 = LFDU
  { 613,	4,	2,	29,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #613 = LFDUX
  { 614,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #614 = LFDX
  { 615,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #615 = LFIWAX
  { 616,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #616 = LFIWZX
  { 617,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #617 = LFS
  { 618,	4,	2,	28,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #618 = LFSU
  { 619,	4,	2,	29,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #619 = LFSUX
  { 620,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #620 = LFSX
  { 621,	3,	1,	30,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #621 = LHA
  { 622,	3,	1,	30,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #622 = LHA8
  { 623,	4,	2,	31,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #623 = LHAU
  { 624,	4,	2,	31,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #624 = LHAU8
  { 625,	4,	2,	32,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #625 = LHAUX
  { 626,	4,	2,	32,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #626 = LHAUX8
  { 627,	3,	1,	30,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #627 = LHAX
  { 628,	3,	1,	30,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #628 = LHAX8
  { 629,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #629 = LHBRX
  { 630,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #630 = LHZ
  { 631,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #631 = LHZ8
  { 632,	4,	2,	21,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #632 = LHZU
  { 633,	4,	2,	21,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #633 = LHZU8
  { 634,	4,	2,	22,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #634 = LHZUX
  { 635,	4,	2,	22,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #635 = LHZUX8
  { 636,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #636 = LHZX
  { 637,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #637 = LHZX8
  { 638,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #638 = LI
  { 639,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #639 = LI8
  { 640,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #640 = LIS
  { 641,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #641 = LIS8
  { 642,	3,	1,	33,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #642 = LMW
  { 643,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #643 = LSWI
  { 644,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #644 = LVEBX
  { 645,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #645 = LVEHX
  { 646,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #646 = LVEWX
  { 647,	3,	1,	8,	4,	0, 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #647 = LVSL
  { 648,	3,	1,	8,	4,	0, 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #648 = LVSR
  { 649,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #649 = LVX
  { 650,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #650 = LVXL
  { 651,	3,	1,	34,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #651 = LWA
  { 652,	3,	1,	35,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #652 = LWARX
  { 653,	4,	2,	32,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #653 = LWAUX
  { 654,	3,	1,	30,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #654 = LWAX
  { 655,	3,	1,	30,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #655 = LWAX_32
  { 656,	3,	1,	34,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #656 = LWA_32
  { 657,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #657 = LWBRX
  { 658,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #658 = LWZ
  { 659,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #659 = LWZ8
  { 660,	4,	2,	21,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #660 = LWZU
  { 661,	4,	2,	21,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #661 = LWZU8
  { 662,	4,	2,	22,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #662 = LWZUX
  { 663,	4,	2,	22,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #663 = LWZUX8
  { 664,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #664 = LWZX
  { 665,	3,	1,	8,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #665 = LWZX8
  { 666,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #666 = LWZtoc
  { 667,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, ImplicitList11, nullptr, OperandInfo81,0,nullptr },  // Inst #667 = LXSDX
  { 668,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, ImplicitList11, nullptr, OperandInfo82,0,nullptr },  // Inst #668 = LXVD2X
  { 669,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, ImplicitList11, nullptr, OperandInfo82,0,nullptr },  // Inst #669 = LXVDSX
  { 670,	3,	1,	27,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, ImplicitList11, nullptr, OperandInfo82,0,nullptr },  // Inst #670 = LXVW4X
  { 671,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #671 = MBAR
  { 672,	2,	1,	36,	4,	0, 0x21ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #672 = MCRF
  { 673,	1,	1,	37,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #673 = MFCR
  { 674,	1,	1,	37,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #674 = MFCR8
  { 675,	1,	1,	38,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList5, nullptr, OperandInfo84,0,nullptr },  // Inst #675 = MFCTR
  { 676,	1,	1,	38,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, nullptr, OperandInfo85,0,nullptr },  // Inst #676 = MFCTR8
  { 677,	2,	1,	38,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #677 = MFDCR
  { 678,	1,	1,	39,	4,	0, 0x1aULL, ImplicitList11, nullptr, OperandInfo86,0,nullptr },  // Inst #678 = MFFS
  { 679,	1,	1,	38,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList8, nullptr, OperandInfo84,0,nullptr },  // Inst #679 = MFLR
  { 680,	1,	1,	38,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, nullptr, OperandInfo85,0,nullptr },  // Inst #680 = MFLR8
  { 681,	1,	1,	40,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #681 = MFMSR
  { 682,	2,	1,	41,	4,	0|(1<<MCID::ExtraSrcRegAllocReq), 0x21ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #682 = MFOCRF
  { 683,	2,	1,	41,	4,	0|(1<<MCID::ExtraSrcRegAllocReq), 0x21ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #683 = MFOCRF8
  { 684,	2,	1,	38,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #684 = MFSPR
  { 685,	2,	1,	42,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #685 = MFSR
  { 686,	2,	1,	42,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #686 = MFSRIN
  { 687,	2,	1,	43,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,PPC::DeprecatedMFTB,nullptr },  // Inst #687 = MFTB
  { 688,	1,	1,	43,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #688 = MFTB8
  { 689,	1,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #689 = MFVRSAVE
  { 690,	2,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #690 = MFVRSAVEv
  { 691,	1,	1,	44,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #691 = MFVSCR
  { 692,	0,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #692 = MSYNC
  { 693,	2,	0,	46,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #693 = MTCRF
  { 694,	2,	0,	46,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #694 = MTCRF8
  { 695,	1,	0,	47,	4,	0, 0x9ULL, nullptr, ImplicitList5, OperandInfo84,0,nullptr },  // Inst #695 = MTCTR
  { 696,	1,	0,	47,	4,	0, 0x9ULL, nullptr, ImplicitList6, OperandInfo85,0,nullptr },  // Inst #696 = MTCTR8
  { 697,	1,	0,	47,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList6, OperandInfo85,0,nullptr },  // Inst #697 = MTCTR8loop
  { 698,	1,	0,	47,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList5, OperandInfo84,0,nullptr },  // Inst #698 = MTCTRloop
  { 699,	2,	0,	47,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #699 = MTDCR
  { 700,	1,	0,	48,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo5,0,nullptr },  // Inst #700 = MTFSB0
  { 701,	1,	0,	48,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo5,0,nullptr },  // Inst #701 = MTFSB1
  { 702,	2,	0,	48,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo91,0,nullptr },  // Inst #702 = MTFSF
  { 703,	1,	0,	47,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList8, OperandInfo84,0,nullptr },  // Inst #703 = MTLR
  { 704,	1,	0,	47,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList10, OperandInfo85,0,nullptr },  // Inst #704 = MTLR8
  { 705,	2,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #705 = MTMSR
  { 706,	2,	0,	50,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #706 = MTMSRD
  { 707,	2,	1,	46,	4,	0, 0x21ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #707 = MTOCRF
  { 708,	2,	1,	46,	4,	0, 0x21ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #708 = MTOCRF8
  { 709,	2,	0,	47,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #709 = MTSPR
  { 710,	2,	0,	51,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #710 = MTSR
  { 711,	2,	0,	51,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #711 = MTSRIN
  { 712,	1,	0,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #712 = MTVRSAVE
  { 713,	2,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #713 = MTVRSAVEv
  { 714,	1,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #714 = MTVSCR
  { 715,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #715 = MULHD
  { 716,	3,	1,	53,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #716 = MULHDU
  { 717,	3,	1,	53,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #717 = MULHDUo
  { 718,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #718 = MULHDo
  { 719,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #719 = MULHW
  { 720,	3,	1,	53,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #720 = MULHWU
  { 721,	3,	1,	53,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #721 = MULHWUo
  { 722,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #722 = MULHWo
  { 723,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #723 = MULLD
  { 724,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #724 = MULLDo
  { 725,	3,	1,	55,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #725 = MULLI
  { 726,	3,	1,	55,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #726 = MULLI8
  { 727,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #727 = MULLW
  { 728,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #728 = MULLWo
  { 729,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList8, nullptr,0,nullptr },  // Inst #729 = MovePCtoLR
  { 730,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList10, nullptr,0,nullptr },  // Inst #730 = MovePCtoLR8
  { 731,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #731 = NAND
  { 732,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #732 = NAND8
  { 733,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #733 = NAND8o
  { 734,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #734 = NANDo
  { 735,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #735 = NEG
  { 736,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #736 = NEG8
  { 737,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #737 = NEG8o
  { 738,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #738 = NEGo
  { 739,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #739 = NOP
  { 740,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #740 = NOP_GT_PWR6
  { 741,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #741 = NOP_GT_PWR7
  { 742,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #742 = NOR
  { 743,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #743 = NOR8
  { 744,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #744 = NOR8o
  { 745,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #745 = NORo
  { 746,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #746 = OR
  { 747,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #747 = OR8
  { 748,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #748 = OR8o
  { 749,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #749 = ORC
  { 750,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #750 = ORC8
  { 751,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #751 = ORC8o
  { 752,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #752 = ORCo
  { 753,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #753 = ORI
  { 754,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #754 = ORI8
  { 755,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #755 = ORIS
  { 756,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #756 = ORIS8
  { 757,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #757 = ORo
  { 758,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #758 = POPCNTD
  { 759,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #759 = POPCNTW
  { 760,	1,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #760 = PPC32GOT
  { 761,	2,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #761 = PPC32PICGOT
  { 762,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #762 = RESTORE_CR
  { 763,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #763 = RESTORE_CRBIT
  { 764,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #764 = RESTORE_VRSAVE
  { 765,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #765 = RFCI
  { 766,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #766 = RFDI
  { 767,	0,	0,	56,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #767 = RFI
  { 768,	0,	0,	57,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #768 = RFID
  { 769,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #769 = RFMCI
  { 770,	4,	1,	58,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #770 = RLDCL
  { 771,	4,	1,	58,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo98,0,nullptr },  // Inst #771 = RLDCLo
  { 772,	4,	1,	58,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #772 = RLDCR
  { 773,	4,	1,	58,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo98,0,nullptr },  // Inst #773 = RLDCRo
  { 774,	4,	1,	59,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #774 = RLDIC
  { 775,	4,	1,	59,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #775 = RLDICL
  { 776,	4,	1,	59,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #776 = RLDICL_32_64
  { 777,	4,	1,	59,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo29,0,nullptr },  // Inst #777 = RLDICLo
  { 778,	4,	1,	59,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #778 = RLDICR
  { 779,	4,	1,	59,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo29,0,nullptr },  // Inst #779 = RLDICRo
  { 780,	4,	1,	59,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo29,0,nullptr },  // Inst #780 = RLDICo
  { 781,	5,	1,	59,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #781 = RLDIMI
  { 782,	5,	1,	59,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo100,0,nullptr },  // Inst #782 = RLDIMIo
  { 783,	6,	1,	60,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #783 = RLWIMI
  { 784,	6,	1,	60,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #784 = RLWIMI8
  { 785,	6,	1,	60,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList1, OperandInfo102,0,nullptr },  // Inst #785 = RLWIMI8o
  { 786,	6,	1,	60,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList1, OperandInfo101,0,nullptr },  // Inst #786 = RLWIMIo
  { 787,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #787 = RLWINM
  { 788,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #788 = RLWINM8
  { 789,	5,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #789 = RLWINM8o
  { 790,	5,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList1, OperandInfo103,0,nullptr },  // Inst #790 = RLWINMo
  { 791,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #791 = RLWNM
  { 792,	5,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo105,0,nullptr },  // Inst #792 = RLWNMo
  { 793,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #793 = ROTRDI
  { 794,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #794 = ROTRDIo
  { 795,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #795 = ROTRWI
  { 796,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #796 = ROTRWIo
  { 797,	1,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #797 = SC
  { 798,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #798 = SELECT_CC_F4
  { 799,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #799 = SELECT_CC_F8
  { 800,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #800 = SELECT_CC_I4
  { 801,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #801 = SELECT_CC_I8
  { 802,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #802 = SELECT_CC_VRRC
  { 803,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #803 = SELECT_CC_VSFRC
  { 804,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #804 = SELECT_CC_VSRC
  { 805,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo112,0,nullptr },  // Inst #805 = SELECT_F4
  { 806,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #806 = SELECT_F8
  { 807,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #807 = SELECT_I4
  { 808,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #808 = SELECT_I8
  { 809,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #809 = SELECT_VRRC
  { 810,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo113,0,nullptr },  // Inst #810 = SELECT_VSFRC
  { 811,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #811 = SELECT_VSRC
  { 812,	0,	0,	61,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #812 = SLBIA
  { 813,	1,	0,	62,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #813 = SLBIE
  { 814,	2,	1,	63,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #814 = SLBMFEE
  { 815,	2,	0,	64,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #815 = SLBMTE
  { 816,	3,	1,	58,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #816 = SLD
  { 817,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #817 = SLDI
  { 818,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #818 = SLDIo
  { 819,	3,	1,	58,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo118,0,nullptr },  // Inst #819 = SLDo
  { 820,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #820 = SLW
  { 821,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #821 = SLWI
  { 822,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #822 = SLWIo
  { 823,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #823 = SLWo
  { 824,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #824 = SPILL_CR
  { 825,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #825 = SPILL_CRBIT
  { 826,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #826 = SPILL_VRSAVE
  { 827,	3,	1,	58,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo118,0,nullptr },  // Inst #827 = SRAD
  { 828,	3,	1,	59,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #828 = SRADI
  { 829,	3,	1,	59,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo14,0,nullptr },  // Inst #829 = SRADIo
  { 830,	3,	1,	58,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo118,0,nullptr },  // Inst #830 = SRADo
  { 831,	3,	1,	65,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo11,0,nullptr },  // Inst #831 = SRAW
  { 832,	3,	1,	65,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #832 = SRAWI
  { 833,	3,	1,	65,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #833 = SRAWIo
  { 834,	3,	1,	65,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo11,0,nullptr },  // Inst #834 = SRAWo
  { 835,	3,	1,	58,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #835 = SRD
  { 836,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #836 = SRDI
  { 837,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #837 = SRDIo
  { 838,	3,	1,	58,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo118,0,nullptr },  // Inst #838 = SRDo
  { 839,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #839 = SRW
  { 840,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #840 = SRWI
  { 841,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #841 = SRWIo
  { 842,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #842 = SRWo
  { 843,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #843 = STB
  { 844,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #844 = STB8
  { 845,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #845 = STBU
  { 846,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #846 = STBU8
  { 847,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #847 = STBUX
  { 848,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #848 = STBUX8
  { 849,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #849 = STBX
  { 850,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #850 = STBX8
  { 851,	3,	0,	67,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #851 = STD
  { 852,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #852 = STDBRX
  { 853,	3,	0,	68,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo65,0,nullptr },  // Inst #853 = STDCX
  { 854,	4,	1,	69,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #854 = STDU
  { 855,	4,	1,	70,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #855 = STDUX
  { 856,	3,	0,	67,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #856 = STDX
  { 857,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #857 = STFD
  { 858,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #858 = STFDU
  { 859,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #859 = STFDUX
  { 860,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #860 = STFDX
  { 861,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #861 = STFIWX
  { 862,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #862 = STFS
  { 863,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #863 = STFSU
  { 864,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #864 = STFSUX
  { 865,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #865 = STFSX
  { 866,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #866 = STH
  { 867,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #867 = STH8
  { 868,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #868 = STHBRX
  { 869,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #869 = STHU
  { 870,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #870 = STHU8
  { 871,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #871 = STHUX
  { 872,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #872 = STHUX8
  { 873,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #873 = STHX
  { 874,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #874 = STHX8
  { 875,	3,	0,	33,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #875 = STMW
  { 876,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #876 = STSWI
  { 877,	3,	0,	44,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #877 = STVEBX
  { 878,	3,	0,	44,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #878 = STVEHX
  { 879,	3,	0,	44,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #879 = STVEWX
  { 880,	3,	0,	44,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #880 = STVX
  { 881,	3,	0,	44,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #881 = STVXL
  { 882,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #882 = STW
  { 883,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #883 = STW8
  { 884,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #884 = STWBRX
  { 885,	3,	0,	73,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo64,0,nullptr },  // Inst #885 = STWCX
  { 886,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #886 = STWU
  { 887,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #887 = STWU8
  { 888,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #888 = STWUX
  { 889,	4,	1,	66,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #889 = STWUX8
  { 890,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #890 = STWX
  { 891,	3,	0,	44,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #891 = STWX8
  { 892,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList11, nullptr, OperandInfo81,0,nullptr },  // Inst #892 = STXSDX
  { 893,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList11, nullptr, OperandInfo82,0,nullptr },  // Inst #893 = STXVD2X
  { 894,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList11, nullptr, OperandInfo82,0,nullptr },  // Inst #894 = STXVW4X
  { 895,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #895 = SUBF
  { 896,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #896 = SUBF8
  { 897,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #897 = SUBF8o
  { 898,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo11,0,nullptr },  // Inst #898 = SUBFC
  { 899,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #899 = SUBFC8
  { 900,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #900 = SUBFC8o
  { 901,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList3, OperandInfo11,0,nullptr },  // Inst #901 = SUBFCo
  { 902,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo11,0,nullptr },  // Inst #902 = SUBFE
  { 903,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #903 = SUBFE8
  { 904,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo13,0,nullptr },  // Inst #904 = SUBFE8o
  { 905,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo11,0,nullptr },  // Inst #905 = SUBFEo
  { 906,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #906 = SUBFIC
  { 907,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #907 = SUBFIC8
  { 908,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo17,0,nullptr },  // Inst #908 = SUBFME
  { 909,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo18,0,nullptr },  // Inst #909 = SUBFME8
  { 910,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo18,0,nullptr },  // Inst #910 = SUBFME8o
  { 911,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo17,0,nullptr },  // Inst #911 = SUBFMEo
  { 912,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo17,0,nullptr },  // Inst #912 = SUBFZE
  { 913,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo18,0,nullptr },  // Inst #913 = SUBFZE8
  { 914,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo18,0,nullptr },  // Inst #914 = SUBFZE8o
  { 915,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo17,0,nullptr },  // Inst #915 = SUBFZEo
  { 916,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #916 = SUBFo
  { 917,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #917 = SUBI
  { 918,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #918 = SUBIC
  { 919,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #919 = SUBICo
  { 920,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #920 = SUBIS
  { 921,	1,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #921 = SYNC
  { 922,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, nullptr, OperandInfo5,0,nullptr },  // Inst #922 = TAILB
  { 923,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, nullptr, OperandInfo5,0,nullptr },  // Inst #923 = TAILB8
  { 924,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, nullptr, OperandInfo5,0,nullptr },  // Inst #924 = TAILBA
  { 925,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, nullptr, OperandInfo5,0,nullptr },  // Inst #925 = TAILBA8
  { 926,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, nullptr,0,nullptr },  // Inst #926 = TAILBCTR
  { 927,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, nullptr, nullptr,0,nullptr },  // Inst #927 = TAILBCTR8
  { 928,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, nullptr, OperandInfo127,0,nullptr },  // Inst #928 = TCRETURNai
  { 929,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, nullptr, OperandInfo127,0,nullptr },  // Inst #929 = TCRETURNai8
  { 930,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, nullptr, OperandInfo127,0,nullptr },  // Inst #930 = TCRETURNdi
  { 931,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, nullptr, OperandInfo127,0,nullptr },  // Inst #931 = TCRETURNdi8
  { 932,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, nullptr, OperandInfo128,0,nullptr },  // Inst #932 = TCRETURNri
  { 933,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, nullptr, OperandInfo129,0,nullptr },  // Inst #933 = TCRETURNri8
  { 934,	3,	0,	74,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #934 = TD
  { 935,	3,	0,	74,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #935 = TDI
  { 936,	0,	0,	75,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #936 = TLBIA
  { 937,	2,	0,	76,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #937 = TLBIE
  { 938,	1,	0,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #938 = TLBIEL
  { 939,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #939 = TLBIVAX
  { 940,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #940 = TLBLD
  { 941,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #941 = TLBLI
  { 942,	0,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #942 = TLBRE
  { 943,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #943 = TLBRE2
  { 944,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #944 = TLBSX
  { 945,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #945 = TLBSX2
  { 946,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #946 = TLBSX2D
  { 947,	0,	0,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #947 = TLBSYNC
  { 948,	0,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #948 = TLBWE
  { 949,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #949 = TLBWE2
  { 950,	0,	0,	8,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #950 = TRAP
  { 951,	3,	0,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #951 = TW
  { 952,	3,	0,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #952 = TWI
  { 953,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #953 = UPDATE_VRSAVE
  { 954,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #954 = UpdateGBR
  { 955,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #955 = VADDCUW
  { 956,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #956 = VADDFP
  { 957,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #957 = VADDSBS
  { 958,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #958 = VADDSHS
  { 959,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #959 = VADDSWS
  { 960,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #960 = VADDUBM
  { 961,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #961 = VADDUBS
  { 962,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #962 = VADDUHM
  { 963,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #963 = VADDUHS
  { 964,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #964 = VADDUWM
  { 965,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #965 = VADDUWS
  { 966,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #966 = VAND
  { 967,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #967 = VANDC
  { 968,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #968 = VAVGSB
  { 969,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #969 = VAVGSH
  { 970,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #970 = VAVGSW
  { 971,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #971 = VAVGUB
  { 972,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #972 = VAVGUH
  { 973,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #973 = VAVGUW
  { 974,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #974 = VCFSX
  { 975,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #975 = VCFSX_0
  { 976,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #976 = VCFUX
  { 977,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #977 = VCFUX_0
  { 978,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #978 = VCMPBFP
  { 979,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #979 = VCMPBFPo
  { 980,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #980 = VCMPEQFP
  { 981,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #981 = VCMPEQFPo
  { 982,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #982 = VCMPEQUB
  { 983,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #983 = VCMPEQUBo
  { 984,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #984 = VCMPEQUH
  { 985,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #985 = VCMPEQUHo
  { 986,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #986 = VCMPEQUW
  { 987,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #987 = VCMPEQUWo
  { 988,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #988 = VCMPGEFP
  { 989,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #989 = VCMPGEFPo
  { 990,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #990 = VCMPGTFP
  { 991,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #991 = VCMPGTFPo
  { 992,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #992 = VCMPGTSB
  { 993,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #993 = VCMPGTSBo
  { 994,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #994 = VCMPGTSH
  { 995,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #995 = VCMPGTSHo
  { 996,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #996 = VCMPGTSW
  { 997,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #997 = VCMPGTSWo
  { 998,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #998 = VCMPGTUB
  { 999,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #999 = VCMPGTUBo
  { 1000,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1000 = VCMPGTUH
  { 1001,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #1001 = VCMPGTUHo
  { 1002,	3,	1,	81,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1002 = VCMPGTUW
  { 1003,	3,	1,	81,	4,	0, 0x28ULL, nullptr, ImplicitList19, OperandInfo134,0,nullptr },  // Inst #1003 = VCMPGTUWo
  { 1004,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #1004 = VCTSXS
  { 1005,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1005 = VCTSXS_0
  { 1006,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #1006 = VCTUXS
  { 1007,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1007 = VCTUXS_0
  { 1008,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1008 = VEXPTEFP
  { 1009,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1009 = VLOGEFP
  { 1010,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1010 = VMADDFP
  { 1011,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1011 = VMAXFP
  { 1012,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1012 = VMAXSB
  { 1013,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1013 = VMAXSH
  { 1014,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1014 = VMAXSW
  { 1015,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1015 = VMAXUB
  { 1016,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1016 = VMAXUH
  { 1017,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1017 = VMAXUW
  { 1018,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1018 = VMHADDSHS
  { 1019,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1019 = VMHRADDSHS
  { 1020,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1020 = VMINFP
  { 1021,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1021 = VMINSB
  { 1022,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1022 = VMINSH
  { 1023,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1023 = VMINSW
  { 1024,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1024 = VMINUB
  { 1025,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1025 = VMINUH
  { 1026,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1026 = VMINUW
  { 1027,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1027 = VMLADDUHM
  { 1028,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1028 = VMRGHB
  { 1029,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1029 = VMRGHH
  { 1030,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1030 = VMRGHW
  { 1031,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1031 = VMRGLB
  { 1032,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1032 = VMRGLH
  { 1033,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1033 = VMRGLW
  { 1034,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1034 = VMSUMMBM
  { 1035,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1035 = VMSUMSHM
  { 1036,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1036 = VMSUMSHS
  { 1037,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1037 = VMSUMUBM
  { 1038,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1038 = VMSUMUHM
  { 1039,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1039 = VMSUMUHS
  { 1040,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1040 = VMULESB
  { 1041,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1041 = VMULESH
  { 1042,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1042 = VMULEUB
  { 1043,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1043 = VMULEUH
  { 1044,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1044 = VMULOSB
  { 1045,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1045 = VMULOSH
  { 1046,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1046 = VMULOUB
  { 1047,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1047 = VMULOUH
  { 1048,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1048 = VNMSUBFP
  { 1049,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1049 = VNOR
  { 1050,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1050 = VOR
  { 1051,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1051 = VPERM
  { 1052,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1052 = VPKPX
  { 1053,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1053 = VPKSHSS
  { 1054,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1054 = VPKSHUS
  { 1055,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1055 = VPKSWSS
  { 1056,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1056 = VPKSWUS
  { 1057,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1057 = VPKUHUM
  { 1058,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1058 = VPKUHUS
  { 1059,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1059 = VPKUWUM
  { 1060,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1060 = VPKUWUS
  { 1061,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1061 = VREFP
  { 1062,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1062 = VRFIM
  { 1063,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1063 = VRFIN
  { 1064,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1064 = VRFIP
  { 1065,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1065 = VRFIZ
  { 1066,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1066 = VRLB
  { 1067,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1067 = VRLH
  { 1068,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1068 = VRLW
  { 1069,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1069 = VRSQRTEFP
  { 1070,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #1070 = VSEL
  { 1071,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1071 = VSL
  { 1072,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1072 = VSLB
  { 1073,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #1073 = VSLDOI
  { 1074,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1074 = VSLH
  { 1075,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1075 = VSLO
  { 1076,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1076 = VSLW
  { 1077,	3,	1,	82,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #1077 = VSPLTB
  { 1078,	3,	1,	82,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #1078 = VSPLTH
  { 1079,	2,	1,	82,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #1079 = VSPLTISB
  { 1080,	2,	1,	82,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #1080 = VSPLTISH
  { 1081,	2,	1,	82,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #1081 = VSPLTISW
  { 1082,	3,	1,	82,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #1082 = VSPLTW
  { 1083,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1083 = VSR
  { 1084,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1084 = VSRAB
  { 1085,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1085 = VSRAH
  { 1086,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1086 = VSRAW
  { 1087,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1087 = VSRB
  { 1088,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1088 = VSRH
  { 1089,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1089 = VSRO
  { 1090,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1090 = VSRW
  { 1091,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1091 = VSUBCUW
  { 1092,	3,	1,	80,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1092 = VSUBFP
  { 1093,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1093 = VSUBSBS
  { 1094,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1094 = VSUBSHS
  { 1095,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1095 = VSUBSWS
  { 1096,	3,	1,	80,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1096 = VSUBUBM
  { 1097,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1097 = VSUBUBS
  { 1098,	3,	1,	80,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1098 = VSUBUHM
  { 1099,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1099 = VSUBUHS
  { 1100,	3,	1,	80,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1100 = VSUBUWM
  { 1101,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1101 = VSUBUWS
  { 1102,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1102 = VSUM2SWS
  { 1103,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1103 = VSUM4SBS
  { 1104,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1104 = VSUM4SHS
  { 1105,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1105 = VSUM4UBS
  { 1106,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1106 = VSUMSWS
  { 1107,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1107 = VUPKHPX
  { 1108,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1108 = VUPKHSB
  { 1109,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1109 = VUPKHSH
  { 1110,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1110 = VUPKLPX
  { 1111,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1111 = VUPKLSB
  { 1112,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1112 = VUPKLSH
  { 1113,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1113 = VXOR
  { 1114,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1114 = V_SET0
  { 1115,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1115 = V_SET0B
  { 1116,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1116 = V_SET0H
  { 1117,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1117 = V_SETALLONES
  { 1118,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1118 = V_SETALLONESB
  { 1119,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1119 = V_SETALLONESH
  { 1120,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1120 = WAIT
  { 1121,	1,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #1121 = WRTEE
  { 1122,	1,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1122 = WRTEEI
  { 1123,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1123 = XOR
  { 1124,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1124 = XOR8
  { 1125,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #1125 = XOR8o
  { 1126,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1126 = XORI
  { 1127,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1127 = XORI8
  { 1128,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1128 = XORIS
  { 1129,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1129 = XORIS8
  { 1130,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #1130 = XORo
  { 1131,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1131 = XSABSDP
  { 1132,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1132 = XSADDDP
  { 1133,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo142,0,nullptr },  // Inst #1133 = XSCMPODP
  { 1134,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo142,0,nullptr },  // Inst #1134 = XSCMPUDP
  { 1135,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1135 = XSCPSGNDP
  { 1136,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1136 = XSCVDPSP
  { 1137,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1137 = XSCVDPSXDS
  { 1138,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1138 = XSCVDPSXWS
  { 1139,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1139 = XSCVDPUXDS
  { 1140,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1140 = XSCVDPUXWS
  { 1141,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1141 = XSCVSPDP
  { 1142,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1142 = XSCVSXDDP
  { 1143,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1143 = XSCVUXDDP
  { 1144,	3,	1,	14,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1144 = XSDIVDP
  { 1145,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1145 = XSMADDADP
  { 1146,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1146 = XSMADDMDP
  { 1147,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1147 = XSMAXDP
  { 1148,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1148 = XSMINDP
  { 1149,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1149 = XSMSUBADP
  { 1150,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1150 = XSMSUBMDP
  { 1151,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1151 = XSMULDP
  { 1152,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1152 = XSNABSDP
  { 1153,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1153 = XSNEGDP
  { 1154,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1154 = XSNMADDADP
  { 1155,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1155 = XSNMADDMDP
  { 1156,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1156 = XSNMSUBADP
  { 1157,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo143,0,nullptr },  // Inst #1157 = XSNMSUBMDP
  { 1158,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1158 = XSRDPI
  { 1159,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1159 = XSRDPIC
  { 1160,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1160 = XSRDPIM
  { 1161,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1161 = XSRDPIP
  { 1162,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1162 = XSRDPIZ
  { 1163,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1163 = XSREDP
  { 1164,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1164 = XSRSQRTEDP
  { 1165,	2,	1,	17,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo140,0,nullptr },  // Inst #1165 = XSSQRTDP
  { 1166,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo141,0,nullptr },  // Inst #1166 = XSSUBDP
  { 1167,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo142,0,nullptr },  // Inst #1167 = XSTDIVDP
  { 1168,	2,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo144,0,nullptr },  // Inst #1168 = XSTSQRTDP
  { 1169,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1169 = XVABSDP
  { 1170,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1170 = XVABSSP
  { 1171,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1171 = XVADDDP
  { 1172,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1172 = XVADDSP
  { 1173,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1173 = XVCMPEQDP
  { 1174,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, ImplicitList19, OperandInfo146,0,nullptr },  // Inst #1174 = XVCMPEQDPo
  { 1175,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1175 = XVCMPEQSP
  { 1176,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, ImplicitList19, OperandInfo146,0,nullptr },  // Inst #1176 = XVCMPEQSPo
  { 1177,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1177 = XVCMPGEDP
  { 1178,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, ImplicitList19, OperandInfo146,0,nullptr },  // Inst #1178 = XVCMPGEDPo
  { 1179,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1179 = XVCMPGESP
  { 1180,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, ImplicitList19, OperandInfo146,0,nullptr },  // Inst #1180 = XVCMPGESPo
  { 1181,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1181 = XVCMPGTDP
  { 1182,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, ImplicitList19, OperandInfo146,0,nullptr },  // Inst #1182 = XVCMPGTDPo
  { 1183,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1183 = XVCMPGTSP
  { 1184,	3,	1,	81,	4,	0, 0x0ULL, ImplicitList11, ImplicitList19, OperandInfo146,0,nullptr },  // Inst #1184 = XVCMPGTSPo
  { 1185,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1185 = XVCPSGNDP
  { 1186,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1186 = XVCPSGNSP
  { 1187,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1187 = XVCVDPSP
  { 1188,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1188 = XVCVDPSXDS
  { 1189,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1189 = XVCVDPSXWS
  { 1190,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1190 = XVCVDPUXDS
  { 1191,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1191 = XVCVDPUXWS
  { 1192,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1192 = XVCVSPDP
  { 1193,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1193 = XVCVSPSXDS
  { 1194,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1194 = XVCVSPSXWS
  { 1195,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1195 = XVCVSPUXDS
  { 1196,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1196 = XVCVSPUXWS
  { 1197,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1197 = XVCVSXDDP
  { 1198,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1198 = XVCVSXDSP
  { 1199,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1199 = XVCVSXWDP
  { 1200,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1200 = XVCVSXWSP
  { 1201,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1201 = XVCVUXDDP
  { 1202,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1202 = XVCVUXDSP
  { 1203,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1203 = XVCVUXWDP
  { 1204,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1204 = XVCVUXWSP
  { 1205,	3,	1,	14,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1205 = XVDIVDP
  { 1206,	3,	1,	15,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1206 = XVDIVSP
  { 1207,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1207 = XVMADDADP
  { 1208,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1208 = XVMADDASP
  { 1209,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1209 = XVMADDMDP
  { 1210,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1210 = XVMADDMSP
  { 1211,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1211 = XVMAXDP
  { 1212,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1212 = XVMAXSP
  { 1213,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1213 = XVMINDP
  { 1214,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1214 = XVMINSP
  { 1215,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1215 = XVMSUBADP
  { 1216,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1216 = XVMSUBASP
  { 1217,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1217 = XVMSUBMDP
  { 1218,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1218 = XVMSUBMSP
  { 1219,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1219 = XVMULDP
  { 1220,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1220 = XVMULSP
  { 1221,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1221 = XVNABSDP
  { 1222,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1222 = XVNABSSP
  { 1223,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1223 = XVNEGDP
  { 1224,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1224 = XVNEGSP
  { 1225,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1225 = XVNMADDADP
  { 1226,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1226 = XVNMADDASP
  { 1227,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1227 = XVNMADDMDP
  { 1228,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1228 = XVNMADDMSP
  { 1229,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1229 = XVNMSUBADP
  { 1230,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1230 = XVNMSUBASP
  { 1231,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1231 = XVNMSUBMDP
  { 1232,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo147,0,nullptr },  // Inst #1232 = XVNMSUBMSP
  { 1233,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1233 = XVRDPI
  { 1234,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1234 = XVRDPIC
  { 1235,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1235 = XVRDPIM
  { 1236,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1236 = XVRDPIP
  { 1237,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1237 = XVRDPIZ
  { 1238,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1238 = XVREDP
  { 1239,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1239 = XVRESP
  { 1240,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1240 = XVRSPI
  { 1241,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1241 = XVRSPIC
  { 1242,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1242 = XVRSPIM
  { 1243,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1243 = XVRSPIP
  { 1244,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1244 = XVRSPIZ
  { 1245,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1245 = XVRSQRTEDP
  { 1246,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1246 = XVRSQRTESP
  { 1247,	2,	1,	17,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1247 = XVSQRTDP
  { 1248,	2,	1,	18,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo145,0,nullptr },  // Inst #1248 = XVSQRTSP
  { 1249,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1249 = XVSUBDP
  { 1250,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo146,0,nullptr },  // Inst #1250 = XVSUBSP
  { 1251,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo148,0,nullptr },  // Inst #1251 = XVTDIVDP
  { 1252,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo148,0,nullptr },  // Inst #1252 = XVTDIVSP
  { 1253,	2,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo149,0,nullptr },  // Inst #1253 = XVTSQRTDP
  { 1254,	2,	1,	13,	4,	0, 0x0ULL, ImplicitList11, nullptr, OperandInfo149,0,nullptr },  // Inst #1254 = XVTSQRTSP
  { 1255,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1255 = XXLAND
  { 1256,	3,	1,	80,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1256 = XXLANDC
  { 1257,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1257 = XXLNOR
  { 1258,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1258 = XXLOR
  { 1259,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #1259 = XXLORf
  { 1260,	3,	1,	80,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1260 = XXLXOR
  { 1261,	3,	1,	82,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1261 = XXMRGHW
  { 1262,	3,	1,	82,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1262 = XXMRGLW
  { 1263,	4,	1,	82,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #1263 = XXPERMDI
  { 1264,	4,	1,	82,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #1264 = XXSEL
  { 1265,	4,	1,	82,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #1265 = XXSLDWI
  { 1266,	3,	1,	82,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #1266 = XXSPLTW
  { 1267,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo153,0,nullptr },  // Inst #1267 = gBC
  { 1268,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList5, OperandInfo153,0,nullptr },  // Inst #1268 = gBCA
  { 1269,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, OperandInfo154,0,nullptr },  // Inst #1269 = gBCCTR
  { 1270,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList20, OperandInfo154,0,nullptr },  // Inst #1270 = gBCCTRL
  { 1271,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList20, OperandInfo153,0,nullptr },  // Inst #1271 = gBCL
  { 1272,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList20, OperandInfo153,0,nullptr },  // Inst #1272 = gBCLA
  { 1273,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, OperandInfo154,0,nullptr },  // Inst #1273 = gBCLR
  { 1274,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList20, OperandInfo154,0,nullptr },  // Inst #1274 = gBCLRL
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', '3', '2', 0,
  /* 71 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 91 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 111 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 132 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 168 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 188 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 208 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 227 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', '3', '2', 0,
  /* 240 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', '3', '2', 0,
  /* 253 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', '3', '2', 0,
  /* 267 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', '3', '2', 0,
  /* 281 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 296 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 309 */ 'L', 'W', 'A', '_', '3', '2', 0,
  /* 316 */ 'L', 'W', 'A', 'X', '_', '3', '2', 0,
  /* 324 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '3', '2', 0,
  /* 342 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '3', '2', 0,
  /* 359 */ 'T', 'L', 'B', 'R', 'E', '2', 0,
  /* 366 */ 'T', 'L', 'B', 'W', 'E', '2', 0,
  /* 373 */ 'T', 'L', 'B', 'S', 'X', '2', 0,
  /* 380 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 400 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 420 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 441 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 461 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 477 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 497 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 517 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 536 */ 'D', 'S', 'T', '6', '4', 0,
  /* 542 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 550 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 557 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 566 */ 'E', 'X', 'T', 'S', 'B', '8', '_', '3', '2', '_', '6', '4', 0,
  /* 579 */ 'E', 'X', 'T', 'S', 'H', '8', '_', '3', '2', '_', '6', '4', 0,
  /* 592 */ 'R', 'L', 'D', 'I', 'C', 'L', '_', '3', '2', '_', '6', '4', 0,
  /* 605 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 617 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '6', '4', 0,
  /* 635 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '6', '4', 0,
  /* 652 */ 'A', 'D', 'D', '4', 0,
  /* 657 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 670 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '4', 0,
  /* 680 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 693 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '4', 0,
  /* 703 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 723 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 743 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 764 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 784 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 800 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 820 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 840 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 859 */ 'N', 'O', 'P', '_', 'G', 'T', '_', 'P', 'W', 'R', '6', 0,
  /* 871 */ 'N', 'O', 'P', '_', 'G', 'T', '_', 'P', 'W', 'R', '7', 0,
  /* 883 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 891 */ 'L', 'H', 'A', '8', 0,
  /* 896 */ 'B', 'L', 'A', '8', 0,
  /* 901 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 908 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 915 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 921 */ 'S', 'T', 'B', '8', 0,
  /* 926 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 932 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 938 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 945 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 952 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 960 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 970 */ 'O', 'R', 'C', '8', 0,
  /* 975 */ 'A', 'D', 'D', '8', 0,
  /* 980 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 986 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 992 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 999 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 1006 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 1014 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 1021 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 1029 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 1035 */ 'M', 'F', 'O', 'C', 'R', 'F', '8', 0,
  /* 1043 */ 'M', 'T', 'O', 'C', 'R', 'F', '8', 0,
  /* 1051 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 1058 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 1071 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '8', 0,
  /* 1081 */ 'N', 'E', 'G', '8', 0,
  /* 1086 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 1093 */ 'S', 'T', 'H', '8', 0,
  /* 1098 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 1104 */ 'M', 'U', 'L', 'L', 'I', '8', 0,
  /* 1111 */ 'R', 'L', 'W', 'I', 'M', 'I', '8', 0,
  /* 1119 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 1125 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 1144 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 1157 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 1176 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1196 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1215 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1230 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1249 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1268 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1286 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '8', 0,
  /* 1296 */ 'B', 'L', '8', 0,
  /* 1300 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1306 */ 'B', 'C', 'T', 'R', 'L', '8', 0,
  /* 1313 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1321 */ 'B', 'C', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1330 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1338 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1344 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1350 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1356 */ 'B', 'D', 'Z', 'L', 'R', '8', 0,
  /* 1363 */ 'B', 'D', 'N', 'Z', 'L', 'R', '8', 0,
  /* 1371 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1383 */ 'N', 'O', 'R', '8', 0,
  /* 1388 */ 'X', 'O', 'R', '8', 0,
  /* 1393 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1403 */ 'B', 'C', 'C', 'T', 'R', '8', 0,
  /* 1410 */ 'B', 'C', 'C', 'C', 'T', 'R', '8', 0,
  /* 1418 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1425 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1432 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1439 */ 'L', 'I', 'S', '8', 0,
  /* 1444 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1451 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'E', 'Q', '_', 'B', 'I', 'T', '8', 0,
  /* 1467 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'G', 'T', '_', 'B', 'I', 'T', '8', 0,
  /* 1483 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1489 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1495 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1501 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1507 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1513 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1519 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1525 */ 'E', 'Q', 'V', '8', 0,
  /* 1530 */ 'S', 'T', 'W', '8', 0,
  /* 1535 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1541 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1547 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1553 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1560 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1567 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1574 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1581 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1588 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1595 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1602 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1608 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1614 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1620 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1626 */ 'L', 'B', 'Z', '8', 0,
  /* 1631 */ 'B', 'D', 'Z', '8', 0,
  /* 1636 */ 'L', 'H', 'Z', '8', 0,
  /* 1641 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1647 */ 'L', 'W', 'Z', '8', 0,
  /* 1652 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1664 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1676 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1688 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1695 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1703 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1715 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1727 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1737 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 'A', 0,
  /* 1747 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1759 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1771 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1781 */ 'E', 'V', 'M', 'H', 'E', 'G', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1793 */ 'E', 'V', 'M', 'H', 'O', 'G', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1805 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1815 */ 'D', 'C', 'B', 'A', 0,
  /* 1820 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1827 */ 'L', 'D', 't', 'o', 'c', 'B', 'A', 0,
  /* 1835 */ 'g', 'B', 'C', 'A', 0,
  /* 1840 */ 'B', 'C', 'C', 'A', 0,
  /* 1845 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 0,
  /* 1855 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'F', 'A', 0,
  /* 1865 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 0,
  /* 1875 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 0,
  /* 1884 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 0,
  /* 1894 */ 'E', 'V', 'M', 'W', 'H', 'S', 'S', 'F', 'A', 0,
  /* 1904 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 0,
  /* 1914 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 0,
  /* 1923 */ 'L', 'H', 'A', 0,
  /* 1927 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 1938 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 1951 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 1964 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1980 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1994 */ 'S', 'L', 'B', 'I', 'A', 0,
  /* 2000 */ 'T', 'L', 'B', 'I', 'A', 0,
  /* 2006 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 0,
  /* 2016 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'I', 'A', 0,
  /* 2026 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 0,
  /* 2036 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 0,
  /* 2045 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 0,
  /* 2055 */ 'E', 'V', 'M', 'W', 'H', 'U', 'M', 'I', 'A', 0,
  /* 2065 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 0,
  /* 2075 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 0,
  /* 2085 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 0,
  /* 2094 */ 'B', 'L', 'A', 0,
  /* 2098 */ 'g', 'B', 'C', 'L', 'A', 0,
  /* 2104 */ 'B', 'C', 'C', 'L', 'A', 0,
  /* 2110 */ 'B', 'D', 'Z', 'L', 'A', 0,
  /* 2116 */ 'B', 'D', 'N', 'Z', 'L', 'A', 0,
  /* 2123 */ 'E', 'V', 'M', 'R', 'A', 0,
  /* 2129 */ 'L', 'W', 'A', 0,
  /* 2133 */ 'B', 'D', 'Z', 'A', 0,
  /* 2138 */ 'B', 'D', 'N', 'Z', 'A', 0,
  /* 2144 */ 'V', '_', 'S', 'E', 'T', '0', 'B', 0,
  /* 2152 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 2158 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 2165 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 2172 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 2178 */ 'V', 'R', 'L', 'B', 0,
  /* 2183 */ 'V', 'S', 'L', 'B', 0,
  /* 2188 */ 'V', 'S', 'R', 'B', 0,
  /* 2193 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 2201 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'B', 0,
  /* 2215 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 2222 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 2230 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 2239 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 2247 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 2254 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 2262 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 2271 */ 'E', 'V', 'E', 'X', 'T', 'S', 'B', 0,
  /* 2279 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 2286 */ 'M', 'F', 'T', 'B', 0,
  /* 2291 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 2298 */ 'S', 'T', 'B', 0,
  /* 2302 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 2310 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 2317 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 2324 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 2332 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 2341 */ 'F', 'S', 'U', 'B', 0,
  /* 2346 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 2352 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 2359 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 2368 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 2375 */ 'g', 'B', 'C', 0,
  /* 2379 */ 'B', 'C', 'C', 0,
  /* 2383 */ 'A', 'D', 'D', 'C', 0,
  /* 2388 */ 'X', 'X', 'L', 'A', 'N', 'D', 'C', 0,
  /* 2396 */ 'C', 'R', 'A', 'N', 'D', 'C', 0,
  /* 2403 */ 'E', 'V', 'A', 'N', 'D', 'C', 0,
  /* 2410 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 2416 */ 'S', 'U', 'B', 'I', 'C', 0,
  /* 2422 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 2428 */ 'R', 'L', 'D', 'I', 'C', 0,
  /* 2434 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 2441 */ 'X', 'S', 'R', 'D', 'P', 'I', 'C', 0,
  /* 2449 */ 'X', 'V', 'R', 'D', 'P', 'I', 'C', 0,
  /* 2457 */ 'X', 'V', 'R', 'S', 'P', 'I', 'C', 0,
  /* 2465 */ 'B', 'R', 'I', 'N', 'C', 0,
  /* 2471 */ 'T', 'L', 'B', 'S', 'Y', 'N', 'C', 0,
  /* 2479 */ 'I', 'S', 'Y', 'N', 'C', 0,
  /* 2485 */ 'M', 'S', 'Y', 'N', 'C', 0,
  /* 2491 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 2500 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'F', 'R', 'C', 0,
  /* 2516 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'F', 'R', 'C', 0,
  /* 2529 */ 'C', 'R', 'O', 'R', 'C', 0,
  /* 2535 */ 'E', 'V', 'O', 'R', 'C', 0,
  /* 2541 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 2556 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'R', 'R', 'C', 0,
  /* 2568 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'R', 'C', 0,
  /* 2583 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'R', 'C', 0,
  /* 2595 */ 'S', 'C', 0,
  /* 2598 */ 'T', 'L', 'B', 'S', 'X', '2', 'D', 0,
  /* 2606 */ 'S', 'R', 'A', 'D', 0,
  /* 2611 */ 'F', 'A', 'D', 'D', 0,
  /* 2616 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 2622 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 2629 */ 'E', 'V', 'L', 'D', 'D', 0,
  /* 2635 */ 'E', 'V', 'S', 'T', 'D', 'D', 0,
  /* 2642 */ 'L', 'F', 'D', 0,
  /* 2646 */ 'S', 'T', 'F', 'D', 0,
  /* 2651 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 2657 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 2663 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 2669 */ 'R', 'F', 'I', 'D', 0,
  /* 2674 */ 'F', 'C', 'T', 'I', 'D', 0,
  /* 2680 */ 'T', 'L', 'B', 'L', 'D', 0,
  /* 2686 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 2692 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 2698 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 2704 */ 'S', 'L', 'D', 0,
  /* 2708 */ 'F', 'R', 'I', 'M', 'D', 0,
  /* 2714 */ 'X', 'X', 'L', 'A', 'N', 'D', 0,
  /* 2721 */ 'C', 'R', 'N', 'A', 'N', 'D', 0,
  /* 2728 */ 'E', 'V', 'N', 'A', 'N', 'D', 0,
  /* 2735 */ 'C', 'R', 'A', 'N', 'D', 0,
  /* 2741 */ 'E', 'V', 'A', 'N', 'D', 0,
  /* 2747 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 2760 */ 'F', 'C', 'P', 'S', 'G', 'N', 'D', 0,
  /* 2768 */ 'F', 'R', 'I', 'N', 'D', 0,
  /* 2774 */ 'F', 'R', 'I', 'P', 'D', 0,
  /* 2780 */ 'C', 'M', 'P', 'D', 0,
  /* 2785 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 2802 */ 'M', 'T', 'M', 'S', 'R', 'D', 0,
  /* 2809 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 2815 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 2822 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 0,
  /* 2830 */ 'S', 'T', 'D', 0,
  /* 2834 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 2841 */ 'D', 'I', 'V', 'D', 0,
  /* 2846 */ 'F', 'R', 'I', 'Z', 'D', 0,
  /* 2852 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 2859 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 2872 */ 'A', 'D', 'D', 'E', 0,
  /* 2877 */ 'S', 'L', 'B', 'M', 'F', 'E', 'E', 0,
  /* 2885 */ 'W', 'R', 'T', 'E', 'E', 0,
  /* 2891 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 2897 */ 'E', 'V', 'L', 'W', 'H', 'E', 0,
  /* 2904 */ 'E', 'V', 'S', 'T', 'W', 'H', 'E', 0,
  /* 2912 */ 'S', 'L', 'B', 'I', 'E', 0,
  /* 2918 */ 'T', 'L', 'B', 'I', 'E', 0,
  /* 2924 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 2931 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 2937 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 2944 */ 'T', 'L', 'B', 'R', 'E', 0,
  /* 2950 */ 'F', 'R', 'E', 0,
  /* 2954 */ 'S', 'L', 'B', 'M', 'T', 'E', 0,
  /* 2961 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 0,
  /* 2969 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2979 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2988 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2997 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3012 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3026 */ 'S', 'P', 'I', 'L', 'L', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3039 */ 'T', 'L', 'B', 'W', 'E', 0,
  /* 3045 */ 'E', 'V', 'S', 'T', 'W', 'W', 'E', 0,
  /* 3053 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 3059 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 3066 */ 'D', 'C', 'B', 'F', 0,
  /* 3071 */ 'S', 'U', 'B', 'F', 0,
  /* 3076 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 3089 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 0,
  /* 3098 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'F', 0,
  /* 3107 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 0,
  /* 3116 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 0,
  /* 3124 */ 'M', 'C', 'R', 'F', 0,
  /* 3129 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 3136 */ 'M', 'T', 'O', 'C', 'R', 'F', 0,
  /* 3143 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 3149 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 3155 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 0,
  /* 3164 */ 'E', 'V', 'M', 'W', 'H', 'S', 'S', 'F', 0,
  /* 3173 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 0,
  /* 3182 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 0,
  /* 3190 */ 'E', 'V', 'N', 'E', 'G', 0,
  /* 3196 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 3211 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 3225 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 3239 */ 'V', '_', 'S', 'E', 'T', '0', 'H', 0,
  /* 3247 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 3253 */ 'E', 'V', 'L', 'D', 'H', 0,
  /* 3259 */ 'E', 'V', 'S', 'T', 'D', 'H', 0,
  /* 3266 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 3273 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 3280 */ 'V', 'R', 'L', 'H', 0,
  /* 3285 */ 'V', 'S', 'L', 'H', 0,
  /* 3290 */ 'V', 'S', 'R', 'H', 0,
  /* 3295 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 3303 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'H', 0,
  /* 3317 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 3324 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 3332 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 3341 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 3349 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 3356 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 3364 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 3373 */ 'E', 'V', 'E', 'X', 'T', 'S', 'H', 0,
  /* 3381 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 3388 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 3395 */ 'S', 'T', 'H', 0,
  /* 3399 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 3407 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 3414 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 3421 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 3429 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 3438 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 3447 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 3454 */ 'D', 'C', 'B', 'I', 0,
  /* 3459 */ 'I', 'C', 'B', 'I', 0,
  /* 3464 */ 'S', 'U', 'B', 'I', 0,
  /* 3469 */ 'D', 'C', 'C', 'C', 'I', 0,
  /* 3475 */ 'I', 'C', 'C', 'C', 'I', 0,
  /* 3481 */ 'R', 'F', 'C', 'I', 0,
  /* 3486 */ 'R', 'F', 'M', 'C', 'I', 0,
  /* 3492 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 3498 */ 'A', 'D', 'D', 'I', 0,
  /* 3503 */ 'R', 'F', 'D', 'I', 0,
  /* 3508 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 3515 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 0,
  /* 3524 */ 'E', 'X', 'T', 'L', 'D', 'I', 0,
  /* 3531 */ 'X', 'X', 'P', 'E', 'R', 'M', 'D', 'I', 0,
  /* 3540 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 3546 */ 'C', 'L', 'R', 'R', 'D', 'I', 0,
  /* 3553 */ 'I', 'N', 'S', 'R', 'D', 'I', 0,
  /* 3560 */ 'R', 'O', 'T', 'R', 'D', 'I', 0,
  /* 3567 */ 'E', 'X', 'T', 'R', 'D', 'I', 0,
  /* 3574 */ 'T', 'D', 'I', 0,
  /* 3578 */ 'W', 'R', 'T', 'E', 'E', 'I', 0,
  /* 3585 */ 'R', 'F', 'I', 0,
  /* 3589 */ 'E', 'V', 'S', 'P', 'L', 'A', 'T', 'F', 'I', 0,
  /* 3599 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'H', 'I', 0,
  /* 3609 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'L', 'O', 'H', 'I', 0,
  /* 3621 */ 'P', 'H', 'I', 0,
  /* 3625 */ 'T', 'L', 'B', 'L', 'I', 0,
  /* 3631 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 3637 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 3644 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 3651 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 0,
  /* 3660 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'I', 0,
  /* 3669 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 0,
  /* 3678 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 0,
  /* 3686 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 0,
  /* 3695 */ 'E', 'V', 'M', 'W', 'H', 'U', 'M', 'I', 0,
  /* 3704 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 0,
  /* 3713 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 0,
  /* 3722 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 0,
  /* 3730 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 3737 */ 'X', 'S', 'R', 'D', 'P', 'I', 0,
  /* 3744 */ 'X', 'V', 'R', 'D', 'P', 'I', 0,
  /* 3751 */ 'X', 'V', 'R', 'S', 'P', 'I', 0,
  /* 3758 */ 'X', 'O', 'R', 'I', 0,
  /* 3763 */ 'E', 'V', 'S', 'P', 'L', 'A', 'T', 'I', 0,
  /* 3772 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 3781 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 3787 */ 'X', 'X', 'S', 'L', 'D', 'W', 'I', 0,
  /* 3795 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 3802 */ 'E', 'V', 'R', 'L', 'W', 'I', 0,
  /* 3809 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 0,
  /* 3818 */ 'I', 'N', 'S', 'L', 'W', 'I', 0,
  /* 3825 */ 'E', 'V', 'S', 'L', 'W', 'I', 0,
  /* 3832 */ 'E', 'X', 'T', 'L', 'W', 'I', 0,
  /* 3839 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 3845 */ 'C', 'L', 'R', 'R', 'W', 'I', 0,
  /* 3852 */ 'I', 'N', 'S', 'R', 'W', 'I', 0,
  /* 3859 */ 'R', 'O', 'T', 'R', 'W', 'I', 0,
  /* 3866 */ 'E', 'X', 'T', 'R', 'W', 'I', 0,
  /* 3873 */ 'L', 'S', 'W', 'I', 0,
  /* 3878 */ 'S', 'T', 'S', 'W', 'I', 0,
  /* 3884 */ 'T', 'W', 'I', 0,
  /* 3888 */ 'B', 'L', 0,
  /* 3891 */ 'g', 'B', 'C', 'L', 0,
  /* 3896 */ 'B', 'C', 'C', 'L', 0,
  /* 3901 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 3907 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 3914 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 3923 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 3932 */ 'T', 'L', 'B', 'I', 'E', 'L', 0,
  /* 3939 */ 'I', 'S', 'E', 'L', 0,
  /* 3944 */ 'V', 'S', 'E', 'L', 0,
  /* 3949 */ 'X', 'X', 'S', 'E', 'L', 0,
  /* 3955 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 3962 */ 'K', 'I', 'L', 'L', 0,
  /* 3967 */ 'B', 'L', 'R', 'L', 0,
  /* 3972 */ 'g', 'B', 'C', 'L', 'R', 'L', 0,
  /* 3979 */ 'B', 'C', 'C', 'L', 'R', 'L', 0,
  /* 3986 */ 'B', 'D', 'Z', 'L', 'R', 'L', 0,
  /* 3993 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 0,
  /* 4001 */ 'B', 'C', 'T', 'R', 'L', 0,
  /* 4007 */ 'g', 'B', 'C', 'C', 'T', 'R', 'L', 0,
  /* 4015 */ 'B', 'C', 'C', 'C', 'T', 'R', 'L', 0,
  /* 4023 */ 'L', 'V', 'S', 'L', 0,
  /* 4028 */ 'F', 'M', 'U', 'L', 0,
  /* 4033 */ 'L', 'V', 'X', 'L', 0,
  /* 4038 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 4044 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 4050 */ 'B', 'D', 'Z', 'L', 0,
  /* 4055 */ 'B', 'D', 'N', 'Z', 'L', 0,
  /* 4061 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 4068 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 4077 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 4088 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 4099 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 4111 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 4123 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 4132 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 4140 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 4148 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 4157 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 4166 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 4174 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 4184 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 4192 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 4201 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 4207 */ 'X', 'S', 'R', 'D', 'P', 'I', 'M', 0,
  /* 4215 */ 'X', 'V', 'R', 'D', 'P', 'I', 'M', 0,
  /* 4223 */ 'X', 'V', 'R', 'S', 'P', 'I', 'M', 0,
  /* 4231 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 4238 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 4244 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 4250 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 4260 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 4268 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 4276 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 4284 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 4292 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'F', 'A', 'N', 0,
  /* 4304 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'F', 'A', 'N', 0,
  /* 4316 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 'N', 0,
  /* 4326 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 'N', 0,
  /* 4336 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'I', 'A', 'N', 0,
  /* 4348 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'I', 'A', 'N', 0,
  /* 4360 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 'N', 0,
  /* 4370 */ 'E', 'V', 'M', 'H', 'E', 'G', 'U', 'M', 'I', 'A', 'N', 0,
  /* 4382 */ 'E', 'V', 'M', 'H', 'O', 'G', 'U', 'M', 'I', 'A', 'N', 0,
  /* 4394 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 'N', 0,
  /* 4404 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 4410 */ 'M', 'F', 'S', 'R', 'I', 'N', 0,
  /* 4417 */ 'M', 'T', 'S', 'R', 'I', 'N', 0,
  /* 4424 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 4440 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 4457 */ 'E', 'V', 'S', 'T', 'W', 'H', 'O', 0,
  /* 4465 */ 'E', 'I', 'E', 'I', 'O', 0,
  /* 4471 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'L', 'O', 0,
  /* 4481 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'H', 'I', 'L', 'O', 0,
  /* 4493 */ 'V', 'S', 'L', 'O', 0,
  /* 4498 */ 'G', 'e', 't', 'G', 'B', 'R', 'O', 0,
  /* 4506 */ 'V', 'S', 'R', 'O', 0,
  /* 4511 */ 'E', 'V', 'S', 'T', 'W', 'W', 'O', 0,
  /* 4519 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 4528 */ 'T', 'R', 'A', 'P', 0,
  /* 4533 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 4544 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 4555 */ 'X', 'S', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 4565 */ 'X', 'V', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 4575 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 4586 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 4597 */ 'X', 'S', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 4607 */ 'X', 'V', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 4617 */ 'X', 'S', 'S', 'U', 'B', 'D', 'P', 0,
  /* 4625 */ 'X', 'V', 'S', 'U', 'B', 'D', 'P', 0,
  /* 4633 */ 'X', 'S', 'A', 'D', 'D', 'D', 'P', 0,
  /* 4641 */ 'X', 'V', 'A', 'D', 'D', 'D', 'P', 0,
  /* 4649 */ 'X', 'S', 'C', 'V', 'S', 'X', 'D', 'D', 'P', 0,
  /* 4659 */ 'X', 'V', 'C', 'V', 'S', 'X', 'D', 'D', 'P', 0,
  /* 4669 */ 'X', 'S', 'C', 'V', 'U', 'X', 'D', 'D', 'P', 0,
  /* 4679 */ 'X', 'V', 'C', 'V', 'U', 'X', 'D', 'D', 'P', 0,
  /* 4689 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'D', 'P', 0,
  /* 4699 */ 'X', 'S', 'R', 'E', 'D', 'P', 0,
  /* 4706 */ 'X', 'V', 'R', 'E', 'D', 'P', 0,
  /* 4713 */ 'X', 'S', 'R', 'S', 'Q', 'R', 'T', 'E', 'D', 'P', 0,
  /* 4724 */ 'X', 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'D', 'P', 0,
  /* 4735 */ 'X', 'S', 'N', 'E', 'G', 'D', 'P', 0,
  /* 4743 */ 'X', 'V', 'N', 'E', 'G', 'D', 'P', 0,
  /* 4751 */ 'X', 'S', 'M', 'U', 'L', 'D', 'P', 0,
  /* 4759 */ 'X', 'V', 'M', 'U', 'L', 'D', 'P', 0,
  /* 4767 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 4778 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 4789 */ 'X', 'S', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 4799 */ 'X', 'V', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 4809 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 4820 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 4831 */ 'X', 'S', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 4841 */ 'X', 'V', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 4851 */ 'X', 'S', 'C', 'P', 'S', 'G', 'N', 'D', 'P', 0,
  /* 4861 */ 'X', 'V', 'C', 'P', 'S', 'G', 'N', 'D', 'P', 0,
  /* 4871 */ 'X', 'S', 'M', 'I', 'N', 'D', 'P', 0,
  /* 4879 */ 'X', 'V', 'M', 'I', 'N', 'D', 'P', 0,
  /* 4887 */ 'X', 'S', 'C', 'M', 'P', 'O', 'D', 'P', 0,
  /* 4896 */ 'X', 'S', 'C', 'V', 'S', 'P', 'D', 'P', 0,
  /* 4905 */ 'X', 'V', 'C', 'V', 'S', 'P', 'D', 'P', 0,
  /* 4914 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'D', 'P', 0,
  /* 4924 */ 'X', 'S', 'N', 'A', 'B', 'S', 'D', 'P', 0,
  /* 4933 */ 'X', 'V', 'N', 'A', 'B', 'S', 'D', 'P', 0,
  /* 4942 */ 'X', 'S', 'A', 'B', 'S', 'D', 'P', 0,
  /* 4950 */ 'X', 'V', 'A', 'B', 'S', 'D', 'P', 0,
  /* 4958 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'D', 'P', 0,
  /* 4968 */ 'X', 'S', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 4977 */ 'X', 'S', 'T', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 4987 */ 'X', 'V', 'T', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 4997 */ 'X', 'V', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 5006 */ 'X', 'S', 'C', 'M', 'P', 'U', 'D', 'P', 0,
  /* 5015 */ 'X', 'S', 'D', 'I', 'V', 'D', 'P', 0,
  /* 5023 */ 'X', 'S', 'T', 'D', 'I', 'V', 'D', 'P', 0,
  /* 5032 */ 'X', 'V', 'T', 'D', 'I', 'V', 'D', 'P', 0,
  /* 5041 */ 'X', 'V', 'D', 'I', 'V', 'D', 'P', 0,
  /* 5049 */ 'X', 'V', 'C', 'V', 'S', 'X', 'W', 'D', 'P', 0,
  /* 5059 */ 'X', 'V', 'C', 'V', 'U', 'X', 'W', 'D', 'P', 0,
  /* 5069 */ 'X', 'S', 'M', 'A', 'X', 'D', 'P', 0,
  /* 5077 */ 'X', 'V', 'M', 'A', 'X', 'D', 'P', 0,
  /* 5085 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 5093 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 5102 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 5109 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 5117 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 5124 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 5132 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 5141 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 5147 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 5156 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 5166 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 5173 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 5182 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 5191 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 5198 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 5204 */ 'X', 'S', 'R', 'D', 'P', 'I', 'P', 0,
  /* 5212 */ 'X', 'V', 'R', 'D', 'P', 'I', 'P', 0,
  /* 5220 */ 'X', 'V', 'R', 'S', 'P', 'I', 'P', 0,
  /* 5228 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', 0,
  /* 5237 */ 'B', 'L', '8', '_', 'N', 'O', 'P', 0,
  /* 5245 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 5256 */ 'X', 'V', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 5266 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 5277 */ 'X', 'V', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 5287 */ 'X', 'V', 'S', 'U', 'B', 'S', 'P', 0,
  /* 5295 */ 'X', 'V', 'A', 'D', 'D', 'S', 'P', 0,
  /* 5303 */ 'X', 'V', 'C', 'V', 'S', 'X', 'D', 'S', 'P', 0,
  /* 5313 */ 'X', 'V', 'C', 'V', 'U', 'X', 'D', 'S', 'P', 0,
  /* 5323 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'S', 'P', 0,
  /* 5333 */ 'X', 'V', 'R', 'E', 'S', 'P', 0,
  /* 5340 */ 'X', 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'P', 0,
  /* 5351 */ 'X', 'V', 'N', 'E', 'G', 'S', 'P', 0,
  /* 5359 */ 'X', 'V', 'M', 'U', 'L', 'S', 'P', 0,
  /* 5367 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 5378 */ 'X', 'V', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 5388 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 5399 */ 'X', 'V', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 5409 */ 'X', 'V', 'C', 'P', 'S', 'G', 'N', 'S', 'P', 0,
  /* 5419 */ 'X', 'V', 'M', 'I', 'N', 'S', 'P', 0,
  /* 5427 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'P', 0,
  /* 5436 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'P', 0,
  /* 5445 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'S', 'P', 0,
  /* 5455 */ 'F', 'R', 'S', 'P', 0,
  /* 5460 */ 'X', 'V', 'N', 'A', 'B', 'S', 'S', 'P', 0,
  /* 5469 */ 'X', 'V', 'A', 'B', 'S', 'S', 'P', 0,
  /* 5477 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'P', 0,
  /* 5487 */ 'X', 'V', 'T', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 5497 */ 'X', 'V', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 5506 */ 'X', 'V', 'T', 'D', 'I', 'V', 'S', 'P', 0,
  /* 5515 */ 'X', 'V', 'D', 'I', 'V', 'S', 'P', 0,
  /* 5523 */ 'X', 'V', 'C', 'V', 'S', 'X', 'W', 'S', 'P', 0,
  /* 5533 */ 'X', 'V', 'C', 'V', 'U', 'X', 'W', 'S', 'P', 0,
  /* 5543 */ 'X', 'V', 'M', 'A', 'X', 'S', 'P', 0,
  /* 5551 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 5566 */ 'E', 'V', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 5574 */ 'M', 'B', 'A', 'R', 0,
  /* 5579 */ 'U', 'p', 'd', 'a', 't', 'e', 'G', 'B', 'R', 0,
  /* 5589 */ 'M', 'F', 'D', 'C', 'R', 0,
  /* 5595 */ 'R', 'L', 'D', 'C', 'R', 0,
  /* 5601 */ 'M', 'T', 'D', 'C', 'R', 0,
  /* 5607 */ 'M', 'F', 'C', 'R', 0,
  /* 5612 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 5619 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 5626 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 5633 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 5644 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 5653 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 5666 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 5677 */ 'B', 'L', 'R', 0,
  /* 5681 */ 'g', 'B', 'C', 'L', 'R', 0,
  /* 5687 */ 'B', 'C', 'C', 'L', 'R', 0,
  /* 5693 */ 'M', 'F', 'L', 'R', 0,
  /* 5698 */ 'M', 'T', 'L', 'R', 0,
  /* 5703 */ 'B', 'D', 'Z', 'L', 'R', 0,
  /* 5709 */ 'B', 'D', 'N', 'Z', 'L', 'R', 0,
  /* 5716 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 5727 */ 'F', 'M', 'R', 0,
  /* 5731 */ 'X', 'X', 'L', 'O', 'R', 0,
  /* 5737 */ 'X', 'X', 'L', 'N', 'O', 'R', 0,
  /* 5744 */ 'C', 'R', 'N', 'O', 'R', 0,
  /* 5750 */ 'E', 'V', 'N', 'O', 'R', 0,
  /* 5756 */ 'C', 'R', 'O', 'R', 0,
  /* 5761 */ 'E', 'V', 'O', 'R', 0,
  /* 5766 */ 'X', 'X', 'L', 'X', 'O', 'R', 0,
  /* 5773 */ 'C', 'R', 'X', 'O', 'R', 0,
  /* 5779 */ 'E', 'V', 'X', 'O', 'R', 0,
  /* 5785 */ 'M', 'F', 'S', 'P', 'R', 0,
  /* 5791 */ 'M', 'T', 'S', 'P', 'R', 0,
  /* 5797 */ 'M', 'F', 'S', 'R', 0,
  /* 5802 */ 'M', 'F', 'M', 'S', 'R', 0,
  /* 5808 */ 'M', 'T', 'M', 'S', 'R', 0,
  /* 5814 */ 'M', 'T', 'S', 'R', 0,
  /* 5819 */ 'L', 'V', 'S', 'R', 0,
  /* 5824 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 5833 */ 'g', 'B', 'C', 'C', 'T', 'R', 0,
  /* 5840 */ 'B', 'C', 'C', 'C', 'T', 'R', 0,
  /* 5847 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 5853 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 5859 */ 'E', 'V', 'A', 'B', 'S', 0,
  /* 5865 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 5874 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 5882 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 5890 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 5899 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 5907 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 5915 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 5921 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 5928 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 5936 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 5942 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 5949 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 5957 */ 'F', 'C', 'F', 'I', 'D', 'S', 0,
  /* 5964 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'X', 'D', 'S', 0,
  /* 5975 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'X', 'D', 'S', 0,
  /* 5986 */ 'X', 'V', 'C', 'V', 'S', 'P', 'S', 'X', 'D', 'S', 0,
  /* 5997 */ 'X', 'S', 'C', 'V', 'D', 'P', 'U', 'X', 'D', 'S', 0,
  /* 6008 */ 'X', 'V', 'C', 'V', 'D', 'P', 'U', 'X', 'D', 'S', 0,
  /* 6019 */ 'X', 'V', 'C', 'V', 'S', 'P', 'U', 'X', 'D', 'S', 0,
  /* 6030 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 6043 */ 'F', 'R', 'E', 'S', 0,
  /* 6048 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 0,
  /* 6057 */ 'M', 'F', 'F', 'S', 0,
  /* 6062 */ 'L', 'F', 'S', 0,
  /* 6066 */ 'S', 'T', 'F', 'S', 0,
  /* 6071 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 6077 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 6086 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 6094 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 6104 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 6115 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 6123 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 6132 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 6140 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 6148 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 6157 */ 'S', 'U', 'B', 'I', 'S', 0,
  /* 6163 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 6169 */ 'L', 'I', 'S', 0,
  /* 6173 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 6179 */ 'E', 'V', 'S', 'R', 'W', 'I', 'S', 0,
  /* 6187 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 6193 */ 'A', 'D', 'D', '4', 'T', 'L', 'S', 0,
  /* 6201 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 6209 */ 'B', 'L', '8', '_', 'T', 'L', 'S', 0,
  /* 6217 */ 'B', 'L', '_', 'T', 'L', 'S', 0,
  /* 6224 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 0,
  /* 6236 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 6242 */ 'F', 'R', 'I', 'M', 'S', 0,
  /* 6248 */ 'F', 'C', 'P', 'S', 'G', 'N', 'S', 0,
  /* 6256 */ 'F', 'R', 'I', 'N', 'S', 0,
  /* 6262 */ 'E', 'V', 'L', 'W', 'H', 'O', 'S', 0,
  /* 6270 */ 'F', 'R', 'I', 'P', 'S', 0,
  /* 6276 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 6293 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 6299 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 6306 */ 'D', 'S', 'S', 0,
  /* 6310 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 6318 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 6326 */ 'E', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 0,
  /* 6335 */ 'E', 'V', 'C', 'M', 'P', 'L', 'T', 'S', 0,
  /* 6344 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 6351 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 0,
  /* 6359 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 6367 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 6375 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 6382 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 6390 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 6398 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 6404 */ 'E', 'V', 'S', 'R', 'W', 'S', 0,
  /* 6411 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 6420 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 6428 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 6436 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 6444 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 6452 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 6460 */ 'E', 'V', 'D', 'I', 'V', 'W', 'S', 0,
  /* 6468 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'X', 'W', 'S', 0,
  /* 6479 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'X', 'W', 'S', 0,
  /* 6490 */ 'X', 'V', 'C', 'V', 'S', 'P', 'S', 'X', 'W', 'S', 0,
  /* 6501 */ 'X', 'S', 'C', 'V', 'D', 'P', 'U', 'X', 'W', 'S', 0,
  /* 6512 */ 'X', 'V', 'C', 'V', 'D', 'P', 'U', 'X', 'W', 'S', 0,
  /* 6523 */ 'X', 'V', 'C', 'V', 'S', 'P', 'U', 'X', 'W', 'S', 0,
  /* 6534 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 6541 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 6548 */ 'F', 'R', 'I', 'Z', 'S', 0,
  /* 6554 */ 'E', 'V', 'L', 'H', 'H', 'E', 'S', 'P', 'L', 'A', 'T', 0,
  /* 6566 */ 'E', 'V', 'L', 'W', 'H', 'S', 'P', 'L', 'A', 'T', 0,
  /* 6577 */ 'E', 'V', 'L', 'H', 'H', 'O', 'S', 'S', 'P', 'L', 'A', 'T', 0,
  /* 6590 */ 'E', 'V', 'L', 'H', 'H', 'O', 'U', 'S', 'P', 'L', 'A', 'T', 0,
  /* 6603 */ 'E', 'V', 'L', 'W', 'W', 'S', 'P', 'L', 'A', 'T', 0,
  /* 6614 */ 'D', 'C', 'B', 'T', 0,
  /* 6619 */ 'I', 'C', 'B', 'T', 0,
  /* 6624 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 6631 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 6640 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 6648 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 6654 */ 'W', 'A', 'I', 'T', 0,
  /* 6659 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 'B', 'I', 'T', 0,
  /* 6673 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 'B', 'I', 'T', 0,
  /* 6685 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'E', 'Q', '_', 'B', 'I', 'T', 0,
  /* 6700 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'G', 'T', '_', 'B', 'I', 'T', 0,
  /* 6715 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 6726 */ 'P', 'P', 'C', '3', '2', 'G', 'O', 'T', 0,
  /* 6735 */ 'P', 'P', 'C', '3', '2', 'P', 'I', 'C', 'G', 'O', 'T', 0,
  /* 6747 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 6756 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 6771 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 6777 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 6783 */ 'D', 'S', 'T', 0,
  /* 6787 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 6794 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 6800 */ 'D', 'S', 'T', 'T', 0,
  /* 6805 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 6812 */ 'L', 'H', 'A', 'U', 0,
  /* 6817 */ 'S', 'T', 'B', 'U', 0,
  /* 6822 */ 'L', 'F', 'D', 'U', 0,
  /* 6827 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 6833 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 6840 */ 'F', 'C', 'F', 'I', 'D', 'U', 0,
  /* 6847 */ 'L', 'D', 'U', 0,
  /* 6851 */ 'S', 'T', 'D', 'U', 0,
  /* 6856 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 6862 */ 'S', 'T', 'H', 'U', 0,
  /* 6867 */ 'E', 'V', 'S', 'R', 'W', 'I', 'U', 0,
  /* 6875 */ 'E', 'V', 'L', 'W', 'H', 'O', 'U', 0,
  /* 6883 */ 'L', 'F', 'S', 'U', 0,
  /* 6888 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 6894 */ 'E', 'V', 'C', 'M', 'P', 'G', 'T', 'U', 0,
  /* 6903 */ 'E', 'V', 'C', 'M', 'P', 'L', 'T', 'U', 0,
  /* 6912 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 6919 */ 'E', 'V', 'S', 'R', 'W', 'U', 0,
  /* 6926 */ 'S', 'T', 'W', 'U', 0,
  /* 6931 */ 'E', 'V', 'D', 'I', 'V', 'W', 'U', 0,
  /* 6939 */ 'L', 'B', 'Z', 'U', 0,
  /* 6944 */ 'L', 'H', 'Z', 'U', 0,
  /* 6949 */ 'L', 'W', 'Z', 'U', 0,
  /* 6954 */ 'F', 'D', 'I', 'V', 0,
  /* 6959 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 6965 */ 'E', 'V', 'E', 'Q', 'V', 0,
  /* 6971 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 'A', 'W', 0,
  /* 6983 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 'A', 'W', 0,
  /* 6995 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 'A', 'W', 0,
  /* 7007 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 'A', 'W', 0,
  /* 7019 */ 'E', 'V', 'A', 'D', 'D', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7031 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7043 */ 'E', 'V', 'S', 'U', 'B', 'F', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7056 */ 'E', 'V', 'M', 'W', 'L', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7068 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7080 */ 'E', 'V', 'A', 'D', 'D', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7092 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7104 */ 'E', 'V', 'S', 'U', 'B', 'F', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7117 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7129 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 7141 */ 'E', 'V', 'A', 'D', 'D', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7153 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7165 */ 'E', 'V', 'S', 'U', 'B', 'F', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7178 */ 'E', 'V', 'M', 'W', 'L', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7190 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7202 */ 'E', 'V', 'A', 'D', 'D', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7214 */ 'E', 'V', 'M', 'H', 'E', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7226 */ 'E', 'V', 'S', 'U', 'B', 'F', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7239 */ 'E', 'V', 'M', 'W', 'L', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7251 */ 'E', 'V', 'M', 'H', 'O', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 7263 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 7269 */ 'E', 'V', 'A', 'D', 'D', 'W', 0,
  /* 7276 */ 'E', 'V', 'L', 'D', 'W', 0,
  /* 7282 */ 'E', 'V', 'R', 'N', 'D', 'W', 0,
  /* 7289 */ 'E', 'V', 'S', 'T', 'D', 'W', 0,
  /* 7296 */ 'E', 'V', 'S', 'U', 'B', 'F', 'W', 0,
  /* 7304 */ 'E', 'V', 'S', 'U', 'B', 'I', 'F', 'W', 0,
  /* 7313 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 7320 */ 'X', 'X', 'M', 'R', 'G', 'H', 'W', 0,
  /* 7328 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 7334 */ 'E', 'V', 'A', 'D', 'D', 'I', 'W', 0,
  /* 7342 */ 'F', 'C', 'T', 'I', 'W', 0,
  /* 7348 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 7355 */ 'X', 'X', 'M', 'R', 'G', 'L', 'W', 0,
  /* 7363 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 7369 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 7375 */ 'E', 'V', 'R', 'L', 'W', 0,
  /* 7381 */ 'E', 'V', 'S', 'L', 'W', 0,
  /* 7387 */ 'L', 'M', 'W', 0,
  /* 7391 */ 'S', 'T', 'M', 'W', 0,
  /* 7396 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 'N', 'W', 0,
  /* 7408 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 'N', 'W', 0,
  /* 7420 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 'N', 'W', 0,
  /* 7432 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 'N', 'W', 0,
  /* 7444 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 7456 */ 'E', 'V', 'M', 'W', 'L', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 7468 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 7480 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 7492 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 7504 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 7516 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 7528 */ 'E', 'V', 'M', 'W', 'L', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 7540 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 7552 */ 'E', 'V', 'M', 'H', 'E', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 7564 */ 'E', 'V', 'M', 'W', 'L', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 7576 */ 'E', 'V', 'M', 'H', 'O', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 7588 */ 'C', 'M', 'P', 'W', 0,
  /* 7593 */ 'V', 'S', 'R', 'W', 0,
  /* 7598 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 7605 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 7614 */ 'E', 'V', 'C', 'N', 'T', 'L', 'S', 'W', 0,
  /* 7623 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 7630 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 7639 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 7645 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 7652 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 7659 */ 'X', 'X', 'S', 'P', 'L', 'T', 'W', 0,
  /* 7667 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 0,
  /* 7675 */ 'S', 'T', 'W', 0,
  /* 7679 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 7687 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 7695 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 7702 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 7709 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 7718 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 7727 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 7734 */ 'D', 'I', 'V', 'W', 0,
  /* 7739 */ 'E', 'V', 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 7748 */ 'L', 'X', 'V', 'D', '2', 'X', 0,
  /* 7755 */ 'S', 'T', 'X', 'V', 'D', '2', 'X', 0,
  /* 7763 */ 'L', 'X', 'V', 'W', '4', 'X', 0,
  /* 7770 */ 'S', 'T', 'X', 'V', 'W', '4', 'X', 0,
  /* 7778 */ 'L', 'H', 'A', 'X', 0,
  /* 7783 */ 'T', 'L', 'B', 'I', 'V', 'A', 'X', 0,
  /* 7791 */ 'L', 'F', 'I', 'W', 'A', 'X', 0,
  /* 7798 */ 'L', 'W', 'A', 'X', 0,
  /* 7803 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 7809 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 7816 */ 'S', 'T', 'B', 'X', 0,
  /* 7821 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 7827 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 7833 */ 'E', 'V', 'L', 'D', 'D', 'X', 0,
  /* 7840 */ 'E', 'V', 'S', 'T', 'D', 'D', 'X', 0,
  /* 7848 */ 'L', 'F', 'D', 'X', 0,
  /* 7853 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 7859 */ 'L', 'D', 'X', 0,
  /* 7863 */ 'L', 'X', 'S', 'D', 'X', 0,
  /* 7869 */ 'S', 'T', 'X', 'S', 'D', 'X', 0,
  /* 7876 */ 'S', 'T', 'D', 'X', 0,
  /* 7881 */ 'E', 'V', 'L', 'W', 'H', 'E', 'X', 0,
  /* 7889 */ 'E', 'V', 'S', 'T', 'W', 'H', 'E', 'X', 0,
  /* 7898 */ 'E', 'V', 'S', 'T', 'W', 'W', 'E', 'X', 0,
  /* 7907 */ 'E', 'V', 'L', 'D', 'H', 'X', 0,
  /* 7914 */ 'E', 'V', 'S', 'T', 'D', 'H', 'X', 0,
  /* 7922 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 7928 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 7935 */ 'S', 'T', 'H', 'X', 0,
  /* 7940 */ 'E', 'V', 'S', 'T', 'W', 'H', 'O', 'X', 0,
  /* 7949 */ 'E', 'V', 'S', 'T', 'W', 'W', 'O', 'X', 0,
  /* 7958 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 7966 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 7972 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 7980 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 7986 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 7992 */ 'L', 'D', 'B', 'R', 'X', 0,
  /* 7998 */ 'S', 'T', 'D', 'B', 'R', 'X', 0,
  /* 8005 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 8011 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 8018 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 8024 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 8031 */ 'T', 'L', 'B', 'S', 'X', 0,
  /* 8037 */ 'L', 'X', 'V', 'D', 'S', 'X', 0,
  /* 8044 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 8050 */ 'L', 'F', 'S', 'X', 0,
  /* 8055 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 8061 */ 'E', 'V', 'L', 'W', 'H', 'O', 'S', 'X', 0,
  /* 8070 */ 'E', 'V', 'L', 'H', 'H', 'E', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 8083 */ 'E', 'V', 'L', 'W', 'H', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 8095 */ 'E', 'V', 'L', 'H', 'H', 'O', 'S', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 8109 */ 'E', 'V', 'L', 'H', 'H', 'O', 'U', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 8123 */ 'E', 'V', 'L', 'W', 'W', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 8135 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 8141 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 8147 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 8153 */ 'L', 'F', 'D', 'U', 'X', 0,
  /* 8159 */ 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 8166 */ 'L', 'D', 'U', 'X', 0,
  /* 8171 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 8177 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 8183 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 8189 */ 'E', 'V', 'L', 'W', 'H', 'O', 'U', 'X', 0,
  /* 8198 */ 'L', 'F', 'S', 'U', 'X', 0,
  /* 8204 */ 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 8211 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 8217 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 8223 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 8229 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 8235 */ 'L', 'V', 'X', 0,
  /* 8239 */ 'S', 'T', 'V', 'X', 0,
  /* 8244 */ 'E', 'V', 'L', 'D', 'W', 'X', 0,
  /* 8251 */ 'E', 'V', 'S', 'T', 'D', 'W', 'X', 0,
  /* 8259 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 8265 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 8272 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 8279 */ 'S', 'T', 'W', 'X', 0,
  /* 8284 */ 'L', 'B', 'Z', 'X', 0,
  /* 8289 */ 'L', 'H', 'Z', 'X', 0,
  /* 8294 */ 'L', 'F', 'I', 'W', 'Z', 'X', 0,
  /* 8301 */ 'L', 'W', 'Z', 'X', 0,
  /* 8306 */ 'C', 'O', 'P', 'Y', 0,
  /* 8311 */ 'D', 'C', 'B', 'Z', 0,
  /* 8316 */ 'L', 'B', 'Z', 0,
  /* 8320 */ 'B', 'D', 'Z', 0,
  /* 8324 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 8331 */ 'L', 'H', 'Z', 0,
  /* 8335 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 8341 */ 'X', 'S', 'R', 'D', 'P', 'I', 'Z', 0,
  /* 8349 */ 'X', 'V', 'R', 'D', 'P', 'I', 'Z', 0,
  /* 8357 */ 'X', 'V', 'R', 'S', 'P', 'I', 'Z', 0,
  /* 8365 */ 'B', 'D', 'N', 'Z', 0,
  /* 8370 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 0,
  /* 8378 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 0,
  /* 8386 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 8393 */ 'L', 'W', 'Z', 0,
  /* 8397 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', '_', 0,
  /* 8406 */ 'B', 'L', '8', '_', 'T', 'L', 'S', '_', 0,
  /* 8415 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 8421 */ 'L', 'W', 'Z', 't', 'o', 'c', 0,
  /* 8428 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 8439 */ 'X', 'X', 'L', 'O', 'R', 'f', 0,
  /* 8446 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 8457 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 8468 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 8479 */ 'B', 'D', 'Z', 'L', 'A', 'm', 0,
  /* 8486 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'm', 0,
  /* 8494 */ 'B', 'D', 'Z', 'A', 'm', 0,
  /* 8500 */ 'B', 'D', 'N', 'Z', 'A', 'm', 0,
  /* 8507 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 8515 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 8524 */ 'B', 'D', 'Z', 'L', 'm', 0,
  /* 8530 */ 'B', 'D', 'N', 'Z', 'L', 'm', 0,
  /* 8537 */ 'B', 'D', 'Z', 'L', 'R', 'm', 0,
  /* 8544 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'm', 0,
  /* 8552 */ 'B', 'D', 'Z', 'm', 0,
  /* 8557 */ 'B', 'D', 'N', 'Z', 'm', 0,
  /* 8563 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 'n', 0,
  /* 8572 */ 'B', 'C', 'C', 'T', 'R', '8', 'n', 0,
  /* 8580 */ 'B', 'C', 'n', 0,
  /* 8584 */ 'B', 'C', 'L', 'n', 0,
  /* 8589 */ 'B', 'C', 'L', 'R', 'L', 'n', 0,
  /* 8596 */ 'B', 'C', 'C', 'T', 'R', 'L', 'n', 0,
  /* 8604 */ 'B', 'C', 'L', 'R', 'n', 0,
  /* 8610 */ 'B', 'C', 'C', 'T', 'R', 'n', 0,
  /* 8617 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 'o', 0,
  /* 8630 */ 'A', 'D', 'D', '4', 'o', 0,
  /* 8636 */ 'E', 'X', 'T', 'S', 'B', '8', 'o', 0,
  /* 8644 */ 'A', 'D', 'D', 'C', '8', 'o', 0,
  /* 8651 */ 'A', 'N', 'D', 'C', '8', 'o', 0,
  /* 8658 */ 'S', 'U', 'B', 'F', 'C', '8', 'o', 0,
  /* 8666 */ 'O', 'R', 'C', '8', 'o', 0,
  /* 8672 */ 'A', 'D', 'D', '8', 'o', 0,
  /* 8678 */ 'N', 'A', 'N', 'D', '8', 'o', 0,
  /* 8685 */ 'A', 'D', 'D', 'E', '8', 'o', 0,
  /* 8692 */ 'S', 'U', 'B', 'F', 'E', '8', 'o', 0,
  /* 8700 */ 'A', 'D', 'D', 'M', 'E', '8', 'o', 0,
  /* 8708 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 'o', 0,
  /* 8717 */ 'A', 'D', 'D', 'Z', 'E', '8', 'o', 0,
  /* 8725 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 'o', 0,
  /* 8734 */ 'S', 'U', 'B', 'F', '8', 'o', 0,
  /* 8741 */ 'N', 'E', 'G', '8', 'o', 0,
  /* 8747 */ 'E', 'X', 'T', 'S', 'H', '8', 'o', 0,
  /* 8755 */ 'R', 'L', 'W', 'I', 'M', 'I', '8', 'o', 0,
  /* 8764 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 'o', 0,
  /* 8773 */ 'N', 'O', 'R', '8', 'o', 0,
  /* 8779 */ 'X', 'O', 'R', '8', 'o', 0,
  /* 8785 */ 'E', 'Q', 'V', '8', 'o', 0,
  /* 8791 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 8801 */ 'E', 'X', 'T', 'S', 'B', 'o', 0,
  /* 8808 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 8818 */ 'F', 'S', 'U', 'B', 'o', 0,
  /* 8824 */ 'F', 'M', 'S', 'U', 'B', 'o', 0,
  /* 8831 */ 'F', 'N', 'M', 'S', 'U', 'B', 'o', 0,
  /* 8839 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 8849 */ 'A', 'D', 'D', 'C', 'o', 0,
  /* 8855 */ 'A', 'N', 'D', 'C', 'o', 0,
  /* 8861 */ 'S', 'U', 'B', 'F', 'C', 'o', 0,
  /* 8868 */ 'S', 'U', 'B', 'I', 'C', 'o', 0,
  /* 8875 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 8882 */ 'R', 'L', 'D', 'I', 'C', 'o', 0,
  /* 8889 */ 'O', 'R', 'C', 'o', 0,
  /* 8894 */ 'S', 'R', 'A', 'D', 'o', 0,
  /* 8900 */ 'F', 'A', 'D', 'D', 'o', 0,
  /* 8906 */ 'F', 'M', 'A', 'D', 'D', 'o', 0,
  /* 8913 */ 'F', 'N', 'M', 'A', 'D', 'D', 'o', 0,
  /* 8921 */ 'F', 'N', 'E', 'G', 'D', 'o', 0,
  /* 8928 */ 'M', 'U', 'L', 'H', 'D', 'o', 0,
  /* 8935 */ 'F', 'C', 'F', 'I', 'D', 'o', 0,
  /* 8942 */ 'F', 'C', 'T', 'I', 'D', 'o', 0,
  /* 8949 */ 'F', 'S', 'E', 'L', 'D', 'o', 0,
  /* 8956 */ 'M', 'U', 'L', 'L', 'D', 'o', 0,
  /* 8963 */ 'S', 'L', 'D', 'o', 0,
  /* 8968 */ 'F', 'R', 'I', 'M', 'D', 'o', 0,
  /* 8975 */ 'N', 'A', 'N', 'D', 'o', 0,
  /* 8981 */ 'F', 'C', 'P', 'S', 'G', 'N', 'D', 'o', 0,
  /* 8990 */ 'F', 'R', 'I', 'N', 'D', 'o', 0,
  /* 8997 */ 'F', 'R', 'I', 'P', 'D', 'o', 0,
  /* 9004 */ 'S', 'R', 'D', 'o', 0,
  /* 9009 */ 'F', 'A', 'B', 'S', 'D', 'o', 0,
  /* 9016 */ 'F', 'N', 'A', 'B', 'S', 'D', 'o', 0,
  /* 9024 */ 'D', 'I', 'V', 'D', 'o', 0,
  /* 9030 */ 'F', 'R', 'I', 'Z', 'D', 'o', 0,
  /* 9037 */ 'C', 'N', 'T', 'L', 'Z', 'D', 'o', 0,
  /* 9045 */ 'A', 'D', 'D', 'E', 'o', 0,
  /* 9051 */ 'S', 'U', 'B', 'F', 'E', 'o', 0,
  /* 9058 */ 'A', 'D', 'D', 'M', 'E', 'o', 0,
  /* 9065 */ 'S', 'U', 'B', 'F', 'M', 'E', 'o', 0,
  /* 9073 */ 'F', 'R', 'E', 'o', 0,
  /* 9078 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'o', 0,
  /* 9087 */ 'A', 'D', 'D', 'Z', 'E', 'o', 0,
  /* 9094 */ 'S', 'U', 'B', 'F', 'Z', 'E', 'o', 0,
  /* 9102 */ 'S', 'U', 'B', 'F', 'o', 0,
  /* 9108 */ 'N', 'E', 'G', 'o', 0,
  /* 9113 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 9123 */ 'E', 'X', 'T', 'S', 'H', 'o', 0,
  /* 9130 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 9140 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 9150 */ 'S', 'R', 'A', 'D', 'I', 'o', 0,
  /* 9157 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 'o', 0,
  /* 9167 */ 'E', 'X', 'T', 'L', 'D', 'I', 'o', 0,
  /* 9175 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 9181 */ 'C', 'L', 'R', 'R', 'D', 'I', 'o', 0,
  /* 9189 */ 'I', 'N', 'S', 'R', 'D', 'I', 'o', 0,
  /* 9197 */ 'R', 'O', 'T', 'R', 'D', 'I', 'o', 0,
  /* 9205 */ 'E', 'X', 'T', 'R', 'D', 'I', 'o', 0,
  /* 9213 */ 'R', 'L', 'D', 'I', 'M', 'I', 'o', 0,
  /* 9221 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 0,
  /* 9229 */ 'S', 'R', 'A', 'W', 'I', 'o', 0,
  /* 9236 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 'o', 0,
  /* 9246 */ 'I', 'N', 'S', 'L', 'W', 'I', 'o', 0,
  /* 9254 */ 'E', 'X', 'T', 'L', 'W', 'I', 'o', 0,
  /* 9262 */ 'C', 'L', 'R', 'R', 'W', 'I', 'o', 0,
  /* 9270 */ 'I', 'N', 'S', 'R', 'W', 'I', 'o', 0,
  /* 9278 */ 'R', 'O', 'T', 'R', 'W', 'I', 'o', 0,
  /* 9286 */ 'E', 'X', 'T', 'R', 'W', 'I', 'o', 0,
  /* 9294 */ 'R', 'L', 'D', 'C', 'L', 'o', 0,
  /* 9301 */ 'R', 'L', 'D', 'I', 'C', 'L', 'o', 0,
  /* 9309 */ 'F', 'M', 'U', 'L', 'o', 0,
  /* 9315 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 9323 */ 'R', 'L', 'W', 'N', 'M', 'o', 0,
  /* 9330 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'D', 'P', 'o', 0,
  /* 9341 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'D', 'P', 'o', 0,
  /* 9352 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'D', 'P', 'o', 0,
  /* 9363 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 9372 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 9382 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 9392 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 9402 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'S', 'P', 'o', 0,
  /* 9413 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'S', 'P', 'o', 0,
  /* 9424 */ 'F', 'R', 'S', 'P', 'o', 0,
  /* 9430 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'P', 'o', 0,
  /* 9441 */ 'R', 'L', 'D', 'C', 'R', 'o', 0,
  /* 9448 */ 'R', 'L', 'D', 'I', 'C', 'R', 'o', 0,
  /* 9456 */ 'F', 'M', 'R', 'o', 0,
  /* 9461 */ 'N', 'O', 'R', 'o', 0,
  /* 9466 */ 'X', 'O', 'R', 'o', 0,
  /* 9471 */ 'F', 'S', 'U', 'B', 'S', 'o', 0,
  /* 9478 */ 'F', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 9486 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 9495 */ 'F', 'A', 'D', 'D', 'S', 'o', 0,
  /* 9502 */ 'F', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 9510 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 9519 */ 'F', 'C', 'F', 'I', 'D', 'S', 'o', 0,
  /* 9527 */ 'F', 'R', 'E', 'S', 'o', 0,
  /* 9533 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'o', 0,
  /* 9543 */ 'F', 'N', 'E', 'G', 'S', 'o', 0,
  /* 9550 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 9557 */ 'F', 'S', 'E', 'L', 'S', 'o', 0,
  /* 9564 */ 'F', 'M', 'U', 'L', 'S', 'o', 0,
  /* 9571 */ 'F', 'R', 'I', 'M', 'S', 'o', 0,
  /* 9578 */ 'F', 'C', 'P', 'S', 'G', 'N', 'S', 'o', 0,
  /* 9587 */ 'F', 'R', 'I', 'N', 'S', 'o', 0,
  /* 9594 */ 'F', 'R', 'I', 'P', 'S', 'o', 0,
  /* 9601 */ 'F', 'A', 'B', 'S', 'S', 'o', 0,
  /* 9608 */ 'F', 'N', 'A', 'B', 'S', 'S', 'o', 0,
  /* 9616 */ 'F', 'S', 'Q', 'R', 'T', 'S', 'o', 0,
  /* 9624 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 'o', 0,
  /* 9633 */ 'F', 'D', 'I', 'V', 'S', 'o', 0,
  /* 9640 */ 'F', 'R', 'I', 'Z', 'S', 'o', 0,
  /* 9647 */ 'F', 'S', 'Q', 'R', 'T', 'o', 0,
  /* 9654 */ 'M', 'U', 'L', 'H', 'D', 'U', 'o', 0,
  /* 9662 */ 'F', 'C', 'F', 'I', 'D', 'U', 'o', 0,
  /* 9670 */ 'D', 'I', 'V', 'D', 'U', 'o', 0,
  /* 9677 */ 'M', 'U', 'L', 'H', 'W', 'U', 'o', 0,
  /* 9685 */ 'D', 'I', 'V', 'W', 'U', 'o', 0,
  /* 9692 */ 'F', 'D', 'I', 'V', 'o', 0,
  /* 9698 */ 'E', 'Q', 'V', 'o', 0,
  /* 9703 */ 'S', 'R', 'A', 'W', 'o', 0,
  /* 9709 */ 'M', 'U', 'L', 'H', 'W', 'o', 0,
  /* 9716 */ 'F', 'C', 'T', 'I', 'W', 'o', 0,
  /* 9723 */ 'M', 'U', 'L', 'L', 'W', 'o', 0,
  /* 9730 */ 'S', 'L', 'W', 'o', 0,
  /* 9735 */ 'S', 'R', 'W', 'o', 0,
  /* 9740 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 9750 */ 'E', 'X', 'T', 'S', 'W', 'o', 0,
  /* 9757 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 9767 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 9777 */ 'D', 'I', 'V', 'W', 'o', 0,
  /* 9783 */ 'C', 'N', 'T', 'L', 'Z', 'W', 'o', 0,
  /* 9791 */ 'F', 'C', 'T', 'I', 'D', 'Z', 'o', 0,
  /* 9799 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 'o', 0,
  /* 9808 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 'o', 0,
  /* 9817 */ 'F', 'C', 'T', 'I', 'W', 'Z', 'o', 0,
  /* 9825 */ 'B', 'D', 'Z', 'L', 'A', 'p', 0,
  /* 9832 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'p', 0,
  /* 9840 */ 'B', 'D', 'Z', 'A', 'p', 0,
  /* 9846 */ 'B', 'D', 'N', 'Z', 'A', 'p', 0,
  /* 9853 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 9861 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 9870 */ 'B', 'D', 'Z', 'L', 'p', 0,
  /* 9876 */ 'B', 'D', 'N', 'Z', 'L', 'p', 0,
  /* 9883 */ 'B', 'D', 'Z', 'L', 'R', 'p', 0,
  /* 9890 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'p', 0,
  /* 9898 */ 'B', 'D', 'Z', 'p', 0,
  /* 9903 */ 'B', 'D', 'N', 'Z', 'p', 0,
  /* 9909 */ 'M', 'T', 'C', 'T', 'R', '8', 'l', 'o', 'o', 'p', 0,
  /* 9920 */ 'M', 'T', 'C', 'T', 'R', 'l', 'o', 'o', 'p', 0,
  /* 9930 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'u', 'p', 0,
  /* 9944 */ 'B', 'C', 'L', 'a', 'l', 'w', 'a', 'y', 's', 0,
  /* 9954 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 9964 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 9974 */ 'L', 'A', 'x', 0,
  /* 9978 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    3621U, 4250U, 4424U, 3923U, 3914U, 3962U, 3196U, 3211U, 
    3076U, 3225U, 6276U, 2969U, 2859U, 8306U, 2924U, 6756U, 
    2747U, 4519U, 6715U, 2785U, 652U, 6193U, 8630U, 975U, 
    6201U, 8397U, 8672U, 2383U, 926U, 8644U, 8849U, 2872U, 
    986U, 8685U, 9045U, 3498U, 1098U, 2422U, 945U, 8875U, 
    6163U, 1432U, 1980U, 55U, 1964U, 1938U, 1951U, 1927U, 
    4111U, 267U, 4077U, 227U, 4088U, 240U, 4068U, 2931U, 
    999U, 8700U, 9058U, 3053U, 1014U, 8717U, 9087U, 4440U, 
    5551U, 2717U, 981U, 8679U, 2391U, 932U, 8651U, 8855U, 
    9550U, 1695U, 9175U, 1688U, 6685U, 1451U, 6700U, 1467U, 
    8976U, 800U, 168U, 477U, 1230U, 723U, 91U, 400U, 
    1157U, 764U, 132U, 441U, 1196U, 743U, 111U, 420U, 
    1176U, 840U, 208U, 517U, 1268U, 703U, 71U, 380U, 
    1125U, 820U, 188U, 497U, 1249U, 784U, 152U, 461U, 
    1215U, 2150U, 1817U, 2376U, 2379U, 1840U, 5840U, 1410U, 
    4015U, 1321U, 3896U, 2104U, 5687U, 3979U, 5834U, 1403U, 
    8572U, 4008U, 1313U, 8563U, 8596U, 8610U, 3892U, 5682U, 
    3973U, 8589U, 8604U, 9944U, 8584U, 5828U, 1397U, 4001U, 
    1306U, 8580U, 8365U, 1641U, 2138U, 8500U, 9846U, 4055U, 
    2116U, 8486U, 9832U, 5709U, 1363U, 3993U, 8515U, 9861U, 
    8544U, 9890U, 8530U, 9876U, 8557U, 9903U, 8320U, 1631U, 
    2133U, 8494U, 9840U, 4050U, 2110U, 8479U, 9825U, 5703U, 
    1356U, 3986U, 8507U, 9853U, 8537U, 9883U, 8524U, 9870U, 
    8552U, 9898U, 3888U, 1296U, 5237U, 6224U, 6209U, 8406U, 
    2094U, 896U, 5228U, 5677U, 3967U, 6217U, 2465U, 3515U, 
    9157U, 3809U, 9236U, 3546U, 9181U, 3845U, 9262U, 2780U, 
    3540U, 2698U, 3508U, 7369U, 3795U, 7588U, 3839U, 2852U, 
    9037U, 7741U, 9783U, 6624U, 6631U, 2735U, 2396U, 6959U, 
    2721U, 5744U, 5756U, 2529U, 6648U, 6640U, 5773U, 1815U, 
    3066U, 3454U, 6777U, 6614U, 6787U, 8311U, 4044U, 3469U, 
    2841U, 6856U, 9670U, 9024U, 7734U, 6933U, 9685U, 9777U, 
    6306U, 3955U, 6783U, 536U, 6794U, 542U, 6805U, 557U, 
    6800U, 550U, 2491U, 960U, 324U, 617U, 342U, 635U, 
    9930U, 4465U, 6961U, 1525U, 8785U, 9698U, 5859U, 7334U, 
    7019U, 7141U, 7080U, 7202U, 7269U, 2741U, 2403U, 5566U, 
    6326U, 6894U, 6335U, 6903U, 7614U, 7739U, 6460U, 6931U, 
    6965U, 2271U, 3373U, 2629U, 7833U, 3253U, 7907U, 7276U, 
    8244U, 6554U, 8070U, 6577U, 8095U, 6590U, 8109U, 2897U, 
    7881U, 6262U, 8061U, 6875U, 8189U, 6566U, 8083U, 6603U, 
    8123U, 3599U, 4481U, 4471U, 3609U, 1703U, 4292U, 1747U, 
    4336U, 1781U, 4370U, 3089U, 1845U, 6971U, 7396U, 3651U, 
    2006U, 7031U, 7444U, 3155U, 1884U, 6995U, 7420U, 7153U, 
    7516U, 3686U, 2045U, 7092U, 7480U, 7214U, 7552U, 1715U, 
    4304U, 1759U, 4348U, 1793U, 4382U, 3107U, 1865U, 6983U, 
    7408U, 3669U, 2026U, 7068U, 7468U, 3173U, 1904U, 7007U, 
    7432U, 7190U, 7540U, 3713U, 2075U, 7129U, 7504U, 7251U, 
    7576U, 2123U, 3098U, 1855U, 3660U, 2016U, 3164U, 1894U, 
    3695U, 2055U, 7056U, 7456U, 7178U, 7528U, 3704U, 2065U, 
    7117U, 7492U, 7239U, 7564U, 3116U, 1875U, 1727U, 4316U, 
    3678U, 2036U, 1771U, 4360U, 3182U, 1914U, 1737U, 4326U, 
    3722U, 2085U, 1805U, 4394U, 2728U, 3190U, 5750U, 5761U, 
    2535U, 7375U, 3802U, 7282U, 7381U, 3825U, 3589U, 3763U, 
    6179U, 6867U, 6404U, 6919U, 2635U, 7840U, 3259U, 7914U, 
    7289U, 8251U, 2904U, 7889U, 4457U, 7940U, 3045U, 7898U, 
    4511U, 7949U, 7043U, 7165U, 7104U, 7226U, 7296U, 7304U, 
    5779U, 3524U, 9167U, 3832U, 9254U, 3567U, 9205U, 3866U, 
    9286U, 2273U, 908U, 566U, 8636U, 8801U, 3375U, 1086U, 
    579U, 8747U, 9123U, 7639U, 605U, 8617U, 9750U, 2809U, 
    9009U, 6293U, 9601U, 2611U, 5936U, 9495U, 8900U, 9978U, 
    2663U, 5957U, 9519U, 6840U, 6351U, 9624U, 9662U, 8935U, 
    2834U, 6375U, 2760U, 8981U, 6248U, 9578U, 2674U, 8370U, 
    9799U, 8324U, 9791U, 8942U, 7342U, 8378U, 9808U, 8386U, 
    9817U, 9716U, 6954U, 6398U, 9633U, 9692U, 2616U, 5942U, 
    9502U, 8906U, 5727U, 9456U, 2346U, 5921U, 9478U, 8824U, 
    4028U, 6236U, 9564U, 9309U, 2815U, 9016U, 6299U, 9608U, 
    2651U, 8921U, 6071U, 9543U, 2622U, 5949U, 9510U, 8913U, 
    2352U, 5928U, 9486U, 8831U, 2950U, 6043U, 9527U, 9073U, 
    2708U, 8968U, 6242U, 9571U, 2768U, 8990U, 6256U, 9587U, 
    2774U, 8997U, 6270U, 9594U, 2846U, 9030U, 6548U, 9640U, 
    5455U, 9424U, 2961U, 6048U, 9533U, 9078U, 2686U, 8949U, 
    6187U, 9557U, 6771U, 6344U, 9616U, 9647U, 2341U, 5915U, 
    9471U, 8818U, 5666U, 296U, 5653U, 281U, 4498U, 3459U, 
    6619U, 3475U, 3818U, 9246U, 3553U, 9189U, 3852U, 9270U, 
    3939U, 1300U, 2479U, 2095U, 9974U, 8316U, 1626U, 6939U, 
    1507U, 8217U, 1581U, 8284U, 1608U, 2683U, 7980U, 7992U, 
    6847U, 8166U, 7859U, 4099U, 253U, 8428U, 8415U, 1827U, 
    6747U, 3772U, 4061U, 2642U, 6822U, 8153U, 7848U, 7791U, 
    8294U, 6062U, 6883U, 8198U, 8050U, 1923U, 891U, 6812U, 
    1483U, 8135U, 1553U, 7778U, 1535U, 8005U, 8331U, 1636U, 
    6944U, 1513U, 8223U, 1588U, 8289U, 1614U, 3628U, 1107U, 
    6169U, 1439U, 7387U, 3873U, 7803U, 7922U, 8259U, 4023U, 
    5819U, 8235U, 4033U, 2129U, 7986U, 8141U, 7798U, 316U, 
    309U, 8018U, 8393U, 1647U, 6949U, 1519U, 8229U, 1595U, 
    8301U, 1620U, 8421U, 7863U, 7748U, 8037U, 7763U, 5574U, 
    3124U, 5607U, 1338U, 5847U, 1418U, 5589U, 6057U, 5693U, 
    1344U, 5802U, 3129U, 1035U, 5785U, 5797U, 4410U, 2286U, 
    915U, 2979U, 9954U, 5619U, 2485U, 3143U, 1051U, 5853U, 
    1425U, 9909U, 9920U, 5601U, 0U, 48U, 3149U, 5698U, 
    1350U, 5808U, 2802U, 3136U, 1043U, 5791U, 5814U, 4417U, 
    2988U, 9964U, 5626U, 2657U, 6833U, 9654U, 8928U, 7328U, 
    6912U, 9677U, 9709U, 2692U, 8956U, 3631U, 1104U, 7363U, 
    9723U, 5716U, 1371U, 2723U, 980U, 8678U, 8975U, 3192U, 
    1081U, 8741U, 9108U, 5233U, 859U, 871U, 5740U, 1383U, 
    8773U, 9461U, 5734U, 1384U, 8774U, 2531U, 970U, 8666U, 
    8889U, 3759U, 1120U, 6174U, 1445U, 9462U, 2822U, 7667U, 
    6726U, 6735U, 5633U, 6659U, 2997U, 3481U, 3503U, 3585U, 
    2669U, 3486U, 3901U, 9294U, 5595U, 9441U, 2428U, 3907U, 
    592U, 9301U, 5612U, 9448U, 8882U, 3637U, 9213U, 3644U, 
    1111U, 8755U, 9221U, 4231U, 1330U, 8764U, 9315U, 4238U, 
    9323U, 3560U, 9197U, 3859U, 9278U, 2595U, 657U, 1058U, 
    680U, 1144U, 2541U, 2500U, 2568U, 670U, 1071U, 693U, 
    1286U, 2556U, 2516U, 2583U, 1994U, 2912U, 2877U, 2954U, 
    2704U, 3519U, 9161U, 8963U, 7383U, 3813U, 9240U, 9730U, 
    5644U, 6673U, 3026U, 2606U, 3492U, 9150U, 8894U, 7264U, 
    3781U, 9229U, 9703U, 2805U, 3555U, 9191U, 9004U, 7594U, 
    3854U, 9272U, 9735U, 2298U, 921U, 6817U, 1489U, 8147U, 
    1560U, 7816U, 1541U, 2830U, 7998U, 7821U, 6851U, 8171U, 
    7876U, 2646U, 6827U, 8159U, 7853U, 8272U, 6066U, 6888U, 
    8204U, 8055U, 3395U, 1093U, 8011U, 6862U, 1495U, 8183U, 
    1567U, 7935U, 1547U, 7391U, 3878U, 7809U, 7928U, 8265U, 
    8239U, 4038U, 7675U, 1530U, 8024U, 7827U, 6926U, 1501U, 
    8211U, 1574U, 8279U, 1602U, 7869U, 7755U, 7770U, 3071U, 
    1029U, 8734U, 2410U, 938U, 8658U, 8861U, 2891U, 992U, 
    8692U, 9051U, 2434U, 952U, 2937U, 1006U, 8708U, 9065U, 
    3059U, 1021U, 8725U, 9094U, 9102U, 3464U, 2416U, 8868U, 
    6157U, 2474U, 2172U, 901U, 1820U, 883U, 5824U, 1393U, 
    8446U, 1652U, 8457U, 1664U, 8468U, 1676U, 2827U, 3574U, 
    2000U, 2918U, 3932U, 7783U, 2680U, 3625U, 2944U, 359U, 
    8031U, 373U, 2598U, 2471U, 3039U, 366U, 4528U, 7656U, 
    3884U, 3012U, 5579U, 7687U, 5117U, 5882U, 6115U, 6428U, 
    4140U, 5907U, 4184U, 6140U, 4284U, 6452U, 2742U, 2404U, 
    2215U, 3317U, 7598U, 2310U, 3407U, 7695U, 8044U, 32U, 
    8177U, 40U, 5085U, 9363U, 5173U, 9382U, 2332U, 8808U, 
    3429U, 9130U, 7709U, 9757U, 5132U, 9372U, 5182U, 9392U, 
    2262U, 8791U, 3364U, 9113U, 7630U, 9740U, 2359U, 8839U, 
    3438U, 9140U, 7718U, 9767U, 6534U, 14U, 6541U, 23U, 
    5147U, 5124U, 5109U, 5191U, 2279U, 3381U, 7645U, 2368U, 
    3447U, 7727U, 6094U, 6104U, 5166U, 2247U, 3349U, 7623U, 
    2317U, 3414U, 7702U, 4174U, 2158U, 3266U, 7313U, 2165U, 
    3273U, 7348U, 4123U, 4157U, 6123U, 4148U, 4192U, 6148U, 
    2193U, 3295U, 2302U, 3399U, 2254U, 3356U, 2324U, 3421U, 
    5093U, 5751U, 5762U, 4244U, 7966U, 6310U, 6359U, 6318U, 
    6382U, 4260U, 6367U, 4268U, 6390U, 5141U, 4201U, 4404U, 
    5198U, 8335U, 2178U, 3280U, 7376U, 5156U, 3944U, 4024U, 
    2183U, 3730U, 3285U, 4493U, 7382U, 2291U, 3388U, 2230U, 
    3332U, 7605U, 7652U, 5820U, 2152U, 3247U, 7263U, 2188U, 
    3290U, 4506U, 7593U, 7679U, 5102U, 5874U, 6086U, 6420U, 
    4132U, 5899U, 4166U, 6132U, 4276U, 6444U, 6411U, 5865U, 
    6077U, 5890U, 6436U, 7958U, 2222U, 3324U, 7972U, 2239U, 
    3341U, 5780U, 7U, 2144U, 3239U, 6030U, 2201U, 3303U, 
    6654U, 2885U, 3578U, 5769U, 1388U, 8779U, 3758U, 1119U, 
    6173U, 1444U, 9466U, 4942U, 4633U, 4887U, 5006U, 4851U, 
    5427U, 5964U, 6468U, 5997U, 6501U, 4896U, 4649U, 4669U, 
    5015U, 4597U, 4831U, 5069U, 4871U, 4555U, 4789U, 4751U, 
    4924U, 4735U, 4575U, 4809U, 4533U, 4767U, 3737U, 2441U, 
    4207U, 5204U, 8341U, 4699U, 4713U, 4968U, 4617U, 5023U, 
    4977U, 4950U, 5469U, 4641U, 5295U, 4914U, 9341U, 5445U, 
    9413U, 4689U, 9330U, 5323U, 9402U, 4958U, 9352U, 5477U, 
    9430U, 4861U, 5409U, 5436U, 5975U, 6479U, 6008U, 6512U, 
    4905U, 5986U, 6490U, 6019U, 6523U, 4659U, 5303U, 5049U, 
    5523U, 4679U, 5313U, 5059U, 5533U, 5041U, 5515U, 4607U, 
    5277U, 4841U, 5399U, 5077U, 5543U, 4879U, 5419U, 4565U, 
    5256U, 4799U, 5378U, 4759U, 5359U, 4933U, 5460U, 4743U, 
    5351U, 4586U, 5266U, 4820U, 5388U, 4544U, 5245U, 4778U, 
    5367U, 3744U, 2449U, 4215U, 5212U, 8349U, 4706U, 5333U, 
    3751U, 2457U, 4223U, 5220U, 8357U, 4724U, 5340U, 4997U, 
    5497U, 4625U, 5287U, 5032U, 5506U, 4987U, 5487U, 2714U, 
    2388U, 5737U, 5731U, 8439U, 5766U, 7320U, 7355U, 3531U, 
    3949U, 3787U, 7659U, 2375U, 1835U, 5833U, 4007U, 3891U, 
    2098U, 5681U, 3972U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 1275);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
  virtual ~PPCGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 1275);
}
PPCGenInstrInfo::~PPCGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace PPC {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace PPC {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace PPC {
namespace OpTypes { 
enum OperandType {
  abscalltarget = 0,
  abscondbrtarget = 1,
  absdirectbrtarget = 2,
  calltarget = 3,
  condbrtarget = 4,
  crbitm = 5,
  directbrtarget = 6,
  dispRI = 7,
  dispRIX = 8,
  dispSPE2 = 9,
  dispSPE4 = 10,
  dispSPE8 = 11,
  f32imm = 12,
  f64imm = 13,
  i16imm = 14,
  i1imm = 15,
  i32imm = 16,
  i64imm = 17,
  i8imm = 18,
  imm32SExt16 = 19,
  imm64SExt16 = 20,
  imm64ZExt32 = 21,
  memr = 22,
  memri = 23,
  memrix = 24,
  memrr = 25,
  pred = 26,
  ptr_rc_idx = 27,
  ptr_rc_nor0 = 28,
  s16imm = 29,
  s16imm64 = 30,
  s17imm = 31,
  s17imm64 = 32,
  s5imm = 33,
  spe2dis = 34,
  spe4dis = 35,
  spe8dis = 36,
  tlscall = 37,
  tlscall32 = 38,
  tlsgd = 39,
  tlsgd32 = 40,
  tlsreg = 41,
  tlsreg32 = 42,
  tocentry = 43,
  tocentry32 = 44,
  u16imm = 45,
  u16imm64 = 46,
  u2imm = 47,
  u4imm = 48,
  u5imm = 49,
  u6imm = 50,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace PPC
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace PPC {

enum IsVSXFMAAlt {
	IsVSXFMAAlt_1
};

enum RC {
	RC_0,
	RC_1
};

// getAltVSXFMAOpcode
int getAltVSXFMAOpcode(uint16_t Opcode) {
static const uint16_t getAltVSXFMAOpcodeTable[][2] = {
  { PPC::XSMADDADP, PPC::XSMADDMDP },
  { PPC::XSMSUBADP, PPC::XSMSUBMDP },
  { PPC::XSNMADDADP, PPC::XSNMADDMDP },
  { PPC::XSNMSUBADP, PPC::XSNMSUBMDP },
  { PPC::XVMADDADP, PPC::XVMADDMDP },
  { PPC::XVMADDASP, PPC::XVMADDMSP },
  { PPC::XVMSUBADP, PPC::XVMSUBMDP },
  { PPC::XVMSUBASP, PPC::XVMSUBMSP },
  { PPC::XVNMADDADP, PPC::XVNMADDMDP },
  { PPC::XVNMADDASP, PPC::XVNMADDMSP },
  { PPC::XVNMSUBADP, PPC::XVNMSUBMDP },
  { PPC::XVNMSUBASP, PPC::XVNMSUBMSP },
}; // End of getAltVSXFMAOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 12;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getAltVSXFMAOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getAltVSXFMAOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getAltVSXFMAOpcodeTable[mid][1];
}

// getNonRecordFormOpcode
int getNonRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getNonRecordFormOpcodeTable[][2] = {
  { PPC::ADD4o, PPC::ADD4 },
  { PPC::ADD8o, PPC::ADD8 },
  { PPC::ADDC8o, PPC::ADDC8 },
  { PPC::ADDCo, PPC::ADDC },
  { PPC::ADDE8o, PPC::ADDE8 },
  { PPC::ADDEo, PPC::ADDE },
  { PPC::ADDICo, PPC::ADDIC },
  { PPC::ADDME8o, PPC::ADDME8 },
  { PPC::ADDMEo, PPC::ADDME },
  { PPC::ADDZE8o, PPC::ADDZE8 },
  { PPC::ADDZEo, PPC::ADDZE },
  { PPC::AND8o, PPC::AND8 },
  { PPC::ANDC8o, PPC::ANDC8 },
  { PPC::ANDCo, PPC::ANDC },
  { PPC::ANDo, PPC::AND },
  { PPC::CNTLZDo, PPC::CNTLZD },
  { PPC::CNTLZWo, PPC::CNTLZW },
  { PPC::DIVDUo, PPC::DIVDU },
  { PPC::DIVDo, PPC::DIVD },
  { PPC::DIVWUo, PPC::DIVWU },
  { PPC::DIVWo, PPC::DIVW },
  { PPC::EQV8o, PPC::EQV8 },
  { PPC::EQVo, PPC::EQV },
  { PPC::EXTSB8o, PPC::EXTSB8 },
  { PPC::EXTSBo, PPC::EXTSB },
  { PPC::EXTSH8o, PPC::EXTSH8 },
  { PPC::EXTSHo, PPC::EXTSH },
  { PPC::EXTSW_32_64o, PPC::EXTSW_32_64 },
  { PPC::EXTSWo, PPC::EXTSW },
  { PPC::FABSDo, PPC::FABSD },
  { PPC::FABSSo, PPC::FABSS },
  { PPC::FADDSo, PPC::FADDS },
  { PPC::FADDo, PPC::FADD },
  { PPC::FCFIDSo, PPC::FCFIDS },
  { PPC::FCFIDUSo, PPC::FCFIDUS },
  { PPC::FCFIDUo, PPC::FCFIDU },
  { PPC::FCFIDo, PPC::FCFID },
  { PPC::FCPSGNDo, PPC::FCPSGND },
  { PPC::FCPSGNSo, PPC::FCPSGNS },
  { PPC::FCTIDUZo, PPC::FCTIDUZ },
  { PPC::FCTIDZo, PPC::FCTIDZ },
  { PPC::FCTIDo, PPC::FCTID },
  { PPC::FCTIWUZo, PPC::FCTIWUZ },
  { PPC::FCTIWZo, PPC::FCTIWZ },
  { PPC::FCTIWo, PPC::FCTIW },
  { PPC::FDIVSo, PPC::FDIVS },
  { PPC::FDIVo, PPC::FDIV },
  { PPC::FMADDSo, PPC::FMADDS },
  { PPC::FMADDo, PPC::FMADD },
  { PPC::FMRo, PPC::FMR },
  { PPC::FMSUBSo, PPC::FMSUBS },
  { PPC::FMSUBo, PPC::FMSUB },
  { PPC::FMULSo, PPC::FMULS },
  { PPC::FMULo, PPC::FMUL },
  { PPC::FNABSDo, PPC::FNABSD },
  { PPC::FNABSSo, PPC::FNABSS },
  { PPC::FNEGDo, PPC::FNEGD },
  { PPC::FNEGSo, PPC::FNEGS },
  { PPC::FNMADDSo, PPC::FNMADDS },
  { PPC::FNMADDo, PPC::FNMADD },
  { PPC::FNMSUBSo, PPC::FNMSUBS },
  { PPC::FNMSUBo, PPC::FNMSUB },
  { PPC::FRESo, PPC::FRES },
  { PPC::FREo, PPC::FRE },
  { PPC::FRIMDo, PPC::FRIMD },
  { PPC::FRIMSo, PPC::FRIMS },
  { PPC::FRINDo, PPC::FRIND },
  { PPC::FRINSo, PPC::FRINS },
  { PPC::FRIPDo, PPC::FRIPD },
  { PPC::FRIPSo, PPC::FRIPS },
  { PPC::FRIZDo, PPC::FRIZD },
  { PPC::FRIZSo, PPC::FRIZS },
  { PPC::FRSPo, PPC::FRSP },
  { PPC::FRSQRTESo, PPC::FRSQRTES },
  { PPC::FRSQRTEo, PPC::FRSQRTE },
  { PPC::FSELDo, PPC::FSELD },
  { PPC::FSELSo, PPC::FSELS },
  { PPC::FSQRTSo, PPC::FSQRTS },
  { PPC::FSQRTo, PPC::FSQRT },
  { PPC::FSUBSo, PPC::FSUBS },
  { PPC::FSUBo, PPC::FSUB },
  { PPC::MULHDUo, PPC::MULHDU },
  { PPC::MULHDo, PPC::MULHD },
  { PPC::MULHWUo, PPC::MULHWU },
  { PPC::MULHWo, PPC::MULHW },
  { PPC::MULLDo, PPC::MULLD },
  { PPC::MULLWo, PPC::MULLW },
  { PPC::NAND8o, PPC::NAND8 },
  { PPC::NANDo, PPC::NAND },
  { PPC::NEG8o, PPC::NEG8 },
  { PPC::NEGo, PPC::NEG },
  { PPC::NOR8o, PPC::NOR8 },
  { PPC::NORo, PPC::NOR },
  { PPC::OR8o, PPC::OR8 },
  { PPC::ORC8o, PPC::ORC8 },
  { PPC::ORCo, PPC::ORC },
  { PPC::ORo, PPC::OR },
  { PPC::RLDCLo, PPC::RLDCL },
  { PPC::RLDCRo, PPC::RLDCR },
  { PPC::RLDICLo, PPC::RLDICL },
  { PPC::RLDICRo, PPC::RLDICR },
  { PPC::RLDICo, PPC::RLDIC },
  { PPC::RLDIMIo, PPC::RLDIMI },
  { PPC::RLWIMI8o, PPC::RLWIMI8 },
  { PPC::RLWIMIo, PPC::RLWIMI },
  { PPC::RLWINM8o, PPC::RLWINM8 },
  { PPC::RLWINMo, PPC::RLWINM },
  { PPC::RLWNMo, PPC::RLWNM },
  { PPC::SLDo, PPC::SLD },
  { PPC::SLWo, PPC::SLW },
  { PPC::SRADIo, PPC::SRADI },
  { PPC::SRADo, PPC::SRAD },
  { PPC::SRAWIo, PPC::SRAWI },
  { PPC::SRAWo, PPC::SRAW },
  { PPC::SRDo, PPC::SRD },
  { PPC::SRWo, PPC::SRW },
  { PPC::SUBF8o, PPC::SUBF8 },
  { PPC::SUBFC8o, PPC::SUBFC8 },
  { PPC::SUBFCo, PPC::SUBFC },
  { PPC::SUBFE8o, PPC::SUBFE8 },
  { PPC::SUBFEo, PPC::SUBFE },
  { PPC::SUBFME8o, PPC::SUBFME8 },
  { PPC::SUBFMEo, PPC::SUBFME },
  { PPC::SUBFZE8o, PPC::SUBFZE8 },
  { PPC::SUBFZEo, PPC::SUBFZE },
  { PPC::SUBFo, PPC::SUBF },
  { PPC::XOR8o, PPC::XOR8 },
  { PPC::XORo, PPC::XOR },
}; // End of getNonRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 128;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getNonRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getNonRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getNonRecordFormOpcodeTable[mid][1];
}

// getRecordFormOpcode
int getRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getRecordFormOpcodeTable[][2] = {
  { PPC::ADD4, PPC::ADD4o },
  { PPC::ADD8, PPC::ADD8o },
  { PPC::ADDC, PPC::ADDCo },
  { PPC::ADDC8, PPC::ADDC8o },
  { PPC::ADDE, PPC::ADDEo },
  { PPC::ADDE8, PPC::ADDE8o },
  { PPC::ADDIC, PPC::ADDICo },
  { PPC::ADDME, PPC::ADDMEo },
  { PPC::ADDME8, PPC::ADDME8o },
  { PPC::ADDZE, PPC::ADDZEo },
  { PPC::ADDZE8, PPC::ADDZE8o },
  { PPC::AND, PPC::ANDo },
  { PPC::AND8, PPC::AND8o },
  { PPC::ANDC, PPC::ANDCo },
  { PPC::ANDC8, PPC::ANDC8o },
  { PPC::CNTLZD, PPC::CNTLZDo },
  { PPC::CNTLZW, PPC::CNTLZWo },
  { PPC::DIVD, PPC::DIVDo },
  { PPC::DIVDU, PPC::DIVDUo },
  { PPC::DIVW, PPC::DIVWo },
  { PPC::DIVWU, PPC::DIVWUo },
  { PPC::EQV, PPC::EQVo },
  { PPC::EQV8, PPC::EQV8o },
  { PPC::EXTSB, PPC::EXTSBo },
  { PPC::EXTSB8, PPC::EXTSB8o },
  { PPC::EXTSH, PPC::EXTSHo },
  { PPC::EXTSH8, PPC::EXTSH8o },
  { PPC::EXTSW, PPC::EXTSWo },
  { PPC::EXTSW_32_64, PPC::EXTSW_32_64o },
  { PPC::FABSD, PPC::FABSDo },
  { PPC::FABSS, PPC::FABSSo },
  { PPC::FADD, PPC::FADDo },
  { PPC::FADDS, PPC::FADDSo },
  { PPC::FCFID, PPC::FCFIDo },
  { PPC::FCFIDS, PPC::FCFIDSo },
  { PPC::FCFIDU, PPC::FCFIDUo },
  { PPC::FCFIDUS, PPC::FCFIDUSo },
  { PPC::FCPSGND, PPC::FCPSGNDo },
  { PPC::FCPSGNS, PPC::FCPSGNSo },
  { PPC::FCTID, PPC::FCTIDo },
  { PPC::FCTIDUZ, PPC::FCTIDUZo },
  { PPC::FCTIDZ, PPC::FCTIDZo },
  { PPC::FCTIW, PPC::FCTIWo },
  { PPC::FCTIWUZ, PPC::FCTIWUZo },
  { PPC::FCTIWZ, PPC::FCTIWZo },
  { PPC::FDIV, PPC::FDIVo },
  { PPC::FDIVS, PPC::FDIVSo },
  { PPC::FMADD, PPC::FMADDo },
  { PPC::FMADDS, PPC::FMADDSo },
  { PPC::FMR, PPC::FMRo },
  { PPC::FMSUB, PPC::FMSUBo },
  { PPC::FMSUBS, PPC::FMSUBSo },
  { PPC::FMUL, PPC::FMULo },
  { PPC::FMULS, PPC::FMULSo },
  { PPC::FNABSD, PPC::FNABSDo },
  { PPC::FNABSS, PPC::FNABSSo },
  { PPC::FNEGD, PPC::FNEGDo },
  { PPC::FNEGS, PPC::FNEGSo },
  { PPC::FNMADD, PPC::FNMADDo },
  { PPC::FNMADDS, PPC::FNMADDSo },
  { PPC::FNMSUB, PPC::FNMSUBo },
  { PPC::FNMSUBS, PPC::FNMSUBSo },
  { PPC::FRE, PPC::FREo },
  { PPC::FRES, PPC::FRESo },
  { PPC::FRIMD, PPC::FRIMDo },
  { PPC::FRIMS, PPC::FRIMSo },
  { PPC::FRIND, PPC::FRINDo },
  { PPC::FRINS, PPC::FRINSo },
  { PPC::FRIPD, PPC::FRIPDo },
  { PPC::FRIPS, PPC::FRIPSo },
  { PPC::FRIZD, PPC::FRIZDo },
  { PPC::FRIZS, PPC::FRIZSo },
  { PPC::FRSP, PPC::FRSPo },
  { PPC::FRSQRTE, PPC::FRSQRTEo },
  { PPC::FRSQRTES, PPC::FRSQRTESo },
  { PPC::FSELD, PPC::FSELDo },
  { PPC::FSELS, PPC::FSELSo },
  { PPC::FSQRT, PPC::FSQRTo },
  { PPC::FSQRTS, PPC::FSQRTSo },
  { PPC::FSUB, PPC::FSUBo },
  { PPC::FSUBS, PPC::FSUBSo },
  { PPC::MULHD, PPC::MULHDo },
  { PPC::MULHDU, PPC::MULHDUo },
  { PPC::MULHW, PPC::MULHWo },
  { PPC::MULHWU, PPC::MULHWUo },
  { PPC::MULLD, PPC::MULLDo },
  { PPC::MULLW, PPC::MULLWo },
  { PPC::NAND, PPC::NANDo },
  { PPC::NAND8, PPC::NAND8o },
  { PPC::NEG, PPC::NEGo },
  { PPC::NEG8, PPC::NEG8o },
  { PPC::NOR, PPC::NORo },
  { PPC::NOR8, PPC::NOR8o },
  { PPC::OR, PPC::ORo },
  { PPC::OR8, PPC::OR8o },
  { PPC::ORC, PPC::ORCo },
  { PPC::ORC8, PPC::ORC8o },
  { PPC::RLDCL, PPC::RLDCLo },
  { PPC::RLDCR, PPC::RLDCRo },
  { PPC::RLDIC, PPC::RLDICo },
  { PPC::RLDICL, PPC::RLDICLo },
  { PPC::RLDICR, PPC::RLDICRo },
  { PPC::RLDIMI, PPC::RLDIMIo },
  { PPC::RLWIMI, PPC::RLWIMIo },
  { PPC::RLWIMI8, PPC::RLWIMI8o },
  { PPC::RLWINM, PPC::RLWINMo },
  { PPC::RLWINM8, PPC::RLWINM8o },
  { PPC::RLWNM, PPC::RLWNMo },
  { PPC::SLD, PPC::SLDo },
  { PPC::SLW, PPC::SLWo },
  { PPC::SRAD, PPC::SRADo },
  { PPC::SRADI, PPC::SRADIo },
  { PPC::SRAW, PPC::SRAWo },
  { PPC::SRAWI, PPC::SRAWIo },
  { PPC::SRD, PPC::SRDo },
  { PPC::SRW, PPC::SRWo },
  { PPC::SUBF, PPC::SUBFo },
  { PPC::SUBF8, PPC::SUBF8o },
  { PPC::SUBFC, PPC::SUBFCo },
  { PPC::SUBFC8, PPC::SUBFC8o },
  { PPC::SUBFE, PPC::SUBFEo },
  { PPC::SUBFE8, PPC::SUBFE8o },
  { PPC::SUBFME, PPC::SUBFMEo },
  { PPC::SUBFME8, PPC::SUBFME8o },
  { PPC::SUBFZE, PPC::SUBFZEo },
  { PPC::SUBFZE8, PPC::SUBFZE8o },
  { PPC::XOR, PPC::XORo },
  { PPC::XOR8, PPC::XOR8o },
}; // End of getRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 128;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getRecordFormOpcodeTable[mid][1];
}

} // End PPC namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

