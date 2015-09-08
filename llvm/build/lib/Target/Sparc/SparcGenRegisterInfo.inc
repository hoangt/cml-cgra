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
extern const MCRegisterClass SPMCRegisterClasses[];

namespace SP {
enum {
  NoRegister,
  ICC = 1,
  Y = 2,
  D0 = 3,
  D1 = 4,
  D2 = 5,
  D3 = 6,
  D4 = 7,
  D5 = 8,
  D6 = 9,
  D7 = 10,
  D8 = 11,
  D9 = 12,
  D10 = 13,
  D11 = 14,
  D12 = 15,
  D13 = 16,
  D14 = 17,
  D15 = 18,
  D16 = 19,
  D17 = 20,
  D18 = 21,
  D19 = 22,
  D20 = 23,
  D21 = 24,
  D22 = 25,
  D23 = 26,
  D24 = 27,
  D25 = 28,
  D26 = 29,
  D27 = 30,
  D28 = 31,
  D29 = 32,
  D30 = 33,
  D31 = 34,
  F0 = 35,
  F1 = 36,
  F2 = 37,
  F3 = 38,
  F4 = 39,
  F5 = 40,
  F6 = 41,
  F7 = 42,
  F8 = 43,
  F9 = 44,
  F10 = 45,
  F11 = 46,
  F12 = 47,
  F13 = 48,
  F14 = 49,
  F15 = 50,
  F16 = 51,
  F17 = 52,
  F18 = 53,
  F19 = 54,
  F20 = 55,
  F21 = 56,
  F22 = 57,
  F23 = 58,
  F24 = 59,
  F25 = 60,
  F26 = 61,
  F27 = 62,
  F28 = 63,
  F29 = 64,
  F30 = 65,
  F31 = 66,
  FCC0 = 67,
  FCC1 = 68,
  FCC2 = 69,
  FCC3 = 70,
  G0 = 71,
  G1 = 72,
  G2 = 73,
  G3 = 74,
  G4 = 75,
  G5 = 76,
  G6 = 77,
  G7 = 78,
  I0 = 79,
  I1 = 80,
  I2 = 81,
  I3 = 82,
  I4 = 83,
  I5 = 84,
  I6 = 85,
  I7 = 86,
  L0 = 87,
  L1 = 88,
  L2 = 89,
  L3 = 90,
  L4 = 91,
  L5 = 92,
  L6 = 93,
  L7 = 94,
  O0 = 95,
  O1 = 96,
  O2 = 97,
  O3 = 98,
  O4 = 99,
  O5 = 100,
  O6 = 101,
  O7 = 102,
  Q0 = 103,
  Q1 = 104,
  Q2 = 105,
  Q3 = 106,
  Q4 = 107,
  Q5 = 108,
  Q6 = 109,
  Q7 = 110,
  Q8 = 111,
  Q9 = 112,
  Q10 = 113,
  Q11 = 114,
  Q12 = 115,
  Q13 = 116,
  Q14 = 117,
  Q15 = 118,
  NUM_TARGET_REGS 	// 119
};
}

// Register classes
namespace SP {
enum {
  FCCRegsRegClassID = 0,
  FPRegsRegClassID = 1,
  IntRegsRegClassID = 2,
  DFPRegsRegClassID = 3,
  I64RegsRegClassID = 4,
  DFPRegs_with_sub_evenRegClassID = 5,
  QFPRegsRegClassID = 6,
  QFPRegs_with_sub_evenRegClassID = 7
  };
}

