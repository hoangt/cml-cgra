/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register Enum Values                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass PPCMCRegisterClasses[];

namespace PPC {
enum {
  NoRegister,
  BP = 1,
  CARRY = 2,
  CC = 3,
  CTR = 4,
  FP = 5,
  LR = 6,
  RM = 7,
  VRSAVE = 8,
  ZERO = 9,
  BP8 = 10,
  CR0 = 11,
  CR1 = 12,
  CR2 = 13,
  CR3 = 14,
  CR4 = 15,
  CR5 = 16,
  CR6 = 17,
  CR7 = 18,
  CTR8 = 19,
  F0 = 20,
  F1 = 21,
  F2 = 22,
  F3 = 23,
  F4 = 24,
  F5 = 25,
  F6 = 26,
  F7 = 27,
  F8 = 28,
  F9 = 29,
  F10 = 30,
  F11 = 31,
  F12 = 32,
  F13 = 33,
  F14 = 34,
  F15 = 35,
  F16 = 36,
  F17 = 37,
  F18 = 38,
  F19 = 39,
  F20 = 40,
  F21 = 41,
  F22 = 42,
  F23 = 43,
  F24 = 44,
  F25 = 45,
  F26 = 46,
  F27 = 47,
  F28 = 48,
  F29 = 49,
  F30 = 50,
  F31 = 51,
  FP8 = 52,
  LR8 = 53,
  R0 = 54,
  R1 = 55,
  R2 = 56,
  R3 = 57,
  R4 = 58,
  R5 = 59,
  R6 = 60,
  R7 = 61,
  R8 = 62,
  R9 = 63,
  R10 = 64,
  R11 = 65,
  R12 = 66,
  R13 = 67,
  R14 = 68,
  R15 = 69,
  R16 = 70,
  R17 = 71,
  R18 = 72,
  R19 = 73,
  R20 = 74,
  R21 = 75,
  R22 = 76,
  R23 = 77,
  R24 = 78,
  R25 = 79,
  R26 = 80,
  R27 = 81,
  R28 = 82,
  R29 = 83,
  R30 = 84,
  R31 = 85,
  V0 = 86,
  V1 = 87,
  V2 = 88,
  V3 = 89,
  V4 = 90,
  V5 = 91,
  V6 = 92,
  V7 = 93,
  V8 = 94,
  V9 = 95,
  V10 = 96,
  V11 = 97,
  V12 = 98,
  V13 = 99,
  V14 = 100,
  V15 = 101,
  V16 = 102,
  V17 = 103,
  V18 = 104,
  V19 = 105,
  V20 = 106,
  V21 = 107,
  V22 = 108,
  V23 = 109,
  V24 = 110,
  V25 = 111,
  V26 = 112,
  V27 = 113,
  V28 = 114,
  V29 = 115,
  V30 = 116,
  V31 = 117,
  VF0 = 118,
  VF1 = 119,
  VF2 = 120,
  VF3 = 121,
  VF4 = 122,
  VF5 = 123,
  VF6 = 124,
  VF7 = 125,
  VF8 = 126,
  VF9 = 127,
  VF10 = 128,
  VF11 = 129,
  VF12 = 130,
  VF13 = 131,
  VF14 = 132,
  VF15 = 133,
  VF16 = 134,
  VF17 = 135,
  VF18 = 136,
  VF19 = 137,
  VF20 = 138,
  VF21 = 139,
  VF22 = 140,
  VF23 = 141,
  VF24 = 142,
  VF25 = 143,
  VF26 = 144,
  VF27 = 145,
  VF28 = 146,
  VF29 = 147,
  VF30 = 148,
  VF31 = 149,
  VSH0 = 150,
  VSH1 = 151,
  VSH2 = 152,
  VSH3 = 153,
  VSH4 = 154,
  VSH5 = 155,
  VSH6 = 156,
  VSH7 = 157,
  VSH8 = 158,
  VSH9 = 159,
  VSH10 = 160,
  VSH11 = 161,
  VSH12 = 162,
  VSH13 = 163,
  VSH14 = 164,
  VSH15 = 165,
  VSH16 = 166,
  VSH17 = 167,
  VSH18 = 168,
  VSH19 = 169,
  VSH20 = 170,
  VSH21 = 171,
  VSH22 = 172,
  VSH23 = 173,
  VSH24 = 174,
  VSH25 = 175,
  VSH26 = 176,
  VSH27 = 177,
  VSH28 = 178,
  VSH29 = 179,
  VSH30 = 180,
  VSH31 = 181,
  VSL0 = 182,
  VSL1 = 183,
  VSL2 = 184,
  VSL3 = 185,
  VSL4 = 186,
  VSL5 = 187,
  VSL6 = 188,
  VSL7 = 189,
  VSL8 = 190,
  VSL9 = 191,
  VSL10 = 192,
  VSL11 = 193,
  VSL12 = 194,
  VSL13 = 195,
  VSL14 = 196,
  VSL15 = 197,
  VSL16 = 198,
  VSL17 = 199,
  VSL18 = 200,
  VSL19 = 201,
  VSL20 = 202,
  VSL21 = 203,
  VSL22 = 204,
  VSL23 = 205,
  VSL24 = 206,
  VSL25 = 207,
  VSL26 = 208,
  VSL27 = 209,
  VSL28 = 210,
  VSL29 = 211,
  VSL30 = 212,
  VSL31 = 213,
  X0 = 214,
  X1 = 215,
  X2 = 216,
  X3 = 217,
  X4 = 218,
  X5 = 219,
  X6 = 220,
  X7 = 221,
  X8 = 222,
  X9 = 223,
  X10 = 224,
  X11 = 225,
  X12 = 226,
  X13 = 227,
  X14 = 228,
  X15 = 229,
  X16 = 230,
  X17 = 231,
  X18 = 232,
  X19 = 233,
  X20 = 234,
  X21 = 235,
  X22 = 236,
  X23 = 237,
  X24 = 238,
  X25 = 239,
  X26 = 240,
  X27 = 241,
  X28 = 242,
  X29 = 243,
  X30 = 244,
  X31 = 245,
  ZERO8 = 246,
  CR0EQ = 247,
  CR1EQ = 248,
  CR2EQ = 249,
  CR3EQ = 250,
  CR4EQ = 251,
  CR5EQ = 252,
  CR6EQ = 253,
  CR7EQ = 254,
  CR0GT = 255,
  CR1GT = 256,
  CR2GT = 257,
  CR3GT = 258,
  CR4GT = 259,
  CR5GT = 260,
  CR6GT = 261,
  CR7GT = 262,
  CR0LT = 263,
  CR1LT = 264,
  CR2LT = 265,
  CR3LT = 266,
  CR4LT = 267,
  CR5LT = 268,
  CR6LT = 269,
  CR7LT = 270,
  CR0UN = 271,
  CR1UN = 272,
  CR2UN = 273,
  CR3UN = 274,
  CR4UN = 275,
  CR5UN = 276,
  CR6UN = 277,
  CR7UN = 278,
  NUM_TARGET_REGS 	// 279
};
}

// Register classes
namespace PPC {
enum {
  GPRCRegClassID = 0,
  GPRC_NOR0RegClassID = 1,
  GPRC_and_GPRC_NOR0RegClassID = 2,
  CRBITRCRegClassID = 3,
  F4RCRegClassID = 4,
  CRRCRegClassID = 5,
  CARRYRCRegClassID = 6,
  CCRCRegClassID = 7,
  CTRRCRegClassID = 8,
  VRSAVERCRegClassID = 9,
  VSFRCRegClassID = 10,
  G8RCRegClassID = 11,
  G8RC_NOX0RegClassID = 12,
  G8RC_and_G8RC_NOX0RegClassID = 13,
  F8RCRegClassID = 14,
  VFRCRegClassID = 15,
  CTRRC8RegClassID = 16,
  VSRCRegClassID = 17,
  VRRCRegClassID = 18,
  VSHRCRegClassID = 19,
  VSLRCRegClassID = 20
  };
}

// Subregister indices
namespace PPC {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_64,	// 2
  sub_128,	// 3
  sub_eq,	// 4
  sub_gt,	// 5
  sub_lt,	// 6
  sub_un,	// 7
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*MC Register Information                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const MCPhysReg PPCRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 2, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 11 */ 65527, 14, 1, 1, 1, 0,
  /* 17 */ 65527, 17, 1, 1, 1, 0,
  /* 23 */ 65527, 20, 1, 1, 1, 0,
  /* 29 */ 65527, 23, 1, 1, 1, 0,
  /* 35 */ 65527, 26, 1, 1, 1, 0,
  /* 41 */ 65527, 29, 1, 1, 1, 0,
  /* 47 */ 65527, 32, 1, 1, 1, 0,
  /* 53 */ 65527, 35, 1, 1, 1, 0,
  /* 59 */ 6, 0,
  /* 61 */ 9, 0,
  /* 63 */ 11, 0,
  /* 65 */ 252, 65528, 65528, 24, 0,
  /* 70 */ 28, 0,
  /* 72 */ 29, 0,
  /* 74 */ 65472, 32, 0,
  /* 77 */ 47, 0,
  /* 79 */ 65504, 64, 0,
  /* 82 */ 160, 0,
  /* 84 */ 162, 0,
  /* 86 */ 237, 0,
  /* 88 */ 64471, 0,
  /* 90 */ 64500, 0,
  /* 92 */ 64533, 0,
  /* 94 */ 64566, 0,
  /* 96 */ 64813, 0,
  /* 98 */ 65276, 0,
  /* 100 */ 65284, 0,
  /* 102 */ 65292, 0,
  /* 104 */ 65299, 0,
  /* 106 */ 65300, 0,
  /* 108 */ 65374, 0,
  /* 110 */ 65376, 0,
  /* 112 */ 65403, 0,
  /* 114 */ 65404, 0,
  /* 116 */ 65489, 0,
  /* 118 */ 65500, 0,
  /* 120 */ 65527, 0,
  /* 122 */ 65532, 0,
  /* 124 */ 65535, 0,
};

extern const uint16_t PPCSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 3, 2, 0,
  /* 5 */ 6, 5, 4, 7, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits PPCSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
  { 0, 64 },	// sub_64
  { 0, 128 },	// sub_128
  { 2, 1 },	// sub_eq
  { 1, 1 },	// sub_gt
  { 0, 1 },	// sub_lt
  { 3, 1 },	// sub_un
};

