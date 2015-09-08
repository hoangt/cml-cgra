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
extern const MCRegisterClass X86MCRegisterClasses[];

namespace X86 {
enum {
  NoRegister,
  AH = 1,
  AL = 2,
  AX = 3,
  BH = 4,
  BL = 5,
  BP = 6,
  BPL = 7,
  BX = 8,
  CH = 9,
  CL = 10,
  CS = 11,
  CX = 12,
  DH = 13,
  DI = 14,
  DIL = 15,
  DL = 16,
  DS = 17,
  DX = 18,
  EAX = 19,
  EBP = 20,
  EBX = 21,
  ECX = 22,
  EDI = 23,
  EDX = 24,
  EFLAGS = 25,
  EIP = 26,
  EIZ = 27,
  ES = 28,
  ESI = 29,
  ESP = 30,
  FPSW = 31,
  FS = 32,
  GS = 33,
  IP = 34,
  RAX = 35,
  RBP = 36,
  RBX = 37,
  RCX = 38,
  RDI = 39,
  RDX = 40,
  RIP = 41,
  RIZ = 42,
  RSI = 43,
  RSP = 44,
  SI = 45,
  SIL = 46,
  SP = 47,
  SPL = 48,
  SS = 49,
  CR0 = 50,
  CR1 = 51,
  CR2 = 52,
  CR3 = 53,
  CR4 = 54,
  CR5 = 55,
  CR6 = 56,
  CR7 = 57,
  CR8 = 58,
  CR9 = 59,
  CR10 = 60,
  CR11 = 61,
  CR12 = 62,
  CR13 = 63,
  CR14 = 64,
  CR15 = 65,
  DR0 = 66,
  DR1 = 67,
  DR2 = 68,
  DR3 = 69,
  DR4 = 70,
  DR5 = 71,
  DR6 = 72,
  DR7 = 73,
  FP0 = 74,
  FP1 = 75,
  FP2 = 76,
  FP3 = 77,
  FP4 = 78,
  FP5 = 79,
  FP6 = 80,
  FP7 = 81,
  K0 = 82,
  K1 = 83,
  K2 = 84,
  K3 = 85,
  K4 = 86,
  K5 = 87,
  K6 = 88,
  K7 = 89,
  MM0 = 90,
  MM1 = 91,
  MM2 = 92,
  MM3 = 93,
  MM4 = 94,
  MM5 = 95,
  MM6 = 96,
  MM7 = 97,
  R8 = 98,
  R9 = 99,
  R10 = 100,
  R11 = 101,
  R12 = 102,
  R13 = 103,
  R14 = 104,
  R15 = 105,
  ST0 = 106,
  ST1 = 107,
  ST2 = 108,
  ST3 = 109,
  ST4 = 110,
  ST5 = 111,
  ST6 = 112,
  ST7 = 113,
  XMM0 = 114,
  XMM1 = 115,
  XMM2 = 116,
  XMM3 = 117,
  XMM4 = 118,
  XMM5 = 119,
  XMM6 = 120,
  XMM7 = 121,
  XMM8 = 122,
  XMM9 = 123,
  XMM10 = 124,
  XMM11 = 125,
  XMM12 = 126,
  XMM13 = 127,
  XMM14 = 128,
  XMM15 = 129,
  XMM16 = 130,
  XMM17 = 131,
  XMM18 = 132,
  XMM19 = 133,
  XMM20 = 134,
  XMM21 = 135,
  XMM22 = 136,
  XMM23 = 137,
  XMM24 = 138,
  XMM25 = 139,
  XMM26 = 140,
  XMM27 = 141,
  XMM28 = 142,
  XMM29 = 143,
  XMM30 = 144,
  XMM31 = 145,
  YMM0 = 146,
  YMM1 = 147,
  YMM2 = 148,
  YMM3 = 149,
  YMM4 = 150,
  YMM5 = 151,
  YMM6 = 152,
  YMM7 = 153,
  YMM8 = 154,
  YMM9 = 155,
  YMM10 = 156,
  YMM11 = 157,
  YMM12 = 158,
  YMM13 = 159,
  YMM14 = 160,
  YMM15 = 161,
  YMM16 = 162,
  YMM17 = 163,
  YMM18 = 164,
  YMM19 = 165,
  YMM20 = 166,
  YMM21 = 167,
  YMM22 = 168,
  YMM23 = 169,
  YMM24 = 170,
  YMM25 = 171,
  YMM26 = 172,
  YMM27 = 173,
  YMM28 = 174,
  YMM29 = 175,
  YMM30 = 176,
  YMM31 = 177,
  ZMM0 = 178,
  ZMM1 = 179,
  ZMM2 = 180,
  ZMM3 = 181,
  ZMM4 = 182,
  ZMM5 = 183,
  ZMM6 = 184,
  ZMM7 = 185,
  ZMM8 = 186,
  ZMM9 = 187,
  ZMM10 = 188,
  ZMM11 = 189,
  ZMM12 = 190,
  ZMM13 = 191,
  ZMM14 = 192,
  ZMM15 = 193,
  ZMM16 = 194,
  ZMM17 = 195,
  ZMM18 = 196,
  ZMM19 = 197,
  ZMM20 = 198,
  ZMM21 = 199,
  ZMM22 = 200,
  ZMM23 = 201,
  ZMM24 = 202,
  ZMM25 = 203,
  ZMM26 = 204,
  ZMM27 = 205,
  ZMM28 = 206,
  ZMM29 = 207,
  ZMM30 = 208,
  ZMM31 = 209,
  R8B = 210,
  R9B = 211,
  R10B = 212,
  R11B = 213,
  R12B = 214,
  R13B = 215,
  R14B = 216,
  R15B = 217,
  R8D = 218,
  R9D = 219,
  R10D = 220,
  R11D = 221,
  R12D = 222,
  R13D = 223,
  R14D = 224,
  R15D = 225,
  R8W = 226,
  R9W = 227,
  R10W = 228,
  R11W = 229,
  R12W = 230,
  R13W = 231,
  R14W = 232,
  R15W = 233,
  NUM_TARGET_REGS 	// 234
};
}

// Register classes
namespace X86 {
enum {
  GR8RegClassID = 0,
  GR8_NOREXRegClassID = 1,
  GR8_ABCD_HRegClassID = 2,
  GR8_ABCD_LRegClassID = 3,
  GR16RegClassID = 4,
  GR16_NOREXRegClassID = 5,
  VK1RegClassID = 6,
  VK16RegClassID = 7,
  VK2RegClassID = 8,
  VK4RegClassID = 9,
  VK8RegClassID = 10,
  VK16WMRegClassID = 11,
  VK1WMRegClassID = 12,
  VK2WMRegClassID = 13,
  VK4WMRegClassID = 14,
  VK8WMRegClassID = 15,
  SEGMENT_REGRegClassID = 16,
  GR16_ABCDRegClassID = 17,
  FPCCRRegClassID = 18,
  FR32XRegClassID = 19,
  FR32RegClassID = 20,
  GR32RegClassID = 21,
  GR32_NOAXRegClassID = 22,
  GR32_NOSPRegClassID = 23,
  GR32_NOAX_and_GR32_NOSPRegClassID = 24,
  DEBUG_REGRegClassID = 25,
  GR32_NOREXRegClassID = 26,
  VK32RegClassID = 27,
  GR32_NOAX_and_GR32_NOREXRegClassID = 28,
  GR32_NOREX_NOSPRegClassID = 29,
  RFP32RegClassID = 30,
  VK32WMRegClassID = 31,
  GR32_NOAX_and_GR32_NOREX_NOSPRegClassID = 32,
  GR32_ABCDRegClassID = 33,
  GR32_ABCD_and_GR32_NOAXRegClassID = 34,
  GR32_TCRegClassID = 35,
  GR32_ADRegClassID = 36,
  GR32_NOAX_and_GR32_TCRegClassID = 37,
  CCRRegClassID = 38,
  GR32_AD_and_GR32_NOAXRegClassID = 39,
  RFP64RegClassID = 40,
  FR64XRegClassID = 41,
  GR64RegClassID = 42,
  CONTROL_REGRegClassID = 43,
  FR64RegClassID = 44,
  GR64_with_sub_8bitRegClassID = 45,
  GR64_NOSPRegClassID = 46,
  GR64_with_sub_32bit_in_GR32_NOAXRegClassID = 47,
  GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClassID = 48,
  GR64_NOREXRegClassID = 49,
  GR64_TCRegClassID = 50,
  GR64_NOSP_and_GR64_TCRegClassID = 51,
  GR64_with_sub_16bit_in_GR16_NOREXRegClassID = 52,
  VK64RegClassID = 53,
  VR64RegClassID = 54,
  GR64_NOREX_NOSPRegClassID = 55,
  GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID = 56,
  GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID = 57,
  VK64WMRegClassID = 58,
  GR64_NOREX_and_GR64_TCRegClassID = 59,
  GR64_TCW64RegClassID = 60,
  GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClassID = 61,
  GR64_NOREX_NOSP_and_GR64_TCRegClassID = 62,
  GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID = 63,
  GR64_ABCDRegClassID = 64,
  GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID = 65,
  GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClassID = 66,
  GR64_with_sub_32bit_in_GR32_TCRegClassID = 67,
  GR64_with_sub_32bit_in_GR32_ADRegClassID = 68,
  GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClassID = 69,
  GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClassID = 70,
  RSTRegClassID = 71,
  RFP80RegClassID = 72,
  VR128XRegClassID = 73,
  VR128RegClassID = 74,
  VR256XRegClassID = 75,
  VR256RegClassID = 76,
  VR512RegClassID = 77,
  VR512_with_sub_xmm_in_FR32RegClassID = 78
  };
}

