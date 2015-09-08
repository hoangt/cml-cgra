/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 172, 2, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 170, 2, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 174, 2, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 153, 1, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 221, 12, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 224, 12, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 177, 2, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 185, 2, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 156, 1, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 184, 9, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 185, 9, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 206, 7, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 130, 4, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 214, 7, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 158, 1, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 233, 12, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 250, 6, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 247, 6, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 249, 6, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 248, 6, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 219, 12, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 227, 12, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 217, 12, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 176, 2, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 232, 12, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 230, 12, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 129, 4, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 159, 1, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 232, 9, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 177, 13, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 219, 9, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 182, 9, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 199, 12, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 200, 12, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 183, 9, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 239, 4, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 240, 4, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 218, 9, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 198, 1, // Skip to: 465
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 192, 1, // Skip to: 465
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 186, 1, // Skip to: 465
/* 23 */      MCD::OPC_Decode, 152, 1, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 174, 1, // Skip to: 465
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 168, 1, // Skip to: 465
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 162, 1, // Skip to: 465
/* 47 */      MCD::OPC_Decode, 173, 2, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 465
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 144, 1, // Skip to: 465
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 138, 1, // Skip to: 465
/* 71 */      MCD::OPC_Decode, 171, 2, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 126, 1, // Skip to: 465
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 120, 1, // Skip to: 465
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 114, 1, // Skip to: 465
/* 95 */      MCD::OPC_Decode, 175, 2, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 99, 1, // Skip to: 465
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 216, 12, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 231, 12, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 229, 12, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 42, 1, // Skip to: 465
/* 167 */     MCD::OPC_Decode, 184, 2, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 465
/* 179 */     MCD::OPC_Decode, 192, 2, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 22, 1, // Skip to: 465
/* 187 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 465
/* 191 */     MCD::OPC_Decode, 157, 1, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 465
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 0, 1, // Skip to: 465
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 250, 0, // Skip to: 465
/* 215 */     MCD::OPC_Decode, 155, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 238, 0, // Skip to: 465
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 232, 0, // Skip to: 465
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 226, 0, // Skip to: 465
/* 239 */     MCD::OPC_Decode, 151, 1, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 214, 0, // Skip to: 465
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 208, 0, // Skip to: 465
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 202, 0, // Skip to: 465
/* 263 */     MCD::OPC_Decode, 222, 12, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 465
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 465
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 465
/* 287 */     MCD::OPC_Decode, 225, 12, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 465
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 465
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 465
/* 311 */     MCD::OPC_Decode, 208, 7, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 465
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 465
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 465
/* 335 */     MCD::OPC_Decode, 131, 4, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 363
/* 343 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 465
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 465
/* 353 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 465
/* 359 */     MCD::OPC_Decode, 217, 7, 1, // Opcode: LwRxSpImmX16
/* 363 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 387
/* 367 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 465
/* 371 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 465
/* 377 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 465
/* 383 */     MCD::OPC_Decode, 215, 7, 1, // Opcode: LwRxPcTcpX16
/* 387 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 405
/* 391 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 465
/* 395 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 465
/* 401 */     MCD::OPC_Decode, 198, 12, 9, // Opcode: SbRxRyOffMemX16
/* 405 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 465
/* 413 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 465
/* 419 */     MCD::OPC_Decode, 215, 12, 9, // Opcode: ShRxRyOffMemX16
/* 423 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 447
/* 427 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 465
/* 431 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 465
/* 437 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 465
/* 443 */     MCD::OPC_Decode, 235, 12, 1, // Opcode: SwRxSpImmX16
/* 447 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 465
/* 451 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 234, 12, 9, // Opcode: SwRxRyOffMemX16
/* 465 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 187, 7, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 136, 7, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 177, 12, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 227, 10, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 21
/* 14 */      MCD::OPC_CheckPredicate, 3, 42, 1, // Skip to: 316
/* 18 */      MCD::OPC_Decode, 49, 11, // Opcode: ADDU16_MM
/* 21 */      MCD::OPC_FilterValue, 1, 35, 1, // Skip to: 316
/* 25 */      MCD::OPC_CheckPredicate, 3, 31, 1, // Skip to: 316
/* 29 */      MCD::OPC_Decode, 150, 12, 11, // Opcode: SUBU16_MM
/* 33 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 3, 19, 1, // Skip to: 316
/* 41 */      MCD::OPC_Decode, 193, 8, 12, // Opcode: MOVE16_MM
/* 45 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 76
/* 49 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 52 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 64
/* 56 */      MCD::OPC_CheckPredicate, 3, 0, 1, // Skip to: 316
/* 60 */      MCD::OPC_Decode, 163, 11, 13, // Opcode: SLL16_MM
/* 64 */      MCD::OPC_FilterValue, 1, 248, 0, // Skip to: 316
/* 68 */      MCD::OPC_CheckPredicate, 3, 244, 0, // Skip to: 316
/* 72 */      MCD::OPC_Decode, 225, 11, 13, // Opcode: SRL16_MM
/* 76 */      MCD::OPC_FilterValue, 17, 166, 0, // Skip to: 246
/* 80 */      MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 83 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 95
/* 87 */      MCD::OPC_CheckPredicate, 3, 225, 0, // Skip to: 316
/* 91 */      MCD::OPC_Decode, 217, 9, 14, // Opcode: NOT16_MM
/* 95 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 107
/* 99 */      MCD::OPC_CheckPredicate, 3, 213, 0, // Skip to: 316
/* 103 */     MCD::OPC_Decode, 166, 13, 15, // Opcode: XOR16_MM
/* 107 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 118
/* 111 */     MCD::OPC_CheckPredicate, 3, 201, 0, // Skip to: 316
/* 115 */     MCD::OPC_Decode, 81, 15, // Opcode: AND16_MM
/* 118 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 3, 190, 0, // Skip to: 316
/* 126 */     MCD::OPC_Decode, 221, 9, 15, // Opcode: OR16_MM
/* 130 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 161
/* 134 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 137 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 149
/* 141 */     MCD::OPC_CheckPredicate, 3, 171, 0, // Skip to: 316
/* 145 */     MCD::OPC_Decode, 237, 6, 16, // Opcode: JR16_MM
/* 149 */     MCD::OPC_FilterValue, 1, 163, 0, // Skip to: 316
/* 153 */     MCD::OPC_CheckPredicate, 3, 159, 0, // Skip to: 316
/* 157 */     MCD::OPC_Decode, 240, 6, 16, // Opcode: JRC16_MM
/* 161 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 192
/* 165 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 168 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 180
/* 172 */     MCD::OPC_CheckPredicate, 3, 140, 0, // Skip to: 316
/* 176 */     MCD::OPC_Decode, 223, 6, 16, // Opcode: JALR16_MM
/* 180 */     MCD::OPC_FilterValue, 1, 132, 0, // Skip to: 316
/* 184 */     MCD::OPC_CheckPredicate, 3, 128, 0, // Skip to: 316
/* 188 */     MCD::OPC_Decode, 227, 6, 16, // Opcode: JALRS16_MM
/* 192 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 210
/* 196 */     MCD::OPC_CheckPredicate, 3, 116, 0, // Skip to: 316
/* 200 */     MCD::OPC_CheckField, 5, 1, 0, 110, 0, // Skip to: 316
/* 206 */     MCD::OPC_Decode, 147, 8, 16, // Opcode: MFHI16_MM
/* 210 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 228
/* 214 */     MCD::OPC_CheckPredicate, 3, 98, 0, // Skip to: 316
/* 218 */     MCD::OPC_CheckField, 5, 1, 0, 92, 0, // Skip to: 316
/* 224 */     MCD::OPC_Decode, 152, 8, 16, // Opcode: MFLO16_MM
/* 228 */     MCD::OPC_FilterValue, 12, 84, 0, // Skip to: 316
/* 232 */     MCD::OPC_CheckPredicate, 3, 80, 0, // Skip to: 316
/* 236 */     MCD::OPC_CheckField, 5, 1, 0, 74, 0, // Skip to: 316
/* 242 */     MCD::OPC_Decode, 239, 6, 17, // Opcode: JRADDIUSP
/* 246 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 275
/* 250 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 253 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 264
/* 257 */     MCD::OPC_CheckPredicate, 3, 55, 0, // Skip to: 316
/* 261 */     MCD::OPC_Decode, 27, 18, // Opcode: ADDIUS5_MM
/* 264 */     MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 316
/* 268 */     MCD::OPC_CheckPredicate, 3, 44, 0, // Skip to: 316
/* 272 */     MCD::OPC_Decode, 28, 19, // Opcode: ADDIUSP_MM
/* 275 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 304
/* 279 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 282 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 293
/* 286 */     MCD::OPC_CheckPredicate, 3, 26, 0, // Skip to: 316
/* 290 */     MCD::OPC_Decode, 26, 13, // Opcode: ADDIUR2_MM
/* 293 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 316
/* 297 */     MCD::OPC_CheckPredicate, 3, 15, 0, // Skip to: 316
/* 301 */     MCD::OPC_Decode, 25, 20, // Opcode: ADDIUR1SP_MM
/* 304 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 316
/* 308 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 316
/* 312 */     MCD::OPC_Decode, 160, 7, 21, // Opcode: LI16_MM
/* 316 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 114, 3, // Skip to: 889
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 51, 0, // Skip to: 65
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 29
/* 21 */      MCD::OPC_CheckPredicate, 3, 156, 5, // Skip to: 1461
/* 25 */      MCD::OPC_Decode, 175, 11, 22, // Opcode: SLL_MM
/* 29 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 41
/* 33 */      MCD::OPC_CheckPredicate, 3, 144, 5, // Skip to: 1461
/* 37 */      MCD::OPC_Decode, 243, 11, 22, // Opcode: SRL_MM
/* 41 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 53
/* 45 */      MCD::OPC_CheckPredicate, 3, 132, 5, // Skip to: 1461
/* 49 */      MCD::OPC_Decode, 222, 11, 22, // Opcode: SRA_MM
/* 53 */      MCD::OPC_FilterValue, 3, 124, 5, // Skip to: 1461
/* 57 */      MCD::OPC_CheckPredicate, 3, 120, 5, // Skip to: 1461
/* 61 */      MCD::OPC_Decode, 191, 10, 22, // Opcode: ROTR_MM
/* 65 */      MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 77
/* 69 */      MCD::OPC_CheckPredicate, 3, 108, 5, // Skip to: 1461
/* 73 */      MCD::OPC_Decode, 149, 2, 23, // Opcode: BREAK_MM
/* 77 */      MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 89
/* 81 */      MCD::OPC_CheckPredicate, 3, 96, 5, // Skip to: 1461
/* 85 */      MCD::OPC_Decode, 219, 6, 24, // Opcode: INS_MM
/* 89 */      MCD::OPC_FilterValue, 16, 180, 0, // Skip to: 273
/* 93 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 96 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 108
/* 100 */     MCD::OPC_CheckPredicate, 3, 77, 5, // Skip to: 1461
/* 104 */     MCD::OPC_Decode, 171, 11, 25, // Opcode: SLLV_MM
/* 108 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 120
/* 112 */     MCD::OPC_CheckPredicate, 3, 65, 5, // Skip to: 1461
/* 116 */     MCD::OPC_Decode, 239, 11, 25, // Opcode: SRLV_MM
/* 120 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 3, 53, 5, // Skip to: 1461
/* 128 */     MCD::OPC_Decode, 218, 11, 25, // Opcode: SRAV_MM
/* 132 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 3, 41, 5, // Skip to: 1461
/* 140 */     MCD::OPC_Decode, 190, 10, 25, // Opcode: ROTRV_MM
/* 144 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 155
/* 148 */     MCD::OPC_CheckPredicate, 3, 29, 5, // Skip to: 1461
/* 152 */     MCD::OPC_Decode, 69, 26, // Opcode: ADD_MM
/* 155 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 166
/* 159 */     MCD::OPC_CheckPredicate, 3, 18, 5, // Skip to: 1461
/* 163 */     MCD::OPC_Decode, 75, 26, // Opcode: ADDu_MM
/* 166 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 3, 7, 5, // Skip to: 1461
/* 174 */     MCD::OPC_Decode, 165, 12, 26, // Opcode: SUB_MM
/* 178 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 190
/* 182 */     MCD::OPC_CheckPredicate, 3, 251, 4, // Skip to: 1461
/* 186 */     MCD::OPC_Decode, 167, 12, 26, // Opcode: SUBu_MM
/* 190 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 202
/* 194 */     MCD::OPC_CheckPredicate, 3, 239, 4, // Skip to: 1461
/* 198 */     MCD::OPC_Decode, 176, 9, 26, // Opcode: MUL_MM
/* 202 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 213
/* 206 */     MCD::OPC_CheckPredicate, 3, 227, 4, // Skip to: 1461
/* 210 */     MCD::OPC_Decode, 84, 26, // Opcode: AND_MM
/* 213 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 225
/* 217 */     MCD::OPC_CheckPredicate, 3, 216, 4, // Skip to: 1461
/* 221 */     MCD::OPC_Decode, 224, 9, 26, // Opcode: OR_MM
/* 225 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 3, 204, 4, // Skip to: 1461
/* 233 */     MCD::OPC_Decode, 212, 9, 26, // Opcode: NOR_MM
/* 237 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 249
/* 241 */     MCD::OPC_CheckPredicate, 3, 192, 4, // Skip to: 1461
/* 245 */     MCD::OPC_Decode, 169, 13, 26, // Opcode: XOR_MM
/* 249 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 3, 180, 4, // Skip to: 1461
/* 257 */     MCD::OPC_Decode, 179, 11, 26, // Opcode: SLT_MM
/* 261 */     MCD::OPC_FilterValue, 14, 172, 4, // Skip to: 1461
/* 265 */     MCD::OPC_CheckPredicate, 3, 168, 4, // Skip to: 1461
/* 269 */     MCD::OPC_Decode, 188, 11, 26, // Opcode: SLTu_MM
/* 273 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 304
/* 277 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 280 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 292
/* 284 */     MCD::OPC_CheckPredicate, 3, 149, 4, // Skip to: 1461
/* 288 */     MCD::OPC_Decode, 212, 8, 27, // Opcode: MOVN_I_MM
/* 292 */     MCD::OPC_FilterValue, 1, 141, 4, // Skip to: 1461
/* 296 */     MCD::OPC_CheckPredicate, 3, 137, 4, // Skip to: 1461
/* 300 */     MCD::OPC_Decode, 232, 8, 27, // Opcode: MOVZ_I_MM
/* 304 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 316
/* 308 */     MCD::OPC_CheckPredicate, 3, 125, 4, // Skip to: 1461
/* 312 */     MCD::OPC_Decode, 133, 5, 28, // Opcode: EXT_MM
/* 316 */     MCD::OPC_FilterValue, 60, 117, 4, // Skip to: 1461
/* 320 */     MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 323 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 106, 4, // Skip to: 1461
/* 331 */     MCD::OPC_Decode, 242, 12, 29, // Opcode: TEQ_MM
/* 335 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 94, 4, // Skip to: 1461
/* 343 */     MCD::OPC_Decode, 250, 12, 29, // Opcode: TGE_MM
/* 347 */     MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 474
/* 351 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 354 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 372
/* 358 */     MCD::OPC_CheckPredicate, 3, 75, 4, // Skip to: 1461
/* 362 */     MCD::OPC_CheckField, 16, 10, 0, 69, 4, // Skip to: 1461
/* 368 */     MCD::OPC_Decode, 252, 12, 0, // Opcode: TLBP_MM
/* 372 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 390
/* 376 */     MCD::OPC_CheckPredicate, 3, 57, 4, // Skip to: 1461
/* 380 */     MCD::OPC_CheckField, 16, 10, 0, 51, 4, // Skip to: 1461
/* 386 */     MCD::OPC_Decode, 254, 12, 0, // Opcode: TLBR_MM
/* 390 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 408
/* 394 */     MCD::OPC_CheckPredicate, 3, 39, 4, // Skip to: 1461
/* 398 */     MCD::OPC_CheckField, 16, 10, 0, 33, 4, // Skip to: 1461
/* 404 */     MCD::OPC_Decode, 128, 13, 0, // Opcode: TLBWI_MM
/* 408 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 426
/* 412 */     MCD::OPC_CheckPredicate, 3, 21, 4, // Skip to: 1461
/* 416 */     MCD::OPC_CheckField, 16, 10, 0, 15, 4, // Skip to: 1461
/* 422 */     MCD::OPC_Decode, 130, 13, 0, // Opcode: TLBWR_MM
/* 426 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 438
/* 430 */     MCD::OPC_CheckPredicate, 3, 3, 4, // Skip to: 1461
/* 434 */     MCD::OPC_Decode, 161, 13, 30, // Opcode: WAIT_MM
/* 438 */     MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 456
/* 442 */     MCD::OPC_CheckPredicate, 3, 247, 3, // Skip to: 1461
/* 446 */     MCD::OPC_CheckField, 16, 10, 0, 241, 3, // Skip to: 1461
/* 452 */     MCD::OPC_Decode, 149, 4, 0, // Opcode: DERET_MM
/* 456 */     MCD::OPC_FilterValue, 15, 233, 3, // Skip to: 1461
/* 460 */     MCD::OPC_CheckPredicate, 3, 229, 3, // Skip to: 1461
/* 464 */     MCD::OPC_CheckField, 16, 10, 0, 223, 3, // Skip to: 1461
/* 470 */     MCD::OPC_Decode, 245, 4, 0, // Opcode: ERET_MM
/* 474 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 486
/* 478 */     MCD::OPC_CheckPredicate, 3, 211, 3, // Skip to: 1461
/* 482 */     MCD::OPC_Decode, 249, 12, 29, // Opcode: TGEU_MM
/* 486 */     MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 529
/* 490 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 493 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 511
/* 497 */     MCD::OPC_CheckPredicate, 3, 192, 3, // Skip to: 1461
/* 501 */     MCD::OPC_CheckField, 21, 5, 0, 186, 3, // Skip to: 1461
/* 507 */     MCD::OPC_Decode, 167, 4, 31, // Opcode: DI_MM
/* 511 */     MCD::OPC_FilterValue, 5, 178, 3, // Skip to: 1461
/* 515 */     MCD::OPC_CheckPredicate, 3, 174, 3, // Skip to: 1461
/* 519 */     MCD::OPC_CheckField, 21, 5, 0, 168, 3, // Skip to: 1461
/* 525 */     MCD::OPC_Decode, 243, 4, 31, // Opcode: EI_MM
/* 529 */     MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 541
/* 533 */     MCD::OPC_CheckPredicate, 3, 156, 3, // Skip to: 1461
/* 537 */     MCD::OPC_Decode, 137, 13, 29, // Opcode: TLT_MM
/* 541 */     MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 553
/* 545 */     MCD::OPC_CheckPredicate, 3, 144, 3, // Skip to: 1461
/* 549 */     MCD::OPC_Decode, 136, 13, 29, // Opcode: TLTU_MM
/* 553 */     MCD::OPC_FilterValue, 44, 159, 0, // Skip to: 716
/* 557 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 560 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 572
/* 564 */     MCD::OPC_CheckPredicate, 3, 125, 3, // Skip to: 1461
/* 568 */     MCD::OPC_Decode, 236, 10, 32, // Opcode: SEB_MM
/* 572 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 584
/* 576 */     MCD::OPC_CheckPredicate, 3, 113, 3, // Skip to: 1461
/* 580 */     MCD::OPC_Decode, 239, 10, 32, // Opcode: SEH_MM
/* 584 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 596
/* 588 */     MCD::OPC_CheckPredicate, 3, 101, 3, // Skip to: 1461
/* 592 */     MCD::OPC_Decode, 236, 2, 32, // Opcode: CLO_MM
/* 596 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 608
/* 600 */     MCD::OPC_CheckPredicate, 3, 89, 3, // Skip to: 1461
/* 604 */     MCD::OPC_Decode, 255, 2, 32, // Opcode: CLZ_MM
/* 608 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 620
/* 612 */     MCD::OPC_CheckPredicate, 3, 77, 3, // Skip to: 1461
/* 616 */     MCD::OPC_Decode, 164, 13, 32, // Opcode: WSBH_MM
/* 620 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 632
/* 624 */     MCD::OPC_CheckPredicate, 3, 65, 3, // Skip to: 1461
/* 628 */     MCD::OPC_Decode, 168, 9, 33, // Opcode: MULT_MM
/* 632 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 644
/* 636 */     MCD::OPC_CheckPredicate, 3, 53, 3, // Skip to: 1461
/* 640 */     MCD::OPC_Decode, 170, 9, 33, // Opcode: MULTu_MM
/* 644 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 656
/* 648 */     MCD::OPC_CheckPredicate, 3, 41, 3, // Skip to: 1461
/* 652 */     MCD::OPC_Decode, 229, 10, 33, // Opcode: SDIV_MM
/* 656 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 668
/* 660 */     MCD::OPC_CheckPredicate, 3, 29, 3, // Skip to: 1461
/* 664 */     MCD::OPC_Decode, 152, 13, 33, // Opcode: UDIV_MM
/* 668 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 680
/* 672 */     MCD::OPC_CheckPredicate, 3, 17, 3, // Skip to: 1461
/* 676 */     MCD::OPC_Decode, 234, 7, 33, // Opcode: MADD_MM
/* 680 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 692
/* 684 */     MCD::OPC_CheckPredicate, 3, 5, 3, // Skip to: 1461
/* 688 */     MCD::OPC_Decode, 225, 7, 33, // Opcode: MADDU_MM
/* 692 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 704
/* 696 */     MCD::OPC_CheckPredicate, 3, 249, 2, // Skip to: 1461
/* 700 */     MCD::OPC_Decode, 251, 8, 33, // Opcode: MSUB_MM
/* 704 */     MCD::OPC_FilterValue, 15, 241, 2, // Skip to: 1461
/* 708 */     MCD::OPC_CheckPredicate, 3, 237, 2, // Skip to: 1461
/* 712 */     MCD::OPC_Decode, 242, 8, 33, // Opcode: MSUBU_MM
/* 716 */     MCD::OPC_FilterValue, 45, 33, 0, // Skip to: 753
/* 720 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 723 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 741
/* 727 */     MCD::OPC_CheckPredicate, 3, 218, 2, // Skip to: 1461
/* 731 */     MCD::OPC_CheckField, 21, 5, 0, 212, 2, // Skip to: 1461
/* 737 */     MCD::OPC_Decode, 188, 12, 34, // Opcode: SYNC_MM
/* 741 */     MCD::OPC_FilterValue, 8, 204, 2, // Skip to: 1461
/* 745 */     MCD::OPC_CheckPredicate, 3, 200, 2, // Skip to: 1461
/* 749 */     MCD::OPC_Decode, 190, 12, 30, // Opcode: SYSCALL_MM
/* 753 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 765
/* 757 */     MCD::OPC_CheckPredicate, 3, 188, 2, // Skip to: 1461
/* 761 */     MCD::OPC_Decode, 141, 13, 29, // Opcode: TNE_MM
/* 765 */     MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 844
/* 769 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 772 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 790
/* 776 */     MCD::OPC_CheckPredicate, 3, 169, 2, // Skip to: 1461
/* 780 */     MCD::OPC_CheckField, 21, 5, 0, 163, 2, // Skip to: 1461
/* 786 */     MCD::OPC_Decode, 150, 8, 31, // Opcode: MFHI_MM
/* 790 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 808
/* 794 */     MCD::OPC_CheckPredicate, 3, 151, 2, // Skip to: 1461
/* 798 */     MCD::OPC_CheckField, 21, 5, 0, 145, 2, // Skip to: 1461
/* 804 */     MCD::OPC_Decode, 155, 8, 31, // Opcode: MFLO_MM
/* 808 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 826
/* 812 */     MCD::OPC_CheckPredicate, 3, 133, 2, // Skip to: 1461
/* 816 */     MCD::OPC_CheckField, 21, 5, 0, 127, 2, // Skip to: 1461
/* 822 */     MCD::OPC_Decode, 138, 9, 31, // Opcode: MTHI_MM
/* 826 */     MCD::OPC_FilterValue, 3, 119, 2, // Skip to: 1461
/* 830 */     MCD::OPC_CheckPredicate, 3, 115, 2, // Skip to: 1461
/* 834 */     MCD::OPC_CheckField, 21, 5, 0, 109, 2, // Skip to: 1461
/* 840 */     MCD::OPC_Decode, 143, 9, 31, // Opcode: MTLO_MM
/* 844 */     MCD::OPC_FilterValue, 60, 101, 2, // Skip to: 1461
/* 848 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 851 */     MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 877
/* 855 */     MCD::OPC_CheckPredicate, 3, 10, 0, // Skip to: 869
/* 859 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 869
/* 865 */     MCD::OPC_Decode, 243, 6, 31, // Opcode: JR_MM
/* 869 */     MCD::OPC_CheckPredicate, 3, 76, 2, // Skip to: 1461
/* 873 */     MCD::OPC_Decode, 230, 6, 32, // Opcode: JALR_MM
/* 877 */     MCD::OPC_FilterValue, 4, 68, 2, // Skip to: 1461
/* 881 */     MCD::OPC_CheckPredicate, 3, 64, 2, // Skip to: 1461
/* 885 */     MCD::OPC_Decode, 228, 6, 32, // Opcode: JALRS_MM
/* 889 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 900
/* 893 */     MCD::OPC_CheckPredicate, 3, 52, 2, // Skip to: 1461
/* 897 */     MCD::OPC_Decode, 71, 35, // Opcode: ADDi_MM
/* 900 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 912
/* 904 */     MCD::OPC_CheckPredicate, 3, 41, 2, // Skip to: 1461
/* 908 */     MCD::OPC_Decode, 129, 7, 36, // Opcode: LBu_MM
/* 912 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 924
/* 916 */     MCD::OPC_CheckPredicate, 3, 29, 2, // Skip to: 1461
/* 920 */     MCD::OPC_Decode, 213, 10, 36, // Opcode: SB_MM
/* 924 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 936
/* 928 */     MCD::OPC_CheckPredicate, 3, 17, 2, // Skip to: 1461
/* 932 */     MCD::OPC_Decode, 254, 6, 36, // Opcode: LB_MM
/* 936 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 947
/* 940 */     MCD::OPC_CheckPredicate, 3, 5, 2, // Skip to: 1461
/* 944 */     MCD::OPC_Decode, 73, 35, // Opcode: ADDiu_MM
/* 947 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 959
/* 951 */     MCD::OPC_CheckPredicate, 3, 250, 1, // Skip to: 1461
/* 955 */     MCD::OPC_Decode, 159, 7, 36, // Opcode: LHu_MM
/* 959 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 971
/* 963 */     MCD::OPC_CheckPredicate, 3, 238, 1, // Skip to: 1461
/* 967 */     MCD::OPC_Decode, 153, 11, 36, // Opcode: SH_MM
/* 971 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 983
/* 975 */     MCD::OPC_CheckPredicate, 3, 226, 1, // Skip to: 1461
/* 979 */     MCD::OPC_Decode, 156, 7, 36, // Opcode: LH_MM
/* 983 */     MCD::OPC_FilterValue, 16, 207, 0, // Skip to: 1194
/* 987 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 990 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1002
/* 994 */     MCD::OPC_CheckPredicate, 3, 207, 1, // Skip to: 1461
/* 998 */     MCD::OPC_Decode, 246, 1, 37, // Opcode: BLTZ_MM
/* 1002 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1014
/* 1006 */    MCD::OPC_CheckPredicate, 3, 195, 1, // Skip to: 1461
/* 1010 */    MCD::OPC_Decode, 243, 1, 37, // Opcode: BLTZAL_MM
/* 1014 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1026
/* 1018 */    MCD::OPC_CheckPredicate, 3, 183, 1, // Skip to: 1461
/* 1022 */    MCD::OPC_Decode, 204, 1, 37, // Opcode: BGEZ_MM
/* 1026 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1038
/* 1030 */    MCD::OPC_CheckPredicate, 3, 171, 1, // Skip to: 1461
/* 1034 */    MCD::OPC_Decode, 201, 1, 37, // Opcode: BGEZAL_MM
/* 1038 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1050
/* 1042 */    MCD::OPC_CheckPredicate, 3, 159, 1, // Skip to: 1461
/* 1046 */    MCD::OPC_Decode, 234, 1, 37, // Opcode: BLEZ_MM
/* 1050 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1062
/* 1054 */    MCD::OPC_CheckPredicate, 3, 147, 1, // Skip to: 1461
/* 1058 */    MCD::OPC_Decode, 137, 2, 37, // Opcode: BNEZC_MM
/* 1062 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1074
/* 1066 */    MCD::OPC_CheckPredicate, 3, 135, 1, // Skip to: 1461
/* 1070 */    MCD::OPC_Decode, 210, 1, 37, // Opcode: BGTZ_MM
/* 1074 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1086
/* 1078 */    MCD::OPC_CheckPredicate, 3, 123, 1, // Skip to: 1461
/* 1082 */    MCD::OPC_Decode, 191, 1, 37, // Opcode: BEQZC_MM
/* 1086 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1098
/* 1090 */    MCD::OPC_CheckPredicate, 3, 111, 1, // Skip to: 1461
/* 1094 */    MCD::OPC_Decode, 134, 13, 38, // Opcode: TLTI_MM
/* 1098 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1110
/* 1102 */    MCD::OPC_CheckPredicate, 3, 99, 1, // Skip to: 1461
/* 1106 */    MCD::OPC_Decode, 247, 12, 38, // Opcode: TGEI_MM
/* 1110 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1122
/* 1114 */    MCD::OPC_CheckPredicate, 3, 87, 1, // Skip to: 1461
/* 1118 */    MCD::OPC_Decode, 133, 13, 38, // Opcode: TLTIU_MM
/* 1122 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1134
/* 1126 */    MCD::OPC_CheckPredicate, 3, 75, 1, // Skip to: 1461
/* 1130 */    MCD::OPC_Decode, 246, 12, 38, // Opcode: TGEIU_MM
/* 1134 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1146
/* 1138 */    MCD::OPC_CheckPredicate, 3, 63, 1, // Skip to: 1461
/* 1142 */    MCD::OPC_Decode, 140, 13, 38, // Opcode: TNEI_MM
/* 1146 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1158
/* 1150 */    MCD::OPC_CheckPredicate, 3, 51, 1, // Skip to: 1461
/* 1154 */    MCD::OPC_Decode, 180, 7, 38, // Opcode: LUi_MM
/* 1158 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1170
/* 1162 */    MCD::OPC_CheckPredicate, 3, 39, 1, // Skip to: 1461
/* 1166 */    MCD::OPC_Decode, 241, 12, 38, // Opcode: TEQI_MM
/* 1170 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1182
/* 1174 */    MCD::OPC_CheckPredicate, 3, 27, 1, // Skip to: 1461
/* 1178 */    MCD::OPC_Decode, 242, 1, 37, // Opcode: BLTZALS_MM
/* 1182 */    MCD::OPC_FilterValue, 19, 19, 1, // Skip to: 1461
/* 1186 */    MCD::OPC_CheckPredicate, 3, 15, 1, // Skip to: 1461
/* 1190 */    MCD::OPC_Decode, 200, 1, 37, // Opcode: BGEZALS_MM
/* 1194 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1206
/* 1198 */    MCD::OPC_CheckPredicate, 3, 3, 1, // Skip to: 1461
/* 1202 */    MCD::OPC_Decode, 231, 9, 39, // Opcode: ORi_MM
/* 1206 */    MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 1239
/* 1210 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1213 */    MCD::OPC_FilterValue, 251, 2, 8, 0, // Skip to: 1226
/* 1218 */    MCD::OPC_CheckPredicate, 3, 239, 0, // Skip to: 1461
/* 1222 */    MCD::OPC_Decode, 200, 8, 40, // Opcode: MOVF_I_MM
/* 1226 */    MCD::OPC_FilterValue, 251, 18, 230, 0, // Skip to: 1461
/* 1231 */    MCD::OPC_CheckPredicate, 3, 226, 0, // Skip to: 1461
/* 1235 */    MCD::OPC_Decode, 220, 8, 40, // Opcode: MOVT_I_MM
/* 1239 */    MCD::OPC_FilterValue, 24, 87, 0, // Skip to: 1330
/* 1243 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1246 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1258
/* 1250 */    MCD::OPC_CheckPredicate, 3, 207, 0, // Skip to: 1461
/* 1254 */    MCD::OPC_Decode, 190, 7, 41, // Opcode: LWL_MM
/* 1258 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1270
/* 1262 */    MCD::OPC_CheckPredicate, 3, 195, 0, // Skip to: 1461
/* 1266 */    MCD::OPC_Decode, 194, 7, 41, // Opcode: LWR_MM
/* 1270 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1282
/* 1274 */    MCD::OPC_CheckPredicate, 3, 183, 0, // Skip to: 1461
/* 1278 */    MCD::OPC_Decode, 164, 7, 41, // Opcode: LL_MM
/* 1282 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1294
/* 1286 */    MCD::OPC_CheckPredicate, 3, 171, 0, // Skip to: 1461
/* 1290 */    MCD::OPC_Decode, 180, 12, 41, // Opcode: SWL_MM
/* 1294 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 3, 159, 0, // Skip to: 1461
/* 1302 */    MCD::OPC_Decode, 183, 12, 41, // Opcode: SWR_MM
/* 1306 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1318
/* 1310 */    MCD::OPC_CheckPredicate, 3, 147, 0, // Skip to: 1461
/* 1314 */    MCD::OPC_Decode, 217, 10, 41, // Opcode: SC_MM
/* 1318 */    MCD::OPC_FilterValue, 14, 139, 0, // Skip to: 1461
/* 1322 */    MCD::OPC_CheckPredicate, 3, 135, 0, // Skip to: 1461
/* 1326 */    MCD::OPC_Decode, 196, 7, 41, // Opcode: LWU_MM
/* 1330 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 1342
/* 1334 */    MCD::OPC_CheckPredicate, 3, 123, 0, // Skip to: 1461
/* 1338 */    MCD::OPC_Decode, 176, 13, 39, // Opcode: XORi_MM
/* 1342 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 1354
/* 1346 */    MCD::OPC_CheckPredicate, 3, 111, 0, // Skip to: 1461
/* 1350 */    MCD::OPC_Decode, 231, 6, 42, // Opcode: JALS_MM
/* 1354 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1366
/* 1358 */    MCD::OPC_CheckPredicate, 3, 99, 0, // Skip to: 1461
/* 1362 */    MCD::OPC_Decode, 182, 11, 35, // Opcode: SLTi_MM
/* 1366 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1378
/* 1370 */    MCD::OPC_CheckPredicate, 3, 87, 0, // Skip to: 1461
/* 1374 */    MCD::OPC_Decode, 192, 1, 43, // Opcode: BEQ_MM
/* 1378 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1390
/* 1382 */    MCD::OPC_CheckPredicate, 3, 75, 0, // Skip to: 1461
/* 1386 */    MCD::OPC_Decode, 185, 11, 35, // Opcode: SLTiu_MM
/* 1390 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1402
/* 1394 */    MCD::OPC_CheckPredicate, 3, 63, 0, // Skip to: 1461
/* 1398 */    MCD::OPC_Decode, 138, 2, 43, // Opcode: BNE_MM
/* 1402 */    MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 1413
/* 1406 */    MCD::OPC_CheckPredicate, 3, 51, 0, // Skip to: 1461
/* 1410 */    MCD::OPC_Decode, 91, 39, // Opcode: ANDi_MM
/* 1413 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1425
/* 1417 */    MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 1461
/* 1421 */    MCD::OPC_Decode, 244, 6, 42, // Opcode: J_MM
/* 1425 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1437
/* 1429 */    MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 1461
/* 1433 */    MCD::OPC_Decode, 233, 6, 42, // Opcode: JAL_MM
/* 1437 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 1449
/* 1441 */    MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 1461
/* 1445 */    MCD::OPC_Decode, 186, 12, 36, // Opcode: SW_MM
/* 1449 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1461
/* 1453 */    MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 1461
/* 1457 */    MCD::OPC_Decode, 200, 7, 36, // Opcode: LW_MM
/* 1461 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 173, 3, // Skip to: 948
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 68
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 230, 51, // Skip to: 13307
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 245, 11, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 241, 4, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 234, 9, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 187, 51, // Skip to: 13307
/* 64 */      MCD::OPC_Decode, 162, 11, 44, // Opcode: SLL
/* 68 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 111
/* 72 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 75 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 93
/* 79 */      MCD::OPC_CheckPredicate, 5, 168, 51, // Skip to: 13307
/* 83 */      MCD::OPC_CheckField, 6, 5, 0, 162, 51, // Skip to: 13307
/* 89 */      MCD::OPC_Decode, 198, 8, 45, // Opcode: MOVF_I
/* 93 */      MCD::OPC_FilterValue, 1, 154, 51, // Skip to: 13307
/* 97 */      MCD::OPC_CheckPredicate, 5, 150, 51, // Skip to: 13307
/* 101 */     MCD::OPC_CheckField, 6, 5, 0, 144, 51, // Skip to: 13307
/* 107 */     MCD::OPC_Decode, 218, 8, 45, // Opcode: MOVT_I
/* 111 */     MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 142
/* 115 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 1, 125, 51, // Skip to: 13307
/* 126 */     MCD::OPC_Decode, 224, 11, 44, // Opcode: SRL
/* 130 */     MCD::OPC_FilterValue, 1, 117, 51, // Skip to: 13307
/* 134 */     MCD::OPC_CheckPredicate, 4, 113, 51, // Skip to: 13307
/* 138 */     MCD::OPC_Decode, 188, 10, 44, // Opcode: ROTR
/* 142 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 160
/* 146 */     MCD::OPC_CheckPredicate, 1, 101, 51, // Skip to: 13307
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 95, 51, // Skip to: 13307
/* 156 */     MCD::OPC_Decode, 204, 11, 44, // Opcode: SRA
/* 160 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 178
/* 164 */     MCD::OPC_CheckPredicate, 1, 83, 51, // Skip to: 13307
/* 168 */     MCD::OPC_CheckField, 6, 5, 0, 77, 51, // Skip to: 13307
/* 174 */     MCD::OPC_Decode, 170, 11, 26, // Opcode: SLLV
/* 178 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 196
/* 182 */     MCD::OPC_CheckPredicate, 6, 65, 51, // Skip to: 13307
/* 186 */     MCD::OPC_CheckField, 8, 3, 0, 59, 51, // Skip to: 13307
/* 192 */     MCD::OPC_Decode, 173, 7, 46, // Opcode: LSA
/* 196 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 227
/* 200 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 203 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 215
/* 207 */     MCD::OPC_CheckPredicate, 1, 40, 51, // Skip to: 13307
/* 211 */     MCD::OPC_Decode, 238, 11, 26, // Opcode: SRLV
/* 215 */     MCD::OPC_FilterValue, 1, 32, 51, // Skip to: 13307
/* 219 */     MCD::OPC_CheckPredicate, 4, 28, 51, // Skip to: 13307
/* 223 */     MCD::OPC_Decode, 189, 10, 26, // Opcode: ROTRV
/* 227 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 245
/* 231 */     MCD::OPC_CheckPredicate, 1, 16, 51, // Skip to: 13307
/* 235 */     MCD::OPC_CheckField, 6, 5, 0, 10, 51, // Skip to: 13307
/* 241 */     MCD::OPC_Decode, 217, 11, 26, // Opcode: SRAV
/* 245 */     MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 276
/* 249 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 252 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 1, 247, 50, // Skip to: 13307
/* 260 */     MCD::OPC_Decode, 236, 6, 47, // Opcode: JR
/* 264 */     MCD::OPC_FilterValue, 16, 239, 50, // Skip to: 13307
/* 268 */     MCD::OPC_CheckPredicate, 7, 235, 50, // Skip to: 13307
/* 272 */     MCD::OPC_Decode, 241, 6, 47, // Opcode: JR_HB
/* 276 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 319
/* 280 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 283 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 301
/* 287 */     MCD::OPC_CheckPredicate, 8, 216, 50, // Skip to: 13307
/* 291 */     MCD::OPC_CheckField, 16, 5, 0, 210, 50, // Skip to: 13307
/* 297 */     MCD::OPC_Decode, 222, 6, 48, // Opcode: JALR
/* 301 */     MCD::OPC_FilterValue, 16, 202, 50, // Skip to: 13307
/* 305 */     MCD::OPC_CheckPredicate, 9, 198, 50, // Skip to: 13307
/* 309 */     MCD::OPC_CheckField, 16, 5, 0, 192, 50, // Skip to: 13307
/* 315 */     MCD::OPC_Decode, 229, 6, 48, // Opcode: JALR_HB
/* 319 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 5, 180, 50, // Skip to: 13307
/* 327 */     MCD::OPC_CheckField, 6, 5, 0, 174, 50, // Skip to: 13307
/* 333 */     MCD::OPC_Decode, 230, 8, 49, // Opcode: MOVZ_I_I
/* 337 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 355
/* 341 */     MCD::OPC_CheckPredicate, 5, 162, 50, // Skip to: 13307
/* 345 */     MCD::OPC_CheckField, 6, 5, 0, 156, 50, // Skip to: 13307
/* 351 */     MCD::OPC_Decode, 210, 8, 49, // Opcode: MOVN_I_I
/* 355 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 1, 144, 50, // Skip to: 13307
/* 363 */     MCD::OPC_Decode, 189, 12, 50, // Opcode: SYSCALL
/* 367 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 1, 132, 50, // Skip to: 13307
/* 375 */     MCD::OPC_Decode, 148, 2, 23, // Opcode: BREAK
/* 379 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 9, 120, 50, // Skip to: 13307
/* 387 */     MCD::OPC_Decode, 187, 12, 51, // Opcode: SYNC
/* 391 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 438
/* 395 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 398 */     MCD::OPC_FilterValue, 0, 105, 50, // Skip to: 13307
/* 402 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 405 */     MCD::OPC_FilterValue, 0, 98, 50, // Skip to: 13307
/* 409 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 412 */     MCD::OPC_FilterValue, 0, 91, 50, // Skip to: 13307
/* 416 */     MCD::OPC_CheckPredicate, 10, 10, 0, // Skip to: 430
/* 420 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 430
/* 426 */     MCD::OPC_Decode, 146, 8, 52, // Opcode: MFHI
/* 430 */     MCD::OPC_CheckPredicate, 11, 73, 50, // Skip to: 13307
/* 434 */     MCD::OPC_Decode, 149, 8, 53, // Opcode: MFHI_DSP
/* 438 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 478
/* 442 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 445 */     MCD::OPC_FilterValue, 0, 58, 50, // Skip to: 13307
/* 449 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 452 */     MCD::OPC_FilterValue, 0, 51, 50, // Skip to: 13307
/* 456 */     MCD::OPC_CheckPredicate, 12, 10, 0, // Skip to: 470
/* 460 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 470
/* 466 */     MCD::OPC_Decode, 135, 9, 47, // Opcode: MTHI
/* 470 */     MCD::OPC_CheckPredicate, 11, 33, 50, // Skip to: 13307
/* 474 */     MCD::OPC_Decode, 137, 9, 54, // Opcode: MTHI_DSP
/* 478 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 525
/* 482 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 485 */     MCD::OPC_FilterValue, 0, 18, 50, // Skip to: 13307
/* 489 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 492 */     MCD::OPC_FilterValue, 0, 11, 50, // Skip to: 13307
/* 496 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 499 */     MCD::OPC_FilterValue, 0, 4, 50, // Skip to: 13307
/* 503 */     MCD::OPC_CheckPredicate, 10, 10, 0, // Skip to: 517
/* 507 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 151, 8, 52, // Opcode: MFLO
/* 517 */     MCD::OPC_CheckPredicate, 11, 242, 49, // Skip to: 13307
/* 521 */     MCD::OPC_Decode, 154, 8, 53, // Opcode: MFLO_DSP
/* 525 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 565
/* 529 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 532 */     MCD::OPC_FilterValue, 0, 227, 49, // Skip to: 13307
/* 536 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 539 */     MCD::OPC_FilterValue, 0, 220, 49, // Skip to: 13307
/* 543 */     MCD::OPC_CheckPredicate, 12, 10, 0, // Skip to: 557
/* 547 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 557
/* 553 */     MCD::OPC_Decode, 140, 9, 47, // Opcode: MTLO
/* 557 */     MCD::OPC_CheckPredicate, 11, 202, 49, // Skip to: 13307
/* 561 */     MCD::OPC_Decode, 142, 9, 55, // Opcode: MTLO_DSP
/* 565 */     MCD::OPC_FilterValue, 21, 14, 0, // Skip to: 583
/* 569 */     MCD::OPC_CheckPredicate, 13, 190, 49, // Skip to: 13307
/* 573 */     MCD::OPC_CheckField, 8, 3, 0, 184, 49, // Skip to: 13307
/* 579 */     MCD::OPC_Decode, 168, 4, 56, // Opcode: DLSA
/* 583 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 623
/* 587 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 590 */     MCD::OPC_FilterValue, 0, 169, 49, // Skip to: 13307
/* 594 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 597 */     MCD::OPC_FilterValue, 0, 162, 49, // Skip to: 13307
/* 601 */     MCD::OPC_CheckPredicate, 12, 10, 0, // Skip to: 615
/* 605 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 615
/* 611 */     MCD::OPC_Decode, 165, 9, 32, // Opcode: MULT
/* 615 */     MCD::OPC_CheckPredicate, 11, 144, 49, // Skip to: 13307
/* 619 */     MCD::OPC_Decode, 167, 9, 57, // Opcode: MULT_DSP
/* 623 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 663
/* 627 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 630 */     MCD::OPC_FilterValue, 0, 129, 49, // Skip to: 13307
/* 634 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 637 */     MCD::OPC_FilterValue, 0, 122, 49, // Skip to: 13307
/* 641 */     MCD::OPC_CheckPredicate, 12, 10, 0, // Skip to: 655
/* 645 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 655
/* 651 */     MCD::OPC_Decode, 169, 9, 32, // Opcode: MULTu
/* 655 */     MCD::OPC_CheckPredicate, 11, 104, 49, // Skip to: 13307
/* 659 */     MCD::OPC_Decode, 166, 9, 57, // Opcode: MULTU_DSP
/* 663 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 681
/* 667 */     MCD::OPC_CheckPredicate, 12, 92, 49, // Skip to: 13307
/* 671 */     MCD::OPC_CheckField, 6, 10, 0, 86, 49, // Skip to: 13307
/* 677 */     MCD::OPC_Decode, 228, 10, 32, // Opcode: SDIV
/* 681 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 699
/* 685 */     MCD::OPC_CheckPredicate, 12, 74, 49, // Skip to: 13307
/* 689 */     MCD::OPC_CheckField, 6, 10, 0, 68, 49, // Skip to: 13307
/* 695 */     MCD::OPC_Decode, 151, 13, 32, // Opcode: UDIV
/* 699 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 716
/* 703 */     MCD::OPC_CheckPredicate, 1, 56, 49, // Skip to: 13307
/* 707 */     MCD::OPC_CheckField, 6, 5, 0, 50, 49, // Skip to: 13307
/* 713 */     MCD::OPC_Decode, 23, 25, // Opcode: ADD
/* 716 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 733
/* 720 */     MCD::OPC_CheckPredicate, 1, 39, 49, // Skip to: 13307
/* 724 */     MCD::OPC_CheckField, 6, 5, 0, 33, 49, // Skip to: 13307
/* 730 */     MCD::OPC_Decode, 74, 25, // Opcode: ADDu
/* 733 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 751
/* 737 */     MCD::OPC_CheckPredicate, 1, 22, 49, // Skip to: 13307
/* 741 */     MCD::OPC_CheckField, 6, 5, 0, 16, 49, // Skip to: 13307
/* 747 */     MCD::OPC_Decode, 254, 11, 25, // Opcode: SUB
/* 751 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 769
/* 755 */     MCD::OPC_CheckPredicate, 1, 4, 49, // Skip to: 13307
/* 759 */     MCD::OPC_CheckField, 6, 5, 0, 254, 48, // Skip to: 13307
/* 765 */     MCD::OPC_Decode, 166, 12, 25, // Opcode: SUBu
/* 769 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 786
/* 773 */     MCD::OPC_CheckPredicate, 1, 242, 48, // Skip to: 13307
/* 777 */     MCD::OPC_CheckField, 6, 5, 0, 236, 48, // Skip to: 13307
/* 783 */     MCD::OPC_Decode, 80, 25, // Opcode: AND
/* 786 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 1, 225, 48, // Skip to: 13307
/* 794 */     MCD::OPC_CheckField, 6, 5, 0, 219, 48, // Skip to: 13307
/* 800 */     MCD::OPC_Decode, 220, 9, 25, // Opcode: OR
/* 804 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 822
/* 808 */     MCD::OPC_CheckPredicate, 1, 207, 48, // Skip to: 13307
/* 812 */     MCD::OPC_CheckField, 6, 5, 0, 201, 48, // Skip to: 13307
/* 818 */     MCD::OPC_Decode, 165, 13, 25, // Opcode: XOR
/* 822 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 840
/* 826 */     MCD::OPC_CheckPredicate, 1, 189, 48, // Skip to: 13307
/* 830 */     MCD::OPC_CheckField, 6, 5, 0, 183, 48, // Skip to: 13307
/* 836 */     MCD::OPC_Decode, 209, 9, 25, // Opcode: NOR
/* 840 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 858
/* 844 */     MCD::OPC_CheckPredicate, 1, 171, 48, // Skip to: 13307
/* 848 */     MCD::OPC_CheckField, 6, 5, 0, 165, 48, // Skip to: 13307
/* 854 */     MCD::OPC_Decode, 177, 11, 25, // Opcode: SLT
/* 858 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 876
/* 862 */     MCD::OPC_CheckPredicate, 1, 153, 48, // Skip to: 13307
/* 866 */     MCD::OPC_CheckField, 6, 5, 0, 147, 48, // Skip to: 13307
/* 872 */     MCD::OPC_Decode, 186, 11, 25, // Opcode: SLTu
/* 876 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 888
/* 880 */     MCD::OPC_CheckPredicate, 2, 135, 48, // Skip to: 13307
/* 884 */     MCD::OPC_Decode, 243, 12, 58, // Opcode: TGE
/* 888 */     MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 900
/* 892 */     MCD::OPC_CheckPredicate, 2, 123, 48, // Skip to: 13307
/* 896 */     MCD::OPC_Decode, 248, 12, 58, // Opcode: TGEU
/* 900 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 912
/* 904 */     MCD::OPC_CheckPredicate, 2, 111, 48, // Skip to: 13307
/* 908 */     MCD::OPC_Decode, 131, 13, 58, // Opcode: TLT
/* 912 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 924
/* 916 */     MCD::OPC_CheckPredicate, 2, 99, 48, // Skip to: 13307
/* 920 */     MCD::OPC_Decode, 135, 13, 58, // Opcode: TLTU
/* 924 */     MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 936
/* 928 */     MCD::OPC_CheckPredicate, 2, 87, 48, // Skip to: 13307
/* 932 */     MCD::OPC_Decode, 239, 12, 58, // Opcode: TEQ
/* 936 */     MCD::OPC_FilterValue, 54, 79, 48, // Skip to: 13307
/* 940 */     MCD::OPC_CheckPredicate, 2, 75, 48, // Skip to: 13307
/* 944 */     MCD::OPC_Decode, 138, 13, 58, // Opcode: TNE
/* 948 */     MCD::OPC_FilterValue, 1, 189, 0, // Skip to: 1141
/* 952 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 955 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 967
/* 959 */     MCD::OPC_CheckPredicate, 1, 56, 48, // Skip to: 13307
/* 963 */     MCD::OPC_Decode, 237, 1, 59, // Opcode: BLTZ
/* 967 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 979
/* 971 */     MCD::OPC_CheckPredicate, 1, 44, 48, // Skip to: 13307
/* 975 */     MCD::OPC_Decode, 195, 1, 59, // Opcode: BGEZ
/* 979 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 991
/* 983 */     MCD::OPC_CheckPredicate, 14, 32, 48, // Skip to: 13307
/* 987 */     MCD::OPC_Decode, 245, 1, 59, // Opcode: BLTZL
/* 991 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1003
/* 995 */     MCD::OPC_CheckPredicate, 14, 20, 48, // Skip to: 13307
/* 999 */     MCD::OPC_Decode, 203, 1, 59, // Opcode: BGEZL
/* 1003 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1015
/* 1007 */    MCD::OPC_CheckPredicate, 14, 8, 48, // Skip to: 13307
/* 1011 */    MCD::OPC_Decode, 244, 12, 60, // Opcode: TGEI
/* 1015 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1027
/* 1019 */    MCD::OPC_CheckPredicate, 14, 252, 47, // Skip to: 13307
/* 1023 */    MCD::OPC_Decode, 245, 12, 60, // Opcode: TGEIU
/* 1027 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1039
/* 1031 */    MCD::OPC_CheckPredicate, 14, 240, 47, // Skip to: 13307
/* 1035 */    MCD::OPC_Decode, 132, 13, 60, // Opcode: TLTI
/* 1039 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1051
/* 1043 */    MCD::OPC_CheckPredicate, 14, 228, 47, // Skip to: 13307
/* 1047 */    MCD::OPC_Decode, 150, 13, 60, // Opcode: TTLTIU
/* 1051 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1063
/* 1055 */    MCD::OPC_CheckPredicate, 14, 216, 47, // Skip to: 13307
/* 1059 */    MCD::OPC_Decode, 240, 12, 60, // Opcode: TEQI
/* 1063 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1075
/* 1067 */    MCD::OPC_CheckPredicate, 14, 204, 47, // Skip to: 13307
/* 1071 */    MCD::OPC_Decode, 139, 13, 60, // Opcode: TNEI
/* 1075 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1087
/* 1079 */    MCD::OPC_CheckPredicate, 12, 192, 47, // Skip to: 13307
/* 1083 */    MCD::OPC_Decode, 239, 1, 59, // Opcode: BLTZAL
/* 1087 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1099
/* 1091 */    MCD::OPC_CheckPredicate, 12, 180, 47, // Skip to: 13307
/* 1095 */    MCD::OPC_Decode, 197, 1, 59, // Opcode: BGEZAL
/* 1099 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1111
/* 1103 */    MCD::OPC_CheckPredicate, 14, 168, 47, // Skip to: 13307
/* 1107 */    MCD::OPC_Decode, 241, 1, 59, // Opcode: BLTZALL
/* 1111 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1123
/* 1115 */    MCD::OPC_CheckPredicate, 14, 156, 47, // Skip to: 13307
/* 1119 */    MCD::OPC_Decode, 199, 1, 59, // Opcode: BGEZALL
/* 1123 */    MCD::OPC_FilterValue, 28, 148, 47, // Skip to: 13307
/* 1127 */    MCD::OPC_CheckPredicate, 11, 144, 47, // Skip to: 13307
/* 1131 */    MCD::OPC_CheckField, 21, 5, 0, 138, 47, // Skip to: 13307
/* 1137 */    MCD::OPC_Decode, 146, 2, 61, // Opcode: BPOSGE32
/* 1141 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1153
/* 1145 */    MCD::OPC_CheckPredicate, 9, 126, 47, // Skip to: 13307
/* 1149 */    MCD::OPC_Decode, 220, 6, 62, // Opcode: J
/* 1153 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1165
/* 1157 */    MCD::OPC_CheckPredicate, 1, 114, 47, // Skip to: 13307
/* 1161 */    MCD::OPC_Decode, 221, 6, 62, // Opcode: JAL
/* 1165 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1177
/* 1169 */    MCD::OPC_CheckPredicate, 1, 102, 47, // Skip to: 13307
/* 1173 */    MCD::OPC_Decode, 185, 1, 63, // Opcode: BEQ
/* 1177 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1189
/* 1181 */    MCD::OPC_CheckPredicate, 1, 90, 47, // Skip to: 13307
/* 1185 */    MCD::OPC_Decode, 251, 1, 63, // Opcode: BNE
/* 1189 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1207
/* 1193 */    MCD::OPC_CheckPredicate, 1, 78, 47, // Skip to: 13307
/* 1197 */    MCD::OPC_CheckField, 16, 5, 0, 72, 47, // Skip to: 13307
/* 1203 */    MCD::OPC_Decode, 229, 1, 59, // Opcode: BLEZ
/* 1207 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1225
/* 1211 */    MCD::OPC_CheckPredicate, 1, 60, 47, // Skip to: 13307
/* 1215 */    MCD::OPC_CheckField, 16, 5, 0, 54, 47, // Skip to: 13307
/* 1221 */    MCD::OPC_Decode, 205, 1, 59, // Opcode: BGTZ
/* 1225 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 1236
/* 1229 */    MCD::OPC_CheckPredicate, 12, 42, 47, // Skip to: 13307
/* 1233 */    MCD::OPC_Decode, 70, 64, // Opcode: ADDi
/* 1236 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 1247
/* 1240 */    MCD::OPC_CheckPredicate, 1, 31, 47, // Skip to: 13307
/* 1244 */    MCD::OPC_Decode, 72, 64, // Opcode: ADDiu
/* 1247 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1259
/* 1251 */    MCD::OPC_CheckPredicate, 1, 20, 47, // Skip to: 13307
/* 1255 */    MCD::OPC_Decode, 180, 11, 64, // Opcode: SLTi
/* 1259 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1271
/* 1263 */    MCD::OPC_CheckPredicate, 1, 8, 47, // Skip to: 13307
/* 1267 */    MCD::OPC_Decode, 183, 11, 64, // Opcode: SLTiu
/* 1271 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1282
/* 1275 */    MCD::OPC_CheckPredicate, 1, 252, 46, // Skip to: 13307
/* 1279 */    MCD::OPC_Decode, 89, 65, // Opcode: ANDi
/* 1282 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1294
/* 1286 */    MCD::OPC_CheckPredicate, 1, 241, 46, // Skip to: 13307
/* 1290 */    MCD::OPC_Decode, 229, 9, 65, // Opcode: ORi
/* 1294 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 1, 229, 46, // Skip to: 13307
/* 1302 */    MCD::OPC_Decode, 174, 13, 65, // Opcode: XORi
/* 1306 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1324
/* 1310 */    MCD::OPC_CheckPredicate, 1, 217, 46, // Skip to: 13307
/* 1314 */    MCD::OPC_CheckField, 21, 5, 0, 211, 46, // Skip to: 13307
/* 1320 */    MCD::OPC_Decode, 178, 7, 38, // Opcode: LUi
/* 1324 */    MCD::OPC_FilterValue, 16, 248, 0, // Skip to: 1576
/* 1328 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1331 */    MCD::OPC_FilterValue, 0, 112, 0, // Skip to: 1447
/* 1335 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1338 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1350
/* 1342 */    MCD::OPC_CheckPredicate, 9, 185, 46, // Skip to: 13307
/* 1346 */    MCD::OPC_Decode, 139, 8, 66, // Opcode: MFC0
/* 1350 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1362
/* 1354 */    MCD::OPC_CheckPredicate, 9, 173, 46, // Skip to: 13307
/* 1358 */    MCD::OPC_Decode, 128, 9, 66, // Opcode: MTC0
/* 1362 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1386
/* 1366 */    MCD::OPC_CheckPredicate, 4, 161, 46, // Skip to: 13307
/* 1370 */    MCD::OPC_CheckField, 11, 5, 12, 155, 46, // Skip to: 13307
/* 1376 */    MCD::OPC_CheckField, 0, 3, 0, 149, 46, // Skip to: 13307
/* 1382 */    MCD::OPC_Decode, 153, 4, 31, // Opcode: DI
/* 1386 */    MCD::OPC_FilterValue, 16, 141, 46, // Skip to: 13307
/* 1390 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1393 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1411
/* 1397 */    MCD::OPC_CheckPredicate, 1, 130, 46, // Skip to: 13307
/* 1401 */    MCD::OPC_CheckField, 11, 10, 0, 124, 46, // Skip to: 13307
/* 1407 */    MCD::OPC_Decode, 253, 12, 0, // Opcode: TLBR
/* 1411 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1429
/* 1415 */    MCD::OPC_CheckPredicate, 1, 112, 46, // Skip to: 13307
/* 1419 */    MCD::OPC_CheckField, 11, 10, 0, 106, 46, // Skip to: 13307
/* 1425 */    MCD::OPC_Decode, 255, 12, 0, // Opcode: TLBWI
/* 1429 */    MCD::OPC_FilterValue, 6, 98, 46, // Skip to: 13307
/* 1433 */    MCD::OPC_CheckPredicate, 1, 94, 46, // Skip to: 13307
/* 1437 */    MCD::OPC_CheckField, 11, 10, 0, 88, 46, // Skip to: 13307
/* 1443 */    MCD::OPC_Decode, 129, 13, 0, // Opcode: TLBWR
/* 1447 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1473
/* 1451 */    MCD::OPC_CheckPredicate, 1, 76, 46, // Skip to: 13307
/* 1455 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 68, 46, // Skip to: 13307
/* 1463 */    MCD::OPC_CheckField, 0, 3, 0, 62, 46, // Skip to: 13307
/* 1469 */    MCD::OPC_Decode, 251, 12, 0, // Opcode: TLBP
/* 1473 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1520
/* 1477 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1480 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1500
/* 1484 */    MCD::OPC_CheckPredicate, 15, 43, 46, // Skip to: 13307
/* 1488 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 35, 46, // Skip to: 13307
/* 1496 */    MCD::OPC_Decode, 244, 4, 0, // Opcode: ERET
/* 1500 */    MCD::OPC_FilterValue, 7, 27, 46, // Skip to: 13307
/* 1504 */    MCD::OPC_CheckPredicate, 9, 23, 46, // Skip to: 13307
/* 1508 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 15, 46, // Skip to: 13307
/* 1516 */    MCD::OPC_Decode, 148, 4, 0, // Opcode: DERET
/* 1520 */    MCD::OPC_FilterValue, 4, 7, 46, // Skip to: 13307
/* 1524 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1527 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1552
/* 1531 */    MCD::OPC_CheckPredicate, 16, 252, 45, // Skip to: 13307
/* 1535 */    MCD::OPC_CheckField, 16, 10, 128, 4, 245, 45, // Skip to: 13307
/* 1542 */    MCD::OPC_CheckField, 0, 3, 0, 239, 45, // Skip to: 13307
/* 1548 */    MCD::OPC_Decode, 160, 13, 0, // Opcode: WAIT
/* 1552 */    MCD::OPC_FilterValue, 12, 231, 45, // Skip to: 13307
/* 1556 */    MCD::OPC_CheckPredicate, 4, 227, 45, // Skip to: 13307
/* 1560 */    MCD::OPC_CheckField, 21, 5, 11, 221, 45, // Skip to: 13307
/* 1566 */    MCD::OPC_CheckField, 0, 3, 0, 215, 45, // Skip to: 13307
/* 1572 */    MCD::OPC_Decode, 242, 4, 31, // Opcode: EI
/* 1576 */    MCD::OPC_FilterValue, 17, 21, 6, // Skip to: 3137
/* 1580 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1583 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1601
/* 1587 */    MCD::OPC_CheckPredicate, 1, 196, 45, // Skip to: 13307
/* 1591 */    MCD::OPC_CheckField, 0, 11, 0, 190, 45, // Skip to: 13307
/* 1597 */    MCD::OPC_Decode, 140, 8, 67, // Opcode: MFC1
/* 1601 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1619
/* 1605 */    MCD::OPC_CheckPredicate, 17, 178, 45, // Skip to: 13307
/* 1609 */    MCD::OPC_CheckField, 0, 11, 0, 172, 45, // Skip to: 13307
/* 1615 */    MCD::OPC_Decode, 171, 4, 68, // Opcode: DMFC1
/* 1619 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1637
/* 1623 */    MCD::OPC_CheckPredicate, 1, 160, 45, // Skip to: 13307
/* 1627 */    MCD::OPC_CheckField, 0, 11, 0, 154, 45, // Skip to: 13307
/* 1633 */    MCD::OPC_Decode, 212, 2, 69, // Opcode: CFC1
/* 1637 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1655
/* 1641 */    MCD::OPC_CheckPredicate, 18, 142, 45, // Skip to: 13307
/* 1645 */    MCD::OPC_CheckField, 0, 11, 0, 136, 45, // Skip to: 13307
/* 1651 */    MCD::OPC_Decode, 143, 8, 70, // Opcode: MFHC1_D32
/* 1655 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1673
/* 1659 */    MCD::OPC_CheckPredicate, 1, 124, 45, // Skip to: 13307
/* 1663 */    MCD::OPC_CheckField, 0, 11, 0, 118, 45, // Skip to: 13307
/* 1669 */    MCD::OPC_Decode, 129, 9, 71, // Opcode: MTC1
/* 1673 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1691
/* 1677 */    MCD::OPC_CheckPredicate, 17, 106, 45, // Skip to: 13307
/* 1681 */    MCD::OPC_CheckField, 0, 11, 0, 100, 45, // Skip to: 13307
/* 1687 */    MCD::OPC_Decode, 176, 4, 72, // Opcode: DMTC1
/* 1691 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1709
/* 1695 */    MCD::OPC_CheckPredicate, 1, 88, 45, // Skip to: 13307
/* 1699 */    MCD::OPC_CheckField, 0, 11, 0, 82, 45, // Skip to: 13307
/* 1705 */    MCD::OPC_Decode, 184, 3, 73, // Opcode: CTC1
/* 1709 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1727
/* 1713 */    MCD::OPC_CheckPredicate, 18, 70, 45, // Skip to: 13307
/* 1717 */    MCD::OPC_CheckField, 0, 11, 0, 64, 45, // Skip to: 13307
/* 1723 */    MCD::OPC_Decode, 132, 9, 74, // Opcode: MTHC1_D32
/* 1727 */    MCD::OPC_FilterValue, 8, 51, 0, // Skip to: 1782
/* 1731 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1734 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1746
/* 1738 */    MCD::OPC_CheckPredicate, 12, 45, 45, // Skip to: 13307
/* 1742 */    MCD::OPC_Decode, 168, 1, 75, // Opcode: BC1F
/* 1746 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1758
/* 1750 */    MCD::OPC_CheckPredicate, 12, 33, 45, // Skip to: 13307
/* 1754 */    MCD::OPC_Decode, 172, 1, 75, // Opcode: BC1T
/* 1758 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1770
/* 1762 */    MCD::OPC_CheckPredicate, 14, 21, 45, // Skip to: 13307
/* 1766 */    MCD::OPC_Decode, 169, 1, 75, // Opcode: BC1FL
/* 1770 */    MCD::OPC_FilterValue, 3, 13, 45, // Skip to: 13307
/* 1774 */    MCD::OPC_CheckPredicate, 14, 9, 45, // Skip to: 13307
/* 1778 */    MCD::OPC_Decode, 173, 1, 75, // Opcode: BC1TL
/* 1782 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1794
/* 1786 */    MCD::OPC_CheckPredicate, 6, 253, 44, // Skip to: 13307
/* 1790 */    MCD::OPC_Decode, 168, 2, 76, // Opcode: BZ_V
/* 1794 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1806
/* 1798 */    MCD::OPC_CheckPredicate, 6, 241, 44, // Skip to: 13307
/* 1802 */    MCD::OPC_Decode, 143, 2, 76, // Opcode: BNZ_V
/* 1806 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 2402
/* 1810 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1813 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1825
/* 1817 */    MCD::OPC_CheckPredicate, 1, 222, 44, // Skip to: 13307
/* 1821 */    MCD::OPC_Decode, 147, 5, 77, // Opcode: FADD_S
/* 1825 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1837
/* 1829 */    MCD::OPC_CheckPredicate, 1, 210, 44, // Skip to: 13307
/* 1833 */    MCD::OPC_Decode, 149, 6, 77, // Opcode: FSUB_S
/* 1837 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1849
/* 1841 */    MCD::OPC_CheckPredicate, 1, 198, 44, // Skip to: 13307
/* 1845 */    MCD::OPC_Decode, 240, 5, 77, // Opcode: FMUL_S
/* 1849 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1861
/* 1853 */    MCD::OPC_CheckPredicate, 1, 186, 44, // Skip to: 13307
/* 1857 */    MCD::OPC_Decode, 183, 5, 77, // Opcode: FDIV_S
/* 1861 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1879
/* 1865 */    MCD::OPC_CheckPredicate, 2, 174, 44, // Skip to: 13307
/* 1869 */    MCD::OPC_CheckField, 16, 5, 0, 168, 44, // Skip to: 13307
/* 1875 */    MCD::OPC_Decode, 142, 6, 78, // Opcode: FSQRT_S
/* 1879 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1897
/* 1883 */    MCD::OPC_CheckPredicate, 1, 156, 44, // Skip to: 13307
/* 1887 */    MCD::OPC_CheckField, 16, 5, 0, 150, 44, // Skip to: 13307
/* 1893 */    MCD::OPC_Decode, 140, 5, 78, // Opcode: FABS_S
/* 1897 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1915
/* 1901 */    MCD::OPC_CheckPredicate, 1, 138, 44, // Skip to: 13307
/* 1905 */    MCD::OPC_CheckField, 16, 5, 0, 132, 44, // Skip to: 13307
/* 1911 */    MCD::OPC_Decode, 232, 5, 78, // Opcode: FMOV_S
/* 1915 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1933
/* 1919 */    MCD::OPC_CheckPredicate, 1, 120, 44, // Skip to: 13307
/* 1923 */    MCD::OPC_CheckField, 16, 5, 0, 114, 44, // Skip to: 13307
/* 1929 */    MCD::OPC_Decode, 246, 5, 78, // Opcode: FNEG_S
/* 1933 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1951
/* 1937 */    MCD::OPC_CheckPredicate, 2, 102, 44, // Skip to: 13307
/* 1941 */    MCD::OPC_CheckField, 16, 5, 0, 96, 44, // Skip to: 13307
/* 1947 */    MCD::OPC_Decode, 197, 10, 78, // Opcode: ROUND_W_S
/* 1951 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1969
/* 1955 */    MCD::OPC_CheckPredicate, 2, 84, 44, // Skip to: 13307
/* 1959 */    MCD::OPC_CheckField, 16, 5, 0, 78, 44, // Skip to: 13307
/* 1965 */    MCD::OPC_Decode, 148, 13, 78, // Opcode: TRUNC_W_S
/* 1969 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1987
/* 1973 */    MCD::OPC_CheckPredicate, 2, 66, 44, // Skip to: 13307
/* 1977 */    MCD::OPC_CheckField, 16, 5, 0, 60, 44, // Skip to: 13307
/* 1983 */    MCD::OPC_Decode, 202, 2, 78, // Opcode: CEIL_W_S
/* 1987 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2005
/* 1991 */    MCD::OPC_CheckPredicate, 2, 48, 44, // Skip to: 13307
/* 1995 */    MCD::OPC_CheckField, 16, 5, 0, 42, 44, // Skip to: 13307
/* 2001 */    MCD::OPC_Decode, 217, 5, 78, // Opcode: FLOOR_W_S
/* 2005 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2036
/* 2009 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2012 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2024
/* 2016 */    MCD::OPC_CheckPredicate, 5, 23, 44, // Skip to: 13307
/* 2020 */    MCD::OPC_Decode, 201, 8, 79, // Opcode: MOVF_S
/* 2024 */    MCD::OPC_FilterValue, 1, 15, 44, // Skip to: 13307
/* 2028 */    MCD::OPC_CheckPredicate, 5, 11, 44, // Skip to: 13307
/* 2032 */    MCD::OPC_Decode, 221, 8, 79, // Opcode: MOVT_S
/* 2036 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2048
/* 2040 */    MCD::OPC_CheckPredicate, 5, 255, 43, // Skip to: 13307
/* 2044 */    MCD::OPC_Decode, 233, 8, 80, // Opcode: MOVZ_I_S
/* 2048 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2060
/* 2052 */    MCD::OPC_CheckPredicate, 5, 243, 43, // Skip to: 13307
/* 2056 */    MCD::OPC_Decode, 213, 8, 80, // Opcode: MOVN_I_S
/* 2060 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 2078
/* 2064 */    MCD::OPC_CheckPredicate, 19, 231, 43, // Skip to: 13307
/* 2068 */    MCD::OPC_CheckField, 16, 5, 0, 225, 43, // Skip to: 13307
/* 2074 */    MCD::OPC_Decode, 187, 3, 81, // Opcode: CVT_D32_S
/* 2078 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2096
/* 2082 */    MCD::OPC_CheckPredicate, 1, 213, 43, // Skip to: 13307
/* 2086 */    MCD::OPC_CheckField, 16, 5, 0, 207, 43, // Skip to: 13307
/* 2092 */    MCD::OPC_Decode, 207, 3, 78, // Opcode: CVT_W_S
/* 2096 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2114
/* 2100 */    MCD::OPC_CheckPredicate, 20, 195, 43, // Skip to: 13307
/* 2104 */    MCD::OPC_CheckField, 16, 5, 0, 189, 43, // Skip to: 13307
/* 2110 */    MCD::OPC_Decode, 196, 3, 82, // Opcode: CVT_L_S
/* 2114 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2132
/* 2118 */    MCD::OPC_CheckPredicate, 12, 177, 43, // Skip to: 13307
/* 2122 */    MCD::OPC_CheckField, 6, 5, 0, 171, 43, // Skip to: 13307
/* 2128 */    MCD::OPC_Decode, 214, 3, 83, // Opcode: C_F_S
/* 2132 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2150
/* 2136 */    MCD::OPC_CheckPredicate, 12, 159, 43, // Skip to: 13307
/* 2140 */    MCD::OPC_CheckField, 6, 5, 0, 153, 43, // Skip to: 13307
/* 2146 */    MCD::OPC_Decode, 128, 4, 83, // Opcode: C_UN_S
/* 2150 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2168
/* 2154 */    MCD::OPC_CheckPredicate, 12, 141, 43, // Skip to: 13307
/* 2158 */    MCD::OPC_CheckField, 6, 5, 0, 135, 43, // Skip to: 13307
/* 2164 */    MCD::OPC_Decode, 211, 3, 83, // Opcode: C_EQ_S
/* 2168 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2186
/* 2172 */    MCD::OPC_CheckPredicate, 12, 123, 43, // Skip to: 13307
/* 2176 */    MCD::OPC_CheckField, 6, 5, 0, 117, 43, // Skip to: 13307
/* 2182 */    MCD::OPC_Decode, 247, 3, 83, // Opcode: C_UEQ_S
/* 2186 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2204
/* 2190 */    MCD::OPC_CheckPredicate, 12, 105, 43, // Skip to: 13307
/* 2194 */    MCD::OPC_CheckField, 6, 5, 0, 99, 43, // Skip to: 13307
/* 2200 */    MCD::OPC_Decode, 238, 3, 83, // Opcode: C_OLT_S
/* 2204 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2222
/* 2208 */    MCD::OPC_CheckPredicate, 12, 87, 43, // Skip to: 13307
/* 2212 */    MCD::OPC_CheckField, 6, 5, 0, 81, 43, // Skip to: 13307
/* 2218 */    MCD::OPC_Decode, 253, 3, 83, // Opcode: C_ULT_S
/* 2222 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2240
/* 2226 */    MCD::OPC_CheckPredicate, 12, 69, 43, // Skip to: 13307
/* 2230 */    MCD::OPC_CheckField, 6, 5, 0, 63, 43, // Skip to: 13307
/* 2236 */    MCD::OPC_Decode, 235, 3, 83, // Opcode: C_OLE_S
/* 2240 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2258
/* 2244 */    MCD::OPC_CheckPredicate, 12, 51, 43, // Skip to: 13307
/* 2248 */    MCD::OPC_CheckField, 6, 5, 0, 45, 43, // Skip to: 13307
/* 2254 */    MCD::OPC_Decode, 250, 3, 83, // Opcode: C_ULE_S
/* 2258 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2276
/* 2262 */    MCD::OPC_CheckPredicate, 12, 33, 43, // Skip to: 13307
/* 2266 */    MCD::OPC_CheckField, 6, 5, 0, 27, 43, // Skip to: 13307
/* 2272 */    MCD::OPC_Decode, 244, 3, 83, // Opcode: C_SF_S
/* 2276 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2294
/* 2280 */    MCD::OPC_CheckPredicate, 12, 15, 43, // Skip to: 13307
/* 2284 */    MCD::OPC_CheckField, 6, 5, 0, 9, 43, // Skip to: 13307
/* 2290 */    MCD::OPC_Decode, 226, 3, 83, // Opcode: C_NGLE_S
/* 2294 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2312
/* 2298 */    MCD::OPC_CheckPredicate, 12, 253, 42, // Skip to: 13307
/* 2302 */    MCD::OPC_CheckField, 6, 5, 0, 247, 42, // Skip to: 13307
/* 2308 */    MCD::OPC_Decode, 241, 3, 83, // Opcode: C_SEQ_S
/* 2312 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2330
/* 2316 */    MCD::OPC_CheckPredicate, 12, 235, 42, // Skip to: 13307
/* 2320 */    MCD::OPC_CheckField, 6, 5, 0, 229, 42, // Skip to: 13307
/* 2326 */    MCD::OPC_Decode, 229, 3, 83, // Opcode: C_NGL_S
/* 2330 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2348
/* 2334 */    MCD::OPC_CheckPredicate, 12, 217, 42, // Skip to: 13307
/* 2338 */    MCD::OPC_CheckField, 6, 5, 0, 211, 42, // Skip to: 13307
/* 2344 */    MCD::OPC_Decode, 220, 3, 83, // Opcode: C_LT_S
/* 2348 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2366
/* 2352 */    MCD::OPC_CheckPredicate, 12, 199, 42, // Skip to: 13307
/* 2356 */    MCD::OPC_CheckField, 6, 5, 0, 193, 42, // Skip to: 13307
/* 2362 */    MCD::OPC_Decode, 223, 3, 83, // Opcode: C_NGE_S
/* 2366 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2384
/* 2370 */    MCD::OPC_CheckPredicate, 12, 181, 42, // Skip to: 13307
/* 2374 */    MCD::OPC_CheckField, 6, 5, 0, 175, 42, // Skip to: 13307
/* 2380 */    MCD::OPC_Decode, 217, 3, 83, // Opcode: C_LE_S
/* 2384 */    MCD::OPC_FilterValue, 63, 167, 42, // Skip to: 13307
/* 2388 */    MCD::OPC_CheckPredicate, 12, 163, 42, // Skip to: 13307
/* 2392 */    MCD::OPC_CheckField, 6, 5, 0, 157, 42, // Skip to: 13307
/* 2398 */    MCD::OPC_Decode, 232, 3, 83, // Opcode: C_NGT_S
/* 2402 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 2998
/* 2406 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2409 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2421
/* 2413 */    MCD::OPC_CheckPredicate, 19, 138, 42, // Skip to: 13307
/* 2417 */    MCD::OPC_Decode, 144, 5, 84, // Opcode: FADD_D32
/* 2421 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2433
/* 2425 */    MCD::OPC_CheckPredicate, 19, 126, 42, // Skip to: 13307
/* 2429 */    MCD::OPC_Decode, 146, 6, 84, // Opcode: FSUB_D32
/* 2433 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2445
/* 2437 */    MCD::OPC_CheckPredicate, 19, 114, 42, // Skip to: 13307
/* 2441 */    MCD::OPC_Decode, 237, 5, 84, // Opcode: FMUL_D32
/* 2445 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2457
/* 2449 */    MCD::OPC_CheckPredicate, 19, 102, 42, // Skip to: 13307
/* 2453 */    MCD::OPC_Decode, 180, 5, 84, // Opcode: FDIV_D32
/* 2457 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2475
/* 2461 */    MCD::OPC_CheckPredicate, 21, 90, 42, // Skip to: 13307
/* 2465 */    MCD::OPC_CheckField, 16, 5, 0, 84, 42, // Skip to: 13307
/* 2471 */    MCD::OPC_Decode, 139, 6, 85, // Opcode: FSQRT_D32
/* 2475 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2493
/* 2479 */    MCD::OPC_CheckPredicate, 19, 72, 42, // Skip to: 13307
/* 2483 */    MCD::OPC_CheckField, 16, 5, 0, 66, 42, // Skip to: 13307
/* 2489 */    MCD::OPC_Decode, 137, 5, 85, // Opcode: FABS_D32
/* 2493 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2511
/* 2497 */    MCD::OPC_CheckPredicate, 19, 54, 42, // Skip to: 13307
/* 2501 */    MCD::OPC_CheckField, 16, 5, 0, 48, 42, // Skip to: 13307
/* 2507 */    MCD::OPC_Decode, 229, 5, 85, // Opcode: FMOV_D32
/* 2511 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2529
/* 2515 */    MCD::OPC_CheckPredicate, 19, 36, 42, // Skip to: 13307
/* 2519 */    MCD::OPC_CheckField, 16, 5, 0, 30, 42, // Skip to: 13307
/* 2525 */    MCD::OPC_Decode, 243, 5, 85, // Opcode: FNEG_D32
/* 2529 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2547
/* 2533 */    MCD::OPC_CheckPredicate, 21, 18, 42, // Skip to: 13307
/* 2537 */    MCD::OPC_CheckField, 16, 5, 0, 12, 42, // Skip to: 13307
/* 2543 */    MCD::OPC_Decode, 194, 10, 86, // Opcode: ROUND_W_D32
/* 2547 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2565
/* 2551 */    MCD::OPC_CheckPredicate, 21, 0, 42, // Skip to: 13307
/* 2555 */    MCD::OPC_CheckField, 16, 5, 0, 250, 41, // Skip to: 13307
/* 2561 */    MCD::OPC_Decode, 145, 13, 86, // Opcode: TRUNC_W_D32
/* 2565 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2583
/* 2569 */    MCD::OPC_CheckPredicate, 21, 238, 41, // Skip to: 13307
/* 2573 */    MCD::OPC_CheckField, 16, 5, 0, 232, 41, // Skip to: 13307
/* 2579 */    MCD::OPC_Decode, 199, 2, 86, // Opcode: CEIL_W_D32
/* 2583 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2601
/* 2587 */    MCD::OPC_CheckPredicate, 21, 220, 41, // Skip to: 13307
/* 2591 */    MCD::OPC_CheckField, 16, 5, 0, 214, 41, // Skip to: 13307
/* 2597 */    MCD::OPC_Decode, 214, 5, 86, // Opcode: FLOOR_W_D32
/* 2601 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2632
/* 2605 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2608 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2620
/* 2612 */    MCD::OPC_CheckPredicate, 22, 195, 41, // Skip to: 13307
/* 2616 */    MCD::OPC_Decode, 195, 8, 87, // Opcode: MOVF_D32
/* 2620 */    MCD::OPC_FilterValue, 1, 187, 41, // Skip to: 13307
/* 2624 */    MCD::OPC_CheckPredicate, 22, 183, 41, // Skip to: 13307
/* 2628 */    MCD::OPC_Decode, 215, 8, 87, // Opcode: MOVT_D32
/* 2632 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2644
/* 2636 */    MCD::OPC_CheckPredicate, 22, 171, 41, // Skip to: 13307
/* 2640 */    MCD::OPC_Decode, 227, 8, 88, // Opcode: MOVZ_I_D32
/* 2644 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2656
/* 2648 */    MCD::OPC_CheckPredicate, 22, 159, 41, // Skip to: 13307
/* 2652 */    MCD::OPC_Decode, 207, 8, 88, // Opcode: MOVN_I_D32
/* 2656 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2674
/* 2660 */    MCD::OPC_CheckPredicate, 19, 147, 41, // Skip to: 13307
/* 2664 */    MCD::OPC_CheckField, 16, 5, 0, 141, 41, // Skip to: 13307
/* 2670 */    MCD::OPC_Decode, 198, 3, 86, // Opcode: CVT_S_D32
/* 2674 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2692
/* 2678 */    MCD::OPC_CheckPredicate, 19, 129, 41, // Skip to: 13307
/* 2682 */    MCD::OPC_CheckField, 16, 5, 0, 123, 41, // Skip to: 13307
/* 2688 */    MCD::OPC_Decode, 204, 3, 86, // Opcode: CVT_W_D32
/* 2692 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2710
/* 2696 */    MCD::OPC_CheckPredicate, 20, 111, 41, // Skip to: 13307
/* 2700 */    MCD::OPC_CheckField, 16, 5, 0, 105, 41, // Skip to: 13307
/* 2706 */    MCD::OPC_Decode, 194, 3, 89, // Opcode: CVT_L_D64
/* 2710 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2728
/* 2714 */    MCD::OPC_CheckPredicate, 23, 93, 41, // Skip to: 13307
/* 2718 */    MCD::OPC_CheckField, 6, 5, 0, 87, 41, // Skip to: 13307
/* 2724 */    MCD::OPC_Decode, 212, 3, 90, // Opcode: C_F_D32
/* 2728 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2746
/* 2732 */    MCD::OPC_CheckPredicate, 23, 75, 41, // Skip to: 13307
/* 2736 */    MCD::OPC_CheckField, 6, 5, 0, 69, 41, // Skip to: 13307
/* 2742 */    MCD::OPC_Decode, 254, 3, 90, // Opcode: C_UN_D32
/* 2746 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2764
/* 2750 */    MCD::OPC_CheckPredicate, 23, 57, 41, // Skip to: 13307
/* 2754 */    MCD::OPC_CheckField, 6, 5, 0, 51, 41, // Skip to: 13307
/* 2760 */    MCD::OPC_Decode, 209, 3, 90, // Opcode: C_EQ_D32
/* 2764 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2782
/* 2768 */    MCD::OPC_CheckPredicate, 23, 39, 41, // Skip to: 13307
/* 2772 */    MCD::OPC_CheckField, 6, 5, 0, 33, 41, // Skip to: 13307
/* 2778 */    MCD::OPC_Decode, 245, 3, 90, // Opcode: C_UEQ_D32
/* 2782 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2800
/* 2786 */    MCD::OPC_CheckPredicate, 23, 21, 41, // Skip to: 13307
/* 2790 */    MCD::OPC_CheckField, 6, 5, 0, 15, 41, // Skip to: 13307
/* 2796 */    MCD::OPC_Decode, 236, 3, 90, // Opcode: C_OLT_D32
/* 2800 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2818
/* 2804 */    MCD::OPC_CheckPredicate, 23, 3, 41, // Skip to: 13307
/* 2808 */    MCD::OPC_CheckField, 6, 5, 0, 253, 40, // Skip to: 13307
/* 2814 */    MCD::OPC_Decode, 251, 3, 90, // Opcode: C_ULT_D32
/* 2818 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2836
/* 2822 */    MCD::OPC_CheckPredicate, 23, 241, 40, // Skip to: 13307
/* 2826 */    MCD::OPC_CheckField, 6, 5, 0, 235, 40, // Skip to: 13307
/* 2832 */    MCD::OPC_Decode, 233, 3, 90, // Opcode: C_OLE_D32
/* 2836 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2854
/* 2840 */    MCD::OPC_CheckPredicate, 23, 223, 40, // Skip to: 13307
/* 2844 */    MCD::OPC_CheckField, 6, 5, 0, 217, 40, // Skip to: 13307
/* 2850 */    MCD::OPC_Decode, 248, 3, 90, // Opcode: C_ULE_D32
/* 2854 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2872
/* 2858 */    MCD::OPC_CheckPredicate, 23, 205, 40, // Skip to: 13307
/* 2862 */    MCD::OPC_CheckField, 6, 5, 0, 199, 40, // Skip to: 13307
/* 2868 */    MCD::OPC_Decode, 242, 3, 90, // Opcode: C_SF_D32
/* 2872 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2890
/* 2876 */    MCD::OPC_CheckPredicate, 23, 187, 40, // Skip to: 13307
/* 2880 */    MCD::OPC_CheckField, 6, 5, 0, 181, 40, // Skip to: 13307
/* 2886 */    MCD::OPC_Decode, 224, 3, 90, // Opcode: C_NGLE_D32
/* 2890 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2908
/* 2894 */    MCD::OPC_CheckPredicate, 23, 169, 40, // Skip to: 13307
/* 2898 */    MCD::OPC_CheckField, 6, 5, 0, 163, 40, // Skip to: 13307
/* 2904 */    MCD::OPC_Decode, 239, 3, 90, // Opcode: C_SEQ_D32
/* 2908 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2926
/* 2912 */    MCD::OPC_CheckPredicate, 23, 151, 40, // Skip to: 13307
/* 2916 */    MCD::OPC_CheckField, 6, 5, 0, 145, 40, // Skip to: 13307
/* 2922 */    MCD::OPC_Decode, 227, 3, 90, // Opcode: C_NGL_D32
/* 2926 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2944
/* 2930 */    MCD::OPC_CheckPredicate, 23, 133, 40, // Skip to: 13307
/* 2934 */    MCD::OPC_CheckField, 6, 5, 0, 127, 40, // Skip to: 13307
/* 2940 */    MCD::OPC_Decode, 218, 3, 90, // Opcode: C_LT_D32
/* 2944 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2962
/* 2948 */    MCD::OPC_CheckPredicate, 23, 115, 40, // Skip to: 13307
/* 2952 */    MCD::OPC_CheckField, 6, 5, 0, 109, 40, // Skip to: 13307
/* 2958 */    MCD::OPC_Decode, 221, 3, 90, // Opcode: C_NGE_D32
/* 2962 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2980
/* 2966 */    MCD::OPC_CheckPredicate, 23, 97, 40, // Skip to: 13307
/* 2970 */    MCD::OPC_CheckField, 6, 5, 0, 91, 40, // Skip to: 13307
/* 2976 */    MCD::OPC_Decode, 215, 3, 90, // Opcode: C_LE_D32
/* 2980 */    MCD::OPC_FilterValue, 63, 83, 40, // Skip to: 13307
/* 2984 */    MCD::OPC_CheckPredicate, 23, 79, 40, // Skip to: 13307
/* 2988 */    MCD::OPC_CheckField, 6, 5, 0, 73, 40, // Skip to: 13307
/* 2994 */    MCD::OPC_Decode, 230, 3, 90, // Opcode: C_NGT_D32
/* 2998 */    MCD::OPC_FilterValue, 20, 39, 0, // Skip to: 3041
/* 3002 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3005 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 3023
/* 3009 */    MCD::OPC_CheckPredicate, 1, 54, 40, // Skip to: 13307
/* 3013 */    MCD::OPC_CheckField, 16, 5, 0, 48, 40, // Skip to: 13307
/* 3019 */    MCD::OPC_Decode, 202, 3, 78, // Opcode: CVT_S_W
/* 3023 */    MCD::OPC_FilterValue, 33, 40, 40, // Skip to: 13307
/* 3027 */    MCD::OPC_CheckPredicate, 19, 36, 40, // Skip to: 13307
/* 3031 */    MCD::OPC_CheckField, 16, 5, 0, 30, 40, // Skip to: 13307
/* 3037 */    MCD::OPC_Decode, 188, 3, 81, // Opcode: CVT_D32_W
/* 3041 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3053
/* 3045 */    MCD::OPC_CheckPredicate, 6, 18, 40, // Skip to: 13307
/* 3049 */    MCD::OPC_Decode, 165, 2, 76, // Opcode: BZ_B
/* 3053 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3065
/* 3057 */    MCD::OPC_CheckPredicate, 6, 6, 40, // Skip to: 13307
/* 3061 */    MCD::OPC_Decode, 167, 2, 91, // Opcode: BZ_H
/* 3065 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3077
/* 3069 */    MCD::OPC_CheckPredicate, 6, 250, 39, // Skip to: 13307
/* 3073 */    MCD::OPC_Decode, 169, 2, 92, // Opcode: BZ_W
/* 3077 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 3089
/* 3081 */    MCD::OPC_CheckPredicate, 6, 238, 39, // Skip to: 13307
/* 3085 */    MCD::OPC_Decode, 166, 2, 93, // Opcode: BZ_D
/* 3089 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3101
/* 3093 */    MCD::OPC_CheckPredicate, 6, 226, 39, // Skip to: 13307
/* 3097 */    MCD::OPC_Decode, 140, 2, 76, // Opcode: BNZ_B
/* 3101 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3113
/* 3105 */    MCD::OPC_CheckPredicate, 6, 214, 39, // Skip to: 13307
/* 3109 */    MCD::OPC_Decode, 142, 2, 91, // Opcode: BNZ_H
/* 3113 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3125
/* 3117 */    MCD::OPC_CheckPredicate, 6, 202, 39, // Skip to: 13307
/* 3121 */    MCD::OPC_Decode, 144, 2, 92, // Opcode: BNZ_W
/* 3125 */    MCD::OPC_FilterValue, 31, 194, 39, // Skip to: 13307
/* 3129 */    MCD::OPC_CheckPredicate, 6, 190, 39, // Skip to: 13307
/* 3133 */    MCD::OPC_Decode, 141, 2, 93, // Opcode: BNZ_D
/* 3137 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 3180
/* 3141 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3144 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3162
/* 3148 */    MCD::OPC_CheckPredicate, 1, 171, 39, // Skip to: 13307
/* 3152 */    MCD::OPC_CheckField, 3, 8, 0, 165, 39, // Skip to: 13307
/* 3158 */    MCD::OPC_Decode, 142, 8, 66, // Opcode: MFC2
/* 3162 */    MCD::OPC_FilterValue, 4, 157, 39, // Skip to: 13307
/* 3166 */    MCD::OPC_CheckPredicate, 1, 153, 39, // Skip to: 13307
/* 3170 */    MCD::OPC_CheckField, 3, 8, 0, 147, 39, // Skip to: 13307
/* 3176 */    MCD::OPC_Decode, 131, 9, 66, // Opcode: MTC2
/* 3180 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 3391
/* 3184 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3187 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3205
/* 3191 */    MCD::OPC_CheckPredicate, 24, 128, 39, // Skip to: 13307
/* 3195 */    MCD::OPC_CheckField, 11, 5, 0, 122, 39, // Skip to: 13307
/* 3201 */    MCD::OPC_Decode, 198, 7, 94, // Opcode: LWXC1
/* 3205 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3223
/* 3209 */    MCD::OPC_CheckPredicate, 25, 110, 39, // Skip to: 13307
/* 3213 */    MCD::OPC_CheckField, 11, 5, 0, 104, 39, // Skip to: 13307
/* 3219 */    MCD::OPC_Decode, 144, 7, 95, // Opcode: LDXC1
/* 3223 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3241
/* 3227 */    MCD::OPC_CheckPredicate, 26, 92, 39, // Skip to: 13307
/* 3231 */    MCD::OPC_CheckField, 11, 5, 0, 86, 39, // Skip to: 13307
/* 3237 */    MCD::OPC_Decode, 175, 7, 95, // Opcode: LUXC1
/* 3241 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 3259
/* 3245 */    MCD::OPC_CheckPredicate, 24, 74, 39, // Skip to: 13307
/* 3249 */    MCD::OPC_CheckField, 6, 5, 0, 68, 39, // Skip to: 13307
/* 3255 */    MCD::OPC_Decode, 184, 12, 96, // Opcode: SWXC1
/* 3259 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 3277
/* 3263 */    MCD::OPC_CheckPredicate, 25, 56, 39, // Skip to: 13307
/* 3267 */    MCD::OPC_CheckField, 6, 5, 0, 50, 39, // Skip to: 13307
/* 3273 */    MCD::OPC_Decode, 232, 10, 97, // Opcode: SDXC1
/* 3277 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 3295
/* 3281 */    MCD::OPC_CheckPredicate, 26, 38, 39, // Skip to: 13307
/* 3285 */    MCD::OPC_CheckField, 6, 5, 0, 32, 39, // Skip to: 13307
/* 3291 */    MCD::OPC_Decode, 168, 12, 97, // Opcode: SUXC1
/* 3295 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 3307
/* 3299 */    MCD::OPC_CheckPredicate, 27, 20, 39, // Skip to: 13307
/* 3303 */    MCD::OPC_Decode, 237, 7, 98, // Opcode: MADD_S
/* 3307 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 3319
/* 3311 */    MCD::OPC_CheckPredicate, 28, 8, 39, // Skip to: 13307
/* 3315 */    MCD::OPC_Decode, 230, 7, 99, // Opcode: MADD_D32
/* 3319 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 3331
/* 3323 */    MCD::OPC_CheckPredicate, 27, 252, 38, // Skip to: 13307
/* 3327 */    MCD::OPC_Decode, 254, 8, 98, // Opcode: MSUB_S
/* 3331 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 3343
/* 3335 */    MCD::OPC_CheckPredicate, 28, 240, 38, // Skip to: 13307
/* 3339 */    MCD::OPC_Decode, 247, 8, 99, // Opcode: MSUB_D32
/* 3343 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 3355
/* 3347 */    MCD::OPC_CheckPredicate, 27, 228, 38, // Skip to: 13307
/* 3351 */    MCD::OPC_Decode, 201, 9, 98, // Opcode: NMADD_S
/* 3355 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 3367
/* 3359 */    MCD::OPC_CheckPredicate, 28, 216, 38, // Skip to: 13307
/* 3363 */    MCD::OPC_Decode, 198, 9, 99, // Opcode: NMADD_D32
/* 3367 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 3379
/* 3371 */    MCD::OPC_CheckPredicate, 27, 204, 38, // Skip to: 13307
/* 3375 */    MCD::OPC_Decode, 206, 9, 98, // Opcode: NMSUB_S
/* 3379 */    MCD::OPC_FilterValue, 57, 196, 38, // Skip to: 13307
/* 3383 */    MCD::OPC_CheckPredicate, 28, 192, 38, // Skip to: 13307
/* 3387 */    MCD::OPC_Decode, 203, 9, 99, // Opcode: NMSUB_D32
/* 3391 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3403
/* 3395 */    MCD::OPC_CheckPredicate, 14, 180, 38, // Skip to: 13307
/* 3399 */    MCD::OPC_Decode, 188, 1, 63, // Opcode: BEQL
/* 3403 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3415
/* 3407 */    MCD::OPC_CheckPredicate, 14, 168, 38, // Skip to: 13307
/* 3411 */    MCD::OPC_Decode, 134, 2, 63, // Opcode: BNEL
/* 3415 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 3433
/* 3419 */    MCD::OPC_CheckPredicate, 14, 156, 38, // Skip to: 13307
/* 3423 */    MCD::OPC_CheckField, 16, 5, 0, 150, 38, // Skip to: 13307
/* 3429 */    MCD::OPC_Decode, 233, 1, 59, // Opcode: BLEZL
/* 3433 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3451
/* 3437 */    MCD::OPC_CheckPredicate, 14, 138, 38, // Skip to: 13307
/* 3441 */    MCD::OPC_CheckField, 16, 5, 0, 132, 38, // Skip to: 13307
/* 3447 */    MCD::OPC_Decode, 209, 1, 59, // Opcode: BGTZL
/* 3451 */    MCD::OPC_FilterValue, 28, 229, 0, // Skip to: 3684
/* 3455 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3458 */    MCD::OPC_FilterValue, 0, 36, 0, // Skip to: 3498
/* 3462 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3465 */    MCD::OPC_FilterValue, 0, 110, 38, // Skip to: 13307
/* 3469 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3472 */    MCD::OPC_FilterValue, 0, 103, 38, // Skip to: 13307
/* 3476 */    MCD::OPC_CheckPredicate, 7, 10, 0, // Skip to: 3490
/* 3480 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3490
/* 3486 */    MCD::OPC_Decode, 218, 7, 32, // Opcode: MADD
/* 3490 */    MCD::OPC_CheckPredicate, 11, 85, 38, // Skip to: 13307
/* 3494 */    MCD::OPC_Decode, 233, 7, 100, // Opcode: MADD_DSP
/* 3498 */    MCD::OPC_FilterValue, 1, 36, 0, // Skip to: 3538
/* 3502 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3505 */    MCD::OPC_FilterValue, 0, 70, 38, // Skip to: 13307
/* 3509 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3512 */    MCD::OPC_FilterValue, 0, 63, 38, // Skip to: 13307
/* 3516 */    MCD::OPC_CheckPredicate, 7, 10, 0, // Skip to: 3530
/* 3520 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3530
/* 3526 */    MCD::OPC_Decode, 223, 7, 32, // Opcode: MADDU
/* 3530 */    MCD::OPC_CheckPredicate, 11, 45, 38, // Skip to: 13307
/* 3534 */    MCD::OPC_Decode, 224, 7, 100, // Opcode: MADDU_DSP
/* 3538 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3556
/* 3542 */    MCD::OPC_CheckPredicate, 7, 33, 38, // Skip to: 13307
/* 3546 */    MCD::OPC_CheckField, 6, 5, 0, 27, 38, // Skip to: 13307
/* 3552 */    MCD::OPC_Decode, 152, 9, 25, // Opcode: MUL
/* 3556 */    MCD::OPC_FilterValue, 4, 36, 0, // Skip to: 3596
/* 3560 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3563 */    MCD::OPC_FilterValue, 0, 12, 38, // Skip to: 13307
/* 3567 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3570 */    MCD::OPC_FilterValue, 0, 5, 38, // Skip to: 13307
/* 3574 */    MCD::OPC_CheckPredicate, 7, 10, 0, // Skip to: 3588
/* 3578 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3588
/* 3584 */    MCD::OPC_Decode, 235, 8, 32, // Opcode: MSUB
/* 3588 */    MCD::OPC_CheckPredicate, 11, 243, 37, // Skip to: 13307
/* 3592 */    MCD::OPC_Decode, 250, 8, 100, // Opcode: MSUB_DSP
/* 3596 */    MCD::OPC_FilterValue, 5, 36, 0, // Skip to: 3636
/* 3600 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3603 */    MCD::OPC_FilterValue, 0, 228, 37, // Skip to: 13307
/* 3607 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3610 */    MCD::OPC_FilterValue, 0, 221, 37, // Skip to: 13307
/* 3614 */    MCD::OPC_CheckPredicate, 7, 10, 0, // Skip to: 3628
/* 3618 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3628
/* 3624 */    MCD::OPC_Decode, 240, 8, 32, // Opcode: MSUBU
/* 3628 */    MCD::OPC_CheckPredicate, 11, 203, 37, // Skip to: 13307
/* 3632 */    MCD::OPC_Decode, 241, 8, 100, // Opcode: MSUBU_DSP
/* 3636 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 3654
/* 3640 */    MCD::OPC_CheckPredicate, 7, 191, 37, // Skip to: 13307
/* 3644 */    MCD::OPC_CheckField, 6, 5, 0, 185, 37, // Skip to: 13307
/* 3650 */    MCD::OPC_Decode, 254, 2, 101, // Opcode: CLZ
/* 3654 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 3672
/* 3658 */    MCD::OPC_CheckPredicate, 7, 173, 37, // Skip to: 13307
/* 3662 */    MCD::OPC_CheckField, 6, 5, 0, 167, 37, // Skip to: 13307
/* 3668 */    MCD::OPC_Decode, 235, 2, 101, // Opcode: CLO
/* 3672 */    MCD::OPC_FilterValue, 63, 159, 37, // Skip to: 13307
/* 3676 */    MCD::OPC_CheckPredicate, 7, 155, 37, // Skip to: 13307
/* 3680 */    MCD::OPC_Decode, 220, 10, 50, // Opcode: SDBBP
/* 3684 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3696
/* 3688 */    MCD::OPC_CheckPredicate, 7, 143, 37, // Skip to: 13307
/* 3692 */    MCD::OPC_Decode, 232, 6, 62, // Opcode: JALX
/* 3696 */    MCD::OPC_FilterValue, 30, 218, 26, // Skip to: 10574
/* 3700 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3703 */    MCD::OPC_FilterValue, 0, 50, 0, // Skip to: 3757
/* 3707 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3710 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3721
/* 3714 */    MCD::OPC_CheckPredicate, 6, 117, 37, // Skip to: 13307
/* 3718 */    MCD::OPC_Decode, 83, 102, // Opcode: ANDI_B
/* 3721 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3733
/* 3725 */    MCD::OPC_CheckPredicate, 6, 106, 37, // Skip to: 13307
/* 3729 */    MCD::OPC_Decode, 223, 9, 102, // Opcode: ORI_B
/* 3733 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3745
/* 3737 */    MCD::OPC_CheckPredicate, 6, 94, 37, // Skip to: 13307
/* 3741 */    MCD::OPC_Decode, 211, 9, 102, // Opcode: NORI_B
/* 3745 */    MCD::OPC_FilterValue, 3, 86, 37, // Skip to: 13307
/* 3749 */    MCD::OPC_CheckPredicate, 6, 82, 37, // Skip to: 13307
/* 3753 */    MCD::OPC_Decode, 168, 13, 102, // Opcode: XORI_B
/* 3757 */    MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 3800
/* 3761 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3764 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3776
/* 3768 */    MCD::OPC_CheckPredicate, 6, 63, 37, // Skip to: 13307
/* 3772 */    MCD::OPC_Decode, 247, 1, 103, // Opcode: BMNZI_B
/* 3776 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3788
/* 3780 */    MCD::OPC_CheckPredicate, 6, 51, 37, // Skip to: 13307
/* 3784 */    MCD::OPC_Decode, 249, 1, 103, // Opcode: BMZI_B
/* 3788 */    MCD::OPC_FilterValue, 2, 43, 37, // Skip to: 13307
/* 3792 */    MCD::OPC_CheckPredicate, 6, 39, 37, // Skip to: 13307
/* 3796 */    MCD::OPC_Decode, 150, 2, 103, // Opcode: BSELI_B
/* 3800 */    MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 3843
/* 3804 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3807 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3819
/* 3811 */    MCD::OPC_CheckPredicate, 6, 20, 37, // Skip to: 13307
/* 3815 */    MCD::OPC_Decode, 254, 10, 102, // Opcode: SHF_B
/* 3819 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3831
/* 3823 */    MCD::OPC_CheckPredicate, 6, 8, 37, // Skip to: 13307
/* 3827 */    MCD::OPC_Decode, 255, 10, 104, // Opcode: SHF_H
/* 3831 */    MCD::OPC_FilterValue, 2, 0, 37, // Skip to: 13307
/* 3835 */    MCD::OPC_CheckPredicate, 6, 252, 36, // Skip to: 13307
/* 3839 */    MCD::OPC_Decode, 128, 11, 105, // Opcode: SHF_W
/* 3843 */    MCD::OPC_FilterValue, 6, 31, 1, // Skip to: 4134
/* 3847 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3850 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3861
/* 3854 */    MCD::OPC_CheckPredicate, 6, 233, 36, // Skip to: 13307
/* 3858 */    MCD::OPC_Decode, 56, 106, // Opcode: ADDVI_B
/* 3861 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 3872
/* 3865 */    MCD::OPC_CheckPredicate, 6, 222, 36, // Skip to: 13307
/* 3869 */    MCD::OPC_Decode, 58, 107, // Opcode: ADDVI_H
/* 3872 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3883
/* 3876 */    MCD::OPC_CheckPredicate, 6, 211, 36, // Skip to: 13307
/* 3880 */    MCD::OPC_Decode, 59, 108, // Opcode: ADDVI_W
/* 3883 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 3894
/* 3887 */    MCD::OPC_CheckPredicate, 6, 200, 36, // Skip to: 13307
/* 3891 */    MCD::OPC_Decode, 57, 109, // Opcode: ADDVI_D
/* 3894 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3906
/* 3898 */    MCD::OPC_CheckPredicate, 6, 189, 36, // Skip to: 13307
/* 3902 */    MCD::OPC_Decode, 157, 12, 106, // Opcode: SUBVI_B
/* 3906 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3918
/* 3910 */    MCD::OPC_CheckPredicate, 6, 177, 36, // Skip to: 13307
/* 3914 */    MCD::OPC_Decode, 159, 12, 107, // Opcode: SUBVI_H
/* 3918 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3930
/* 3922 */    MCD::OPC_CheckPredicate, 6, 165, 36, // Skip to: 13307
/* 3926 */    MCD::OPC_Decode, 160, 12, 108, // Opcode: SUBVI_W
/* 3930 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3942
/* 3934 */    MCD::OPC_CheckPredicate, 6, 153, 36, // Skip to: 13307
/* 3938 */    MCD::OPC_Decode, 158, 12, 109, // Opcode: SUBVI_D
/* 3942 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3954
/* 3946 */    MCD::OPC_CheckPredicate, 6, 141, 36, // Skip to: 13307
/* 3950 */    MCD::OPC_Decode, 245, 7, 106, // Opcode: MAXI_S_B
/* 3954 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3966
/* 3958 */    MCD::OPC_CheckPredicate, 6, 129, 36, // Skip to: 13307
/* 3962 */    MCD::OPC_Decode, 247, 7, 107, // Opcode: MAXI_S_H
/* 3966 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3978
/* 3970 */    MCD::OPC_CheckPredicate, 6, 117, 36, // Skip to: 13307
/* 3974 */    MCD::OPC_Decode, 248, 7, 108, // Opcode: MAXI_S_W
/* 3978 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3990
/* 3982 */    MCD::OPC_CheckPredicate, 6, 105, 36, // Skip to: 13307
/* 3986 */    MCD::OPC_Decode, 246, 7, 109, // Opcode: MAXI_S_D
/* 3990 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4002
/* 3994 */    MCD::OPC_CheckPredicate, 6, 93, 36, // Skip to: 13307
/* 3998 */    MCD::OPC_Decode, 249, 7, 106, // Opcode: MAXI_U_B
/* 4002 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 4014
/* 4006 */    MCD::OPC_CheckPredicate, 6, 81, 36, // Skip to: 13307
/* 4010 */    MCD::OPC_Decode, 251, 7, 107, // Opcode: MAXI_U_H
/* 4014 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4026
/* 4018 */    MCD::OPC_CheckPredicate, 6, 69, 36, // Skip to: 13307
/* 4022 */    MCD::OPC_Decode, 252, 7, 108, // Opcode: MAXI_U_W
/* 4026 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 4038
/* 4030 */    MCD::OPC_CheckPredicate, 6, 57, 36, // Skip to: 13307
/* 4034 */    MCD::OPC_Decode, 250, 7, 109, // Opcode: MAXI_U_D
/* 4038 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 4050
/* 4042 */    MCD::OPC_CheckPredicate, 6, 45, 36, // Skip to: 13307
/* 4046 */    MCD::OPC_Decode, 158, 8, 106, // Opcode: MINI_S_B
/* 4050 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 4062
/* 4054 */    MCD::OPC_CheckPredicate, 6, 33, 36, // Skip to: 13307
/* 4058 */    MCD::OPC_Decode, 160, 8, 107, // Opcode: MINI_S_H
/* 4062 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4074
/* 4066 */    MCD::OPC_CheckPredicate, 6, 21, 36, // Skip to: 13307
/* 4070 */    MCD::OPC_Decode, 161, 8, 108, // Opcode: MINI_S_W
/* 4074 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4086
/* 4078 */    MCD::OPC_CheckPredicate, 6, 9, 36, // Skip to: 13307
/* 4082 */    MCD::OPC_Decode, 159, 8, 109, // Opcode: MINI_S_D
/* 4086 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 4098
/* 4090 */    MCD::OPC_CheckPredicate, 6, 253, 35, // Skip to: 13307
/* 4094 */    MCD::OPC_Decode, 162, 8, 106, // Opcode: MINI_U_B
/* 4098 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 4110
/* 4102 */    MCD::OPC_CheckPredicate, 6, 241, 35, // Skip to: 13307
/* 4106 */    MCD::OPC_Decode, 164, 8, 107, // Opcode: MINI_U_H
/* 4110 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4122
/* 4114 */    MCD::OPC_CheckPredicate, 6, 229, 35, // Skip to: 13307
/* 4118 */    MCD::OPC_Decode, 165, 8, 108, // Opcode: MINI_U_W
/* 4122 */    MCD::OPC_FilterValue, 23, 221, 35, // Skip to: 13307
/* 4126 */    MCD::OPC_CheckPredicate, 6, 217, 35, // Skip to: 13307
/* 4130 */    MCD::OPC_Decode, 163, 8, 109, // Opcode: MINI_U_D
/* 4134 */    MCD::OPC_FilterValue, 7, 35, 1, // Skip to: 4429
/* 4138 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4141 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4153
/* 4145 */    MCD::OPC_CheckPredicate, 6, 198, 35, // Skip to: 13307
/* 4149 */    MCD::OPC_Decode, 204, 2, 106, // Opcode: CEQI_B
/* 4153 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4165
/* 4157 */    MCD::OPC_CheckPredicate, 6, 186, 35, // Skip to: 13307
/* 4161 */    MCD::OPC_Decode, 206, 2, 107, // Opcode: CEQI_H
/* 4165 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4177
/* 4169 */    MCD::OPC_CheckPredicate, 6, 174, 35, // Skip to: 13307
/* 4173 */    MCD::OPC_Decode, 207, 2, 108, // Opcode: CEQI_W
/* 4177 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4189
/* 4181 */    MCD::OPC_CheckPredicate, 6, 162, 35, // Skip to: 13307
/* 4185 */    MCD::OPC_Decode, 205, 2, 109, // Opcode: CEQI_D
/* 4189 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4201
/* 4193 */    MCD::OPC_CheckPredicate, 6, 150, 35, // Skip to: 13307
/* 4197 */    MCD::OPC_Decode, 238, 2, 106, // Opcode: CLTI_S_B
/* 4201 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4213
/* 4205 */    MCD::OPC_CheckPredicate, 6, 138, 35, // Skip to: 13307
/* 4209 */    MCD::OPC_Decode, 240, 2, 107, // Opcode: CLTI_S_H
/* 4213 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 4225
/* 4217 */    MCD::OPC_CheckPredicate, 6, 126, 35, // Skip to: 13307
/* 4221 */    MCD::OPC_Decode, 241, 2, 108, // Opcode: CLTI_S_W
/* 4225 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4237
/* 4229 */    MCD::OPC_CheckPredicate, 6, 114, 35, // Skip to: 13307
/* 4233 */    MCD::OPC_Decode, 239, 2, 109, // Opcode: CLTI_S_D
/* 4237 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4249
/* 4241 */    MCD::OPC_CheckPredicate, 6, 102, 35, // Skip to: 13307
/* 4245 */    MCD::OPC_Decode, 242, 2, 106, // Opcode: CLTI_U_B
/* 4249 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 4261
/* 4253 */    MCD::OPC_CheckPredicate, 6, 90, 35, // Skip to: 13307
/* 4257 */    MCD::OPC_Decode, 244, 2, 107, // Opcode: CLTI_U_H
/* 4261 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4273
/* 4265 */    MCD::OPC_CheckPredicate, 6, 78, 35, // Skip to: 13307
/* 4269 */    MCD::OPC_Decode, 245, 2, 108, // Opcode: CLTI_U_W
/* 4273 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 4285
/* 4277 */    MCD::OPC_CheckPredicate, 6, 66, 35, // Skip to: 13307
/* 4281 */    MCD::OPC_Decode, 243, 2, 109, // Opcode: CLTI_U_D
/* 4285 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 4297
/* 4289 */    MCD::OPC_CheckPredicate, 6, 54, 35, // Skip to: 13307
/* 4293 */    MCD::OPC_Decode, 219, 2, 106, // Opcode: CLEI_S_B
/* 4297 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 4309
/* 4301 */    MCD::OPC_CheckPredicate, 6, 42, 35, // Skip to: 13307
/* 4305 */    MCD::OPC_Decode, 221, 2, 107, // Opcode: CLEI_S_H
/* 4309 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4321
/* 4313 */    MCD::OPC_CheckPredicate, 6, 30, 35, // Skip to: 13307
/* 4317 */    MCD::OPC_Decode, 222, 2, 108, // Opcode: CLEI_S_W
/* 4321 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4333
/* 4325 */    MCD::OPC_CheckPredicate, 6, 18, 35, // Skip to: 13307
/* 4329 */    MCD::OPC_Decode, 220, 2, 109, // Opcode: CLEI_S_D
/* 4333 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 4345
/* 4337 */    MCD::OPC_CheckPredicate, 6, 6, 35, // Skip to: 13307
/* 4341 */    MCD::OPC_Decode, 223, 2, 106, // Opcode: CLEI_U_B
/* 4345 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 4357
/* 4349 */    MCD::OPC_CheckPredicate, 6, 250, 34, // Skip to: 13307
/* 4353 */    MCD::OPC_Decode, 225, 2, 107, // Opcode: CLEI_U_H
/* 4357 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4369
/* 4361 */    MCD::OPC_CheckPredicate, 6, 238, 34, // Skip to: 13307
/* 4365 */    MCD::OPC_Decode, 226, 2, 108, // Opcode: CLEI_U_W
/* 4369 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 4381
/* 4373 */    MCD::OPC_CheckPredicate, 6, 226, 34, // Skip to: 13307
/* 4377 */    MCD::OPC_Decode, 224, 2, 109, // Opcode: CLEI_U_D
/* 4381 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 4393
/* 4385 */    MCD::OPC_CheckPredicate, 6, 214, 34, // Skip to: 13307
/* 4389 */    MCD::OPC_Decode, 137, 7, 110, // Opcode: LDI_B
/* 4393 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 4405
/* 4397 */    MCD::OPC_CheckPredicate, 6, 202, 34, // Skip to: 13307
/* 4401 */    MCD::OPC_Decode, 139, 7, 111, // Opcode: LDI_H
/* 4405 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 4417
/* 4409 */    MCD::OPC_CheckPredicate, 6, 190, 34, // Skip to: 13307
/* 4413 */    MCD::OPC_Decode, 140, 7, 112, // Opcode: LDI_W
/* 4417 */    MCD::OPC_FilterValue, 27, 182, 34, // Skip to: 13307
/* 4421 */    MCD::OPC_CheckPredicate, 6, 178, 34, // Skip to: 13307
/* 4425 */    MCD::OPC_Decode, 138, 7, 113, // Opcode: LDI_D
/* 4429 */    MCD::OPC_FilterValue, 9, 35, 2, // Skip to: 4980
/* 4433 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4436 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4448
/* 4440 */    MCD::OPC_CheckPredicate, 6, 159, 34, // Skip to: 13307
/* 4444 */    MCD::OPC_Decode, 167, 11, 114, // Opcode: SLLI_D
/* 4448 */    MCD::OPC_FilterValue, 1, 52, 0, // Skip to: 4504
/* 4452 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4455 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4467
/* 4459 */    MCD::OPC_CheckPredicate, 6, 140, 34, // Skip to: 13307
/* 4463 */    MCD::OPC_Decode, 169, 11, 108, // Opcode: SLLI_W
/* 4467 */    MCD::OPC_FilterValue, 1, 132, 34, // Skip to: 13307
/* 4471 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4474 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4486
/* 4478 */    MCD::OPC_CheckPredicate, 6, 121, 34, // Skip to: 13307
/* 4482 */    MCD::OPC_Decode, 168, 11, 115, // Opcode: SLLI_H
/* 4486 */    MCD::OPC_FilterValue, 1, 113, 34, // Skip to: 13307
/* 4490 */    MCD::OPC_CheckPredicate, 6, 109, 34, // Skip to: 13307
/* 4494 */    MCD::OPC_CheckField, 19, 1, 0, 103, 34, // Skip to: 13307
/* 4500 */    MCD::OPC_Decode, 166, 11, 116, // Opcode: SLLI_B
/* 4504 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4516
/* 4508 */    MCD::OPC_CheckPredicate, 6, 91, 34, // Skip to: 13307
/* 4512 */    MCD::OPC_Decode, 206, 11, 114, // Opcode: SRAI_D
/* 4516 */    MCD::OPC_FilterValue, 3, 52, 0, // Skip to: 4572
/* 4520 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4523 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4535
/* 4527 */    MCD::OPC_CheckPredicate, 6, 72, 34, // Skip to: 13307
/* 4531 */    MCD::OPC_Decode, 208, 11, 108, // Opcode: SRAI_W
/* 4535 */    MCD::OPC_FilterValue, 1, 64, 34, // Skip to: 13307
/* 4539 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4542 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4554
/* 4546 */    MCD::OPC_CheckPredicate, 6, 53, 34, // Skip to: 13307
/* 4550 */    MCD::OPC_Decode, 207, 11, 115, // Opcode: SRAI_H
/* 4554 */    MCD::OPC_FilterValue, 1, 45, 34, // Skip to: 13307
/* 4558 */    MCD::OPC_CheckPredicate, 6, 41, 34, // Skip to: 13307
/* 4562 */    MCD::OPC_CheckField, 19, 1, 0, 35, 34, // Skip to: 13307
/* 4568 */    MCD::OPC_Decode, 205, 11, 116, // Opcode: SRAI_B
/* 4572 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4584
/* 4576 */    MCD::OPC_CheckPredicate, 6, 23, 34, // Skip to: 13307
/* 4580 */    MCD::OPC_Decode, 227, 11, 114, // Opcode: SRLI_D
/* 4584 */    MCD::OPC_FilterValue, 5, 52, 0, // Skip to: 4640
/* 4588 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4591 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4603
/* 4595 */    MCD::OPC_CheckPredicate, 6, 4, 34, // Skip to: 13307
/* 4599 */    MCD::OPC_Decode, 229, 11, 108, // Opcode: SRLI_W
/* 4603 */    MCD::OPC_FilterValue, 1, 252, 33, // Skip to: 13307
/* 4607 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4610 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4622
/* 4614 */    MCD::OPC_CheckPredicate, 6, 241, 33, // Skip to: 13307
/* 4618 */    MCD::OPC_Decode, 228, 11, 115, // Opcode: SRLI_H
/* 4622 */    MCD::OPC_FilterValue, 1, 233, 33, // Skip to: 13307
/* 4626 */    MCD::OPC_CheckPredicate, 6, 229, 33, // Skip to: 13307
/* 4630 */    MCD::OPC_CheckField, 19, 1, 0, 223, 33, // Skip to: 13307
/* 4636 */    MCD::OPC_Decode, 226, 11, 116, // Opcode: SRLI_B
/* 4640 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4652
/* 4644 */    MCD::OPC_CheckPredicate, 6, 211, 33, // Skip to: 13307
/* 4648 */    MCD::OPC_Decode, 178, 1, 114, // Opcode: BCLRI_D
/* 4652 */    MCD::OPC_FilterValue, 7, 52, 0, // Skip to: 4708
/* 4656 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4659 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4671
/* 4663 */    MCD::OPC_CheckPredicate, 6, 192, 33, // Skip to: 13307
/* 4667 */    MCD::OPC_Decode, 180, 1, 108, // Opcode: BCLRI_W
/* 4671 */    MCD::OPC_FilterValue, 1, 184, 33, // Skip to: 13307
/* 4675 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4678 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4690
/* 4682 */    MCD::OPC_CheckPredicate, 6, 173, 33, // Skip to: 13307
/* 4686 */    MCD::OPC_Decode, 179, 1, 115, // Opcode: BCLRI_H
/* 4690 */    MCD::OPC_FilterValue, 1, 165, 33, // Skip to: 13307
/* 4694 */    MCD::OPC_CheckPredicate, 6, 161, 33, // Skip to: 13307
/* 4698 */    MCD::OPC_CheckField, 19, 1, 0, 155, 33, // Skip to: 13307
/* 4704 */    MCD::OPC_Decode, 177, 1, 116, // Opcode: BCLRI_B
/* 4708 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4720
/* 4712 */    MCD::OPC_CheckPredicate, 6, 143, 33, // Skip to: 13307
/* 4716 */    MCD::OPC_Decode, 158, 2, 114, // Opcode: BSETI_D
/* 4720 */    MCD::OPC_FilterValue, 9, 52, 0, // Skip to: 4776
/* 4724 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4727 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4739
/* 4731 */    MCD::OPC_CheckPredicate, 6, 124, 33, // Skip to: 13307
/* 4735 */    MCD::OPC_Decode, 160, 2, 108, // Opcode: BSETI_W
/* 4739 */    MCD::OPC_FilterValue, 1, 116, 33, // Skip to: 13307
/* 4743 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4746 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4758
/* 4750 */    MCD::OPC_CheckPredicate, 6, 105, 33, // Skip to: 13307
/* 4754 */    MCD::OPC_Decode, 159, 2, 115, // Opcode: BSETI_H
/* 4758 */    MCD::OPC_FilterValue, 1, 97, 33, // Skip to: 13307
/* 4762 */    MCD::OPC_CheckPredicate, 6, 93, 33, // Skip to: 13307
/* 4766 */    MCD::OPC_CheckField, 19, 1, 0, 87, 33, // Skip to: 13307
/* 4772 */    MCD::OPC_Decode, 157, 2, 116, // Opcode: BSETI_B
/* 4776 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 4788
/* 4780 */    MCD::OPC_CheckPredicate, 6, 75, 33, // Skip to: 13307
/* 4784 */    MCD::OPC_Decode, 255, 1, 114, // Opcode: BNEGI_D
/* 4788 */    MCD::OPC_FilterValue, 11, 52, 0, // Skip to: 4844
/* 4792 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4795 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4807
/* 4799 */    MCD::OPC_CheckPredicate, 6, 56, 33, // Skip to: 13307
/* 4803 */    MCD::OPC_Decode, 129, 2, 108, // Opcode: BNEGI_W
/* 4807 */    MCD::OPC_FilterValue, 1, 48, 33, // Skip to: 13307
/* 4811 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4814 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4826
/* 4818 */    MCD::OPC_CheckPredicate, 6, 37, 33, // Skip to: 13307
/* 4822 */    MCD::OPC_Decode, 128, 2, 115, // Opcode: BNEGI_H
/* 4826 */    MCD::OPC_FilterValue, 1, 29, 33, // Skip to: 13307
/* 4830 */    MCD::OPC_CheckPredicate, 6, 25, 33, // Skip to: 13307
/* 4834 */    MCD::OPC_CheckField, 19, 1, 0, 19, 33, // Skip to: 13307
/* 4840 */    MCD::OPC_Decode, 254, 1, 116, // Opcode: BNEGI_B
/* 4844 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4856
/* 4848 */    MCD::OPC_CheckPredicate, 6, 7, 33, // Skip to: 13307
/* 4852 */    MCD::OPC_Decode, 212, 1, 117, // Opcode: BINSLI_D
/* 4856 */    MCD::OPC_FilterValue, 13, 52, 0, // Skip to: 4912
/* 4860 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4863 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4875
/* 4867 */    MCD::OPC_CheckPredicate, 6, 244, 32, // Skip to: 13307
/* 4871 */    MCD::OPC_Decode, 214, 1, 118, // Opcode: BINSLI_W
/* 4875 */    MCD::OPC_FilterValue, 1, 236, 32, // Skip to: 13307
/* 4879 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4882 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4894
/* 4886 */    MCD::OPC_CheckPredicate, 6, 225, 32, // Skip to: 13307
/* 4890 */    MCD::OPC_Decode, 213, 1, 119, // Opcode: BINSLI_H
/* 4894 */    MCD::OPC_FilterValue, 1, 217, 32, // Skip to: 13307
/* 4898 */    MCD::OPC_CheckPredicate, 6, 213, 32, // Skip to: 13307
/* 4902 */    MCD::OPC_CheckField, 19, 1, 0, 207, 32, // Skip to: 13307
/* 4908 */    MCD::OPC_Decode, 211, 1, 120, // Opcode: BINSLI_B
/* 4912 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4924
/* 4916 */    MCD::OPC_CheckPredicate, 6, 195, 32, // Skip to: 13307
/* 4920 */    MCD::OPC_Decode, 220, 1, 117, // Opcode: BINSRI_D
/* 4924 */    MCD::OPC_FilterValue, 15, 187, 32, // Skip to: 13307
/* 4928 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4931 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4943
/* 4935 */    MCD::OPC_CheckPredicate, 6, 176, 32, // Skip to: 13307
/* 4939 */    MCD::OPC_Decode, 222, 1, 118, // Opcode: BINSRI_W
/* 4943 */    MCD::OPC_FilterValue, 1, 168, 32, // Skip to: 13307
/* 4947 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4950 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4962
/* 4954 */    MCD::OPC_CheckPredicate, 6, 157, 32, // Skip to: 13307
/* 4958 */    MCD::OPC_Decode, 221, 1, 119, // Opcode: BINSRI_H
/* 4962 */    MCD::OPC_FilterValue, 1, 149, 32, // Skip to: 13307
/* 4966 */    MCD::OPC_CheckPredicate, 6, 145, 32, // Skip to: 13307
/* 4970 */    MCD::OPC_CheckField, 19, 1, 0, 139, 32, // Skip to: 13307
/* 4976 */    MCD::OPC_Decode, 219, 1, 120, // Opcode: BINSRI_B
/* 4980 */    MCD::OPC_FilterValue, 10, 19, 1, // Skip to: 5259
/* 4984 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4987 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4999
/* 4991 */    MCD::OPC_CheckPredicate, 6, 120, 32, // Skip to: 13307
/* 4995 */    MCD::OPC_Decode, 204, 10, 114, // Opcode: SAT_S_D
/* 4999 */    MCD::OPC_FilterValue, 1, 52, 0, // Skip to: 5055
/* 5003 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5006 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5018
/* 5010 */    MCD::OPC_CheckPredicate, 6, 101, 32, // Skip to: 13307
/* 5014 */    MCD::OPC_Decode, 206, 10, 108, // Opcode: SAT_S_W
/* 5018 */    MCD::OPC_FilterValue, 1, 93, 32, // Skip to: 13307
/* 5022 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5025 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5037
/* 5029 */    MCD::OPC_CheckPredicate, 6, 82, 32, // Skip to: 13307
/* 5033 */    MCD::OPC_Decode, 205, 10, 115, // Opcode: SAT_S_H
/* 5037 */    MCD::OPC_FilterValue, 1, 74, 32, // Skip to: 13307
/* 5041 */    MCD::OPC_CheckPredicate, 6, 70, 32, // Skip to: 13307
/* 5045 */    MCD::OPC_CheckField, 19, 1, 0, 64, 32, // Skip to: 13307
/* 5051 */    MCD::OPC_Decode, 203, 10, 116, // Opcode: SAT_S_B
/* 5055 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 5067
/* 5059 */    MCD::OPC_CheckPredicate, 6, 52, 32, // Skip to: 13307
/* 5063 */    MCD::OPC_Decode, 208, 10, 114, // Opcode: SAT_U_D
/* 5067 */    MCD::OPC_FilterValue, 3, 52, 0, // Skip to: 5123
/* 5071 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5074 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5086
/* 5078 */    MCD::OPC_CheckPredicate, 6, 33, 32, // Skip to: 13307
/* 5082 */    MCD::OPC_Decode, 210, 10, 108, // Opcode: SAT_U_W
/* 5086 */    MCD::OPC_FilterValue, 1, 25, 32, // Skip to: 13307
/* 5090 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5093 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5105
/* 5097 */    MCD::OPC_CheckPredicate, 6, 14, 32, // Skip to: 13307
/* 5101 */    MCD::OPC_Decode, 209, 10, 115, // Opcode: SAT_U_H
/* 5105 */    MCD::OPC_FilterValue, 1, 6, 32, // Skip to: 13307
/* 5109 */    MCD::OPC_CheckPredicate, 6, 2, 32, // Skip to: 13307
/* 5113 */    MCD::OPC_CheckField, 19, 1, 0, 252, 31, // Skip to: 13307
/* 5119 */    MCD::OPC_Decode, 207, 10, 116, // Opcode: SAT_U_B
/* 5123 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 5135
/* 5127 */    MCD::OPC_CheckPredicate, 6, 240, 31, // Skip to: 13307
/* 5131 */    MCD::OPC_Decode, 210, 11, 114, // Opcode: SRARI_D
/* 5135 */    MCD::OPC_FilterValue, 5, 52, 0, // Skip to: 5191
/* 5139 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5142 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5154
/* 5146 */    MCD::OPC_CheckPredicate, 6, 221, 31, // Skip to: 13307
/* 5150 */    MCD::OPC_Decode, 212, 11, 108, // Opcode: SRARI_W
/* 5154 */    MCD::OPC_FilterValue, 1, 213, 31, // Skip to: 13307
/* 5158 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5161 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5173
/* 5165 */    MCD::OPC_CheckPredicate, 6, 202, 31, // Skip to: 13307
/* 5169 */    MCD::OPC_Decode, 211, 11, 115, // Opcode: SRARI_H
/* 5173 */    MCD::OPC_FilterValue, 1, 194, 31, // Skip to: 13307
/* 5177 */    MCD::OPC_CheckPredicate, 6, 190, 31, // Skip to: 13307
/* 5181 */    MCD::OPC_CheckField, 19, 1, 0, 184, 31, // Skip to: 13307
/* 5187 */    MCD::OPC_Decode, 209, 11, 116, // Opcode: SRARI_B
/* 5191 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 5203
/* 5195 */    MCD::OPC_CheckPredicate, 6, 172, 31, // Skip to: 13307
/* 5199 */    MCD::OPC_Decode, 231, 11, 114, // Opcode: SRLRI_D
/* 5203 */    MCD::OPC_FilterValue, 7, 164, 31, // Skip to: 13307
/* 5207 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5210 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5222
/* 5214 */    MCD::OPC_CheckPredicate, 6, 153, 31, // Skip to: 13307
/* 5218 */    MCD::OPC_Decode, 233, 11, 108, // Opcode: SRLRI_W
/* 5222 */    MCD::OPC_FilterValue, 1, 145, 31, // Skip to: 13307
/* 5226 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5229 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5241
/* 5233 */    MCD::OPC_CheckPredicate, 6, 134, 31, // Skip to: 13307
/* 5237 */    MCD::OPC_Decode, 232, 11, 115, // Opcode: SRLRI_H
/* 5241 */    MCD::OPC_FilterValue, 1, 126, 31, // Skip to: 13307
/* 5245 */    MCD::OPC_CheckPredicate, 6, 122, 31, // Skip to: 13307
/* 5249 */    MCD::OPC_CheckField, 19, 1, 0, 116, 31, // Skip to: 13307
/* 5255 */    MCD::OPC_Decode, 230, 11, 116, // Opcode: SRLRI_B
/* 5259 */    MCD::OPC_FilterValue, 13, 133, 1, // Skip to: 5652
/* 5263 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5266 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5278
/* 5270 */    MCD::OPC_CheckPredicate, 6, 97, 31, // Skip to: 13307
/* 5274 */    MCD::OPC_Decode, 172, 11, 121, // Opcode: SLL_B
/* 5278 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 5290
/* 5282 */    MCD::OPC_CheckPredicate, 6, 85, 31, // Skip to: 13307
/* 5286 */    MCD::OPC_Decode, 174, 11, 122, // Opcode: SLL_H
/* 5290 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 5302
/* 5294 */    MCD::OPC_CheckPredicate, 6, 73, 31, // Skip to: 13307
/* 5298 */    MCD::OPC_Decode, 176, 11, 123, // Opcode: SLL_W
/* 5302 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 5314
/* 5306 */    MCD::OPC_CheckPredicate, 6, 61, 31, // Skip to: 13307
/* 5310 */    MCD::OPC_Decode, 173, 11, 124, // Opcode: SLL_D
/* 5314 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 5326
/* 5318 */    MCD::OPC_CheckPredicate, 6, 49, 31, // Skip to: 13307
/* 5322 */    MCD::OPC_Decode, 219, 11, 121, // Opcode: SRA_B
/* 5326 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 5338
/* 5330 */    MCD::OPC_CheckPredicate, 6, 37, 31, // Skip to: 13307
/* 5334 */    MCD::OPC_Decode, 221, 11, 122, // Opcode: SRA_H
/* 5338 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 5350
/* 5342 */    MCD::OPC_CheckPredicate, 6, 25, 31, // Skip to: 13307
/* 5346 */    MCD::OPC_Decode, 223, 11, 123, // Opcode: SRA_W
/* 5350 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 5362
/* 5354 */    MCD::OPC_CheckPredicate, 6, 13, 31, // Skip to: 13307
/* 5358 */    MCD::OPC_Decode, 220, 11, 124, // Opcode: SRA_D
/* 5362 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 5374
/* 5366 */    MCD::OPC_CheckPredicate, 6, 1, 31, // Skip to: 13307
/* 5370 */    MCD::OPC_Decode, 240, 11, 121, // Opcode: SRL_B
/* 5374 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 5386
/* 5378 */    MCD::OPC_CheckPredicate, 6, 245, 30, // Skip to: 13307
/* 5382 */    MCD::OPC_Decode, 242, 11, 122, // Opcode: SRL_H
/* 5386 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 5398
/* 5390 */    MCD::OPC_CheckPredicate, 6, 233, 30, // Skip to: 13307
/* 5394 */    MCD::OPC_Decode, 244, 11, 123, // Opcode: SRL_W
/* 5398 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 5410
/* 5402 */    MCD::OPC_CheckPredicate, 6, 221, 30, // Skip to: 13307
/* 5406 */    MCD::OPC_Decode, 241, 11, 124, // Opcode: SRL_D
/* 5410 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 5422
/* 5414 */    MCD::OPC_CheckPredicate, 6, 209, 30, // Skip to: 13307
/* 5418 */    MCD::OPC_Decode, 181, 1, 121, // Opcode: BCLR_B
/* 5422 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 5434
/* 5426 */    MCD::OPC_CheckPredicate, 6, 197, 30, // Skip to: 13307
/* 5430 */    MCD::OPC_Decode, 183, 1, 122, // Opcode: BCLR_H
/* 5434 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 5446
/* 5438 */    MCD::OPC_CheckPredicate, 6, 185, 30, // Skip to: 13307
/* 5442 */    MCD::OPC_Decode, 184, 1, 123, // Opcode: BCLR_W
/* 5446 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 5458
/* 5450 */    MCD::OPC_CheckPredicate, 6, 173, 30, // Skip to: 13307
/* 5454 */    MCD::OPC_Decode, 182, 1, 124, // Opcode: BCLR_D
/* 5458 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 5470
/* 5462 */    MCD::OPC_CheckPredicate, 6, 161, 30, // Skip to: 13307
/* 5466 */    MCD::OPC_Decode, 161, 2, 121, // Opcode: BSET_B
/* 5470 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 5482
/* 5474 */    MCD::OPC_CheckPredicate, 6, 149, 30, // Skip to: 13307
/* 5478 */    MCD::OPC_Decode, 163, 2, 122, // Opcode: BSET_H
/* 5482 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5494
/* 5486 */    MCD::OPC_CheckPredicate, 6, 137, 30, // Skip to: 13307
/* 5490 */    MCD::OPC_Decode, 164, 2, 123, // Opcode: BSET_W
/* 5494 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5506
/* 5498 */    MCD::OPC_CheckPredicate, 6, 125, 30, // Skip to: 13307
/* 5502 */    MCD::OPC_Decode, 162, 2, 124, // Opcode: BSET_D
/* 5506 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 5518
/* 5510 */    MCD::OPC_CheckPredicate, 6, 113, 30, // Skip to: 13307
/* 5514 */    MCD::OPC_Decode, 130, 2, 121, // Opcode: BNEG_B
/* 5518 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 5530
/* 5522 */    MCD::OPC_CheckPredicate, 6, 101, 30, // Skip to: 13307
/* 5526 */    MCD::OPC_Decode, 132, 2, 122, // Opcode: BNEG_H
/* 5530 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 5542
/* 5534 */    MCD::OPC_CheckPredicate, 6, 89, 30, // Skip to: 13307
/* 5538 */    MCD::OPC_Decode, 133, 2, 123, // Opcode: BNEG_W
/* 5542 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 5554
/* 5546 */    MCD::OPC_CheckPredicate, 6, 77, 30, // Skip to: 13307
/* 5550 */    MCD::OPC_Decode, 131, 2, 124, // Opcode: BNEG_D
/* 5554 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 5566
/* 5558 */    MCD::OPC_CheckPredicate, 6, 65, 30, // Skip to: 13307
/* 5562 */    MCD::OPC_Decode, 215, 1, 125, // Opcode: BINSL_B
/* 5566 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 5578
/* 5570 */    MCD::OPC_CheckPredicate, 6, 53, 30, // Skip to: 13307
/* 5574 */    MCD::OPC_Decode, 217, 1, 126, // Opcode: BINSL_H
/* 5578 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 5590
/* 5582 */    MCD::OPC_CheckPredicate, 6, 41, 30, // Skip to: 13307
/* 5586 */    MCD::OPC_Decode, 218, 1, 127, // Opcode: BINSL_W
/* 5590 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 5603
/* 5594 */    MCD::OPC_CheckPredicate, 6, 29, 30, // Skip to: 13307
/* 5598 */    MCD::OPC_Decode, 216, 1, 128, 1, // Opcode: BINSL_D
/* 5603 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 5615
/* 5607 */    MCD::OPC_CheckPredicate, 6, 16, 30, // Skip to: 13307
/* 5611 */    MCD::OPC_Decode, 223, 1, 125, // Opcode: BINSR_B
/* 5615 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 5627
/* 5619 */    MCD::OPC_CheckPredicate, 6, 4, 30, // Skip to: 13307
/* 5623 */    MCD::OPC_Decode, 225, 1, 126, // Opcode: BINSR_H
/* 5627 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 5639
/* 5631 */    MCD::OPC_CheckPredicate, 6, 248, 29, // Skip to: 13307
/* 5635 */    MCD::OPC_Decode, 226, 1, 127, // Opcode: BINSR_W
/* 5639 */    MCD::OPC_FilterValue, 31, 240, 29, // Skip to: 13307
/* 5643 */    MCD::OPC_CheckPredicate, 6, 236, 29, // Skip to: 13307
/* 5647 */    MCD::OPC_Decode, 224, 1, 128, 1, // Opcode: BINSR_D
/* 5652 */    MCD::OPC_FilterValue, 14, 127, 1, // Skip to: 6039
/* 5656 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5659 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 5670
/* 5663 */    MCD::OPC_CheckPredicate, 6, 216, 29, // Skip to: 13307
/* 5667 */    MCD::OPC_Decode, 60, 121, // Opcode: ADDV_B
/* 5670 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 5681
/* 5674 */    MCD::OPC_CheckPredicate, 6, 205, 29, // Skip to: 13307
/* 5678 */    MCD::OPC_Decode, 62, 122, // Opcode: ADDV_H
/* 5681 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 5692
/* 5685 */    MCD::OPC_CheckPredicate, 6, 194, 29, // Skip to: 13307
/* 5689 */    MCD::OPC_Decode, 63, 123, // Opcode: ADDV_W
/* 5692 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 5703
/* 5696 */    MCD::OPC_CheckPredicate, 6, 183, 29, // Skip to: 13307
/* 5700 */    MCD::OPC_Decode, 61, 124, // Opcode: ADDV_D
/* 5703 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 5715
/* 5707 */    MCD::OPC_CheckPredicate, 6, 172, 29, // Skip to: 13307
/* 5711 */    MCD::OPC_Decode, 161, 12, 121, // Opcode: SUBV_B
/* 5715 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 5727
/* 5719 */    MCD::OPC_CheckPredicate, 6, 160, 29, // Skip to: 13307
/* 5723 */    MCD::OPC_Decode, 163, 12, 122, // Opcode: SUBV_H
/* 5727 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 5739
/* 5731 */    MCD::OPC_CheckPredicate, 6, 148, 29, // Skip to: 13307
/* 5735 */    MCD::OPC_Decode, 164, 12, 123, // Opcode: SUBV_W
/* 5739 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 5751
/* 5743 */    MCD::OPC_CheckPredicate, 6, 136, 29, // Skip to: 13307
/* 5747 */    MCD::OPC_Decode, 162, 12, 124, // Opcode: SUBV_D
/* 5751 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 5763
/* 5755 */    MCD::OPC_CheckPredicate, 6, 124, 29, // Skip to: 13307
/* 5759 */    MCD::OPC_Decode, 131, 8, 121, // Opcode: MAX_S_B
/* 5763 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 5775
/* 5767 */    MCD::OPC_CheckPredicate, 6, 112, 29, // Skip to: 13307
/* 5771 */    MCD::OPC_Decode, 133, 8, 122, // Opcode: MAX_S_H
/* 5775 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 5787
/* 5779 */    MCD::OPC_CheckPredicate, 6, 100, 29, // Skip to: 13307
/* 5783 */    MCD::OPC_Decode, 134, 8, 123, // Opcode: MAX_S_W
/* 5787 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 5799
/* 5791 */    MCD::OPC_CheckPredicate, 6, 88, 29, // Skip to: 13307
/* 5795 */    MCD::OPC_Decode, 132, 8, 124, // Opcode: MAX_S_D
/* 5799 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 5811
/* 5803 */    MCD::OPC_CheckPredicate, 6, 76, 29, // Skip to: 13307
/* 5807 */    MCD::OPC_Decode, 135, 8, 121, // Opcode: MAX_U_B
/* 5811 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 5823
/* 5815 */    MCD::OPC_CheckPredicate, 6, 64, 29, // Skip to: 13307
/* 5819 */    MCD::OPC_Decode, 137, 8, 122, // Opcode: MAX_U_H
/* 5823 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 5835
/* 5827 */    MCD::OPC_CheckPredicate, 6, 52, 29, // Skip to: 13307
/* 5831 */    MCD::OPC_Decode, 138, 8, 123, // Opcode: MAX_U_W
/* 5835 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 5847
/* 5839 */    MCD::OPC_CheckPredicate, 6, 40, 29, // Skip to: 13307
/* 5843 */    MCD::OPC_Decode, 136, 8, 124, // Opcode: MAX_U_D
/* 5847 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 5859
/* 5851 */    MCD::OPC_CheckPredicate, 6, 28, 29, // Skip to: 13307
/* 5855 */    MCD::OPC_Decode, 172, 8, 121, // Opcode: MIN_S_B
/* 5859 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 5871
/* 5863 */    MCD::OPC_CheckPredicate, 6, 16, 29, // Skip to: 13307
/* 5867 */    MCD::OPC_Decode, 174, 8, 122, // Opcode: MIN_S_H
/* 5871 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5883
/* 5875 */    MCD::OPC_CheckPredicate, 6, 4, 29, // Skip to: 13307
/* 5879 */    MCD::OPC_Decode, 175, 8, 123, // Opcode: MIN_S_W
/* 5883 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5895
/* 5887 */    MCD::OPC_CheckPredicate, 6, 248, 28, // Skip to: 13307
/* 5891 */    MCD::OPC_Decode, 173, 8, 124, // Opcode: MIN_S_D
/* 5895 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 5907
/* 5899 */    MCD::OPC_CheckPredicate, 6, 236, 28, // Skip to: 13307
/* 5903 */    MCD::OPC_Decode, 176, 8, 121, // Opcode: MIN_U_B
/* 5907 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 5919
/* 5911 */    MCD::OPC_CheckPredicate, 6, 224, 28, // Skip to: 13307
/* 5915 */    MCD::OPC_Decode, 178, 8, 122, // Opcode: MIN_U_H
/* 5919 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 5931
/* 5923 */    MCD::OPC_CheckPredicate, 6, 212, 28, // Skip to: 13307
/* 5927 */    MCD::OPC_Decode, 179, 8, 123, // Opcode: MIN_U_W
/* 5931 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 5943
/* 5935 */    MCD::OPC_CheckPredicate, 6, 200, 28, // Skip to: 13307
/* 5939 */    MCD::OPC_Decode, 177, 8, 124, // Opcode: MIN_U_D
/* 5943 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 5955
/* 5947 */    MCD::OPC_CheckPredicate, 6, 188, 28, // Skip to: 13307
/* 5951 */    MCD::OPC_Decode, 253, 7, 121, // Opcode: MAX_A_B
/* 5955 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 5967
/* 5959 */    MCD::OPC_CheckPredicate, 6, 176, 28, // Skip to: 13307
/* 5963 */    MCD::OPC_Decode, 255, 7, 122, // Opcode: MAX_A_H
/* 5967 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 5979
/* 5971 */    MCD::OPC_CheckPredicate, 6, 164, 28, // Skip to: 13307
/* 5975 */    MCD::OPC_Decode, 128, 8, 123, // Opcode: MAX_A_W
/* 5979 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 5991
/* 5983 */    MCD::OPC_CheckPredicate, 6, 152, 28, // Skip to: 13307
/* 5987 */    MCD::OPC_Decode, 254, 7, 124, // Opcode: MAX_A_D
/* 5991 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 6003
/* 5995 */    MCD::OPC_CheckPredicate, 6, 140, 28, // Skip to: 13307
/* 5999 */    MCD::OPC_Decode, 166, 8, 121, // Opcode: MIN_A_B
/* 6003 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 6015
/* 6007 */    MCD::OPC_CheckPredicate, 6, 128, 28, // Skip to: 13307
/* 6011 */    MCD::OPC_Decode, 168, 8, 122, // Opcode: MIN_A_H
/* 6015 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 6027
/* 6019 */    MCD::OPC_CheckPredicate, 6, 116, 28, // Skip to: 13307
/* 6023 */    MCD::OPC_Decode, 169, 8, 123, // Opcode: MIN_A_W
/* 6027 */    MCD::OPC_FilterValue, 31, 108, 28, // Skip to: 13307
/* 6031 */    MCD::OPC_CheckPredicate, 6, 104, 28, // Skip to: 13307
/* 6035 */    MCD::OPC_Decode, 167, 8, 124, // Opcode: MIN_A_D
/* 6039 */    MCD::OPC_FilterValue, 15, 243, 0, // Skip to: 6286
/* 6043 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6046 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6058
/* 6050 */    MCD::OPC_CheckPredicate, 6, 85, 28, // Skip to: 13307
/* 6054 */    MCD::OPC_Decode, 208, 2, 121, // Opcode: CEQ_B
/* 6058 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6070
/* 6062 */    MCD::OPC_CheckPredicate, 6, 73, 28, // Skip to: 13307
/* 6066 */    MCD::OPC_Decode, 210, 2, 122, // Opcode: CEQ_H
/* 6070 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6082
/* 6074 */    MCD::OPC_CheckPredicate, 6, 61, 28, // Skip to: 13307
/* 6078 */    MCD::OPC_Decode, 211, 2, 123, // Opcode: CEQ_W
/* 6082 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6094
/* 6086 */    MCD::OPC_CheckPredicate, 6, 49, 28, // Skip to: 13307
/* 6090 */    MCD::OPC_Decode, 209, 2, 124, // Opcode: CEQ_D
/* 6094 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6106
/* 6098 */    MCD::OPC_CheckPredicate, 6, 37, 28, // Skip to: 13307
/* 6102 */    MCD::OPC_Decode, 246, 2, 121, // Opcode: CLT_S_B
/* 6106 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6118
/* 6110 */    MCD::OPC_CheckPredicate, 6, 25, 28, // Skip to: 13307
/* 6114 */    MCD::OPC_Decode, 248, 2, 122, // Opcode: CLT_S_H
/* 6118 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6130
/* 6122 */    MCD::OPC_CheckPredicate, 6, 13, 28, // Skip to: 13307
/* 6126 */    MCD::OPC_Decode, 249, 2, 123, // Opcode: CLT_S_W
/* 6130 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6142
/* 6134 */    MCD::OPC_CheckPredicate, 6, 1, 28, // Skip to: 13307
/* 6138 */    MCD::OPC_Decode, 247, 2, 124, // Opcode: CLT_S_D
/* 6142 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6154
/* 6146 */    MCD::OPC_CheckPredicate, 6, 245, 27, // Skip to: 13307
/* 6150 */    MCD::OPC_Decode, 250, 2, 121, // Opcode: CLT_U_B
/* 6154 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6166
/* 6158 */    MCD::OPC_CheckPredicate, 6, 233, 27, // Skip to: 13307
/* 6162 */    MCD::OPC_Decode, 252, 2, 122, // Opcode: CLT_U_H
/* 6166 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 6178
/* 6170 */    MCD::OPC_CheckPredicate, 6, 221, 27, // Skip to: 13307
/* 6174 */    MCD::OPC_Decode, 253, 2, 123, // Opcode: CLT_U_W
/* 6178 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 6190
/* 6182 */    MCD::OPC_CheckPredicate, 6, 209, 27, // Skip to: 13307
/* 6186 */    MCD::OPC_Decode, 251, 2, 124, // Opcode: CLT_U_D
/* 6190 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 6202
/* 6194 */    MCD::OPC_CheckPredicate, 6, 197, 27, // Skip to: 13307
/* 6198 */    MCD::OPC_Decode, 227, 2, 121, // Opcode: CLE_S_B
/* 6202 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 6214
/* 6206 */    MCD::OPC_CheckPredicate, 6, 185, 27, // Skip to: 13307
/* 6210 */    MCD::OPC_Decode, 229, 2, 122, // Opcode: CLE_S_H
/* 6214 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 6226
/* 6218 */    MCD::OPC_CheckPredicate, 6, 173, 27, // Skip to: 13307
/* 6222 */    MCD::OPC_Decode, 230, 2, 123, // Opcode: CLE_S_W
/* 6226 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 6238
/* 6230 */    MCD::OPC_CheckPredicate, 6, 161, 27, // Skip to: 13307
/* 6234 */    MCD::OPC_Decode, 228, 2, 124, // Opcode: CLE_S_D
/* 6238 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 6250
/* 6242 */    MCD::OPC_CheckPredicate, 6, 149, 27, // Skip to: 13307
/* 6246 */    MCD::OPC_Decode, 231, 2, 121, // Opcode: CLE_U_B
/* 6250 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 6262
/* 6254 */    MCD::OPC_CheckPredicate, 6, 137, 27, // Skip to: 13307
/* 6258 */    MCD::OPC_Decode, 233, 2, 122, // Opcode: CLE_U_H
/* 6262 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 6274
/* 6266 */    MCD::OPC_CheckPredicate, 6, 125, 27, // Skip to: 13307
/* 6270 */    MCD::OPC_Decode, 234, 2, 123, // Opcode: CLE_U_W
/* 6274 */    MCD::OPC_FilterValue, 23, 117, 27, // Skip to: 13307
/* 6278 */    MCD::OPC_CheckPredicate, 6, 113, 27, // Skip to: 13307
/* 6282 */    MCD::OPC_Decode, 232, 2, 124, // Opcode: CLE_U_D
/* 6286 */    MCD::OPC_FilterValue, 16, 115, 1, // Skip to: 6661
/* 6290 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6293 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 6304
/* 6297 */    MCD::OPC_CheckPredicate, 6, 94, 27, // Skip to: 13307
/* 6301 */    MCD::OPC_Decode, 65, 121, // Opcode: ADD_A_B
/* 6304 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 6315
/* 6308 */    MCD::OPC_CheckPredicate, 6, 83, 27, // Skip to: 13307
/* 6312 */    MCD::OPC_Decode, 67, 122, // Opcode: ADD_A_H
/* 6315 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 6326
/* 6319 */    MCD::OPC_CheckPredicate, 6, 72, 27, // Skip to: 13307
/* 6323 */    MCD::OPC_Decode, 68, 123, // Opcode: ADD_A_W
/* 6326 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 6337
/* 6330 */    MCD::OPC_CheckPredicate, 6, 61, 27, // Skip to: 13307
/* 6334 */    MCD::OPC_Decode, 66, 124, // Opcode: ADD_A_D
/* 6337 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 6348
/* 6341 */    MCD::OPC_CheckPredicate, 6, 50, 27, // Skip to: 13307
/* 6345 */    MCD::OPC_Decode, 37, 121, // Opcode: ADDS_A_B
/* 6348 */    MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 6359
/* 6352 */    MCD::OPC_CheckPredicate, 6, 39, 27, // Skip to: 13307
/* 6356 */    MCD::OPC_Decode, 39, 122, // Opcode: ADDS_A_H
/* 6359 */    MCD::OPC_FilterValue, 6, 7, 0, // Skip to: 6370
/* 6363 */    MCD::OPC_CheckPredicate, 6, 28, 27, // Skip to: 13307
/* 6367 */    MCD::OPC_Decode, 40, 123, // Opcode: ADDS_A_W
/* 6370 */    MCD::OPC_FilterValue, 7, 7, 0, // Skip to: 6381
/* 6374 */    MCD::OPC_CheckPredicate, 6, 17, 27, // Skip to: 13307
/* 6378 */    MCD::OPC_Decode, 38, 124, // Opcode: ADDS_A_D
/* 6381 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 6392
/* 6385 */    MCD::OPC_CheckPredicate, 6, 6, 27, // Skip to: 13307
/* 6389 */    MCD::OPC_Decode, 41, 121, // Opcode: ADDS_S_B
/* 6392 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 6403
/* 6396 */    MCD::OPC_CheckPredicate, 6, 251, 26, // Skip to: 13307
/* 6400 */    MCD::OPC_Decode, 43, 122, // Opcode: ADDS_S_H
/* 6403 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 6414
/* 6407 */    MCD::OPC_CheckPredicate, 6, 240, 26, // Skip to: 13307
/* 6411 */    MCD::OPC_Decode, 44, 123, // Opcode: ADDS_S_W
/* 6414 */    MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 6425
/* 6418 */    MCD::OPC_CheckPredicate, 6, 229, 26, // Skip to: 13307
/* 6422 */    MCD::OPC_Decode, 42, 124, // Opcode: ADDS_S_D
/* 6425 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 6436
/* 6429 */    MCD::OPC_CheckPredicate, 6, 218, 26, // Skip to: 13307
/* 6433 */    MCD::OPC_Decode, 45, 121, // Opcode: ADDS_U_B
/* 6436 */    MCD::OPC_FilterValue, 13, 7, 0, // Skip to: 6447
/* 6440 */    MCD::OPC_CheckPredicate, 6, 207, 26, // Skip to: 13307
/* 6444 */    MCD::OPC_Decode, 47, 122, // Opcode: ADDS_U_H
/* 6447 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 6458
/* 6451 */    MCD::OPC_CheckPredicate, 6, 196, 26, // Skip to: 13307
/* 6455 */    MCD::OPC_Decode, 48, 123, // Opcode: ADDS_U_W
/* 6458 */    MCD::OPC_FilterValue, 15, 7, 0, // Skip to: 6469
/* 6462 */    MCD::OPC_CheckPredicate, 6, 185, 26, // Skip to: 13307
/* 6466 */    MCD::OPC_Decode, 46, 124, // Opcode: ADDS_U_D
/* 6469 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 6481
/* 6473 */    MCD::OPC_CheckPredicate, 6, 174, 26, // Skip to: 13307
/* 6477 */    MCD::OPC_Decode, 143, 1, 121, // Opcode: AVE_S_B
/* 6481 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 6493
/* 6485 */    MCD::OPC_CheckPredicate, 6, 162, 26, // Skip to: 13307
/* 6489 */    MCD::OPC_Decode, 145, 1, 122, // Opcode: AVE_S_H
/* 6493 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 6505
/* 6497 */    MCD::OPC_CheckPredicate, 6, 150, 26, // Skip to: 13307
/* 6501 */    MCD::OPC_Decode, 146, 1, 123, // Opcode: AVE_S_W
/* 6505 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 6517
/* 6509 */    MCD::OPC_CheckPredicate, 6, 138, 26, // Skip to: 13307
/* 6513 */    MCD::OPC_Decode, 144, 1, 124, // Opcode: AVE_S_D
/* 6517 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 6529
/* 6521 */    MCD::OPC_CheckPredicate, 6, 126, 26, // Skip to: 13307
/* 6525 */    MCD::OPC_Decode, 147, 1, 121, // Opcode: AVE_U_B
/* 6529 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 6541
/* 6533 */    MCD::OPC_CheckPredicate, 6, 114, 26, // Skip to: 13307
/* 6537 */    MCD::OPC_Decode, 149, 1, 122, // Opcode: AVE_U_H
/* 6541 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 6553
/* 6545 */    MCD::OPC_CheckPredicate, 6, 102, 26, // Skip to: 13307
/* 6549 */    MCD::OPC_Decode, 150, 1, 123, // Opcode: AVE_U_W
/* 6553 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 6565
/* 6557 */    MCD::OPC_CheckPredicate, 6, 90, 26, // Skip to: 13307
/* 6561 */    MCD::OPC_Decode, 148, 1, 124, // Opcode: AVE_U_D
/* 6565 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 6577
/* 6569 */    MCD::OPC_CheckPredicate, 6, 78, 26, // Skip to: 13307
/* 6573 */    MCD::OPC_Decode, 135, 1, 121, // Opcode: AVER_S_B
/* 6577 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 6589
/* 6581 */    MCD::OPC_CheckPredicate, 6, 66, 26, // Skip to: 13307
/* 6585 */    MCD::OPC_Decode, 137, 1, 122, // Opcode: AVER_S_H
/* 6589 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 6601
/* 6593 */    MCD::OPC_CheckPredicate, 6, 54, 26, // Skip to: 13307
/* 6597 */    MCD::OPC_Decode, 138, 1, 123, // Opcode: AVER_S_W
/* 6601 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 6613
/* 6605 */    MCD::OPC_CheckPredicate, 6, 42, 26, // Skip to: 13307
/* 6609 */    MCD::OPC_Decode, 136, 1, 124, // Opcode: AVER_S_D
/* 6613 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 6625
/* 6617 */    MCD::OPC_CheckPredicate, 6, 30, 26, // Skip to: 13307
/* 6621 */    MCD::OPC_Decode, 139, 1, 121, // Opcode: AVER_U_B
/* 6625 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 6637
/* 6629 */    MCD::OPC_CheckPredicate, 6, 18, 26, // Skip to: 13307
/* 6633 */    MCD::OPC_Decode, 141, 1, 122, // Opcode: AVER_U_H
/* 6637 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 6649
/* 6641 */    MCD::OPC_CheckPredicate, 6, 6, 26, // Skip to: 13307
/* 6645 */    MCD::OPC_Decode, 142, 1, 123, // Opcode: AVER_U_W
/* 6649 */    MCD::OPC_FilterValue, 31, 254, 25, // Skip to: 13307
/* 6653 */    MCD::OPC_CheckPredicate, 6, 250, 25, // Skip to: 13307
/* 6657 */    MCD::OPC_Decode, 140, 1, 124, // Opcode: AVER_U_D
/* 6661 */    MCD::OPC_FilterValue, 17, 27, 1, // Skip to: 6948
/* 6665 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6668 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6680
/* 6672 */    MCD::OPC_CheckPredicate, 6, 231, 25, // Skip to: 13307
/* 6676 */    MCD::OPC_Decode, 142, 12, 121, // Opcode: SUBS_S_B
/* 6680 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6692
/* 6684 */    MCD::OPC_CheckPredicate, 6, 219, 25, // Skip to: 13307
/* 6688 */    MCD::OPC_Decode, 144, 12, 122, // Opcode: SUBS_S_H
/* 6692 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6704
/* 6696 */    MCD::OPC_CheckPredicate, 6, 207, 25, // Skip to: 13307
/* 6700 */    MCD::OPC_Decode, 145, 12, 123, // Opcode: SUBS_S_W
/* 6704 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6716
/* 6708 */    MCD::OPC_CheckPredicate, 6, 195, 25, // Skip to: 13307
/* 6712 */    MCD::OPC_Decode, 143, 12, 124, // Opcode: SUBS_S_D
/* 6716 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6728
/* 6720 */    MCD::OPC_CheckPredicate, 6, 183, 25, // Skip to: 13307
/* 6724 */    MCD::OPC_Decode, 146, 12, 121, // Opcode: SUBS_U_B
/* 6728 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6740
/* 6732 */    MCD::OPC_CheckPredicate, 6, 171, 25, // Skip to: 13307
/* 6736 */    MCD::OPC_Decode, 148, 12, 122, // Opcode: SUBS_U_H
/* 6740 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6752
/* 6744 */    MCD::OPC_CheckPredicate, 6, 159, 25, // Skip to: 13307
/* 6748 */    MCD::OPC_Decode, 149, 12, 123, // Opcode: SUBS_U_W
/* 6752 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6764
/* 6756 */    MCD::OPC_CheckPredicate, 6, 147, 25, // Skip to: 13307
/* 6760 */    MCD::OPC_Decode, 147, 12, 124, // Opcode: SUBS_U_D
/* 6764 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6776
/* 6768 */    MCD::OPC_CheckPredicate, 6, 135, 25, // Skip to: 13307
/* 6772 */    MCD::OPC_Decode, 134, 12, 121, // Opcode: SUBSUS_U_B
/* 6776 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6788
/* 6780 */    MCD::OPC_CheckPredicate, 6, 123, 25, // Skip to: 13307
/* 6784 */    MCD::OPC_Decode, 136, 12, 122, // Opcode: SUBSUS_U_H
/* 6788 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6800
/* 6792 */    MCD::OPC_CheckPredicate, 6, 111, 25, // Skip to: 13307
/* 6796 */    MCD::OPC_Decode, 137, 12, 123, // Opcode: SUBSUS_U_W
/* 6800 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6812
/* 6804 */    MCD::OPC_CheckPredicate, 6, 99, 25, // Skip to: 13307
/* 6808 */    MCD::OPC_Decode, 135, 12, 124, // Opcode: SUBSUS_U_D
/* 6812 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6824
/* 6816 */    MCD::OPC_CheckPredicate, 6, 87, 25, // Skip to: 13307
/* 6820 */    MCD::OPC_Decode, 138, 12, 121, // Opcode: SUBSUU_S_B
/* 6824 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6836
/* 6828 */    MCD::OPC_CheckPredicate, 6, 75, 25, // Skip to: 13307
/* 6832 */    MCD::OPC_Decode, 140, 12, 122, // Opcode: SUBSUU_S_H
/* 6836 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 6848
/* 6840 */    MCD::OPC_CheckPredicate, 6, 63, 25, // Skip to: 13307
/* 6844 */    MCD::OPC_Decode, 141, 12, 123, // Opcode: SUBSUU_S_W
/* 6848 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 6860
/* 6852 */    MCD::OPC_CheckPredicate, 6, 51, 25, // Skip to: 13307
/* 6856 */    MCD::OPC_Decode, 139, 12, 124, // Opcode: SUBSUU_S_D
/* 6860 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 6871
/* 6864 */    MCD::OPC_CheckPredicate, 6, 39, 25, // Skip to: 13307
/* 6868 */    MCD::OPC_Decode, 93, 121, // Opcode: ASUB_S_B
/* 6871 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 6882
/* 6875 */    MCD::OPC_CheckPredicate, 6, 28, 25, // Skip to: 13307
/* 6879 */    MCD::OPC_Decode, 95, 122, // Opcode: ASUB_S_H
/* 6882 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 6893
/* 6886 */    MCD::OPC_CheckPredicate, 6, 17, 25, // Skip to: 13307
/* 6890 */    MCD::OPC_Decode, 96, 123, // Opcode: ASUB_S_W
/* 6893 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 6904
/* 6897 */    MCD::OPC_CheckPredicate, 6, 6, 25, // Skip to: 13307
/* 6901 */    MCD::OPC_Decode, 94, 124, // Opcode: ASUB_S_D
/* 6904 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 6915
/* 6908 */    MCD::OPC_CheckPredicate, 6, 251, 24, // Skip to: 13307
/* 6912 */    MCD::OPC_Decode, 97, 121, // Opcode: ASUB_U_B
/* 6915 */    MCD::OPC_FilterValue, 21, 7, 0, // Skip to: 6926
/* 6919 */    MCD::OPC_CheckPredicate, 6, 240, 24, // Skip to: 13307
/* 6923 */    MCD::OPC_Decode, 99, 122, // Opcode: ASUB_U_H
/* 6926 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 6937
/* 6930 */    MCD::OPC_CheckPredicate, 6, 229, 24, // Skip to: 13307
/* 6934 */    MCD::OPC_Decode, 100, 123, // Opcode: ASUB_U_W
/* 6937 */    MCD::OPC_FilterValue, 23, 222, 24, // Skip to: 13307
/* 6941 */    MCD::OPC_CheckPredicate, 6, 218, 24, // Skip to: 13307
/* 6945 */    MCD::OPC_Decode, 98, 124, // Opcode: ASUB_U_D
/* 6948 */    MCD::OPC_FilterValue, 18, 85, 1, // Skip to: 7293
/* 6952 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6955 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6967
/* 6959 */    MCD::OPC_CheckPredicate, 6, 200, 24, // Skip to: 13307
/* 6963 */    MCD::OPC_Decode, 172, 9, 121, // Opcode: MULV_B
/* 6967 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6979
/* 6971 */    MCD::OPC_CheckPredicate, 6, 188, 24, // Skip to: 13307
/* 6975 */    MCD::OPC_Decode, 174, 9, 122, // Opcode: MULV_H
/* 6979 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6991
/* 6983 */    MCD::OPC_CheckPredicate, 6, 176, 24, // Skip to: 13307
/* 6987 */    MCD::OPC_Decode, 175, 9, 123, // Opcode: MULV_W
/* 6991 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 7003
/* 6995 */    MCD::OPC_CheckPredicate, 6, 164, 24, // Skip to: 13307
/* 6999 */    MCD::OPC_Decode, 173, 9, 124, // Opcode: MULV_D
/* 7003 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 7015
/* 7007 */    MCD::OPC_CheckPredicate, 6, 152, 24, // Skip to: 13307
/* 7011 */    MCD::OPC_Decode, 226, 7, 125, // Opcode: MADDV_B
/* 7015 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 7027
/* 7019 */    MCD::OPC_CheckPredicate, 6, 140, 24, // Skip to: 13307
/* 7023 */    MCD::OPC_Decode, 228, 7, 126, // Opcode: MADDV_H
/* 7027 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 7039
/* 7031 */    MCD::OPC_CheckPredicate, 6, 128, 24, // Skip to: 13307
/* 7035 */    MCD::OPC_Decode, 229, 7, 127, // Opcode: MADDV_W
/* 7039 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7052
/* 7043 */    MCD::OPC_CheckPredicate, 6, 116, 24, // Skip to: 13307
/* 7047 */    MCD::OPC_Decode, 227, 7, 128, 1, // Opcode: MADDV_D
/* 7052 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 7064
/* 7056 */    MCD::OPC_CheckPredicate, 6, 103, 24, // Skip to: 13307
/* 7060 */    MCD::OPC_Decode, 243, 8, 125, // Opcode: MSUBV_B
/* 7064 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 7076
/* 7068 */    MCD::OPC_CheckPredicate, 6, 91, 24, // Skip to: 13307
/* 7072 */    MCD::OPC_Decode, 245, 8, 126, // Opcode: MSUBV_H
/* 7076 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 7088
/* 7080 */    MCD::OPC_CheckPredicate, 6, 79, 24, // Skip to: 13307
/* 7084 */    MCD::OPC_Decode, 246, 8, 127, // Opcode: MSUBV_W
/* 7088 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7101
/* 7092 */    MCD::OPC_CheckPredicate, 6, 67, 24, // Skip to: 13307
/* 7096 */    MCD::OPC_Decode, 244, 8, 128, 1, // Opcode: MSUBV_D
/* 7101 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 7113
/* 7105 */    MCD::OPC_CheckPredicate, 6, 54, 24, // Skip to: 13307
/* 7109 */    MCD::OPC_Decode, 159, 4, 121, // Opcode: DIV_S_B
/* 7113 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7125
/* 7117 */    MCD::OPC_CheckPredicate, 6, 42, 24, // Skip to: 13307
/* 7121 */    MCD::OPC_Decode, 161, 4, 122, // Opcode: DIV_S_H
/* 7125 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7137
/* 7129 */    MCD::OPC_CheckPredicate, 6, 30, 24, // Skip to: 13307
/* 7133 */    MCD::OPC_Decode, 162, 4, 123, // Opcode: DIV_S_W
/* 7137 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7149
/* 7141 */    MCD::OPC_CheckPredicate, 6, 18, 24, // Skip to: 13307
/* 7145 */    MCD::OPC_Decode, 160, 4, 124, // Opcode: DIV_S_D
/* 7149 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 7161
/* 7153 */    MCD::OPC_CheckPredicate, 6, 6, 24, // Skip to: 13307
/* 7157 */    MCD::OPC_Decode, 163, 4, 121, // Opcode: DIV_U_B
/* 7161 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7173
/* 7165 */    MCD::OPC_CheckPredicate, 6, 250, 23, // Skip to: 13307
/* 7169 */    MCD::OPC_Decode, 165, 4, 122, // Opcode: DIV_U_H
/* 7173 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7185
/* 7177 */    MCD::OPC_CheckPredicate, 6, 238, 23, // Skip to: 13307
/* 7181 */    MCD::OPC_Decode, 166, 4, 123, // Opcode: DIV_U_W
/* 7185 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 7197
/* 7189 */    MCD::OPC_CheckPredicate, 6, 226, 23, // Skip to: 13307
/* 7193 */    MCD::OPC_Decode, 164, 4, 124, // Opcode: DIV_U_D
/* 7197 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 7209
/* 7201 */    MCD::OPC_CheckPredicate, 6, 214, 23, // Skip to: 13307
/* 7205 */    MCD::OPC_Decode, 185, 8, 121, // Opcode: MOD_S_B
/* 7209 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 7221
/* 7213 */    MCD::OPC_CheckPredicate, 6, 202, 23, // Skip to: 13307
/* 7217 */    MCD::OPC_Decode, 187, 8, 122, // Opcode: MOD_S_H
/* 7221 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 7233
/* 7225 */    MCD::OPC_CheckPredicate, 6, 190, 23, // Skip to: 13307
/* 7229 */    MCD::OPC_Decode, 188, 8, 123, // Opcode: MOD_S_W
/* 7233 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 7245
/* 7237 */    MCD::OPC_CheckPredicate, 6, 178, 23, // Skip to: 13307
/* 7241 */    MCD::OPC_Decode, 186, 8, 124, // Opcode: MOD_S_D
/* 7245 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 7257
/* 7249 */    MCD::OPC_CheckPredicate, 6, 166, 23, // Skip to: 13307
/* 7253 */    MCD::OPC_Decode, 189, 8, 121, // Opcode: MOD_U_B
/* 7257 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 7269
/* 7261 */    MCD::OPC_CheckPredicate, 6, 154, 23, // Skip to: 13307
/* 7265 */    MCD::OPC_Decode, 191, 8, 122, // Opcode: MOD_U_H
/* 7269 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 7281
/* 7273 */    MCD::OPC_CheckPredicate, 6, 142, 23, // Skip to: 13307
/* 7277 */    MCD::OPC_Decode, 192, 8, 123, // Opcode: MOD_U_W
/* 7281 */    MCD::OPC_FilterValue, 31, 134, 23, // Skip to: 13307
/* 7285 */    MCD::OPC_CheckPredicate, 6, 130, 23, // Skip to: 13307
/* 7289 */    MCD::OPC_Decode, 190, 8, 124, // Opcode: MOD_U_D
/* 7293 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 7534
/* 7297 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7300 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7313
/* 7304 */    MCD::OPC_CheckPredicate, 6, 111, 23, // Skip to: 13307
/* 7308 */    MCD::OPC_Decode, 186, 4, 129, 1, // Opcode: DOTP_S_H
/* 7313 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7326
/* 7317 */    MCD::OPC_CheckPredicate, 6, 98, 23, // Skip to: 13307
/* 7321 */    MCD::OPC_Decode, 187, 4, 130, 1, // Opcode: DOTP_S_W
/* 7326 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7339
/* 7330 */    MCD::OPC_CheckPredicate, 6, 85, 23, // Skip to: 13307
/* 7334 */    MCD::OPC_Decode, 185, 4, 131, 1, // Opcode: DOTP_S_D
/* 7339 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7352
/* 7343 */    MCD::OPC_CheckPredicate, 6, 72, 23, // Skip to: 13307
/* 7347 */    MCD::OPC_Decode, 189, 4, 129, 1, // Opcode: DOTP_U_H
/* 7352 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7365
/* 7356 */    MCD::OPC_CheckPredicate, 6, 59, 23, // Skip to: 13307
/* 7360 */    MCD::OPC_Decode, 190, 4, 130, 1, // Opcode: DOTP_U_W
/* 7365 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7378
/* 7369 */    MCD::OPC_CheckPredicate, 6, 46, 23, // Skip to: 13307
/* 7373 */    MCD::OPC_Decode, 188, 4, 131, 1, // Opcode: DOTP_U_D
/* 7378 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7391
/* 7382 */    MCD::OPC_CheckPredicate, 6, 33, 23, // Skip to: 13307
/* 7386 */    MCD::OPC_Decode, 192, 4, 132, 1, // Opcode: DPADD_S_H
/* 7391 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7404
/* 7395 */    MCD::OPC_CheckPredicate, 6, 20, 23, // Skip to: 13307
/* 7399 */    MCD::OPC_Decode, 193, 4, 133, 1, // Opcode: DPADD_S_W
/* 7404 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7417
/* 7408 */    MCD::OPC_CheckPredicate, 6, 7, 23, // Skip to: 13307
/* 7412 */    MCD::OPC_Decode, 191, 4, 134, 1, // Opcode: DPADD_S_D
/* 7417 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7430
/* 7421 */    MCD::OPC_CheckPredicate, 6, 250, 22, // Skip to: 13307
/* 7425 */    MCD::OPC_Decode, 195, 4, 132, 1, // Opcode: DPADD_U_H
/* 7430 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7443
/* 7434 */    MCD::OPC_CheckPredicate, 6, 237, 22, // Skip to: 13307
/* 7438 */    MCD::OPC_Decode, 196, 4, 133, 1, // Opcode: DPADD_U_W
/* 7443 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7456
/* 7447 */    MCD::OPC_CheckPredicate, 6, 224, 22, // Skip to: 13307
/* 7451 */    MCD::OPC_Decode, 194, 4, 134, 1, // Opcode: DPADD_U_D
/* 7456 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7469
/* 7460 */    MCD::OPC_CheckPredicate, 6, 211, 22, // Skip to: 13307
/* 7464 */    MCD::OPC_Decode, 211, 4, 132, 1, // Opcode: DPSUB_S_H
/* 7469 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7482
/* 7473 */    MCD::OPC_CheckPredicate, 6, 198, 22, // Skip to: 13307
/* 7477 */    MCD::OPC_Decode, 212, 4, 133, 1, // Opcode: DPSUB_S_W
/* 7482 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7495
/* 7486 */    MCD::OPC_CheckPredicate, 6, 185, 22, // Skip to: 13307
/* 7490 */    MCD::OPC_Decode, 210, 4, 134, 1, // Opcode: DPSUB_S_D
/* 7495 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7508
/* 7499 */    MCD::OPC_CheckPredicate, 6, 172, 22, // Skip to: 13307
/* 7503 */    MCD::OPC_Decode, 214, 4, 132, 1, // Opcode: DPSUB_U_H
/* 7508 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7521
/* 7512 */    MCD::OPC_CheckPredicate, 6, 159, 22, // Skip to: 13307
/* 7516 */    MCD::OPC_Decode, 215, 4, 133, 1, // Opcode: DPSUB_U_W
/* 7521 */    MCD::OPC_FilterValue, 23, 150, 22, // Skip to: 13307
/* 7525 */    MCD::OPC_CheckPredicate, 6, 146, 22, // Skip to: 13307
/* 7529 */    MCD::OPC_Decode, 213, 4, 134, 1, // Opcode: DPSUB_U_D
/* 7534 */    MCD::OPC_FilterValue, 20, 139, 1, // Skip to: 7933
/* 7538 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7541 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7554
/* 7545 */    MCD::OPC_CheckPredicate, 6, 126, 22, // Skip to: 13307
/* 7549 */    MCD::OPC_Decode, 158, 11, 135, 1, // Opcode: SLD_B
/* 7554 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7567
/* 7558 */    MCD::OPC_CheckPredicate, 6, 113, 22, // Skip to: 13307
/* 7562 */    MCD::OPC_Decode, 160, 11, 136, 1, // Opcode: SLD_H
/* 7567 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7580
/* 7571 */    MCD::OPC_CheckPredicate, 6, 100, 22, // Skip to: 13307
/* 7575 */    MCD::OPC_Decode, 161, 11, 137, 1, // Opcode: SLD_W
/* 7580 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7593
/* 7584 */    MCD::OPC_CheckPredicate, 6, 87, 22, // Skip to: 13307
/* 7588 */    MCD::OPC_Decode, 159, 11, 138, 1, // Opcode: SLD_D
/* 7593 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7606
/* 7597 */    MCD::OPC_CheckPredicate, 6, 74, 22, // Skip to: 13307
/* 7601 */    MCD::OPC_Decode, 200, 11, 139, 1, // Opcode: SPLAT_B
/* 7606 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7619
/* 7610 */    MCD::OPC_CheckPredicate, 6, 61, 22, // Skip to: 13307
/* 7614 */    MCD::OPC_Decode, 202, 11, 140, 1, // Opcode: SPLAT_H
/* 7619 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7632
/* 7623 */    MCD::OPC_CheckPredicate, 6, 48, 22, // Skip to: 13307
/* 7627 */    MCD::OPC_Decode, 203, 11, 141, 1, // Opcode: SPLAT_W
/* 7632 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7645
/* 7636 */    MCD::OPC_CheckPredicate, 6, 35, 22, // Skip to: 13307
/* 7640 */    MCD::OPC_Decode, 201, 11, 142, 1, // Opcode: SPLAT_D
/* 7645 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 7657
/* 7649 */    MCD::OPC_CheckPredicate, 6, 22, 22, // Skip to: 13307
/* 7653 */    MCD::OPC_Decode, 235, 9, 121, // Opcode: PCKEV_B
/* 7657 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 7669
/* 7661 */    MCD::OPC_CheckPredicate, 6, 10, 22, // Skip to: 13307
/* 7665 */    MCD::OPC_Decode, 237, 9, 122, // Opcode: PCKEV_H
/* 7669 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 7681
/* 7673 */    MCD::OPC_CheckPredicate, 6, 254, 21, // Skip to: 13307
/* 7677 */    MCD::OPC_Decode, 238, 9, 123, // Opcode: PCKEV_W
/* 7681 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 7693
/* 7685 */    MCD::OPC_CheckPredicate, 6, 242, 21, // Skip to: 13307
/* 7689 */    MCD::OPC_Decode, 236, 9, 124, // Opcode: PCKEV_D
/* 7693 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 7705
/* 7697 */    MCD::OPC_CheckPredicate, 6, 230, 21, // Skip to: 13307
/* 7701 */    MCD::OPC_Decode, 239, 9, 121, // Opcode: PCKOD_B
/* 7705 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 7717
/* 7709 */    MCD::OPC_CheckPredicate, 6, 218, 21, // Skip to: 13307
/* 7713 */    MCD::OPC_Decode, 241, 9, 122, // Opcode: PCKOD_H
/* 7717 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 7729
/* 7721 */    MCD::OPC_CheckPredicate, 6, 206, 21, // Skip to: 13307
/* 7725 */    MCD::OPC_Decode, 242, 9, 123, // Opcode: PCKOD_W
/* 7729 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 7741
/* 7733 */    MCD::OPC_CheckPredicate, 6, 194, 21, // Skip to: 13307
/* 7737 */    MCD::OPC_Decode, 240, 9, 124, // Opcode: PCKOD_D
/* 7741 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 7753
/* 7745 */    MCD::OPC_CheckPredicate, 6, 182, 21, // Skip to: 13307
/* 7749 */    MCD::OPC_Decode, 189, 6, 121, // Opcode: ILVL_B
/* 7753 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7765
/* 7757 */    MCD::OPC_CheckPredicate, 6, 170, 21, // Skip to: 13307
/* 7761 */    MCD::OPC_Decode, 191, 6, 122, // Opcode: ILVL_H
/* 7765 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7777
/* 7769 */    MCD::OPC_CheckPredicate, 6, 158, 21, // Skip to: 13307
/* 7773 */    MCD::OPC_Decode, 192, 6, 123, // Opcode: ILVL_W
/* 7777 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7789
/* 7781 */    MCD::OPC_CheckPredicate, 6, 146, 21, // Skip to: 13307
/* 7785 */    MCD::OPC_Decode, 190, 6, 124, // Opcode: ILVL_D
/* 7789 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 7801
/* 7793 */    MCD::OPC_CheckPredicate, 6, 134, 21, // Skip to: 13307
/* 7797 */    MCD::OPC_Decode, 197, 6, 121, // Opcode: ILVR_B
/* 7801 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7813
/* 7805 */    MCD::OPC_CheckPredicate, 6, 122, 21, // Skip to: 13307
/* 7809 */    MCD::OPC_Decode, 199, 6, 122, // Opcode: ILVR_H
/* 7813 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7825
/* 7817 */    MCD::OPC_CheckPredicate, 6, 110, 21, // Skip to: 13307
/* 7821 */    MCD::OPC_Decode, 200, 6, 123, // Opcode: ILVR_W
/* 7825 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 7837
/* 7829 */    MCD::OPC_CheckPredicate, 6, 98, 21, // Skip to: 13307
/* 7833 */    MCD::OPC_Decode, 198, 6, 124, // Opcode: ILVR_D
/* 7837 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 7849
/* 7841 */    MCD::OPC_CheckPredicate, 6, 86, 21, // Skip to: 13307
/* 7845 */    MCD::OPC_Decode, 185, 6, 121, // Opcode: ILVEV_B
/* 7849 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 7861
/* 7853 */    MCD::OPC_CheckPredicate, 6, 74, 21, // Skip to: 13307
/* 7857 */    MCD::OPC_Decode, 187, 6, 122, // Opcode: ILVEV_H
/* 7861 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 7873
/* 7865 */    MCD::OPC_CheckPredicate, 6, 62, 21, // Skip to: 13307
/* 7869 */    MCD::OPC_Decode, 188, 6, 123, // Opcode: ILVEV_W
/* 7873 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 7885
/* 7877 */    MCD::OPC_CheckPredicate, 6, 50, 21, // Skip to: 13307
/* 7881 */    MCD::OPC_Decode, 186, 6, 124, // Opcode: ILVEV_D
/* 7885 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 7897
/* 7889 */    MCD::OPC_CheckPredicate, 6, 38, 21, // Skip to: 13307
/* 7893 */    MCD::OPC_Decode, 193, 6, 121, // Opcode: ILVOD_B
/* 7897 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 7909
/* 7901 */    MCD::OPC_CheckPredicate, 6, 26, 21, // Skip to: 13307
/* 7905 */    MCD::OPC_Decode, 195, 6, 122, // Opcode: ILVOD_H
/* 7909 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 7921
/* 7913 */    MCD::OPC_CheckPredicate, 6, 14, 21, // Skip to: 13307
/* 7917 */    MCD::OPC_Decode, 196, 6, 123, // Opcode: ILVOD_W
/* 7921 */    MCD::OPC_FilterValue, 31, 6, 21, // Skip to: 13307
/* 7925 */    MCD::OPC_CheckPredicate, 6, 2, 21, // Skip to: 13307
/* 7929 */    MCD::OPC_Decode, 194, 6, 124, // Opcode: ILVOD_D
/* 7933 */    MCD::OPC_FilterValue, 21, 48, 1, // Skip to: 8241
/* 7937 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7940 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 7952
/* 7944 */    MCD::OPC_CheckPredicate, 6, 239, 20, // Skip to: 13307
/* 7948 */    MCD::OPC_Decode, 156, 13, 125, // Opcode: VSHF_B
/* 7952 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 7964
/* 7956 */    MCD::OPC_CheckPredicate, 6, 227, 20, // Skip to: 13307
/* 7960 */    MCD::OPC_Decode, 158, 13, 126, // Opcode: VSHF_H
/* 7964 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 7976
/* 7968 */    MCD::OPC_CheckPredicate, 6, 215, 20, // Skip to: 13307
/* 7972 */    MCD::OPC_Decode, 159, 13, 127, // Opcode: VSHF_W
/* 7976 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7989
/* 7980 */    MCD::OPC_CheckPredicate, 6, 203, 20, // Skip to: 13307
/* 7984 */    MCD::OPC_Decode, 157, 13, 128, 1, // Opcode: VSHF_D
/* 7989 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 8001
/* 7993 */    MCD::OPC_CheckPredicate, 6, 190, 20, // Skip to: 13307
/* 7997 */    MCD::OPC_Decode, 213, 11, 121, // Opcode: SRAR_B
/* 8001 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 8013
/* 8005 */    MCD::OPC_CheckPredicate, 6, 178, 20, // Skip to: 13307
/* 8009 */    MCD::OPC_Decode, 215, 11, 122, // Opcode: SRAR_H
/* 8013 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 8025
/* 8017 */    MCD::OPC_CheckPredicate, 6, 166, 20, // Skip to: 13307
/* 8021 */    MCD::OPC_Decode, 216, 11, 123, // Opcode: SRAR_W
/* 8025 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 8037
/* 8029 */    MCD::OPC_CheckPredicate, 6, 154, 20, // Skip to: 13307
/* 8033 */    MCD::OPC_Decode, 214, 11, 124, // Opcode: SRAR_D
/* 8037 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 8049
/* 8041 */    MCD::OPC_CheckPredicate, 6, 142, 20, // Skip to: 13307
/* 8045 */    MCD::OPC_Decode, 234, 11, 121, // Opcode: SRLR_B
/* 8049 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 8061
/* 8053 */    MCD::OPC_CheckPredicate, 6, 130, 20, // Skip to: 13307
/* 8057 */    MCD::OPC_Decode, 236, 11, 122, // Opcode: SRLR_H
/* 8061 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 8073
/* 8065 */    MCD::OPC_CheckPredicate, 6, 118, 20, // Skip to: 13307
/* 8069 */    MCD::OPC_Decode, 237, 11, 123, // Opcode: SRLR_W
/* 8073 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 8085
/* 8077 */    MCD::OPC_CheckPredicate, 6, 106, 20, // Skip to: 13307
/* 8081 */    MCD::OPC_Decode, 235, 11, 124, // Opcode: SRLR_D
/* 8085 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8098
/* 8089 */    MCD::OPC_CheckPredicate, 6, 94, 20, // Skip to: 13307
/* 8093 */    MCD::OPC_Decode, 174, 6, 129, 1, // Opcode: HADD_S_H
/* 8098 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8111
/* 8102 */    MCD::OPC_CheckPredicate, 6, 81, 20, // Skip to: 13307
/* 8106 */    MCD::OPC_Decode, 175, 6, 130, 1, // Opcode: HADD_S_W
/* 8111 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8124
/* 8115 */    MCD::OPC_CheckPredicate, 6, 68, 20, // Skip to: 13307
/* 8119 */    MCD::OPC_Decode, 173, 6, 131, 1, // Opcode: HADD_S_D
/* 8124 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8137
/* 8128 */    MCD::OPC_CheckPredicate, 6, 55, 20, // Skip to: 13307
/* 8132 */    MCD::OPC_Decode, 177, 6, 129, 1, // Opcode: HADD_U_H
/* 8137 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8150
/* 8141 */    MCD::OPC_CheckPredicate, 6, 42, 20, // Skip to: 13307
/* 8145 */    MCD::OPC_Decode, 178, 6, 130, 1, // Opcode: HADD_U_W
/* 8150 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8163
/* 8154 */    MCD::OPC_CheckPredicate, 6, 29, 20, // Skip to: 13307
/* 8158 */    MCD::OPC_Decode, 176, 6, 131, 1, // Opcode: HADD_U_D
/* 8163 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8176
/* 8167 */    MCD::OPC_CheckPredicate, 6, 16, 20, // Skip to: 13307
/* 8171 */    MCD::OPC_Decode, 180, 6, 129, 1, // Opcode: HSUB_S_H
/* 8176 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8189
/* 8180 */    MCD::OPC_CheckPredicate, 6, 3, 20, // Skip to: 13307
/* 8184 */    MCD::OPC_Decode, 181, 6, 130, 1, // Opcode: HSUB_S_W
/* 8189 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8202
/* 8193 */    MCD::OPC_CheckPredicate, 6, 246, 19, // Skip to: 13307
/* 8197 */    MCD::OPC_Decode, 179, 6, 131, 1, // Opcode: HSUB_S_D
/* 8202 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8215
/* 8206 */    MCD::OPC_CheckPredicate, 6, 233, 19, // Skip to: 13307
/* 8210 */    MCD::OPC_Decode, 183, 6, 129, 1, // Opcode: HSUB_U_H
/* 8215 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8228
/* 8219 */    MCD::OPC_CheckPredicate, 6, 220, 19, // Skip to: 13307
/* 8223 */    MCD::OPC_Decode, 184, 6, 130, 1, // Opcode: HSUB_U_W
/* 8228 */    MCD::OPC_FilterValue, 31, 211, 19, // Skip to: 13307
/* 8232 */    MCD::OPC_CheckPredicate, 6, 207, 19, // Skip to: 13307
/* 8236 */    MCD::OPC_Decode, 182, 6, 131, 1, // Opcode: HSUB_U_D
/* 8241 */    MCD::OPC_FilterValue, 25, 230, 1, // Skip to: 8731
/* 8245 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 8248 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8261
/* 8252 */    MCD::OPC_CheckPredicate, 6, 187, 19, // Skip to: 13307
/* 8256 */    MCD::OPC_Decode, 154, 11, 143, 1, // Opcode: SLDI_B
/* 8261 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8280
/* 8265 */    MCD::OPC_CheckPredicate, 6, 174, 19, // Skip to: 13307
/* 8269 */    MCD::OPC_CheckField, 19, 1, 0, 168, 19, // Skip to: 13307
/* 8275 */    MCD::OPC_Decode, 156, 11, 144, 1, // Opcode: SLDI_H
/* 8280 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 8338
/* 8284 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8287 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8300
/* 8291 */    MCD::OPC_CheckPredicate, 6, 148, 19, // Skip to: 13307
/* 8295 */    MCD::OPC_Decode, 157, 11, 145, 1, // Opcode: SLDI_W
/* 8300 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8319
/* 8304 */    MCD::OPC_CheckPredicate, 6, 135, 19, // Skip to: 13307
/* 8308 */    MCD::OPC_CheckField, 17, 1, 0, 129, 19, // Skip to: 13307
/* 8314 */    MCD::OPC_Decode, 155, 11, 146, 1, // Opcode: SLDI_D
/* 8319 */    MCD::OPC_FilterValue, 3, 120, 19, // Skip to: 13307
/* 8323 */    MCD::OPC_CheckPredicate, 6, 116, 19, // Skip to: 13307
/* 8327 */    MCD::OPC_CheckField, 16, 2, 2, 110, 19, // Skip to: 13307
/* 8333 */    MCD::OPC_Decode, 186, 3, 147, 1, // Opcode: CTCMSA
/* 8338 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8351
/* 8342 */    MCD::OPC_CheckPredicate, 6, 97, 19, // Skip to: 13307
/* 8346 */    MCD::OPC_Decode, 196, 11, 148, 1, // Opcode: SPLATI_B
/* 8351 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 8370
/* 8355 */    MCD::OPC_CheckPredicate, 6, 84, 19, // Skip to: 13307
/* 8359 */    MCD::OPC_CheckField, 19, 1, 0, 78, 19, // Skip to: 13307
/* 8365 */    MCD::OPC_Decode, 198, 11, 149, 1, // Opcode: SPLATI_H
/* 8370 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 8428
/* 8374 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8377 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8390
/* 8381 */    MCD::OPC_CheckPredicate, 6, 58, 19, // Skip to: 13307
/* 8385 */    MCD::OPC_Decode, 199, 11, 150, 1, // Opcode: SPLATI_W
/* 8390 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8409
/* 8394 */    MCD::OPC_CheckPredicate, 6, 45, 19, // Skip to: 13307
/* 8398 */    MCD::OPC_CheckField, 17, 1, 0, 39, 19, // Skip to: 13307
/* 8404 */    MCD::OPC_Decode, 197, 11, 151, 1, // Opcode: SPLATI_D
/* 8409 */    MCD::OPC_FilterValue, 3, 30, 19, // Skip to: 13307
/* 8413 */    MCD::OPC_CheckPredicate, 6, 26, 19, // Skip to: 13307
/* 8417 */    MCD::OPC_CheckField, 16, 2, 2, 20, 19, // Skip to: 13307
/* 8423 */    MCD::OPC_Decode, 214, 2, 152, 1, // Opcode: CFCMSA
/* 8428 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8441
/* 8432 */    MCD::OPC_CheckPredicate, 6, 7, 19, // Skip to: 13307
/* 8436 */    MCD::OPC_Decode, 176, 3, 153, 1, // Opcode: COPY_S_B
/* 8441 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 8460
/* 8445 */    MCD::OPC_CheckPredicate, 6, 250, 18, // Skip to: 13307
/* 8449 */    MCD::OPC_CheckField, 19, 1, 0, 244, 18, // Skip to: 13307
/* 8455 */    MCD::OPC_Decode, 178, 3, 154, 1, // Opcode: COPY_S_H
/* 8460 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 8518
/* 8464 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8467 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8480
/* 8471 */    MCD::OPC_CheckPredicate, 6, 224, 18, // Skip to: 13307
/* 8475 */    MCD::OPC_Decode, 179, 3, 155, 1, // Opcode: COPY_S_W
/* 8480 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8499
/* 8484 */    MCD::OPC_CheckPredicate, 13, 211, 18, // Skip to: 13307
/* 8488 */    MCD::OPC_CheckField, 17, 1, 0, 205, 18, // Skip to: 13307
/* 8494 */    MCD::OPC_Decode, 177, 3, 156, 1, // Opcode: COPY_S_D
/* 8499 */    MCD::OPC_FilterValue, 3, 196, 18, // Skip to: 13307
/* 8503 */    MCD::OPC_CheckPredicate, 6, 192, 18, // Skip to: 13307
/* 8507 */    MCD::OPC_CheckField, 16, 2, 2, 186, 18, // Skip to: 13307
/* 8513 */    MCD::OPC_Decode, 194, 8, 157, 1, // Opcode: MOVE_V
/* 8518 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8531
/* 8522 */    MCD::OPC_CheckPredicate, 6, 173, 18, // Skip to: 13307
/* 8526 */    MCD::OPC_Decode, 180, 3, 153, 1, // Opcode: COPY_U_B
/* 8531 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 8550
/* 8535 */    MCD::OPC_CheckPredicate, 6, 160, 18, // Skip to: 13307
/* 8539 */    MCD::OPC_CheckField, 19, 1, 0, 154, 18, // Skip to: 13307
/* 8545 */    MCD::OPC_Decode, 182, 3, 154, 1, // Opcode: COPY_U_H
/* 8550 */    MCD::OPC_FilterValue, 15, 35, 0, // Skip to: 8589
/* 8554 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8557 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8570
/* 8561 */    MCD::OPC_CheckPredicate, 6, 134, 18, // Skip to: 13307
/* 8565 */    MCD::OPC_Decode, 183, 3, 155, 1, // Opcode: COPY_U_W
/* 8570 */    MCD::OPC_FilterValue, 2, 125, 18, // Skip to: 13307
/* 8574 */    MCD::OPC_CheckPredicate, 13, 121, 18, // Skip to: 13307
/* 8578 */    MCD::OPC_CheckField, 17, 1, 0, 115, 18, // Skip to: 13307
/* 8584 */    MCD::OPC_Decode, 181, 3, 156, 1, // Opcode: COPY_U_D
/* 8589 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8602
/* 8593 */    MCD::OPC_CheckPredicate, 6, 102, 18, // Skip to: 13307
/* 8597 */    MCD::OPC_Decode, 202, 6, 158, 1, // Opcode: INSERT_B
/* 8602 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 8621
/* 8606 */    MCD::OPC_CheckPredicate, 6, 89, 18, // Skip to: 13307
/* 8610 */    MCD::OPC_CheckField, 19, 1, 0, 83, 18, // Skip to: 13307
/* 8616 */    MCD::OPC_Decode, 210, 6, 159, 1, // Opcode: INSERT_H
/* 8621 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 8660
/* 8625 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8628 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8641
/* 8632 */    MCD::OPC_CheckPredicate, 6, 63, 18, // Skip to: 13307
/* 8636 */    MCD::OPC_Decode, 212, 6, 160, 1, // Opcode: INSERT_W
/* 8641 */    MCD::OPC_FilterValue, 2, 54, 18, // Skip to: 13307
/* 8645 */    MCD::OPC_CheckPredicate, 13, 50, 18, // Skip to: 13307
/* 8649 */    MCD::OPC_CheckField, 17, 1, 0, 44, 18, // Skip to: 13307
/* 8655 */    MCD::OPC_Decode, 204, 6, 161, 1, // Opcode: INSERT_D
/* 8660 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8673
/* 8664 */    MCD::OPC_CheckPredicate, 6, 31, 18, // Skip to: 13307
/* 8668 */    MCD::OPC_Decode, 215, 6, 162, 1, // Opcode: INSVE_B
/* 8673 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 8692
/* 8677 */    MCD::OPC_CheckPredicate, 6, 18, 18, // Skip to: 13307
/* 8681 */    MCD::OPC_CheckField, 19, 1, 0, 12, 18, // Skip to: 13307
/* 8687 */    MCD::OPC_Decode, 217, 6, 162, 1, // Opcode: INSVE_H
/* 8692 */    MCD::OPC_FilterValue, 23, 3, 18, // Skip to: 13307
/* 8696 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8699 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8712
/* 8703 */    MCD::OPC_CheckPredicate, 6, 248, 17, // Skip to: 13307
/* 8707 */    MCD::OPC_Decode, 218, 6, 162, 1, // Opcode: INSVE_W
/* 8712 */    MCD::OPC_FilterValue, 2, 239, 17, // Skip to: 13307
/* 8716 */    MCD::OPC_CheckPredicate, 6, 235, 17, // Skip to: 13307
/* 8720 */    MCD::OPC_CheckField, 17, 1, 0, 229, 17, // Skip to: 13307
/* 8726 */    MCD::OPC_Decode, 216, 6, 162, 1, // Opcode: INSVE_D
/* 8731 */    MCD::OPC_FilterValue, 26, 131, 1, // Skip to: 9122
/* 8735 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8738 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8750
/* 8742 */    MCD::OPC_CheckPredicate, 6, 209, 17, // Skip to: 13307
/* 8746 */    MCD::OPC_Decode, 151, 5, 123, // Opcode: FCAF_W
/* 8750 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 8762
/* 8754 */    MCD::OPC_CheckPredicate, 6, 197, 17, // Skip to: 13307
/* 8758 */    MCD::OPC_Decode, 150, 5, 124, // Opcode: FCAF_D
/* 8762 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 8774
/* 8766 */    MCD::OPC_CheckPredicate, 6, 185, 17, // Skip to: 13307
/* 8770 */    MCD::OPC_Decode, 178, 5, 123, // Opcode: FCUN_W
/* 8774 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 8786
/* 8778 */    MCD::OPC_CheckPredicate, 6, 173, 17, // Skip to: 13307
/* 8782 */    MCD::OPC_Decode, 177, 5, 124, // Opcode: FCUN_D
/* 8786 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 8798
/* 8790 */    MCD::OPC_CheckPredicate, 6, 161, 17, // Skip to: 13307
/* 8794 */    MCD::OPC_Decode, 153, 5, 123, // Opcode: FCEQ_W
/* 8798 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 8810
/* 8802 */    MCD::OPC_CheckPredicate, 6, 149, 17, // Skip to: 13307
/* 8806 */    MCD::OPC_Decode, 152, 5, 124, // Opcode: FCEQ_D
/* 8810 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 8822
/* 8814 */    MCD::OPC_CheckPredicate, 6, 137, 17, // Skip to: 13307
/* 8818 */    MCD::OPC_Decode, 170, 5, 123, // Opcode: FCUEQ_W
/* 8822 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 8834
/* 8826 */    MCD::OPC_CheckPredicate, 6, 125, 17, // Skip to: 13307
/* 8830 */    MCD::OPC_Decode, 169, 5, 124, // Opcode: FCUEQ_D
/* 8834 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 8846
/* 8838 */    MCD::OPC_CheckPredicate, 6, 113, 17, // Skip to: 13307
/* 8842 */    MCD::OPC_Decode, 159, 5, 123, // Opcode: FCLT_W
/* 8846 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 8858
/* 8850 */    MCD::OPC_CheckPredicate, 6, 101, 17, // Skip to: 13307
/* 8854 */    MCD::OPC_Decode, 158, 5, 124, // Opcode: FCLT_D
/* 8858 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 8870
/* 8862 */    MCD::OPC_CheckPredicate, 6, 89, 17, // Skip to: 13307
/* 8866 */    MCD::OPC_Decode, 174, 5, 123, // Opcode: FCULT_W
/* 8870 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 8882
/* 8874 */    MCD::OPC_CheckPredicate, 6, 77, 17, // Skip to: 13307
/* 8878 */    MCD::OPC_Decode, 173, 5, 124, // Opcode: FCULT_D
/* 8882 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 8894
/* 8886 */    MCD::OPC_CheckPredicate, 6, 65, 17, // Skip to: 13307
/* 8890 */    MCD::OPC_Decode, 157, 5, 123, // Opcode: FCLE_W
/* 8894 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 8906
/* 8898 */    MCD::OPC_CheckPredicate, 6, 53, 17, // Skip to: 13307
/* 8902 */    MCD::OPC_Decode, 156, 5, 124, // Opcode: FCLE_D
/* 8906 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 8918
/* 8910 */    MCD::OPC_CheckPredicate, 6, 41, 17, // Skip to: 13307
/* 8914 */    MCD::OPC_Decode, 172, 5, 123, // Opcode: FCULE_W
/* 8918 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 8930
/* 8922 */    MCD::OPC_CheckPredicate, 6, 29, 17, // Skip to: 13307
/* 8926 */    MCD::OPC_Decode, 171, 5, 124, // Opcode: FCULE_D
/* 8930 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 8942
/* 8934 */    MCD::OPC_CheckPredicate, 6, 17, 17, // Skip to: 13307
/* 8938 */    MCD::OPC_Decode, 255, 5, 123, // Opcode: FSAF_W
/* 8942 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 8954
/* 8946 */    MCD::OPC_CheckPredicate, 6, 5, 17, // Skip to: 13307
/* 8950 */    MCD::OPC_Decode, 254, 5, 124, // Opcode: FSAF_D
/* 8954 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 8966
/* 8958 */    MCD::OPC_CheckPredicate, 6, 249, 16, // Skip to: 13307
/* 8962 */    MCD::OPC_Decode, 161, 6, 123, // Opcode: FSUN_W
/* 8966 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 8978
/* 8970 */    MCD::OPC_CheckPredicate, 6, 237, 16, // Skip to: 13307
/* 8974 */    MCD::OPC_Decode, 160, 6, 124, // Opcode: FSUN_D
/* 8978 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 8990
/* 8982 */    MCD::OPC_CheckPredicate, 6, 225, 16, // Skip to: 13307
/* 8986 */    MCD::OPC_Decode, 129, 6, 123, // Opcode: FSEQ_W
/* 8990 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 9002
/* 8994 */    MCD::OPC_CheckPredicate, 6, 213, 16, // Skip to: 13307
/* 8998 */    MCD::OPC_Decode, 128, 6, 124, // Opcode: FSEQ_D
/* 9002 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 9014
/* 9006 */    MCD::OPC_CheckPredicate, 6, 201, 16, // Skip to: 13307
/* 9010 */    MCD::OPC_Decode, 153, 6, 123, // Opcode: FSUEQ_W
/* 9014 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 9026
/* 9018 */    MCD::OPC_CheckPredicate, 6, 189, 16, // Skip to: 13307
/* 9022 */    MCD::OPC_Decode, 152, 6, 124, // Opcode: FSUEQ_D
/* 9026 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 9038
/* 9030 */    MCD::OPC_CheckPredicate, 6, 177, 16, // Skip to: 13307
/* 9034 */    MCD::OPC_Decode, 133, 6, 123, // Opcode: FSLT_W
/* 9038 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 9050
/* 9042 */    MCD::OPC_CheckPredicate, 6, 165, 16, // Skip to: 13307
/* 9046 */    MCD::OPC_Decode, 132, 6, 124, // Opcode: FSLT_D
/* 9050 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 9062
/* 9054 */    MCD::OPC_CheckPredicate, 6, 153, 16, // Skip to: 13307
/* 9058 */    MCD::OPC_Decode, 157, 6, 123, // Opcode: FSULT_W
/* 9062 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 9074
/* 9066 */    MCD::OPC_CheckPredicate, 6, 141, 16, // Skip to: 13307
/* 9070 */    MCD::OPC_Decode, 156, 6, 124, // Opcode: FSULT_D
/* 9074 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 9086
/* 9078 */    MCD::OPC_CheckPredicate, 6, 129, 16, // Skip to: 13307
/* 9082 */    MCD::OPC_Decode, 131, 6, 123, // Opcode: FSLE_W
/* 9086 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 9098
/* 9090 */    MCD::OPC_CheckPredicate, 6, 117, 16, // Skip to: 13307
/* 9094 */    MCD::OPC_Decode, 130, 6, 124, // Opcode: FSLE_D
/* 9098 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 9110
/* 9102 */    MCD::OPC_CheckPredicate, 6, 105, 16, // Skip to: 13307
/* 9106 */    MCD::OPC_Decode, 155, 6, 123, // Opcode: FSULE_W
/* 9110 */    MCD::OPC_FilterValue, 31, 97, 16, // Skip to: 13307
/* 9114 */    MCD::OPC_CheckPredicate, 6, 93, 16, // Skip to: 13307
/* 9118 */    MCD::OPC_Decode, 154, 6, 124, // Opcode: FSULE_D
/* 9122 */    MCD::OPC_FilterValue, 27, 65, 1, // Skip to: 9447
/* 9126 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9129 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 9141
/* 9133 */    MCD::OPC_CheckPredicate, 6, 74, 16, // Skip to: 13307
/* 9137 */    MCD::OPC_Decode, 149, 5, 123, // Opcode: FADD_W
/* 9141 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 9153
/* 9145 */    MCD::OPC_CheckPredicate, 6, 62, 16, // Skip to: 13307
/* 9149 */    MCD::OPC_Decode, 143, 5, 124, // Opcode: FADD_D
/* 9153 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 9165
/* 9157 */    MCD::OPC_CheckPredicate, 6, 50, 16, // Skip to: 13307
/* 9161 */    MCD::OPC_Decode, 151, 6, 123, // Opcode: FSUB_W
/* 9165 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 9177
/* 9169 */    MCD::OPC_CheckPredicate, 6, 38, 16, // Skip to: 13307
/* 9173 */    MCD::OPC_Decode, 145, 6, 124, // Opcode: FSUB_D
/* 9177 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 9189
/* 9181 */    MCD::OPC_CheckPredicate, 6, 26, 16, // Skip to: 13307
/* 9185 */    MCD::OPC_Decode, 242, 5, 123, // Opcode: FMUL_W
/* 9189 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 9201
/* 9193 */    MCD::OPC_CheckPredicate, 6, 14, 16, // Skip to: 13307
/* 9197 */    MCD::OPC_Decode, 236, 5, 124, // Opcode: FMUL_D
/* 9201 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9213
/* 9205 */    MCD::OPC_CheckPredicate, 6, 2, 16, // Skip to: 13307
/* 9209 */    MCD::OPC_Decode, 185, 5, 123, // Opcode: FDIV_W
/* 9213 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 9225
/* 9217 */    MCD::OPC_CheckPredicate, 6, 246, 15, // Skip to: 13307
/* 9221 */    MCD::OPC_Decode, 179, 5, 124, // Opcode: FDIV_D
/* 9225 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 9237
/* 9229 */    MCD::OPC_CheckPredicate, 6, 234, 15, // Skip to: 13307
/* 9233 */    MCD::OPC_Decode, 220, 5, 127, // Opcode: FMADD_W
/* 9237 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9250
/* 9241 */    MCD::OPC_CheckPredicate, 6, 222, 15, // Skip to: 13307
/* 9245 */    MCD::OPC_Decode, 219, 5, 128, 1, // Opcode: FMADD_D
/* 9250 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 9262
/* 9254 */    MCD::OPC_CheckPredicate, 6, 209, 15, // Skip to: 13307
/* 9258 */    MCD::OPC_Decode, 235, 5, 127, // Opcode: FMSUB_W
/* 9262 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9275
/* 9266 */    MCD::OPC_CheckPredicate, 6, 197, 15, // Skip to: 13307
/* 9270 */    MCD::OPC_Decode, 234, 5, 128, 1, // Opcode: FMSUB_D
/* 9275 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 9287
/* 9279 */    MCD::OPC_CheckPredicate, 6, 184, 15, // Skip to: 13307
/* 9283 */    MCD::OPC_Decode, 190, 5, 123, // Opcode: FEXP2_W
/* 9287 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 9299
/* 9291 */    MCD::OPC_CheckPredicate, 6, 172, 15, // Skip to: 13307
/* 9295 */    MCD::OPC_Decode, 188, 5, 124, // Opcode: FEXP2_D
/* 9299 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9312
/* 9303 */    MCD::OPC_CheckPredicate, 6, 160, 15, // Skip to: 13307
/* 9307 */    MCD::OPC_Decode, 186, 5, 163, 1, // Opcode: FEXDO_H
/* 9312 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9325
/* 9316 */    MCD::OPC_CheckPredicate, 6, 147, 15, // Skip to: 13307
/* 9320 */    MCD::OPC_Decode, 187, 5, 164, 1, // Opcode: FEXDO_W
/* 9325 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9338
/* 9329 */    MCD::OPC_CheckPredicate, 6, 134, 15, // Skip to: 13307
/* 9333 */    MCD::OPC_Decode, 166, 6, 163, 1, // Opcode: FTQ_H
/* 9338 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9351
/* 9342 */    MCD::OPC_CheckPredicate, 6, 121, 15, // Skip to: 13307
/* 9346 */    MCD::OPC_Decode, 167, 6, 164, 1, // Opcode: FTQ_W
/* 9351 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 9363
/* 9355 */    MCD::OPC_CheckPredicate, 6, 108, 15, // Skip to: 13307
/* 9359 */    MCD::OPC_Decode, 228, 5, 123, // Opcode: FMIN_W
/* 9363 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 9375
/* 9367 */    MCD::OPC_CheckPredicate, 6, 96, 15, // Skip to: 13307
/* 9371 */    MCD::OPC_Decode, 227, 5, 124, // Opcode: FMIN_D
/* 9375 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 9387
/* 9379 */    MCD::OPC_CheckPredicate, 6, 84, 15, // Skip to: 13307
/* 9383 */    MCD::OPC_Decode, 226, 5, 123, // Opcode: FMIN_A_W
/* 9387 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 9399
/* 9391 */    MCD::OPC_CheckPredicate, 6, 72, 15, // Skip to: 13307
/* 9395 */    MCD::OPC_Decode, 225, 5, 124, // Opcode: FMIN_A_D
/* 9399 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 9411
/* 9403 */    MCD::OPC_CheckPredicate, 6, 60, 15, // Skip to: 13307
/* 9407 */    MCD::OPC_Decode, 224, 5, 123, // Opcode: FMAX_W
/* 9411 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 9423
/* 9415 */    MCD::OPC_CheckPredicate, 6, 48, 15, // Skip to: 13307
/* 9419 */    MCD::OPC_Decode, 223, 5, 124, // Opcode: FMAX_D
/* 9423 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 9435
/* 9427 */    MCD::OPC_CheckPredicate, 6, 36, 15, // Skip to: 13307
/* 9431 */    MCD::OPC_Decode, 222, 5, 123, // Opcode: FMAX_A_W
/* 9435 */    MCD::OPC_FilterValue, 31, 28, 15, // Skip to: 13307
/* 9439 */    MCD::OPC_CheckPredicate, 6, 24, 15, // Skip to: 13307
/* 9443 */    MCD::OPC_Decode, 221, 5, 124, // Opcode: FMAX_A_D
/* 9447 */    MCD::OPC_FilterValue, 28, 35, 1, // Skip to: 9742
/* 9451 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9454 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 9466
/* 9458 */    MCD::OPC_CheckPredicate, 6, 5, 15, // Skip to: 13307
/* 9462 */    MCD::OPC_Decode, 168, 5, 123, // Opcode: FCOR_W
/* 9466 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 9478
/* 9470 */    MCD::OPC_CheckPredicate, 6, 249, 14, // Skip to: 13307
/* 9474 */    MCD::OPC_Decode, 167, 5, 124, // Opcode: FCOR_D
/* 9478 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 9490
/* 9482 */    MCD::OPC_CheckPredicate, 6, 237, 14, // Skip to: 13307
/* 9486 */    MCD::OPC_Decode, 176, 5, 123, // Opcode: FCUNE_W
/* 9490 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 9502
/* 9494 */    MCD::OPC_CheckPredicate, 6, 225, 14, // Skip to: 13307
/* 9498 */    MCD::OPC_Decode, 175, 5, 124, // Opcode: FCUNE_D
/* 9502 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9514
/* 9506 */    MCD::OPC_CheckPredicate, 6, 213, 14, // Skip to: 13307
/* 9510 */    MCD::OPC_Decode, 166, 5, 123, // Opcode: FCNE_W
/* 9514 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 9526
/* 9518 */    MCD::OPC_CheckPredicate, 6, 201, 14, // Skip to: 13307
/* 9522 */    MCD::OPC_Decode, 165, 5, 124, // Opcode: FCNE_D
/* 9526 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 9538
/* 9530 */    MCD::OPC_CheckPredicate, 6, 189, 14, // Skip to: 13307
/* 9534 */    MCD::OPC_Decode, 178, 9, 122, // Opcode: MUL_Q_H
/* 9538 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 9550
/* 9542 */    MCD::OPC_CheckPredicate, 6, 177, 14, // Skip to: 13307
/* 9546 */    MCD::OPC_Decode, 179, 9, 123, // Opcode: MUL_Q_W
/* 9550 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 9562
/* 9554 */    MCD::OPC_CheckPredicate, 6, 165, 14, // Skip to: 13307
/* 9558 */    MCD::OPC_Decode, 235, 7, 126, // Opcode: MADD_Q_H
/* 9562 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 9574
/* 9566 */    MCD::OPC_CheckPredicate, 6, 153, 14, // Skip to: 13307
/* 9570 */    MCD::OPC_Decode, 236, 7, 127, // Opcode: MADD_Q_W
/* 9574 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 9586
/* 9578 */    MCD::OPC_CheckPredicate, 6, 141, 14, // Skip to: 13307
/* 9582 */    MCD::OPC_Decode, 252, 8, 126, // Opcode: MSUB_Q_H
/* 9586 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 9598
/* 9590 */    MCD::OPC_CheckPredicate, 6, 129, 14, // Skip to: 13307
/* 9594 */    MCD::OPC_Decode, 253, 8, 127, // Opcode: MSUB_Q_W
/* 9598 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 9610
/* 9602 */    MCD::OPC_CheckPredicate, 6, 117, 14, // Skip to: 13307
/* 9606 */    MCD::OPC_Decode, 137, 6, 123, // Opcode: FSOR_W
/* 9610 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 9622
/* 9614 */    MCD::OPC_CheckPredicate, 6, 105, 14, // Skip to: 13307
/* 9618 */    MCD::OPC_Decode, 136, 6, 124, // Opcode: FSOR_D
/* 9622 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 9634
/* 9626 */    MCD::OPC_CheckPredicate, 6, 93, 14, // Skip to: 13307
/* 9630 */    MCD::OPC_Decode, 159, 6, 123, // Opcode: FSUNE_W
/* 9634 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 9646
/* 9638 */    MCD::OPC_CheckPredicate, 6, 81, 14, // Skip to: 13307
/* 9642 */    MCD::OPC_Decode, 158, 6, 124, // Opcode: FSUNE_D
/* 9646 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 9658
/* 9650 */    MCD::OPC_CheckPredicate, 6, 69, 14, // Skip to: 13307
/* 9654 */    MCD::OPC_Decode, 135, 6, 123, // Opcode: FSNE_W
/* 9658 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 9670
/* 9662 */    MCD::OPC_CheckPredicate, 6, 57, 14, // Skip to: 13307
/* 9666 */    MCD::OPC_Decode, 134, 6, 124, // Opcode: FSNE_D
/* 9670 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 9682
/* 9674 */    MCD::OPC_CheckPredicate, 6, 45, 14, // Skip to: 13307
/* 9678 */    MCD::OPC_Decode, 161, 9, 122, // Opcode: MULR_Q_H
/* 9682 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 9694
/* 9686 */    MCD::OPC_CheckPredicate, 6, 33, 14, // Skip to: 13307
/* 9690 */    MCD::OPC_Decode, 162, 9, 123, // Opcode: MULR_Q_W
/* 9694 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 9706
/* 9698 */    MCD::OPC_CheckPredicate, 6, 21, 14, // Skip to: 13307
/* 9702 */    MCD::OPC_Decode, 221, 7, 126, // Opcode: MADDR_Q_H
/* 9706 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 9718
/* 9710 */    MCD::OPC_CheckPredicate, 6, 9, 14, // Skip to: 13307
/* 9714 */    MCD::OPC_Decode, 222, 7, 127, // Opcode: MADDR_Q_W
/* 9718 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 9730
/* 9722 */    MCD::OPC_CheckPredicate, 6, 253, 13, // Skip to: 13307
/* 9726 */    MCD::OPC_Decode, 238, 8, 126, // Opcode: MSUBR_Q_H
/* 9730 */    MCD::OPC_FilterValue, 29, 245, 13, // Skip to: 13307
/* 9734 */    MCD::OPC_CheckPredicate, 6, 241, 13, // Skip to: 13307
/* 9738 */    MCD::OPC_Decode, 239, 8, 127, // Opcode: MSUBR_Q_W
/* 9742 */    MCD::OPC_FilterValue, 30, 212, 2, // Skip to: 10470
/* 9746 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9749 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 9760
/* 9753 */    MCD::OPC_CheckPredicate, 6, 222, 13, // Skip to: 13307
/* 9757 */    MCD::OPC_Decode, 85, 121, // Opcode: AND_V
/* 9760 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 9772
/* 9764 */    MCD::OPC_CheckPredicate, 6, 211, 13, // Skip to: 13307
/* 9768 */    MCD::OPC_Decode, 225, 9, 121, // Opcode: OR_V
/* 9772 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 9784
/* 9776 */    MCD::OPC_CheckPredicate, 6, 199, 13, // Skip to: 13307
/* 9780 */    MCD::OPC_Decode, 213, 9, 121, // Opcode: NOR_V
/* 9784 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 9796
/* 9788 */    MCD::OPC_CheckPredicate, 6, 187, 13, // Skip to: 13307
/* 9792 */    MCD::OPC_Decode, 170, 13, 121, // Opcode: XOR_V
/* 9796 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 9808
/* 9800 */    MCD::OPC_CheckPredicate, 6, 175, 13, // Skip to: 13307
/* 9804 */    MCD::OPC_Decode, 248, 1, 125, // Opcode: BMNZ_V
/* 9808 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 9820
/* 9812 */    MCD::OPC_CheckPredicate, 6, 163, 13, // Skip to: 13307
/* 9816 */    MCD::OPC_Decode, 250, 1, 125, // Opcode: BMZ_V
/* 9820 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9832
/* 9824 */    MCD::OPC_CheckPredicate, 6, 151, 13, // Skip to: 13307
/* 9828 */    MCD::OPC_Decode, 155, 2, 125, // Opcode: BSEL_V
/* 9832 */    MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 10047
/* 9836 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 9839 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9852
/* 9843 */    MCD::OPC_CheckPredicate, 6, 132, 13, // Skip to: 13307
/* 9847 */    MCD::OPC_Decode, 204, 5, 165, 1, // Opcode: FILL_B
/* 9852 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9865
/* 9856 */    MCD::OPC_CheckPredicate, 6, 119, 13, // Skip to: 13307
/* 9860 */    MCD::OPC_Decode, 208, 5, 166, 1, // Opcode: FILL_H
/* 9865 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9878
/* 9869 */    MCD::OPC_CheckPredicate, 6, 106, 13, // Skip to: 13307
/* 9873 */    MCD::OPC_Decode, 209, 5, 167, 1, // Opcode: FILL_W
/* 9878 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9891
/* 9882 */    MCD::OPC_CheckPredicate, 13, 93, 13, // Skip to: 13307
/* 9886 */    MCD::OPC_Decode, 205, 5, 168, 1, // Opcode: FILL_D
/* 9891 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9904
/* 9895 */    MCD::OPC_CheckPredicate, 6, 80, 13, // Skip to: 13307
/* 9899 */    MCD::OPC_Decode, 243, 9, 157, 1, // Opcode: PCNT_B
/* 9904 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9917
/* 9908 */    MCD::OPC_CheckPredicate, 6, 67, 13, // Skip to: 13307
/* 9912 */    MCD::OPC_Decode, 245, 9, 169, 1, // Opcode: PCNT_H
/* 9917 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9930
/* 9921 */    MCD::OPC_CheckPredicate, 6, 54, 13, // Skip to: 13307
/* 9925 */    MCD::OPC_Decode, 246, 9, 170, 1, // Opcode: PCNT_W
/* 9930 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9943
/* 9934 */    MCD::OPC_CheckPredicate, 6, 41, 13, // Skip to: 13307
/* 9938 */    MCD::OPC_Decode, 244, 9, 171, 1, // Opcode: PCNT_D
/* 9943 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9956
/* 9947 */    MCD::OPC_CheckPredicate, 6, 28, 13, // Skip to: 13307
/* 9951 */    MCD::OPC_Decode, 190, 9, 157, 1, // Opcode: NLOC_B
/* 9956 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9969
/* 9960 */    MCD::OPC_CheckPredicate, 6, 15, 13, // Skip to: 13307
/* 9964 */    MCD::OPC_Decode, 192, 9, 169, 1, // Opcode: NLOC_H
/* 9969 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9982
/* 9973 */    MCD::OPC_CheckPredicate, 6, 2, 13, // Skip to: 13307
/* 9977 */    MCD::OPC_Decode, 193, 9, 170, 1, // Opcode: NLOC_W
/* 9982 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9995
/* 9986 */    MCD::OPC_CheckPredicate, 6, 245, 12, // Skip to: 13307
/* 9990 */    MCD::OPC_Decode, 191, 9, 171, 1, // Opcode: NLOC_D
/* 9995 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10008
/* 9999 */    MCD::OPC_CheckPredicate, 6, 232, 12, // Skip to: 13307
/* 10003 */   MCD::OPC_Decode, 194, 9, 157, 1, // Opcode: NLZC_B
/* 10008 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10021
/* 10012 */   MCD::OPC_CheckPredicate, 6, 219, 12, // Skip to: 13307
/* 10016 */   MCD::OPC_Decode, 196, 9, 169, 1, // Opcode: NLZC_H
/* 10021 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10034
/* 10025 */   MCD::OPC_CheckPredicate, 6, 206, 12, // Skip to: 13307
/* 10029 */   MCD::OPC_Decode, 197, 9, 170, 1, // Opcode: NLZC_W
/* 10034 */   MCD::OPC_FilterValue, 15, 197, 12, // Skip to: 13307
/* 10038 */   MCD::OPC_CheckPredicate, 6, 193, 12, // Skip to: 13307
/* 10042 */   MCD::OPC_Decode, 195, 9, 171, 1, // Opcode: NLZC_D
/* 10047 */   MCD::OPC_FilterValue, 25, 184, 12, // Skip to: 13307
/* 10051 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10054 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10067
/* 10058 */   MCD::OPC_CheckPredicate, 6, 173, 12, // Skip to: 13307
/* 10062 */   MCD::OPC_Decode, 155, 5, 170, 1, // Opcode: FCLASS_W
/* 10067 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10080
/* 10071 */   MCD::OPC_CheckPredicate, 6, 160, 12, // Skip to: 13307
/* 10075 */   MCD::OPC_Decode, 154, 5, 171, 1, // Opcode: FCLASS_D
/* 10080 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10093
/* 10084 */   MCD::OPC_CheckPredicate, 6, 147, 12, // Skip to: 13307
/* 10088 */   MCD::OPC_Decode, 169, 6, 170, 1, // Opcode: FTRUNC_S_W
/* 10093 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10106
/* 10097 */   MCD::OPC_CheckPredicate, 6, 134, 12, // Skip to: 13307
/* 10101 */   MCD::OPC_Decode, 168, 6, 171, 1, // Opcode: FTRUNC_S_D
/* 10106 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10119
/* 10110 */   MCD::OPC_CheckPredicate, 6, 121, 12, // Skip to: 13307
/* 10114 */   MCD::OPC_Decode, 171, 6, 170, 1, // Opcode: FTRUNC_U_W
/* 10119 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10132
/* 10123 */   MCD::OPC_CheckPredicate, 6, 108, 12, // Skip to: 13307
/* 10127 */   MCD::OPC_Decode, 170, 6, 171, 1, // Opcode: FTRUNC_U_D
/* 10132 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10145
/* 10136 */   MCD::OPC_CheckPredicate, 6, 95, 12, // Skip to: 13307
/* 10140 */   MCD::OPC_Decode, 144, 6, 170, 1, // Opcode: FSQRT_W
/* 10145 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10158
/* 10149 */   MCD::OPC_CheckPredicate, 6, 82, 12, // Skip to: 13307
/* 10153 */   MCD::OPC_Decode, 138, 6, 171, 1, // Opcode: FSQRT_D
/* 10158 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10171
/* 10162 */   MCD::OPC_CheckPredicate, 6, 69, 12, // Skip to: 13307
/* 10166 */   MCD::OPC_Decode, 253, 5, 170, 1, // Opcode: FRSQRT_W
/* 10171 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10184
/* 10175 */   MCD::OPC_CheckPredicate, 6, 56, 12, // Skip to: 13307
/* 10179 */   MCD::OPC_Decode, 252, 5, 171, 1, // Opcode: FRSQRT_D
/* 10184 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10197
/* 10188 */   MCD::OPC_CheckPredicate, 6, 43, 12, // Skip to: 13307
/* 10192 */   MCD::OPC_Decode, 249, 5, 170, 1, // Opcode: FRCP_W
/* 10197 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10210
/* 10201 */   MCD::OPC_CheckPredicate, 6, 30, 12, // Skip to: 13307
/* 10205 */   MCD::OPC_Decode, 248, 5, 171, 1, // Opcode: FRCP_D
/* 10210 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10223
/* 10214 */   MCD::OPC_CheckPredicate, 6, 17, 12, // Skip to: 13307
/* 10218 */   MCD::OPC_Decode, 251, 5, 170, 1, // Opcode: FRINT_W
/* 10223 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10236
/* 10227 */   MCD::OPC_CheckPredicate, 6, 4, 12, // Skip to: 13307
/* 10231 */   MCD::OPC_Decode, 250, 5, 171, 1, // Opcode: FRINT_D
/* 10236 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10249
/* 10240 */   MCD::OPC_CheckPredicate, 6, 247, 11, // Skip to: 13307
/* 10244 */   MCD::OPC_Decode, 211, 5, 170, 1, // Opcode: FLOG2_W
/* 10249 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10262
/* 10253 */   MCD::OPC_CheckPredicate, 6, 234, 11, // Skip to: 13307
/* 10257 */   MCD::OPC_Decode, 210, 5, 171, 1, // Opcode: FLOG2_D
/* 10262 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10275
/* 10266 */   MCD::OPC_CheckPredicate, 6, 221, 11, // Skip to: 13307
/* 10270 */   MCD::OPC_Decode, 193, 5, 172, 1, // Opcode: FEXUPL_W
/* 10275 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10288
/* 10279 */   MCD::OPC_CheckPredicate, 6, 208, 11, // Skip to: 13307
/* 10283 */   MCD::OPC_Decode, 192, 5, 173, 1, // Opcode: FEXUPL_D
/* 10288 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10301
/* 10292 */   MCD::OPC_CheckPredicate, 6, 195, 11, // Skip to: 13307
/* 10296 */   MCD::OPC_Decode, 195, 5, 172, 1, // Opcode: FEXUPR_W
/* 10301 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10314
/* 10305 */   MCD::OPC_CheckPredicate, 6, 182, 11, // Skip to: 13307
/* 10309 */   MCD::OPC_Decode, 194, 5, 173, 1, // Opcode: FEXUPR_D
/* 10314 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10327
/* 10318 */   MCD::OPC_CheckPredicate, 6, 169, 11, // Skip to: 13307
/* 10322 */   MCD::OPC_Decode, 201, 5, 172, 1, // Opcode: FFQL_W
/* 10327 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10340
/* 10331 */   MCD::OPC_CheckPredicate, 6, 156, 11, // Skip to: 13307
/* 10335 */   MCD::OPC_Decode, 200, 5, 173, 1, // Opcode: FFQL_D
/* 10340 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10353
/* 10344 */   MCD::OPC_CheckPredicate, 6, 143, 11, // Skip to: 13307
/* 10348 */   MCD::OPC_Decode, 203, 5, 172, 1, // Opcode: FFQR_W
/* 10353 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10366
/* 10357 */   MCD::OPC_CheckPredicate, 6, 130, 11, // Skip to: 13307
/* 10361 */   MCD::OPC_Decode, 202, 5, 173, 1, // Opcode: FFQR_D
/* 10366 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10379
/* 10370 */   MCD::OPC_CheckPredicate, 6, 117, 11, // Skip to: 13307
/* 10374 */   MCD::OPC_Decode, 163, 6, 170, 1, // Opcode: FTINT_S_W
/* 10379 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10392
/* 10383 */   MCD::OPC_CheckPredicate, 6, 104, 11, // Skip to: 13307
/* 10387 */   MCD::OPC_Decode, 162, 6, 171, 1, // Opcode: FTINT_S_D
/* 10392 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10405
/* 10396 */   MCD::OPC_CheckPredicate, 6, 91, 11, // Skip to: 13307
/* 10400 */   MCD::OPC_Decode, 165, 6, 170, 1, // Opcode: FTINT_U_W
/* 10405 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10418
/* 10409 */   MCD::OPC_CheckPredicate, 6, 78, 11, // Skip to: 13307
/* 10413 */   MCD::OPC_Decode, 164, 6, 171, 1, // Opcode: FTINT_U_D
/* 10418 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10431
/* 10422 */   MCD::OPC_CheckPredicate, 6, 65, 11, // Skip to: 13307
/* 10426 */   MCD::OPC_Decode, 197, 5, 170, 1, // Opcode: FFINT_S_W
/* 10431 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10444
/* 10435 */   MCD::OPC_CheckPredicate, 6, 52, 11, // Skip to: 13307
/* 10439 */   MCD::OPC_Decode, 196, 5, 171, 1, // Opcode: FFINT_S_D
/* 10444 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10457
/* 10448 */   MCD::OPC_CheckPredicate, 6, 39, 11, // Skip to: 13307
/* 10452 */   MCD::OPC_Decode, 199, 5, 170, 1, // Opcode: FFINT_U_W
/* 10457 */   MCD::OPC_FilterValue, 31, 30, 11, // Skip to: 13307
/* 10461 */   MCD::OPC_CheckPredicate, 6, 26, 11, // Skip to: 13307
/* 10465 */   MCD::OPC_Decode, 198, 5, 171, 1, // Opcode: FFINT_U_D
/* 10470 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 10483
/* 10474 */   MCD::OPC_CheckPredicate, 6, 13, 11, // Skip to: 13307
/* 10478 */   MCD::OPC_Decode, 146, 7, 174, 1, // Opcode: LD_B
/* 10483 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 10496
/* 10487 */   MCD::OPC_CheckPredicate, 6, 0, 11, // Skip to: 13307
/* 10491 */   MCD::OPC_Decode, 148, 7, 174, 1, // Opcode: LD_H
/* 10496 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 10509
/* 10500 */   MCD::OPC_CheckPredicate, 6, 243, 10, // Skip to: 13307
/* 10504 */   MCD::OPC_Decode, 149, 7, 174, 1, // Opcode: LD_W
/* 10509 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 10522
/* 10513 */   MCD::OPC_CheckPredicate, 6, 230, 10, // Skip to: 13307
/* 10517 */   MCD::OPC_Decode, 147, 7, 174, 1, // Opcode: LD_D
/* 10522 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 10535
/* 10526 */   MCD::OPC_CheckPredicate, 6, 217, 10, // Skip to: 13307
/* 10530 */   MCD::OPC_Decode, 250, 11, 174, 1, // Opcode: ST_B
/* 10535 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 10548
/* 10539 */   MCD::OPC_CheckPredicate, 6, 204, 10, // Skip to: 13307
/* 10543 */   MCD::OPC_Decode, 252, 11, 174, 1, // Opcode: ST_H
/* 10548 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 10561
/* 10552 */   MCD::OPC_CheckPredicate, 6, 191, 10, // Skip to: 13307
/* 10556 */   MCD::OPC_Decode, 253, 11, 174, 1, // Opcode: ST_W
/* 10561 */   MCD::OPC_FilterValue, 39, 182, 10, // Skip to: 13307
/* 10565 */   MCD::OPC_CheckPredicate, 6, 178, 10, // Skip to: 13307
/* 10569 */   MCD::OPC_Decode, 251, 11, 174, 1, // Opcode: ST_D
/* 10574 */   MCD::OPC_FilterValue, 31, 113, 9, // Skip to: 12995
/* 10578 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10581 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10594
/* 10585 */   MCD::OPC_CheckPredicate, 4, 158, 10, // Skip to: 13307
/* 10589 */   MCD::OPC_Decode, 246, 4, 175, 1, // Opcode: EXT
/* 10594 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10607
/* 10598 */   MCD::OPC_CheckPredicate, 4, 145, 10, // Skip to: 13307
/* 10602 */   MCD::OPC_Decode, 201, 6, 176, 1, // Opcode: INS
/* 10607 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 10653
/* 10611 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10614 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10627
/* 10618 */   MCD::OPC_CheckPredicate, 11, 125, 10, // Skip to: 13307
/* 10622 */   MCD::OPC_Decode, 197, 7, 177, 1, // Opcode: LWX
/* 10627 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10640
/* 10631 */   MCD::OPC_CheckPredicate, 11, 112, 10, // Skip to: 13307
/* 10635 */   MCD::OPC_Decode, 155, 7, 177, 1, // Opcode: LHX
/* 10640 */   MCD::OPC_FilterValue, 6, 103, 10, // Skip to: 13307
/* 10644 */   MCD::OPC_CheckPredicate, 11, 99, 10, // Skip to: 13307
/* 10648 */   MCD::OPC_Decode, 253, 6, 177, 1, // Opcode: LBUX
/* 10653 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 10672
/* 10657 */   MCD::OPC_CheckPredicate, 11, 86, 10, // Skip to: 13307
/* 10661 */   MCD::OPC_CheckField, 6, 10, 0, 80, 10, // Skip to: 13307
/* 10667 */   MCD::OPC_Decode, 214, 6, 178, 1, // Opcode: INSV
/* 10672 */   MCD::OPC_FilterValue, 16, 51, 1, // Skip to: 10983
/* 10676 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10679 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10691
/* 10683 */   MCD::OPC_CheckPredicate, 11, 60, 10, // Skip to: 13307
/* 10687 */   MCD::OPC_Decode, 53, 179, 1, // Opcode: ADDU_QB
/* 10691 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10704
/* 10695 */   MCD::OPC_CheckPredicate, 11, 48, 10, // Skip to: 13307
/* 10699 */   MCD::OPC_Decode, 154, 12, 179, 1, // Opcode: SUBU_QB
/* 10704 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 10716
/* 10708 */   MCD::OPC_CheckPredicate, 11, 35, 10, // Skip to: 13307
/* 10712 */   MCD::OPC_Decode, 55, 179, 1, // Opcode: ADDU_S_QB
/* 10716 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10729
/* 10720 */   MCD::OPC_CheckPredicate, 11, 23, 10, // Skip to: 13307
/* 10724 */   MCD::OPC_Decode, 156, 12, 179, 1, // Opcode: SUBU_S_QB
/* 10729 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10742
/* 10733 */   MCD::OPC_CheckPredicate, 11, 10, 10, // Skip to: 13307
/* 10737 */   MCD::OPC_Decode, 155, 9, 179, 1, // Opcode: MULEU_S_PH_QBL
/* 10742 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10755
/* 10746 */   MCD::OPC_CheckPredicate, 11, 253, 9, // Skip to: 13307
/* 10750 */   MCD::OPC_Decode, 156, 9, 179, 1, // Opcode: MULEU_S_PH_QBR
/* 10755 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 10767
/* 10759 */   MCD::OPC_CheckPredicate, 29, 240, 9, // Skip to: 13307
/* 10763 */   MCD::OPC_Decode, 52, 179, 1, // Opcode: ADDU_PH
/* 10767 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10780
/* 10771 */   MCD::OPC_CheckPredicate, 29, 228, 9, // Skip to: 13307
/* 10775 */   MCD::OPC_Decode, 153, 12, 179, 1, // Opcode: SUBU_PH
/* 10780 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 10792
/* 10784 */   MCD::OPC_CheckPredicate, 11, 215, 9, // Skip to: 13307
/* 10788 */   MCD::OPC_Decode, 33, 179, 1, // Opcode: ADDQ_PH
/* 10792 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10805
/* 10796 */   MCD::OPC_CheckPredicate, 11, 203, 9, // Skip to: 13307
/* 10800 */   MCD::OPC_Decode, 131, 12, 179, 1, // Opcode: SUBQ_PH
/* 10805 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 10817
/* 10809 */   MCD::OPC_CheckPredicate, 29, 190, 9, // Skip to: 13307
/* 10813 */   MCD::OPC_Decode, 54, 179, 1, // Opcode: ADDU_S_PH
/* 10817 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10830
/* 10821 */   MCD::OPC_CheckPredicate, 29, 178, 9, // Skip to: 13307
/* 10825 */   MCD::OPC_Decode, 155, 12, 179, 1, // Opcode: SUBU_S_PH
/* 10830 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 10842
/* 10834 */   MCD::OPC_CheckPredicate, 11, 165, 9, // Skip to: 13307
/* 10838 */   MCD::OPC_Decode, 34, 179, 1, // Opcode: ADDQ_S_PH
/* 10842 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10855
/* 10846 */   MCD::OPC_CheckPredicate, 11, 153, 9, // Skip to: 13307
/* 10850 */   MCD::OPC_Decode, 132, 12, 179, 1, // Opcode: SUBQ_S_PH
/* 10855 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 10866
/* 10859 */   MCD::OPC_CheckPredicate, 11, 140, 9, // Skip to: 13307
/* 10863 */   MCD::OPC_Decode, 36, 25, // Opcode: ADDSC
/* 10866 */   MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 10877
/* 10870 */   MCD::OPC_CheckPredicate, 11, 129, 9, // Skip to: 13307
/* 10874 */   MCD::OPC_Decode, 64, 25, // Opcode: ADDWC
/* 10877 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 10889
/* 10881 */   MCD::OPC_CheckPredicate, 11, 118, 9, // Skip to: 13307
/* 10885 */   MCD::OPC_Decode, 183, 8, 25, // Opcode: MODSUB
/* 10889 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 10908
/* 10893 */   MCD::OPC_CheckPredicate, 11, 106, 9, // Skip to: 13307
/* 10897 */   MCD::OPC_CheckField, 16, 5, 0, 100, 9, // Skip to: 13307
/* 10903 */   MCD::OPC_Decode, 178, 10, 180, 1, // Opcode: RADDU_W_QB
/* 10908 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 10919
/* 10912 */   MCD::OPC_CheckPredicate, 11, 87, 9, // Skip to: 13307
/* 10916 */   MCD::OPC_Decode, 35, 25, // Opcode: ADDQ_S_W
/* 10919 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 10931
/* 10923 */   MCD::OPC_CheckPredicate, 11, 76, 9, // Skip to: 13307
/* 10927 */   MCD::OPC_Decode, 133, 12, 25, // Opcode: SUBQ_S_W
/* 10931 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10944
/* 10935 */   MCD::OPC_CheckPredicate, 11, 64, 9, // Skip to: 13307
/* 10939 */   MCD::OPC_Decode, 153, 9, 181, 1, // Opcode: MULEQ_S_W_PHL
/* 10944 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10957
/* 10948 */   MCD::OPC_CheckPredicate, 11, 51, 9, // Skip to: 13307
/* 10952 */   MCD::OPC_Decode, 154, 9, 181, 1, // Opcode: MULEQ_S_W_PHR
/* 10957 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10970
/* 10961 */   MCD::OPC_CheckPredicate, 29, 38, 9, // Skip to: 13307
/* 10965 */   MCD::OPC_Decode, 159, 9, 179, 1, // Opcode: MULQ_S_PH
/* 10970 */   MCD::OPC_FilterValue, 31, 29, 9, // Skip to: 13307
/* 10974 */   MCD::OPC_CheckPredicate, 11, 25, 9, // Skip to: 13307
/* 10978 */   MCD::OPC_Decode, 157, 9, 179, 1, // Opcode: MULQ_RS_PH
/* 10983 */   MCD::OPC_FilterValue, 17, 69, 1, // Skip to: 11312
/* 10987 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10990 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 11009
/* 10994 */   MCD::OPC_CheckPredicate, 11, 5, 9, // Skip to: 13307
/* 10998 */   MCD::OPC_CheckField, 11, 5, 0, 255, 8, // Skip to: 13307
/* 11004 */   MCD::OPC_Decode, 135, 3, 182, 1, // Opcode: CMPU_EQ_QB
/* 11009 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 11028
/* 11013 */   MCD::OPC_CheckPredicate, 11, 242, 8, // Skip to: 13307
/* 11017 */   MCD::OPC_CheckField, 11, 5, 0, 236, 8, // Skip to: 13307
/* 11023 */   MCD::OPC_Decode, 137, 3, 182, 1, // Opcode: CMPU_LT_QB
/* 11028 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 11047
/* 11032 */   MCD::OPC_CheckPredicate, 11, 223, 8, // Skip to: 13307
/* 11036 */   MCD::OPC_CheckField, 11, 5, 0, 217, 8, // Skip to: 13307
/* 11042 */   MCD::OPC_Decode, 136, 3, 182, 1, // Opcode: CMPU_LE_QB
/* 11047 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11060
/* 11051 */   MCD::OPC_CheckPredicate, 11, 204, 8, // Skip to: 13307
/* 11055 */   MCD::OPC_Decode, 248, 9, 179, 1, // Opcode: PICK_QB
/* 11060 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11073
/* 11064 */   MCD::OPC_CheckPredicate, 11, 191, 8, // Skip to: 13307
/* 11068 */   MCD::OPC_Decode, 132, 3, 181, 1, // Opcode: CMPGU_EQ_QB
/* 11073 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11086
/* 11077 */   MCD::OPC_CheckPredicate, 11, 178, 8, // Skip to: 13307
/* 11081 */   MCD::OPC_Decode, 134, 3, 181, 1, // Opcode: CMPGU_LT_QB
/* 11086 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11099
/* 11090 */   MCD::OPC_CheckPredicate, 11, 165, 8, // Skip to: 13307
/* 11094 */   MCD::OPC_Decode, 133, 3, 181, 1, // Opcode: CMPGU_LE_QB
/* 11099 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 11118
/* 11103 */   MCD::OPC_CheckPredicate, 11, 152, 8, // Skip to: 13307
/* 11107 */   MCD::OPC_CheckField, 11, 5, 0, 146, 8, // Skip to: 13307
/* 11113 */   MCD::OPC_Decode, 139, 3, 182, 1, // Opcode: CMP_EQ_PH
/* 11118 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 11137
/* 11122 */   MCD::OPC_CheckPredicate, 11, 133, 8, // Skip to: 13307
/* 11126 */   MCD::OPC_CheckField, 11, 5, 0, 127, 8, // Skip to: 13307
/* 11132 */   MCD::OPC_Decode, 147, 3, 182, 1, // Opcode: CMP_LT_PH
/* 11137 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 11156
/* 11141 */   MCD::OPC_CheckPredicate, 11, 114, 8, // Skip to: 13307
/* 11145 */   MCD::OPC_CheckField, 11, 5, 0, 108, 8, // Skip to: 13307
/* 11151 */   MCD::OPC_Decode, 144, 3, 182, 1, // Opcode: CMP_LE_PH
/* 11156 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11169
/* 11160 */   MCD::OPC_CheckPredicate, 11, 95, 8, // Skip to: 13307
/* 11164 */   MCD::OPC_Decode, 247, 9, 179, 1, // Opcode: PICK_PH
/* 11169 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11182
/* 11173 */   MCD::OPC_CheckPredicate, 11, 82, 8, // Skip to: 13307
/* 11177 */   MCD::OPC_Decode, 134, 10, 179, 1, // Opcode: PRECRQ_QB_PH
/* 11182 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11195
/* 11186 */   MCD::OPC_CheckPredicate, 29, 69, 8, // Skip to: 13307
/* 11190 */   MCD::OPC_Decode, 136, 10, 179, 1, // Opcode: PRECR_QB_PH
/* 11195 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11208
/* 11199 */   MCD::OPC_CheckPredicate, 11, 56, 8, // Skip to: 13307
/* 11203 */   MCD::OPC_Decode, 233, 9, 179, 1, // Opcode: PACKRL_PH
/* 11208 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11221
/* 11212 */   MCD::OPC_CheckPredicate, 11, 43, 8, // Skip to: 13307
/* 11216 */   MCD::OPC_Decode, 132, 10, 179, 1, // Opcode: PRECRQU_S_QB_PH
/* 11221 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11234
/* 11225 */   MCD::OPC_CheckPredicate, 11, 30, 8, // Skip to: 13307
/* 11229 */   MCD::OPC_Decode, 133, 10, 183, 1, // Opcode: PRECRQ_PH_W
/* 11234 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11247
/* 11238 */   MCD::OPC_CheckPredicate, 11, 17, 8, // Skip to: 13307
/* 11242 */   MCD::OPC_Decode, 135, 10, 183, 1, // Opcode: PRECRQ_RS_PH_W
/* 11247 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11260
/* 11251 */   MCD::OPC_CheckPredicate, 29, 4, 8, // Skip to: 13307
/* 11255 */   MCD::OPC_Decode, 129, 3, 181, 1, // Opcode: CMPGDU_EQ_QB
/* 11260 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11273
/* 11264 */   MCD::OPC_CheckPredicate, 29, 247, 7, // Skip to: 13307
/* 11268 */   MCD::OPC_Decode, 131, 3, 181, 1, // Opcode: CMPGDU_LT_QB
/* 11273 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11286
/* 11277 */   MCD::OPC_CheckPredicate, 29, 234, 7, // Skip to: 13307
/* 11281 */   MCD::OPC_Decode, 130, 3, 181, 1, // Opcode: CMPGDU_LE_QB
/* 11286 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11299
/* 11290 */   MCD::OPC_CheckPredicate, 29, 221, 7, // Skip to: 13307
/* 11294 */   MCD::OPC_Decode, 137, 10, 184, 1, // Opcode: PRECR_SRA_PH_W
/* 11299 */   MCD::OPC_FilterValue, 31, 212, 7, // Skip to: 13307
/* 11303 */   MCD::OPC_CheckPredicate, 29, 208, 7, // Skip to: 13307
/* 11307 */   MCD::OPC_Decode, 138, 10, 184, 1, // Opcode: PRECR_SRA_R_PH_W
/* 11312 */   MCD::OPC_FilterValue, 18, 74, 1, // Skip to: 11646
/* 11316 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11319 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 11337
/* 11323 */   MCD::OPC_CheckPredicate, 29, 188, 7, // Skip to: 13307
/* 11327 */   MCD::OPC_CheckField, 21, 5, 0, 182, 7, // Skip to: 13307
/* 11333 */   MCD::OPC_Decode, 21, 185, 1, // Opcode: ABSQ_S_QB
/* 11337 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11350
/* 11341 */   MCD::OPC_CheckPredicate, 11, 170, 7, // Skip to: 13307
/* 11345 */   MCD::OPC_Decode, 185, 10, 186, 1, // Opcode: REPL_QB
/* 11350 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 11369
/* 11354 */   MCD::OPC_CheckPredicate, 11, 157, 7, // Skip to: 13307
/* 11358 */   MCD::OPC_CheckField, 21, 5, 0, 151, 7, // Skip to: 13307
/* 11364 */   MCD::OPC_Decode, 183, 10, 187, 1, // Opcode: REPLV_QB
/* 11369 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 11388
/* 11373 */   MCD::OPC_CheckPredicate, 11, 138, 7, // Skip to: 13307
/* 11377 */   MCD::OPC_CheckField, 21, 5, 0, 132, 7, // Skip to: 13307
/* 11383 */   MCD::OPC_Decode, 250, 9, 185, 1, // Opcode: PRECEQU_PH_QBL
/* 11388 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 11407
/* 11392 */   MCD::OPC_CheckPredicate, 11, 119, 7, // Skip to: 13307
/* 11396 */   MCD::OPC_CheckField, 21, 5, 0, 113, 7, // Skip to: 13307
/* 11402 */   MCD::OPC_Decode, 252, 9, 185, 1, // Opcode: PRECEQU_PH_QBR
/* 11407 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 11426
/* 11411 */   MCD::OPC_CheckPredicate, 11, 100, 7, // Skip to: 13307
/* 11415 */   MCD::OPC_CheckField, 21, 5, 0, 94, 7, // Skip to: 13307
/* 11421 */   MCD::OPC_Decode, 251, 9, 185, 1, // Opcode: PRECEQU_PH_QBLA
/* 11426 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 11445
/* 11430 */   MCD::OPC_CheckPredicate, 11, 81, 7, // Skip to: 13307
/* 11434 */   MCD::OPC_CheckField, 21, 5, 0, 75, 7, // Skip to: 13307
/* 11440 */   MCD::OPC_Decode, 253, 9, 185, 1, // Opcode: PRECEQU_PH_QBRA
/* 11445 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 11463
/* 11449 */   MCD::OPC_CheckPredicate, 11, 62, 7, // Skip to: 13307
/* 11453 */   MCD::OPC_CheckField, 21, 5, 0, 56, 7, // Skip to: 13307
/* 11459 */   MCD::OPC_Decode, 20, 185, 1, // Opcode: ABSQ_S_PH
/* 11463 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11476
/* 11467 */   MCD::OPC_CheckPredicate, 11, 44, 7, // Skip to: 13307
/* 11471 */   MCD::OPC_Decode, 184, 10, 186, 1, // Opcode: REPL_PH
/* 11476 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 11495
/* 11480 */   MCD::OPC_CheckPredicate, 11, 31, 7, // Skip to: 13307
/* 11484 */   MCD::OPC_CheckField, 21, 5, 0, 25, 7, // Skip to: 13307
/* 11490 */   MCD::OPC_Decode, 182, 10, 187, 1, // Opcode: REPLV_PH
/* 11495 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11514
/* 11499 */   MCD::OPC_CheckPredicate, 11, 12, 7, // Skip to: 13307
/* 11503 */   MCD::OPC_CheckField, 21, 5, 0, 6, 7, // Skip to: 13307
/* 11509 */   MCD::OPC_Decode, 254, 9, 188, 1, // Opcode: PRECEQ_W_PHL
/* 11514 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 11533
/* 11518 */   MCD::OPC_CheckPredicate, 11, 249, 6, // Skip to: 13307
/* 11522 */   MCD::OPC_CheckField, 21, 5, 0, 243, 6, // Skip to: 13307
/* 11528 */   MCD::OPC_Decode, 255, 9, 188, 1, // Opcode: PRECEQ_W_PHR
/* 11533 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 11551
/* 11537 */   MCD::OPC_CheckPredicate, 11, 230, 6, // Skip to: 13307
/* 11541 */   MCD::OPC_CheckField, 21, 5, 0, 224, 6, // Skip to: 13307
/* 11547 */   MCD::OPC_Decode, 22, 189, 1, // Opcode: ABSQ_S_W
/* 11551 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 11570
/* 11555 */   MCD::OPC_CheckPredicate, 11, 212, 6, // Skip to: 13307
/* 11559 */   MCD::OPC_CheckField, 21, 5, 0, 206, 6, // Skip to: 13307
/* 11565 */   MCD::OPC_Decode, 227, 1, 189, 1, // Opcode: BITREV
/* 11570 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 11589
/* 11574 */   MCD::OPC_CheckPredicate, 11, 193, 6, // Skip to: 13307
/* 11578 */   MCD::OPC_CheckField, 21, 5, 0, 187, 6, // Skip to: 13307
/* 11584 */   MCD::OPC_Decode, 128, 10, 185, 1, // Opcode: PRECEU_PH_QBL
/* 11589 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 11608
/* 11593 */   MCD::OPC_CheckPredicate, 11, 174, 6, // Skip to: 13307
/* 11597 */   MCD::OPC_CheckField, 21, 5, 0, 168, 6, // Skip to: 13307
/* 11603 */   MCD::OPC_Decode, 130, 10, 185, 1, // Opcode: PRECEU_PH_QBR
/* 11608 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 11627
/* 11612 */   MCD::OPC_CheckPredicate, 11, 155, 6, // Skip to: 13307
/* 11616 */   MCD::OPC_CheckField, 21, 5, 0, 149, 6, // Skip to: 13307
/* 11622 */   MCD::OPC_Decode, 129, 10, 185, 1, // Opcode: PRECEU_PH_QBLA
/* 11627 */   MCD::OPC_FilterValue, 31, 140, 6, // Skip to: 13307
/* 11631 */   MCD::OPC_CheckPredicate, 11, 136, 6, // Skip to: 13307
/* 11635 */   MCD::OPC_CheckField, 21, 5, 0, 130, 6, // Skip to: 13307
/* 11641 */   MCD::OPC_Decode, 131, 10, 185, 1, // Opcode: PRECEU_PH_QBRA
/* 11646 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 11937
/* 11650 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11653 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11666
/* 11657 */   MCD::OPC_CheckPredicate, 11, 110, 6, // Skip to: 13307
/* 11661 */   MCD::OPC_Decode, 136, 11, 190, 1, // Opcode: SHLL_QB
/* 11666 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11679
/* 11670 */   MCD::OPC_CheckPredicate, 11, 97, 6, // Skip to: 13307
/* 11674 */   MCD::OPC_Decode, 152, 11, 190, 1, // Opcode: SHRL_QB
/* 11679 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11692
/* 11683 */   MCD::OPC_CheckPredicate, 11, 84, 6, // Skip to: 13307
/* 11687 */   MCD::OPC_Decode, 132, 11, 191, 1, // Opcode: SHLLV_QB
/* 11692 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11705
/* 11696 */   MCD::OPC_CheckPredicate, 11, 71, 6, // Skip to: 13307
/* 11700 */   MCD::OPC_Decode, 150, 11, 191, 1, // Opcode: SHRLV_QB
/* 11705 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11718
/* 11709 */   MCD::OPC_CheckPredicate, 29, 58, 6, // Skip to: 13307
/* 11713 */   MCD::OPC_Decode, 145, 11, 190, 1, // Opcode: SHRA_QB
/* 11718 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11731
/* 11722 */   MCD::OPC_CheckPredicate, 29, 45, 6, // Skip to: 13307
/* 11726 */   MCD::OPC_Decode, 147, 11, 190, 1, // Opcode: SHRA_R_QB
/* 11731 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11744
/* 11735 */   MCD::OPC_CheckPredicate, 29, 32, 6, // Skip to: 13307
/* 11739 */   MCD::OPC_Decode, 140, 11, 191, 1, // Opcode: SHRAV_QB
/* 11744 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11757
/* 11748 */   MCD::OPC_CheckPredicate, 29, 19, 6, // Skip to: 13307
/* 11752 */   MCD::OPC_Decode, 142, 11, 191, 1, // Opcode: SHRAV_R_QB
/* 11757 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11770
/* 11761 */   MCD::OPC_CheckPredicate, 11, 6, 6, // Skip to: 13307
/* 11765 */   MCD::OPC_Decode, 135, 11, 190, 1, // Opcode: SHLL_PH
/* 11770 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11783
/* 11774 */   MCD::OPC_CheckPredicate, 11, 249, 5, // Skip to: 13307
/* 11778 */   MCD::OPC_Decode, 144, 11, 190, 1, // Opcode: SHRA_PH
/* 11783 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11796
/* 11787 */   MCD::OPC_CheckPredicate, 11, 236, 5, // Skip to: 13307
/* 11791 */   MCD::OPC_Decode, 131, 11, 191, 1, // Opcode: SHLLV_PH
/* 11796 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11809
/* 11800 */   MCD::OPC_CheckPredicate, 11, 223, 5, // Skip to: 13307
/* 11804 */   MCD::OPC_Decode, 139, 11, 191, 1, // Opcode: SHRAV_PH
/* 11809 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11822
/* 11813 */   MCD::OPC_CheckPredicate, 11, 210, 5, // Skip to: 13307
/* 11817 */   MCD::OPC_Decode, 137, 11, 190, 1, // Opcode: SHLL_S_PH
/* 11822 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11835
/* 11826 */   MCD::OPC_CheckPredicate, 11, 197, 5, // Skip to: 13307
/* 11830 */   MCD::OPC_Decode, 146, 11, 190, 1, // Opcode: SHRA_R_PH
/* 11835 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11848
/* 11839 */   MCD::OPC_CheckPredicate, 11, 184, 5, // Skip to: 13307
/* 11843 */   MCD::OPC_Decode, 133, 11, 191, 1, // Opcode: SHLLV_S_PH
/* 11848 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11861
/* 11852 */   MCD::OPC_CheckPredicate, 11, 171, 5, // Skip to: 13307
/* 11856 */   MCD::OPC_Decode, 141, 11, 191, 1, // Opcode: SHRAV_R_PH
/* 11861 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11874
/* 11865 */   MCD::OPC_CheckPredicate, 11, 158, 5, // Skip to: 13307
/* 11869 */   MCD::OPC_Decode, 138, 11, 192, 1, // Opcode: SHLL_S_W
/* 11874 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11887
/* 11878 */   MCD::OPC_CheckPredicate, 11, 145, 5, // Skip to: 13307
/* 11882 */   MCD::OPC_Decode, 148, 11, 192, 1, // Opcode: SHRA_R_W
/* 11887 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 11899
/* 11891 */   MCD::OPC_CheckPredicate, 11, 132, 5, // Skip to: 13307
/* 11895 */   MCD::OPC_Decode, 134, 11, 26, // Opcode: SHLLV_S_W
/* 11899 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 11911
/* 11903 */   MCD::OPC_CheckPredicate, 11, 120, 5, // Skip to: 13307
/* 11907 */   MCD::OPC_Decode, 143, 11, 26, // Opcode: SHRAV_R_W
/* 11911 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11924
/* 11915 */   MCD::OPC_CheckPredicate, 29, 108, 5, // Skip to: 13307
/* 11919 */   MCD::OPC_Decode, 151, 11, 190, 1, // Opcode: SHRL_PH
/* 11924 */   MCD::OPC_FilterValue, 27, 99, 5, // Skip to: 13307
/* 11928 */   MCD::OPC_CheckPredicate, 29, 95, 5, // Skip to: 13307
/* 11932 */   MCD::OPC_Decode, 149, 11, 191, 1, // Opcode: SHRLV_PH
/* 11937 */   MCD::OPC_FilterValue, 24, 199, 0, // Skip to: 12140
/* 11941 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11944 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 11956
/* 11948 */   MCD::OPC_CheckPredicate, 29, 75, 5, // Skip to: 13307
/* 11952 */   MCD::OPC_Decode, 50, 179, 1, // Opcode: ADDUH_QB
/* 11956 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11969
/* 11960 */   MCD::OPC_CheckPredicate, 29, 63, 5, // Skip to: 13307
/* 11964 */   MCD::OPC_Decode, 151, 12, 179, 1, // Opcode: SUBUH_QB
/* 11969 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 11981
/* 11973 */   MCD::OPC_CheckPredicate, 29, 50, 5, // Skip to: 13307
/* 11977 */   MCD::OPC_Decode, 51, 179, 1, // Opcode: ADDUH_R_QB
/* 11981 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11994
/* 11985 */   MCD::OPC_CheckPredicate, 29, 38, 5, // Skip to: 13307
/* 11989 */   MCD::OPC_Decode, 152, 12, 179, 1, // Opcode: SUBUH_R_QB
/* 11994 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 12006
/* 11998 */   MCD::OPC_CheckPredicate, 29, 25, 5, // Skip to: 13307
/* 12002 */   MCD::OPC_Decode, 29, 179, 1, // Opcode: ADDQH_PH
/* 12006 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12019
/* 12010 */   MCD::OPC_CheckPredicate, 29, 13, 5, // Skip to: 13307
/* 12014 */   MCD::OPC_Decode, 255, 11, 179, 1, // Opcode: SUBQH_PH
/* 12019 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12031
/* 12023 */   MCD::OPC_CheckPredicate, 29, 0, 5, // Skip to: 13307
/* 12027 */   MCD::OPC_Decode, 30, 179, 1, // Opcode: ADDQH_R_PH
/* 12031 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12044
/* 12035 */   MCD::OPC_CheckPredicate, 29, 244, 4, // Skip to: 13307
/* 12039 */   MCD::OPC_Decode, 128, 12, 179, 1, // Opcode: SUBQH_R_PH
/* 12044 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12057
/* 12048 */   MCD::OPC_CheckPredicate, 29, 231, 4, // Skip to: 13307
/* 12052 */   MCD::OPC_Decode, 177, 9, 179, 1, // Opcode: MUL_PH
/* 12057 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12070
/* 12061 */   MCD::OPC_CheckPredicate, 29, 218, 4, // Skip to: 13307
/* 12065 */   MCD::OPC_Decode, 181, 9, 179, 1, // Opcode: MUL_S_PH
/* 12070 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 12081
/* 12074 */   MCD::OPC_CheckPredicate, 29, 205, 4, // Skip to: 13307
/* 12078 */   MCD::OPC_Decode, 32, 25, // Opcode: ADDQH_W
/* 12081 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12093
/* 12085 */   MCD::OPC_CheckPredicate, 29, 194, 4, // Skip to: 13307
/* 12089 */   MCD::OPC_Decode, 130, 12, 25, // Opcode: SUBQH_W
/* 12093 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 12104
/* 12097 */   MCD::OPC_CheckPredicate, 29, 182, 4, // Skip to: 13307
/* 12101 */   MCD::OPC_Decode, 31, 25, // Opcode: ADDQH_R_W
/* 12104 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 12116
/* 12108 */   MCD::OPC_CheckPredicate, 29, 171, 4, // Skip to: 13307
/* 12112 */   MCD::OPC_Decode, 129, 12, 25, // Opcode: SUBQH_R_W
/* 12116 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12128
/* 12120 */   MCD::OPC_CheckPredicate, 29, 159, 4, // Skip to: 13307
/* 12124 */   MCD::OPC_Decode, 160, 9, 25, // Opcode: MULQ_S_W
/* 12128 */   MCD::OPC_FilterValue, 23, 151, 4, // Skip to: 13307
/* 12132 */   MCD::OPC_CheckPredicate, 29, 147, 4, // Skip to: 13307
/* 12136 */   MCD::OPC_Decode, 158, 9, 25, // Opcode: MULQ_RS_W
/* 12140 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 12204
/* 12144 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12147 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12166
/* 12151 */   MCD::OPC_CheckPredicate, 4, 128, 4, // Skip to: 13307
/* 12155 */   MCD::OPC_CheckField, 21, 5, 0, 122, 4, // Skip to: 13307
/* 12161 */   MCD::OPC_Decode, 163, 13, 189, 1, // Opcode: WSBH
/* 12166 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 12185
/* 12170 */   MCD::OPC_CheckPredicate, 4, 109, 4, // Skip to: 13307
/* 12174 */   MCD::OPC_CheckField, 21, 5, 0, 103, 4, // Skip to: 13307
/* 12180 */   MCD::OPC_Decode, 234, 10, 189, 1, // Opcode: SEB
/* 12185 */   MCD::OPC_FilterValue, 24, 94, 4, // Skip to: 13307
/* 12189 */   MCD::OPC_CheckPredicate, 4, 90, 4, // Skip to: 13307
/* 12193 */   MCD::OPC_CheckField, 21, 5, 0, 84, 4, // Skip to: 13307
/* 12199 */   MCD::OPC_Decode, 237, 10, 189, 1, // Opcode: SEH
/* 12204 */   MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 12607
/* 12208 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12211 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12229
/* 12215 */   MCD::OPC_CheckPredicate, 29, 64, 4, // Skip to: 13307
/* 12219 */   MCD::OPC_CheckField, 13, 3, 0, 58, 4, // Skip to: 13307
/* 12225 */   MCD::OPC_Decode, 204, 4, 100, // Opcode: DPA_W_PH
/* 12229 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12247
/* 12233 */   MCD::OPC_CheckPredicate, 29, 46, 4, // Skip to: 13307
/* 12237 */   MCD::OPC_CheckField, 13, 3, 0, 40, 4, // Skip to: 13307
/* 12243 */   MCD::OPC_Decode, 219, 4, 100, // Opcode: DPS_W_PH
/* 12247 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12265
/* 12251 */   MCD::OPC_CheckPredicate, 29, 28, 4, // Skip to: 13307
/* 12255 */   MCD::OPC_CheckField, 13, 3, 0, 22, 4, // Skip to: 13307
/* 12261 */   MCD::OPC_Decode, 164, 9, 100, // Opcode: MULSA_W_PH
/* 12265 */   MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 12283
/* 12269 */   MCD::OPC_CheckPredicate, 11, 10, 4, // Skip to: 13307
/* 12273 */   MCD::OPC_CheckField, 13, 3, 0, 4, 4, // Skip to: 13307
/* 12279 */   MCD::OPC_Decode, 201, 4, 100, // Opcode: DPAU_H_QBL
/* 12283 */   MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 12301
/* 12287 */   MCD::OPC_CheckPredicate, 11, 248, 3, // Skip to: 13307
/* 12291 */   MCD::OPC_CheckField, 13, 3, 0, 242, 3, // Skip to: 13307
/* 12297 */   MCD::OPC_Decode, 200, 4, 100, // Opcode: DPAQ_S_W_PH
/* 12301 */   MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 12319
/* 12305 */   MCD::OPC_CheckPredicate, 11, 230, 3, // Skip to: 13307
/* 12309 */   MCD::OPC_CheckField, 13, 3, 0, 224, 3, // Skip to: 13307
/* 12315 */   MCD::OPC_Decode, 209, 4, 100, // Opcode: DPSQ_S_W_PH
/* 12319 */   MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 12337
/* 12323 */   MCD::OPC_CheckPredicate, 11, 212, 3, // Skip to: 13307
/* 12327 */   MCD::OPC_CheckField, 13, 3, 0, 206, 3, // Skip to: 13307
/* 12333 */   MCD::OPC_Decode, 163, 9, 100, // Opcode: MULSAQ_S_W_PH
/* 12337 */   MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 12355
/* 12341 */   MCD::OPC_CheckPredicate, 11, 194, 3, // Skip to: 13307
/* 12345 */   MCD::OPC_CheckField, 13, 3, 0, 188, 3, // Skip to: 13307
/* 12351 */   MCD::OPC_Decode, 202, 4, 100, // Opcode: DPAU_H_QBR
/* 12355 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 12373
/* 12359 */   MCD::OPC_CheckPredicate, 29, 176, 3, // Skip to: 13307
/* 12363 */   MCD::OPC_CheckField, 13, 3, 0, 170, 3, // Skip to: 13307
/* 12369 */   MCD::OPC_Decode, 203, 4, 100, // Opcode: DPAX_W_PH
/* 12373 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12391
/* 12377 */   MCD::OPC_CheckPredicate, 29, 158, 3, // Skip to: 13307
/* 12381 */   MCD::OPC_CheckField, 13, 3, 0, 152, 3, // Skip to: 13307
/* 12387 */   MCD::OPC_Decode, 218, 4, 100, // Opcode: DPSX_W_PH
/* 12391 */   MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 12409
/* 12395 */   MCD::OPC_CheckPredicate, 11, 140, 3, // Skip to: 13307
/* 12399 */   MCD::OPC_CheckField, 13, 3, 0, 134, 3, // Skip to: 13307
/* 12405 */   MCD::OPC_Decode, 216, 4, 100, // Opcode: DPSU_H_QBL
/* 12409 */   MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 12427
/* 12413 */   MCD::OPC_CheckPredicate, 11, 122, 3, // Skip to: 13307
/* 12417 */   MCD::OPC_CheckField, 13, 3, 0, 116, 3, // Skip to: 13307
/* 12423 */   MCD::OPC_Decode, 199, 4, 100, // Opcode: DPAQ_SA_L_W
/* 12427 */   MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 12445
/* 12431 */   MCD::OPC_CheckPredicate, 11, 104, 3, // Skip to: 13307
/* 12435 */   MCD::OPC_CheckField, 13, 3, 0, 98, 3, // Skip to: 13307
/* 12441 */   MCD::OPC_Decode, 208, 4, 100, // Opcode: DPSQ_SA_L_W
/* 12445 */   MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 12463
/* 12449 */   MCD::OPC_CheckPredicate, 11, 86, 3, // Skip to: 13307
/* 12453 */   MCD::OPC_CheckField, 13, 3, 0, 80, 3, // Skip to: 13307
/* 12459 */   MCD::OPC_Decode, 217, 4, 100, // Opcode: DPSU_H_QBR
/* 12463 */   MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 12481
/* 12467 */   MCD::OPC_CheckPredicate, 11, 68, 3, // Skip to: 13307
/* 12471 */   MCD::OPC_CheckField, 13, 3, 0, 62, 3, // Skip to: 13307
/* 12477 */   MCD::OPC_Decode, 239, 7, 100, // Opcode: MAQ_SA_W_PHL
/* 12481 */   MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 12499
/* 12485 */   MCD::OPC_CheckPredicate, 11, 50, 3, // Skip to: 13307
/* 12489 */   MCD::OPC_CheckField, 13, 3, 0, 44, 3, // Skip to: 13307
/* 12495 */   MCD::OPC_Decode, 240, 7, 100, // Opcode: MAQ_SA_W_PHR
/* 12499 */   MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 12517
/* 12503 */   MCD::OPC_CheckPredicate, 11, 32, 3, // Skip to: 13307
/* 12507 */   MCD::OPC_CheckField, 13, 3, 0, 26, 3, // Skip to: 13307
/* 12513 */   MCD::OPC_Decode, 241, 7, 100, // Opcode: MAQ_S_W_PHL
/* 12517 */   MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 12535
/* 12521 */   MCD::OPC_CheckPredicate, 11, 14, 3, // Skip to: 13307
/* 12525 */   MCD::OPC_CheckField, 13, 3, 0, 8, 3, // Skip to: 13307
/* 12531 */   MCD::OPC_Decode, 242, 7, 100, // Opcode: MAQ_S_W_PHR
/* 12535 */   MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 12553
/* 12539 */   MCD::OPC_CheckPredicate, 29, 252, 2, // Skip to: 13307
/* 12543 */   MCD::OPC_CheckField, 13, 3, 0, 246, 2, // Skip to: 13307
/* 12549 */   MCD::OPC_Decode, 198, 4, 100, // Opcode: DPAQX_S_W_PH
/* 12553 */   MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 12571
/* 12557 */   MCD::OPC_CheckPredicate, 29, 234, 2, // Skip to: 13307
/* 12561 */   MCD::OPC_CheckField, 13, 3, 0, 228, 2, // Skip to: 13307
/* 12567 */   MCD::OPC_Decode, 207, 4, 100, // Opcode: DPSQX_S_W_PH
/* 12571 */   MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 12589
/* 12575 */   MCD::OPC_CheckPredicate, 29, 216, 2, // Skip to: 13307
/* 12579 */   MCD::OPC_CheckField, 13, 3, 0, 210, 2, // Skip to: 13307
/* 12585 */   MCD::OPC_Decode, 197, 4, 100, // Opcode: DPAQX_SA_W_PH
/* 12589 */   MCD::OPC_FilterValue, 27, 202, 2, // Skip to: 13307
/* 12593 */   MCD::OPC_CheckPredicate, 29, 198, 2, // Skip to: 13307
/* 12597 */   MCD::OPC_CheckField, 13, 3, 0, 192, 2, // Skip to: 13307
/* 12603 */   MCD::OPC_Decode, 206, 4, 100, // Opcode: DPSQX_SA_W_PH
/* 12607 */   MCD::OPC_FilterValue, 49, 41, 0, // Skip to: 12652
/* 12611 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12614 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 12626
/* 12618 */   MCD::OPC_CheckPredicate, 29, 173, 2, // Skip to: 13307
/* 12622 */   MCD::OPC_Decode, 92, 193, 1, // Opcode: APPEND
/* 12626 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12639
/* 12630 */   MCD::OPC_CheckPredicate, 29, 161, 2, // Skip to: 13307
/* 12634 */   MCD::OPC_Decode, 141, 10, 193, 1, // Opcode: PREPEND
/* 12639 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 13307
/* 12643 */   MCD::OPC_CheckPredicate, 29, 148, 2, // Skip to: 13307
/* 12647 */   MCD::OPC_Decode, 164, 1, 193, 1, // Opcode: BALIGN
/* 12652 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 12970
/* 12656 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12659 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 12678
/* 12663 */   MCD::OPC_CheckPredicate, 11, 128, 2, // Skip to: 13307
/* 12667 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 13307
/* 12673 */   MCD::OPC_Decode, 130, 5, 194, 1, // Opcode: EXTR_W
/* 12678 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 12697
/* 12682 */   MCD::OPC_CheckPredicate, 11, 109, 2, // Skip to: 13307
/* 12686 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 13307
/* 12692 */   MCD::OPC_Decode, 254, 4, 195, 1, // Opcode: EXTRV_W
/* 12697 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12716
/* 12701 */   MCD::OPC_CheckPredicate, 11, 90, 2, // Skip to: 13307
/* 12705 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 13307
/* 12711 */   MCD::OPC_Decode, 247, 4, 194, 1, // Opcode: EXTP
/* 12716 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12735
/* 12720 */   MCD::OPC_CheckPredicate, 11, 71, 2, // Skip to: 13307
/* 12724 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 13307
/* 12730 */   MCD::OPC_Decode, 250, 4, 195, 1, // Opcode: EXTPV
/* 12735 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12754
/* 12739 */   MCD::OPC_CheckPredicate, 11, 52, 2, // Skip to: 13307
/* 12743 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 13307
/* 12749 */   MCD::OPC_Decode, 128, 5, 194, 1, // Opcode: EXTR_R_W
/* 12754 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12773
/* 12758 */   MCD::OPC_CheckPredicate, 11, 33, 2, // Skip to: 13307
/* 12762 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 13307
/* 12768 */   MCD::OPC_Decode, 252, 4, 195, 1, // Opcode: EXTRV_R_W
/* 12773 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12792
/* 12777 */   MCD::OPC_CheckPredicate, 11, 14, 2, // Skip to: 13307
/* 12781 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 13307
/* 12787 */   MCD::OPC_Decode, 255, 4, 194, 1, // Opcode: EXTR_RS_W
/* 12792 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12811
/* 12796 */   MCD::OPC_CheckPredicate, 11, 251, 1, // Skip to: 13307
/* 12800 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 13307
/* 12806 */   MCD::OPC_Decode, 251, 4, 195, 1, // Opcode: EXTRV_RS_W
/* 12811 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 12830
/* 12815 */   MCD::OPC_CheckPredicate, 11, 232, 1, // Skip to: 13307
/* 12819 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 13307
/* 12825 */   MCD::OPC_Decode, 248, 4, 194, 1, // Opcode: EXTPDP
/* 12830 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12849
/* 12834 */   MCD::OPC_CheckPredicate, 11, 213, 1, // Skip to: 13307
/* 12838 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 13307
/* 12844 */   MCD::OPC_Decode, 249, 4, 195, 1, // Opcode: EXTPDPV
/* 12849 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 12868
/* 12853 */   MCD::OPC_CheckPredicate, 11, 194, 1, // Skip to: 13307
/* 12857 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 13307
/* 12863 */   MCD::OPC_Decode, 129, 5, 194, 1, // Opcode: EXTR_S_H
/* 12868 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 12887
/* 12872 */   MCD::OPC_CheckPredicate, 11, 175, 1, // Skip to: 13307
/* 12876 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 13307
/* 12882 */   MCD::OPC_Decode, 253, 4, 195, 1, // Opcode: EXTRV_S_H
/* 12887 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 12900
/* 12891 */   MCD::OPC_CheckPredicate, 11, 156, 1, // Skip to: 13307
/* 12895 */   MCD::OPC_Decode, 179, 10, 196, 1, // Opcode: RDDSP
/* 12900 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 12913
/* 12904 */   MCD::OPC_CheckPredicate, 11, 143, 1, // Skip to: 13307
/* 12908 */   MCD::OPC_Decode, 162, 13, 197, 1, // Opcode: WRDSP
/* 12913 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 12932
/* 12917 */   MCD::OPC_CheckPredicate, 11, 130, 1, // Skip to: 13307
/* 12921 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 13307
/* 12927 */   MCD::OPC_Decode, 129, 11, 198, 1, // Opcode: SHILO
/* 12932 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12951
/* 12936 */   MCD::OPC_CheckPredicate, 11, 111, 1, // Skip to: 13307
/* 12940 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 13307
/* 12946 */   MCD::OPC_Decode, 130, 11, 199, 1, // Opcode: SHILOV
/* 12951 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 13307
/* 12955 */   MCD::OPC_CheckPredicate, 11, 92, 1, // Skip to: 13307
/* 12959 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 13307
/* 12965 */   MCD::OPC_Decode, 139, 9, 199, 1, // Opcode: MTHLIP
/* 12970 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 13307
/* 12974 */   MCD::OPC_CheckPredicate, 1, 73, 1, // Skip to: 13307
/* 12978 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 13307
/* 12984 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 13307
/* 12990 */   MCD::OPC_Decode, 180, 10, 200, 1, // Opcode: RDHWR
/* 12995 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 13008
/* 12999 */   MCD::OPC_CheckPredicate, 1, 48, 1, // Skip to: 13307
/* 13003 */   MCD::OPC_Decode, 251, 6, 201, 1, // Opcode: LB
/* 13008 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 13021
/* 13012 */   MCD::OPC_CheckPredicate, 1, 35, 1, // Skip to: 13307
/* 13016 */   MCD::OPC_Decode, 153, 7, 201, 1, // Opcode: LH
/* 13021 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 13034
/* 13025 */   MCD::OPC_CheckPredicate, 10, 22, 1, // Skip to: 13307
/* 13029 */   MCD::OPC_Decode, 188, 7, 201, 1, // Opcode: LWL
/* 13034 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 13047
/* 13038 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 13307
/* 13042 */   MCD::OPC_Decode, 181, 7, 201, 1, // Opcode: LW
/* 13047 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 13060
/* 13051 */   MCD::OPC_CheckPredicate, 1, 252, 0, // Skip to: 13307
/* 13055 */   MCD::OPC_Decode, 255, 6, 201, 1, // Opcode: LBu
/* 13060 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 13073
/* 13064 */   MCD::OPC_CheckPredicate, 1, 239, 0, // Skip to: 13307
/* 13068 */   MCD::OPC_Decode, 157, 7, 201, 1, // Opcode: LHu
/* 13073 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 13086
/* 13077 */   MCD::OPC_CheckPredicate, 10, 226, 0, // Skip to: 13307
/* 13081 */   MCD::OPC_Decode, 192, 7, 201, 1, // Opcode: LWR
/* 13086 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 13099
/* 13090 */   MCD::OPC_CheckPredicate, 1, 213, 0, // Skip to: 13307
/* 13094 */   MCD::OPC_Decode, 211, 10, 201, 1, // Opcode: SB
/* 13099 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 13112
/* 13103 */   MCD::OPC_CheckPredicate, 1, 200, 0, // Skip to: 13307
/* 13107 */   MCD::OPC_Decode, 252, 10, 201, 1, // Opcode: SH
/* 13112 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 13125
/* 13116 */   MCD::OPC_CheckPredicate, 10, 187, 0, // Skip to: 13307
/* 13120 */   MCD::OPC_Decode, 178, 12, 201, 1, // Opcode: SWL
/* 13125 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 13138
/* 13129 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 13307
/* 13133 */   MCD::OPC_Decode, 171, 12, 201, 1, // Opcode: SW
/* 13138 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 13151
/* 13142 */   MCD::OPC_CheckPredicate, 10, 161, 0, // Skip to: 13307
/* 13146 */   MCD::OPC_Decode, 181, 12, 201, 1, // Opcode: SWR
/* 13151 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 13164
/* 13155 */   MCD::OPC_CheckPredicate, 30, 148, 0, // Skip to: 13307
/* 13159 */   MCD::OPC_Decode, 195, 2, 202, 1, // Opcode: CACHE
/* 13164 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 13177
/* 13168 */   MCD::OPC_CheckPredicate, 31, 135, 0, // Skip to: 13307
/* 13172 */   MCD::OPC_Decode, 161, 7, 201, 1, // Opcode: LL
/* 13177 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 13190
/* 13181 */   MCD::OPC_CheckPredicate, 1, 122, 0, // Skip to: 13307
/* 13185 */   MCD::OPC_Decode, 183, 7, 203, 1, // Opcode: LWC1
/* 13190 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 13203
/* 13194 */   MCD::OPC_CheckPredicate, 12, 109, 0, // Skip to: 13307
/* 13198 */   MCD::OPC_Decode, 185, 7, 204, 1, // Opcode: LWC2
/* 13203 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 13216
/* 13207 */   MCD::OPC_CheckPredicate, 30, 96, 0, // Skip to: 13307
/* 13211 */   MCD::OPC_Decode, 139, 10, 202, 1, // Opcode: PREF
/* 13216 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 13229
/* 13220 */   MCD::OPC_CheckPredicate, 32, 83, 0, // Skip to: 13307
/* 13224 */   MCD::OPC_Decode, 131, 7, 203, 1, // Opcode: LDC1
/* 13229 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 13242
/* 13233 */   MCD::OPC_CheckPredicate, 14, 70, 0, // Skip to: 13307
/* 13237 */   MCD::OPC_Decode, 134, 7, 204, 1, // Opcode: LDC2
/* 13242 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 13255
/* 13246 */   MCD::OPC_CheckPredicate, 31, 57, 0, // Skip to: 13307
/* 13250 */   MCD::OPC_Decode, 214, 10, 201, 1, // Opcode: SC
/* 13255 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 13268
/* 13259 */   MCD::OPC_CheckPredicate, 1, 44, 0, // Skip to: 13307
/* 13263 */   MCD::OPC_Decode, 173, 12, 203, 1, // Opcode: SWC1
/* 13268 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 13281
/* 13272 */   MCD::OPC_CheckPredicate, 12, 31, 0, // Skip to: 13307
/* 13276 */   MCD::OPC_Decode, 175, 12, 204, 1, // Opcode: SWC2
/* 13281 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 13294
/* 13285 */   MCD::OPC_CheckPredicate, 32, 18, 0, // Skip to: 13307
/* 13289 */   MCD::OPC_Decode, 222, 10, 203, 1, // Opcode: SDC1
/* 13294 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 13307
/* 13298 */   MCD::OPC_CheckPredicate, 14, 5, 0, // Skip to: 13307
/* 13302 */   MCD::OPC_Decode, 225, 10, 204, 1, // Opcode: SDC2
/* 13307 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 205, 1, // Skip to: 468
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 33, 39, 7, // Skip to: 1849
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 33, 7, // Skip to: 1849
/* 24 */      MCD::OPC_Decode, 174, 7, 205, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 47
/* 33 */      MCD::OPC_CheckPredicate, 33, 20, 7, // Skip to: 1849
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 14, 7, // Skip to: 1849
/* 43 */      MCD::OPC_Decode, 242, 6, 47, // Opcode: JR_HB_R6
/* 47 */      MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 59
/* 51 */      MCD::OPC_CheckPredicate, 33, 2, 7, // Skip to: 1849
/* 55 */      MCD::OPC_Decode, 221, 10, 50, // Opcode: SDBBP_R6
/* 59 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 83
/* 63 */      MCD::OPC_CheckPredicate, 33, 246, 6, // Skip to: 1849
/* 67 */      MCD::OPC_CheckField, 16, 5, 0, 240, 6, // Skip to: 1849
/* 73 */      MCD::OPC_CheckField, 6, 5, 1, 234, 6, // Skip to: 1849
/* 79 */      MCD::OPC_Decode, 128, 3, 48, // Opcode: CLZ_R6
/* 83 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 107
/* 87 */      MCD::OPC_CheckPredicate, 33, 222, 6, // Skip to: 1849
/* 91 */      MCD::OPC_CheckField, 16, 5, 0, 216, 6, // Skip to: 1849
/* 97 */      MCD::OPC_CheckField, 6, 5, 1, 210, 6, // Skip to: 1849
/* 103 */     MCD::OPC_Decode, 237, 2, 48, // Opcode: CLO_R6
/* 107 */     MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 132
/* 111 */     MCD::OPC_CheckPredicate, 34, 198, 6, // Skip to: 1849
/* 115 */     MCD::OPC_CheckField, 16, 5, 0, 192, 6, // Skip to: 1849
/* 121 */     MCD::OPC_CheckField, 6, 5, 1, 186, 6, // Skip to: 1849
/* 127 */     MCD::OPC_Decode, 145, 4, 206, 1, // Opcode: DCLZ_R6
/* 132 */     MCD::OPC_FilterValue, 19, 21, 0, // Skip to: 157
/* 136 */     MCD::OPC_CheckPredicate, 34, 173, 6, // Skip to: 1849
/* 140 */     MCD::OPC_CheckField, 16, 5, 0, 167, 6, // Skip to: 1849
/* 146 */     MCD::OPC_CheckField, 6, 5, 1, 161, 6, // Skip to: 1849
/* 152 */     MCD::OPC_Decode, 143, 4, 206, 1, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 34, 148, 6, // Skip to: 1849
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 142, 6, // Skip to: 1849
/* 171 */     MCD::OPC_Decode, 169, 4, 207, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 33, 122, 6, // Skip to: 1849
/* 191 */     MCD::OPC_Decode, 180, 9, 25, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 114, 6, // Skip to: 1849
/* 199 */     MCD::OPC_CheckPredicate, 33, 110, 6, // Skip to: 1849
/* 203 */     MCD::OPC_Decode, 150, 9, 25, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 33, 91, 6, // Skip to: 1849
/* 222 */     MCD::OPC_Decode, 171, 9, 25, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 83, 6, // Skip to: 1849
/* 230 */     MCD::OPC_CheckPredicate, 33, 79, 6, // Skip to: 1849
/* 234 */     MCD::OPC_Decode, 151, 9, 25, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 33, 60, 6, // Skip to: 1849
/* 253 */     MCD::OPC_Decode, 157, 4, 25, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 52, 6, // Skip to: 1849
/* 261 */     MCD::OPC_CheckPredicate, 33, 48, 6, // Skip to: 1849
/* 265 */     MCD::OPC_Decode, 182, 8, 25, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 33, 29, 6, // Skip to: 1849
/* 284 */     MCD::OPC_Decode, 158, 4, 25, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 21, 6, // Skip to: 1849
/* 292 */     MCD::OPC_CheckPredicate, 33, 17, 6, // Skip to: 1849
/* 296 */     MCD::OPC_Decode, 184, 8, 25, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 333
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 320
/* 311 */     MCD::OPC_CheckPredicate, 34, 254, 5, // Skip to: 1849
/* 315 */     MCD::OPC_Decode, 184, 4, 208, 1, // Opcode: DMUL_R6
/* 320 */     MCD::OPC_FilterValue, 3, 245, 5, // Skip to: 1849
/* 324 */     MCD::OPC_CheckPredicate, 34, 241, 5, // Skip to: 1849
/* 328 */     MCD::OPC_Decode, 178, 4, 208, 1, // Opcode: DMUH
/* 333 */     MCD::OPC_FilterValue, 29, 29, 0, // Skip to: 366
/* 337 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 340 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 353
/* 344 */     MCD::OPC_CheckPredicate, 34, 221, 5, // Skip to: 1849
/* 348 */     MCD::OPC_Decode, 183, 4, 208, 1, // Opcode: DMULU
/* 353 */     MCD::OPC_FilterValue, 3, 212, 5, // Skip to: 1849
/* 357 */     MCD::OPC_CheckPredicate, 34, 208, 5, // Skip to: 1849
/* 361 */     MCD::OPC_Decode, 179, 4, 208, 1, // Opcode: DMUHU
/* 366 */     MCD::OPC_FilterValue, 30, 29, 0, // Skip to: 399
/* 370 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 373 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 386
/* 377 */     MCD::OPC_CheckPredicate, 34, 188, 5, // Skip to: 1849
/* 381 */     MCD::OPC_Decode, 146, 4, 208, 1, // Opcode: DDIV
/* 386 */     MCD::OPC_FilterValue, 3, 179, 5, // Skip to: 1849
/* 390 */     MCD::OPC_CheckPredicate, 34, 175, 5, // Skip to: 1849
/* 394 */     MCD::OPC_Decode, 173, 4, 208, 1, // Opcode: DMOD
/* 399 */     MCD::OPC_FilterValue, 31, 29, 0, // Skip to: 432
/* 403 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 406 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 419
/* 410 */     MCD::OPC_CheckPredicate, 34, 155, 5, // Skip to: 1849
/* 414 */     MCD::OPC_Decode, 147, 4, 208, 1, // Opcode: DDIVU
/* 419 */     MCD::OPC_FilterValue, 3, 146, 5, // Skip to: 1849
/* 423 */     MCD::OPC_CheckPredicate, 34, 142, 5, // Skip to: 1849
/* 427 */     MCD::OPC_Decode, 174, 4, 208, 1, // Opcode: DMODU
/* 432 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 450
/* 436 */     MCD::OPC_CheckPredicate, 35, 129, 5, // Skip to: 1849
/* 440 */     MCD::OPC_CheckField, 6, 5, 0, 123, 5, // Skip to: 1849
/* 446 */     MCD::OPC_Decode, 240, 10, 25, // Opcode: SELEQZ
/* 450 */     MCD::OPC_FilterValue, 55, 115, 5, // Skip to: 1849
/* 454 */     MCD::OPC_CheckPredicate, 35, 111, 5, // Skip to: 1849
/* 458 */     MCD::OPC_CheckField, 6, 5, 0, 105, 5, // Skip to: 1849
/* 464 */     MCD::OPC_Decode, 244, 10, 25, // Opcode: SELNEZ
/* 468 */     MCD::OPC_FilterValue, 1, 47, 0, // Skip to: 519
/* 472 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 475 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 488
/* 479 */     MCD::OPC_CheckPredicate, 34, 86, 5, // Skip to: 1849
/* 483 */     MCD::OPC_Decode, 137, 4, 209, 1, // Opcode: DAHI
/* 488 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 506
/* 492 */     MCD::OPC_CheckPredicate, 33, 73, 5, // Skip to: 1849
/* 496 */     MCD::OPC_CheckField, 21, 5, 0, 67, 5, // Skip to: 1849
/* 502 */     MCD::OPC_Decode, 162, 1, 61, // Opcode: BAL
/* 506 */     MCD::OPC_FilterValue, 30, 59, 5, // Skip to: 1849
/* 510 */     MCD::OPC_CheckPredicate, 34, 55, 5, // Skip to: 1849
/* 514 */     MCD::OPC_Decode, 139, 4, 209, 1, // Opcode: DATI
/* 519 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 532
/* 523 */     MCD::OPC_CheckPredicate, 33, 42, 5, // Skip to: 1849
/* 527 */     MCD::OPC_Decode, 198, 1, 210, 1, // Opcode: BGEZALC
/* 532 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 545
/* 536 */     MCD::OPC_CheckPredicate, 33, 29, 5, // Skip to: 1849
/* 540 */     MCD::OPC_Decode, 240, 1, 211, 1, // Opcode: BLTZALC
/* 545 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 558
/* 549 */     MCD::OPC_CheckPredicate, 33, 16, 5, // Skip to: 1849
/* 553 */     MCD::OPC_Decode, 187, 1, 212, 1, // Opcode: BEQC
/* 558 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 570
/* 562 */     MCD::OPC_CheckPredicate, 33, 3, 5, // Skip to: 1849
/* 566 */     MCD::OPC_Decode, 133, 1, 35, // Opcode: AUI
/* 570 */     MCD::OPC_FilterValue, 17, 5, 3, // Skip to: 1347
/* 574 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 577 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 590
/* 581 */     MCD::OPC_CheckPredicate, 33, 240, 4, // Skip to: 1849
/* 585 */     MCD::OPC_Decode, 167, 1, 213, 1, // Opcode: BC1EQZ
/* 590 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 603
/* 594 */     MCD::OPC_CheckPredicate, 33, 227, 4, // Skip to: 1849
/* 598 */     MCD::OPC_Decode, 171, 1, 213, 1, // Opcode: BC1NEZ
/* 603 */     MCD::OPC_FilterValue, 16, 150, 0, // Skip to: 757
/* 607 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 610 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 623
/* 614 */     MCD::OPC_CheckPredicate, 33, 207, 4, // Skip to: 1849
/* 618 */     MCD::OPC_Decode, 249, 10, 214, 1, // Opcode: SEL_S
/* 623 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 635
/* 627 */     MCD::OPC_CheckPredicate, 33, 194, 4, // Skip to: 1849
/* 631 */     MCD::OPC_Decode, 243, 10, 77, // Opcode: SELEQZ_S
/* 635 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 647
/* 639 */     MCD::OPC_CheckPredicate, 33, 182, 4, // Skip to: 1849
/* 643 */     MCD::OPC_Decode, 247, 10, 77, // Opcode: SELNEZ_S
/* 647 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 660
/* 651 */     MCD::OPC_CheckPredicate, 33, 170, 4, // Skip to: 1849
/* 655 */     MCD::OPC_Decode, 220, 7, 215, 1, // Opcode: MADDF_S
/* 660 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 673
/* 664 */     MCD::OPC_CheckPredicate, 33, 157, 4, // Skip to: 1849
/* 668 */     MCD::OPC_Decode, 237, 8, 215, 1, // Opcode: MSUBF_S
/* 673 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 691
/* 677 */     MCD::OPC_CheckPredicate, 33, 144, 4, // Skip to: 1849
/* 681 */     MCD::OPC_CheckField, 16, 5, 0, 138, 4, // Skip to: 1849
/* 687 */     MCD::OPC_Decode, 187, 10, 78, // Opcode: RINT_S
/* 691 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 709
/* 695 */     MCD::OPC_CheckPredicate, 33, 126, 4, // Skip to: 1849
/* 699 */     MCD::OPC_CheckField, 16, 5, 0, 120, 4, // Skip to: 1849
/* 705 */     MCD::OPC_Decode, 218, 2, 78, // Opcode: CLASS_S
/* 709 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 721
/* 713 */     MCD::OPC_CheckPredicate, 33, 108, 4, // Skip to: 1849
/* 717 */     MCD::OPC_Decode, 171, 8, 77, // Opcode: MIN_S
/* 721 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 733
/* 725 */     MCD::OPC_CheckPredicate, 33, 96, 4, // Skip to: 1849
/* 729 */     MCD::OPC_Decode, 130, 8, 77, // Opcode: MAX_S
/* 733 */     MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 745
/* 737 */     MCD::OPC_CheckPredicate, 33, 84, 4, // Skip to: 1849
/* 741 */     MCD::OPC_Decode, 157, 8, 77, // Opcode: MINA_S
/* 745 */     MCD::OPC_FilterValue, 31, 76, 4, // Skip to: 1849
/* 749 */     MCD::OPC_CheckPredicate, 33, 72, 4, // Skip to: 1849
/* 753 */     MCD::OPC_Decode, 244, 7, 77, // Opcode: MAXA_S
/* 757 */     MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 917
/* 761 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 764 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 777
/* 768 */     MCD::OPC_CheckPredicate, 33, 53, 4, // Skip to: 1849
/* 772 */     MCD::OPC_Decode, 248, 10, 216, 1, // Opcode: SEL_D
/* 777 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 790
/* 781 */     MCD::OPC_CheckPredicate, 33, 40, 4, // Skip to: 1849
/* 785 */     MCD::OPC_Decode, 242, 10, 217, 1, // Opcode: SELEQZ_D
/* 790 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 803
/* 794 */     MCD::OPC_CheckPredicate, 33, 27, 4, // Skip to: 1849
/* 798 */     MCD::OPC_Decode, 246, 10, 217, 1, // Opcode: SELNEZ_D
/* 803 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 816
/* 807 */     MCD::OPC_CheckPredicate, 33, 14, 4, // Skip to: 1849
/* 811 */     MCD::OPC_Decode, 219, 7, 218, 1, // Opcode: MADDF_D
/* 816 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 829
/* 820 */     MCD::OPC_CheckPredicate, 33, 1, 4, // Skip to: 1849
/* 824 */     MCD::OPC_Decode, 236, 8, 218, 1, // Opcode: MSUBF_D
/* 829 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 847
/* 833 */     MCD::OPC_CheckPredicate, 33, 244, 3, // Skip to: 1849
/* 837 */     MCD::OPC_CheckField, 16, 5, 0, 238, 3, // Skip to: 1849
/* 843 */     MCD::OPC_Decode, 186, 10, 89, // Opcode: RINT_D
/* 847 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 865
/* 851 */     MCD::OPC_CheckPredicate, 33, 226, 3, // Skip to: 1849
/* 855 */     MCD::OPC_CheckField, 16, 5, 0, 220, 3, // Skip to: 1849
/* 861 */     MCD::OPC_Decode, 217, 2, 89, // Opcode: CLASS_D
/* 865 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 878
/* 869 */     MCD::OPC_CheckPredicate, 33, 208, 3, // Skip to: 1849
/* 873 */     MCD::OPC_Decode, 170, 8, 217, 1, // Opcode: MIN_D
/* 878 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 891
/* 882 */     MCD::OPC_CheckPredicate, 33, 195, 3, // Skip to: 1849
/* 886 */     MCD::OPC_Decode, 129, 8, 217, 1, // Opcode: MAX_D
/* 891 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 904
/* 895 */     MCD::OPC_CheckPredicate, 33, 182, 3, // Skip to: 1849
/* 899 */     MCD::OPC_Decode, 156, 8, 217, 1, // Opcode: MINA_D
/* 904 */     MCD::OPC_FilterValue, 31, 173, 3, // Skip to: 1849
/* 908 */     MCD::OPC_CheckPredicate, 33, 169, 3, // Skip to: 1849
/* 912 */     MCD::OPC_Decode, 243, 7, 217, 1, // Opcode: MAXA_D
/* 917 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1132
/* 921 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 924 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 937
/* 928 */     MCD::OPC_CheckPredicate, 33, 149, 3, // Skip to: 1849
/* 932 */     MCD::OPC_Decode, 142, 3, 219, 1, // Opcode: CMP_F_S
/* 937 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 950
/* 941 */     MCD::OPC_CheckPredicate, 33, 136, 3, // Skip to: 1849
/* 945 */     MCD::OPC_Decode, 172, 3, 219, 1, // Opcode: CMP_UN_S
/* 950 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 963
/* 954 */     MCD::OPC_CheckPredicate, 33, 123, 3, // Skip to: 1849
/* 958 */     MCD::OPC_Decode, 140, 3, 219, 1, // Opcode: CMP_EQ_S
/* 963 */     MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 976
/* 967 */     MCD::OPC_CheckPredicate, 33, 110, 3, // Skip to: 1849
/* 971 */     MCD::OPC_Decode, 166, 3, 219, 1, // Opcode: CMP_UEQ_S
/* 976 */     MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 989
/* 980 */     MCD::OPC_CheckPredicate, 33, 97, 3, // Skip to: 1849
/* 984 */     MCD::OPC_Decode, 148, 3, 219, 1, // Opcode: CMP_LT_S
/* 989 */     MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1002
/* 993 */     MCD::OPC_CheckPredicate, 33, 84, 3, // Skip to: 1849
/* 997 */     MCD::OPC_Decode, 170, 3, 219, 1, // Opcode: CMP_ULT_S
/* 1002 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1015
/* 1006 */    MCD::OPC_CheckPredicate, 33, 71, 3, // Skip to: 1849
/* 1010 */    MCD::OPC_Decode, 145, 3, 219, 1, // Opcode: CMP_LE_S
/* 1015 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1028
/* 1019 */    MCD::OPC_CheckPredicate, 33, 58, 3, // Skip to: 1849
/* 1023 */    MCD::OPC_Decode, 168, 3, 219, 1, // Opcode: CMP_ULE_S
/* 1028 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1041
/* 1032 */    MCD::OPC_CheckPredicate, 33, 45, 3, // Skip to: 1849
/* 1036 */    MCD::OPC_Decode, 150, 3, 219, 1, // Opcode: CMP_SAF_S
/* 1041 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1054
/* 1045 */    MCD::OPC_CheckPredicate, 33, 32, 3, // Skip to: 1849
/* 1049 */    MCD::OPC_Decode, 164, 3, 219, 1, // Opcode: CMP_SUN_S
/* 1054 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1067
/* 1058 */    MCD::OPC_CheckPredicate, 33, 19, 3, // Skip to: 1849
/* 1062 */    MCD::OPC_Decode, 152, 3, 219, 1, // Opcode: CMP_SEQ_S
/* 1067 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1080
/* 1071 */    MCD::OPC_CheckPredicate, 33, 6, 3, // Skip to: 1849
/* 1075 */    MCD::OPC_Decode, 158, 3, 219, 1, // Opcode: CMP_SUEQ_S
/* 1080 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1093
/* 1084 */    MCD::OPC_CheckPredicate, 33, 249, 2, // Skip to: 1849
/* 1088 */    MCD::OPC_Decode, 156, 3, 219, 1, // Opcode: CMP_SLT_S
/* 1093 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1106
/* 1097 */    MCD::OPC_CheckPredicate, 33, 236, 2, // Skip to: 1849
/* 1101 */    MCD::OPC_Decode, 162, 3, 219, 1, // Opcode: CMP_SULT_S
/* 1106 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1119
/* 1110 */    MCD::OPC_CheckPredicate, 33, 223, 2, // Skip to: 1849
/* 1114 */    MCD::OPC_Decode, 154, 3, 219, 1, // Opcode: CMP_SLE_S
/* 1119 */    MCD::OPC_FilterValue, 15, 214, 2, // Skip to: 1849
/* 1123 */    MCD::OPC_CheckPredicate, 33, 210, 2, // Skip to: 1849
/* 1127 */    MCD::OPC_Decode, 160, 3, 219, 1, // Opcode: CMP_SULE_S
/* 1132 */    MCD::OPC_FilterValue, 21, 201, 2, // Skip to: 1849
/* 1136 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1139 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1152
/* 1143 */    MCD::OPC_CheckPredicate, 33, 190, 2, // Skip to: 1849
/* 1147 */    MCD::OPC_Decode, 141, 3, 220, 1, // Opcode: CMP_F_D
/* 1152 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1165
/* 1156 */    MCD::OPC_CheckPredicate, 33, 177, 2, // Skip to: 1849
/* 1160 */    MCD::OPC_Decode, 171, 3, 220, 1, // Opcode: CMP_UN_D
/* 1165 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1178
/* 1169 */    MCD::OPC_CheckPredicate, 33, 164, 2, // Skip to: 1849
/* 1173 */    MCD::OPC_Decode, 138, 3, 220, 1, // Opcode: CMP_EQ_D
/* 1178 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1191
/* 1182 */    MCD::OPC_CheckPredicate, 33, 151, 2, // Skip to: 1849
/* 1186 */    MCD::OPC_Decode, 165, 3, 220, 1, // Opcode: CMP_UEQ_D
/* 1191 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1204
/* 1195 */    MCD::OPC_CheckPredicate, 33, 138, 2, // Skip to: 1849
/* 1199 */    MCD::OPC_Decode, 146, 3, 220, 1, // Opcode: CMP_LT_D
/* 1204 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1217
/* 1208 */    MCD::OPC_CheckPredicate, 33, 125, 2, // Skip to: 1849
/* 1212 */    MCD::OPC_Decode, 169, 3, 220, 1, // Opcode: CMP_ULT_D
/* 1217 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1230
/* 1221 */    MCD::OPC_CheckPredicate, 33, 112, 2, // Skip to: 1849
/* 1225 */    MCD::OPC_Decode, 143, 3, 220, 1, // Opcode: CMP_LE_D
/* 1230 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1243
/* 1234 */    MCD::OPC_CheckPredicate, 33, 99, 2, // Skip to: 1849
/* 1238 */    MCD::OPC_Decode, 167, 3, 220, 1, // Opcode: CMP_ULE_D
/* 1243 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1256
/* 1247 */    MCD::OPC_CheckPredicate, 33, 86, 2, // Skip to: 1849
/* 1251 */    MCD::OPC_Decode, 149, 3, 220, 1, // Opcode: CMP_SAF_D
/* 1256 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1269
/* 1260 */    MCD::OPC_CheckPredicate, 33, 73, 2, // Skip to: 1849
/* 1264 */    MCD::OPC_Decode, 163, 3, 220, 1, // Opcode: CMP_SUN_D
/* 1269 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1282
/* 1273 */    MCD::OPC_CheckPredicate, 33, 60, 2, // Skip to: 1849
/* 1277 */    MCD::OPC_Decode, 151, 3, 220, 1, // Opcode: CMP_SEQ_D
/* 1282 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1295
/* 1286 */    MCD::OPC_CheckPredicate, 33, 47, 2, // Skip to: 1849
/* 1290 */    MCD::OPC_Decode, 157, 3, 220, 1, // Opcode: CMP_SUEQ_D
/* 1295 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1308
/* 1299 */    MCD::OPC_CheckPredicate, 33, 34, 2, // Skip to: 1849
/* 1303 */    MCD::OPC_Decode, 155, 3, 220, 1, // Opcode: CMP_SLT_D
/* 1308 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1321
/* 1312 */    MCD::OPC_CheckPredicate, 33, 21, 2, // Skip to: 1849
/* 1316 */    MCD::OPC_Decode, 161, 3, 220, 1, // Opcode: CMP_SULT_D
/* 1321 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1334
/* 1325 */    MCD::OPC_CheckPredicate, 33, 8, 2, // Skip to: 1849
/* 1329 */    MCD::OPC_Decode, 153, 3, 220, 1, // Opcode: CMP_SLE_D
/* 1334 */    MCD::OPC_FilterValue, 15, 255, 1, // Skip to: 1849
/* 1338 */    MCD::OPC_CheckPredicate, 33, 251, 1, // Skip to: 1849
/* 1342 */    MCD::OPC_Decode, 159, 3, 220, 1, // Opcode: CMP_SULE_D
/* 1347 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1432
/* 1351 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1354 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1367
/* 1358 */    MCD::OPC_CheckPredicate, 33, 231, 1, // Skip to: 1849
/* 1362 */    MCD::OPC_Decode, 175, 1, 221, 1, // Opcode: BC2EQZ
/* 1367 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1380
/* 1371 */    MCD::OPC_CheckPredicate, 33, 218, 1, // Skip to: 1849
/* 1375 */    MCD::OPC_Decode, 186, 7, 222, 1, // Opcode: LWC2_R6
/* 1380 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1393
/* 1384 */    MCD::OPC_CheckPredicate, 33, 205, 1, // Skip to: 1849
/* 1388 */    MCD::OPC_Decode, 176, 12, 222, 1, // Opcode: SWC2_R6
/* 1393 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1406
/* 1397 */    MCD::OPC_CheckPredicate, 33, 192, 1, // Skip to: 1849
/* 1401 */    MCD::OPC_Decode, 176, 1, 221, 1, // Opcode: BC2NEZ
/* 1406 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1419
/* 1410 */    MCD::OPC_CheckPredicate, 33, 179, 1, // Skip to: 1849
/* 1414 */    MCD::OPC_Decode, 135, 7, 222, 1, // Opcode: LDC2_R6
/* 1419 */    MCD::OPC_FilterValue, 15, 170, 1, // Skip to: 1849
/* 1423 */    MCD::OPC_CheckPredicate, 33, 166, 1, // Skip to: 1849
/* 1427 */    MCD::OPC_Decode, 226, 10, 222, 1, // Opcode: SDC2_R6
/* 1432 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1445
/* 1436 */    MCD::OPC_CheckPredicate, 33, 153, 1, // Skip to: 1849
/* 1440 */    MCD::OPC_Decode, 202, 1, 223, 1, // Opcode: BGEZC
/* 1445 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1458
/* 1449 */    MCD::OPC_CheckPredicate, 33, 140, 1, // Skip to: 1849
/* 1453 */    MCD::OPC_Decode, 244, 1, 224, 1, // Opcode: BLTZC
/* 1458 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1471
/* 1462 */    MCD::OPC_CheckPredicate, 33, 127, 1, // Skip to: 1849
/* 1466 */    MCD::OPC_Decode, 253, 1, 225, 1, // Opcode: BNEC
/* 1471 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1484
/* 1475 */    MCD::OPC_CheckPredicate, 34, 114, 1, // Skip to: 1849
/* 1479 */    MCD::OPC_Decode, 140, 4, 226, 1, // Opcode: DAUI
/* 1484 */    MCD::OPC_FilterValue, 31, 182, 0, // Skip to: 1670
/* 1488 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1491 */    MCD::OPC_FilterValue, 32, 40, 0, // Skip to: 1535
/* 1495 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1498 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1523
/* 1502 */    MCD::OPC_CheckPredicate, 33, 87, 1, // Skip to: 1849
/* 1506 */    MCD::OPC_CheckField, 21, 5, 0, 81, 1, // Skip to: 1849
/* 1512 */    MCD::OPC_CheckField, 6, 2, 0, 75, 1, // Skip to: 1849
/* 1518 */    MCD::OPC_Decode, 228, 1, 189, 1, // Opcode: BITSWAP
/* 1523 */    MCD::OPC_FilterValue, 2, 66, 1, // Skip to: 1849
/* 1527 */    MCD::OPC_CheckPredicate, 33, 62, 1, // Skip to: 1849
/* 1531 */    MCD::OPC_Decode, 78, 205, 1, // Opcode: ALIGN
/* 1535 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1580
/* 1539 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1542 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1567
/* 1546 */    MCD::OPC_CheckPredicate, 34, 43, 1, // Skip to: 1849
/* 1550 */    MCD::OPC_CheckField, 21, 5, 0, 37, 1, // Skip to: 1849
/* 1556 */    MCD::OPC_CheckField, 6, 3, 0, 31, 1, // Skip to: 1849
/* 1562 */    MCD::OPC_Decode, 141, 4, 227, 1, // Opcode: DBITSWAP
/* 1567 */    MCD::OPC_FilterValue, 1, 22, 1, // Skip to: 1849
/* 1571 */    MCD::OPC_CheckPredicate, 34, 18, 1, // Skip to: 1849
/* 1575 */    MCD::OPC_Decode, 138, 4, 228, 1, // Opcode: DALIGN
/* 1580 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1599
/* 1584 */    MCD::OPC_CheckPredicate, 33, 5, 1, // Skip to: 1849
/* 1588 */    MCD::OPC_CheckField, 6, 1, 0, 255, 0, // Skip to: 1849
/* 1594 */    MCD::OPC_Decode, 196, 2, 229, 1, // Opcode: CACHE_R6
/* 1599 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1612
/* 1603 */    MCD::OPC_CheckPredicate, 33, 242, 0, // Skip to: 1849
/* 1607 */    MCD::OPC_Decode, 218, 10, 230, 1, // Opcode: SC_R6
/* 1612 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1625
/* 1616 */    MCD::OPC_CheckPredicate, 33, 229, 0, // Skip to: 1849
/* 1620 */    MCD::OPC_Decode, 216, 10, 230, 1, // Opcode: SCD_R6
/* 1625 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1644
/* 1629 */    MCD::OPC_CheckPredicate, 33, 216, 0, // Skip to: 1849
/* 1633 */    MCD::OPC_CheckField, 6, 1, 0, 210, 0, // Skip to: 1849
/* 1639 */    MCD::OPC_Decode, 140, 10, 229, 1, // Opcode: PREF_R6
/* 1644 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1657
/* 1648 */    MCD::OPC_CheckPredicate, 33, 197, 0, // Skip to: 1849
/* 1652 */    MCD::OPC_Decode, 165, 7, 230, 1, // Opcode: LL_R6
/* 1657 */    MCD::OPC_FilterValue, 55, 188, 0, // Skip to: 1849
/* 1661 */    MCD::OPC_CheckPredicate, 33, 184, 0, // Skip to: 1849
/* 1665 */    MCD::OPC_Decode, 163, 7, 230, 1, // Opcode: LLD_R6
/* 1670 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1683
/* 1674 */    MCD::OPC_CheckPredicate, 33, 171, 0, // Skip to: 1849
/* 1678 */    MCD::OPC_Decode, 166, 1, 231, 1, // Opcode: BC
/* 1683 */    MCD::OPC_FilterValue, 54, 24, 0, // Skip to: 1711
/* 1687 */    MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 1702
/* 1691 */    MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 1702
/* 1697 */    MCD::OPC_Decode, 235, 6, 232, 1, // Opcode: JIC
/* 1702 */    MCD::OPC_CheckPredicate, 33, 143, 0, // Skip to: 1849
/* 1706 */    MCD::OPC_Decode, 190, 1, 233, 1, // Opcode: BEQZC
/* 1711 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1724
/* 1715 */    MCD::OPC_CheckPredicate, 33, 130, 0, // Skip to: 1849
/* 1719 */    MCD::OPC_Decode, 163, 1, 231, 1, // Opcode: BALC
/* 1724 */    MCD::OPC_FilterValue, 59, 93, 0, // Skip to: 1821
/* 1728 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1731 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1743
/* 1735 */    MCD::OPC_CheckPredicate, 33, 110, 0, // Skip to: 1849
/* 1739 */    MCD::OPC_Decode, 24, 234, 1, // Opcode: ADDIUPC
/* 1743 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1756
/* 1747 */    MCD::OPC_CheckPredicate, 33, 98, 0, // Skip to: 1849
/* 1751 */    MCD::OPC_Decode, 191, 7, 234, 1, // Opcode: LWPC
/* 1756 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1769
/* 1760 */    MCD::OPC_CheckPredicate, 33, 85, 0, // Skip to: 1849
/* 1764 */    MCD::OPC_Decode, 195, 7, 234, 1, // Opcode: LWUPC
/* 1769 */    MCD::OPC_FilterValue, 3, 76, 0, // Skip to: 1849
/* 1773 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1776 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1789
/* 1780 */    MCD::OPC_CheckPredicate, 34, 65, 0, // Skip to: 1849
/* 1784 */    MCD::OPC_Decode, 142, 7, 235, 1, // Opcode: LDPC
/* 1789 */    MCD::OPC_FilterValue, 1, 56, 0, // Skip to: 1849
/* 1793 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1796 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1809
/* 1800 */    MCD::OPC_CheckPredicate, 33, 45, 0, // Skip to: 1849
/* 1804 */    MCD::OPC_Decode, 134, 1, 236, 1, // Opcode: AUIPC
/* 1809 */    MCD::OPC_FilterValue, 3, 36, 0, // Skip to: 1849
/* 1813 */    MCD::OPC_CheckPredicate, 33, 32, 0, // Skip to: 1849
/* 1817 */    MCD::OPC_Decode, 79, 236, 1, // Opcode: ALUIPC
/* 1821 */    MCD::OPC_FilterValue, 62, 24, 0, // Skip to: 1849
/* 1825 */    MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 1840
/* 1829 */    MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 1840
/* 1835 */    MCD::OPC_Decode, 234, 6, 232, 1, // Opcode: JIALC
/* 1840 */    MCD::OPC_CheckPredicate, 33, 5, 0, // Skip to: 1849
/* 1844 */    MCD::OPC_Decode, 136, 2, 233, 1, // Opcode: BNEZC
/* 1849 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 231, 1, 210, 1, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 33, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 194, 1, 210, 1, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 207, 1, 211, 1, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 33, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 236, 1, 211, 1, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 189, 1, 225, 1, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 33, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 145, 2, 212, 1, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 232, 1, 223, 1, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 33, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 193, 1, 223, 1, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 208, 1, 224, 1, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 33, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 235, 1, 224, 1, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 33, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 135, 2, 225, 1, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 33, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 139, 2, 225, 1, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3 */       MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 36, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 0, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 241, 10, 208, 1, // Opcode: SELEQZ64
/* 22 */      MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 36, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 0, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 245, 10, 208, 1, // Opcode: SELNEZ64
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 112, 1, // Skip to: 375
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 17, 194, 8, // Skip to: 2260
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 188, 8, // Skip to: 2260
/* 24 */      MCD::OPC_Decode, 229, 4, 237, 1, // Opcode: DSLLV
/* 29 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 62
/* 33 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 36 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 49
/* 40 */      MCD::OPC_CheckPredicate, 17, 168, 8, // Skip to: 2260
/* 44 */      MCD::OPC_Decode, 235, 4, 237, 1, // Opcode: DSRLV
/* 49 */      MCD::OPC_FilterValue, 1, 159, 8, // Skip to: 2260
/* 53 */      MCD::OPC_CheckPredicate, 37, 155, 8, // Skip to: 2260
/* 57 */      MCD::OPC_Decode, 222, 4, 237, 1, // Opcode: DROTRV
/* 62 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 81
/* 66 */      MCD::OPC_CheckPredicate, 17, 142, 8, // Skip to: 2260
/* 70 */      MCD::OPC_CheckField, 6, 5, 0, 136, 8, // Skip to: 2260
/* 76 */      MCD::OPC_Decode, 232, 4, 237, 1, // Opcode: DSRAV
/* 81 */      MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 100
/* 85 */      MCD::OPC_CheckPredicate, 38, 123, 8, // Skip to: 2260
/* 89 */      MCD::OPC_CheckField, 6, 10, 0, 117, 8, // Skip to: 2260
/* 95 */      MCD::OPC_Decode, 181, 4, 238, 1, // Opcode: DMULT
/* 100 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 119
/* 104 */     MCD::OPC_CheckPredicate, 38, 104, 8, // Skip to: 2260
/* 108 */     MCD::OPC_CheckField, 6, 10, 0, 98, 8, // Skip to: 2260
/* 114 */     MCD::OPC_Decode, 182, 4, 238, 1, // Opcode: DMULTu
/* 119 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 138
/* 123 */     MCD::OPC_CheckPredicate, 38, 85, 8, // Skip to: 2260
/* 127 */     MCD::OPC_CheckField, 6, 10, 0, 79, 8, // Skip to: 2260
/* 133 */     MCD::OPC_Decode, 224, 4, 238, 1, // Opcode: DSDIV
/* 138 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 157
/* 142 */     MCD::OPC_CheckPredicate, 38, 66, 8, // Skip to: 2260
/* 146 */     MCD::OPC_CheckField, 6, 10, 0, 60, 8, // Skip to: 2260
/* 152 */     MCD::OPC_Decode, 238, 4, 238, 1, // Opcode: DUDIV
/* 157 */     MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 17, 47, 8, // Skip to: 2260
/* 165 */     MCD::OPC_CheckField, 6, 5, 0, 41, 8, // Skip to: 2260
/* 171 */     MCD::OPC_Decode, 133, 4, 208, 1, // Opcode: DADD
/* 176 */     MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 195
/* 180 */     MCD::OPC_CheckPredicate, 17, 28, 8, // Skip to: 2260
/* 184 */     MCD::OPC_CheckField, 6, 5, 0, 22, 8, // Skip to: 2260
/* 190 */     MCD::OPC_Decode, 136, 4, 208, 1, // Opcode: DADDu
/* 195 */     MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 214
/* 199 */     MCD::OPC_CheckPredicate, 17, 9, 8, // Skip to: 2260
/* 203 */     MCD::OPC_CheckField, 6, 5, 0, 3, 8, // Skip to: 2260
/* 209 */     MCD::OPC_Decode, 236, 4, 208, 1, // Opcode: DSUB
/* 214 */     MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 233
/* 218 */     MCD::OPC_CheckPredicate, 17, 246, 7, // Skip to: 2260
/* 222 */     MCD::OPC_CheckField, 6, 5, 0, 240, 7, // Skip to: 2260
/* 228 */     MCD::OPC_Decode, 237, 4, 208, 1, // Opcode: DSUBu
/* 233 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 252
/* 237 */     MCD::OPC_CheckPredicate, 17, 227, 7, // Skip to: 2260
/* 241 */     MCD::OPC_CheckField, 21, 5, 0, 221, 7, // Skip to: 2260
/* 247 */     MCD::OPC_Decode, 226, 4, 239, 1, // Opcode: DSLL
/* 252 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 17, 201, 7, // Skip to: 2260
/* 267 */     MCD::OPC_Decode, 233, 4, 239, 1, // Opcode: DSRL
/* 272 */     MCD::OPC_FilterValue, 1, 192, 7, // Skip to: 2260
/* 276 */     MCD::OPC_CheckPredicate, 37, 188, 7, // Skip to: 2260
/* 280 */     MCD::OPC_Decode, 220, 4, 239, 1, // Opcode: DROTR
/* 285 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 304
/* 289 */     MCD::OPC_CheckPredicate, 17, 175, 7, // Skip to: 2260
/* 293 */     MCD::OPC_CheckField, 21, 5, 0, 169, 7, // Skip to: 2260
/* 299 */     MCD::OPC_Decode, 230, 4, 239, 1, // Opcode: DSRA
/* 304 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 323
/* 308 */     MCD::OPC_CheckPredicate, 17, 156, 7, // Skip to: 2260
/* 312 */     MCD::OPC_CheckField, 21, 5, 0, 150, 7, // Skip to: 2260
/* 318 */     MCD::OPC_Decode, 227, 4, 239, 1, // Opcode: DSLL32
/* 323 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 356
/* 327 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 330 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 343
/* 334 */     MCD::OPC_CheckPredicate, 17, 130, 7, // Skip to: 2260
/* 338 */     MCD::OPC_Decode, 234, 4, 239, 1, // Opcode: DSRL32
/* 343 */     MCD::OPC_FilterValue, 1, 121, 7, // Skip to: 2260
/* 347 */     MCD::OPC_CheckPredicate, 37, 117, 7, // Skip to: 2260
/* 351 */     MCD::OPC_Decode, 221, 4, 239, 1, // Opcode: DROTR32
/* 356 */     MCD::OPC_FilterValue, 63, 108, 7, // Skip to: 2260
/* 360 */     MCD::OPC_CheckPredicate, 17, 104, 7, // Skip to: 2260
/* 364 */     MCD::OPC_CheckField, 21, 5, 0, 98, 7, // Skip to: 2260
/* 370 */     MCD::OPC_Decode, 231, 4, 239, 1, // Opcode: DSRA32
/* 375 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 420
/* 379 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 382 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 401
/* 386 */     MCD::OPC_CheckPredicate, 39, 78, 7, // Skip to: 2260
/* 390 */     MCD::OPC_CheckField, 3, 8, 0, 72, 7, // Skip to: 2260
/* 396 */     MCD::OPC_Decode, 170, 4, 240, 1, // Opcode: DMFC0
/* 401 */     MCD::OPC_FilterValue, 5, 63, 7, // Skip to: 2260
/* 405 */     MCD::OPC_CheckPredicate, 39, 59, 7, // Skip to: 2260
/* 409 */     MCD::OPC_CheckField, 3, 8, 0, 53, 7, // Skip to: 2260
/* 415 */     MCD::OPC_Decode, 175, 4, 240, 1, // Opcode: DMTC0
/* 420 */     MCD::OPC_FilterValue, 17, 222, 3, // Skip to: 1414
/* 424 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 427 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 485
/* 431 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 434 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 453
/* 438 */     MCD::OPC_CheckPredicate, 40, 26, 7, // Skip to: 2260
/* 442 */     MCD::OPC_CheckField, 6, 5, 0, 20, 7, // Skip to: 2260
/* 448 */     MCD::OPC_Decode, 144, 8, 241, 1, // Opcode: MFHC1_D64
/* 453 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 472
/* 457 */     MCD::OPC_CheckPredicate, 40, 7, 7, // Skip to: 2260
/* 461 */     MCD::OPC_CheckField, 6, 5, 0, 1, 7, // Skip to: 2260
/* 467 */     MCD::OPC_Decode, 133, 9, 242, 1, // Opcode: MTHC1_D64
/* 472 */     MCD::OPC_FilterValue, 17, 248, 6, // Skip to: 2260
/* 476 */     MCD::OPC_CheckPredicate, 41, 244, 6, // Skip to: 2260
/* 480 */     MCD::OPC_Decode, 145, 5, 217, 1, // Opcode: FADD_D64
/* 485 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 504
/* 489 */     MCD::OPC_CheckPredicate, 41, 231, 6, // Skip to: 2260
/* 493 */     MCD::OPC_CheckField, 21, 5, 17, 225, 6, // Skip to: 2260
/* 499 */     MCD::OPC_Decode, 147, 6, 217, 1, // Opcode: FSUB_D64
/* 504 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 523
/* 508 */     MCD::OPC_CheckPredicate, 41, 212, 6, // Skip to: 2260
/* 512 */     MCD::OPC_CheckField, 21, 5, 17, 206, 6, // Skip to: 2260
/* 518 */     MCD::OPC_Decode, 238, 5, 217, 1, // Opcode: FMUL_D64
/* 523 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 542
/* 527 */     MCD::OPC_CheckPredicate, 41, 193, 6, // Skip to: 2260
/* 531 */     MCD::OPC_CheckField, 21, 5, 17, 187, 6, // Skip to: 2260
/* 537 */     MCD::OPC_Decode, 181, 5, 217, 1, // Opcode: FDIV_D64
/* 542 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 561
/* 546 */     MCD::OPC_CheckPredicate, 42, 174, 6, // Skip to: 2260
/* 550 */     MCD::OPC_CheckField, 16, 10, 160, 4, 167, 6, // Skip to: 2260
/* 557 */     MCD::OPC_Decode, 140, 6, 89, // Opcode: FSQRT_D64
/* 561 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 580
/* 565 */     MCD::OPC_CheckPredicate, 41, 155, 6, // Skip to: 2260
/* 569 */     MCD::OPC_CheckField, 16, 10, 160, 4, 148, 6, // Skip to: 2260
/* 576 */     MCD::OPC_Decode, 138, 5, 89, // Opcode: FABS_D64
/* 580 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 599
/* 584 */     MCD::OPC_CheckPredicate, 41, 136, 6, // Skip to: 2260
/* 588 */     MCD::OPC_CheckField, 16, 10, 160, 4, 129, 6, // Skip to: 2260
/* 595 */     MCD::OPC_Decode, 231, 5, 89, // Opcode: FMOV_D64
/* 599 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 618
/* 603 */     MCD::OPC_CheckPredicate, 41, 117, 6, // Skip to: 2260
/* 607 */     MCD::OPC_CheckField, 16, 10, 160, 4, 110, 6, // Skip to: 2260
/* 614 */     MCD::OPC_Decode, 244, 5, 89, // Opcode: FNEG_D64
/* 618 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 651
/* 622 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 625 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 638
/* 630 */     MCD::OPC_CheckPredicate, 41, 90, 6, // Skip to: 2260
/* 634 */     MCD::OPC_Decode, 193, 10, 82, // Opcode: ROUND_L_S
/* 638 */     MCD::OPC_FilterValue, 160, 4, 81, 6, // Skip to: 2260
/* 643 */     MCD::OPC_CheckPredicate, 41, 77, 6, // Skip to: 2260
/* 647 */     MCD::OPC_Decode, 192, 10, 89, // Opcode: ROUND_L_D64
/* 651 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 684
/* 655 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 658 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 671
/* 663 */     MCD::OPC_CheckPredicate, 41, 57, 6, // Skip to: 2260
/* 667 */     MCD::OPC_Decode, 144, 13, 82, // Opcode: TRUNC_L_S
/* 671 */     MCD::OPC_FilterValue, 160, 4, 48, 6, // Skip to: 2260
/* 676 */     MCD::OPC_CheckPredicate, 41, 44, 6, // Skip to: 2260
/* 680 */     MCD::OPC_Decode, 143, 13, 89, // Opcode: TRUNC_L_D64
/* 684 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 717
/* 688 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 691 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 704
/* 696 */     MCD::OPC_CheckPredicate, 41, 24, 6, // Skip to: 2260
/* 700 */     MCD::OPC_Decode, 198, 2, 82, // Opcode: CEIL_L_S
/* 704 */     MCD::OPC_FilterValue, 160, 4, 15, 6, // Skip to: 2260
/* 709 */     MCD::OPC_CheckPredicate, 41, 11, 6, // Skip to: 2260
/* 713 */     MCD::OPC_Decode, 197, 2, 89, // Opcode: CEIL_L_D64
/* 717 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 750
/* 721 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 724 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 737
/* 729 */     MCD::OPC_CheckPredicate, 41, 247, 5, // Skip to: 2260
/* 733 */     MCD::OPC_Decode, 213, 5, 82, // Opcode: FLOOR_L_S
/* 737 */     MCD::OPC_FilterValue, 160, 4, 238, 5, // Skip to: 2260
/* 742 */     MCD::OPC_CheckPredicate, 41, 234, 5, // Skip to: 2260
/* 746 */     MCD::OPC_Decode, 212, 5, 89, // Opcode: FLOOR_L_D64
/* 750 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 770
/* 754 */     MCD::OPC_CheckPredicate, 42, 222, 5, // Skip to: 2260
/* 758 */     MCD::OPC_CheckField, 16, 10, 160, 4, 215, 5, // Skip to: 2260
/* 765 */     MCD::OPC_Decode, 195, 10, 243, 1, // Opcode: ROUND_W_D64
/* 770 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 790
/* 774 */     MCD::OPC_CheckPredicate, 42, 202, 5, // Skip to: 2260
/* 778 */     MCD::OPC_CheckField, 16, 10, 160, 4, 195, 5, // Skip to: 2260
/* 785 */     MCD::OPC_Decode, 146, 13, 243, 1, // Opcode: TRUNC_W_D64
/* 790 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 810
/* 794 */     MCD::OPC_CheckPredicate, 42, 182, 5, // Skip to: 2260
/* 798 */     MCD::OPC_CheckField, 16, 10, 160, 4, 175, 5, // Skip to: 2260
/* 805 */     MCD::OPC_Decode, 200, 2, 243, 1, // Opcode: CEIL_W_D64
/* 810 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 830
/* 814 */     MCD::OPC_CheckPredicate, 42, 162, 5, // Skip to: 2260
/* 818 */     MCD::OPC_CheckField, 16, 10, 160, 4, 155, 5, // Skip to: 2260
/* 825 */     MCD::OPC_Decode, 215, 5, 243, 1, // Opcode: FLOOR_W_D64
/* 830 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 875
/* 834 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 837 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 856
/* 841 */     MCD::OPC_CheckPredicate, 43, 135, 5, // Skip to: 2260
/* 845 */     MCD::OPC_CheckField, 21, 5, 17, 129, 5, // Skip to: 2260
/* 851 */     MCD::OPC_Decode, 197, 8, 244, 1, // Opcode: MOVF_D64
/* 856 */     MCD::OPC_FilterValue, 1, 120, 5, // Skip to: 2260
/* 860 */     MCD::OPC_CheckPredicate, 43, 116, 5, // Skip to: 2260
/* 864 */     MCD::OPC_CheckField, 21, 5, 17, 110, 5, // Skip to: 2260
/* 870 */     MCD::OPC_Decode, 217, 8, 244, 1, // Opcode: MOVT_D64
/* 875 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 894
/* 879 */     MCD::OPC_CheckPredicate, 43, 97, 5, // Skip to: 2260
/* 883 */     MCD::OPC_CheckField, 21, 5, 17, 91, 5, // Skip to: 2260
/* 889 */     MCD::OPC_Decode, 229, 8, 245, 1, // Opcode: MOVZ_I_D64
/* 894 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 913
/* 898 */     MCD::OPC_CheckPredicate, 43, 78, 5, // Skip to: 2260
/* 902 */     MCD::OPC_CheckField, 21, 5, 17, 72, 5, // Skip to: 2260
/* 908 */     MCD::OPC_Decode, 209, 8, 245, 1, // Opcode: MOVN_I_D64
/* 913 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 948
/* 917 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 920 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 934
/* 925 */     MCD::OPC_CheckPredicate, 41, 51, 5, // Skip to: 2260
/* 929 */     MCD::OPC_Decode, 200, 3, 243, 1, // Opcode: CVT_S_D64
/* 934 */     MCD::OPC_FilterValue, 160, 5, 41, 5, // Skip to: 2260
/* 939 */     MCD::OPC_CheckPredicate, 41, 37, 5, // Skip to: 2260
/* 943 */     MCD::OPC_Decode, 201, 3, 243, 1, // Opcode: CVT_S_L
/* 948 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 994
/* 952 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 955 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 968
/* 960 */     MCD::OPC_CheckPredicate, 41, 16, 5, // Skip to: 2260
/* 964 */     MCD::OPC_Decode, 191, 3, 82, // Opcode: CVT_D64_S
/* 968 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 981
/* 973 */     MCD::OPC_CheckPredicate, 41, 3, 5, // Skip to: 2260
/* 977 */     MCD::OPC_Decode, 192, 3, 82, // Opcode: CVT_D64_W
/* 981 */     MCD::OPC_FilterValue, 160, 5, 250, 4, // Skip to: 2260
/* 986 */     MCD::OPC_CheckPredicate, 41, 246, 4, // Skip to: 2260
/* 990 */     MCD::OPC_Decode, 190, 3, 89, // Opcode: CVT_D64_L
/* 994 */     MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1014
/* 998 */     MCD::OPC_CheckPredicate, 41, 234, 4, // Skip to: 2260
/* 1002 */    MCD::OPC_CheckField, 16, 10, 160, 4, 227, 4, // Skip to: 2260
/* 1009 */    MCD::OPC_Decode, 205, 3, 243, 1, // Opcode: CVT_W_D64
/* 1014 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1039
/* 1018 */    MCD::OPC_CheckPredicate, 44, 214, 4, // Skip to: 2260
/* 1022 */    MCD::OPC_CheckField, 21, 5, 17, 208, 4, // Skip to: 2260
/* 1028 */    MCD::OPC_CheckField, 6, 5, 0, 202, 4, // Skip to: 2260
/* 1034 */    MCD::OPC_Decode, 213, 3, 246, 1, // Opcode: C_F_D64
/* 1039 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1064
/* 1043 */    MCD::OPC_CheckPredicate, 44, 189, 4, // Skip to: 2260
/* 1047 */    MCD::OPC_CheckField, 21, 5, 17, 183, 4, // Skip to: 2260
/* 1053 */    MCD::OPC_CheckField, 6, 5, 0, 177, 4, // Skip to: 2260
/* 1059 */    MCD::OPC_Decode, 255, 3, 246, 1, // Opcode: C_UN_D64
/* 1064 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1089
/* 1068 */    MCD::OPC_CheckPredicate, 44, 164, 4, // Skip to: 2260
/* 1072 */    MCD::OPC_CheckField, 21, 5, 17, 158, 4, // Skip to: 2260
/* 1078 */    MCD::OPC_CheckField, 6, 5, 0, 152, 4, // Skip to: 2260
/* 1084 */    MCD::OPC_Decode, 210, 3, 246, 1, // Opcode: C_EQ_D64
/* 1089 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1114
/* 1093 */    MCD::OPC_CheckPredicate, 44, 139, 4, // Skip to: 2260
/* 1097 */    MCD::OPC_CheckField, 21, 5, 17, 133, 4, // Skip to: 2260
/* 1103 */    MCD::OPC_CheckField, 6, 5, 0, 127, 4, // Skip to: 2260
/* 1109 */    MCD::OPC_Decode, 246, 3, 246, 1, // Opcode: C_UEQ_D64
/* 1114 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1139
/* 1118 */    MCD::OPC_CheckPredicate, 44, 114, 4, // Skip to: 2260
/* 1122 */    MCD::OPC_CheckField, 21, 5, 17, 108, 4, // Skip to: 2260
/* 1128 */    MCD::OPC_CheckField, 6, 5, 0, 102, 4, // Skip to: 2260
/* 1134 */    MCD::OPC_Decode, 237, 3, 246, 1, // Opcode: C_OLT_D64
/* 1139 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1164
/* 1143 */    MCD::OPC_CheckPredicate, 44, 89, 4, // Skip to: 2260
/* 1147 */    MCD::OPC_CheckField, 21, 5, 17, 83, 4, // Skip to: 2260
/* 1153 */    MCD::OPC_CheckField, 6, 5, 0, 77, 4, // Skip to: 2260
/* 1159 */    MCD::OPC_Decode, 252, 3, 246, 1, // Opcode: C_ULT_D64
/* 1164 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1189
/* 1168 */    MCD::OPC_CheckPredicate, 44, 64, 4, // Skip to: 2260
/* 1172 */    MCD::OPC_CheckField, 21, 5, 17, 58, 4, // Skip to: 2260
/* 1178 */    MCD::OPC_CheckField, 6, 5, 0, 52, 4, // Skip to: 2260
/* 1184 */    MCD::OPC_Decode, 234, 3, 246, 1, // Opcode: C_OLE_D64
/* 1189 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1214
/* 1193 */    MCD::OPC_CheckPredicate, 44, 39, 4, // Skip to: 2260
/* 1197 */    MCD::OPC_CheckField, 21, 5, 17, 33, 4, // Skip to: 2260
/* 1203 */    MCD::OPC_CheckField, 6, 5, 0, 27, 4, // Skip to: 2260
/* 1209 */    MCD::OPC_Decode, 249, 3, 246, 1, // Opcode: C_ULE_D64
/* 1214 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1239
/* 1218 */    MCD::OPC_CheckPredicate, 44, 14, 4, // Skip to: 2260
/* 1222 */    MCD::OPC_CheckField, 21, 5, 17, 8, 4, // Skip to: 2260
/* 1228 */    MCD::OPC_CheckField, 6, 5, 0, 2, 4, // Skip to: 2260
/* 1234 */    MCD::OPC_Decode, 243, 3, 246, 1, // Opcode: C_SF_D64
/* 1239 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1264
/* 1243 */    MCD::OPC_CheckPredicate, 44, 245, 3, // Skip to: 2260
/* 1247 */    MCD::OPC_CheckField, 21, 5, 17, 239, 3, // Skip to: 2260
/* 1253 */    MCD::OPC_CheckField, 6, 5, 0, 233, 3, // Skip to: 2260
/* 1259 */    MCD::OPC_Decode, 225, 3, 246, 1, // Opcode: C_NGLE_D64
/* 1264 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1289
/* 1268 */    MCD::OPC_CheckPredicate, 44, 220, 3, // Skip to: 2260
/* 1272 */    MCD::OPC_CheckField, 21, 5, 17, 214, 3, // Skip to: 2260
/* 1278 */    MCD::OPC_CheckField, 6, 5, 0, 208, 3, // Skip to: 2260
/* 1284 */    MCD::OPC_Decode, 240, 3, 246, 1, // Opcode: C_SEQ_D64
/* 1289 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1314
/* 1293 */    MCD::OPC_CheckPredicate, 44, 195, 3, // Skip to: 2260
/* 1297 */    MCD::OPC_CheckField, 21, 5, 17, 189, 3, // Skip to: 2260
/* 1303 */    MCD::OPC_CheckField, 6, 5, 0, 183, 3, // Skip to: 2260
/* 1309 */    MCD::OPC_Decode, 228, 3, 246, 1, // Opcode: C_NGL_D64
/* 1314 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1339
/* 1318 */    MCD::OPC_CheckPredicate, 44, 170, 3, // Skip to: 2260
/* 1322 */    MCD::OPC_CheckField, 21, 5, 17, 164, 3, // Skip to: 2260
/* 1328 */    MCD::OPC_CheckField, 6, 5, 0, 158, 3, // Skip to: 2260
/* 1334 */    MCD::OPC_Decode, 219, 3, 246, 1, // Opcode: C_LT_D64
/* 1339 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1364
/* 1343 */    MCD::OPC_CheckPredicate, 44, 145, 3, // Skip to: 2260
/* 1347 */    MCD::OPC_CheckField, 21, 5, 17, 139, 3, // Skip to: 2260
/* 1353 */    MCD::OPC_CheckField, 6, 5, 0, 133, 3, // Skip to: 2260
/* 1359 */    MCD::OPC_Decode, 222, 3, 246, 1, // Opcode: C_NGE_D64
/* 1364 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1389
/* 1368 */    MCD::OPC_CheckPredicate, 44, 120, 3, // Skip to: 2260
/* 1372 */    MCD::OPC_CheckField, 21, 5, 17, 114, 3, // Skip to: 2260
/* 1378 */    MCD::OPC_CheckField, 6, 5, 0, 108, 3, // Skip to: 2260
/* 1384 */    MCD::OPC_Decode, 216, 3, 246, 1, // Opcode: C_LE_D64
/* 1389 */    MCD::OPC_FilterValue, 63, 99, 3, // Skip to: 2260
/* 1393 */    MCD::OPC_CheckPredicate, 44, 95, 3, // Skip to: 2260
/* 1397 */    MCD::OPC_CheckField, 21, 5, 17, 89, 3, // Skip to: 2260
/* 1403 */    MCD::OPC_CheckField, 6, 5, 0, 83, 3, // Skip to: 2260
/* 1409 */    MCD::OPC_Decode, 231, 3, 246, 1, // Opcode: C_NGT_D64
/* 1414 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1459
/* 1418 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1421 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1440
/* 1425 */    MCD::OPC_CheckPredicate, 39, 63, 3, // Skip to: 2260
/* 1429 */    MCD::OPC_CheckField, 3, 8, 0, 57, 3, // Skip to: 2260
/* 1435 */    MCD::OPC_Decode, 172, 4, 240, 1, // Opcode: DMFC2
/* 1440 */    MCD::OPC_FilterValue, 5, 48, 3, // Skip to: 2260
/* 1444 */    MCD::OPC_CheckPredicate, 39, 44, 3, // Skip to: 2260
/* 1448 */    MCD::OPC_CheckField, 3, 8, 0, 38, 3, // Skip to: 2260
/* 1454 */    MCD::OPC_Decode, 177, 4, 240, 1, // Opcode: DMTC2
/* 1459 */    MCD::OPC_FilterValue, 19, 79, 0, // Skip to: 1542
/* 1463 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1466 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1485
/* 1470 */    MCD::OPC_CheckPredicate, 45, 18, 3, // Skip to: 2260
/* 1474 */    MCD::OPC_CheckField, 11, 5, 0, 12, 3, // Skip to: 2260
/* 1480 */    MCD::OPC_Decode, 145, 7, 247, 1, // Opcode: LDXC164
/* 1485 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1504
/* 1489 */    MCD::OPC_CheckPredicate, 46, 255, 2, // Skip to: 2260
/* 1493 */    MCD::OPC_CheckField, 11, 5, 0, 249, 2, // Skip to: 2260
/* 1499 */    MCD::OPC_Decode, 176, 7, 247, 1, // Opcode: LUXC164
/* 1504 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1523
/* 1508 */    MCD::OPC_CheckPredicate, 45, 236, 2, // Skip to: 2260
/* 1512 */    MCD::OPC_CheckField, 6, 5, 0, 230, 2, // Skip to: 2260
/* 1518 */    MCD::OPC_Decode, 233, 10, 248, 1, // Opcode: SDXC164
/* 1523 */    MCD::OPC_FilterValue, 13, 221, 2, // Skip to: 2260
/* 1527 */    MCD::OPC_CheckPredicate, 46, 217, 2, // Skip to: 2260
/* 1531 */    MCD::OPC_CheckField, 6, 5, 0, 211, 2, // Skip to: 2260
/* 1537 */    MCD::OPC_Decode, 169, 12, 248, 1, // Opcode: SUXC164
/* 1542 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1555
/* 1546 */    MCD::OPC_CheckPredicate, 38, 198, 2, // Skip to: 2260
/* 1550 */    MCD::OPC_Decode, 134, 4, 249, 1, // Opcode: DADDi
/* 1555 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1568
/* 1559 */    MCD::OPC_CheckPredicate, 17, 185, 2, // Skip to: 2260
/* 1563 */    MCD::OPC_Decode, 135, 4, 249, 1, // Opcode: DADDiu
/* 1568 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1581
/* 1572 */    MCD::OPC_CheckPredicate, 38, 172, 2, // Skip to: 2260
/* 1576 */    MCD::OPC_Decode, 141, 7, 201, 1, // Opcode: LDL
/* 1581 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1594
/* 1585 */    MCD::OPC_CheckPredicate, 38, 159, 2, // Skip to: 2260
/* 1589 */    MCD::OPC_Decode, 143, 7, 201, 1, // Opcode: LDR
/* 1594 */    MCD::OPC_FilterValue, 28, 159, 1, // Skip to: 2013
/* 1598 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1601 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1620
/* 1605 */    MCD::OPC_CheckPredicate, 47, 139, 2, // Skip to: 2260
/* 1609 */    MCD::OPC_CheckField, 6, 5, 0, 133, 2, // Skip to: 2260
/* 1615 */    MCD::OPC_Decode, 180, 4, 208, 1, // Opcode: DMUL
/* 1620 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 1639
/* 1624 */    MCD::OPC_CheckPredicate, 47, 120, 2, // Skip to: 2260
/* 1628 */    MCD::OPC_CheckField, 6, 15, 0, 114, 2, // Skip to: 2260
/* 1634 */    MCD::OPC_Decode, 144, 9, 250, 1, // Opcode: MTM0
/* 1639 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1658
/* 1643 */    MCD::OPC_CheckPredicate, 47, 101, 2, // Skip to: 2260
/* 1647 */    MCD::OPC_CheckField, 6, 15, 0, 95, 2, // Skip to: 2260
/* 1653 */    MCD::OPC_Decode, 147, 9, 250, 1, // Opcode: MTP0
/* 1658 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 1677
/* 1662 */    MCD::OPC_CheckPredicate, 47, 82, 2, // Skip to: 2260
/* 1666 */    MCD::OPC_CheckField, 6, 15, 0, 76, 2, // Skip to: 2260
/* 1672 */    MCD::OPC_Decode, 148, 9, 250, 1, // Opcode: MTP1
/* 1677 */    MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 1696
/* 1681 */    MCD::OPC_CheckPredicate, 47, 63, 2, // Skip to: 2260
/* 1685 */    MCD::OPC_CheckField, 6, 15, 0, 57, 2, // Skip to: 2260
/* 1691 */    MCD::OPC_Decode, 149, 9, 250, 1, // Opcode: MTP2
/* 1696 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 1715
/* 1700 */    MCD::OPC_CheckPredicate, 47, 44, 2, // Skip to: 2260
/* 1704 */    MCD::OPC_CheckField, 6, 15, 0, 38, 2, // Skip to: 2260
/* 1710 */    MCD::OPC_Decode, 145, 9, 250, 1, // Opcode: MTM1
/* 1715 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1734
/* 1719 */    MCD::OPC_CheckPredicate, 47, 25, 2, // Skip to: 2260
/* 1723 */    MCD::OPC_CheckField, 6, 15, 0, 19, 2, // Skip to: 2260
/* 1729 */    MCD::OPC_Decode, 146, 9, 250, 1, // Opcode: MTM2
/* 1734 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 1753
/* 1738 */    MCD::OPC_CheckPredicate, 47, 6, 2, // Skip to: 2260
/* 1742 */    MCD::OPC_CheckField, 6, 5, 0, 0, 2, // Skip to: 2260
/* 1748 */    MCD::OPC_Decode, 155, 13, 208, 1, // Opcode: VMULU
/* 1753 */    MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 1772
/* 1757 */    MCD::OPC_CheckPredicate, 47, 243, 1, // Skip to: 2260
/* 1761 */    MCD::OPC_CheckField, 6, 5, 0, 237, 1, // Skip to: 2260
/* 1767 */    MCD::OPC_Decode, 154, 13, 208, 1, // Opcode: VMM0
/* 1772 */    MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 1791
/* 1776 */    MCD::OPC_CheckPredicate, 47, 224, 1, // Skip to: 2260
/* 1780 */    MCD::OPC_CheckField, 6, 5, 0, 218, 1, // Skip to: 2260
/* 1786 */    MCD::OPC_Decode, 153, 13, 208, 1, // Opcode: V3MULU
/* 1791 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 1810
/* 1795 */    MCD::OPC_CheckPredicate, 48, 205, 1, // Skip to: 2260
/* 1799 */    MCD::OPC_CheckField, 6, 5, 0, 199, 1, // Skip to: 2260
/* 1805 */    MCD::OPC_Decode, 144, 4, 251, 1, // Opcode: DCLZ
/* 1810 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1829
/* 1814 */    MCD::OPC_CheckPredicate, 48, 186, 1, // Skip to: 2260
/* 1818 */    MCD::OPC_CheckField, 6, 5, 0, 180, 1, // Skip to: 2260
/* 1824 */    MCD::OPC_Decode, 142, 4, 251, 1, // Opcode: DCLO
/* 1829 */    MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 1848
/* 1833 */    MCD::OPC_CheckPredicate, 47, 167, 1, // Skip to: 2260
/* 1837 */    MCD::OPC_CheckField, 6, 5, 0, 161, 1, // Skip to: 2260
/* 1843 */    MCD::OPC_Decode, 161, 1, 208, 1, // Opcode: BADDu
/* 1848 */    MCD::OPC_FilterValue, 42, 15, 0, // Skip to: 1867
/* 1852 */    MCD::OPC_CheckPredicate, 47, 148, 1, // Skip to: 2260
/* 1856 */    MCD::OPC_CheckField, 6, 5, 0, 142, 1, // Skip to: 2260
/* 1862 */    MCD::OPC_Decode, 250, 10, 208, 1, // Opcode: SEQ
/* 1867 */    MCD::OPC_FilterValue, 43, 15, 0, // Skip to: 1886
/* 1871 */    MCD::OPC_CheckPredicate, 47, 129, 1, // Skip to: 2260
/* 1875 */    MCD::OPC_CheckField, 6, 5, 0, 123, 1, // Skip to: 2260
/* 1881 */    MCD::OPC_Decode, 189, 11, 208, 1, // Opcode: SNE
/* 1886 */    MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 1910
/* 1890 */    MCD::OPC_CheckPredicate, 47, 110, 1, // Skip to: 2260
/* 1894 */    MCD::OPC_CheckField, 16, 5, 0, 104, 1, // Skip to: 2260
/* 1900 */    MCD::OPC_CheckField, 6, 5, 0, 98, 1, // Skip to: 2260
/* 1906 */    MCD::OPC_Decode, 249, 9, 48, // Opcode: POP
/* 1910 */    MCD::OPC_FilterValue, 45, 21, 0, // Skip to: 1935
/* 1914 */    MCD::OPC_CheckPredicate, 47, 86, 1, // Skip to: 2260
/* 1918 */    MCD::OPC_CheckField, 16, 5, 0, 80, 1, // Skip to: 2260
/* 1924 */    MCD::OPC_CheckField, 6, 5, 0, 74, 1, // Skip to: 2260
/* 1930 */    MCD::OPC_Decode, 205, 4, 206, 1, // Opcode: DPOP
/* 1935 */    MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 1948
/* 1939 */    MCD::OPC_CheckPredicate, 47, 61, 1, // Skip to: 2260
/* 1943 */    MCD::OPC_Decode, 251, 10, 252, 1, // Opcode: SEQi
/* 1948 */    MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 1961
/* 1952 */    MCD::OPC_CheckPredicate, 47, 48, 1, // Skip to: 2260
/* 1956 */    MCD::OPC_Decode, 190, 11, 252, 1, // Opcode: SNEi
/* 1961 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1974
/* 1965 */    MCD::OPC_CheckPredicate, 47, 35, 1, // Skip to: 2260
/* 1969 */    MCD::OPC_Decode, 215, 2, 253, 1, // Opcode: CINS
/* 1974 */    MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 1987
/* 1978 */    MCD::OPC_CheckPredicate, 47, 22, 1, // Skip to: 2260
/* 1982 */    MCD::OPC_Decode, 216, 2, 253, 1, // Opcode: CINS32
/* 1987 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 2000
/* 1991 */    MCD::OPC_CheckPredicate, 47, 9, 1, // Skip to: 2260
/* 1995 */    MCD::OPC_Decode, 131, 5, 253, 1, // Opcode: EXTS
/* 2000 */    MCD::OPC_FilterValue, 59, 0, 1, // Skip to: 2260
/* 2004 */    MCD::OPC_CheckPredicate, 47, 252, 0, // Skip to: 2260
/* 2008 */    MCD::OPC_Decode, 132, 5, 253, 1, // Opcode: EXTS32
/* 2013 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 2143
/* 2017 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2020 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2033
/* 2024 */    MCD::OPC_CheckPredicate, 4, 232, 0, // Skip to: 2260
/* 2028 */    MCD::OPC_Decode, 151, 4, 254, 1, // Opcode: DEXTM
/* 2033 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2046
/* 2037 */    MCD::OPC_CheckPredicate, 4, 219, 0, // Skip to: 2260
/* 2041 */    MCD::OPC_Decode, 152, 4, 254, 1, // Opcode: DEXTU
/* 2046 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2059
/* 2050 */    MCD::OPC_CheckPredicate, 4, 206, 0, // Skip to: 2260
/* 2054 */    MCD::OPC_Decode, 150, 4, 254, 1, // Opcode: DEXT
/* 2059 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2072
/* 2063 */    MCD::OPC_CheckPredicate, 4, 193, 0, // Skip to: 2260
/* 2067 */    MCD::OPC_Decode, 155, 4, 255, 1, // Opcode: DINSM
/* 2072 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2085
/* 2076 */    MCD::OPC_CheckPredicate, 4, 180, 0, // Skip to: 2260
/* 2080 */    MCD::OPC_Decode, 156, 4, 255, 1, // Opcode: DINSU
/* 2085 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2098
/* 2089 */    MCD::OPC_CheckPredicate, 4, 167, 0, // Skip to: 2260
/* 2093 */    MCD::OPC_Decode, 154, 4, 255, 1, // Opcode: DINS
/* 2098 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 2260
/* 2102 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2105 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 2124
/* 2109 */    MCD::OPC_CheckPredicate, 37, 147, 0, // Skip to: 2260
/* 2113 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 2260
/* 2119 */    MCD::OPC_Decode, 223, 4, 227, 1, // Opcode: DSBH
/* 2124 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 2260
/* 2128 */    MCD::OPC_CheckPredicate, 37, 128, 0, // Skip to: 2260
/* 2132 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 2260
/* 2138 */    MCD::OPC_Decode, 225, 4, 227, 1, // Opcode: DSHD
/* 2143 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 2156
/* 2147 */    MCD::OPC_CheckPredicate, 17, 109, 0, // Skip to: 2260
/* 2151 */    MCD::OPC_Decode, 201, 7, 201, 1, // Opcode: LWu
/* 2156 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 2169
/* 2160 */    MCD::OPC_CheckPredicate, 38, 96, 0, // Skip to: 2260
/* 2164 */    MCD::OPC_Decode, 230, 10, 201, 1, // Opcode: SDL
/* 2169 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 2182
/* 2173 */    MCD::OPC_CheckPredicate, 38, 83, 0, // Skip to: 2260
/* 2177 */    MCD::OPC_Decode, 231, 10, 201, 1, // Opcode: SDR
/* 2182 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 2195
/* 2186 */    MCD::OPC_CheckPredicate, 38, 70, 0, // Skip to: 2260
/* 2190 */    MCD::OPC_Decode, 162, 7, 201, 1, // Opcode: LLD
/* 2195 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 2208
/* 2199 */    MCD::OPC_CheckPredicate, 49, 57, 0, // Skip to: 2260
/* 2203 */    MCD::OPC_Decode, 132, 7, 203, 1, // Opcode: LDC164
/* 2208 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 2221
/* 2212 */    MCD::OPC_CheckPredicate, 17, 44, 0, // Skip to: 2260
/* 2216 */    MCD::OPC_Decode, 130, 7, 201, 1, // Opcode: LD
/* 2221 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 2234
/* 2225 */    MCD::OPC_CheckPredicate, 38, 31, 0, // Skip to: 2260
/* 2229 */    MCD::OPC_Decode, 215, 10, 201, 1, // Opcode: SCD
/* 2234 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 2247
/* 2238 */    MCD::OPC_CheckPredicate, 49, 18, 0, // Skip to: 2260
/* 2242 */    MCD::OPC_Decode, 223, 10, 203, 1, // Opcode: SDC164
/* 2247 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 2260
/* 2251 */    MCD::OPC_CheckPredicate, 17, 5, 0, // Skip to: 2260
/* 2255 */    MCD::OPC_Decode, 219, 10, 201, 1, // Opcode: SD
/* 2260 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Mips::FeatureMips16));
  case 1:
    return (!(Bits & Mips::FeatureMips16));
  case 2:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2));
  case 3:
    return ((Bits & Mips::FeatureMicroMips));
  case 4:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2));
  case 5:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips4_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 6:
    return ((Bits & Mips::FeatureMSA));
  case 7:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 8:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 9:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32));
  case 10:
    return (!(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 11:
    return ((Bits & Mips::FeatureDSP));
  case 12:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 13:
    return ((Bits & Mips::FeatureMSA) && (Bits & Mips::FeatureMips64));
  case 14:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 15:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3_32));
  case 16:
    return (!(Bits & Mips::FeatureMicroMips));
  case 17:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3));
  case 18:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit));
  case 19:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit));
  case 20:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3_32r2));
  case 21:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureFP64Bit));
  case 22:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 23:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureFP64Bit));
  case 24:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips4_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 25:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 26:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips5_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 27:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 28:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 29:
    return ((Bits & Mips::FeatureDSPR2));
  case 30:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 31:
    return ((Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 32:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips2));
  case 33:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r6));
  case 34:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips64r6));
  case 35:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureGP64Bit) && (Bits & Mips::FeatureMips32r6));
  case 36:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureGP64Bit) && (Bits & Mips::FeatureMips32r6));
  case 37:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips64r2));
  case 38:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 39:
    return ((Bits & Mips::FeatureMips64));
  case 40:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureFP64Bit));
  case 41:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit));
  case 42:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && (Bits & Mips::FeatureFP64Bit));
  case 43:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 44:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && (Bits & Mips::FeatureFP64Bit));
  case 45:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 46:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips5_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 47:
    return ((Bits & Mips::FeatureCnMips));
  case 48:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips64r6));
  case 49:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips2));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 1, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 7);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 162:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 174:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 201:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 202:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 203:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 204:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 210:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 211:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 212:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 11) << 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 16;
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 223:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 224:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 225:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 229:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 5) << 16;
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 230:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 232:
    if (DecodeSimm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 251:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