extern const char PPCRegStrings[] = {
  /* 0 */ 'V', 'F', '1', '0', 0,
  /* 5 */ 'V', 'S', 'H', '1', '0', 0,
  /* 11 */ 'V', 'S', 'L', '1', '0', 0,
  /* 17 */ 'R', '1', '0', 0,
  /* 21 */ 'V', '1', '0', 0,
  /* 25 */ 'X', '1', '0', 0,
  /* 29 */ 'V', 'F', '2', '0', 0,
  /* 34 */ 'V', 'S', 'H', '2', '0', 0,
  /* 40 */ 'V', 'S', 'L', '2', '0', 0,
  /* 46 */ 'R', '2', '0', 0,
  /* 50 */ 'V', '2', '0', 0,
  /* 54 */ 'X', '2', '0', 0,
  /* 58 */ 'V', 'F', '3', '0', 0,
  /* 63 */ 'V', 'S', 'H', '3', '0', 0,
  /* 69 */ 'V', 'S', 'L', '3', '0', 0,
  /* 75 */ 'R', '3', '0', 0,
  /* 79 */ 'V', '3', '0', 0,
  /* 83 */ 'X', '3', '0', 0,
  /* 87 */ 'V', 'F', '0', 0,
  /* 91 */ 'V', 'S', 'H', '0', 0,
  /* 96 */ 'V', 'S', 'L', '0', 0,
  /* 101 */ 'C', 'R', '0', 0,
  /* 105 */ 'V', '0', 0,
  /* 108 */ 'X', '0', 0,
  /* 111 */ 'V', 'F', '1', '1', 0,
  /* 116 */ 'V', 'S', 'H', '1', '1', 0,
  /* 122 */ 'V', 'S', 'L', '1', '1', 0,
  /* 128 */ 'R', '1', '1', 0,
  /* 132 */ 'V', '1', '1', 0,
  /* 136 */ 'X', '1', '1', 0,
  /* 140 */ 'V', 'F', '2', '1', 0,
  /* 145 */ 'V', 'S', 'H', '2', '1', 0,
  /* 151 */ 'V', 'S', 'L', '2', '1', 0,
  /* 157 */ 'R', '2', '1', 0,
  /* 161 */ 'V', '2', '1', 0,
  /* 165 */ 'X', '2', '1', 0,
  /* 169 */ 'V', 'F', '3', '1', 0,
  /* 174 */ 'V', 'S', 'H', '3', '1', 0,
  /* 180 */ 'V', 'S', 'L', '3', '1', 0,
  /* 186 */ 'R', '3', '1', 0,
  /* 190 */ 'V', '3', '1', 0,
  /* 194 */ 'X', '3', '1', 0,
  /* 198 */ 'V', 'F', '1', 0,
  /* 202 */ 'V', 'S', 'H', '1', 0,
  /* 207 */ 'V', 'S', 'L', '1', 0,
  /* 212 */ 'C', 'R', '1', 0,
  /* 216 */ 'V', '1', 0,
  /* 219 */ 'X', '1', 0,
  /* 222 */ 'V', 'F', '1', '2', 0,
  /* 227 */ 'V', 'S', 'H', '1', '2', 0,
  /* 233 */ 'V', 'S', 'L', '1', '2', 0,
  /* 239 */ 'R', '1', '2', 0,
  /* 243 */ 'V', '1', '2', 0,
  /* 247 */ 'X', '1', '2', 0,
  /* 251 */ 'V', 'F', '2', '2', 0,
  /* 256 */ 'V', 'S', 'H', '2', '2', 0,
  /* 262 */ 'V', 'S', 'L', '2', '2', 0,
  /* 268 */ 'R', '2', '2', 0,
  /* 272 */ 'V', '2', '2', 0,
  /* 276 */ 'X', '2', '2', 0,
  /* 280 */ 'V', 'F', '2', 0,
  /* 284 */ 'V', 'S', 'H', '2', 0,
  /* 289 */ 'V', 'S', 'L', '2', 0,
  /* 294 */ 'C', 'R', '2', 0,
  /* 298 */ 'V', '2', 0,
  /* 301 */ 'X', '2', 0,
  /* 304 */ 'V', 'F', '1', '3', 0,
  /* 309 */ 'V', 'S', 'H', '1', '3', 0,
  /* 315 */ 'V', 'S', 'L', '1', '3', 0,
  /* 321 */ 'R', '1', '3', 0,
  /* 325 */ 'V', '1', '3', 0,
  /* 329 */ 'X', '1', '3', 0,
  /* 333 */ 'V', 'F', '2', '3', 0,
  /* 338 */ 'V', 'S', 'H', '2', '3', 0,
  /* 344 */ 'V', 'S', 'L', '2', '3', 0,
  /* 350 */ 'R', '2', '3', 0,
  /* 354 */ 'V', '2', '3', 0,
  /* 358 */ 'X', '2', '3', 0,
  /* 362 */ 'V', 'F', '3', 0,
  /* 366 */ 'V', 'S', 'H', '3', 0,
  /* 371 */ 'V', 'S', 'L', '3', 0,
  /* 376 */ 'C', 'R', '3', 0,
  /* 380 */ 'V', '3', 0,
  /* 383 */ 'X', '3', 0,
  /* 386 */ 'V', 'F', '1', '4', 0,
  /* 391 */ 'V', 'S', 'H', '1', '4', 0,
  /* 397 */ 'V', 'S', 'L', '1', '4', 0,
  /* 403 */ 'R', '1', '4', 0,
  /* 407 */ 'V', '1', '4', 0,
  /* 411 */ 'X', '1', '4', 0,
  /* 415 */ 'V', 'F', '2', '4', 0,
  /* 420 */ 'V', 'S', 'H', '2', '4', 0,
  /* 426 */ 'V', 'S', 'L', '2', '4', 0,
  /* 432 */ 'R', '2', '4', 0,
  /* 436 */ 'V', '2', '4', 0,
  /* 440 */ 'X', '2', '4', 0,
  /* 444 */ 'V', 'F', '4', 0,
  /* 448 */ 'V', 'S', 'H', '4', 0,
  /* 453 */ 'V', 'S', 'L', '4', 0,
  /* 458 */ 'C', 'R', '4', 0,
  /* 462 */ 'V', '4', 0,
  /* 465 */ 'X', '4', 0,
  /* 468 */ 'V', 'F', '1', '5', 0,
  /* 473 */ 'V', 'S', 'H', '1', '5', 0,
  /* 479 */ 'V', 'S', 'L', '1', '5', 0,
  /* 485 */ 'R', '1', '5', 0,
  /* 489 */ 'V', '1', '5', 0,
  /* 493 */ 'X', '1', '5', 0,
  /* 497 */ 'V', 'F', '2', '5', 0,
  /* 502 */ 'V', 'S', 'H', '2', '5', 0,
  /* 508 */ 'V', 'S', 'L', '2', '5', 0,
  /* 514 */ 'R', '2', '5', 0,
  /* 518 */ 'V', '2', '5', 0,
  /* 522 */ 'X', '2', '5', 0,
  /* 526 */ 'V', 'F', '5', 0,
  /* 530 */ 'V', 'S', 'H', '5', 0,
  /* 535 */ 'V', 'S', 'L', '5', 0,
  /* 540 */ 'C', 'R', '5', 0,
  /* 544 */ 'V', '5', 0,
  /* 547 */ 'X', '5', 0,
  /* 550 */ 'V', 'F', '1', '6', 0,
  /* 555 */ 'V', 'S', 'H', '1', '6', 0,
  /* 561 */ 'V', 'S', 'L', '1', '6', 0,
  /* 567 */ 'R', '1', '6', 0,
  /* 571 */ 'V', '1', '6', 0,
  /* 575 */ 'X', '1', '6', 0,
  /* 579 */ 'V', 'F', '2', '6', 0,
  /* 584 */ 'V', 'S', 'H', '2', '6', 0,
  /* 590 */ 'V', 'S', 'L', '2', '6', 0,
  /* 596 */ 'R', '2', '6', 0,
  /* 600 */ 'V', '2', '6', 0,
  /* 604 */ 'X', '2', '6', 0,
  /* 608 */ 'V', 'F', '6', 0,
  /* 612 */ 'V', 'S', 'H', '6', 0,
  /* 617 */ 'V', 'S', 'L', '6', 0,
  /* 622 */ 'C', 'R', '6', 0,
  /* 626 */ 'V', '6', 0,
  /* 629 */ 'X', '6', 0,
  /* 632 */ 'V', 'F', '1', '7', 0,
  /* 637 */ 'V', 'S', 'H', '1', '7', 0,
  /* 643 */ 'V', 'S', 'L', '1', '7', 0,
  /* 649 */ 'R', '1', '7', 0,
  /* 653 */ 'V', '1', '7', 0,
  /* 657 */ 'X', '1', '7', 0,
  /* 661 */ 'V', 'F', '2', '7', 0,
  /* 666 */ 'V', 'S', 'H', '2', '7', 0,
  /* 672 */ 'V', 'S', 'L', '2', '7', 0,
  /* 678 */ 'R', '2', '7', 0,
  /* 682 */ 'V', '2', '7', 0,
  /* 686 */ 'X', '2', '7', 0,
  /* 690 */ 'V', 'F', '7', 0,
  /* 694 */ 'V', 'S', 'H', '7', 0,
  /* 699 */ 'V', 'S', 'L', '7', 0,
  /* 704 */ 'C', 'R', '7', 0,
  /* 708 */ 'V', '7', 0,
  /* 711 */ 'X', '7', 0,
  /* 714 */ 'V', 'F', '1', '8', 0,
  /* 719 */ 'V', 'S', 'H', '1', '8', 0,
  /* 725 */ 'V', 'S', 'L', '1', '8', 0,
  /* 731 */ 'R', '1', '8', 0,
  /* 735 */ 'V', '1', '8', 0,
  /* 739 */ 'X', '1', '8', 0,
  /* 743 */ 'V', 'F', '2', '8', 0,
  /* 748 */ 'V', 'S', 'H', '2', '8', 0,
  /* 754 */ 'V', 'S', 'L', '2', '8', 0,
  /* 760 */ 'R', '2', '8', 0,
  /* 764 */ 'V', '2', '8', 0,
  /* 768 */ 'X', '2', '8', 0,
  /* 772 */ 'V', 'F', '8', 0,
  /* 776 */ 'V', 'S', 'H', '8', 0,
  /* 781 */ 'V', 'S', 'L', '8', 0,
  /* 786 */ 'Z', 'E', 'R', 'O', '8', 0,
  /* 792 */ 'B', 'P', '8', 0,
  /* 796 */ 'F', 'P', '8', 0,
  /* 800 */ 'L', 'R', '8', 0,
  /* 804 */ 'C', 'T', 'R', '8', 0,
  /* 809 */ 'V', '8', 0,
  /* 812 */ 'X', '8', 0,
  /* 815 */ 'V', 'F', '1', '9', 0,
  /* 820 */ 'V', 'S', 'H', '1', '9', 0,
  /* 826 */ 'V', 'S', 'L', '1', '9', 0,
  /* 832 */ 'R', '1', '9', 0,
  /* 836 */ 'V', '1', '9', 0,
  /* 840 */ 'X', '1', '9', 0,
  /* 844 */ 'V', 'F', '2', '9', 0,
  /* 849 */ 'V', 'S', 'H', '2', '9', 0,
  /* 855 */ 'V', 'S', 'L', '2', '9', 0,
  /* 861 */ 'R', '2', '9', 0,
  /* 865 */ 'V', '2', '9', 0,
  /* 869 */ 'X', '2', '9', 0,
  /* 873 */ 'V', 'F', '9', 0,
  /* 877 */ 'V', 'S', 'H', '9', 0,
  /* 882 */ 'V', 'S', 'L', '9', 0,
  /* 887 */ 'R', '9', 0,
  /* 890 */ 'V', '9', 0,
  /* 893 */ 'X', '9', 0,
  /* 896 */ 'C', 'C', 0,
  /* 899 */ 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 906 */ 'R', 'M', 0,
  /* 909 */ 'C', 'R', '0', 'U', 'N', 0,
  /* 915 */ 'C', 'R', '1', 'U', 'N', 0,
  /* 921 */ 'C', 'R', '2', 'U', 'N', 0,
  /* 927 */ 'C', 'R', '3', 'U', 'N', 0,
  /* 933 */ 'C', 'R', '4', 'U', 'N', 0,
  /* 939 */ 'C', 'R', '5', 'U', 'N', 0,
  /* 945 */ 'C', 'R', '6', 'U', 'N', 0,
  /* 951 */ 'C', 'R', '7', 'U', 'N', 0,
  /* 957 */ 'Z', 'E', 'R', 'O', 0,
  /* 962 */ 'B', 'P', 0,
  /* 965 */ 'F', 'P', 0,
  /* 968 */ 'C', 'R', '0', 'E', 'Q', 0,
  /* 974 */ 'C', 'R', '1', 'E', 'Q', 0,
  /* 980 */ 'C', 'R', '2', 'E', 'Q', 0,
  /* 986 */ 'C', 'R', '3', 'E', 'Q', 0,
  /* 992 */ 'C', 'R', '4', 'E', 'Q', 0,
  /* 998 */ 'C', 'R', '5', 'E', 'Q', 0,
  /* 1004 */ 'C', 'R', '6', 'E', 'Q', 0,
  /* 1010 */ 'C', 'R', '7', 'E', 'Q', 0,
  /* 1016 */ 'L', 'R', 0,
  /* 1019 */ 'C', 'T', 'R', 0,
  /* 1023 */ 'C', 'R', '0', 'G', 'T', 0,
  /* 1029 */ 'C', 'R', '1', 'G', 'T', 0,
  /* 1035 */ 'C', 'R', '2', 'G', 'T', 0,
  /* 1041 */ 'C', 'R', '3', 'G', 'T', 0,
  /* 1047 */ 'C', 'R', '4', 'G', 'T', 0,
  /* 1053 */ 'C', 'R', '5', 'G', 'T', 0,
  /* 1059 */ 'C', 'R', '6', 'G', 'T', 0,
  /* 1065 */ 'C', 'R', '7', 'G', 'T', 0,
  /* 1071 */ 'C', 'R', '0', 'L', 'T', 0,
  /* 1077 */ 'C', 'R', '1', 'L', 'T', 0,
  /* 1083 */ 'C', 'R', '2', 'L', 'T', 0,
  /* 1089 */ 'C', 'R', '3', 'L', 'T', 0,
  /* 1095 */ 'C', 'R', '4', 'L', 'T', 0,
  /* 1101 */ 'C', 'R', '5', 'L', 'T', 0,
  /* 1107 */ 'C', 'R', '6', 'L', 'T', 0,
  /* 1113 */ 'C', 'R', '7', 'L', 'T', 0,
  /* 1119 */ 'C', 'A', 'R', 'R', 'Y', 0,
};