// Subregister indices
namespace X86 {
enum {
  NoSubRegister,
  sub_8bit,	// 1
  sub_8bit_hi,	// 2
  sub_16bit,	// 3
  sub_32bit,	// 4
  sub_xmm,	// 5
  sub_ymm,	// 6
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

extern const MCPhysReg X86RegDiffLists[] = {
  /* 0 */ 0, 1, 0,
  /* 3 */ 2, 1, 0,
  /* 6 */ 5, 1, 0,
  /* 9 */ 65522, 16, 1, 0,
  /* 13 */ 65522, 17, 1, 0,
  /* 17 */ 65427, 1, 0,
  /* 20 */ 65475, 1, 0,
  /* 23 */ 65520, 65522, 1, 0,
  /* 27 */ 65520, 65527, 1, 0,
  /* 31 */ 8, 2, 0,
  /* 34 */ 4, 0,
  /* 36 */ 65521, 8, 0,
  /* 39 */ 9, 0,
  /* 41 */ 13, 0,
  /* 43 */ 65535, 65519, 14, 0,
  /* 47 */ 65535, 65520, 14, 0,
  /* 51 */ 65528, 15, 0,
  /* 54 */ 2, 6, 16, 0,
  /* 58 */ 5, 6, 16, 0,
  /* 62 */ 65535, 9, 16, 0,
  /* 66 */ 2, 10, 16, 0,
  /* 70 */ 3, 10, 16, 0,
  /* 74 */ 3, 13, 16, 0,
  /* 78 */ 4, 13, 16, 0,
  /* 82 */ 65535, 14, 16, 0,
  /* 86 */ 1, 16, 16, 0,
  /* 90 */ 2, 16, 16, 0,
  /* 94 */ 17, 0,
  /* 96 */ 32, 32, 0,
  /* 99 */ 65221, 0,
  /* 101 */ 65381, 0,
  /* 103 */ 65389, 0,
  /* 105 */ 65397, 0,
  /* 107 */ 16, 65528, 65416, 0,
  /* 111 */ 65445, 0,
  /* 113 */ 65477, 0,
  /* 115 */ 65504, 65504, 0,
  /* 118 */ 65509, 0,
  /* 120 */ 120, 8, 65520, 0,
  /* 124 */ 65523, 0,
  /* 126 */ 65530, 0,
  /* 128 */ 65531, 0,
  /* 130 */ 65532, 0,
  /* 132 */ 65520, 65530, 65534, 65533, 0,
  /* 137 */ 65534, 0,
  /* 139 */ 65520, 65523, 65533, 65535, 0,
  /* 144 */ 65520, 65526, 65534, 65535, 0,
  /* 149 */ 65520, 65520, 65535, 65535, 0,
};

extern const uint16_t X86SubRegIdxLists[] = {
  /* 0 */ 4, 3, 1, 0,
  /* 4 */ 4, 3, 1, 2, 0,
  /* 9 */ 4, 3, 0,
  /* 12 */ 6, 5, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits X86SubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 8 },	// sub_8bit
  { 8, 8 },	// sub_8bit_hi
  { 0, 16 },	// sub_16bit
  { 0, 32 },	// sub_32bit
  { 0, 128 },	// sub_xmm
  { 0, 256 },	// sub_ymm
};

extern const char X86RegStrings[] = {
  /* 0 */ 'X', 'M', 'M', '1', '0', 0,
  /* 6 */ 'Y', 'M', 'M', '1', '0', 0,
  /* 12 */ 'Z', 'M', 'M', '1', '0', 0,
  /* 18 */ 'C', 'R', '1', '0', 0,
  /* 23 */ 'X', 'M', 'M', '2', '0', 0,
  /* 29 */ 'Y', 'M', 'M', '2', '0', 0,
  /* 35 */ 'Z', 'M', 'M', '2', '0', 0,
  /* 41 */ 'X', 'M', 'M', '3', '0', 0,
  /* 47 */ 'Y', 'M', 'M', '3', '0', 0,
  /* 53 */ 'Z', 'M', 'M', '3', '0', 0,
  /* 59 */ 'K', '0', 0,
  /* 62 */ 'X', 'M', 'M', '0', 0,
  /* 67 */ 'Y', 'M', 'M', '0', 0,
  /* 72 */ 'Z', 'M', 'M', '0', 0,
  /* 77 */ 'F', 'P', '0', 0,
  /* 81 */ 'C', 'R', '0', 0,
  /* 85 */ 'D', 'R', '0', 0,
  /* 89 */ 'S', 'T', '0', 0,
  /* 93 */ 'X', 'M', 'M', '1', '1', 0,
  /* 99 */ 'Y', 'M', 'M', '1', '1', 0,
  /* 105 */ 'Z', 'M', 'M', '1', '1', 0,
  /* 111 */ 'C', 'R', '1', '1', 0,
  /* 116 */ 'X', 'M', 'M', '2', '1', 0,
  /* 122 */ 'Y', 'M', 'M', '2', '1', 0,
  /* 128 */ 'Z', 'M', 'M', '2', '1', 0,
  /* 134 */ 'X', 'M', 'M', '3', '1', 0,
  /* 140 */ 'Y', 'M', 'M', '3', '1', 0,
  /* 146 */ 'Z', 'M', 'M', '3', '1', 0,
  /* 152 */ 'K', '1', 0,
  /* 155 */ 'X', 'M', 'M', '1', 0,
  /* 160 */ 'Y', 'M', 'M', '1', 0,
  /* 165 */ 'Z', 'M', 'M', '1', 0,
  /* 170 */ 'F', 'P', '1', 0,
  /* 174 */ 'C', 'R', '1', 0,
  /* 178 */ 'D', 'R', '1', 0,
  /* 182 */ 'S', 'T', '1', 0,
  /* 186 */ 'X', 'M', 'M', '1', '2', 0,
  /* 192 */ 'Y', 'M', 'M', '1', '2', 0,
  /* 198 */ 'Z', 'M', 'M', '1', '2', 0,
  /* 204 */ 'C', 'R', '1', '2', 0,
  /* 209 */ 'X', 'M', 'M', '2', '2', 0,
  /* 215 */ 'Y', 'M', 'M', '2', '2', 0,
  /* 221 */ 'Z', 'M', 'M', '2', '2', 0,
  /* 227 */ 'K', '2', 0,
  /* 230 */ 'X', 'M', 'M', '2', 0,
  /* 235 */ 'Y', 'M', 'M', '2', 0,
  /* 240 */ 'Z', 'M', 'M', '2', 0,
  /* 245 */ 'F', 'P', '2', 0,
  /* 249 */ 'C', 'R', '2', 0,
  /* 253 */ 'D', 'R', '2', 0,
  /* 257 */ 'S', 'T', '2', 0,
  /* 261 */ 'X', 'M', 'M', '1', '3', 0,
  /* 267 */ 'Y', 'M', 'M', '1', '3', 0,
  /* 273 */ 'Z', 'M', 'M', '1', '3', 0,
  /* 279 */ 'C', 'R', '1', '3', 0,
  /* 284 */ 'X', 'M', 'M', '2', '3', 0,
  /* 290 */ 'Y', 'M', 'M', '2', '3', 0,
  /* 296 */ 'Z', 'M', 'M', '2', '3', 0,
  /* 302 */ 'K', '3', 0,
  /* 305 */ 'X', 'M', 'M', '3', 0,
  /* 310 */ 'Y', 'M', 'M', '3', 0,
  /* 315 */ 'Z', 'M', 'M', '3', 0,
  /* 320 */ 'F', 'P', '3', 0,
  /* 324 */ 'C', 'R', '3', 0,
  /* 328 */ 'D', 'R', '3', 0,
  /* 332 */ 'S', 'T', '3', 0,
  /* 336 */ 'X', 'M', 'M', '1', '4', 0,
  /* 342 */ 'Y', 'M', 'M', '1', '4', 0,
  /* 348 */ 'Z', 'M', 'M', '1', '4', 0,
  /* 354 */ 'C', 'R', '1', '4', 0,
  /* 359 */ 'X', 'M', 'M', '2', '4', 0,
  /* 365 */ 'Y', 'M', 'M', '2', '4', 0,
  /* 371 */ 'Z', 'M', 'M', '2', '4', 0,
  /* 377 */ 'K', '4', 0,
  /* 380 */ 'X', 'M', 'M', '4', 0,
  /* 385 */ 'Y', 'M', 'M', '4', 0,
  /* 390 */ 'Z', 'M', 'M', '4', 0,
  /* 395 */ 'F', 'P', '4', 0,
  /* 399 */ 'C', 'R', '4', 0,
  /* 403 */ 'D', 'R', '4', 0,
  /* 407 */ 'S', 'T', '4', 0,
  /* 411 */ 'X', 'M', 'M', '1', '5', 0,
  /* 417 */ 'Y', 'M', 'M', '1', '5', 0,
  /* 423 */ 'Z', 'M', 'M', '1', '5', 0,
  /* 429 */ 'C', 'R', '1', '5', 0,
  /* 434 */ 'X', 'M', 'M', '2', '5', 0,
  /* 440 */ 'Y', 'M', 'M', '2', '5', 0,
  /* 446 */ 'Z', 'M', 'M', '2', '5', 0,
  /* 452 */ 'K', '5', 0,
  /* 455 */ 'X', 'M', 'M', '5', 0,
  /* 460 */ 'Y', 'M', 'M', '5', 0,
  /* 465 */ 'Z', 'M', 'M', '5', 0,
  /* 470 */ 'F', 'P', '5', 0,
  /* 474 */ 'C', 'R', '5', 0,
  /* 478 */ 'D', 'R', '5', 0,
  /* 482 */ 'S', 'T', '5', 0,
  /* 486 */ 'X', 'M', 'M', '1', '6', 0,
  /* 492 */ 'Y', 'M', 'M', '1', '6', 0,
  /* 498 */ 'Z', 'M', 'M', '1', '6', 0,
  /* 504 */ 'X', 'M', 'M', '2', '6', 0,
  /* 510 */ 'Y', 'M', 'M', '2', '6', 0,
  /* 516 */ 'Z', 'M', 'M', '2', '6', 0,
  /* 522 */ 'K', '6', 0,
  /* 525 */ 'X', 'M', 'M', '6', 0,
  /* 530 */ 'Y', 'M', 'M', '6', 0,
  /* 535 */ 'Z', 'M', 'M', '6', 0,
  /* 540 */ 'F', 'P', '6', 0,
  /* 544 */ 'C', 'R', '6', 0,
  /* 548 */ 'D', 'R', '6', 0,
  /* 552 */ 'S', 'T', '6', 0,
  /* 556 */ 'X', 'M', 'M', '1', '7', 0,
  /* 562 */ 'Y', 'M', 'M', '1', '7', 0,
  /* 568 */ 'Z', 'M', 'M', '1', '7', 0,
  /* 574 */ 'X', 'M', 'M', '2', '7', 0,
  /* 580 */ 'Y', 'M', 'M', '2', '7', 0,
  /* 586 */ 'Z', 'M', 'M', '2', '7', 0,
  /* 592 */ 'K', '7', 0,
  /* 595 */ 'X', 'M', 'M', '7', 0,
  /* 600 */ 'Y', 'M', 'M', '7', 0,
  /* 605 */ 'Z', 'M', 'M', '7', 0,
  /* 610 */ 'F', 'P', '7', 0,
  /* 614 */ 'C', 'R', '7', 0,
  /* 618 */ 'D', 'R', '7', 0,
  /* 622 */ 'S', 'T', '7', 0,
  /* 626 */ 'X', 'M', 'M', '1', '8', 0,
  /* 632 */ 'Y', 'M', 'M', '1', '8', 0,
  /* 638 */ 'Z', 'M', 'M', '1', '8', 0,
  /* 644 */ 'X', 'M', 'M', '2', '8', 0,
  /* 650 */ 'Y', 'M', 'M', '2', '8', 0,
  /* 656 */ 'Z', 'M', 'M', '2', '8', 0,
  /* 662 */ 'X', 'M', 'M', '8', 0,
  /* 667 */ 'Y', 'M', 'M', '8', 0,
  /* 672 */ 'Z', 'M', 'M', '8', 0,
  /* 677 */ 'C', 'R', '8', 0,
  /* 681 */ 'X', 'M', 'M', '1', '9', 0,
  /* 687 */ 'Y', 'M', 'M', '1', '9', 0,
  /* 693 */ 'Z', 'M', 'M', '1', '9', 0,
  /* 699 */ 'X', 'M', 'M', '2', '9', 0,
  /* 705 */ 'Y', 'M', 'M', '2', '9', 0,
  /* 711 */ 'Z', 'M', 'M', '2', '9', 0,
  /* 717 */ 'X', 'M', 'M', '9', 0,
  /* 722 */ 'Y', 'M', 'M', '9', 0,
  /* 727 */ 'Z', 'M', 'M', '9', 0,
  /* 732 */ 'C', 'R', '9', 0,
  /* 736 */ 'R', '1', '0', 'B', 0,
  /* 741 */ 'R', '1', '1', 'B', 0,
  /* 746 */ 'R', '1', '2', 'B', 0,
  /* 751 */ 'R', '1', '3', 'B', 0,
  /* 756 */ 'R', '1', '4', 'B', 0,
  /* 761 */ 'R', '1', '5', 'B', 0,
  /* 766 */ 'R', '8', 'B', 0,
  /* 770 */ 'R', '9', 'B', 0,
  /* 774 */ 'R', '1', '0', 'D', 0,
  /* 779 */ 'R', '1', '1', 'D', 0,
  /* 784 */ 'R', '1', '2', 'D', 0,
  /* 789 */ 'R', '1', '3', 'D', 0,
  /* 794 */ 'R', '1', '4', 'D', 0,
  /* 799 */ 'R', '1', '5', 'D', 0,
  /* 804 */ 'R', '8', 'D', 0,
  /* 808 */ 'R', '9', 'D', 0,
  /* 812 */ 'A', 'H', 0,
  /* 815 */ 'B', 'H', 0,
  /* 818 */ 'C', 'H', 0,
  /* 821 */ 'D', 'H', 0,
  /* 824 */ 'E', 'D', 'I', 0,
  /* 828 */ 'R', 'D', 'I', 0,
  /* 832 */ 'E', 'S', 'I', 0,
  /* 836 */ 'R', 'S', 'I', 0,
  /* 840 */ 'A', 'L', 0,
  /* 843 */ 'B', 'L', 0,
  /* 846 */ 'C', 'L', 0,
  /* 849 */ 'D', 'L', 0,
  /* 852 */ 'D', 'I', 'L', 0,
  /* 856 */ 'S', 'I', 'L', 0,
  /* 860 */ 'B', 'P', 'L', 0,
  /* 864 */ 'S', 'P', 'L', 0,
  /* 868 */ 'E', 'B', 'P', 0,
  /* 872 */ 'R', 'B', 'P', 0,
  /* 876 */ 'E', 'I', 'P', 0,
  /* 880 */ 'R', 'I', 'P', 0,
  /* 884 */ 'E', 'S', 'P', 0,
  /* 888 */ 'R', 'S', 'P', 0,
  /* 892 */ 'C', 'S', 0,
  /* 895 */ 'D', 'S', 0,
  /* 898 */ 'E', 'S', 0,
  /* 901 */ 'F', 'S', 0,
  /* 904 */ 'E', 'F', 'L', 'A', 'G', 'S', 0,
  /* 911 */ 'S', 'S', 0,
  /* 914 */ 'R', '1', '0', 'W', 0,
  /* 919 */ 'R', '1', '1', 'W', 0,
  /* 924 */ 'R', '1', '2', 'W', 0,
  /* 929 */ 'R', '1', '3', 'W', 0,
  /* 934 */ 'R', '1', '4', 'W', 0,
  /* 939 */ 'R', '1', '5', 'W', 0,
  /* 944 */ 'R', '8', 'W', 0,
  /* 948 */ 'R', '9', 'W', 0,
  /* 952 */ 'F', 'P', 'S', 'W', 0,
  /* 957 */ 'E', 'A', 'X', 0,
  /* 961 */ 'R', 'A', 'X', 0,
  /* 965 */ 'E', 'B', 'X', 0,
  /* 969 */ 'R', 'B', 'X', 0,
  /* 973 */ 'E', 'C', 'X', 0,
  /* 977 */ 'R', 'C', 'X', 0,
  /* 981 */ 'E', 'D', 'X', 0,
  /* 985 */ 'R', 'D', 'X', 0,
  /* 989 */ 'E', 'I', 'Z', 0,
  /* 993 */ 'R', 'I', 'Z', 0,
};

extern const MCRegisterDesc X86RegDesc[] = { // Descriptors
  { 5, 0, 0, 0, 0 },
  { 812, 2, 90, 3, 2273 },
  { 840, 2, 86, 3, 2273 },
  { 958, 151, 87, 6, 0 },
  { 815, 2, 78, 3, 2193 },
  { 843, 2, 74, 3, 2193 },
  { 869, 1, 83, 2, 544 },
  { 860, 2, 82, 3, 544 },
  { 966, 141, 75, 6, 48 },
  { 818, 2, 70, 3, 2081 },
  { 846, 2, 66, 3, 2081 },
  { 892, 2, 2, 3, 2081 },
  { 974, 146, 67, 6, 96 },
  { 821, 2, 58, 3, 2049 },
  { 825, 1, 63, 2, 624 },
  { 852, 2, 62, 3, 624 },
  { 849, 2, 54, 3, 2017 },
  { 895, 2, 2, 3, 2017 },
  { 982, 134, 55, 6, 496 },
  { 957, 150, 56, 5, 0 },
  { 868, 24, 56, 1, 544 },
  { 965, 140, 56, 5, 323 },
  { 973, 145, 56, 5, 323 },
  { 824, 28, 56, 1, 624 },
  { 981, 133, 56, 5, 496 },
  { 904, 2, 2, 3, 1985 },
  { 876, 37, 52, 10, 1985 },
  { 989, 2, 2, 3, 1985 },
  { 898, 2, 2, 3, 1985 },
  { 832, 10, 45, 1, 1985 },
  { 884, 14, 45, 1, 1985 },
  { 952, 2, 2, 3, 1985 },
  { 901, 2, 2, 3, 1985 },
  { 908, 2, 2, 3, 1985 },
  { 877, 2, 51, 3, 656 },
  { 961, 149, 2, 4, 0 },
  { 872, 23, 2, 0, 544 },
  { 969, 139, 2, 4, 275 },
  { 977, 144, 2, 4, 275 },
  { 828, 27, 2, 0, 624 },
  { 985, 132, 2, 4, 496 },
  { 880, 36, 2, 9, 1592 },
  { 993, 2, 2, 3, 1592 },
  { 836, 9, 2, 0, 1889 },
  { 888, 13, 2, 0, 1889 },
  { 833, 1, 48, 2, 896 },
  { 856, 2, 47, 3, 896 },
  { 885, 1, 44, 2, 1504 },
  { 864, 2, 43, 3, 1504 },
  { 911, 2, 2, 3, 1889 },
  { 81, 2, 2, 3, 1889 },
  { 174, 2, 2, 3, 1889 },
  { 249, 2, 2, 3, 1889 },
  { 324, 2, 2, 3, 1889 },
  { 399, 2, 2, 3, 1889 },
  { 474, 2, 2, 3, 1889 },
  { 544, 2, 2, 3, 1889 },
  { 614, 2, 2, 3, 1889 },
  { 677, 2, 2, 3, 1889 },
  { 732, 2, 2, 3, 1889 },
  { 18, 2, 2, 3, 1889 },
  { 111, 2, 2, 3, 1889 },
  { 204, 2, 2, 3, 1889 },
  { 279, 2, 2, 3, 1889 },
  { 354, 2, 2, 3, 1889 },
  { 429, 2, 2, 3, 1889 },
  { 85, 2, 2, 3, 1889 },
  { 178, 2, 2, 3, 1889 },
  { 253, 2, 2, 3, 1889 },
  { 328, 2, 2, 3, 1889 },
  { 403, 2, 2, 3, 1889 },
  { 478, 2, 2, 3, 1889 },
  { 548, 2, 2, 3, 1889 },
  { 618, 2, 2, 3, 1889 },
  { 77, 2, 2, 3, 1889 },
  { 170, 2, 2, 3, 1889 },
  { 245, 2, 2, 3, 1889 },
  { 320, 2, 2, 3, 1889 },
  { 395, 2, 2, 3, 1889 },
  { 470, 2, 2, 3, 1889 },
  { 540, 2, 2, 3, 1889 },
  { 610, 2, 2, 3, 1889 },
  { 59, 2, 2, 3, 1889 },
  { 152, 2, 2, 3, 1889 },
  { 227, 2, 2, 3, 1889 },
  { 302, 2, 2, 3, 1889 },
  { 377, 2, 2, 3, 1889 },
  { 452, 2, 2, 3, 1889 },
  { 522, 2, 2, 3, 1889 },
  { 592, 2, 2, 3, 1889 },
  { 63, 2, 2, 3, 1889 },
  { 156, 2, 2, 3, 1889 },
  { 231, 2, 2, 3, 1889 },
  { 306, 2, 2, 3, 1889 },
  { 381, 2, 2, 3, 1889 },
  { 456, 2, 2, 3, 1889 },
  { 526, 2, 2, 3, 1889 },
  { 596, 2, 2, 3, 1889 },
  { 678, 120, 2, 0, 1889 },
  { 733, 120, 2, 0, 1889 },
  { 19, 120, 2, 0, 1889 },
  { 112, 120, 2, 0, 1889 },
  { 205, 120, 2, 0, 1889 },
  { 280, 120, 2, 0, 1889 },
  { 355, 120, 2, 0, 1889 },
  { 430, 120, 2, 0, 1889 },
  { 89, 2, 2, 3, 1889 },
  { 182, 2, 2, 3, 1889 },
  { 257, 2, 2, 3, 1889 },
  { 332, 2, 2, 3, 1889 },
  { 407, 2, 2, 3, 1889 },
  { 482, 2, 2, 3, 1889 },
  { 552, 2, 2, 3, 1889 },
  { 622, 2, 2, 3, 1889 },
  { 62, 2, 96, 3, 1889 },
  { 155, 2, 96, 3, 1889 },
  { 230, 2, 96, 3, 1889 },
  { 305, 2, 96, 3, 1889 },
  { 380, 2, 96, 3, 1889 },
  { 455, 2, 96, 3, 1889 },
  { 525, 2, 96, 3, 1889 },
  { 595, 2, 96, 3, 1889 },
  { 662, 2, 96, 3, 1889 },
  { 717, 2, 96, 3, 1889 },
  { 0, 2, 96, 3, 1889 },
  { 93, 2, 96, 3, 1889 },
  { 186, 2, 96, 3, 1889 },
  { 261, 2, 96, 3, 1889 },
  { 336, 2, 96, 3, 1889 },
  { 411, 2, 96, 3, 1889 },
  { 486, 2, 96, 3, 1889 },
  { 556, 2, 96, 3, 1889 },
  { 626, 2, 96, 3, 1889 },
  { 681, 2, 96, 3, 1889 },
  { 23, 2, 96, 3, 1889 },
  { 116, 2, 96, 3, 1889 },
  { 209, 2, 96, 3, 1889 },
  { 284, 2, 96, 3, 1889 },
  { 359, 2, 96, 3, 1889 },
  { 434, 2, 96, 3, 1889 },
  { 504, 2, 96, 3, 1889 },
  { 574, 2, 96, 3, 1889 },
  { 644, 2, 96, 3, 1889 },
  { 699, 2, 96, 3, 1889 },
  { 41, 2, 96, 3, 1889 },
  { 134, 2, 96, 3, 1889 },
  { 67, 116, 97, 13, 1809 },
  { 160, 116, 97, 13, 1809 },
  { 235, 116, 97, 13, 1809 },
  { 310, 116, 97, 13, 1809 },
  { 385, 116, 97, 13, 1809 },
  { 460, 116, 97, 13, 1809 },
  { 530, 116, 97, 13, 1809 },
  { 600, 116, 97, 13, 1809 },
  { 667, 116, 97, 13, 1809 },
  { 722, 116, 97, 13, 1809 },
  { 6, 116, 97, 13, 1809 },
  { 99, 116, 97, 13, 1809 },
  { 192, 116, 97, 13, 1809 },
  { 267, 116, 97, 13, 1809 },
  { 342, 116, 97, 13, 1809 },
  { 417, 116, 97, 13, 1809 },
  { 492, 116, 97, 13, 1809 },
  { 562, 116, 97, 13, 1809 },
  { 632, 116, 97, 13, 1809 },
  { 687, 116, 97, 13, 1809 },
  { 29, 116, 97, 13, 1809 },
  { 122, 116, 97, 13, 1809 },
  { 215, 116, 97, 13, 1809 },
  { 290, 116, 97, 13, 1809 },
  { 365, 116, 97, 13, 1809 },
  { 440, 116, 97, 13, 1809 },
  { 510, 116, 97, 13, 1809 },
  { 580, 116, 97, 13, 1809 },
  { 650, 116, 97, 13, 1809 },
  { 705, 116, 97, 13, 1809 },
  { 47, 116, 97, 13, 1809 },
  { 140, 116, 97, 13, 1809 },
  { 72, 115, 2, 12, 1777 },
  { 165, 115, 2, 12, 1777 },
  { 240, 115, 2, 12, 1777 },
  { 315, 115, 2, 12, 1777 },
  { 390, 115, 2, 12, 1777 },
  { 465, 115, 2, 12, 1777 },
  { 535, 115, 2, 12, 1777 },
  { 605, 115, 2, 12, 1777 },
  { 672, 115, 2, 12, 1777 },
  { 727, 115, 2, 12, 1777 },
  { 12, 115, 2, 12, 1777 },
  { 105, 115, 2, 12, 1777 },
  { 198, 115, 2, 12, 1777 },
  { 273, 115, 2, 12, 1777 },
  { 348, 115, 2, 12, 1777 },
  { 423, 115, 2, 12, 1777 },
  { 498, 115, 2, 12, 1777 },
  { 568, 115, 2, 12, 1777 },
  { 638, 115, 2, 12, 1777 },
  { 693, 115, 2, 12, 1777 },
  { 35, 115, 2, 12, 1777 },
  { 128, 115, 2, 12, 1777 },
  { 221, 115, 2, 12, 1777 },
  { 296, 115, 2, 12, 1777 },
  { 371, 115, 2, 12, 1777 },
  { 446, 115, 2, 12, 1777 },
  { 516, 115, 2, 12, 1777 },
  { 586, 115, 2, 12, 1777 },
  { 656, 115, 2, 12, 1777 },
  { 711, 115, 2, 12, 1777 },
  { 53, 115, 2, 12, 1777 },
  { 146, 115, 2, 12, 1777 },
  { 766, 2, 107, 3, 1681 },
  { 770, 2, 107, 3, 1681 },
  { 736, 2, 107, 3, 1681 },
  { 741, 2, 107, 3, 1681 },
  { 746, 2, 107, 3, 1681 },
  { 751, 2, 107, 3, 1681 },
  { 756, 2, 107, 3, 1681 },
  { 761, 2, 107, 3, 1681 },
  { 804, 121, 109, 1, 1649 },
  { 808, 121, 109, 1, 1649 },
  { 774, 121, 109, 1, 1649 },
  { 779, 121, 109, 1, 1649 },
  { 784, 121, 109, 1, 1649 },
  { 789, 121, 109, 1, 1649 },
  { 794, 121, 109, 1, 1649 },
  { 799, 121, 109, 1, 1649 },
  { 944, 122, 108, 2, 1617 },
  { 948, 122, 108, 2, 1617 },
  { 914, 122, 108, 2, 1617 },
  { 919, 122, 108, 2, 1617 },
  { 924, 122, 108, 2, 1617 },
  { 929, 122, 108, 2, 1617 },
  { 934, 122, 108, 2, 1617 },
  { 939, 122, 108, 2, 1617 },
};

extern const MCPhysReg X86RegUnitRoots[][2] = {
  { X86::AH },
  { X86::AL },
  { X86::BH },
  { X86::BL },
  { X86::BPL },
  { X86::CH },
  { X86::CL },
  { X86::CS },
  { X86::DH },
  { X86::DIL },
  { X86::DL },
  { X86::DS },
  { X86::EFLAGS },
  { X86::IP },
  { X86::EIZ },
  { X86::ES },
  { X86::SIL },
  { X86::SPL },
  { X86::FPSW },
  { X86::FS },
  { X86::GS },
  { X86::RIZ },
  { X86::SS },
  { X86::CR0 },
  { X86::CR1 },
  { X86::CR2 },
  { X86::CR3 },
  { X86::CR4 },
  { X86::CR5 },
  { X86::CR6 },
  { X86::CR7 },
  { X86::CR8 },
  { X86::CR9 },
  { X86::CR10 },
  { X86::CR11 },
  { X86::CR12 },
  { X86::CR13 },
  { X86::CR14 },
  { X86::CR15 },
  { X86::DR0 },
  { X86::DR1 },
  { X86::DR2 },
  { X86::DR3 },
  { X86::DR4 },
  { X86::DR5 },
  { X86::DR6 },
  { X86::DR7 },
  { X86::FP0 },
  { X86::FP1 },
  { X86::FP2 },
  { X86::FP3 },
  { X86::FP4 },
  { X86::FP5 },
  { X86::FP6 },
  { X86::FP7 },
  { X86::K0 },
  { X86::K1 },
  { X86::K2 },
  { X86::K3 },
  { X86::K4 },
  { X86::K5 },
  { X86::K6 },
  { X86::K7 },
  { X86::MM0 },
  { X86::MM1 },
  { X86::MM2 },
  { X86::MM3 },
  { X86::MM4 },
  { X86::MM5 },
  { X86::MM6 },
  { X86::MM7 },
  { X86::R8B },
  { X86::R9B },
  { X86::R10B },
  { X86::R11B },
  { X86::R12B },
  { X86::R13B },
  { X86::R14B },
  { X86::R15B },
  { X86::ST0 },
  { X86::ST1 },
  { X86::ST2 },
  { X86::ST3 },
  { X86::ST4 },
  { X86::ST5 },
  { X86::ST6 },
  { X86::ST7 },
  { X86::XMM0 },
  { X86::XMM1 },
  { X86::XMM2 },
  { X86::XMM3 },
  { X86::XMM4 },
  { X86::XMM5 },
  { X86::XMM6 },
  { X86::XMM7 },
  { X86::XMM8 },
  { X86::XMM9 },
  { X86::XMM10 },
  { X86::XMM11 },
  { X86::XMM12 },
  { X86::XMM13 },
  { X86::XMM14 },
  { X86::XMM15 },
  { X86::XMM16 },
  { X86::XMM17 },
  { X86::XMM18 },
  { X86::XMM19 },
  { X86::XMM20 },
  { X86::XMM21 },
  { X86::XMM22 },
  { X86::XMM23 },
  { X86::XMM24 },
  { X86::XMM25 },
  { X86::XMM26 },
  { X86::XMM27 },
  { X86::XMM28 },
  { X86::XMM29 },
  { X86::XMM30 },
  { X86::XMM31 },
};

namespace {     // Register classes...
  // GR8 Register Class...
  const MCPhysReg GR8[] = {
    X86::AL, X86::CL, X86::DL, X86::AH, X86::CH, X86::DH, X86::BL, X86::BH, X86::SIL, X86::DIL, X86::BPL, X86::SPL, X86::R8B, X86::R9B, X86::R10B, X86::R11B, X86::R14B, X86::R15B, X86::R12B, X86::R13B, 
  };