// Subregister indices
namespace SP {
enum {
  NoSubRegister,
  sub_even,	// 1
  sub_even64,	// 2
  sub_odd,	// 3
  sub_odd64,	// 4
  sub_odd64_then_sub_even,	// 5
  sub_odd64_then_sub_odd,	// 6
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

extern const MCPhysReg SparcRegDiffLists[] = {
  /* 0 */ 65126, 1, 1, 1, 0,
  /* 5 */ 32, 1, 0,
  /* 8 */ 65436, 32, 1, 65504, 33, 1, 0,
  /* 15 */ 34, 1, 0,
  /* 18 */ 65437, 34, 1, 65502, 35, 1, 0,
  /* 25 */ 36, 1, 0,
  /* 28 */ 65438, 36, 1, 65500, 37, 1, 0,
  /* 35 */ 38, 1, 0,
  /* 38 */ 65439, 38, 1, 65498, 39, 1, 0,
  /* 45 */ 40, 1, 0,
  /* 48 */ 65440, 40, 1, 65496, 41, 1, 0,
  /* 55 */ 42, 1, 0,
  /* 58 */ 65441, 42, 1, 65494, 43, 1, 0,
  /* 65 */ 44, 1, 0,
  /* 68 */ 65442, 44, 1, 65492, 45, 1, 0,
  /* 75 */ 46, 1, 0,
  /* 78 */ 65443, 46, 1, 65490, 47, 1, 0,
  /* 85 */ 65348, 1, 0,
  /* 88 */ 65444, 1, 0,
  /* 91 */ 65445, 1, 0,
  /* 94 */ 65446, 1, 0,
  /* 97 */ 65447, 1, 0,
  /* 100 */ 65448, 1, 0,
  /* 103 */ 65449, 1, 0,
  /* 106 */ 65450, 1, 0,
  /* 109 */ 65451, 1, 0,
  /* 112 */ 65532, 1, 0,
  /* 115 */ 15, 0,
  /* 117 */ 84, 0,
  /* 119 */ 85, 0,
  /* 121 */ 86, 0,
  /* 123 */ 87, 0,
  /* 125 */ 88, 0,
  /* 127 */ 89, 0,
  /* 129 */ 90, 0,
  /* 131 */ 91, 0,
  /* 133 */ 65488, 92, 0,
  /* 136 */ 65489, 92, 0,
  /* 139 */ 65489, 93, 0,
  /* 142 */ 65490, 93, 0,
  /* 145 */ 65491, 93, 0,
  /* 148 */ 65491, 94, 0,
  /* 151 */ 65492, 94, 0,
  /* 154 */ 65493, 94, 0,
  /* 157 */ 65493, 95, 0,
  /* 160 */ 65494, 95, 0,
  /* 163 */ 65495, 95, 0,
  /* 166 */ 65495, 96, 0,
  /* 169 */ 65496, 96, 0,
  /* 172 */ 65497, 96, 0,
  /* 175 */ 65497, 97, 0,
  /* 178 */ 65498, 97, 0,
  /* 181 */ 65499, 97, 0,
  /* 184 */ 65499, 98, 0,
  /* 187 */ 65500, 98, 0,
  /* 190 */ 65501, 98, 0,
  /* 193 */ 65501, 99, 0,
  /* 196 */ 65502, 99, 0,
  /* 199 */ 65503, 99, 0,
  /* 202 */ 65503, 100, 0,
  /* 205 */ 65504, 100, 0,
  /* 208 */ 65503, 0,
  /* 210 */ 65519, 0,
  /* 212 */ 65535, 0,
};

extern const uint16_t SparcSubRegIdxLists[] = {
  /* 0 */ 1, 3, 0,
  /* 3 */ 2, 4, 0,
  /* 6 */ 2, 1, 3, 4, 5, 6, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_even
  { 0, 64 },	// sub_even64
  { 32, 32 },	// sub_odd
  { 64, 64 },	// sub_odd64
  { 64, 32 },	// sub_odd64_then_sub_even
  { 96, 32 },	// sub_odd64_then_sub_odd
};

extern const char SparcRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'F', '1', '0', 0,
  /* 8 */ 'Q', '1', '0', 0,
  /* 12 */ 'D', '2', '0', 0,
  /* 16 */ 'F', '2', '0', 0,
  /* 20 */ 'D', '3', '0', 0,
  /* 24 */ 'F', '3', '0', 0,
  /* 28 */ 'F', 'C', 'C', '0', 0,
  /* 33 */ 'D', '0', 0,
  /* 36 */ 'F', '0', 0,
  /* 39 */ 'G', '0', 0,
  /* 42 */ 'I', '0', 0,
  /* 45 */ 'L', '0', 0,
  /* 48 */ 'O', '0', 0,
  /* 51 */ 'Q', '0', 0,
  /* 54 */ 'D', '1', '1', 0,
  /* 58 */ 'F', '1', '1', 0,
  /* 62 */ 'Q', '1', '1', 0,
  /* 66 */ 'D', '2', '1', 0,
  /* 70 */ 'F', '2', '1', 0,
  /* 74 */ 'D', '3', '1', 0,
  /* 78 */ 'F', '3', '1', 0,
  /* 82 */ 'F', 'C', 'C', '1', 0,
  /* 87 */ 'D', '1', 0,
  /* 90 */ 'F', '1', 0,
  /* 93 */ 'G', '1', 0,
  /* 96 */ 'I', '1', 0,
  /* 99 */ 'L', '1', 0,
  /* 102 */ 'O', '1', 0,
  /* 105 */ 'Q', '1', 0,
  /* 108 */ 'D', '1', '2', 0,
  /* 112 */ 'F', '1', '2', 0,
  /* 116 */ 'Q', '1', '2', 0,
  /* 120 */ 'D', '2', '2', 0,
  /* 124 */ 'F', '2', '2', 0,
  /* 128 */ 'F', 'C', 'C', '2', 0,
  /* 133 */ 'D', '2', 0,
  /* 136 */ 'F', '2', 0,
  /* 139 */ 'G', '2', 0,
  /* 142 */ 'I', '2', 0,
  /* 145 */ 'L', '2', 0,
  /* 148 */ 'O', '2', 0,
  /* 151 */ 'Q', '2', 0,
  /* 154 */ 'D', '1', '3', 0,
  /* 158 */ 'F', '1', '3', 0,
  /* 162 */ 'Q', '1', '3', 0,
  /* 166 */ 'D', '2', '3', 0,
  /* 170 */ 'F', '2', '3', 0,
  /* 174 */ 'F', 'C', 'C', '3', 0,
  /* 179 */ 'D', '3', 0,
  /* 182 */ 'F', '3', 0,
  /* 185 */ 'G', '3', 0,
  /* 188 */ 'I', '3', 0,
  /* 191 */ 'L', '3', 0,
  /* 194 */ 'O', '3', 0,
  /* 197 */ 'Q', '3', 0,
  /* 200 */ 'D', '1', '4', 0,
  /* 204 */ 'F', '1', '4', 0,
  /* 208 */ 'Q', '1', '4', 0,
  /* 212 */ 'D', '2', '4', 0,
  /* 216 */ 'F', '2', '4', 0,
  /* 220 */ 'D', '4', 0,
  /* 223 */ 'F', '4', 0,
  /* 226 */ 'G', '4', 0,
  /* 229 */ 'I', '4', 0,
  /* 232 */ 'L', '4', 0,
  /* 235 */ 'O', '4', 0,
  /* 238 */ 'Q', '4', 0,
  /* 241 */ 'D', '1', '5', 0,
  /* 245 */ 'F', '1', '5', 0,
  /* 249 */ 'Q', '1', '5', 0,
  /* 253 */ 'D', '2', '5', 0,
  /* 257 */ 'F', '2', '5', 0,
  /* 261 */ 'D', '5', 0,
  /* 264 */ 'F', '5', 0,
  /* 267 */ 'G', '5', 0,
  /* 270 */ 'I', '5', 0,
  /* 273 */ 'L', '5', 0,
  /* 276 */ 'O', '5', 0,
  /* 279 */ 'Q', '5', 0,
  /* 282 */ 'D', '1', '6', 0,
  /* 286 */ 'F', '1', '6', 0,
  /* 290 */ 'D', '2', '6', 0,
  /* 294 */ 'F', '2', '6', 0,
  /* 298 */ 'D', '6', 0,
  /* 301 */ 'F', '6', 0,
  /* 304 */ 'G', '6', 0,
  /* 307 */ 'I', '6', 0,
  /* 310 */ 'L', '6', 0,
  /* 313 */ 'O', '6', 0,
  /* 316 */ 'Q', '6', 0,
  /* 319 */ 'D', '1', '7', 0,
  /* 323 */ 'F', '1', '7', 0,
  /* 327 */ 'D', '2', '7', 0,
  /* 331 */ 'F', '2', '7', 0,
  /* 335 */ 'D', '7', 0,
  /* 338 */ 'F', '7', 0,
  /* 341 */ 'G', '7', 0,
  /* 344 */ 'I', '7', 0,
  /* 347 */ 'L', '7', 0,
  /* 350 */ 'O', '7', 0,
  /* 353 */ 'Q', '7', 0,
  /* 356 */ 'D', '1', '8', 0,
  /* 360 */ 'F', '1', '8', 0,
  /* 364 */ 'D', '2', '8', 0,
  /* 368 */ 'F', '2', '8', 0,
  /* 372 */ 'D', '8', 0,
  /* 375 */ 'F', '8', 0,
  /* 378 */ 'Q', '8', 0,
  /* 381 */ 'D', '1', '9', 0,
  /* 385 */ 'F', '1', '9', 0,
  /* 389 */ 'D', '2', '9', 0,
  /* 393 */ 'F', '2', '9', 0,
  /* 397 */ 'D', '9', 0,
  /* 400 */ 'F', '9', 0,
  /* 403 */ 'Q', '9', 0,
  /* 406 */ 'I', 'C', 'C', 0,
  /* 410 */ 'Y', 0,
};

extern const MCRegisterDesc SparcRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0 },
  { 406, 4, 4, 2, 3393 },
  { 410, 4, 4, 2, 3393 },
  { 33, 5, 203, 0, 1794 },
  { 87, 12, 194, 0, 1794 },
  { 133, 15, 194, 0, 1794 },
  { 179, 22, 185, 0, 1794 },
  { 220, 25, 185, 0, 1794 },
  { 261, 32, 176, 0, 1794 },
  { 298, 35, 176, 0, 1794 },
  { 335, 42, 167, 0, 1794 },
  { 372, 45, 167, 0, 1794 },
  { 397, 52, 158, 0, 1794 },
  { 0, 55, 158, 0, 1794 },
  { 54, 62, 149, 0, 1794 },
  { 108, 65, 149, 0, 1794 },
  { 154, 72, 140, 0, 1794 },
  { 200, 75, 140, 0, 1794 },
  { 241, 82, 134, 0, 1794 },
  { 282, 4, 134, 2, 1841 },
  { 319, 4, 131, 2, 1841 },
  { 356, 4, 131, 2, 1841 },
  { 381, 4, 129, 2, 1841 },
  { 12, 4, 129, 2, 1841 },
  { 66, 4, 127, 2, 1841 },
  { 120, 4, 127, 2, 1841 },
  { 166, 4, 125, 2, 1841 },
  { 212, 4, 125, 2, 1841 },
  { 253, 4, 123, 2, 1841 },
  { 290, 4, 123, 2, 1841 },
  { 327, 4, 121, 2, 1841 },
  { 364, 4, 121, 2, 1841 },
  { 389, 4, 119, 2, 1841 },
  { 20, 4, 119, 2, 1841 },
  { 74, 4, 117, 2, 1841 },
  { 36, 4, 205, 2, 3329 },
  { 90, 4, 202, 2, 3329 },
  { 136, 4, 199, 2, 3329 },
  { 182, 4, 196, 2, 3329 },
  { 223, 4, 196, 2, 3329 },
  { 264, 4, 193, 2, 3329 },
  { 301, 4, 190, 2, 3329 },
  { 338, 4, 187, 2, 3329 },
  { 375, 4, 187, 2, 3329 },
  { 400, 4, 184, 2, 3329 },
  { 4, 4, 181, 2, 3329 },
  { 58, 4, 178, 2, 3329 },
  { 112, 4, 178, 2, 3329 },
  { 158, 4, 175, 2, 3329 },
  { 204, 4, 172, 2, 3329 },
  { 245, 4, 169, 2, 3329 },
  { 286, 4, 169, 2, 3329 },
  { 323, 4, 166, 2, 3329 },
  { 360, 4, 163, 2, 3329 },
  { 385, 4, 160, 2, 3329 },
  { 16, 4, 160, 2, 3329 },
  { 70, 4, 157, 2, 3329 },
  { 124, 4, 154, 2, 3329 },
  { 170, 4, 151, 2, 3329 },
  { 216, 4, 151, 2, 3329 },
  { 257, 4, 148, 2, 3329 },
  { 294, 4, 145, 2, 3329 },
  { 331, 4, 142, 2, 3329 },
  { 368, 4, 142, 2, 3329 },
  { 393, 4, 139, 2, 3329 },
  { 24, 4, 136, 2, 3329 },
  { 78, 4, 133, 2, 3329 },
  { 28, 4, 4, 2, 3361 },
  { 82, 4, 4, 2, 3361 },
  { 128, 4, 4, 2, 3361 },
  { 174, 4, 4, 2, 3361 },
  { 39, 4, 4, 2, 3361 },
  { 93, 4, 4, 2, 3361 },
  { 139, 4, 4, 2, 3361 },
  { 185, 4, 4, 2, 3361 },
  { 226, 4, 4, 2, 3361 },
  { 267, 4, 4, 2, 3361 },
  { 304, 4, 4, 2, 3361 },
  { 341, 4, 4, 2, 3361 },
  { 42, 4, 4, 2, 3361 },
  { 96, 4, 4, 2, 3361 },
  { 142, 4, 4, 2, 3361 },
  { 188, 4, 4, 2, 3361 },
  { 229, 4, 4, 2, 3361 },
  { 270, 4, 4, 2, 3361 },
  { 307, 4, 4, 2, 3361 },
  { 344, 4, 4, 2, 3361 },
  { 45, 4, 4, 2, 3361 },
  { 99, 4, 4, 2, 3361 },
  { 145, 4, 4, 2, 3361 },
  { 191, 4, 4, 2, 3361 },
  { 232, 4, 4, 2, 3361 },
  { 273, 4, 4, 2, 3361 },
  { 310, 4, 4, 2, 3361 },
  { 347, 4, 4, 2, 3361 },
  { 48, 4, 4, 2, 3361 },
  { 102, 4, 4, 2, 3361 },
  { 148, 4, 4, 2, 3361 },
  { 194, 4, 4, 2, 3361 },
  { 235, 4, 4, 2, 3361 },
  { 276, 4, 4, 2, 3361 },
  { 313, 4, 4, 2, 3361 },
  { 350, 4, 4, 2, 3361 },
  { 51, 8, 4, 6, 4 },
  { 105, 18, 4, 6, 4 },
  { 151, 28, 4, 6, 4 },
  { 197, 38, 4, 6, 4 },
  { 238, 48, 4, 6, 4 },
  { 279, 58, 4, 6, 4 },
  { 316, 68, 4, 6, 4 },
  { 353, 78, 4, 6, 4 },
  { 378, 88, 4, 3, 1362 },
  { 403, 91, 4, 3, 1362 },
  { 8, 94, 4, 3, 1362 },
  { 62, 97, 4, 3, 1362 },
  { 116, 100, 4, 3, 1362 },
  { 162, 103, 4, 3, 1362 },
  { 208, 106, 4, 3, 1362 },
  { 249, 109, 4, 3, 1362 },
};