extern const MCRegisterDesc PPCRegDesc[] = { // Descriptors
  { 4, 0, 0, 0, 0 },
  { 962, 1, 61, 1, 1985 },
  { 1119, 1, 1, 1, 1985 },
  { 896, 1, 1, 1, 32 },
  { 1019, 1, 1, 1, 945 },
  { 965, 1, 77, 1, 945 },
  { 1016, 1, 1, 1, 945 },
  { 906, 1, 1, 1, 945 },
  { 899, 1, 1, 1, 945 },
  { 957, 1, 86, 1, 945 },
  { 792, 120, 1, 0, 0 },
  { 101, 65, 1, 5, 177 },
  { 212, 65, 1, 5, 273 },
  { 294, 65, 1, 5, 369 },
  { 376, 65, 1, 5, 465 },
  { 458, 65, 1, 5, 561 },
  { 540, 65, 1, 5, 657 },
  { 622, 65, 1, 5, 753 },
  { 704, 65, 1, 5, 849 },
  { 804, 1, 1, 1, 1153 },
  { 88, 1, 84, 1, 1153 },
  { 199, 1, 84, 1, 1153 },
  { 281, 1, 84, 1, 1153 },
  { 363, 1, 84, 1, 1153 },
  { 445, 1, 84, 1, 1153 },
  { 527, 1, 84, 1, 1153 },
  { 609, 1, 84, 1, 1153 },
  { 691, 1, 84, 1, 1153 },
  { 773, 1, 84, 1, 1153 },
  { 874, 1, 84, 1, 1153 },
  { 1, 1, 84, 1, 1153 },
  { 112, 1, 84, 1, 1153 },
  { 223, 1, 84, 1, 1153 },
  { 305, 1, 84, 1, 1153 },
  { 387, 1, 84, 1, 1153 },
  { 469, 1, 84, 1, 1153 },
  { 551, 1, 84, 1, 1153 },
  { 633, 1, 84, 1, 1153 },
  { 715, 1, 84, 1, 1153 },
  { 816, 1, 84, 1, 1153 },
  { 30, 1, 84, 1, 1153 },
  { 141, 1, 84, 1, 1153 },
  { 252, 1, 84, 1, 1153 },
  { 334, 1, 84, 1, 1153 },
  { 416, 1, 84, 1, 1153 },
  { 498, 1, 84, 1, 1153 },
  { 580, 1, 84, 1, 1153 },
  { 662, 1, 84, 1, 1153 },
  { 744, 1, 84, 1, 1153 },
  { 845, 1, 84, 1, 1153 },
  { 59, 1, 84, 1, 1153 },
  { 170, 1, 84, 1, 1153 },
  { 796, 116, 1, 0, 1008 },
  { 800, 1, 1, 1, 1121 },
  { 102, 1, 82, 1, 1121 },
  { 213, 1, 82, 1, 1121 },
  { 295, 1, 82, 1, 1121 },
  { 377, 1, 82, 1, 1121 },
  { 459, 1, 82, 1, 1121 },
  { 541, 1, 82, 1, 1121 },
  { 623, 1, 82, 1, 1121 },
  { 705, 1, 82, 1, 1121 },
  { 801, 1, 82, 1, 1121 },
  { 887, 1, 82, 1, 1121 },
  { 17, 1, 82, 1, 1121 },
  { 128, 1, 82, 1, 1121 },
  { 239, 1, 82, 1, 1121 },
  { 321, 1, 82, 1, 1121 },
  { 403, 1, 82, 1, 1121 },
  { 485, 1, 82, 1, 1121 },
  { 567, 1, 82, 1, 1121 },
  { 649, 1, 82, 1, 1121 },
  { 731, 1, 82, 1, 1121 },
  { 832, 1, 82, 1, 1121 },
  { 46, 1, 82, 1, 1121 },
  { 157, 1, 82, 1, 1121 },
  { 268, 1, 82, 1, 1121 },
  { 350, 1, 82, 1, 1121 },
  { 432, 1, 82, 1, 1121 },
  { 514, 1, 82, 1, 1121 },
  { 596, 1, 82, 1, 1121 },
  { 678, 1, 82, 1, 1121 },
  { 760, 1, 82, 1, 1121 },
  { 861, 1, 82, 1, 1121 },
  { 75, 1, 82, 1, 1121 },
  { 186, 1, 82, 1, 1121 },
  { 105, 75, 80, 3, 1121 },
  { 216, 75, 80, 3, 1121 },
  { 298, 75, 80, 3, 1121 },
  { 380, 75, 80, 3, 1121 },
  { 462, 75, 80, 3, 1121 },
  { 544, 75, 80, 3, 1121 },
  { 626, 75, 80, 3, 1121 },
  { 708, 75, 80, 3, 1121 },
  { 809, 75, 80, 3, 1121 },
  { 890, 75, 80, 3, 1121 },
  { 21, 75, 80, 3, 1121 },
  { 132, 75, 80, 3, 1121 },
  { 243, 75, 80, 3, 1121 },
  { 325, 75, 80, 3, 1121 },
  { 407, 75, 80, 3, 1121 },
  { 489, 75, 80, 3, 1121 },
  { 571, 75, 80, 3, 1121 },
  { 653, 75, 80, 3, 1121 },
  { 735, 75, 80, 3, 1121 },
  { 836, 75, 80, 3, 1121 },
  { 50, 75, 80, 3, 1121 },
  { 161, 75, 80, 3, 1121 },
  { 272, 75, 80, 3, 1121 },
  { 354, 75, 80, 3, 1121 },
  { 436, 75, 80, 3, 1121 },
  { 518, 75, 80, 3, 1121 },
  { 600, 75, 80, 3, 1121 },
  { 682, 75, 80, 3, 1121 },
  { 764, 75, 80, 3, 1121 },
  { 865, 75, 80, 3, 1121 },
  { 79, 75, 80, 3, 1121 },
  { 190, 75, 80, 3, 1121 },
  { 87, 1, 79, 1, 1953 },
  { 198, 1, 79, 1, 1953 },
  { 280, 1, 79, 1, 1953 },
  { 362, 1, 79, 1, 1953 },
  { 444, 1, 79, 1, 1953 },
  { 526, 1, 79, 1, 1953 },
  { 608, 1, 79, 1, 1953 },
  { 690, 1, 79, 1, 1953 },
  { 772, 1, 79, 1, 1953 },
  { 873, 1, 79, 1, 1953 },
  { 0, 1, 79, 1, 1953 },
  { 111, 1, 79, 1, 1953 },
  { 222, 1, 79, 1, 1953 },
  { 304, 1, 79, 1, 1953 },
  { 386, 1, 79, 1, 1953 },
  { 468, 1, 79, 1, 1953 },
  { 550, 1, 79, 1, 1953 },
  { 632, 1, 79, 1, 1953 },
  { 714, 1, 79, 1, 1953 },
  { 815, 1, 79, 1, 1953 },
  { 29, 1, 79, 1, 1953 },
  { 140, 1, 79, 1, 1953 },
  { 251, 1, 79, 1, 1953 },
  { 333, 1, 79, 1, 1953 },
  { 415, 1, 79, 1, 1953 },
  { 497, 1, 79, 1, 1953 },
  { 579, 1, 79, 1, 1953 },
  { 661, 1, 79, 1, 1953 },
  { 743, 1, 79, 1, 1953 },
  { 844, 1, 79, 1, 1953 },
  { 58, 1, 79, 1, 1953 },
  { 169, 1, 79, 1, 1953 },
  { 91, 74, 1, 2, 1889 },
  { 202, 74, 1, 2, 1889 },
  { 284, 74, 1, 2, 1889 },
  { 366, 74, 1, 2, 1889 },
  { 448, 74, 1, 2, 1889 },
  { 530, 74, 1, 2, 1889 },
  { 612, 74, 1, 2, 1889 },
  { 694, 74, 1, 2, 1889 },
  { 776, 74, 1, 2, 1889 },
  { 877, 74, 1, 2, 1889 },
  { 5, 74, 1, 2, 1889 },
  { 116, 74, 1, 2, 1889 },
  { 227, 74, 1, 2, 1889 },
  { 309, 74, 1, 2, 1889 },
  { 391, 74, 1, 2, 1889 },
  { 473, 74, 1, 2, 1889 },
  { 555, 74, 1, 2, 1889 },
  { 637, 74, 1, 2, 1889 },
  { 719, 74, 1, 2, 1889 },
  { 820, 74, 1, 2, 1889 },
  { 34, 74, 1, 2, 1889 },
  { 145, 74, 1, 2, 1889 },
  { 256, 74, 1, 2, 1889 },
  { 338, 74, 1, 2, 1889 },
  { 420, 74, 1, 2, 1889 },
  { 502, 74, 1, 2, 1889 },
  { 584, 74, 1, 2, 1889 },
  { 666, 74, 1, 2, 1889 },
  { 748, 74, 1, 2, 1889 },
  { 849, 74, 1, 2, 1889 },
  { 63, 74, 1, 2, 1889 },
  { 174, 74, 1, 2, 1889 },
  { 96, 108, 1, 3, 1793 },
  { 207, 108, 1, 3, 1793 },
  { 289, 108, 1, 3, 1793 },
  { 371, 108, 1, 3, 1793 },
  { 453, 108, 1, 3, 1793 },
  { 535, 108, 1, 3, 1793 },
  { 617, 108, 1, 3, 1793 },
  { 699, 108, 1, 3, 1793 },
  { 781, 108, 1, 3, 1793 },
  { 882, 108, 1, 3, 1793 },
  { 11, 108, 1, 3, 1793 },
  { 122, 108, 1, 3, 1793 },
  { 233, 108, 1, 3, 1793 },
  { 315, 108, 1, 3, 1793 },
  { 397, 108, 1, 3, 1793 },
  { 479, 108, 1, 3, 1793 },
  { 561, 108, 1, 3, 1793 },
  { 643, 108, 1, 3, 1793 },
  { 725, 108, 1, 3, 1793 },
  { 826, 108, 1, 3, 1793 },
  { 40, 108, 1, 3, 1793 },
  { 151, 108, 1, 3, 1793 },
  { 262, 108, 1, 3, 1793 },
  { 344, 108, 1, 3, 1793 },
  { 426, 108, 1, 3, 1793 },
  { 508, 108, 1, 3, 1793 },
  { 590, 108, 1, 3, 1793 },
  { 672, 108, 1, 3, 1793 },
  { 754, 108, 1, 3, 1793 },
  { 855, 108, 1, 3, 1793 },
  { 69, 108, 1, 3, 1793 },
  { 180, 108, 1, 3, 1793 },
  { 108, 110, 1, 0, 1825 },
  { 219, 110, 1, 0, 1825 },
  { 301, 110, 1, 0, 1825 },
  { 383, 110, 1, 0, 1825 },
  { 465, 110, 1, 0, 1825 },
  { 547, 110, 1, 0, 1825 },
  { 629, 110, 1, 0, 1825 },
  { 711, 110, 1, 0, 1825 },
  { 812, 110, 1, 0, 1825 },
  { 893, 110, 1, 0, 1825 },
  { 25, 110, 1, 0, 1825 },
  { 136, 110, 1, 0, 1825 },
  { 247, 110, 1, 0, 1825 },
  { 329, 110, 1, 0, 1825 },
  { 411, 110, 1, 0, 1825 },
  { 493, 110, 1, 0, 1825 },
  { 575, 110, 1, 0, 1825 },
  { 657, 110, 1, 0, 1825 },
  { 739, 110, 1, 0, 1825 },
  { 840, 110, 1, 0, 1825 },
  { 54, 110, 1, 0, 1825 },
  { 165, 110, 1, 0, 1825 },
  { 276, 110, 1, 0, 1825 },
  { 358, 110, 1, 0, 1825 },
  { 440, 110, 1, 0, 1825 },
  { 522, 110, 1, 0, 1825 },
  { 604, 110, 1, 0, 1825 },
  { 686, 110, 1, 0, 1825 },
  { 768, 110, 1, 0, 1825 },
  { 869, 110, 1, 0, 1825 },
  { 83, 110, 1, 0, 1825 },
  { 194, 110, 1, 0, 1825 },
  { 786, 104, 1, 0, 1539 },
  { 968, 1, 106, 1, 1539 },
  { 974, 1, 106, 1, 1508 },
  { 980, 1, 106, 1, 1508 },
  { 986, 1, 106, 1, 1508 },
  { 992, 1, 106, 1, 1508 },
  { 998, 1, 106, 1, 1508 },
  { 1004, 1, 106, 1, 1508 },
  { 1010, 1, 106, 1, 1508 },
  { 1023, 1, 102, 1, 1476 },
  { 1029, 1, 102, 1, 1476 },
  { 1035, 1, 102, 1, 1476 },
  { 1041, 1, 102, 1, 1476 },
  { 1047, 1, 102, 1, 1476 },
  { 1053, 1, 102, 1, 1476 },
  { 1059, 1, 102, 1, 1476 },
  { 1065, 1, 102, 1, 1476 },
  { 1071, 1, 100, 1, 1444 },
  { 1077, 1, 100, 1, 1444 },
  { 1083, 1, 100, 1, 1444 },
  { 1089, 1, 100, 1, 1444 },
  { 1095, 1, 100, 1, 1444 },
  { 1101, 1, 100, 1, 1444 },
  { 1107, 1, 100, 1, 1444 },
  { 1113, 1, 100, 1, 1444 },
  { 909, 1, 98, 1, 1412 },
  { 915, 1, 98, 1, 1412 },
  { 921, 1, 98, 1, 1412 },
  { 927, 1, 98, 1, 1412 },
  { 933, 1, 98, 1, 1412 },
  { 939, 1, 98, 1, 1412 },
  { 945, 1, 98, 1, 1412 },
  { 951, 1, 98, 1, 1412 },
};