  // GR8 Bit set.
  const uint8_t GR8Bits[] = {
    0xb6, 0xa6, 0x01, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR8_NOREX Register Class...
  const MCPhysReg GR8_NOREX[] = {
    X86::AL, X86::CL, X86::DL, X86::AH, X86::CH, X86::DH, X86::BL, X86::BH, 
  };

  // GR8_NOREX Bit set.
  const uint8_t GR8_NOREXBits[] = {
    0x36, 0x26, 0x01, 
  };

  // GR8_ABCD_H Register Class...
  const MCPhysReg GR8_ABCD_H[] = {
    X86::AH, X86::CH, X86::DH, X86::BH, 
  };

  // GR8_ABCD_H Bit set.
  const uint8_t GR8_ABCD_HBits[] = {
    0x12, 0x22, 
  };

  // GR8_ABCD_L Register Class...
  const MCPhysReg GR8_ABCD_L[] = {
    X86::AL, X86::CL, X86::DL, X86::BL, 
  };

  // GR8_ABCD_L Bit set.
  const uint8_t GR8_ABCD_LBits[] = {
    0x24, 0x04, 0x01, 
  };

  // GR16 Register Class...
  const MCPhysReg GR16[] = {
    X86::AX, X86::CX, X86::DX, X86::SI, X86::DI, X86::BX, X86::BP, X86::SP, X86::R8W, X86::R9W, X86::R10W, X86::R11W, X86::R14W, X86::R15W, X86::R12W, X86::R13W, 
  };

  // GR16 Bit set.
  const uint8_t GR16Bits[] = {
    0x48, 0x51, 0x04, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR16_NOREX Register Class...
  const MCPhysReg GR16_NOREX[] = {
    X86::AX, X86::CX, X86::DX, X86::SI, X86::DI, X86::BX, X86::BP, X86::SP, 
  };

  // GR16_NOREX Bit set.
  const uint8_t GR16_NOREXBits[] = {
    0x48, 0x51, 0x04, 0x00, 0x00, 0xa0, 
  };

  // VK1 Register Class...
  const MCPhysReg VK1[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK1 Bit set.
  const uint8_t VK1Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // VK16 Register Class...
  const MCPhysReg VK16[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK16 Bit set.
  const uint8_t VK16Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // VK2 Register Class...
  const MCPhysReg VK2[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK2 Bit set.
  const uint8_t VK2Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // VK4 Register Class...
  const MCPhysReg VK4[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK4 Bit set.
  const uint8_t VK4Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // VK8 Register Class...
  const MCPhysReg VK8[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK8 Bit set.
  const uint8_t VK8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // VK16WM Register Class...
  const MCPhysReg VK16WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK16WM Bit set.
  const uint8_t VK16WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // VK1WM Register Class...
  const MCPhysReg VK1WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK1WM Bit set.
  const uint8_t VK1WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // VK2WM Register Class...
  const MCPhysReg VK2WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK2WM Bit set.
  const uint8_t VK2WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // VK4WM Register Class...
  const MCPhysReg VK4WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK4WM Bit set.
  const uint8_t VK4WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // VK8WM Register Class...
  const MCPhysReg VK8WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK8WM Bit set.
  const uint8_t VK8WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // SEGMENT_REG Register Class...
  const MCPhysReg SEGMENT_REG[] = {
    X86::CS, X86::DS, X86::SS, X86::ES, X86::FS, X86::GS, 
  };

  // SEGMENT_REG Bit set.
  const uint8_t SEGMENT_REGBits[] = {
    0x00, 0x08, 0x02, 0x10, 0x03, 0x00, 0x02, 
  };

  // GR16_ABCD Register Class...
  const MCPhysReg GR16_ABCD[] = {
    X86::AX, X86::CX, X86::DX, X86::BX, 
  };

  // GR16_ABCD Bit set.
  const uint8_t GR16_ABCDBits[] = {
    0x08, 0x11, 0x04, 
  };

  // FPCCR Register Class...
  const MCPhysReg FPCCR[] = {
    X86::FPSW, 
  };

  // FPCCR Bit set.
  const uint8_t FPCCRBits[] = {
    0x00, 0x00, 0x00, 0x80, 
  };

  // FR32X Register Class...
  const MCPhysReg FR32X[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 
  };

  // FR32X Bit set.
  const uint8_t FR32XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // FR32 Register Class...
  const MCPhysReg FR32[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 
  };

  // FR32 Bit set.
  const uint8_t FR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GR32 Register Class...
  const MCPhysReg GR32[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, 
  };

  // GR32 Bit set.
  const uint8_t GR32Bits[] = {
    0x00, 0x00, 0xf8, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR32_NOAX Register Class...
  const MCPhysReg GR32_NOAX[] = {
    X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, 
  };

  // GR32_NOAX Bit set.
  const uint8_t GR32_NOAXBits[] = {
    0x00, 0x00, 0xf0, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR32_NOSP Register Class...
  const MCPhysReg GR32_NOSP[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, 
  };

  // GR32_NOSP Bit set.
  const uint8_t GR32_NOSPBits[] = {
    0x00, 0x00, 0xf8, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR32_NOAX_and_GR32_NOSP Register Class...
  const MCPhysReg GR32_NOAX_and_GR32_NOSP[] = {
    X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, 
  };

  // GR32_NOAX_and_GR32_NOSP Bit set.
  const uint8_t GR32_NOAX_and_GR32_NOSPBits[] = {
    0x00, 0x00, 0xf0, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // DEBUG_REG Register Class...
  const MCPhysReg DEBUG_REG[] = {
    X86::DR0, X86::DR1, X86::DR2, X86::DR3, X86::DR4, X86::DR5, X86::DR6, X86::DR7, 
  };

  // DEBUG_REG Bit set.
  const uint8_t DEBUG_REGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR32_NOREX Register Class...
  const MCPhysReg GR32_NOREX[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, 
  };

  // GR32_NOREX Bit set.
  const uint8_t GR32_NOREXBits[] = {
    0x00, 0x00, 0xf8, 0x61, 
  };

  // VK32 Register Class...
  const MCPhysReg VK32[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK32 Bit set.
  const uint8_t VK32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR32_NOAX_and_GR32_NOREX Register Class...
  const MCPhysReg GR32_NOAX_and_GR32_NOREX[] = {
    X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, 
  };

  // GR32_NOAX_and_GR32_NOREX Bit set.
  const uint8_t GR32_NOAX_and_GR32_NOREXBits[] = {
    0x00, 0x00, 0xf0, 0x61, 
  };

  // GR32_NOREX_NOSP Register Class...
  const MCPhysReg GR32_NOREX_NOSP[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, 
  };

  // GR32_NOREX_NOSP Bit set.
  const uint8_t GR32_NOREX_NOSPBits[] = {
    0x00, 0x00, 0xf8, 0x21, 
  };

  // RFP32 Register Class...
  const MCPhysReg RFP32[] = {
    X86::FP0, X86::FP1, X86::FP2, X86::FP3, X86::FP4, X86::FP5, X86::FP6, 
  };

  // RFP32 Bit set.
  const uint8_t RFP32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 
  };

  // VK32WM Register Class...
  const MCPhysReg VK32WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK32WM Bit set.
  const uint8_t VK32WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // GR32_NOAX_and_GR32_NOREX_NOSP Register Class...
  const MCPhysReg GR32_NOAX_and_GR32_NOREX_NOSP[] = {
    X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, 
  };

  // GR32_NOAX_and_GR32_NOREX_NOSP Bit set.
  const uint8_t GR32_NOAX_and_GR32_NOREX_NOSPBits[] = {
    0x00, 0x00, 0xf0, 0x21, 
  };

  // GR32_ABCD Register Class...
  const MCPhysReg GR32_ABCD[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::EBX, 
  };

  // GR32_ABCD Bit set.
  const uint8_t GR32_ABCDBits[] = {
    0x00, 0x00, 0x68, 0x01, 
  };

  // GR32_ABCD_and_GR32_NOAX Register Class...
  const MCPhysReg GR32_ABCD_and_GR32_NOAX[] = {
    X86::ECX, X86::EDX, X86::EBX, 
  };

  // GR32_ABCD_and_GR32_NOAX Bit set.
  const uint8_t GR32_ABCD_and_GR32_NOAXBits[] = {
    0x00, 0x00, 0x60, 0x01, 
  };

  // GR32_TC Register Class...
  const MCPhysReg GR32_TC[] = {
    X86::EAX, X86::ECX, X86::EDX, 
  };

  // GR32_TC Bit set.
  const uint8_t GR32_TCBits[] = {
    0x00, 0x00, 0x48, 0x01, 
  };

  // GR32_AD Register Class...
  const MCPhysReg GR32_AD[] = {
    X86::EAX, X86::EDX, 
  };

  // GR32_AD Bit set.
  const uint8_t GR32_ADBits[] = {
    0x00, 0x00, 0x08, 0x01, 
  };

  // GR32_NOAX_and_GR32_TC Register Class...
  const MCPhysReg GR32_NOAX_and_GR32_TC[] = {
    X86::ECX, X86::EDX, 
  };

  // GR32_NOAX_and_GR32_TC Bit set.
  const uint8_t GR32_NOAX_and_GR32_TCBits[] = {
    0x00, 0x00, 0x40, 0x01, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    X86::EFLAGS, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x00, 0x00, 0x00, 0x02, 
  };

  // GR32_AD_and_GR32_NOAX Register Class...
  const MCPhysReg GR32_AD_and_GR32_NOAX[] = {
    X86::EDX, 
  };

  // GR32_AD_and_GR32_NOAX Bit set.
  const uint8_t GR32_AD_and_GR32_NOAXBits[] = {
    0x00, 0x00, 0x00, 0x01, 
  };

  // RFP64 Register Class...
  const MCPhysReg RFP64[] = {
    X86::FP0, X86::FP1, X86::FP2, X86::FP3, X86::FP4, X86::FP5, X86::FP6, 
  };

  // RFP64 Bit set.
  const uint8_t RFP64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 
  };

  // FR64X Register Class...
  const MCPhysReg FR64X[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 
  };

  // FR64X Bit set.
  const uint8_t FR64XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // GR64 Register Class...
  const MCPhysReg GR64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, X86::RSP, X86::RIP, 
  };

  // GR64 Bit set.
  const uint8_t GR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // CONTROL_REG Register Class...
  const MCPhysReg CONTROL_REG[] = {
    X86::CR0, X86::CR1, X86::CR2, X86::CR3, X86::CR4, X86::CR5, X86::CR6, X86::CR7, X86::CR8, X86::CR9, X86::CR10, X86::CR11, X86::CR12, X86::CR13, X86::CR14, X86::CR15, 
  };

  // CONTROL_REG Bit set.
  const uint8_t CONTROL_REGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // FR64 Register Class...
  const MCPhysReg FR64[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 
  };

  // FR64 Bit set.
  const uint8_t FR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GR64_with_sub_8bit Register Class...
  const MCPhysReg GR64_with_sub_8bit[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_8bit Bit set.
  const uint8_t GR64_with_sub_8bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR64_NOSP Register Class...
  const MCPhysReg GR64_NOSP[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, 
  };

  // GR64_NOSP Bit set.
  const uint8_t GR64_NOSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_NOAX[] = {
    X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_NOAXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP[] = {
    X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR64_NOREX Register Class...
  const MCPhysReg GR64_NOREX[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, X86::RSP, X86::RIP, 
  };

  // GR64_NOREX Bit set.
  const uint8_t GR64_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x1b, 
  };

  // GR64_TC Register Class...
  const MCPhysReg GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R11, X86::RIP, 
  };

  // GR64_TC Bit set.
  const uint8_t GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc8, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 
  };

  // GR64_NOSP_and_GR64_TC Register Class...
  const MCPhysReg GR64_NOSP_and_GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R11, 
  };

  // GR64_NOSP_and_GR64_TC Bit set.
  const uint8_t GR64_NOSP_and_GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc8, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 
  };

  // GR64_with_sub_16bit_in_GR16_NOREX Register Class...
  const MCPhysReg GR64_with_sub_16bit_in_GR16_NOREX[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_16bit_in_GR16_NOREX Bit set.
  const uint8_t GR64_with_sub_16bit_in_GR16_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x19, 
  };

  // VK64 Register Class...
  const MCPhysReg VK64[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK64 Bit set.
  const uint8_t VK64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // VR64 Register Class...
  const MCPhysReg VR64[] = {
    X86::MM0, X86::MM1, X86::MM2, X86::MM3, X86::MM4, X86::MM5, X86::MM6, X86::MM7, 
  };

  // VR64 Bit set.
  const uint8_t VR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR64_NOREX_NOSP Register Class...
  const MCPhysReg GR64_NOREX_NOSP[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, 
  };

  // GR64_NOREX_NOSP Bit set.
  const uint8_t GR64_NOREX_NOSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x09, 
  };

  // GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX Register Class...
  const MCPhysReg GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX[] = {
    X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R11, 
  };

  // GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX Bit set.
  const uint8_t GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX[] = {
    X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x19, 
  };

  // VK64WM Register Class...
  const MCPhysReg VK64WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK64WM Bit set.
  const uint8_t VK64WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // GR64_NOREX_and_GR64_TC Register Class...
  const MCPhysReg GR64_NOREX_and_GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RIP, 
  };

  // GR64_NOREX_and_GR64_TC Bit set.
  const uint8_t GR64_NOREX_and_GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc8, 0x0b, 
  };

  // GR64_TCW64 Register Class...
  const MCPhysReg GR64_TCW64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R11, 
  };

  // GR64_TCW64 Bit set.
  const uint8_t GR64_TCW64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP[] = {
    X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x09, 
  };

  // GR64_NOREX_NOSP_and_GR64_TC Register Class...
  const MCPhysReg GR64_NOREX_NOSP_and_GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, 
  };

  // GR64_NOREX_NOSP_and_GR64_TC Bit set.
  const uint8_t GR64_NOREX_NOSP_and_GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc8, 0x09, 
  };

  // GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX Register Class...
  const MCPhysReg GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX[] = {
    X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R11, 
  };

  // GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX Bit set.
  const uint8_t GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 
  };

  // GR64_ABCD Register Class...
  const MCPhysReg GR64_ABCD[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RBX, 
  };

  // GR64_ABCD Bit set.
  const uint8_t GR64_ABCDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 
  };

  // GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX Register Class...
  const MCPhysReg GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX[] = {
    X86::RCX, X86::RDX, X86::RSI, X86::RDI, 
  };

  // GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX Bit set.
  const uint8_t GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x09, 
  };

  // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX[] = {
    X86::RCX, X86::RDX, X86::RBX, 
  };

  // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 
  };

  // GR64_with_sub_32bit_in_GR32_TC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_TC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x48, 0x01, 
  };

  // GR64_with_sub_32bit_in_GR32_AD Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_AD[] = {
    X86::RAX, X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_AD Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_ADBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC[] = {
    X86::RCX, X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 
  };

  // GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX[] = {
    X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // RST Register Class...
  const MCPhysReg RST[] = {
    X86::ST0, X86::ST1, X86::ST2, X86::ST3, X86::ST4, X86::ST5, X86::ST6, X86::ST7, 
  };

  // RST Bit set.
  const uint8_t RSTBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // RFP80 Register Class...
  const MCPhysReg RFP80[] = {
    X86::FP0, X86::FP1, X86::FP2, X86::FP3, X86::FP4, X86::FP5, X86::FP6, 
  };

  // RFP80 Bit set.
  const uint8_t RFP80Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 
  };

  // VR128X Register Class...
  const MCPhysReg VR128X[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 
  };

  // VR128X Bit set.
  const uint8_t VR128XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // VR128 Register Class...
  const MCPhysReg VR128[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 
  };

  // VR128 Bit set.
  const uint8_t VR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // VR256X Register Class...
  const MCPhysReg VR256X[] = {
    X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, X86::YMM16, X86::YMM17, X86::YMM18, X86::YMM19, X86::YMM20, X86::YMM21, X86::YMM22, X86::YMM23, X86::YMM24, X86::YMM25, X86::YMM26, X86::YMM27, X86::YMM28, X86::YMM29, X86::YMM30, X86::YMM31, 
  };

  // VR256X Bit set.
  const uint8_t VR256XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // VR256 Register Class...
  const MCPhysReg VR256[] = {
    X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 
  };

  // VR256 Bit set.
  const uint8_t VR256Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // VR512 Register Class...
  const MCPhysReg VR512[] = {
    X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, 
  };

  // VR512 Bit set.
  const uint8_t VR512Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // VR512_with_sub_xmm_in_FR32 Register Class...
  const MCPhysReg VR512_with_sub_xmm_in_FR32[] = {
    X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, 
  };

  // VR512_with_sub_xmm_in_FR32 Bit set.
  const uint8_t VR512_with_sub_xmm_in_FR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

}