extern const MCPhysReg SparcRegUnitRoots[][2] = {
  { SP::ICC },
  { SP::Y },
  { SP::F0 },
  { SP::F1 },
  { SP::F2 },
  { SP::F3 },
  { SP::F4 },
  { SP::F5 },
  { SP::F6 },
  { SP::F7 },
  { SP::F8 },
  { SP::F9 },
  { SP::F10 },
  { SP::F11 },
  { SP::F12 },
  { SP::F13 },
  { SP::F14 },
  { SP::F15 },
  { SP::F16 },
  { SP::F17 },
  { SP::F18 },
  { SP::F19 },
  { SP::F20 },
  { SP::F21 },
  { SP::F22 },
  { SP::F23 },
  { SP::F24 },
  { SP::F25 },
  { SP::F26 },
  { SP::F27 },
  { SP::F28 },
  { SP::F29 },
  { SP::F30 },
  { SP::F31 },
  { SP::D16 },
  { SP::D17 },
  { SP::D18 },
  { SP::D19 },
  { SP::D20 },
  { SP::D21 },
  { SP::D22 },
  { SP::D23 },
  { SP::D24 },
  { SP::D25 },
  { SP::D26 },
  { SP::D27 },
  { SP::D28 },
  { SP::D29 },
  { SP::D30 },
  { SP::D31 },
  { SP::FCC0 },
  { SP::FCC1 },
  { SP::FCC2 },
  { SP::FCC3 },
  { SP::G0 },
  { SP::G1 },
  { SP::G2 },
  { SP::G3 },
  { SP::G4 },
  { SP::G5 },
  { SP::G6 },
  { SP::G7 },
  { SP::I0 },
  { SP::I1 },
  { SP::I2 },
  { SP::I3 },
  { SP::I4 },
  { SP::I5 },
  { SP::I6 },
  { SP::I7 },
  { SP::L0 },
  { SP::L1 },
  { SP::L2 },
  { SP::L3 },
  { SP::L4 },
  { SP::L5 },
  { SP::L6 },
  { SP::L7 },
  { SP::O0 },
  { SP::O1 },
  { SP::O2 },
  { SP::O3 },
  { SP::O4 },
  { SP::O5 },
  { SP::O6 },
  { SP::O7 },
};