extern const MCPhysReg PPCRegUnitRoots[][2] = {
  { PPC::BP },
  { PPC::CARRY },
  { PPC::CC, PPC::CR0 },
  { PPC::CC, PPC::CR1 },
  { PPC::CC, PPC::CR2 },
  { PPC::CC, PPC::CR3 },
  { PPC::CC, PPC::CR4 },
  { PPC::CC, PPC::CR5 },
  { PPC::CC, PPC::CR6 },
  { PPC::CC, PPC::CR7 },
  { PPC::CTR },
  { PPC::FP },
  { PPC::LR },
  { PPC::RM },
  { PPC::VRSAVE },
  { PPC::ZERO },
  { PPC::CR0LT },
  { PPC::CR0GT },
  { PPC::CR0EQ },
  { PPC::CR0UN },
  { PPC::CR1LT },
  { PPC::CR1GT },
  { PPC::CR1EQ },
  { PPC::CR1UN },
  { PPC::CR2LT },
  { PPC::CR2GT },
  { PPC::CR2EQ },
  { PPC::CR2UN },
  { PPC::CR3LT },
  { PPC::CR3GT },
  { PPC::CR3EQ },
  { PPC::CR3UN },
  { PPC::CR4LT },
  { PPC::CR4GT },
  { PPC::CR4EQ },
  { PPC::CR4UN },
  { PPC::CR5LT },
  { PPC::CR5GT },
  { PPC::CR5EQ },
  { PPC::CR5UN },
  { PPC::CR6LT },
  { PPC::CR6GT },
  { PPC::CR6EQ },
  { PPC::CR6UN },
  { PPC::CR7LT },
  { PPC::CR7GT },
  { PPC::CR7EQ },
  { PPC::CR7UN },
  { PPC::CTR8 },
  { PPC::F0 },
  { PPC::F1 },
  { PPC::F2 },
  { PPC::F3 },
  { PPC::F4 },
  { PPC::F5 },
  { PPC::F6 },
  { PPC::F7 },
  { PPC::F8 },
  { PPC::F9 },
  { PPC::F10 },
  { PPC::F11 },
  { PPC::F12 },
  { PPC::F13 },
  { PPC::F14 },
  { PPC::F15 },
  { PPC::F16 },
  { PPC::F17 },
  { PPC::F18 },
  { PPC::F19 },
  { PPC::F20 },
  { PPC::F21 },
  { PPC::F22 },
  { PPC::F23 },
  { PPC::F24 },
  { PPC::F25 },
  { PPC::F26 },
  { PPC::F27 },
  { PPC::F28 },
  { PPC::F29 },
  { PPC::F30 },
  { PPC::F31 },
  { PPC::LR8 },
  { PPC::R0 },
  { PPC::R1 },
  { PPC::R2 },
  { PPC::R3 },
  { PPC::R4 },
  { PPC::R5 },
  { PPC::R6 },
  { PPC::R7 },
  { PPC::R8 },
  { PPC::R9 },
  { PPC::R10 },
  { PPC::R11 },
  { PPC::R12 },
  { PPC::R13 },
  { PPC::R14 },
  { PPC::R15 },
  { PPC::R16 },
  { PPC::R17 },
  { PPC::R18 },
  { PPC::R19 },
  { PPC::R20 },
  { PPC::R21 },
  { PPC::R22 },
  { PPC::R23 },
  { PPC::R24 },
  { PPC::R25 },
  { PPC::R26 },
  { PPC::R27 },
  { PPC::R28 },
  { PPC::R29 },
  { PPC::R30 },
  { PPC::R31 },
  { PPC::VF0 },
  { PPC::VF1 },
  { PPC::VF2 },
  { PPC::VF3 },
  { PPC::VF4 },
  { PPC::VF5 },
  { PPC::VF6 },
  { PPC::VF7 },
  { PPC::VF8 },
  { PPC::VF9 },
  { PPC::VF10 },
  { PPC::VF11 },
  { PPC::VF12 },
  { PPC::VF13 },
  { PPC::VF14 },
  { PPC::VF15 },
  { PPC::VF16 },
  { PPC::VF17 },
  { PPC::VF18 },
  { PPC::VF19 },
  { PPC::VF20 },
  { PPC::VF21 },
  { PPC::VF22 },
  { PPC::VF23 },
  { PPC::VF24 },
  { PPC::VF25 },
  { PPC::VF26 },
  { PPC::VF27 },
  { PPC::VF28 },
  { PPC::VF29 },
  { PPC::VF30 },
  { PPC::VF31 },
};