extern const MCRegisterClass X86MCRegisterClasses[] = {
  { "GR8", GR8, GR8Bits, 20, sizeof(GR8Bits), X86::GR8RegClassID, 1, 1, 1, 1 },
  { "GR8_NOREX", GR8_NOREX, GR8_NOREXBits, 8, sizeof(GR8_NOREXBits), X86::GR8_NOREXRegClassID, 1, 1, 1, 1 },
  { "GR8_ABCD_H", GR8_ABCD_H, GR8_ABCD_HBits, 4, sizeof(GR8_ABCD_HBits), X86::GR8_ABCD_HRegClassID, 1, 1, 1, 1 },
  { "GR8_ABCD_L", GR8_ABCD_L, GR8_ABCD_LBits, 4, sizeof(GR8_ABCD_LBits), X86::GR8_ABCD_LRegClassID, 1, 1, 1, 1 },
  { "GR16", GR16, GR16Bits, 16, sizeof(GR16Bits), X86::GR16RegClassID, 2, 2, 1, 1 },
  { "GR16_NOREX", GR16_NOREX, GR16_NOREXBits, 8, sizeof(GR16_NOREXBits), X86::GR16_NOREXRegClassID, 2, 2, 1, 1 },
  { "VK1", VK1, VK1Bits, 8, sizeof(VK1Bits), X86::VK1RegClassID, 2, 2, 1, 1 },
  { "VK16", VK16, VK16Bits, 8, sizeof(VK16Bits), X86::VK16RegClassID, 2, 2, 1, 1 },
  { "VK2", VK2, VK2Bits, 8, sizeof(VK2Bits), X86::VK2RegClassID, 2, 2, 1, 1 },
  { "VK4", VK4, VK4Bits, 8, sizeof(VK4Bits), X86::VK4RegClassID, 2, 2, 1, 1 },
  { "VK8", VK8, VK8Bits, 8, sizeof(VK8Bits), X86::VK8RegClassID, 2, 2, 1, 1 },
  { "VK16WM", VK16WM, VK16WMBits, 7, sizeof(VK16WMBits), X86::VK16WMRegClassID, 2, 2, 1, 1 },
  { "VK1WM", VK1WM, VK1WMBits, 7, sizeof(VK1WMBits), X86::VK1WMRegClassID, 2, 2, 1, 1 },
  { "VK2WM", VK2WM, VK2WMBits, 7, sizeof(VK2WMBits), X86::VK2WMRegClassID, 2, 2, 1, 1 },
  { "VK4WM", VK4WM, VK4WMBits, 7, sizeof(VK4WMBits), X86::VK4WMRegClassID, 2, 2, 1, 1 },
  { "VK8WM", VK8WM, VK8WMBits, 7, sizeof(VK8WMBits), X86::VK8WMRegClassID, 2, 2, 1, 1 },
  { "SEGMENT_REG", SEGMENT_REG, SEGMENT_REGBits, 6, sizeof(SEGMENT_REGBits), X86::SEGMENT_REGRegClassID, 2, 2, 1, 1 },
  { "GR16_ABCD", GR16_ABCD, GR16_ABCDBits, 4, sizeof(GR16_ABCDBits), X86::GR16_ABCDRegClassID, 2, 2, 1, 1 },
  { "FPCCR", FPCCR, FPCCRBits, 1, sizeof(FPCCRBits), X86::FPCCRRegClassID, 2, 2, -1, 0 },
  { "FR32X", FR32X, FR32XBits, 32, sizeof(FR32XBits), X86::FR32XRegClassID, 4, 4, 1, 1 },
  { "FR32", FR32, FR32Bits, 16, sizeof(FR32Bits), X86::FR32RegClassID, 4, 4, 1, 1 },
  { "GR32", GR32, GR32Bits, 16, sizeof(GR32Bits), X86::GR32RegClassID, 4, 4, 1, 1 },
  { "GR32_NOAX", GR32_NOAX, GR32_NOAXBits, 15, sizeof(GR32_NOAXBits), X86::GR32_NOAXRegClassID, 4, 4, 1, 1 },
  { "GR32_NOSP", GR32_NOSP, GR32_NOSPBits, 15, sizeof(GR32_NOSPBits), X86::GR32_NOSPRegClassID, 4, 4, 1, 1 },
  { "GR32_NOAX_and_GR32_NOSP", GR32_NOAX_and_GR32_NOSP, GR32_NOAX_and_GR32_NOSPBits, 14, sizeof(GR32_NOAX_and_GR32_NOSPBits), X86::GR32_NOAX_and_GR32_NOSPRegClassID, 4, 4, 1, 1 },
  { "DEBUG_REG", DEBUG_REG, DEBUG_REGBits, 8, sizeof(DEBUG_REGBits), X86::DEBUG_REGRegClassID, 4, 4, 1, 1 },
  { "GR32_NOREX", GR32_NOREX, GR32_NOREXBits, 8, sizeof(GR32_NOREXBits), X86::GR32_NOREXRegClassID, 4, 4, 1, 1 },
  { "VK32", VK32, VK32Bits, 8, sizeof(VK32Bits), X86::VK32RegClassID, 4, 4, 1, 1 },
  { "GR32_NOAX_and_GR32_NOREX", GR32_NOAX_and_GR32_NOREX, GR32_NOAX_and_GR32_NOREXBits, 7, sizeof(GR32_NOAX_and_GR32_NOREXBits), X86::GR32_NOAX_and_GR32_NOREXRegClassID, 4, 4, 1, 1 },
  { "GR32_NOREX_NOSP", GR32_NOREX_NOSP, GR32_NOREX_NOSPBits, 7, sizeof(GR32_NOREX_NOSPBits), X86::GR32_NOREX_NOSPRegClassID, 4, 4, 1, 1 },
  { "RFP32", RFP32, RFP32Bits, 7, sizeof(RFP32Bits), X86::RFP32RegClassID, 4, 4, 1, 1 },
  { "VK32WM", VK32WM, VK32WMBits, 7, sizeof(VK32WMBits), X86::VK32WMRegClassID, 4, 4, 1, 1 },
  { "GR32_NOAX_and_GR32_NOREX_NOSP", GR32_NOAX_and_GR32_NOREX_NOSP, GR32_NOAX_and_GR32_NOREX_NOSPBits, 6, sizeof(GR32_NOAX_and_GR32_NOREX_NOSPBits), X86::GR32_NOAX_and_GR32_NOREX_NOSPRegClassID, 4, 4, 1, 1 },
  { "GR32_ABCD", GR32_ABCD, GR32_ABCDBits, 4, sizeof(GR32_ABCDBits), X86::GR32_ABCDRegClassID, 4, 4, 1, 1 },
  { "GR32_ABCD_and_GR32_NOAX", GR32_ABCD_and_GR32_NOAX, GR32_ABCD_and_GR32_NOAXBits, 3, sizeof(GR32_ABCD_and_GR32_NOAXBits), X86::GR32_ABCD_and_GR32_NOAXRegClassID, 4, 4, 1, 1 },
  { "GR32_TC", GR32_TC, GR32_TCBits, 3, sizeof(GR32_TCBits), X86::GR32_TCRegClassID, 4, 4, 1, 1 },
  { "GR32_AD", GR32_AD, GR32_ADBits, 2, sizeof(GR32_ADBits), X86::GR32_ADRegClassID, 4, 4, 1, 1 },
  { "GR32_NOAX_and_GR32_TC", GR32_NOAX_and_GR32_TC, GR32_NOAX_and_GR32_TCBits, 2, sizeof(GR32_NOAX_and_GR32_TCBits), X86::GR32_NOAX_and_GR32_TCRegClassID, 4, 4, 1, 1 },
  { "CCR", CCR, CCRBits, 1, sizeof(CCRBits), X86::CCRRegClassID, 4, 4, -1, 0 },
  { "GR32_AD_and_GR32_NOAX", GR32_AD_and_GR32_NOAX, GR32_AD_and_GR32_NOAXBits, 1, sizeof(GR32_AD_and_GR32_NOAXBits), X86::GR32_AD_and_GR32_NOAXRegClassID, 4, 4, 1, 1 },
  { "RFP64", RFP64, RFP64Bits, 7, sizeof(RFP64Bits), X86::RFP64RegClassID, 8, 4, 1, 1 },
  { "FR64X", FR64X, FR64XBits, 32, sizeof(FR64XBits), X86::FR64XRegClassID, 8, 8, 1, 1 },
  { "GR64", GR64, GR64Bits, 17, sizeof(GR64Bits), X86::GR64RegClassID, 8, 8, 1, 1 },
  { "CONTROL_REG", CONTROL_REG, CONTROL_REGBits, 16, sizeof(CONTROL_REGBits), X86::CONTROL_REGRegClassID, 8, 8, 1, 1 },
  { "FR64", FR64, FR64Bits, 16, sizeof(FR64Bits), X86::FR64RegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_8bit", GR64_with_sub_8bit, GR64_with_sub_8bitBits, 16, sizeof(GR64_with_sub_8bitBits), X86::GR64_with_sub_8bitRegClassID, 8, 8, 1, 1 },
  { "GR64_NOSP", GR64_NOSP, GR64_NOSPBits, 15, sizeof(GR64_NOSPBits), X86::GR64_NOSPRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_NOAX", GR64_with_sub_32bit_in_GR32_NOAX, GR64_with_sub_32bit_in_GR32_NOAXBits, 15, sizeof(GR64_with_sub_32bit_in_GR32_NOAXBits), X86::GR64_with_sub_32bit_in_GR32_NOAXRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP", GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP, GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPBits, 14, sizeof(GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPBits), X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClassID, 8, 8, 1, 1 },
  { "GR64_NOREX", GR64_NOREX, GR64_NOREXBits, 9, sizeof(GR64_NOREXBits), X86::GR64_NOREXRegClassID, 8, 8, 1, 1 },
  { "GR64_TC", GR64_TC, GR64_TCBits, 9, sizeof(GR64_TCBits), X86::GR64_TCRegClassID, 8, 8, 1, 1 },
  { "GR64_NOSP_and_GR64_TC", GR64_NOSP_and_GR64_TC, GR64_NOSP_and_GR64_TCBits, 8, sizeof(GR64_NOSP_and_GR64_TCBits), X86::GR64_NOSP_and_GR64_TCRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_16bit_in_GR16_NOREX", GR64_with_sub_16bit_in_GR16_NOREX, GR64_with_sub_16bit_in_GR16_NOREXBits, 8, sizeof(GR64_with_sub_16bit_in_GR16_NOREXBits), X86::GR64_with_sub_16bit_in_GR16_NOREXRegClassID, 8, 8, 1, 1 },
  { "VK64", VK64, VK64Bits, 8, sizeof(VK64Bits), X86::VK64RegClassID, 8, 8, 1, 1 },
  { "VR64", VR64, VR64Bits, 8, sizeof(VR64Bits), X86::VR64RegClassID, 8, 8, 1, 1 },
  { "GR64_NOREX_NOSP", GR64_NOREX_NOSP, GR64_NOREX_NOSPBits, 7, sizeof(GR64_NOREX_NOSPBits), X86::GR64_NOREX_NOSPRegClassID, 8, 8, 1, 1 },
  { "GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX", GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX, GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXBits, 7, sizeof(GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXBits), X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX", GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX, GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXBits, 7, sizeof(GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXBits), X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID, 8, 8, 1, 1 },
  { "VK64WM", VK64WM, VK64WMBits, 7, sizeof(VK64WMBits), X86::VK64WMRegClassID, 8, 8, 1, 1 },
  { "GR64_NOREX_and_GR64_TC", GR64_NOREX_and_GR64_TC, GR64_NOREX_and_GR64_TCBits, 6, sizeof(GR64_NOREX_and_GR64_TCBits), X86::GR64_NOREX_and_GR64_TCRegClassID, 8, 8, 1, 1 },
  { "GR64_TCW64", GR64_TCW64, GR64_TCW64Bits, 6, sizeof(GR64_TCW64Bits), X86::GR64_TCW64RegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP", GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP, GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPBits, 6, sizeof(GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPBits), X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClassID, 8, 8, 1, 1 },
  { "GR64_NOREX_NOSP_and_GR64_TC", GR64_NOREX_NOSP_and_GR64_TC, GR64_NOREX_NOSP_and_GR64_TCBits, 5, sizeof(GR64_NOREX_NOSP_and_GR64_TCBits), X86::GR64_NOREX_NOSP_and_GR64_TCRegClassID, 8, 8, 1, 1 },
  { "GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX", GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX, GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXBits, 5, sizeof(GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXBits), X86::GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID, 8, 8, 1, 1 },
  { "GR64_ABCD", GR64_ABCD, GR64_ABCDBits, 4, sizeof(GR64_ABCDBits), X86::GR64_ABCDRegClassID, 8, 8, 1, 1 },
  { "GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX", GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX, GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXBits, 4, sizeof(GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXBits), X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX", GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX, GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXBits, 3, sizeof(GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXBits), X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_TC", GR64_with_sub_32bit_in_GR32_TC, GR64_with_sub_32bit_in_GR32_TCBits, 3, sizeof(GR64_with_sub_32bit_in_GR32_TCBits), X86::GR64_with_sub_32bit_in_GR32_TCRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_AD", GR64_with_sub_32bit_in_GR32_AD, GR64_with_sub_32bit_in_GR32_ADBits, 2, sizeof(GR64_with_sub_32bit_in_GR32_ADBits), X86::GR64_with_sub_32bit_in_GR32_ADRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC", GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC, GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCBits, 2, sizeof(GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCBits), X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClassID, 8, 8, 1, 1 },
  { "GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX", GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX, GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXBits, 1, sizeof(GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXBits), X86::GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClassID, 8, 8, 1, 1 },
  { "RST", RST, RSTBits, 8, sizeof(RSTBits), X86::RSTRegClassID, 10, 4, 1, 0 },
  { "RFP80", RFP80, RFP80Bits, 7, sizeof(RFP80Bits), X86::RFP80RegClassID, 10, 4, 1, 1 },
  { "VR128X", VR128X, VR128XBits, 32, sizeof(VR128XBits), X86::VR128XRegClassID, 16, 16, 1, 1 },
  { "VR128", VR128, VR128Bits, 16, sizeof(VR128Bits), X86::VR128RegClassID, 16, 16, 1, 1 },
  { "VR256X", VR256X, VR256XBits, 32, sizeof(VR256XBits), X86::VR256XRegClassID, 32, 32, 1, 1 },
  { "VR256", VR256, VR256Bits, 16, sizeof(VR256Bits), X86::VR256RegClassID, 32, 32, 1, 1 },
  { "VR512", VR512, VR512Bits, 32, sizeof(VR512Bits), X86::VR512RegClassID, 64, 64, 1, 1 },
  { "VR512_with_sub_xmm_in_FR32", VR512_with_sub_xmm_in_FR32, VR512_with_sub_xmm_in_FR32Bits, 16, sizeof(VR512_with_sub_xmm_in_FR32Bits), X86::VR512_with_sub_xmm_in_FR32RegClassID, 64, 64, 1, 1 },
};

// X86 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0Dwarf2L[] = {
  { 0U, X86::RAX },
  { 1U, X86::RDX },
  { 2U, X86::RCX },
  { 3U, X86::RBX },
  { 4U, X86::RSI },
  { 5U, X86::RDI },
  { 6U, X86::RBP },
  { 7U, X86::RSP },
  { 8U, X86::R8 },
  { 9U, X86::R9 },
  { 10U, X86::R10 },
  { 11U, X86::R11 },
  { 12U, X86::R12 },
  { 13U, X86::R13 },
  { 14U, X86::R14 },
  { 15U, X86::R15 },
  { 16U, X86::RIP },
  { 17U, X86::XMM0 },
  { 18U, X86::XMM1 },
  { 19U, X86::XMM2 },
  { 20U, X86::XMM3 },
  { 21U, X86::XMM4 },
  { 22U, X86::XMM5 },
  { 23U, X86::XMM6 },
  { 24U, X86::XMM7 },
  { 25U, X86::XMM8 },
  { 26U, X86::XMM9 },
  { 27U, X86::XMM10 },
  { 28U, X86::XMM11 },
  { 29U, X86::XMM12 },
  { 30U, X86::XMM13 },
  { 31U, X86::XMM14 },
  { 32U, X86::XMM15 },
  { 33U, X86::ST0 },
  { 34U, X86::ST1 },
  { 35U, X86::ST2 },
  { 36U, X86::ST3 },
  { 37U, X86::ST4 },
  { 38U, X86::ST5 },
  { 39U, X86::ST6 },
  { 40U, X86::ST7 },
  { 41U, X86::MM0 },
  { 42U, X86::MM1 },
  { 43U, X86::MM2 },
  { 44U, X86::MM3 },
  { 45U, X86::MM4 },
  { 46U, X86::MM5 },
  { 47U, X86::MM6 },
  { 48U, X86::MM7 },
  { 60U, X86::XMM16 },
  { 61U, X86::XMM17 },
  { 62U, X86::XMM18 },
  { 63U, X86::XMM19 },
  { 64U, X86::XMM20 },
  { 65U, X86::XMM21 },
  { 66U, X86::XMM22 },
  { 67U, X86::XMM23 },
  { 68U, X86::XMM24 },
  { 69U, X86::XMM25 },
  { 70U, X86::XMM26 },
  { 71U, X86::XMM27 },
  { 72U, X86::XMM28 },
  { 73U, X86::XMM29 },
  { 74U, X86::XMM30 },
  { 75U, X86::XMM31 },
  { 118U, X86::K0 },
  { 119U, X86::K1 },
  { 120U, X86::K2 },
  { 121U, X86::K3 },
  { 122U, X86::K4 },
  { 123U, X86::K5 },
  { 124U, X86::K6 },
  { 125U, X86::K7 },
};
extern const unsigned X86DwarfFlavour0Dwarf2LSize = sizeof(X86DwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::EBP },
  { 5U, X86::ESP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 12U, X86::ST0 },
  { 13U, X86::ST1 },
  { 14U, X86::ST2 },
  { 15U, X86::ST3 },
  { 16U, X86::ST4 },
  { 17U, X86::ST5 },
  { 18U, X86::ST6 },
  { 19U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
};
extern const unsigned X86DwarfFlavour1Dwarf2LSize = sizeof(X86DwarfFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::ESP },
  { 5U, X86::EBP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 11U, X86::ST0 },
  { 12U, X86::ST1 },
  { 13U, X86::ST2 },
  { 14U, X86::ST3 },
  { 15U, X86::ST4 },
  { 16U, X86::ST5 },
  { 17U, X86::ST6 },
  { 18U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
};
extern const unsigned X86DwarfFlavour2Dwarf2LSize = sizeof(X86DwarfFlavour2Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0Dwarf2L[] = {
  { 0U, X86::RAX },
  { 1U, X86::RDX },
  { 2U, X86::RCX },
  { 3U, X86::RBX },
  { 4U, X86::RSI },
  { 5U, X86::RDI },
  { 6U, X86::RBP },
  { 7U, X86::RSP },
  { 8U, X86::R8 },
  { 9U, X86::R9 },
  { 10U, X86::R10 },
  { 11U, X86::R11 },
  { 12U, X86::R12 },
  { 13U, X86::R13 },
  { 14U, X86::R14 },
  { 15U, X86::R15 },
  { 16U, X86::RIP },
  { 17U, X86::XMM0 },
  { 18U, X86::XMM1 },
  { 19U, X86::XMM2 },
  { 20U, X86::XMM3 },
  { 21U, X86::XMM4 },
  { 22U, X86::XMM5 },
  { 23U, X86::XMM6 },
  { 24U, X86::XMM7 },
  { 25U, X86::XMM8 },
  { 26U, X86::XMM9 },
  { 27U, X86::XMM10 },
  { 28U, X86::XMM11 },
  { 29U, X86::XMM12 },
  { 30U, X86::XMM13 },
  { 31U, X86::XMM14 },
  { 32U, X86::XMM15 },
  { 33U, X86::ST0 },
  { 34U, X86::ST1 },
  { 35U, X86::ST2 },
  { 36U, X86::ST3 },
  { 37U, X86::ST4 },
  { 38U, X86::ST5 },
  { 39U, X86::ST6 },
  { 40U, X86::ST7 },
  { 41U, X86::MM0 },
  { 42U, X86::MM1 },
  { 43U, X86::MM2 },
  { 44U, X86::MM3 },
  { 45U, X86::MM4 },
  { 46U, X86::MM5 },
  { 47U, X86::MM6 },
  { 48U, X86::MM7 },
  { 60U, X86::XMM16 },
  { 61U, X86::XMM17 },
  { 62U, X86::XMM18 },
  { 63U, X86::XMM19 },
  { 64U, X86::XMM20 },
  { 65U, X86::XMM21 },
  { 66U, X86::XMM22 },
  { 67U, X86::XMM23 },
  { 68U, X86::XMM24 },
  { 69U, X86::XMM25 },
  { 70U, X86::XMM26 },
  { 71U, X86::XMM27 },
  { 72U, X86::XMM28 },
  { 73U, X86::XMM29 },
  { 74U, X86::XMM30 },
  { 75U, X86::XMM31 },
  { 118U, X86::K0 },
  { 119U, X86::K1 },
  { 120U, X86::K2 },
  { 121U, X86::K3 },
  { 122U, X86::K4 },
  { 123U, X86::K5 },
  { 124U, X86::K6 },
  { 125U, X86::K7 },
};
extern const unsigned X86EHFlavour0Dwarf2LSize = sizeof(X86EHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::EBP },
  { 5U, X86::ESP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 12U, X86::ST0 },
  { 13U, X86::ST1 },
  { 14U, X86::ST2 },
  { 15U, X86::ST3 },
  { 16U, X86::ST4 },
  { 17U, X86::ST5 },
  { 18U, X86::ST6 },
  { 19U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
};
extern const unsigned X86EHFlavour1Dwarf2LSize = sizeof(X86EHFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::ESP },
  { 5U, X86::EBP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 11U, X86::ST0 },
  { 12U, X86::ST1 },
  { 13U, X86::ST2 },
  { 14U, X86::ST3 },
  { 15U, X86::ST4 },
  { 16U, X86::ST5 },
  { 17U, X86::ST6 },
  { 18U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
};
extern const unsigned X86EHFlavour2Dwarf2LSize = sizeof(X86EHFlavour2Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0L2Dwarf[] = {
  { X86::EAX, -2U },
  { X86::EBP, -2U },
  { X86::EBX, -2U },
  { X86::ECX, -2U },
  { X86::EDI, -2U },
  { X86::EDX, -2U },
  { X86::EIP, -2U },
  { X86::ESI, -2U },
  { X86::ESP, -2U },
  { X86::RAX, 0U },
  { X86::RBP, 6U },
  { X86::RBX, 3U },
  { X86::RCX, 2U },
  { X86::RDI, 5U },
  { X86::RDX, 1U },
  { X86::RIP, 16U },
  { X86::RSI, 4U },
  { X86::RSP, 7U },
  { X86::K0, 118U },
  { X86::K1, 119U },
  { X86::K2, 120U },
  { X86::K3, 121U },
  { X86::K4, 122U },
  { X86::K5, 123U },
  { X86::K6, 124U },
  { X86::K7, 125U },
  { X86::MM0, 41U },
  { X86::MM1, 42U },
  { X86::MM2, 43U },
  { X86::MM3, 44U },
  { X86::MM4, 45U },
  { X86::MM5, 46U },
  { X86::MM6, 47U },
  { X86::MM7, 48U },
  { X86::R8, 8U },
  { X86::R9, 9U },
  { X86::R10, 10U },
  { X86::R11, 11U },
  { X86::R12, 12U },
  { X86::R13, 13U },
  { X86::R14, 14U },
  { X86::R15, 15U },
  { X86::ST0, 33U },
  { X86::ST1, 34U },
  { X86::ST2, 35U },
  { X86::ST3, 36U },
  { X86::ST4, 37U },
  { X86::ST5, 38U },
  { X86::ST6, 39U },
  { X86::ST7, 40U },
  { X86::XMM0, 17U },
  { X86::XMM1, 18U },
  { X86::XMM2, 19U },
  { X86::XMM3, 20U },
  { X86::XMM4, 21U },
  { X86::XMM5, 22U },
  { X86::XMM6, 23U },
  { X86::XMM7, 24U },
  { X86::XMM8, 25U },
  { X86::XMM9, 26U },
  { X86::XMM10, 27U },
  { X86::XMM11, 28U },
  { X86::XMM12, 29U },
  { X86::XMM13, 30U },
  { X86::XMM14, 31U },
  { X86::XMM15, 32U },
  { X86::XMM16, 60U },
  { X86::XMM17, 61U },
  { X86::XMM18, 62U },
  { X86::XMM19, 63U },
  { X86::XMM20, 64U },
  { X86::XMM21, 65U },
  { X86::XMM22, 66U },
  { X86::XMM23, 67U },
  { X86::XMM24, 68U },
  { X86::XMM25, 69U },
  { X86::XMM26, 70U },
  { X86::XMM27, 71U },
  { X86::XMM28, 72U },
  { X86::XMM29, 73U },
  { X86::XMM30, 74U },
  { X86::XMM31, 75U },
  { X86::YMM0, 17U },
  { X86::YMM1, 18U },
  { X86::YMM2, 19U },
  { X86::YMM3, 20U },
  { X86::YMM4, 21U },
  { X86::YMM5, 22U },
  { X86::YMM6, 23U },
  { X86::YMM7, 24U },
  { X86::YMM8, 25U },
  { X86::YMM9, 26U },
  { X86::YMM10, 27U },
  { X86::YMM11, 28U },
  { X86::YMM12, 29U },
  { X86::YMM13, 30U },
  { X86::YMM14, 31U },
  { X86::YMM15, 32U },
  { X86::YMM16, 60U },
  { X86::YMM17, 61U },
  { X86::YMM18, 62U },
  { X86::YMM19, 63U },
  { X86::YMM20, 64U },
  { X86::YMM21, 65U },
  { X86::YMM22, 66U },
  { X86::YMM23, 67U },
  { X86::YMM24, 68U },
  { X86::YMM25, 69U },
  { X86::YMM26, 70U },
  { X86::YMM27, 71U },
  { X86::YMM28, 72U },
  { X86::YMM29, 73U },
  { X86::YMM30, 74U },
  { X86::YMM31, 75U },
  { X86::ZMM0, 17U },
  { X86::ZMM1, 18U },
  { X86::ZMM2, 19U },
  { X86::ZMM3, 20U },
  { X86::ZMM4, 21U },
  { X86::ZMM5, 22U },
  { X86::ZMM6, 23U },
  { X86::ZMM7, 24U },
  { X86::ZMM8, 25U },
  { X86::ZMM9, 26U },
  { X86::ZMM10, 27U },
  { X86::ZMM11, 28U },
  { X86::ZMM12, 29U },
  { X86::ZMM13, 30U },
  { X86::ZMM14, 31U },
  { X86::ZMM15, 32U },
  { X86::ZMM16, 60U },
  { X86::ZMM17, 61U },
  { X86::ZMM18, 62U },
  { X86::ZMM19, 63U },
  { X86::ZMM20, 64U },
  { X86::ZMM21, 65U },
  { X86::ZMM22, 66U },
  { X86::ZMM23, 67U },
  { X86::ZMM24, 68U },
  { X86::ZMM25, 69U },
  { X86::ZMM26, 70U },
  { X86::ZMM27, 71U },
  { X86::ZMM28, 72U },
  { X86::ZMM29, 73U },
  { X86::ZMM30, 74U },
  { X86::ZMM31, 75U },
};
extern const unsigned X86DwarfFlavour0L2DwarfSize = sizeof(X86DwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 4U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 5U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, -2U },
  { X86::K1, -2U },
  { X86::K2, -2U },
  { X86::K3, -2U },
  { X86::K4, -2U },
  { X86::K5, -2U },
  { X86::K6, -2U },
  { X86::K7, -2U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 12U },
  { X86::ST1, 13U },
  { X86::ST2, 14U },
  { X86::ST3, 15U },
  { X86::ST4, 16U },
  { X86::ST5, 17U },
  { X86::ST6, 18U },
  { X86::ST7, 19U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86DwarfFlavour1L2DwarfSize = sizeof(X86DwarfFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 5U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 4U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, -2U },
  { X86::K1, -2U },
  { X86::K2, -2U },
  { X86::K3, -2U },
  { X86::K4, -2U },
  { X86::K5, -2U },
  { X86::K6, -2U },
  { X86::K7, -2U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 11U },
  { X86::ST1, 12U },
  { X86::ST2, 13U },
  { X86::ST3, 14U },
  { X86::ST4, 15U },
  { X86::ST5, 16U },
  { X86::ST6, 17U },
  { X86::ST7, 18U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86DwarfFlavour2L2DwarfSize = sizeof(X86DwarfFlavour2L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0L2Dwarf[] = {
  { X86::EAX, -2U },
  { X86::EBP, -2U },
  { X86::EBX, -2U },
  { X86::ECX, -2U },
  { X86::EDI, -2U },
  { X86::EDX, -2U },
  { X86::EIP, -2U },
  { X86::ESI, -2U },
  { X86::ESP, -2U },
  { X86::RAX, 0U },
  { X86::RBP, 6U },
  { X86::RBX, 3U },
  { X86::RCX, 2U },
  { X86::RDI, 5U },
  { X86::RDX, 1U },
  { X86::RIP, 16U },
  { X86::RSI, 4U },
  { X86::RSP, 7U },
  { X86::K0, 118U },
  { X86::K1, 119U },
  { X86::K2, 120U },
  { X86::K3, 121U },
  { X86::K4, 122U },
  { X86::K5, 123U },
  { X86::K6, 124U },
  { X86::K7, 125U },
  { X86::MM0, 41U },
  { X86::MM1, 42U },
  { X86::MM2, 43U },
  { X86::MM3, 44U },
  { X86::MM4, 45U },
  { X86::MM5, 46U },
  { X86::MM6, 47U },
  { X86::MM7, 48U },
  { X86::R8, 8U },
  { X86::R9, 9U },
  { X86::R10, 10U },
  { X86::R11, 11U },
  { X86::R12, 12U },
  { X86::R13, 13U },
  { X86::R14, 14U },
  { X86::R15, 15U },
  { X86::ST0, 33U },
  { X86::ST1, 34U },
  { X86::ST2, 35U },
  { X86::ST3, 36U },
  { X86::ST4, 37U },
  { X86::ST5, 38U },
  { X86::ST6, 39U },
  { X86::ST7, 40U },
  { X86::XMM0, 17U },
  { X86::XMM1, 18U },
  { X86::XMM2, 19U },
  { X86::XMM3, 20U },
  { X86::XMM4, 21U },
  { X86::XMM5, 22U },
  { X86::XMM6, 23U },
  { X86::XMM7, 24U },
  { X86::XMM8, 25U },
  { X86::XMM9, 26U },
  { X86::XMM10, 27U },
  { X86::XMM11, 28U },
  { X86::XMM12, 29U },
  { X86::XMM13, 30U },
  { X86::XMM14, 31U },
  { X86::XMM15, 32U },
  { X86::XMM16, 60U },
  { X86::XMM17, 61U },
  { X86::XMM18, 62U },
  { X86::XMM19, 63U },
  { X86::XMM20, 64U },
  { X86::XMM21, 65U },
  { X86::XMM22, 66U },
  { X86::XMM23, 67U },
  { X86::XMM24, 68U },
  { X86::XMM25, 69U },
  { X86::XMM26, 70U },
  { X86::XMM27, 71U },
  { X86::XMM28, 72U },
  { X86::XMM29, 73U },
  { X86::XMM30, 74U },
  { X86::XMM31, 75U },
  { X86::YMM0, 17U },
  { X86::YMM1, 18U },
  { X86::YMM2, 19U },
  { X86::YMM3, 20U },
  { X86::YMM4, 21U },
  { X86::YMM5, 22U },
  { X86::YMM6, 23U },
  { X86::YMM7, 24U },
  { X86::YMM8, 25U },
  { X86::YMM9, 26U },
  { X86::YMM10, 27U },
  { X86::YMM11, 28U },
  { X86::YMM12, 29U },
  { X86::YMM13, 30U },
  { X86::YMM14, 31U },
  { X86::YMM15, 32U },
  { X86::YMM16, 60U },
  { X86::YMM17, 61U },
  { X86::YMM18, 62U },
  { X86::YMM19, 63U },
  { X86::YMM20, 64U },
  { X86::YMM21, 65U },
  { X86::YMM22, 66U },
  { X86::YMM23, 67U },
  { X86::YMM24, 68U },
  { X86::YMM25, 69U },
  { X86::YMM26, 70U },
  { X86::YMM27, 71U },
  { X86::YMM28, 72U },
  { X86::YMM29, 73U },
  { X86::YMM30, 74U },
  { X86::YMM31, 75U },
  { X86::ZMM0, 17U },
  { X86::ZMM1, 18U },
  { X86::ZMM2, 19U },
  { X86::ZMM3, 20U },
  { X86::ZMM4, 21U },
  { X86::ZMM5, 22U },
  { X86::ZMM6, 23U },
  { X86::ZMM7, 24U },
  { X86::ZMM8, 25U },
  { X86::ZMM9, 26U },
  { X86::ZMM10, 27U },
  { X86::ZMM11, 28U },
  { X86::ZMM12, 29U },
  { X86::ZMM13, 30U },
  { X86::ZMM14, 31U },
  { X86::ZMM15, 32U },
  { X86::ZMM16, 60U },
  { X86::ZMM17, 61U },
  { X86::ZMM18, 62U },
  { X86::ZMM19, 63U },
  { X86::ZMM20, 64U },
  { X86::ZMM21, 65U },
  { X86::ZMM22, 66U },
  { X86::ZMM23, 67U },
  { X86::ZMM24, 68U },
  { X86::ZMM25, 69U },
  { X86::ZMM26, 70U },
  { X86::ZMM27, 71U },
  { X86::ZMM28, 72U },
  { X86::ZMM29, 73U },
  { X86::ZMM30, 74U },
  { X86::ZMM31, 75U },
};
extern const unsigned X86EHFlavour0L2DwarfSize = sizeof(X86EHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 4U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 5U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, -2U },
  { X86::K1, -2U },
  { X86::K2, -2U },
  { X86::K3, -2U },
  { X86::K4, -2U },
  { X86::K5, -2U },
  { X86::K6, -2U },
  { X86::K7, -2U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 12U },
  { X86::ST1, 13U },
  { X86::ST2, 14U },
  { X86::ST3, 15U },
  { X86::ST4, 16U },
  { X86::ST5, 17U },
  { X86::ST6, 18U },
  { X86::ST7, 19U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86EHFlavour1L2DwarfSize = sizeof(X86EHFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 5U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 4U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, -2U },
  { X86::K1, -2U },
  { X86::K2, -2U },
  { X86::K3, -2U },
  { X86::K4, -2U },
  { X86::K5, -2U },
  { X86::K6, -2U },
  { X86::K7, -2U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 11U },
  { X86::ST1, 12U },
  { X86::ST2, 13U },
  { X86::ST3, 14U },
  { X86::ST4, 15U },
  { X86::ST5, 16U },
  { X86::ST6, 17U },
  { X86::ST7, 18U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86EHFlavour2L2DwarfSize = sizeof(X86EHFlavour2L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t X86RegEncodingTable[] = {
  0,
  4,
  0,
  0,
  7,
  3,
  5,
  5,
  3,
  5,
  1,
  1,
  1,
  6,
  7,
  7,
  2,
  3,
  2,
  0,
  5,
  3,
  1,
  7,
  2,
  0,
  0,
  4,
  0,
  6,
  4,
  0,
  4,
  5,
  0,
  0,
  5,
  3,
  1,
  7,
  2,
  0,
  4,
  6,
  4,
  6,
  6,
  4,
  4,
  2,
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
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  0,
  0,
  0,
  0,
  0,
  0,
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
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
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
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
};
static inline void InitX86MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(X86RegDesc, 234, RA, PC, X86MCRegisterClasses, 79, X86RegUnitRoots, 119, X86RegDiffLists, X86RegStrings, X86SubRegIdxLists, 7,
X86SubRegIdxRanges,   X86RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(X86DwarfFlavour0Dwarf2L, X86DwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(X86DwarfFlavour1Dwarf2L, X86DwarfFlavour1Dwarf2LSize, false);
    break;
  case 2:
    RI->mapDwarfRegsToLLVMRegs(X86DwarfFlavour2Dwarf2L, X86DwarfFlavour2Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(X86EHFlavour0Dwarf2L, X86EHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(X86EHFlavour1Dwarf2L, X86EHFlavour1Dwarf2LSize, true);
    break;
  case 2:
    RI->mapDwarfRegsToLLVMRegs(X86EHFlavour2Dwarf2L, X86EHFlavour2Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(X86DwarfFlavour0L2Dwarf, X86DwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(X86DwarfFlavour1L2Dwarf, X86DwarfFlavour1L2DwarfSize, false);
    break;
  case 2:
    RI->mapLLVMRegsToDwarfRegs(X86DwarfFlavour2L2Dwarf, X86DwarfFlavour2L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(X86EHFlavour0L2Dwarf, X86EHFlavour0L2DwarfSize, true);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(X86EHFlavour1L2Dwarf, X86EHFlavour1L2DwarfSize, true);
    break;
  case 2:
    RI->mapLLVMRegsToDwarfRegs(X86EHFlavour2L2Dwarf, X86EHFlavour2L2DwarfSize, true);
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

struct X86GenRegisterInfo : public TargetRegisterInfo {
  explicit X86GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace X86 { // Register classes
  extern const TargetRegisterClass GR8RegClass;
  extern const TargetRegisterClass GR8_NOREXRegClass;
  extern const TargetRegisterClass GR8_ABCD_HRegClass;
  extern const TargetRegisterClass GR8_ABCD_LRegClass;
  extern const TargetRegisterClass GR16RegClass;
  extern const TargetRegisterClass GR16_NOREXRegClass;
  extern const TargetRegisterClass VK1RegClass;
  extern const TargetRegisterClass VK16RegClass;
  extern const TargetRegisterClass VK2RegClass;
  extern const TargetRegisterClass VK4RegClass;
  extern const TargetRegisterClass VK8RegClass;
  extern const TargetRegisterClass VK16WMRegClass;
  extern const TargetRegisterClass VK1WMRegClass;
  extern const TargetRegisterClass VK2WMRegClass;
  extern const TargetRegisterClass VK4WMRegClass;
  extern const TargetRegisterClass VK8WMRegClass;
  extern const TargetRegisterClass SEGMENT_REGRegClass;
  extern const TargetRegisterClass GR16_ABCDRegClass;
  extern const TargetRegisterClass FPCCRRegClass;
  extern const TargetRegisterClass FR32XRegClass;
  extern const TargetRegisterClass FR32RegClass;
  extern const TargetRegisterClass GR32RegClass;
  extern const TargetRegisterClass GR32_NOAXRegClass;
  extern const TargetRegisterClass GR32_NOSPRegClass;
  extern const TargetRegisterClass GR32_NOAX_and_GR32_NOSPRegClass;
  extern const TargetRegisterClass DEBUG_REGRegClass;
  extern const TargetRegisterClass GR32_NOREXRegClass;
  extern const TargetRegisterClass VK32RegClass;
  extern const TargetRegisterClass GR32_NOAX_and_GR32_NOREXRegClass;
  extern const TargetRegisterClass GR32_NOREX_NOSPRegClass;
  extern const TargetRegisterClass RFP32RegClass;
  extern const TargetRegisterClass VK32WMRegClass;
  extern const TargetRegisterClass GR32_NOAX_and_GR32_NOREX_NOSPRegClass;
  extern const TargetRegisterClass GR32_ABCDRegClass;
  extern const TargetRegisterClass GR32_ABCD_and_GR32_NOAXRegClass;
  extern const TargetRegisterClass GR32_TCRegClass;
  extern const TargetRegisterClass GR32_ADRegClass;
  extern const TargetRegisterClass GR32_NOAX_and_GR32_TCRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass GR32_AD_and_GR32_NOAXRegClass;
  extern const TargetRegisterClass RFP64RegClass;
  extern const TargetRegisterClass FR64XRegClass;
  extern const TargetRegisterClass GR64RegClass;
  extern const TargetRegisterClass CONTROL_REGRegClass;
  extern const TargetRegisterClass FR64RegClass;
  extern const TargetRegisterClass GR64_with_sub_8bitRegClass;
  extern const TargetRegisterClass GR64_NOSPRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAXRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass;
  extern const TargetRegisterClass GR64_NOREXRegClass;
  extern const TargetRegisterClass GR64_TCRegClass;
  extern const TargetRegisterClass GR64_NOSP_and_GR64_TCRegClass;
  extern const TargetRegisterClass GR64_with_sub_16bit_in_GR16_NOREXRegClass;
  extern const TargetRegisterClass VK64RegClass;
  extern const TargetRegisterClass VR64RegClass;
  extern const TargetRegisterClass GR64_NOREX_NOSPRegClass;
  extern const TargetRegisterClass GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass;
  extern const TargetRegisterClass VK64WMRegClass;
  extern const TargetRegisterClass GR64_NOREX_and_GR64_TCRegClass;
  extern const TargetRegisterClass GR64_TCW64RegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass;
  extern const TargetRegisterClass GR64_NOREX_NOSP_and_GR64_TCRegClass;
  extern const TargetRegisterClass GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass;
  extern const TargetRegisterClass GR64_ABCDRegClass;
  extern const TargetRegisterClass GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_TCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ADRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClass;
  extern const TargetRegisterClass RSTRegClass;
  extern const TargetRegisterClass RFP80RegClass;
  extern const TargetRegisterClass VR128XRegClass;
  extern const TargetRegisterClass VR128RegClass;
  extern const TargetRegisterClass VR256XRegClass;
  extern const TargetRegisterClass VR256RegClass;
  extern const TargetRegisterClass VR512RegClass;
  extern const TargetRegisterClass VR512_with_sub_xmm_in_FR32RegClass;
} // end of namespace X86

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

extern const MCRegisterClass X86MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i8, MVT::Other,
  /* 4 */ MVT::i16, MVT::Other,
  /* 6 */ MVT::i32, MVT::Other,
  /* 8 */ MVT::i64, MVT::Other,
  /* 10 */ MVT::f80, MVT::f64, MVT::f32, MVT::Other,
  /* 14 */ MVT::f64, MVT::Other,
  /* 16 */ MVT::f80, MVT::Other,
  /* 18 */ MVT::v2i1, MVT::Other,
  /* 20 */ MVT::v4i1, MVT::Other,
  /* 22 */ MVT::v8i1, MVT::Other,
  /* 24 */ MVT::v16i1, MVT::Other,
  /* 26 */ MVT::v32i1, MVT::Other,
  /* 28 */ MVT::v64i1, MVT::Other,
  /* 30 */ MVT::v16f32, MVT::v8f64, MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::v8i64, MVT::Other,
  /* 37 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::v4f32, MVT::v2f64, MVT::Other,
  /* 44 */ MVT::v32i8, MVT::v16i16, MVT::v8i32, MVT::v4i64, MVT::v8f32, MVT::v4f64, MVT::Other,
  /* 51 */ MVT::x86mmx, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_8bit", "sub_8bit_hi", "sub_16bit", "sub_32bit", "sub_xmm", "sub_ymm" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_8bit
  0x00000002, // sub_8bit_hi
  0x00000003, // sub_16bit
  0x00000003, // sub_32bit
  0x00000004, // sub_xmm
  0x00000004, // sub_ymm
 };



static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GR8SubClassMask[] = {
  0x0000000f, 0x00000000, 0x00000000, 
  0x35e20030, 0xf399e0bf, 0x0000007f, // sub_8bit
  0x00020000, 0x000000be, 0x0000007d, // sub_8bit_hi
};

static const uint32_t GR8_NOREXSubClassMask[] = {
  0x0000000e, 0x00000000, 0x00000000, 
  0x00020000, 0x000000be, 0x0000007d, // sub_8bit
  0x00020000, 0x000000be, 0x0000007d, // sub_8bit_hi
};

static const uint32_t GR8_ABCD_HSubClassMask[] = {
  0x00000004, 0x00000000, 0x00000000, 
  0x00020000, 0x000000be, 0x0000007d, // sub_8bit_hi
};

static const uint32_t GR8_ABCD_LSubClassMask[] = {
  0x00000008, 0x00000000, 0x00000000, 
  0x00020000, 0x000000be, 0x0000007d, // sub_8bit
};

static const uint32_t GR16SubClassMask[] = {
  0x00020030, 0x00000000, 0x00000000, 
  0x35e00000, 0xf399e0bf, 0x0000007f, // sub_16bit
};

static const uint32_t GR16_NOREXSubClassMask[] = {
  0x00020020, 0x00000000, 0x00000000, 
  0x34000000, 0x629000bf, 0x0000007f, // sub_16bit
};

static const uint32_t VK1SubClassMask[] = {
  0x8800ffc0, 0x04200000, 0x00000000, 
};

static const uint32_t VK16SubClassMask[] = {
  0x8800ffc0, 0x04200000, 0x00000000, 
};

static const uint32_t VK2SubClassMask[] = {
  0x8800ffc0, 0x04200000, 0x00000000, 
};

static const uint32_t VK4SubClassMask[] = {
  0x8800ffc0, 0x04200000, 0x00000000, 
};

static const uint32_t VK8SubClassMask[] = {
  0x8800ffc0, 0x04200000, 0x00000000, 
};

static const uint32_t VK16WMSubClassMask[] = {
  0x8000f800, 0x04000000, 0x00000000, 
};

static const uint32_t VK1WMSubClassMask[] = {
  0x8000f800, 0x04000000, 0x00000000, 
};

static const uint32_t VK2WMSubClassMask[] = {
  0x8000f800, 0x04000000, 0x00000000, 
};

static const uint32_t VK4WMSubClassMask[] = {
  0x8000f800, 0x04000000, 0x00000000, 
};

static const uint32_t VK8WMSubClassMask[] = {
  0x8000f800, 0x04000000, 0x00000000, 
};

static const uint32_t SEGMENT_REGSubClassMask[] = {
  0x00010000, 0x00000000, 0x00000000, 
};

static const uint32_t GR16_ABCDSubClassMask[] = {
  0x00020000, 0x00000000, 0x00000000, 
  0x00000000, 0x000000be, 0x0000007d, // sub_16bit
};

static const uint32_t FPCCRSubClassMask[] = {
  0x00040000, 0x00000000, 0x00000000, 
};

static const uint32_t FR32XSubClassMask[] = {
  0x00180000, 0x00001200, 0x00000600, 
  0x00000000, 0x00000000, 0x00007800, // sub_xmm
};

static const uint32_t FR32SubClassMask[] = {
  0x00100000, 0x00001000, 0x00000400, 
  0x00000000, 0x00000000, 0x00005000, // sub_xmm
};

static const uint32_t GR32SubClassMask[] = {
  0x35e00000, 0x000000bf, 0x00000000, 
  0x00000000, 0xf399e000, 0x0000007f, // sub_32bit
};

static const uint32_t GR32_NOAXSubClassMask[] = {
  0x11400000, 0x000000a5, 0x00000000, 
  0x00000000, 0xa3018000, 0x00000066, // sub_32bit
};

static const uint32_t GR32_NOSPSubClassMask[] = {
  0x21800000, 0x000000bf, 0x00000000, 
  0x00000000, 0xf1894000, 0x0000007f, // sub_32bit
};

static const uint32_t GR32_NOAX_and_GR32_NOSPSubClassMask[] = {
  0x01000000, 0x000000a5, 0x00000000, 
  0x00000000, 0xa1010000, 0x00000066, // sub_32bit
};

static const uint32_t DEBUG_REGSubClassMask[] = {
  0x02000000, 0x00000000, 0x00000000, 
};

static const uint32_t GR32_NOREXSubClassMask[] = {
  0x34000000, 0x000000bf, 0x00000000, 
  0x00000000, 0x62900000, 0x0000007f, // sub_32bit
};

static const uint32_t VK32SubClassMask[] = {
  0x88000000, 0x04200000, 0x00000000, 
};

static const uint32_t GR32_NOAX_and_GR32_NOREXSubClassMask[] = {
  0x10000000, 0x000000a5, 0x00000000, 
  0x00000000, 0x22000000, 0x00000066, // sub_32bit
};

static const uint32_t GR32_NOREX_NOSPSubClassMask[] = {
  0x20000000, 0x000000bf, 0x00000000, 
  0x00000000, 0x60800000, 0x0000007f, // sub_32bit
};

static const uint32_t RFP32SubClassMask[] = {
  0x40000000, 0x00000100, 0x00000100, 
};

static const uint32_t VK32WMSubClassMask[] = {
  0x80000000, 0x04000000, 0x00000000, 
};

static const uint32_t GR32_NOAX_and_GR32_NOREX_NOSPSubClassMask[] = {
  0x00000000, 0x000000a5, 0x00000000, 
  0x00000000, 0x20000000, 0x00000066, // sub_32bit
};

static const uint32_t GR32_ABCDSubClassMask[] = {
  0x00000000, 0x000000be, 0x00000000, 
  0x00000000, 0x00000000, 0x0000007d, // sub_32bit
};

static const uint32_t GR32_ABCD_and_GR32_NOAXSubClassMask[] = {
  0x00000000, 0x000000a4, 0x00000000, 
  0x00000000, 0x00000000, 0x00000064, // sub_32bit
};

static const uint32_t GR32_TCSubClassMask[] = {
  0x00000000, 0x000000b8, 0x00000000, 
  0x00000000, 0x00000000, 0x00000078, // sub_32bit
};

static const uint32_t GR32_ADSubClassMask[] = {
  0x00000000, 0x00000090, 0x00000000, 
  0x00000000, 0x00000000, 0x00000050, // sub_32bit
};

static const uint32_t GR32_NOAX_and_GR32_TCSubClassMask[] = {
  0x00000000, 0x000000a0, 0x00000000, 
  0x00000000, 0x00000000, 0x00000060, // sub_32bit
};

static const uint32_t CCRSubClassMask[] = {
  0x00000000, 0x00000040, 0x00000000, 
};

static const uint32_t GR32_AD_and_GR32_NOAXSubClassMask[] = {
  0x00000000, 0x00000080, 0x00000000, 
  0x00000000, 0x00000000, 0x00000040, // sub_32bit
};

static const uint32_t RFP64SubClassMask[] = {
  0x00000000, 0x00000100, 0x00000100, 
};

static const uint32_t FR64XSubClassMask[] = {
  0x00000000, 0x00001200, 0x00000600, 
  0x00000000, 0x00000000, 0x00007800, // sub_xmm
};

static const uint32_t GR64SubClassMask[] = {
  0x00000000, 0xfb9fe400, 0x0000007f, 
};

static const uint32_t CONTROL_REGSubClassMask[] = {
  0x00000000, 0x00000800, 0x00000000, 
};

static const uint32_t FR64SubClassMask[] = {
  0x00000000, 0x00001000, 0x00000400, 
  0x00000000, 0x00000000, 0x00005000, // sub_xmm
};

static const uint32_t GR64_with_sub_8bitSubClassMask[] = {
  0x00000000, 0xf399e000, 0x0000007f, 
};

static const uint32_t GR64_NOSPSubClassMask[] = {
  0x00000000, 0xf1894000, 0x0000007f, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_NOAXSubClassMask[] = {
  0x00000000, 0xa3018000, 0x00000066, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPSubClassMask[] = {
  0x00000000, 0xa1010000, 0x00000066, 
};

static const uint32_t GR64_NOREXSubClassMask[] = {
  0x00000000, 0x6a920000, 0x0000007f, 
};

static const uint32_t GR64_TCSubClassMask[] = {
  0x00000000, 0xd90c0000, 0x0000007a, 
};

static const uint32_t GR64_NOSP_and_GR64_TCSubClassMask[] = {
  0x00000000, 0xd1080000, 0x0000007a, 
};

static const uint32_t GR64_with_sub_16bit_in_GR16_NOREXSubClassMask[] = {
  0x00000000, 0x62900000, 0x0000007f, 
};

static const uint32_t VK64SubClassMask[] = {
  0x00000000, 0x04200000, 0x00000000, 
};

static const uint32_t VR64SubClassMask[] = {
  0x00000000, 0x00400000, 0x00000000, 
};

static const uint32_t GR64_NOREX_NOSPSubClassMask[] = {
  0x00000000, 0x60800000, 0x0000007f, 
};

static const uint32_t GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXSubClassMask[] = {
  0x00000000, 0x81000000, 0x00000062, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSubClassMask[] = {
  0x00000000, 0x22000000, 0x00000066, 
};

static const uint32_t VK64WMSubClassMask[] = {
  0x00000000, 0x04000000, 0x00000000, 
};

static const uint32_t GR64_NOREX_and_GR64_TCSubClassMask[] = {
  0x00000000, 0x48000000, 0x0000007a, 
};

static const uint32_t GR64_TCW64SubClassMask[] = {
  0x00000000, 0x90000000, 0x00000078, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPSubClassMask[] = {
  0x00000000, 0x20000000, 0x00000066, 
};

static const uint32_t GR64_NOREX_NOSP_and_GR64_TCSubClassMask[] = {
  0x00000000, 0x40000000, 0x0000007a, 
};

static const uint32_t GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXSubClassMask[] = {
  0x00000000, 0x80000000, 0x00000060, 
};

static const uint32_t GR64_ABCDSubClassMask[] = {
  0x00000000, 0x00000000, 0x0000007d, 
};

static const uint32_t GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000062, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000064, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000078, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_ADSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000050, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000060, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000040, 
};

static const uint32_t RSTSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000080, 
};

static const uint32_t RFP80SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000100, 
};

static const uint32_t VR128XSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000600, 
  0x00000000, 0x00000000, 0x00007800, // sub_xmm
};

static const uint32_t VR128SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000400, 
  0x00000000, 0x00000000, 0x00005000, // sub_xmm
};

static const uint32_t VR256XSubClassMask[] = {
  0x00000000, 0x00000000, 0x00001800, 
  0x00000000, 0x00000000, 0x00006000, // sub_ymm
};

static const uint32_t VR256SubClassMask[] = {
  0x00000000, 0x00000000, 0x00001000, 
  0x00000000, 0x00000000, 0x00004000, // sub_ymm
};

static const uint32_t VR512SubClassMask[] = {
  0x00000000, 0x00000000, 0x00006000, 
};

static const uint32_t VR512_with_sub_xmm_in_FR32SubClassMask[] = {
  0x00000000, 0x00000000, 0x00004000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 1, 2, 0,
  /* 5 */ 3, 0,
  /* 7 */ 4, 0,
  /* 9 */ 5, 0,
  /* 11 */ 6, 0,
};

static const TargetRegisterClass *const GR8_NOREXSuperclasses[] = {
  &X86::GR8RegClass,
  nullptr
};

static const TargetRegisterClass *const GR8_ABCD_HSuperclasses[] = {
  &X86::GR8RegClass,
  &X86::GR8_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR8_ABCD_LSuperclasses[] = {
  &X86::GR8RegClass,
  &X86::GR8_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR16_NOREXSuperclasses[] = {
  &X86::GR16RegClass,
  nullptr
};

static const TargetRegisterClass *const VK1Superclasses[] = {
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK16Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK2Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK4Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK8Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  nullptr
};

static const TargetRegisterClass *const VK16WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK1WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK2WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK4WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK8WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  nullptr
};

static const TargetRegisterClass *const GR16_ABCDSuperclasses[] = {
  &X86::GR16RegClass,
  &X86::GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const FR32Superclasses[] = {
  &X86::FR32XRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOAXSuperclasses[] = {
  &X86::GR32RegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOSPSuperclasses[] = {
  &X86::GR32RegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOAX_and_GR32_NOSPSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOAXRegClass,
  &X86::GR32_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOREXSuperclasses[] = {
  &X86::GR32RegClass,
  nullptr
};

static const TargetRegisterClass *const VK32Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOAX_and_GR32_NOREXSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOAXRegClass,
  &X86::GR32_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOREX_NOSPSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK32WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  &X86::VK32RegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOAX_and_GR32_NOREX_NOSPSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOAXRegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ABCDSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ABCD_and_GR32_NOAXSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOAXRegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_TCSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ADSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOAX_and_GR32_TCSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOAXRegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_ABCD_and_GR32_NOAXRegClass,
  &X86::GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_AD_and_GR32_NOAXSuperclasses[] = {
  &X86::GR32RegClass,
  &X86::GR32_NOAXRegClass,
  &X86::GR32_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_ABCD_and_GR32_NOAXRegClass,
  &X86::GR32_TCRegClass,
  &X86::GR32_ADRegClass,
  &X86::GR32_NOAX_and_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const RFP64Superclasses[] = {
  &X86::RFP32RegClass,
  nullptr
};

static const TargetRegisterClass *const FR64XSuperclasses[] = {
  &X86::FR32XRegClass,
  nullptr
};

static const TargetRegisterClass *const FR64Superclasses[] = {
  &X86::FR32XRegClass,
  &X86::FR32RegClass,
  &X86::FR64XRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_8bitSuperclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_NOAXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOSP_and_GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_16bit_in_GR16_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK64Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK32RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_NOSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK64WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  &X86::VK32RegClass,
  &X86::VK32WMRegClass,
  &X86::VK64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_and_GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCW64Superclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_NOSP_and_GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_TCW64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_ABCDSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR64_ABCDRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_ABCDRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_ADSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ADRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const RFP80Superclasses[] = {
  &X86::RFP32RegClass,
  &X86::RFP64RegClass,
  nullptr
};

static const TargetRegisterClass *const VR128XSuperclasses[] = {
  &X86::FR32XRegClass,
  &X86::FR64XRegClass,
  nullptr
};

static const TargetRegisterClass *const VR128Superclasses[] = {
  &X86::FR32XRegClass,
  &X86::FR32RegClass,
  &X86::FR64XRegClass,
  &X86::FR64RegClass,
  &X86::VR128XRegClass,
  nullptr
};

static const TargetRegisterClass *const VR256Superclasses[] = {
  &X86::VR256XRegClass,
  nullptr
};

static const TargetRegisterClass *const VR512_with_sub_xmm_in_FR32Superclasses[] = {
  &X86::VR512RegClass,
  nullptr
};


static inline unsigned GR8AltOrderSelect(const MachineFunction &MF) {
    return MF.getTarget().getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8GetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL, X86::SIL, X86::DIL, X86::BPL, X86::SPL, X86::R8B, X86::R9B, X86::R10B, X86::R11B, X86::R14B, X86::R15B, X86::R12B, X86::R13B };
  const MCRegisterClass &MCR = X86MCRegisterClasses[X86::GR8RegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GR8AltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GR8_NOREXAltOrderSelect(const MachineFunction &MF) {
    return MF.getTarget().getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8_NOREXGetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL };
  const MCRegisterClass &MCR = X86MCRegisterClasses[X86::GR8_NOREXRegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GR8_NOREXAltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}
namespace X86 {   // Register class instances
  extern const TargetRegisterClass GR8RegClass = {
    &X86MCRegisterClasses[GR8RegClassID],
    VTLists + 2,
    GR8SubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    GR8GetRawAllocationOrder
  };

  extern const TargetRegisterClass GR8_NOREXRegClass = {
    &X86MCRegisterClasses[GR8_NOREXRegClassID],
    VTLists + 2,
    GR8_NOREXSubClassMask,
    SuperRegIdxSeqs + 2,
    GR8_NOREXSuperclasses,
    GR8_NOREXGetRawAllocationOrder
  };

  extern const TargetRegisterClass GR8_ABCD_HRegClass = {
    &X86MCRegisterClasses[GR8_ABCD_HRegClassID],
    VTLists + 2,
    GR8_ABCD_HSubClassMask,
    SuperRegIdxSeqs + 3,
    GR8_ABCD_HSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR8_ABCD_LRegClass = {
    &X86MCRegisterClasses[GR8_ABCD_LRegClassID],
    VTLists + 2,
    GR8_ABCD_LSubClassMask,
    SuperRegIdxSeqs + 0,
    GR8_ABCD_LSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR16RegClass = {
    &X86MCRegisterClasses[GR16RegClassID],
    VTLists + 4,
    GR16SubClassMask,
    SuperRegIdxSeqs + 5,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16_NOREXRegClass = {
    &X86MCRegisterClasses[GR16_NOREXRegClassID],
    VTLists + 4,
    GR16_NOREXSubClassMask,
    SuperRegIdxSeqs + 5,
    GR16_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK1RegClass = {
    &X86MCRegisterClasses[VK1RegClassID],
    VTLists + 0,
    VK1SubClassMask,
    SuperRegIdxSeqs + 1,
    VK1Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK16RegClass = {
    &X86MCRegisterClasses[VK16RegClassID],
    VTLists + 24,
    VK16SubClassMask,
    SuperRegIdxSeqs + 1,
    VK16Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK2RegClass = {
    &X86MCRegisterClasses[VK2RegClassID],
    VTLists + 18,
    VK2SubClassMask,
    SuperRegIdxSeqs + 1,
    VK2Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK4RegClass = {
    &X86MCRegisterClasses[VK4RegClassID],
    VTLists + 20,
    VK4SubClassMask,
    SuperRegIdxSeqs + 1,
    VK4Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK8RegClass = {
    &X86MCRegisterClasses[VK8RegClassID],
    VTLists + 22,
    VK8SubClassMask,
    SuperRegIdxSeqs + 1,
    VK8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK16WMRegClass = {
    &X86MCRegisterClasses[VK16WMRegClassID],
    VTLists + 24,
    VK16WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK16WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK1WMRegClass = {
    &X86MCRegisterClasses[VK1WMRegClassID],
    VTLists + 0,
    VK1WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK1WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK2WMRegClass = {
    &X86MCRegisterClasses[VK2WMRegClassID],
    VTLists + 18,
    VK2WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK2WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK4WMRegClass = {
    &X86MCRegisterClasses[VK4WMRegClassID],
    VTLists + 20,
    VK4WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK4WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK8WMRegClass = {
    &X86MCRegisterClasses[VK8WMRegClassID],
    VTLists + 22,
    VK8WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK8WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass SEGMENT_REGRegClass = {
    &X86MCRegisterClasses[SEGMENT_REGRegClassID],
    VTLists + 4,
    SEGMENT_REGSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16_ABCDRegClass = {
    &X86MCRegisterClasses[GR16_ABCDRegClassID],
    VTLists + 4,
    GR16_ABCDSubClassMask,
    SuperRegIdxSeqs + 5,
    GR16_ABCDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FPCCRRegClass = {
    &X86MCRegisterClasses[FPCCRRegClassID],
    VTLists + 4,
    FPCCRSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FR32XRegClass = {
    &X86MCRegisterClasses[FR32XRegClassID],
    VTLists + 12,
    FR32XSubClassMask,
    SuperRegIdxSeqs + 9,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FR32RegClass = {
    &X86MCRegisterClasses[FR32RegClassID],
    VTLists + 12,
    FR32SubClassMask,
    SuperRegIdxSeqs + 9,
    FR32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32RegClass = {
    &X86MCRegisterClasses[GR32RegClassID],
    VTLists + 6,
    GR32SubClassMask,
    SuperRegIdxSeqs + 7,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR32_NOAXRegClassID],
    VTLists + 6,
    GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOSPRegClass = {
    &X86MCRegisterClasses[GR32_NOSPRegClassID],
    VTLists + 6,
    GR32_NOSPSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOAX_and_GR32_NOSPRegClass = {
    &X86MCRegisterClasses[GR32_NOAX_and_GR32_NOSPRegClassID],
    VTLists + 6,
    GR32_NOAX_and_GR32_NOSPSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOAX_and_GR32_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DEBUG_REGRegClass = {
    &X86MCRegisterClasses[DEBUG_REGRegClassID],
    VTLists + 6,
    DEBUG_REGSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOREXRegClass = {
    &X86MCRegisterClasses[GR32_NOREXRegClassID],
    VTLists + 6,
    GR32_NOREXSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK32RegClass = {
    &X86MCRegisterClasses[VK32RegClassID],
    VTLists + 26,
    VK32SubClassMask,
    SuperRegIdxSeqs + 1,
    VK32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOAX_and_GR32_NOREXRegClass = {
    &X86MCRegisterClasses[GR32_NOAX_and_GR32_NOREXRegClassID],
    VTLists + 6,
    GR32_NOAX_and_GR32_NOREXSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOAX_and_GR32_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOREX_NOSPRegClass = {
    &X86MCRegisterClasses[GR32_NOREX_NOSPRegClassID],
    VTLists + 6,
    GR32_NOREX_NOSPSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOREX_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass RFP32RegClass = {
    &X86MCRegisterClasses[RFP32RegClassID],
    VTLists + 12,
    RFP32SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VK32WMRegClass = {
    &X86MCRegisterClasses[VK32WMRegClassID],
    VTLists + 26,
    VK32WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK32WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOAX_and_GR32_NOREX_NOSPRegClass = {
    &X86MCRegisterClasses[GR32_NOAX_and_GR32_NOREX_NOSPRegClassID],
    VTLists + 6,
    GR32_NOAX_and_GR32_NOREX_NOSPSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOAX_and_GR32_NOREX_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ABCDRegClass = {
    &X86MCRegisterClasses[GR32_ABCDRegClassID],
    VTLists + 6,
    GR32_ABCDSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_ABCDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ABCD_and_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR32_ABCD_and_GR32_NOAXRegClassID],
    VTLists + 6,
    GR32_ABCD_and_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_ABCD_and_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_TCRegClass = {
    &X86MCRegisterClasses[GR32_TCRegClassID],
    VTLists + 6,
    GR32_TCSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ADRegClass = {
    &X86MCRegisterClasses[GR32_ADRegClassID],
    VTLists + 6,
    GR32_ADSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_ADSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOAX_and_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR32_NOAX_and_GR32_TCRegClassID],
    VTLists + 6,
    GR32_NOAX_and_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_NOAX_and_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &X86MCRegisterClasses[CCRRegClassID],
    VTLists + 6,
    CCRSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_AD_and_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR32_AD_and_GR32_NOAXRegClassID],
    VTLists + 6,
    GR32_AD_and_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 7,
    GR32_AD_and_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass RFP64RegClass = {
    &X86MCRegisterClasses[RFP64RegClassID],
    VTLists + 14,
    RFP64SubClassMask,
    SuperRegIdxSeqs + 1,
    RFP64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass FR64XRegClass = {
    &X86MCRegisterClasses[FR64XRegClassID],
    VTLists + 14,
    FR64XSubClassMask,
    SuperRegIdxSeqs + 9,
    FR64XSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64RegClass = {
    &X86MCRegisterClasses[GR64RegClassID],
    VTLists + 8,
    GR64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CONTROL_REGRegClass = {
    &X86MCRegisterClasses[CONTROL_REGRegClassID],
    VTLists + 8,
    CONTROL_REGSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FR64RegClass = {
    &X86MCRegisterClasses[FR64RegClassID],
    VTLists + 14,
    FR64SubClassMask,
    SuperRegIdxSeqs + 9,
    FR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_8bitRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_8bitRegClassID],
    VTLists + 8,
    GR64_with_sub_8bitSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_8bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOSPRegClass = {
    &X86MCRegisterClasses[GR64_NOSPRegClassID],
    VTLists + 8,
    GR64_NOSPSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_NOAXRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_NOREXRegClassID],
    VTLists + 8,
    GR64_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_TCRegClassID],
    VTLists + 8,
    GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOSP_and_GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_NOSP_and_GR64_TCRegClassID],
    VTLists + 8,
    GR64_NOSP_and_GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_NOSP_and_GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_16bit_in_GR16_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_16bit_in_GR16_NOREXRegClassID],
    VTLists + 8,
    GR64_with_sub_16bit_in_GR16_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_16bit_in_GR16_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK64RegClass = {
    &X86MCRegisterClasses[VK64RegClassID],
    VTLists + 28,
    VK64SubClassMask,
    SuperRegIdxSeqs + 1,
    VK64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR64RegClass = {
    &X86MCRegisterClasses[VR64RegClassID],
    VTLists + 51,
    VR64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_NOSPRegClass = {
    &X86MCRegisterClasses[GR64_NOREX_NOSPRegClassID],
    VTLists + 8,
    GR64_NOREX_NOSPSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_NOREX_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID],
    VTLists + 8,
    GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK64WMRegClass = {
    &X86MCRegisterClasses[VK64WMRegClassID],
    VTLists + 28,
    VK64WMSubClassMask,
    SuperRegIdxSeqs + 1,
    VK64WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_and_GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_NOREX_and_GR64_TCRegClassID],
    VTLists + 8,
    GR64_NOREX_and_GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_NOREX_and_GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCW64RegClass = {
    &X86MCRegisterClasses[GR64_TCW64RegClassID],
    VTLists + 8,
    GR64_TCW64SubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_TCW64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_NOSP_and_GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_NOREX_NOSP_and_GR64_TCRegClassID],
    VTLists + 8,
    GR64_NOREX_NOSP_and_GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_NOREX_NOSP_and_GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID],
    VTLists + 8,
    GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_ABCDRegClass = {
    &X86MCRegisterClasses[GR64_ABCDRegClassID],
    VTLists + 8,
    GR64_ABCDSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_ABCDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID],
    VTLists + 8,
    GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_TCRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ADRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_ADRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_ADSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_ADSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClassID],
    VTLists + 8,
    GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXSubClassMask,
    SuperRegIdxSeqs + 1,
    GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass RSTRegClass = {
    &X86MCRegisterClasses[RSTRegClassID],
    VTLists + 10,
    RSTSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass RFP80RegClass = {
    &X86MCRegisterClasses[RFP80RegClassID],
    VTLists + 16,
    RFP80SubClassMask,
    SuperRegIdxSeqs + 1,
    RFP80Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR128XRegClass = {
    &X86MCRegisterClasses[VR128XRegClassID],
    VTLists + 37,
    VR128XSubClassMask,
    SuperRegIdxSeqs + 9,
    VR128XSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VR128RegClass = {
    &X86MCRegisterClasses[VR128RegClassID],
    VTLists + 37,
    VR128SubClassMask,
    SuperRegIdxSeqs + 9,
    VR128Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR256XRegClass = {
    &X86MCRegisterClasses[VR256XRegClassID],
    VTLists + 44,
    VR256XSubClassMask,
    SuperRegIdxSeqs + 11,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR256RegClass = {
    &X86MCRegisterClasses[VR256RegClassID],
    VTLists + 44,
    VR256SubClassMask,
    SuperRegIdxSeqs + 11,
    VR256Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR512RegClass = {
    &X86MCRegisterClasses[VR512RegClassID],
    VTLists + 30,
    VR512SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR512_with_sub_xmm_in_FR32RegClass = {
    &X86MCRegisterClasses[VR512_with_sub_xmm_in_FR32RegClassID],
    VTLists + 30,
    VR512_with_sub_xmm_in_FR32SubClassMask,
    SuperRegIdxSeqs + 1,
    VR512_with_sub_xmm_in_FR32Superclasses,
    nullptr
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &X86::GR8RegClass,
    &X86::GR8_NOREXRegClass,
    &X86::GR8_ABCD_HRegClass,
    &X86::GR8_ABCD_LRegClass,
    &X86::GR16RegClass,
    &X86::GR16_NOREXRegClass,
    &X86::VK1RegClass,
    &X86::VK16RegClass,
    &X86::VK2RegClass,
    &X86::VK4RegClass,
    &X86::VK8RegClass,
    &X86::VK16WMRegClass,
    &X86::VK1WMRegClass,
    &X86::VK2WMRegClass,
    &X86::VK4WMRegClass,
    &X86::VK8WMRegClass,
    &X86::SEGMENT_REGRegClass,
    &X86::GR16_ABCDRegClass,
    &X86::FPCCRRegClass,
    &X86::FR32XRegClass,
    &X86::FR32RegClass,
    &X86::GR32RegClass,
    &X86::GR32_NOAXRegClass,
    &X86::GR32_NOSPRegClass,
    &X86::GR32_NOAX_and_GR32_NOSPRegClass,
    &X86::DEBUG_REGRegClass,
    &X86::GR32_NOREXRegClass,
    &X86::VK32RegClass,
    &X86::GR32_NOAX_and_GR32_NOREXRegClass,
    &X86::GR32_NOREX_NOSPRegClass,
    &X86::RFP32RegClass,
    &X86::VK32WMRegClass,
    &X86::GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
    &X86::GR32_ABCDRegClass,
    &X86::GR32_ABCD_and_GR32_NOAXRegClass,
    &X86::GR32_TCRegClass,
    &X86::GR32_ADRegClass,
    &X86::GR32_NOAX_and_GR32_TCRegClass,
    &X86::CCRRegClass,
    &X86::GR32_AD_and_GR32_NOAXRegClass,
    &X86::RFP64RegClass,
    &X86::FR64XRegClass,
    &X86::GR64RegClass,
    &X86::CONTROL_REGRegClass,
    &X86::FR64RegClass,
    &X86::GR64_with_sub_8bitRegClass,
    &X86::GR64_NOSPRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_NOAXRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClass,
    &X86::GR64_NOREXRegClass,
    &X86::GR64_TCRegClass,
    &X86::GR64_NOSP_and_GR64_TCRegClass,
    &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
    &X86::VK64RegClass,
    &X86::VR64RegClass,
    &X86::GR64_NOREX_NOSPRegClass,
    &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
    &X86::VK64WMRegClass,
    &X86::GR64_NOREX_and_GR64_TCRegClass,
    &X86::GR64_TCW64RegClass,
    &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClass,
    &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
    &X86::GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClass,
    &X86::GR64_ABCDRegClass,
    &X86::GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_ADRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClass,
    &X86::RSTRegClass,
    &X86::RFP80RegClass,
    &X86::VR128XRegClass,
    &X86::VR128RegClass,
    &X86::VR256XRegClass,
    &X86::VR256RegClass,
    &X86::VR512RegClass,
    &X86::VR512_with_sub_xmm_in_FR32RegClass,
  };
}

static const TargetRegisterInfoDesc X86RegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 1, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 1, 1 },
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
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 1, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 1, 1 },
  { 0, 1 },
  { 1, 1 },
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
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
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
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
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
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
  { 1, 1 },
};
unsigned X86GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][6] = {
    { 1, 2, 3, 0, 5, 0, },
  };

  --IdxA; assert(IdxA < 6);
  --IdxB; assert(IdxB < 6);
  return Rows[0][IdxB];
}

const TargetRegisterClass *X86GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[79][6] = {
    {	// GR8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_NOREX
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_ABCD_H
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_ABCD_L
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16
      5,	// sub_8bit -> GR16
      18,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_NOREX
      6,	// sub_8bit -> GR16_NOREX
      18,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// SEGMENT_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_ABCD
      18,	// sub_8bit -> GR16_ABCD
      18,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FPCCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR32X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32
      22,	// sub_8bit -> GR32
      34,	// sub_8bit_hi -> GR32_ABCD
      22,	// sub_16bit -> GR32
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOAX
      23,	// sub_8bit -> GR32_NOAX
      35,	// sub_8bit_hi -> GR32_ABCD_and_GR32_NOAX
      23,	// sub_16bit -> GR32_NOAX
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOSP
      24,	// sub_8bit -> GR32_NOSP
      34,	// sub_8bit_hi -> GR32_ABCD
      24,	// sub_16bit -> GR32_NOSP
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOAX_and_GR32_NOSP
      25,	// sub_8bit -> GR32_NOAX_and_GR32_NOSP
      35,	// sub_8bit_hi -> GR32_ABCD_and_GR32_NOAX
      25,	// sub_16bit -> GR32_NOAX_and_GR32_NOSP
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// DEBUG_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX
      27,	// sub_8bit -> GR32_NOREX
      34,	// sub_8bit_hi -> GR32_ABCD
      27,	// sub_16bit -> GR32_NOREX
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOAX_and_GR32_NOREX
      29,	// sub_8bit -> GR32_NOAX_and_GR32_NOREX
      35,	// sub_8bit_hi -> GR32_ABCD_and_GR32_NOAX
      29,	// sub_16bit -> GR32_NOAX_and_GR32_NOREX
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX_NOSP
      30,	// sub_8bit -> GR32_NOREX_NOSP
      34,	// sub_8bit_hi -> GR32_ABCD
      30,	// sub_16bit -> GR32_NOREX_NOSP
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK32WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOAX_and_GR32_NOREX_NOSP
      33,	// sub_8bit -> GR32_NOAX_and_GR32_NOREX_NOSP
      35,	// sub_8bit_hi -> GR32_ABCD_and_GR32_NOAX
      33,	// sub_16bit -> GR32_NOAX_and_GR32_NOREX_NOSP
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD
      34,	// sub_8bit -> GR32_ABCD
      34,	// sub_8bit_hi -> GR32_ABCD
      34,	// sub_16bit -> GR32_ABCD
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD_and_GR32_NOAX
      35,	// sub_8bit -> GR32_ABCD_and_GR32_NOAX
      35,	// sub_8bit_hi -> GR32_ABCD_and_GR32_NOAX
      35,	// sub_16bit -> GR32_ABCD_and_GR32_NOAX
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_TC
      36,	// sub_8bit -> GR32_TC
      36,	// sub_8bit_hi -> GR32_TC
      36,	// sub_16bit -> GR32_TC
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_AD
      37,	// sub_8bit -> GR32_AD
      37,	// sub_8bit_hi -> GR32_AD
      37,	// sub_16bit -> GR32_AD
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOAX_and_GR32_TC
      38,	// sub_8bit -> GR32_NOAX_and_GR32_TC
      38,	// sub_8bit_hi -> GR32_NOAX_and_GR32_TC
      38,	// sub_16bit -> GR32_NOAX_and_GR32_TC
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// CCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_AD_and_GR32_NOAX
      40,	// sub_8bit -> GR32_AD_and_GR32_NOAX
      40,	// sub_8bit_hi -> GR32_AD_and_GR32_NOAX
      40,	// sub_16bit -> GR32_AD_and_GR32_NOAX
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR64X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64
      46,	// sub_8bit -> GR64_with_sub_8bit
      65,	// sub_8bit_hi -> GR64_ABCD
      43,	// sub_16bit -> GR64
      43,	// sub_32bit -> GR64
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// CONTROL_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_8bit
      46,	// sub_8bit -> GR64_with_sub_8bit
      65,	// sub_8bit_hi -> GR64_ABCD
      46,	// sub_16bit -> GR64_with_sub_8bit
      46,	// sub_32bit -> GR64_with_sub_8bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOSP
      47,	// sub_8bit -> GR64_NOSP
      65,	// sub_8bit_hi -> GR64_ABCD
      47,	// sub_16bit -> GR64_NOSP
      47,	// sub_32bit -> GR64_NOSP
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_NOAX
      48,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_NOAX
      67,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      48,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_NOAX
      48,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_NOAX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP
      49,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP
      67,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      49,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP
      49,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX
      53,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX
      65,	// sub_8bit_hi -> GR64_ABCD
      50,	// sub_16bit -> GR64_NOREX
      50,	// sub_32bit -> GR64_NOREX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC
      52,	// sub_8bit -> GR64_NOSP_and_GR64_TC
      68,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      51,	// sub_16bit -> GR64_TC
      51,	// sub_32bit -> GR64_TC
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOSP_and_GR64_TC
      52,	// sub_8bit -> GR64_NOSP_and_GR64_TC
      68,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      52,	// sub_16bit -> GR64_NOSP_and_GR64_TC
      52,	// sub_32bit -> GR64_NOSP_and_GR64_TC
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_16bit_in_GR16_NOREX
      53,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX
      65,	// sub_8bit_hi -> GR64_ABCD
      53,	// sub_16bit -> GR64_with_sub_16bit_in_GR16_NOREX
      53,	// sub_32bit -> GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_NOSP
      56,	// sub_8bit -> GR64_NOREX_NOSP
      65,	// sub_8bit_hi -> GR64_ABCD
      56,	// sub_16bit -> GR64_NOREX_NOSP
      56,	// sub_32bit -> GR64_NOREX_NOSP
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX
      57,	// sub_8bit -> GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX
      70,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      57,	// sub_16bit -> GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX
      57,	// sub_32bit -> GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      58,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      67,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      58,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      58,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK64WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TC
      63,	// sub_8bit -> GR64_NOREX_NOSP_and_GR64_TC
      68,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      60,	// sub_16bit -> GR64_NOREX_and_GR64_TC
      60,	// sub_32bit -> GR64_NOREX_and_GR64_TC
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64
      61,	// sub_8bit -> GR64_TCW64
      68,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      61,	// sub_16bit -> GR64_TCW64
      61,	// sub_32bit -> GR64_TCW64
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP
      62,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP
      67,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      62,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP
      62,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_NOSP_and_GR64_TC
      63,	// sub_8bit -> GR64_NOREX_NOSP_and_GR64_TC
      68,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      63,	// sub_16bit -> GR64_NOREX_NOSP_and_GR64_TC
      63,	// sub_32bit -> GR64_NOREX_NOSP_and_GR64_TC
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX
      64,	// sub_8bit -> GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX
      70,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      64,	// sub_16bit -> GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX
      64,	// sub_32bit -> GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_ABCD
      65,	// sub_8bit -> GR64_ABCD
      65,	// sub_8bit_hi -> GR64_ABCD
      65,	// sub_16bit -> GR64_ABCD
      65,	// sub_32bit -> GR64_ABCD
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      66,	// sub_8bit -> GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      70,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      66,	// sub_16bit -> GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      66,	// sub_32bit -> GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      67,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      67,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      67,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      67,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_TC
      68,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_TC
      68,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      68,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_TC
      68,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_TC
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_AD
      69,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_AD
      69,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_AD
      69,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_AD
      69,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_AD
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      70,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      70,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      70,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      70,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
      71,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
      71,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
      71,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
      71,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RST
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP80
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR128X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR128
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR256X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      76,	// sub_xmm -> VR256X
      0,	// sub_ymm
    },
    {	// VR256
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      77,	// sub_xmm -> VR256
      0,	// sub_ymm
    },
    {	// VR512
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      78,	// sub_xmm -> VR512
      78,	// sub_ymm -> VR512
    },
    {	// VR512_with_sub_xmm_in_FR32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_16bit
      0,	// sub_32bit
      79,	// sub_xmm -> VR512_with_sub_xmm_in_FR32
      79,	// sub_ymm -> VR512_with_sub_xmm_in_FR32
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 6 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &X86GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 20},  	// GR8
    {1, 8},  	// GR8_NOREX
    {1, 4},  	// GR8_ABCD_H
    {1, 4},  	// GR8_ABCD_L
    {2, 32},  	// GR16
    {2, 16},  	// GR16_NOREX
    {1, 8},  	// VK1
    {1, 8},  	// VK16
    {1, 8},  	// VK2
    {1, 8},  	// VK4
    {1, 8},  	// VK8
    {1, 7},  	// VK16WM
    {1, 7},  	// VK1WM
    {1, 7},  	// VK2WM
    {1, 7},  	// VK4WM
    {1, 7},  	// VK8WM
    {1, 6},  	// SEGMENT_REG
    {2, 8},  	// GR16_ABCD
    {0, 0},  	// FPCCR
    {1, 32},  	// FR32X
    {1, 16},  	// FR32
    {2, 32},  	// GR32
    {2, 30},  	// GR32_NOAX
    {2, 30},  	// GR32_NOSP
    {2, 28},  	// GR32_NOAX_and_GR32_NOSP
    {1, 8},  	// DEBUG_REG
    {2, 16},  	// GR32_NOREX
    {1, 8},  	// VK32
    {2, 14},  	// GR32_NOAX_and_GR32_NOREX
    {2, 14},  	// GR32_NOREX_NOSP
    {1, 7},  	// RFP32
    {1, 7},  	// VK32WM
    {2, 12},  	// GR32_NOAX_and_GR32_NOREX_NOSP
    {2, 8},  	// GR32_ABCD
    {2, 6},  	// GR32_ABCD_and_GR32_NOAX
    {2, 6},  	// GR32_TC
    {2, 4},  	// GR32_AD
    {2, 4},  	// GR32_NOAX_and_GR32_TC
    {0, 0},  	// CCR
    {2, 2},  	// GR32_AD_and_GR32_NOAX
    {1, 7},  	// RFP64
    {1, 32},  	// FR64X
    {2, 34},  	// GR64
    {1, 16},  	// CONTROL_REG
    {1, 16},  	// FR64
    {2, 32},  	// GR64_with_sub_8bit
    {2, 30},  	// GR64_NOSP
    {2, 30},  	// GR64_with_sub_32bit_in_GR32_NOAX
    {2, 28},  	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP
    {2, 18},  	// GR64_NOREX
    {2, 18},  	// GR64_TC
    {2, 16},  	// GR64_NOSP_and_GR64_TC
    {2, 16},  	// GR64_with_sub_16bit_in_GR16_NOREX
    {1, 8},  	// VK64
    {1, 8},  	// VR64
    {2, 14},  	// GR64_NOREX_NOSP
    {2, 14},  	// GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX
    {2, 14},  	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
    {1, 7},  	// VK64WM
    {2, 12},  	// GR64_NOREX_and_GR64_TC
    {2, 12},  	// GR64_TCW64
    {2, 12},  	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP
    {2, 10},  	// GR64_NOREX_NOSP_and_GR64_TC
    {2, 10},  	// GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX
    {2, 8},  	// GR64_ABCD
    {2, 8},  	// GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
    {2, 6},  	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
    {2, 6},  	// GR64_with_sub_32bit_in_GR32_TC
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_AD
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
    {0, 0},  	// RST
    {1, 7},  	// RFP80
    {1, 32},  	// VR128X
    {1, 16},  	// VR128
    {1, 32},  	// VR256X
    {1, 16},  	// VR256
    {1, 32},  	// VR512
    {1, 16},  	// VR512_with_sub_xmm_in_FR32
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned X86GenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 119 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned X86GenRegisterInfo::getNumRegPressureSets() const {
  return 21;
}

// Get the name of this register unit pressure set.
const char *X86GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "GR8_ABCD_H",
    "GR8_ABCD_L",
    "SEGMENT_REG",
    "RFP32",
    "GR8_NOREX",
    "VK1",
    "DEBUG_REG",
    "VR64",
    "GR8_NOREX+GR64_NOREX_and_GR64_TC",
    "GR8_NOREX+GR64_TCW64",
    "FR32",
    "CONTROL_REG",
    "GR64_NOREX",
    "GR8",
    "GR8_NOREX+GR64_TC",
    "GR8+GR64_TCW64",
    "GR64_NOREX+GR64_TC",
    "GR8+GR64_NOREX",
    "GR8+GR64_TC",
    "FR32X",
    "GR64",
    nullptr };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned X86GenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    4,  	// 0: GR8_ABCD_H
    4,  	// 1: GR8_ABCD_L
    6,  	// 2: SEGMENT_REG
    7,  	// 3: RFP32
    8,  	// 4: GR8_NOREX
    8,  	// 5: VK1
    8,  	// 6: DEBUG_REG
    8,  	// 7: VR64
    14,  	// 8: GR8_NOREX+GR64_NOREX_and_GR64_TC
    14,  	// 9: GR8_NOREX+GR64_TCW64
    16,  	// 10: FR32
    16,  	// 11: CONTROL_REG
    18,  	// 12: GR64_NOREX
    20,  	// 13: GR8
    20,  	// 14: GR8_NOREX+GR64_TC
    23,  	// 15: GR8+GR64_TCW64
    24,  	// 16: GR64_NOREX+GR64_TC
    26,  	// 17: GR8+GR64_NOREX
    27,  	// 18: GR8+GR64_TC
    32,  	// 19: FR32X
    34,  	// 20: GR64
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    13,  15,  17,  18,  20,  -1,  	// #0 GR8
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #6 GR8_NOREX
    0,  4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #18 GR8_ABCD_H
    1,  4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #31 GR8_ABCD_L
    20,  -1,  	// #44 GR16
    12,  16,  17,  20,  -1,  	// #46 GR16_NOREX
    5,  -1,  	// #51 VK1
    5,  -1,  	// #53 VK16
    5,  -1,  	// #55 VK2
    5,  -1,  	// #57 VK4
    5,  -1,  	// #59 VK8
    5,  -1,  	// #61 VK16WM
    5,  -1,  	// #63 VK1WM
    5,  -1,  	// #65 VK2WM
    5,  -1,  	// #67 VK4WM
    5,  -1,  	// #69 VK8WM
    2,  -1,  	// #71 SEGMENT_REG
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #73 GR16_ABCD
    -1,  	// #85 FPCCR
    19,  -1,  	// #86 FR32X
    10,  19,  -1,  	// #88 FR32
    20,  -1,  	// #91 GR32
    20,  -1,  	// #93 GR32_NOAX
    20,  -1,  	// #95 GR32_NOSP
    20,  -1,  	// #97 GR32_NOAX_and_GR32_NOSP
    6,  -1,  	// #99 DEBUG_REG
    12,  16,  17,  20,  -1,  	// #101 GR32_NOREX
    5,  -1,  	// #106 VK32
    12,  16,  17,  20,  -1,  	// #108 GR32_NOAX_and_GR32_NOREX
    12,  16,  17,  20,  -1,  	// #113 GR32_NOREX_NOSP
    3,  -1,  	// #118 RFP32
    5,  -1,  	// #120 VK32WM
    12,  16,  17,  20,  -1,  	// #122 GR32_NOAX_and_GR32_NOREX_NOSP
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #127 GR32_ABCD
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #139 GR32_ABCD_and_GR32_NOAX
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #151 GR32_TC
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #163 GR32_AD
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #175 GR32_NOAX_and_GR32_TC
    -1,  	// #187 CCR
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #188 GR32_AD_and_GR32_NOAX
    3,  -1,  	// #200 RFP64
    19,  -1,  	// #202 FR64X
    20,  -1,  	// #204 GR64
    11,  -1,  	// #206 CONTROL_REG
    10,  19,  -1,  	// #208 FR64
    20,  -1,  	// #211 GR64_with_sub_8bit
    20,  -1,  	// #213 GR64_NOSP
    20,  -1,  	// #215 GR64_with_sub_32bit_in_GR32_NOAX
    20,  -1,  	// #217 GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSP
    12,  16,  17,  20,  -1,  	// #219 GR64_NOREX
    14,  16,  18,  20,  -1,  	// #224 GR64_TC
    14,  16,  18,  20,  -1,  	// #229 GR64_NOSP_and_GR64_TC
    12,  16,  17,  20,  -1,  	// #234 GR64_with_sub_16bit_in_GR16_NOREX
    5,  -1,  	// #239 VK64
    7,  -1,  	// #241 VR64
    12,  16,  17,  20,  -1,  	// #243 GR64_NOREX_NOSP
    14,  16,  18,  20,  -1,  	// #248 GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX
    12,  16,  17,  20,  -1,  	// #253 GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
    5,  -1,  	// #258 VK64WM
    8,  12,  14,  16,  17,  18,  20,  -1,  	// #260 GR64_NOREX_and_GR64_TC
    9,  14,  15,  16,  18,  20,  -1,  	// #268 GR64_TCW64
    12,  16,  17,  20,  -1,  	// #275 GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSP
    8,  12,  14,  16,  17,  18,  20,  -1,  	// #280 GR64_NOREX_NOSP_and_GR64_TC
    9,  14,  15,  16,  18,  20,  -1,  	// #288 GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAX
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #295 GR64_ABCD
    8,  12,  14,  16,  17,  18,  20,  -1,  	// #307 GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #315 GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAX
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #327 GR64_with_sub_32bit_in_GR32_TC
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #339 GR64_with_sub_32bit_in_GR32_AD
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #351 GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TC
    4,  8,  9,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #363 GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAX
    -1,  	// #375 RST
    3,  -1,  	// #376 RFP80
    19,  -1,  	// #378 VR128X
    10,  19,  -1,  	// #380 VR128
    19,  -1,  	// #383 VR256X
    10,  19,  -1,  	// #385 VR256
    19,  -1,  	// #388 VR512
    10,  19,  -1,  	// #390 VR512_with_sub_xmm_in_FR32
    12,  13,  15,  16,  17,  18,  20,  -1,  	// #393 inferred~GR8_ABCD_H~FR32~GR64_NOREX~GR8_NOREX+GR64_TC~GR8+GR64_TCW64~GR64_NOREX+GR64_TC~GR64
    8,  12,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #401 inferred~GR8_ABCD_H~FR32~GR64_NOREX~GR8_NOREX+GR64_TC~GR8+GR64_TCW64~GR64_NOREX+GR64_TC~GR8+GR64_NOREX~GR8+GR64_TC~GR64
    9,  13,  14,  15,  16,  17,  18,  20,  -1,  	// #411 inferred~GR8_ABCD_H~FR32~GR8_NOREX+GR64_TC~GR8+GR64_TCW64~GR64_NOREX+GR64_TC~GR8+GR64_NOREX~FR32X~GR64
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* X86GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,6,18,31,44,46,51,53,55,57,59,61,63,65,67,69,71,73,85,86,88,91,93,95,97,99,101,106,108,113,118,120,122,127,139,151,163,175,187,188,200,202,204,206,208,211,213,215,217,219,224,229,234,239,241,243,248,253,258,260,268,275,280,288,295,307,315,327,339,351,363,375,376,378,380,383,385,388,390,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* X86GenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 119 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    18,31,18,31,393,18,31,71,18,401,31,71,85,260,85,71,401,393,85,71,71,85,71,206,206,206,206,206,206,206,206,206,206,206,206,206,206,206,206,99,99,99,99,99,99,99,99,118,118,118,118,118,118,118,85,51,51,51,51,51,51,51,51,241,241,241,241,241,241,241,241,411,411,0,411,0,0,0,0,85,85,85,85,85,85,85,85,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc X86RegDesc[];
extern const MCPhysReg X86RegDiffLists[];
extern const char X86RegStrings[];
extern const MCPhysReg X86RegUnitRoots[][2];
extern const uint16_t X86SubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits X86SubRegIdxRanges[];
extern const uint16_t X86RegEncodingTable[];
// X86 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0Dwarf2L[];
extern const unsigned X86DwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1Dwarf2L[];
extern const unsigned X86DwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2Dwarf2L[];
extern const unsigned X86DwarfFlavour2Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0Dwarf2L[];
extern const unsigned X86EHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1Dwarf2L[];
extern const unsigned X86EHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2Dwarf2L[];
extern const unsigned X86EHFlavour2Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0L2Dwarf[];
extern const unsigned X86DwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1L2Dwarf[];
extern const unsigned X86DwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2L2Dwarf[];
extern const unsigned X86DwarfFlavour2L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0L2Dwarf[];
extern const unsigned X86EHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1L2Dwarf[];
extern const unsigned X86EHFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2L2Dwarf[];
extern const unsigned X86EHFlavour2L2DwarfSize;

X86GenRegisterInfo::
X86GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(X86RegInfoDesc, RegisterClasses, RegisterClasses+79,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xfffffff8) {
  InitMCRegisterInfo(X86RegDesc, 234, RA, PC,
                     X86MCRegisterClasses, 79,
                     X86RegUnitRoots,
                     119,
                     X86RegDiffLists,
                     X86RegStrings,
                     X86SubRegIdxLists,
                     7,
                     X86SubRegIdxRanges,
                     X86RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour0Dwarf2L, X86DwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour1Dwarf2L, X86DwarfFlavour1Dwarf2LSize, false);
    break;
  case 2:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour2Dwarf2L, X86DwarfFlavour2Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(X86EHFlavour0Dwarf2L, X86EHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(X86EHFlavour1Dwarf2L, X86EHFlavour1Dwarf2LSize, true);
    break;
  case 2:
    mapDwarfRegsToLLVMRegs(X86EHFlavour2Dwarf2L, X86EHFlavour2Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour0L2Dwarf, X86DwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour1L2Dwarf, X86DwarfFlavour1L2DwarfSize, false);
    break;
  case 2:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour2L2Dwarf, X86DwarfFlavour2L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(X86EHFlavour0L2Dwarf, X86EHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(X86EHFlavour1L2Dwarf, X86EHFlavour1L2DwarfSize, true);
    break;
  case 2:
    mapLLVMRegsToDwarfRegs(X86EHFlavour2L2Dwarf, X86EHFlavour2L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_32_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32_RegMask[] = { 0x20b0c1f0, 0x00006000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32EHRet_SaveList[] = { X86::EAX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32EHRet_RegMask[] = { 0x21bde1fe, 0x00006000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_RegMask[] = { 0x003001f0, 0x00000030, 0x00000000, 0x000003c0, 0x00000000, 0x00000000, 0xc3c00000, 0x000003c3, };
static const MCPhysReg CSR_64EHRet_SaveList[] = { X86::RAX, X86::RDX, X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64EHRet_RegMask[] = { 0x013d21fe, 0x00000138, 0x00000000, 0x000003c0, 0x00000000, 0x00000000, 0xc3c00000, 0x000003c3, };
static const MCPhysReg CSR_64_AllRegs_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::RAX, X86::RSP, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 0 };
static const uint32_t CSR_64_AllRegs_RegMask[] = { 0x61fdf7fe, 0x0001f9f8, 0x00000000, 0xfffc03fc, 0x0003ffff, 0x00000000, 0xfffc0000, 0x000003ff, };
static const MCPhysReg CSR_64_AllRegs_AVX_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RSP, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, X86::YMM16, X86::YMM17, X86::YMM18, X86::YMM19, X86::YMM20, X86::YMM21, X86::YMM22, X86::YMM23, X86::YMM24, X86::YMM25, X86::YMM26, X86::YMM27, X86::YMM28, X86::YMM29, X86::YMM30, X86::YMM31, 0 };
static const uint32_t CSR_64_AllRegs_AVX_RegMask[] = { 0x61fdf7fe, 0x0001f9f8, 0x00000000, 0xfffc03fc, 0xffffffff, 0x0003ffff, 0xfffc0000, 0x000003ff, };
static const MCPhysReg CSR_64_Intel_OCL_BI_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_RegMask[] = { 0x003001f0, 0x00000030, 0x00000000, 0xfc0003c0, 0x00000003, 0x00000000, 0xc3c00000, 0x000003c3, };
static const MCPhysReg CSR_64_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_AVX_RegMask[] = { 0x003001f0, 0x00000030, 0x00000000, 0xfc0003c0, 0xfc000003, 0x00000003, 0xc3c00000, 0x000003c3, };
static const MCPhysReg CSR_64_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RDI, X86::RSI, X86::R14, X86::R15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_AVX512_RegMask[] = { 0x20a0c130, 0x000068a0, 0x03c00000, 0x00000300, 0x0003fffc, 0x0003fffc, 0x0303fffc, 0x00000303, };
static const MCPhysReg CSR_64_MostRegs_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_MostRegs_RegMask[] = { 0x21f5f7f0, 0x000069f0, 0x00000000, 0xfffc03fc, 0x00000003, 0x00000000, 0xfffc0000, 0x000003ff, };
static const MCPhysReg CSR_64_RT_AllRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::RSP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_RT_AllRegs_RegMask[] = { 0x61fdf7fe, 0x0001f9f8, 0x00000000, 0xfffc03dc, 0x00000003, 0x00000000, 0xdfdc0000, 0x000003df, };
static const MCPhysReg CSR_64_RT_AllRegs_AVX_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::RSP, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_RT_AllRegs_AVX_RegMask[] = { 0x61fdf7fe, 0x0001f9f8, 0x00000000, 0xfffc03dc, 0xfffc0003, 0x00000003, 0xdfdc0000, 0x000003df, };
static const MCPhysReg CSR_64_RT_MostRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::RSP, 0 };
static const uint32_t CSR_64_RT_MostRegs_RegMask[] = { 0x61fdf7fe, 0x0001f9f8, 0x00000000, 0x000003dc, 0x00000000, 0x00000000, 0xdfdc0000, 0x000003df, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_RegMask[] = { 0x20b0c1f0, 0x000068b0, 0x00000000, 0xff0003c0, 0x00000003, 0x00000000, 0xc3c00000, 0x000003c3, };
static const MCPhysReg CSR_Win64_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_Win64_Intel_OCL_BI_AVX_RegMask[] = { 0x20b0c1f0, 0x000068b0, 0x00000000, 0xff0003c0, 0xff000003, 0x00000003, 0xc3c00000, 0x000003c3, };
static const MCPhysReg CSR_Win64_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_Win64_Intel_OCL_BI_AVX512_RegMask[] = { 0x20b0c1f0, 0x000068b0, 0x03c00000, 0xff0003c0, 0xff0000ff, 0xff0000ff, 0xc3c000ff, 0x000003c3, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