namespace {     // Register classes...
  // FCCRegs Register Class...
  const MCPhysReg FCCRegs[] = {
    SP::FCC0, SP::FCC1, SP::FCC2, SP::FCC3, 
  };

  // FCCRegs Bit set.
  const uint8_t FCCRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  };

  // FPRegs Register Class...
  const MCPhysReg FPRegs[] = {
    SP::F0, SP::F1, SP::F2, SP::F3, SP::F4, SP::F5, SP::F6, SP::F7, SP::F8, SP::F9, SP::F10, SP::F11, SP::F12, SP::F13, SP::F14, SP::F15, SP::F16, SP::F17, SP::F18, SP::F19, SP::F20, SP::F21, SP::F22, SP::F23, SP::F24, SP::F25, SP::F26, SP::F27, SP::F28, SP::F29, SP::F30, SP::F31, 
  };

  // FPRegs Bit set.
  const uint8_t FPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // IntRegs Register Class...
  const MCPhysReg IntRegs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 
  };

  // DFPRegs Register Class...
  const MCPhysReg DFPRegs[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, SP::D16, SP::D17, SP::D18, SP::D19, SP::D20, SP::D21, SP::D22, SP::D23, SP::D24, SP::D25, SP::D26, SP::D27, SP::D28, SP::D29, SP::D30, SP::D31, 
  };

  // DFPRegs Bit set.
  const uint8_t DFPRegsBits[] = {
    0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // I64Regs Register Class...
  const MCPhysReg I64Regs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // I64Regs Bit set.
  const uint8_t I64RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 
  };

  // DFPRegs_with_sub_even Register Class...
  const MCPhysReg DFPRegs_with_sub_even[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, 
  };

  // DFPRegs_with_sub_even Bit set.
  const uint8_t DFPRegs_with_sub_evenBits[] = {
    0xf8, 0xff, 0x07, 
  };

  // QFPRegs Register Class...
  const MCPhysReg QFPRegs[] = {
    SP::Q0, SP::Q1, SP::Q2, SP::Q3, SP::Q4, SP::Q5, SP::Q6, SP::Q7, SP::Q8, SP::Q9, SP::Q10, SP::Q11, SP::Q12, SP::Q13, SP::Q14, SP::Q15, 
  };

  // QFPRegs Bit set.
  const uint8_t QFPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 
  };

  // QFPRegs_with_sub_even Register Class...
  const MCPhysReg QFPRegs_with_sub_even[] = {
    SP::Q0, SP::Q1, SP::Q2, SP::Q3, SP::Q4, SP::Q5, SP::Q6, SP::Q7, 
  };

  // QFPRegs_with_sub_even Bit set.
  const uint8_t QFPRegs_with_sub_evenBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 
  };

}

