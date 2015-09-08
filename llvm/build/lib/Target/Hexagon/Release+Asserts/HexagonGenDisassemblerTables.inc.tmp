/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Hexagon Disassembler                                                     *|
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

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 28, 4,  // Inst{31-28} ...
/* 3 */       MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 14, 2, 0, 93, 0, // Skip to: 106
/* 13 */      MCD::OPC_Decode, 157, 10, 0, // Opcode: NOP
/* 17 */      MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 37
/* 21 */      MCD::OPC_CheckField, 25, 3, 4, 79, 0, // Skip to: 106
/* 27 */      MCD::OPC_CheckField, 14, 2, 0, 73, 0, // Skip to: 106
/* 33 */      MCD::OPC_Decode, 255, 7, 1, // Opcode: JMP
/* 37 */      MCD::OPC_FilterValue, 15, 65, 0, // Skip to: 106
/* 41 */      MCD::OPC_ExtractField, 21, 7,  // Inst{27-21} ...
/* 44 */      MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckField, 14, 2, 0, 52, 0, // Skip to: 106
/* 54 */      MCD::OPC_Decode, 20, 2, // Opcode: A2_add
/* 57 */      MCD::OPC_FilterValue, 88, 45, 0, // Skip to: 106
/* 61 */      MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 64 */      MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 85
/* 68 */      MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 71 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 78
/* 75 */      MCD::OPC_Decode, 23, 3, // Opcode: A2_paddt
/* 78 */      MCD::OPC_FilterValue, 1, 24, 0, // Skip to: 106
/* 82 */      MCD::OPC_Decode, 24, 3, // Opcode: A2_paddtnew
/* 85 */      MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 106
/* 89 */      MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 92 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 99
/* 96 */      MCD::OPC_Decode, 21, 3, // Opcode: A2_paddf
/* 99 */      MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 106
/* 103 */     MCD::OPC_Decode, 22, 3, // Opcode: A2_paddfnew
/* 106 */     MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  llvm_unreachable("Invalid index!");
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
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 13) << 2;
    tmp |= fieldFromInstruction(insn, 16, 9) << 15;
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