namespace {     // Register classes...
  // GPRC Register Class...
  const MCPhysReg GPRC[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R0, PPC::R1, PPC::FP, PPC::BP, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // GPRC_NOR0 Register Class...
  const MCPhysReg GPRC_NOR0[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R1, PPC::FP, PPC::BP, PPC::ZERO, 
  };

  // GPRC_NOR0 Bit set.
  const uint8_t GPRC_NOR0Bits[] = {
    0x22, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x3f, 
  };

  // GPRC_and_GPRC_NOR0 Register Class...
  const MCPhysReg GPRC_and_GPRC_NOR0[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R1, PPC::FP, PPC::BP, 
  };

  // GPRC_and_GPRC_NOR0 Bit set.
  const uint8_t GPRC_and_GPRC_NOR0Bits[] = {
    0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x3f, 
  };

  // CRBITRC Register Class...
  const MCPhysReg CRBITRC[] = {
    PPC::CR2LT, PPC::CR2GT, PPC::CR2EQ, PPC::CR2UN, PPC::CR3LT, PPC::CR3GT, PPC::CR3EQ, PPC::CR3UN, PPC::CR4LT, PPC::CR4GT, PPC::CR4EQ, PPC::CR4UN, PPC::CR5LT, PPC::CR5GT, PPC::CR5EQ, PPC::CR5UN, PPC::CR6LT, PPC::CR6GT, PPC::CR6EQ, PPC::CR6UN, PPC::CR7LT, PPC::CR7GT, PPC::CR7EQ, PPC::CR7UN, PPC::CR1LT, PPC::CR1GT, PPC::CR1EQ, PPC::CR1UN, PPC::CR0LT, PPC::CR0GT, PPC::CR0EQ, PPC::CR0UN, 
  };

  // CRBITRC Bit set.
  const uint8_t CRBITRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 
  };

  // F4RC Register Class...
  const MCPhysReg F4RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F4RC Bit set.
  const uint8_t F4RCBits[] = {
    0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // CRRC Register Class...
  const MCPhysReg CRRC[] = {
    PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, PPC::CR2, PPC::CR3, PPC::CR4, 
  };

  // CRRC Bit set.
  const uint8_t CRRCBits[] = {
    0x00, 0xf8, 0x07, 
  };

  // CARRYRC Register Class...
  const MCPhysReg CARRYRC[] = {
    PPC::CARRY, 
  };

  // CARRYRC Bit set.
  const uint8_t CARRYRCBits[] = {
    0x04, 
  };

  // CCRC Register Class...
  const MCPhysReg CCRC[] = {
    PPC::CC, 
  };

  // CCRC Bit set.
  const uint8_t CCRCBits[] = {
    0x08, 
  };

  // CTRRC Register Class...
  const MCPhysReg CTRRC[] = {
    PPC::CTR, 
  };

  // CTRRC Bit set.
  const uint8_t CTRRCBits[] = {
    0x10, 
  };

  // VRSAVERC Register Class...
  const MCPhysReg VRSAVERC[] = {
    PPC::VRSAVE, 
  };

  // VRSAVERC Bit set.
  const uint8_t VRSAVERCBits[] = {
    0x00, 0x01, 
  };

  // VSFRC Register Class...
  const MCPhysReg VSFRC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, PPC::VF2, PPC::VF3, PPC::VF4, PPC::VF5, PPC::VF0, PPC::VF1, PPC::VF6, PPC::VF7, PPC::VF8, PPC::VF9, PPC::VF10, PPC::VF11, PPC::VF12, PPC::VF13, PPC::VF14, PPC::VF15, PPC::VF16, PPC::VF17, PPC::VF18, PPC::VF19, PPC::VF31, PPC::VF30, PPC::VF29, PPC::VF28, PPC::VF27, PPC::VF26, PPC::VF25, PPC::VF24, PPC::VF23, PPC::VF22, PPC::VF21, PPC::VF20, 
  };

  // VSFRC Bit set.
  const uint8_t VSFRCBits[] = {
    0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // G8RC Register Class...
  const MCPhysReg G8RC[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X0, PPC::X1, PPC::FP8, PPC::BP8, 
  };

  // G8RC Bit set.
  const uint8_t G8RCBits[] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // G8RC_NOX0 Register Class...
  const MCPhysReg G8RC_NOX0[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X1, PPC::FP8, PPC::BP8, PPC::ZERO8, 
  };

  // G8RC_NOX0 Bit set.
  const uint8_t G8RC_NOX0Bits[] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 
  };

  // G8RC_and_G8RC_NOX0 Register Class...
  const MCPhysReg G8RC_and_G8RC_NOX0[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X1, PPC::FP8, PPC::BP8, 
  };

  // G8RC_and_G8RC_NOX0 Bit set.
  const uint8_t G8RC_and_G8RC_NOX0Bits[] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x3f, 
  };

  // F8RC Register Class...
  const MCPhysReg F8RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F8RC Bit set.
  const uint8_t F8RCBits[] = {
    0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // VFRC Register Class...
  const MCPhysReg VFRC[] = {
    PPC::VF2, PPC::VF3, PPC::VF4, PPC::VF5, PPC::VF0, PPC::VF1, PPC::VF6, PPC::VF7, PPC::VF8, PPC::VF9, PPC::VF10, PPC::VF11, PPC::VF12, PPC::VF13, PPC::VF14, PPC::VF15, PPC::VF16, PPC::VF17, PPC::VF18, PPC::VF19, PPC::VF31, PPC::VF30, PPC::VF29, PPC::VF28, PPC::VF27, PPC::VF26, PPC::VF25, PPC::VF24, PPC::VF23, PPC::VF22, PPC::VF21, PPC::VF20, 
  };

  // VFRC Bit set.
  const uint8_t VFRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // CTRRC8 Register Class...
  const MCPhysReg CTRRC8[] = {
    PPC::CTR8, 
  };

  // CTRRC8 Bit set.
  const uint8_t CTRRC8Bits[] = {
    0x00, 0x00, 0x08, 
  };

  // VSRC Register Class...
  const MCPhysReg VSRC[] = {
    PPC::VSL0, PPC::VSL1, PPC::VSL2, PPC::VSL3, PPC::VSL4, PPC::VSL5, PPC::VSL6, PPC::VSL7, PPC::VSL8, PPC::VSL9, PPC::VSL10, PPC::VSL11, PPC::VSL12, PPC::VSL13, PPC::VSL31, PPC::VSL30, PPC::VSL29, PPC::VSL28, PPC::VSL27, PPC::VSL26, PPC::VSL25, PPC::VSL24, PPC::VSL23, PPC::VSL22, PPC::VSL21, PPC::VSL20, PPC::VSL19, PPC::VSL18, PPC::VSL17, PPC::VSL16, PPC::VSL15, PPC::VSL14, PPC::VSH2, PPC::VSH3, PPC::VSH4, PPC::VSH5, PPC::VSH0, PPC::VSH1, PPC::VSH6, PPC::VSH7, PPC::VSH8, PPC::VSH9, PPC::VSH10, PPC::VSH11, PPC::VSH12, PPC::VSH13, PPC::VSH14, PPC::VSH15, PPC::VSH16, PPC::VSH17, PPC::VSH18, PPC::VSH19, PPC::VSH31, PPC::VSH30, PPC::VSH29, PPC::VSH28, PPC::VSH27, PPC::VSH26, PPC::VSH25, PPC::VSH24, PPC::VSH23, PPC::VSH22, PPC::VSH21, PPC::VSH20, 
  };

  // VSRC Bit set.
  const uint8_t VSRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 
  };

  // VRRC Register Class...
  const MCPhysReg VRRC[] = {
    PPC::V2, PPC::V3, PPC::V4, PPC::V5, PPC::V0, PPC::V1, PPC::V6, PPC::V7, PPC::V8, PPC::V9, PPC::V10, PPC::V11, PPC::V12, PPC::V13, PPC::V14, PPC::V15, PPC::V16, PPC::V17, PPC::V18, PPC::V19, PPC::V31, PPC::V30, PPC::V29, PPC::V28, PPC::V27, PPC::V26, PPC::V25, PPC::V24, PPC::V23, PPC::V22, PPC::V21, PPC::V20, 
  };

  // VRRC Bit set.
  const uint8_t VRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // VSHRC Register Class...
  const MCPhysReg VSHRC[] = {
    PPC::VSH2, PPC::VSH3, PPC::VSH4, PPC::VSH5, PPC::VSH0, PPC::VSH1, PPC::VSH6, PPC::VSH7, PPC::VSH8, PPC::VSH9, PPC::VSH10, PPC::VSH11, PPC::VSH12, PPC::VSH13, PPC::VSH14, PPC::VSH15, PPC::VSH16, PPC::VSH17, PPC::VSH18, PPC::VSH19, PPC::VSH31, PPC::VSH30, PPC::VSH29, PPC::VSH28, PPC::VSH27, PPC::VSH26, PPC::VSH25, PPC::VSH24, PPC::VSH23, PPC::VSH22, PPC::VSH21, PPC::VSH20, 
  };

  // VSHRC Bit set.
  const uint8_t VSHRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // VSLRC Register Class...
  const MCPhysReg VSLRC[] = {
    PPC::VSL0, PPC::VSL1, PPC::VSL2, PPC::VSL3, PPC::VSL4, PPC::VSL5, PPC::VSL6, PPC::VSL7, PPC::VSL8, PPC::VSL9, PPC::VSL10, PPC::VSL11, PPC::VSL12, PPC::VSL13, PPC::VSL31, PPC::VSL30, PPC::VSL29, PPC::VSL28, PPC::VSL27, PPC::VSL26, PPC::VSL25, PPC::VSL24, PPC::VSL23, PPC::VSL22, PPC::VSL21, PPC::VSL20, PPC::VSL19, PPC::VSL18, PPC::VSL17, PPC::VSL16, PPC::VSL15, PPC::VSL14, 
  };

  // VSLRC Bit set.
  const uint8_t VSLRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

}