extern const MCRegisterClass SparcMCRegisterClasses[] = {
  { "FCCRegs", FCCRegs, FCCRegsBits, 4, sizeof(FCCRegsBits), SP::FCCRegsRegClassID, 0, 0, 1, 1 },
  { "FPRegs", FPRegs, FPRegsBits, 32, sizeof(FPRegsBits), SP::FPRegsRegClassID, 4, 4, 1, 1 },
  { "IntRegs", IntRegs, IntRegsBits, 32, sizeof(IntRegsBits), SP::IntRegsRegClassID, 4, 4, 1, 1 },
  { "DFPRegs", DFPRegs, DFPRegsBits, 32, sizeof(DFPRegsBits), SP::DFPRegsRegClassID, 8, 8, 1, 1 },
  { "I64Regs", I64Regs, I64RegsBits, 32, sizeof(I64RegsBits), SP::I64RegsRegClassID, 8, 8, 1, 1 },
  { "DFPRegs_with_sub_even", DFPRegs_with_sub_even, DFPRegs_with_sub_evenBits, 16, sizeof(DFPRegs_with_sub_evenBits), SP::DFPRegs_with_sub_evenRegClassID, 8, 8, 1, 1 },
  { "QFPRegs", QFPRegs, QFPRegsBits, 16, sizeof(QFPRegsBits), SP::QFPRegsRegClassID, 16, 16, 1, 1 },
  { "QFPRegs_with_sub_even", QFPRegs_with_sub_even, QFPRegs_with_sub_evenBits, 8, sizeof(QFPRegs_with_sub_evenBits), SP::QFPRegs_with_sub_evenRegClassID, 16, 16, 1, 1 },
};

// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 64U, SP::Y },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPDwarfFlavour0Dwarf2LSize = sizeof(SPDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 64U, SP::Y },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPEHFlavour0Dwarf2LSize = sizeof(SPEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[] = {
  { SP::Y, 64U },
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPDwarfFlavour0L2DwarfSize = sizeof(SPDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[] = {
  { SP::Y, 64U },
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPEHFlavour0L2DwarfSize = sizeof(SPEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t SparcRegEncodingTable[] = {
  0,
  0,
  0,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  1,
  3,
  5,
  7,
  9,
  11,
  13,
  15,
  17,
  19,
  21,
  23,
  25,
  27,
  29,
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
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  1,
  5,
  9,
  13,
  17,
  21,
  25,
  29,
};
static inline void InitSparcMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SparcRegDesc, 119, RA, PC, SparcMCRegisterClasses, 8, SparcRegUnitRoots, 86, SparcRegDiffLists, SparcRegStrings, SparcSubRegIdxLists, 7,
SparcSubRegIdxRanges,   SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
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

struct SparcGenRegisterInfo : public TargetRegisterInfo {
  explicit SparcGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace SP { // Register classes
  extern const TargetRegisterClass FCCRegsRegClass;
  extern const TargetRegisterClass FPRegsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  extern const TargetRegisterClass DFPRegsRegClass;
  extern const TargetRegisterClass I64RegsRegClass;
  extern const TargetRegisterClass DFPRegs_with_sub_evenRegClass;
  extern const TargetRegisterClass QFPRegsRegClass;
  extern const TargetRegisterClass QFPRegs_with_sub_evenRegClass;
} // end of namespace Sparc

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

extern const MCRegisterClass SparcMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i32, MVT::i64, MVT::Other,
  /* 5 */ MVT::f32, MVT::Other,
  /* 7 */ MVT::f64, MVT::Other,
  /* 9 */ MVT::f128, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_even", "sub_even64", "sub_odd", "sub_odd64", "sub_odd64_then_sub_even", "sub_odd64_then_sub_odd" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_even
  0x00000003, // sub_even64
  0x00000002, // sub_odd
  0x0000000c, // sub_odd64
  0x00000004, // sub_odd64_then_sub_even
  0x00000008, // sub_odd64_then_sub_odd
 };



static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t FCCRegsSubClassMask[] = {
  0x00000001, 
};

static const uint32_t FPRegsSubClassMask[] = {
  0x00000002, 
  0x000000a0, // sub_even
  0x000000a0, // sub_odd
  0x00000080, // sub_odd64_then_sub_even
  0x00000080, // sub_odd64_then_sub_odd
};

static const uint32_t IntRegsSubClassMask[] = {
  0x00000014, 
};

static const uint32_t DFPRegsSubClassMask[] = {
  0x00000028, 
  0x000000c0, // sub_even64
  0x000000c0, // sub_odd64
};

static const uint32_t I64RegsSubClassMask[] = {
  0x00000010, 
};

static const uint32_t DFPRegs_with_sub_evenSubClassMask[] = {
  0x00000020, 
  0x00000080, // sub_even64
  0x00000080, // sub_odd64
};

static const uint32_t QFPRegsSubClassMask[] = {
  0x000000c0, 
};

static const uint32_t QFPRegs_with_sub_evenSubClassMask[] = {
  0x00000080, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 2, 4, 0,
  /* 3 */ 1, 3, 5, 6, 0,
};

static const TargetRegisterClass *const I64RegsSuperclasses[] = {
  &SP::IntRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const DFPRegs_with_sub_evenSuperclasses[] = {
  &SP::DFPRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const QFPRegs_with_sub_evenSuperclasses[] = {
  &SP::QFPRegsRegClass,
  nullptr
};

namespace SP {   // Register class instances
  extern const TargetRegisterClass FCCRegsRegClass = {
    &SparcMCRegisterClasses[FCCRegsRegClassID],
    VTLists + 0,
    FCCRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPRegsRegClass = {
    &SparcMCRegisterClasses[FPRegsRegClassID],
    VTLists + 5,
    FPRegsSubClassMask,
    SuperRegIdxSeqs + 3,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &SparcMCRegisterClasses[IntRegsRegClassID],
    VTLists + 2,
    IntRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DFPRegsRegClass = {
    &SparcMCRegisterClasses[DFPRegsRegClassID],
    VTLists + 7,
    DFPRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass I64RegsRegClass = {
    &SparcMCRegisterClasses[I64RegsRegClassID],
    VTLists + 3,
    I64RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    I64RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DFPRegs_with_sub_evenRegClass = {
    &SparcMCRegisterClasses[DFPRegs_with_sub_evenRegClassID],
    VTLists + 7,
    DFPRegs_with_sub_evenSubClassMask,
    SuperRegIdxSeqs + 0,
    DFPRegs_with_sub_evenSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QFPRegsRegClass = {
    &SparcMCRegisterClasses[QFPRegsRegClassID],
    VTLists + 9,
    QFPRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass QFPRegs_with_sub_evenRegClass = {
    &SparcMCRegisterClasses[QFPRegs_with_sub_evenRegClassID],
    VTLists + 9,
    QFPRegs_with_sub_evenSubClassMask,
    SuperRegIdxSeqs + 2,
    QFPRegs_with_sub_evenSuperclasses,
    nullptr
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SP::FCCRegsRegClass,
    &SP::FPRegsRegClass,
    &SP::IntRegsRegClass,
    &SP::DFPRegsRegClass,
    &SP::I64RegsRegClass,
    &SP::DFPRegs_with_sub_evenRegClass,
    &SP::QFPRegsRegClass,
    &SP::QFPRegs_with_sub_evenRegClass,
  };
}

static const TargetRegisterInfoDesc SparcRegInfoDesc[] = { // Extra Descriptors
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
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
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
unsigned SparcGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[6] = {
    0, 0, 0, 1, 0, 0, 
  };
  static const uint8_t Rows[2][6] = {
    { 1, 0, 3, 0, 0, 0, },
    { 5, 0, 6, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 6);
  --IdxB; assert(IdxB < 6);
  return Rows[RowMap[IdxA]][IdxB];
}

const TargetRegisterClass *SparcGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[8][6] = {
    {	// FCCRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// FPRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// IntRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// DFPRegs
      6,	// sub_even -> DFPRegs_with_sub_even
      0,	// sub_even64
      6,	// sub_odd -> DFPRegs_with_sub_even
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// I64Regs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// DFPRegs_with_sub_even
      6,	// sub_even -> DFPRegs_with_sub_even
      0,	// sub_even64
      6,	// sub_odd -> DFPRegs_with_sub_even
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// QFPRegs
      8,	// sub_even -> QFPRegs_with_sub_even
      7,	// sub_even64 -> QFPRegs
      8,	// sub_odd -> QFPRegs_with_sub_even
      7,	// sub_odd64 -> QFPRegs
      8,	// sub_odd64_then_sub_even -> QFPRegs_with_sub_even
      8,	// sub_odd64_then_sub_odd -> QFPRegs_with_sub_even
    },
    {	// QFPRegs_with_sub_even
      8,	// sub_even -> QFPRegs_with_sub_even
      8,	// sub_even64 -> QFPRegs_with_sub_even
      8,	// sub_odd -> QFPRegs_with_sub_even
      8,	// sub_odd64 -> QFPRegs_with_sub_even
      8,	// sub_odd64_then_sub_even -> QFPRegs_with_sub_even
      8,	// sub_odd64_then_sub_odd -> QFPRegs_with_sub_even
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
const RegClassWeight &SparcGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 4},  	// FCCRegs
    {1, 32},  	// FPRegs
    {1, 32},  	// IntRegs
    {2, 64},  	// DFPRegs
    {1, 32},  	// I64Regs
    {2, 32},  	// DFPRegs_with_sub_even
    {4, 64},  	// QFPRegs
    {4, 32},  	// QFPRegs_with_sub_even
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SparcGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 86 && "invalid register unit");
  static const uint8_t RUWeightTable[] = {
    0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 };
  return RUWeightTable[RegUnit];
}


// Get the number of dimensions of register pressure.
unsigned SparcGenRegisterInfo::getNumRegPressureSets() const {
  return 4;
}

// Get the name of this register unit pressure set.
const char *SparcGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "FCCRegs",
    "FPRegs",
    "IntRegs",
    "DFPRegs",
    nullptr };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SparcGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    4,  	// 0: FCCRegs
    32,  	// 1: FPRegs
    32,  	// 2: IntRegs
    64,  	// 3: DFPRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    0,  -1,  	// #0 FCCRegs
    1,  3,  -1,  	// #2 FPRegs
    2,  -1,  	// #5 IntRegs
    3,  -1,  	// #7 DFPRegs
    2,  -1,  	// #9 I64Regs
    1,  3,  -1,  	// #11 DFPRegs_with_sub_even
    3,  -1,  	// #14 QFPRegs
    1,  3,  -1,  	// #16 QFPRegs_with_sub_even
    -1,  	// #19 inferred
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,5,7,9,11,14,16,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 86 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    19,19,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc SparcRegDesc[];
extern const MCPhysReg SparcRegDiffLists[];
extern const char SparcRegStrings[];
extern const MCPhysReg SparcRegUnitRoots[][2];
extern const uint16_t SparcSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[];
extern const uint16_t SparcRegEncodingTable[];
// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[];
extern const unsigned SPDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[];
extern const unsigned SPEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[];
extern const unsigned SPDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[];
extern const unsigned SPEHFlavour0L2DwarfSize;

SparcGenRegisterInfo::
SparcGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(SparcRegInfoDesc, RegisterClasses, RegisterClasses+8,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffff) {
  InitMCRegisterInfo(SparcRegDesc, 119, RA, PC,
                     SparcMCRegisterClasses, 8,
                     SparcRegUnitRoots,
                     86,
                     SparcRegDiffLists,
                     SparcRegStrings,
                     SparcSubRegIdxLists,
                     7,
                     SparcSubRegIdxRanges,
                     SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_SaveList[] = { 0 };
static const uint32_t CSR_RegMask[] = { 0x00000000, 0x00000000, 0x7fff8000, 0x00000000, };
static const MCPhysReg RTCSR_SaveList[] = { 0 };
static const uint32_t RTCSR_RegMask[] = { 0x00000000, 0x00000000, 0x00600000, 0x00000000, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