extern const MCRegisterClass PPCMCRegisterClasses[] = {
  { "GPRC", GPRC, GPRCBits, 34, sizeof(GPRCBits), PPC::GPRCRegClassID, 4, 4, 1, 1 },
  { "GPRC_NOR0", GPRC_NOR0, GPRC_NOR0Bits, 34, sizeof(GPRC_NOR0Bits), PPC::GPRC_NOR0RegClassID, 4, 4, 1, 1 },
  { "GPRC_and_GPRC_NOR0", GPRC_and_GPRC_NOR0, GPRC_and_GPRC_NOR0Bits, 33, sizeof(GPRC_and_GPRC_NOR0Bits), PPC::GPRC_and_GPRC_NOR0RegClassID, 4, 4, 1, 1 },
  { "CRBITRC", CRBITRC, CRBITRCBits, 32, sizeof(CRBITRCBits), PPC::CRBITRCRegClassID, 4, 4, 1, 1 },
  { "F4RC", F4RC, F4RCBits, 32, sizeof(F4RCBits), PPC::F4RCRegClassID, 4, 4, 1, 1 },
  { "CRRC", CRRC, CRRCBits, 8, sizeof(CRRCBits), PPC::CRRCRegClassID, 4, 4, 1, 1 },
  { "CARRYRC", CARRYRC, CARRYRCBits, 1, sizeof(CARRYRCBits), PPC::CARRYRCRegClassID, 4, 4, -1, 1 },
  { "CCRC", CCRC, CCRCBits, 1, sizeof(CCRCBits), PPC::CCRCRegClassID, 4, 4, 1, 0 },
  { "CTRRC", CTRRC, CTRRCBits, 1, sizeof(CTRRCBits), PPC::CTRRCRegClassID, 4, 4, 1, 0 },
  { "VRSAVERC", VRSAVERC, VRSAVERCBits, 1, sizeof(VRSAVERCBits), PPC::VRSAVERCRegClassID, 4, 4, 1, 1 },
  { "VSFRC", VSFRC, VSFRCBits, 64, sizeof(VSFRCBits), PPC::VSFRCRegClassID, 8, 8, 1, 1 },
  { "G8RC", G8RC, G8RCBits, 34, sizeof(G8RCBits), PPC::G8RCRegClassID, 8, 8, 1, 1 },
  { "G8RC_NOX0", G8RC_NOX0, G8RC_NOX0Bits, 34, sizeof(G8RC_NOX0Bits), PPC::G8RC_NOX0RegClassID, 8, 8, 1, 1 },
  { "G8RC_and_G8RC_NOX0", G8RC_and_G8RC_NOX0, G8RC_and_G8RC_NOX0Bits, 33, sizeof(G8RC_and_G8RC_NOX0Bits), PPC::G8RC_and_G8RC_NOX0RegClassID, 8, 8, 1, 1 },
  { "F8RC", F8RC, F8RCBits, 32, sizeof(F8RCBits), PPC::F8RCRegClassID, 8, 8, 1, 1 },
  { "VFRC", VFRC, VFRCBits, 32, sizeof(VFRCBits), PPC::VFRCRegClassID, 8, 8, 1, 1 },
  { "CTRRC8", CTRRC8, CTRRC8Bits, 1, sizeof(CTRRC8Bits), PPC::CTRRC8RegClassID, 8, 8, 1, 0 },
  { "VSRC", VSRC, VSRCBits, 64, sizeof(VSRCBits), PPC::VSRCRegClassID, 16, 16, 1, 1 },
  { "VRRC", VRRC, VRRCBits, 32, sizeof(VRRCBits), PPC::VRRCRegClassID, 16, 16, 1, 1 },
  { "VSHRC", VSHRC, VSHRCBits, 32, sizeof(VSHRCBits), PPC::VSHRCRegClassID, 16, 16, 1, 1 },
  { "VSLRC", VSLRC, VSLRCBits, 32, sizeof(VSLRCBits), PPC::VSLRCRegClassID, 16, 16, 1, 1 },
};

// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCDwarfFlavour0Dwarf2LSize = sizeof(PPCDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCDwarfFlavour1Dwarf2LSize = sizeof(PPCDwarfFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCEHFlavour0Dwarf2LSize = sizeof(PPCEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCEHFlavour1Dwarf2LSize = sizeof(PPCEHFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[] = {
  { PPC::CC, 68U },
  { PPC::CTR, -2U },
  { PPC::LR, -2U },
  { PPC::VRSAVE, 109U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VSH0, 77U },
  { PPC::VSH1, 78U },
  { PPC::VSH2, 79U },
  { PPC::VSH3, 80U },
  { PPC::VSH4, 81U },
  { PPC::VSH5, 82U },
  { PPC::VSH6, 83U },
  { PPC::VSH7, 84U },
  { PPC::VSH8, 85U },
  { PPC::VSH9, 86U },
  { PPC::VSH10, 87U },
  { PPC::VSH11, 88U },
  { PPC::VSH12, 89U },
  { PPC::VSH13, 90U },
  { PPC::VSH14, 91U },
  { PPC::VSH15, 92U },
  { PPC::VSH16, 93U },
  { PPC::VSH17, 94U },
  { PPC::VSH18, 95U },
  { PPC::VSH19, 96U },
  { PPC::VSH20, 97U },
  { PPC::VSH21, 98U },
  { PPC::VSH22, 99U },
  { PPC::VSH23, 100U },
  { PPC::VSH24, 101U },
  { PPC::VSH25, 102U },
  { PPC::VSH26, 103U },
  { PPC::VSH27, 104U },
  { PPC::VSH28, 105U },
  { PPC::VSH29, 106U },
  { PPC::VSH30, 107U },
  { PPC::VSH31, 108U },
  { PPC::VSL0, 32U },
  { PPC::VSL1, 33U },
  { PPC::VSL2, 34U },
  { PPC::VSL3, 35U },
  { PPC::VSL4, 36U },
  { PPC::VSL5, 37U },
  { PPC::VSL6, 38U },
  { PPC::VSL7, 39U },
  { PPC::VSL8, 40U },
  { PPC::VSL9, 41U },
  { PPC::VSL10, 42U },
  { PPC::VSL11, 43U },
  { PPC::VSL12, 44U },
  { PPC::VSL13, 45U },
  { PPC::VSL14, 46U },
  { PPC::VSL15, 47U },
  { PPC::VSL16, 48U },
  { PPC::VSL17, 49U },
  { PPC::VSL18, 50U },
  { PPC::VSL19, 51U },
  { PPC::VSL20, 52U },
  { PPC::VSL21, 53U },
  { PPC::VSL22, 54U },
  { PPC::VSL23, 55U },
  { PPC::VSL24, 56U },
  { PPC::VSL25, 57U },
  { PPC::VSL26, 58U },
  { PPC::VSL27, 59U },
  { PPC::VSL28, 60U },
  { PPC::VSL29, 61U },
  { PPC::VSL30, 62U },
  { PPC::VSL31, 63U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCDwarfFlavour0L2DwarfSize = sizeof(PPCDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[] = {
  { PPC::CC, 68U },
  { PPC::CTR, 66U },
  { PPC::LR, 65U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VSH0, 77U },
  { PPC::VSH1, 78U },
  { PPC::VSH2, 79U },
  { PPC::VSH3, 80U },
  { PPC::VSH4, 81U },
  { PPC::VSH5, 82U },
  { PPC::VSH6, 83U },
  { PPC::VSH7, 84U },
  { PPC::VSH8, 85U },
  { PPC::VSH9, 86U },
  { PPC::VSH10, 87U },
  { PPC::VSH11, 88U },
  { PPC::VSH12, 89U },
  { PPC::VSH13, 90U },
  { PPC::VSH14, 91U },
  { PPC::VSH15, 92U },
  { PPC::VSH16, 93U },
  { PPC::VSH17, 94U },
  { PPC::VSH18, 95U },
  { PPC::VSH19, 96U },
  { PPC::VSH20, 97U },
  { PPC::VSH21, 98U },
  { PPC::VSH22, 99U },
  { PPC::VSH23, 100U },
  { PPC::VSH24, 101U },
  { PPC::VSH25, 102U },
  { PPC::VSH26, 103U },
  { PPC::VSH27, 104U },
  { PPC::VSH28, 105U },
  { PPC::VSH29, 106U },
  { PPC::VSH30, 107U },
  { PPC::VSH31, 108U },
  { PPC::VSL0, 32U },
  { PPC::VSL1, 33U },
  { PPC::VSL2, 34U },
  { PPC::VSL3, 35U },
  { PPC::VSL4, 36U },
  { PPC::VSL5, 37U },
  { PPC::VSL6, 38U },
  { PPC::VSL7, 39U },
  { PPC::VSL8, 40U },
  { PPC::VSL9, 41U },
  { PPC::VSL10, 42U },
  { PPC::VSL11, 43U },
  { PPC::VSL12, 44U },
  { PPC::VSL13, 45U },
  { PPC::VSL14, 46U },
  { PPC::VSL15, 47U },
  { PPC::VSL16, 48U },
  { PPC::VSL17, 49U },
  { PPC::VSL18, 50U },
  { PPC::VSL19, 51U },
  { PPC::VSL20, 52U },
  { PPC::VSL21, 53U },
  { PPC::VSL22, 54U },
  { PPC::VSL23, 55U },
  { PPC::VSL24, 56U },
  { PPC::VSL25, 57U },
  { PPC::VSL26, 58U },
  { PPC::VSL27, 59U },
  { PPC::VSL28, 60U },
  { PPC::VSL29, 61U },
  { PPC::VSL30, 62U },
  { PPC::VSL31, 63U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCDwarfFlavour1L2DwarfSize = sizeof(PPCDwarfFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[] = {
  { PPC::CC, 68U },
  { PPC::CTR, -2U },
  { PPC::LR, -2U },
  { PPC::VRSAVE, 109U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VSH0, 77U },
  { PPC::VSH1, 78U },
  { PPC::VSH2, 79U },
  { PPC::VSH3, 80U },
  { PPC::VSH4, 81U },
  { PPC::VSH5, 82U },
  { PPC::VSH6, 83U },
  { PPC::VSH7, 84U },
  { PPC::VSH8, 85U },
  { PPC::VSH9, 86U },
  { PPC::VSH10, 87U },
  { PPC::VSH11, 88U },
  { PPC::VSH12, 89U },
  { PPC::VSH13, 90U },
  { PPC::VSH14, 91U },
  { PPC::VSH15, 92U },
  { PPC::VSH16, 93U },
  { PPC::VSH17, 94U },
  { PPC::VSH18, 95U },
  { PPC::VSH19, 96U },
  { PPC::VSH20, 97U },
  { PPC::VSH21, 98U },
  { PPC::VSH22, 99U },
  { PPC::VSH23, 100U },
  { PPC::VSH24, 101U },
  { PPC::VSH25, 102U },
  { PPC::VSH26, 103U },
  { PPC::VSH27, 104U },
  { PPC::VSH28, 105U },
  { PPC::VSH29, 106U },
  { PPC::VSH30, 107U },
  { PPC::VSH31, 108U },
  { PPC::VSL0, 32U },
  { PPC::VSL1, 33U },
  { PPC::VSL2, 34U },
  { PPC::VSL3, 35U },
  { PPC::VSL4, 36U },
  { PPC::VSL5, 37U },
  { PPC::VSL6, 38U },
  { PPC::VSL7, 39U },
  { PPC::VSL8, 40U },
  { PPC::VSL9, 41U },
  { PPC::VSL10, 42U },
  { PPC::VSL11, 43U },
  { PPC::VSL12, 44U },
  { PPC::VSL13, 45U },
  { PPC::VSL14, 46U },
  { PPC::VSL15, 47U },
  { PPC::VSL16, 48U },
  { PPC::VSL17, 49U },
  { PPC::VSL18, 50U },
  { PPC::VSL19, 51U },
  { PPC::VSL20, 52U },
  { PPC::VSL21, 53U },
  { PPC::VSL22, 54U },
  { PPC::VSL23, 55U },
  { PPC::VSL24, 56U },
  { PPC::VSL25, 57U },
  { PPC::VSL26, 58U },
  { PPC::VSL27, 59U },
  { PPC::VSL28, 60U },
  { PPC::VSL29, 61U },
  { PPC::VSL30, 62U },
  { PPC::VSL31, 63U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCEHFlavour0L2DwarfSize = sizeof(PPCEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[] = {
  { PPC::CC, 68U },
  { PPC::CTR, 66U },
  { PPC::LR, 65U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VSH0, 77U },
  { PPC::VSH1, 78U },
  { PPC::VSH2, 79U },
  { PPC::VSH3, 80U },
  { PPC::VSH4, 81U },
  { PPC::VSH5, 82U },
  { PPC::VSH6, 83U },
  { PPC::VSH7, 84U },
  { PPC::VSH8, 85U },
  { PPC::VSH9, 86U },
  { PPC::VSH10, 87U },
  { PPC::VSH11, 88U },
  { PPC::VSH12, 89U },
  { PPC::VSH13, 90U },
  { PPC::VSH14, 91U },
  { PPC::VSH15, 92U },
  { PPC::VSH16, 93U },
  { PPC::VSH17, 94U },
  { PPC::VSH18, 95U },
  { PPC::VSH19, 96U },
  { PPC::VSH20, 97U },
  { PPC::VSH21, 98U },
  { PPC::VSH22, 99U },
  { PPC::VSH23, 100U },
  { PPC::VSH24, 101U },
  { PPC::VSH25, 102U },
  { PPC::VSH26, 103U },
  { PPC::VSH27, 104U },
  { PPC::VSH28, 105U },
  { PPC::VSH29, 106U },
  { PPC::VSH30, 107U },
  { PPC::VSH31, 108U },
  { PPC::VSL0, 32U },
  { PPC::VSL1, 33U },
  { PPC::VSL2, 34U },
  { PPC::VSL3, 35U },
  { PPC::VSL4, 36U },
  { PPC::VSL5, 37U },
  { PPC::VSL6, 38U },
  { PPC::VSL7, 39U },
  { PPC::VSL8, 40U },
  { PPC::VSL9, 41U },
  { PPC::VSL10, 42U },
  { PPC::VSL11, 43U },
  { PPC::VSL12, 44U },
  { PPC::VSL13, 45U },
  { PPC::VSL14, 46U },
  { PPC::VSL15, 47U },
  { PPC::VSL16, 48U },
  { PPC::VSL17, 49U },
  { PPC::VSL18, 50U },
  { PPC::VSL19, 51U },
  { PPC::VSL20, 52U },
  { PPC::VSL21, 53U },
  { PPC::VSL22, 54U },
  { PPC::VSL23, 55U },
  { PPC::VSL24, 56U },
  { PPC::VSL25, 57U },
  { PPC::VSL26, 58U },
  { PPC::VSL27, 59U },
  { PPC::VSL28, 60U },
  { PPC::VSL29, 61U },
  { PPC::VSL30, 62U },
  { PPC::VSL31, 63U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCEHFlavour1L2DwarfSize = sizeof(PPCEHFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t PPCRegEncodingTable[] = {
  0,
  0,
  1,
  0,
  9,
  0,
  8,
  512,
  256,
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  9,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  8,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  33,
  34,
  35,
  36,
  37,
  38,
  39,
  40,
  41,
  42,
  43,
  44,
  45,
  46,
  47,
  48,
  49,
  50,
  51,
  52,
  53,
  54,
  55,
  56,
  57,
  58,
  59,
  60,
  61,
  62,
  63,
  32,
  33,
  34,
  35,
  36,
  37,
  38,
  39,
  40,
  41,
  42,
  43,
  44,
  45,
  46,
  47,
  48,
  49,
  50,
  51,
  52,
  53,
  54,
  55,
  56,
  57,
  58,
  59,
  60,
  61,
  62,
  63,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  6,
  10,
  14,
  18,
  22,
  26,
  30,
  1,
  5,
  9,
  13,
  17,
  21,
  25,
  29,
  0,
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  3,
  7,
  11,
  15,
  19,
  23,
  27,
  31,
};
static inline void InitPPCMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(PPCRegDesc, 279, RA, PC, PPCMCRegisterClasses, 21, PPCRegUnitRoots, 146, PPCRegDiffLists, PPCRegStrings, PPCSubRegIdxLists, 8,
PPCSubRegIdxRanges,   PPCRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Register Information Header Fragment                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct PPCGenRegisterInfo : public TargetRegisterInfo {
  explicit PPCGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  bool needsStackRealignment(const MachineFunction &) const override
     { return false; }
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
};

namespace PPC { // Register classes
  extern const TargetRegisterClass GPRCRegClass;
  extern const TargetRegisterClass GPRC_NOR0RegClass;
  extern const TargetRegisterClass GPRC_and_GPRC_NOR0RegClass;
  extern const TargetRegisterClass CRBITRCRegClass;
  extern const TargetRegisterClass F4RCRegClass;
  extern const TargetRegisterClass CRRCRegClass;
  extern const TargetRegisterClass CARRYRCRegClass;
  extern const TargetRegisterClass CCRCRegClass;
  extern const TargetRegisterClass CTRRCRegClass;
  extern const TargetRegisterClass VRSAVERCRegClass;
  extern const TargetRegisterClass VSFRCRegClass;
  extern const TargetRegisterClass G8RCRegClass;
  extern const TargetRegisterClass G8RC_NOX0RegClass;
  extern const TargetRegisterClass G8RC_and_G8RC_NOX0RegClass;
  extern const TargetRegisterClass F8RCRegClass;
  extern const TargetRegisterClass VFRCRegClass;
  extern const TargetRegisterClass CTRRC8RegClass;
  extern const TargetRegisterClass VSRCRegClass;
  extern const TargetRegisterClass VRRCRegClass;
  extern const TargetRegisterClass VSHRCRegClass;
  extern const TargetRegisterClass VSLRCRegClass;
} // end of namespace PPC

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register and Register Classes Information                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass PPCMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i32, MVT::Other,
  /* 4 */ MVT::i64, MVT::Other,
  /* 6 */ MVT::f32, MVT::Other,
  /* 8 */ MVT::f64, MVT::Other,
  /* 10 */ MVT::v4i32, MVT::v4f32, MVT::v2f64, MVT::v2i64, MVT::Other,
  /* 15 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v4f32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "sub_64", "sub_128", "sub_eq", "sub_gt", "sub_lt", "sub_un" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_32
  0x00000002, // sub_64
  0x00000002, // sub_128
  0x00000004, // sub_eq
  0x00000008, // sub_gt
  0x00000010, // sub_lt
  0x00000020, // sub_un
 };



static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GPRCSubClassMask[] = {
  0x00000005, 
  0x00002800, // sub_32
};

static const uint32_t GPRC_NOR0SubClassMask[] = {
  0x00000006, 
  0x00003000, // sub_32
};

static const uint32_t GPRC_and_GPRC_NOR0SubClassMask[] = {
  0x00000004, 
  0x00002000, // sub_32
};

static const uint32_t CRBITRCSubClassMask[] = {
  0x00000008, 
  0x00000020, // sub_eq
  0x00000020, // sub_gt
  0x00000020, // sub_lt
  0x00000020, // sub_un
};

static const uint32_t F4RCSubClassMask[] = {
  0x00004010, 
  0x00100000, // sub_64
};

static const uint32_t CRRCSubClassMask[] = {
  0x00000020, 
};

static const uint32_t CARRYRCSubClassMask[] = {
  0x00000040, 
};

static const uint32_t CCRCSubClassMask[] = {
  0x00000080, 
};

static const uint32_t CTRRCSubClassMask[] = {
  0x00000100, 
};

static const uint32_t VRSAVERCSubClassMask[] = {
  0x00000200, 
};

static const uint32_t VSFRCSubClassMask[] = {
  0x0000c400, 
  0x001e0000, // sub_64
};

static const uint32_t G8RCSubClassMask[] = {
  0x00002800, 
};

static const uint32_t G8RC_NOX0SubClassMask[] = {
  0x00003000, 
};

static const uint32_t G8RC_and_G8RC_NOX0SubClassMask[] = {
  0x00002000, 
};

static const uint32_t F8RCSubClassMask[] = {
  0x00004000, 
  0x00100000, // sub_64
};

static const uint32_t VFRCSubClassMask[] = {
  0x00008000, 
  0x000c0000, // sub_64
};

static const uint32_t CTRRC8SubClassMask[] = {
  0x00010000, 
};

static const uint32_t VSRCSubClassMask[] = {
  0x001a0000, 
};

static const uint32_t VRRCSubClassMask[] = {
  0x00040000, 
  0x00080000, // sub_128
};

static const uint32_t VSHRCSubClassMask[] = {
  0x00080000, 
};

static const uint32_t VSLRCSubClassMask[] = {
  0x00100000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 0,
  /* 4 */ 3, 0,
  /* 6 */ 4, 5, 6, 7, 0,
};

static const TargetRegisterClass *const GPRC_and_GPRC_NOR0Superclasses[] = {
  &PPC::GPRCRegClass,
  &PPC::GPRC_NOR0RegClass,
  nullptr
};

static const TargetRegisterClass *const G8RC_and_G8RC_NOX0Superclasses[] = {
  &PPC::G8RCRegClass,
  &PPC::G8RC_NOX0RegClass,
  nullptr
};

static const TargetRegisterClass *const F8RCSuperclasses[] = {
  &PPC::F4RCRegClass,
  &PPC::VSFRCRegClass,
  nullptr
};

static const TargetRegisterClass *const VFRCSuperclasses[] = {
  &PPC::VSFRCRegClass,
  nullptr
};

static const TargetRegisterClass *const VSHRCSuperclasses[] = {
  &PPC::VSRCRegClass,
  nullptr
};

static const TargetRegisterClass *const VSLRCSuperclasses[] = {
  &PPC::VSRCRegClass,
  nullptr
};

namespace PPC {   // Register class instances
  extern const TargetRegisterClass GPRCRegClass = {
    &PPCMCRegisterClasses[GPRCRegClassID],
    VTLists + 2,
    GPRCSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPRC_NOR0RegClass = {
    &PPCMCRegisterClasses[GPRC_NOR0RegClassID],
    VTLists + 2,
    GPRC_NOR0SubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPRC_and_GPRC_NOR0RegClass = {
    &PPCMCRegisterClasses[GPRC_and_GPRC_NOR0RegClassID],
    VTLists + 2,
    GPRC_and_GPRC_NOR0SubClassMask,
    SuperRegIdxSeqs + 0,
    GPRC_and_GPRC_NOR0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CRBITRCRegClass = {
    &PPCMCRegisterClasses[CRBITRCRegClassID],
    VTLists + 0,
    CRBITRCSubClassMask,
    SuperRegIdxSeqs + 6,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass F4RCRegClass = {
    &PPCMCRegisterClasses[F4RCRegClassID],
    VTLists + 6,
    F4RCSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CRRCRegClass = {
    &PPCMCRegisterClasses[CRRCRegClassID],
    VTLists + 2,
    CRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CARRYRCRegClass = {
    &PPCMCRegisterClasses[CARRYRCRegClassID],
    VTLists + 2,
    CARRYRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CCRCRegClass = {
    &PPCMCRegisterClasses[CCRCRegClassID],
    VTLists + 2,
    CCRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CTRRCRegClass = {
    &PPCMCRegisterClasses[CTRRCRegClassID],
    VTLists + 2,
    CTRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VRSAVERCRegClass = {
    &PPCMCRegisterClasses[VRSAVERCRegClassID],
    VTLists + 2,
    VRSAVERCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VSFRCRegClass = {
    &PPCMCRegisterClasses[VSFRCRegClassID],
    VTLists + 8,
    VSFRCSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass G8RCRegClass = {
    &PPCMCRegisterClasses[G8RCRegClassID],
    VTLists + 4,
    G8RCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass G8RC_NOX0RegClass = {
    &PPCMCRegisterClasses[G8RC_NOX0RegClassID],
    VTLists + 4,
    G8RC_NOX0SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass G8RC_and_G8RC_NOX0RegClass = {
    &PPCMCRegisterClasses[G8RC_and_G8RC_NOX0RegClassID],
    VTLists + 4,
    G8RC_and_G8RC_NOX0SubClassMask,
    SuperRegIdxSeqs + 1,
    G8RC_and_G8RC_NOX0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass F8RCRegClass = {
    &PPCMCRegisterClasses[F8RCRegClassID],
    VTLists + 8,
    F8RCSubClassMask,
    SuperRegIdxSeqs + 2,
    F8RCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VFRCRegClass = {
    &PPCMCRegisterClasses[VFRCRegClassID],
    VTLists + 8,
    VFRCSubClassMask,
    SuperRegIdxSeqs + 2,
    VFRCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CTRRC8RegClass = {
    &PPCMCRegisterClasses[CTRRC8RegClassID],
    VTLists + 4,
    CTRRC8SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VSRCRegClass = {
    &PPCMCRegisterClasses[VSRCRegClassID],
    VTLists + 10,
    VSRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VRRCRegClass = {
    &PPCMCRegisterClasses[VRRCRegClassID],
    VTLists + 15,
    VRRCSubClassMask,
    SuperRegIdxSeqs + 4,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VSHRCRegClass = {
    &PPCMCRegisterClasses[VSHRCRegClassID],
    VTLists + 10,
    VSHRCSubClassMask,
    SuperRegIdxSeqs + 1,
    VSHRCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VSLRCRegClass = {
    &PPCMCRegisterClasses[VSLRCRegClassID],
    VTLists + 10,
    VSLRCSubClassMask,
    SuperRegIdxSeqs + 1,
    VSLRCSuperclasses,
    nullptr
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &PPC::GPRCRegClass,
    &PPC::GPRC_NOR0RegClass,
    &PPC::GPRC_and_GPRC_NOR0RegClass,
    &PPC::CRBITRCRegClass,
    &PPC::F4RCRegClass,
    &PPC::CRRCRegClass,
    &PPC::CARRYRCRegClass,
    &PPC::CCRCRegClass,
    &PPC::CTRRCRegClass,
    &PPC::VRSAVERCRegClass,
    &PPC::VSFRCRegClass,
    &PPC::G8RCRegClass,
    &PPC::G8RC_NOX0RegClass,
    &PPC::G8RC_and_G8RC_NOX0RegClass,
    &PPC::F8RCRegClass,
    &PPC::VFRCRegClass,
    &PPC::CTRRC8RegClass,
    &PPC::VSRCRegClass,
    &PPC::VRRCRegClass,
    &PPC::VSHRCRegClass,
    &PPC::VSLRCRegClass,
  };
}

static const TargetRegisterInfoDesc PPCRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned PPCGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][7] = {
    { 0, 2, 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 7);
  --IdxB; assert(IdxB < 7);
  return Rows[0][IdxB];
}

const TargetRegisterClass *PPCGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[21][7] = {
    {	// GPRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// GPRC_NOR0
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// GPRC_and_GPRC_NOR0
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRBITRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F4RC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      6,	// sub_eq -> CRRC
      6,	// sub_gt -> CRRC
      6,	// sub_lt -> CRRC
      6,	// sub_un -> CRRC
    },
    {	// CARRYRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CCRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRSAVERC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VSFRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC
      12,	// sub_32 -> G8RC
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_NOX0
      13,	// sub_32 -> G8RC_NOX0
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_and_G8RC_NOX0
      14,	// sub_32 -> G8RC_and_G8RC_NOX0
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F8RC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VFRC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC8
      0,	// sub_32
      0,	// sub_64
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VSRC
      0,	// sub_32
      18,	// sub_64 -> VSRC
      20,	// sub_128 -> VSHRC
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRRC
      0,	// sub_32
      19,	// sub_64 -> VRRC
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VSHRC
      0,	// sub_32
      20,	// sub_64 -> VSHRC
      20,	// sub_128 -> VSHRC
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VSLRC
      0,	// sub_32
      21,	// sub_64 -> VSLRC
      0,	// sub_128
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 7 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &PPCGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 34},  	// GPRC
    {1, 34},  	// GPRC_NOR0
    {1, 33},  	// GPRC_and_GPRC_NOR0
    {1, 32},  	// CRBITRC
    {1, 32},  	// F4RC
    {5, 40},  	// CRRC
    {1, 1},  	// CARRYRC
    {8, 8},  	// CCRC
    {0, 0},  	// CTRRC
    {1, 1},  	// VRSAVERC
    {1, 64},  	// VSFRC
    {1, 34},  	// G8RC
    {1, 34},  	// G8RC_NOX0
    {1, 33},  	// G8RC_and_G8RC_NOX0
    {1, 32},  	// F8RC
    {1, 32},  	// VFRC
    {0, 0},  	// CTRRC8
    {1, 64},  	// VSRC
    {1, 32},  	// VRRC
    {1, 32},  	// VSHRC
    {1, 32},  	// VSLRC
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned PPCGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 146 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned PPCGenRegisterInfo::getNumRegPressureSets() const {
  return 8;
}

// Get the name of this register unit pressure set.
const char *PPCGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "CARRYRC",
    "VRSAVERC",
    "CRBITRC",
    "F4RC",
    "VFRC",
    "GPRC+GPRC_NOR0",
    "CRRC",
    "VSFRC",
    nullptr };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned PPCGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    1,  	// 0: CARRYRC
    1,  	// 1: VRSAVERC
    32,  	// 2: CRBITRC
    32,  	// 3: F4RC
    32,  	// 4: VFRC
    35,  	// 5: GPRC+GPRC_NOR0
    40,  	// 6: CRRC
    64,  	// 7: VSFRC
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    5,  -1,  	// #0 GPRC
    5,  -1,  	// #2 GPRC_NOR0
    5,  -1,  	// #4 GPRC_and_GPRC_NOR0
    2,  6,  -1,  	// #6 CRBITRC
    3,  7,  -1,  	// #9 F4RC
    6,  -1,  	// #12 CRRC
    0,  -1,  	// #14 CARRYRC
    -1,  	// #16 CCRC
    -1,  	// #17 CTRRC
    1,  -1,  	// #18 VRSAVERC
    7,  -1,  	// #20 VSFRC
    5,  -1,  	// #22 G8RC
    5,  -1,  	// #24 G8RC_NOX0
    5,  -1,  	// #26 G8RC_and_G8RC_NOX0
    3,  7,  -1,  	// #28 F8RC
    4,  7,  -1,  	// #31 VFRC
    -1,  	// #34 CTRRC8
    7,  -1,  	// #35 VSRC
    4,  7,  -1,  	// #37 VRRC
    4,  7,  -1,  	// #40 VSHRC
    3,  7,  -1,  	// #43 VSLRC
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,9,12,14,16,17,18,20,22,24,26,28,31,34,35,37,40,43,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 146 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    0,14,12,12,12,12,12,12,12,12,16,0,16,16,18,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,16,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc PPCRegDesc[];
extern const MCPhysReg PPCRegDiffLists[];
extern const char PPCRegStrings[];
extern const MCPhysReg PPCRegUnitRoots[][2];
extern const uint16_t PPCSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits PPCSubRegIdxRanges[];
extern const uint16_t PPCRegEncodingTable[];
// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[];
extern const unsigned PPCDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[];
extern const unsigned PPCDwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[];
extern const unsigned PPCEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[];
extern const unsigned PPCEHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[];
extern const unsigned PPCDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[];
extern const unsigned PPCDwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[];
extern const unsigned PPCEHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[];
extern const unsigned PPCEHFlavour1L2DwarfSize;

PPCGenRegisterInfo::
PPCGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(PPCRegInfoDesc, RegisterClasses, RegisterClasses+21,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffc0) {
  InitMCRegisterInfo(PPCRegDesc, 279, RA, PC,
                     PPCMCRegisterClasses, 21,
                     PPCRegUnitRoots,
                     146,
                     PPCRegDiffLists,
                     PPCRegStrings,
                     PPCSubRegIdxLists,
                     8,
                     PPCSubRegIdxRanges,
                     PPCRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_Altivec_SaveList[] = { PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Altivec_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x003ffc00, 0x003ffc00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin32_SaveList[] = { PPC::R13, PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_Darwin32_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0e000000, 0x000e0e0e, };
static const MCPhysReg CSR_Darwin32_Altivec_SaveList[] = { PPC::R13, PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin32_Altivec_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff8, 0x003ffc00, 0x003ffc00, 0x00000000, 0x00000000, 0x0e000000, 0x000e0e0e, };
static const MCPhysReg CSR_Darwin64_SaveList[] = { PPC::X13, PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_Darwin64_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0e3ffff8, 0x000e0e0e, };
static const MCPhysReg CSR_Darwin64_Altivec_SaveList[] = { PPC::X13, PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin64_Altivec_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff8, 0x003ffc00, 0x003ffc00, 0x00000000, 0x00000000, 0x0e3ffff8, 0x000e0e0e, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SVR432_SaveList[] = { PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_SVR432_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0e000000, 0x000e0e0e, };
static const MCPhysReg CSR_SVR432_Altivec_SaveList[] = { PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR432_Altivec_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff0, 0x003ffc00, 0x003ffc00, 0x00000000, 0x00000000, 0x0e000000, 0x000e0e0e, };
static const MCPhysReg CSR_SVR464_SaveList[] = { PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_SVR464_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0e3ffff0, 0x000e0e0e, };
static const MCPhysReg CSR_SVR464_Altivec_SaveList[] = { PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR464_Altivec_RegMask[] = { 0x0000e000, 0x000ffffc, 0x003ffff0, 0x003ffc00, 0x003ffc00, 0x00000000, 0x00000000, 0x0e3ffff0, 0x000e0e0e, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

