/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) override;
  unsigned MatchInstructionImpl(
                           const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint32_t {
  Feature_HasMips2 = (1ULL << 4),
  Feature_HasMips3_32 = (1ULL << 9),
  Feature_HasMips3_32r2 = (1ULL << 10),
  Feature_HasMips3 = (1ULL << 5),
  Feature_HasMips4_32 = (1ULL << 11),
  Feature_HasMips4_32r2 = (1ULL << 12),
  Feature_HasMips5_32r2 = (1ULL << 13),
  Feature_HasMips32 = (1ULL << 6),
  Feature_HasMips32r2 = (1ULL << 7),
  Feature_HasMips32r6 = (1ULL << 8),
  Feature_NotMips32r6 = (1ULL << 28),
  Feature_IsGP64bit = (1ULL << 22),
  Feature_IsGP32bit = (1ULL << 21),
  Feature_HasMips64 = (1ULL << 14),
  Feature_HasMips64r2 = (1ULL << 15),
  Feature_HasMips64r6 = (1ULL << 16),
  Feature_NotMips64r6 = (1ULL << 29),
  Feature_IsN64 = (1ULL << 23),
  Feature_InMips16Mode = (1ULL << 19),
  Feature_HasCnMips = (1ULL << 0),
  Feature_RelocStatic = (1ULL << 31),
  Feature_RelocPIC = (1ULL << 30),
  Feature_HasStdEnc = (1ULL << 17),
  Feature_InMicroMips = (1ULL << 18),
  Feature_NotInMicroMips = (1ULL << 27),
  Feature_IsFP64bit = (1ULL << 20),
  Feature_NotFP64bit = (1ULL << 26),
  Feature_IsSingleFloat = (1ULL << 25),
  Feature_IsNotSingleFloat = (1ULL << 24),
  Feature_HasDSP = (1ULL << 1),
  Feature_HasDSPR2 = (1ULL << 2),
  Feature_HasMSA = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasMips2: return "";
  case Feature_HasMips3_32: return "";
  case Feature_HasMips3_32r2: return "";
  case Feature_HasMips3: return "";
  case Feature_HasMips4_32: return "";
  case Feature_HasMips4_32r2: return "";
  case Feature_HasMips5_32r2: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips32r6: return "";
  case Feature_NotMips32r6: return "";
  case Feature_IsGP64bit: return "";
  case Feature_IsGP32bit: return "";
  case Feature_HasMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_HasMips64r6: return "";
  case Feature_NotMips64r6: return "";
  case Feature_IsN64: return "";
  case Feature_InMips16Mode: return "";
  case Feature_HasCnMips: return "";
  case Feature_RelocStatic: return "";
  case Feature_RelocPIC: return "";
  case Feature_HasStdEnc: return "";
  case Feature_InMicroMips: return "";
  case Feature_NotInMicroMips: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  case Feature_HasMSA: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addAFGR64AsmRegOperands,
  CVT_95_addFGR64AsmRegOperands,
  CVT_95_addFGR32AsmRegOperands,
  CVT_95_addGPR32AsmRegOperands,
  CVT_95_addImmOperands,
  CVT_95_addMSA128AsmRegOperands,
  CVT_95_Reg,
  CVT_95_addGPRMM16AsmRegOperands,
  CVT_regZERO,
  CVT_95_addGPR64AsmRegOperands,
  CVT_regFCC0,
  CVT_95_addFCCAsmRegOperands,
  CVT_95_addCOP2AsmRegOperands,
  CVT_imm_0,
  CVT_95_addMemOperands,
  CVT_95_addCCRAsmRegOperands,
  CVT_95_addMSACtrlAsmRegOperands,
  CVT_95_addACC64DSPAsmRegOperands,
  CVT_regRA,
  CVT_regZERO_64,
  CVT_95_addCOP3AsmRegOperands,
  CVT_95_addHI32DSPAsmRegOperands,
  CVT_95_addLO32DSPAsmRegOperands,
  CVT_95_addHWRegsAsmRegOperands,
  CVT_imm_2,
  CVT_imm_6,
  CVT_imm_4,
  CVT_imm_5,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__GPR32AsmReg1_0__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__Imm1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__Imm1_1,
  Convert__Imm1_0,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3,
  Convert__GPR32AsmReg1_0__Imm1_1,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0,
  Convert__JumpTarget1_0,
  Convert__regZERO__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO__JumpTarget1_0,
  Convert__FGR64AsmReg1_0__JumpTarget1_1,
  Convert__regFCC0__JumpTarget1_0,
  Convert__FCCAsmReg1_0__JumpTarget1_1,
  Convert__COP2AsmReg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2,
  Convert__Reg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2,
  Convert__MSA128AsmReg1_0__JumpTarget1_1,
  Convert__imm_0__imm_0,
  Convert_NoOperands,
  Convert__Imm1_0__imm_0,
  Convert__Imm1_0__Imm1_1,
  Convert__Mem2_1__Imm1_0,
  Convert__FGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__CCRAsmReg1_1,
  Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3,
  Convert__Reg1_0__Reg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__CCRAsmReg1_1__GPR32AsmReg1_0,
  Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__Tie0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO,
  Convert__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_0,
  Convert__GPR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR64AsmReg1_1__GPR64AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6,
  Convert__regRA__GPR32AsmReg1_0,
  Convert__Reg1_0,
  Convert__regZERO__GPR32AsmReg1_0,
  Convert__regZERO_64__GPR64AsmReg1_0,
  Convert__GPR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Mem2_1,
  Convert__AFGR64AsmReg1_0__Mem2_1,
  Convert__FGR64AsmReg1_0__Mem2_1,
  Convert__COP2AsmReg1_0__MemOffsetSimm112_1,
  Convert__COP2AsmReg1_0__Mem2_1,
  Convert__COP3AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__Mem2_1__Tie0,
  Convert__GPR64AsmReg1_0__JumpTarget1_1,
  Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3,
  Convert__Reg1_0__Imm1_1__imm_0,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__FGR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__Mem2_1__Tie0,
  Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3,
  Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0,
  Convert__GPR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_1__GPR32AsmReg1_0,
  Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0,
  Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0,
  Convert__regZERO__regZERO__imm_0,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__GPR32AsmReg1_0__Tie0__Mem2_1,
  Convert__GPR64AsmReg1_0__Tie0__Mem2_1,
  Convert__imm_0,
  Convert__Reg1_0__Tie0,
  Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2,
  Convert__imm_2,
  Convert__imm_6,
  Convert__imm_4,
  Convert__imm_5,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Imm1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addGPRMM16AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__JumpTarget1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regFCC0__JumpTarget1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCAsmReg1_0__JumpTarget1_1
  { CVT_95_addFCCAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__JumpTarget1_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__JumpTarget1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__JumpTarget1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_0__imm_0
  { CVT_imm_0, 0, CVT_imm_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Imm1_0__imm_0
  { CVT_95_addImmOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Mem2_1__Imm1_0
  { CVT_95_addMemOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__CCRAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCCRAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSACtrlAsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__CCRAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addCCRAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSACtrlAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO
  { CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_1__GPR64AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR64AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__regRA__GPR32AsmReg1_0
  { CVT_regRA, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__regZERO__GPR32AsmReg1_0
  { CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO_64__GPR64AsmReg1_0
  { CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Mem2_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__Mem2_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__Mem2_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__MemOffsetSimm112_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__Mem2_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP3AsmReg1_0__Mem2_1
  { CVT_95_addCOP3AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Imm1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Imm1_1__imm_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__Mem2_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addAFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addHI32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addLO32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__imm_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__imm_0
  { CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_2
  { CVT_imm_2, 0, CVT_Done },
  // Convert__imm_6
  { CVT_imm_6, 0, CVT_Done },
  // Convert__imm_4
  { CVT_imm_4, 0, CVT_Done },
  // Convert__imm_5
  { CVT_imm_5, 0, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addAFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addMSA128AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSA128AsmRegOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegOperands(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      break;
    case CVT_95_addGPR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR64AsmRegOperands(Inst, 1);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::CreateReg(Mips::FCC0));
      break;
    case CVT_95_addFCCAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFCCAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addCOP2AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP2AsmRegOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMemOperands(Inst, 2);
      break;
    case CVT_95_addCCRAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCCRAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSACtrlAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addACC64DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::CreateReg(Mips::RA));
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO_64));
      break;
    case CVT_95_addCOP3AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP3AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHI32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addLO32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHWRegsAsmRegOperands(Inst, 1);
      break;
    case CVT_imm_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_6:
      Inst.addOperand(MCOperand::CreateImm(6));
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSA128AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addGPR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addFCCAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP2AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCCRAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addCOP3AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_ZERO, // register class 'ZERO'
  MCK_CPU16Regs, // register class 'CPU16Regs,GPRMM16'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_DSPR, // register class 'DSPR,GPR32'
  MCK_Reg7, // derived register class
  MCK_Reg9, // derived register class
  MCK_Reg8, // derived register class
  MCK_Reg10, // derived register class
  MCK_GPR64, // register class 'GPR64'
  MCK_Reg12, // derived register class
  MCK_FGR32, // register class 'FGR32,FGRCC'
  MCK_Reg15, // derived register class
  MCK_FGRH32, // register class 'FGRH32'
  MCK_Reg17, // derived register class
  MCK_Reg18, // derived register class
  MCK_AFGR64, // register class 'AFGR64'
  MCK_Reg20, // derived register class
  MCK_FGR64, // register class 'FGR64'
  MCK_OddSP, // register class 'OddSP'
  MCK_Reg22, // derived register class
  MCK_MSA128B, // register class 'MSA128B,MSA128D,MSA128H,MSA128W'
  MCK_HI32, // register class 'HI32'
  MCK_HI32DSP, // register class 'HI32DSP'
  MCK_LO32, // register class 'LO32'
  MCK_LO32DSP, // register class 'LO32DSP'
  MCK_HI64, // register class 'HI64'
  MCK_LO64, // register class 'LO64'
  MCK_CCR, // register class 'CCR'
  MCK_FCC, // register class 'FCC'
  MCK_COP2, // register class 'COP2'
  MCK_COP3, // register class 'COP3'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_ACC64, // register class 'ACC64'
  MCK_ACC64DSP, // register class 'ACC64DSP'
  MCK_ACC128, // register class 'ACC128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_MSACtrl, // register class 'MSACtrl'
  MCK_OCTEON_MPL, // register class 'OCTEON_MPL'
  MCK_OCTEON_P, // register class 'OCTEON_P'
  MCK_ACC64DSPAsmReg, // user defined class 'ACC64DSPAsmOperand'
  MCK_AFGR64AsmReg, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsmReg, // user defined class 'CCRAsmOperand'
  MCK_COP2AsmReg, // user defined class 'COP2AsmOperand'
  MCK_COP3AsmReg, // user defined class 'COP3AsmOperand'
  MCK_FCCAsmReg, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32AsmReg, // user defined class 'FGR32AsmOperand'
  MCK_FGR64AsmReg, // user defined class 'FGR64AsmOperand'
  MCK_FGRH32AsmReg, // user defined class 'FGRH32AsmOperand'
  MCK_GPR32AsmReg, // user defined class 'GPR32AsmOperand'
  MCK_GPR64AsmReg, // user defined class 'GPR64AsmOperand'
  MCK_GPRMM16AsmReg, // user defined class 'GPRMM16AsmOperand'
  MCK_HI32DSPAsmReg, // user defined class 'HI32DSPAsmOperand'
  MCK_HWRegsAsmReg, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_LO32DSPAsmReg, // user defined class 'LO32DSPAsmOperand'
  MCK_MSA128AsmReg, // user defined class 'MSA128AsmOperand'
  MCK_MSACtrlAsmReg, // user defined class 'MSACtrlAsmOperand'
  MCK_InvNum, // user defined class 'MipsInvertedImmoperand'
  MCK_JumpTarget, // user defined class 'MipsJumpTargetAsmOperand'
  MCK_MemOffsetSimm11, // user defined class 'MipsMemSimm11AsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  MCK_LSAImm, // user defined class 'uimm2LSAAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ZERO:
    return B == MCK_DSPR;

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPR;

  case MCK_CPURAReg:
    return B == MCK_DSPR;

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg8:
    return B == MCK_GPR64;

  case MCK_Reg10:
    return B == MCK_GPR64;

  case MCK_Reg12:
    switch (B) {
    default: return false;
    case MCK_FGR32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg15:
    switch (B) {
    default: return false;
    case MCK_FGRH32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg17:
    switch (B) {
    default: return false;
    case MCK_Reg18: return true;
    case MCK_AFGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg18:
    return B == MCK_OddSP;

  case MCK_Reg20:
    switch (B) {
    default: return false;
    case MCK_Reg18: return true;
    case MCK_FGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg22:
    return B == MCK_MSA128B;

  case MCK_HI32:
    return B == MCK_HI32DSP;

  case MCK_LO32:
    return B == MCK_LO32DSP;

  case MCK_ACC64:
    return B == MCK_ACC64DSP;

  case MCK_MemOffsetSimm11:
    return B == MCK_Mem;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  MipsOperand &Operand = (MipsOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ACC64DSPAsmReg' class
  if (Kind == MCK_ACC64DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AFGR64AsmReg' class
  if (Kind == MCK_AFGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCRAsmReg' class
  if (Kind == MCK_CCRAsmReg) {
    if (Operand.isCCRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP2AsmReg' class
  if (Kind == MCK_COP2AsmReg) {
    if (Operand.isCOP2AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP3AsmReg' class
  if (Kind == MCK_COP3AsmReg) {
    if (Operand.isCOP3AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FCCAsmReg' class
  if (Kind == MCK_FCCAsmReg) {
    if (Operand.isFCCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR32AsmReg' class
  if (Kind == MCK_FGR32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR64AsmReg' class
  if (Kind == MCK_FGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGRH32AsmReg' class
  if (Kind == MCK_FGRH32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR32AsmReg' class
  if (Kind == MCK_GPR32AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64AsmReg' class
  if (Kind == MCK_GPR64AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmReg' class
  if (Kind == MCK_GPRMM16AsmReg) {
    if (Operand.isMM16AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HI32DSPAsmReg' class
  if (Kind == MCK_HI32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsmReg' class
  if (Kind == MCK_HWRegsAsmReg) {
    if (Operand.isHWRegsAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LO32DSPAsmReg' class
  if (Kind == MCK_LO32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSA128AsmReg' class
  if (Kind == MCK_MSA128AsmReg) {
    if (Operand.isMSA128AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSACtrlAsmReg' class
  if (Kind == MCK_MSACtrlAsmReg) {
    if (Operand.isMSACtrlAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'InvNum' class
  if (Kind == MCK_InvNum) {
    if (Operand.isInvNum())
      return MCTargetAsmParser::Match_Success;
  }

  // 'JumpTarget' class
  if (Kind == MCK_JumpTarget) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm11' class
  if (Kind == MCK_MemOffsetSimm11) {
    if (Operand.isMemWithSimmOffset<11>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LSAImm' class
  if (Kind == MCK_LSAImm) {
    if (Operand.isLSAImm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPR; break;
    case Mips::V0: OpKind = MCK_CPU16Regs; break;
    case Mips::V1: OpKind = MCK_CPU16Regs; break;
    case Mips::A0: OpKind = MCK_CPU16Regs; break;
    case Mips::A1: OpKind = MCK_CPU16Regs; break;
    case Mips::A2: OpKind = MCK_CPU16Regs; break;
    case Mips::A3: OpKind = MCK_CPU16Regs; break;
    case Mips::T0: OpKind = MCK_DSPR; break;
    case Mips::T1: OpKind = MCK_DSPR; break;
    case Mips::T2: OpKind = MCK_DSPR; break;
    case Mips::T3: OpKind = MCK_DSPR; break;
    case Mips::T4: OpKind = MCK_DSPR; break;
    case Mips::T5: OpKind = MCK_DSPR; break;
    case Mips::T6: OpKind = MCK_DSPR; break;
    case Mips::T7: OpKind = MCK_DSPR; break;
    case Mips::S0: OpKind = MCK_CPU16Regs; break;
    case Mips::S1: OpKind = MCK_CPU16Regs; break;
    case Mips::S2: OpKind = MCK_DSPR; break;
    case Mips::S3: OpKind = MCK_DSPR; break;
    case Mips::S4: OpKind = MCK_DSPR; break;
    case Mips::S5: OpKind = MCK_DSPR; break;
    case Mips::S6: OpKind = MCK_DSPR; break;
    case Mips::S7: OpKind = MCK_DSPR; break;
    case Mips::T8: OpKind = MCK_DSPR; break;
    case Mips::T9: OpKind = MCK_DSPR; break;
    case Mips::K0: OpKind = MCK_DSPR; break;
    case Mips::K1: OpKind = MCK_DSPR; break;
    case Mips::GP: OpKind = MCK_DSPR; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPR; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_GPR64; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg7; break;
    case Mips::V1_64: OpKind = MCK_Reg7; break;
    case Mips::A0_64: OpKind = MCK_Reg7; break;
    case Mips::A1_64: OpKind = MCK_Reg7; break;
    case Mips::A2_64: OpKind = MCK_Reg7; break;
    case Mips::A3_64: OpKind = MCK_Reg7; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg7; break;
    case Mips::S1_64: OpKind = MCK_Reg7; break;
    case Mips::S2_64: OpKind = MCK_GPR64; break;
    case Mips::S3_64: OpKind = MCK_GPR64; break;
    case Mips::S4_64: OpKind = MCK_GPR64; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GPR64; break;
    case Mips::SP_64: OpKind = MCK_Reg9; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg10; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_Reg12; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_Reg12; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_Reg12; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_Reg12; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_Reg12; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_Reg12; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_Reg12; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_Reg12; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_Reg12; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_Reg12; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_Reg12; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_Reg12; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_Reg12; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_Reg12; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_Reg12; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_Reg12; break;
    case Mips::F_HI0: OpKind = MCK_FGRH32; break;
    case Mips::F_HI1: OpKind = MCK_Reg15; break;
    case Mips::F_HI2: OpKind = MCK_FGRH32; break;
    case Mips::F_HI3: OpKind = MCK_Reg15; break;
    case Mips::F_HI4: OpKind = MCK_FGRH32; break;
    case Mips::F_HI5: OpKind = MCK_Reg15; break;
    case Mips::F_HI6: OpKind = MCK_FGRH32; break;
    case Mips::F_HI7: OpKind = MCK_Reg15; break;
    case Mips::F_HI8: OpKind = MCK_FGRH32; break;
    case Mips::F_HI9: OpKind = MCK_Reg15; break;
    case Mips::F_HI10: OpKind = MCK_FGRH32; break;
    case Mips::F_HI11: OpKind = MCK_Reg15; break;
    case Mips::F_HI12: OpKind = MCK_FGRH32; break;
    case Mips::F_HI13: OpKind = MCK_Reg15; break;
    case Mips::F_HI14: OpKind = MCK_FGRH32; break;
    case Mips::F_HI15: OpKind = MCK_Reg15; break;
    case Mips::F_HI16: OpKind = MCK_FGRH32; break;
    case Mips::F_HI17: OpKind = MCK_Reg15; break;
    case Mips::F_HI18: OpKind = MCK_FGRH32; break;
    case Mips::F_HI19: OpKind = MCK_Reg15; break;
    case Mips::F_HI20: OpKind = MCK_FGRH32; break;
    case Mips::F_HI21: OpKind = MCK_Reg15; break;
    case Mips::F_HI22: OpKind = MCK_FGRH32; break;
    case Mips::F_HI23: OpKind = MCK_Reg15; break;
    case Mips::F_HI24: OpKind = MCK_FGRH32; break;
    case Mips::F_HI25: OpKind = MCK_Reg15; break;
    case Mips::F_HI26: OpKind = MCK_FGRH32; break;
    case Mips::F_HI27: OpKind = MCK_Reg15; break;
    case Mips::F_HI28: OpKind = MCK_FGRH32; break;
    case Mips::F_HI29: OpKind = MCK_Reg15; break;
    case Mips::F_HI30: OpKind = MCK_FGRH32; break;
    case Mips::F_HI31: OpKind = MCK_Reg15; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_Reg17; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_Reg17; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_Reg17; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_Reg17; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_Reg17; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_Reg17; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_Reg17; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_Reg17; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_Reg20; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_Reg20; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_Reg20; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_Reg20; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_Reg20; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_Reg20; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_Reg20; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_Reg20; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_Reg20; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_Reg20; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_Reg20; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_Reg20; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_Reg20; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_Reg20; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_Reg20; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_Reg20; break;
    case Mips::W0: OpKind = MCK_MSA128B; break;
    case Mips::W1: OpKind = MCK_Reg22; break;
    case Mips::W2: OpKind = MCK_MSA128B; break;
    case Mips::W3: OpKind = MCK_Reg22; break;
    case Mips::W4: OpKind = MCK_MSA128B; break;
    case Mips::W5: OpKind = MCK_Reg22; break;
    case Mips::W6: OpKind = MCK_MSA128B; break;
    case Mips::W7: OpKind = MCK_Reg22; break;
    case Mips::W8: OpKind = MCK_MSA128B; break;
    case Mips::W9: OpKind = MCK_Reg22; break;
    case Mips::W10: OpKind = MCK_MSA128B; break;
    case Mips::W11: OpKind = MCK_Reg22; break;
    case Mips::W12: OpKind = MCK_MSA128B; break;
    case Mips::W13: OpKind = MCK_Reg22; break;
    case Mips::W14: OpKind = MCK_MSA128B; break;
    case Mips::W15: OpKind = MCK_Reg22; break;
    case Mips::W16: OpKind = MCK_MSA128B; break;
    case Mips::W17: OpKind = MCK_Reg22; break;
    case Mips::W18: OpKind = MCK_MSA128B; break;
    case Mips::W19: OpKind = MCK_Reg22; break;
    case Mips::W20: OpKind = MCK_MSA128B; break;
    case Mips::W21: OpKind = MCK_Reg22; break;
    case Mips::W22: OpKind = MCK_MSA128B; break;
    case Mips::W23: OpKind = MCK_Reg22; break;
    case Mips::W24: OpKind = MCK_MSA128B; break;
    case Mips::W25: OpKind = MCK_Reg22; break;
    case Mips::W26: OpKind = MCK_MSA128B; break;
    case Mips::W27: OpKind = MCK_Reg22; break;
    case Mips::W28: OpKind = MCK_MSA128B; break;
    case Mips::W29: OpKind = MCK_Reg22; break;
    case Mips::W30: OpKind = MCK_MSA128B; break;
    case Mips::W31: OpKind = MCK_Reg22; break;
    case Mips::HI0: OpKind = MCK_HI32; break;
    case Mips::HI1: OpKind = MCK_HI32DSP; break;
    case Mips::HI2: OpKind = MCK_HI32DSP; break;
    case Mips::HI3: OpKind = MCK_HI32DSP; break;
    case Mips::LO0: OpKind = MCK_LO32; break;
    case Mips::LO1: OpKind = MCK_LO32DSP; break;
    case Mips::LO2: OpKind = MCK_LO32DSP; break;
    case Mips::LO3: OpKind = MCK_LO32DSP; break;
    case Mips::HI0_64: OpKind = MCK_HI64; break;
    case Mips::LO0_64: OpKind = MCK_LO64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::COP20: OpKind = MCK_COP2; break;
    case Mips::COP21: OpKind = MCK_COP2; break;
    case Mips::COP22: OpKind = MCK_COP2; break;
    case Mips::COP23: OpKind = MCK_COP2; break;
    case Mips::COP24: OpKind = MCK_COP2; break;
    case Mips::COP25: OpKind = MCK_COP2; break;
    case Mips::COP26: OpKind = MCK_COP2; break;
    case Mips::COP27: OpKind = MCK_COP2; break;
    case Mips::COP28: OpKind = MCK_COP2; break;
    case Mips::COP29: OpKind = MCK_COP2; break;
    case Mips::COP210: OpKind = MCK_COP2; break;
    case Mips::COP211: OpKind = MCK_COP2; break;
    case Mips::COP212: OpKind = MCK_COP2; break;
    case Mips::COP213: OpKind = MCK_COP2; break;
    case Mips::COP214: OpKind = MCK_COP2; break;
    case Mips::COP215: OpKind = MCK_COP2; break;
    case Mips::COP216: OpKind = MCK_COP2; break;
    case Mips::COP217: OpKind = MCK_COP2; break;
    case Mips::COP218: OpKind = MCK_COP2; break;
    case Mips::COP219: OpKind = MCK_COP2; break;
    case Mips::COP220: OpKind = MCK_COP2; break;
    case Mips::COP221: OpKind = MCK_COP2; break;
    case Mips::COP222: OpKind = MCK_COP2; break;
    case Mips::COP223: OpKind = MCK_COP2; break;
    case Mips::COP224: OpKind = MCK_COP2; break;
    case Mips::COP225: OpKind = MCK_COP2; break;
    case Mips::COP226: OpKind = MCK_COP2; break;
    case Mips::COP227: OpKind = MCK_COP2; break;
    case Mips::COP228: OpKind = MCK_COP2; break;
    case Mips::COP229: OpKind = MCK_COP2; break;
    case Mips::COP230: OpKind = MCK_COP2; break;
    case Mips::COP231: OpKind = MCK_COP2; break;
    case Mips::COP30: OpKind = MCK_COP3; break;
    case Mips::COP31: OpKind = MCK_COP3; break;
    case Mips::COP32: OpKind = MCK_COP3; break;
    case Mips::COP33: OpKind = MCK_COP3; break;
    case Mips::COP34: OpKind = MCK_COP3; break;
    case Mips::COP35: OpKind = MCK_COP3; break;
    case Mips::COP36: OpKind = MCK_COP3; break;
    case Mips::COP37: OpKind = MCK_COP3; break;
    case Mips::COP38: OpKind = MCK_COP3; break;
    case Mips::COP39: OpKind = MCK_COP3; break;
    case Mips::COP310: OpKind = MCK_COP3; break;
    case Mips::COP311: OpKind = MCK_COP3; break;
    case Mips::COP312: OpKind = MCK_COP3; break;
    case Mips::COP313: OpKind = MCK_COP3; break;
    case Mips::COP314: OpKind = MCK_COP3; break;
    case Mips::COP315: OpKind = MCK_COP3; break;
    case Mips::COP316: OpKind = MCK_COP3; break;
    case Mips::COP317: OpKind = MCK_COP3; break;
    case Mips::COP318: OpKind = MCK_COP3; break;
    case Mips::COP319: OpKind = MCK_COP3; break;
    case Mips::COP320: OpKind = MCK_COP3; break;
    case Mips::COP321: OpKind = MCK_COP3; break;
    case Mips::COP322: OpKind = MCK_COP3; break;
    case Mips::COP323: OpKind = MCK_COP3; break;
    case Mips::COP324: OpKind = MCK_COP3; break;
    case Mips::COP325: OpKind = MCK_COP3; break;
    case Mips::COP326: OpKind = MCK_COP3; break;
    case Mips::COP327: OpKind = MCK_COP3; break;
    case Mips::COP328: OpKind = MCK_COP3; break;
    case Mips::COP329: OpKind = MCK_COP3; break;
    case Mips::COP330: OpKind = MCK_COP3; break;
    case Mips::COP331: OpKind = MCK_COP3; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR0: OpKind = MCK_HWRegs; break;
    case Mips::HWR1: OpKind = MCK_HWRegs; break;
    case Mips::HWR2: OpKind = MCK_HWRegs; break;
    case Mips::HWR3: OpKind = MCK_HWRegs; break;
    case Mips::HWR4: OpKind = MCK_HWRegs; break;
    case Mips::HWR5: OpKind = MCK_HWRegs; break;
    case Mips::HWR6: OpKind = MCK_HWRegs; break;
    case Mips::HWR7: OpKind = MCK_HWRegs; break;
    case Mips::HWR8: OpKind = MCK_HWRegs; break;
    case Mips::HWR9: OpKind = MCK_HWRegs; break;
    case Mips::HWR10: OpKind = MCK_HWRegs; break;
    case Mips::HWR11: OpKind = MCK_HWRegs; break;
    case Mips::HWR12: OpKind = MCK_HWRegs; break;
    case Mips::HWR13: OpKind = MCK_HWRegs; break;
    case Mips::HWR14: OpKind = MCK_HWRegs; break;
    case Mips::HWR15: OpKind = MCK_HWRegs; break;
    case Mips::HWR16: OpKind = MCK_HWRegs; break;
    case Mips::HWR17: OpKind = MCK_HWRegs; break;
    case Mips::HWR18: OpKind = MCK_HWRegs; break;
    case Mips::HWR19: OpKind = MCK_HWRegs; break;
    case Mips::HWR20: OpKind = MCK_HWRegs; break;
    case Mips::HWR21: OpKind = MCK_HWRegs; break;
    case Mips::HWR22: OpKind = MCK_HWRegs; break;
    case Mips::HWR23: OpKind = MCK_HWRegs; break;
    case Mips::HWR24: OpKind = MCK_HWRegs; break;
    case Mips::HWR25: OpKind = MCK_HWRegs; break;
    case Mips::HWR26: OpKind = MCK_HWRegs; break;
    case Mips::HWR27: OpKind = MCK_HWRegs; break;
    case Mips::HWR28: OpKind = MCK_HWRegs; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR30: OpKind = MCK_HWRegs; break;
    case Mips::HWR31: OpKind = MCK_HWRegs; break;
    case Mips::AC0: OpKind = MCK_ACC64; break;
    case Mips::AC1: OpKind = MCK_ACC64DSP; break;
    case Mips::AC2: OpKind = MCK_ACC64DSP; break;
    case Mips::AC3: OpKind = MCK_ACC64DSP; break;
    case Mips::AC0_64: OpKind = MCK_ACC128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    case Mips::MSAIR: OpKind = MCK_MSACtrl; break;
    case Mips::MSACSR: OpKind = MCK_MSACtrl; break;
    case Mips::MSAAccess: OpKind = MCK_MSACtrl; break;
    case Mips::MSASave: OpKind = MCK_MSACtrl; break;
    case Mips::MSAModify: OpKind = MCK_MSACtrl; break;
    case Mips::MSARequest: OpKind = MCK_MSACtrl; break;
    case Mips::MSAMap: OpKind = MCK_MSACtrl; break;
    case Mips::MSAUnmap: OpKind = MCK_MSACtrl; break;
    case Mips::MPL0: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL1: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL2: OpKind = MCK_OCTEON_MPL; break;
    case Mips::P0: OpKind = MCK_OCTEON_P; break;
    case Mips::P1: OpKind = MCK_OCTEON_P; break;
    case Mips::P2: OpKind = MCK_OCTEON_P; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t MipsAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  if (((FB & Mips::FeatureMips2) != 0))
    Features |= Feature_HasMips2;
  if (((FB & Mips::FeatureMips3_32) != 0))
    Features |= Feature_HasMips3_32;
  if (((FB & Mips::FeatureMips3_32r2) != 0))
    Features |= Feature_HasMips3_32r2;
  if (((FB & Mips::FeatureMips3) != 0))
    Features |= Feature_HasMips3;
  if (((FB & Mips::FeatureMips4_32) != 0))
    Features |= Feature_HasMips4_32;
  if (((FB & Mips::FeatureMips4_32r2) != 0))
    Features |= Feature_HasMips4_32r2;
  if (((FB & Mips::FeatureMips5_32r2) != 0))
    Features |= Feature_HasMips5_32r2;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_HasMips32;
  if (((FB & Mips::FeatureMips32r2) != 0))
    Features |= Feature_HasMips32r2;
  if (((FB & Mips::FeatureMips32r6) != 0))
    Features |= Feature_HasMips32r6;
  if (((FB & Mips::FeatureMips32r6) == 0))
    Features |= Feature_NotMips32r6;
  if (((FB & Mips::FeatureGP64Bit) != 0))
    Features |= Feature_IsGP64bit;
  if (((FB & Mips::FeatureGP64Bit) == 0))
    Features |= Feature_IsGP32bit;
  if (((FB & Mips::FeatureMips64) != 0))
    Features |= Feature_HasMips64;
  if (((FB & Mips::FeatureMips64r2) != 0))
    Features |= Feature_HasMips64r2;
  if (((FB & Mips::FeatureMips64r6) != 0))
    Features |= Feature_HasMips64r6;
  if (((FB & Mips::FeatureMips64r6) == 0))
    Features |= Feature_NotMips64r6;
  if (((FB & Mips::FeatureN64) != 0))
    Features |= Feature_IsN64;
  if (((FB & Mips::FeatureMips16) != 0))
    Features |= Feature_InMips16Mode;
  if (((FB & Mips::FeatureCnMips) != 0))
    Features |= Feature_HasCnMips;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocStatic;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocPIC;
  if (((FB & Mips::FeatureMips16) == 0))
    Features |= Feature_HasStdEnc;
  if (((FB & Mips::FeatureMicroMips) != 0))
    Features |= Feature_InMicroMips;
  if (((FB & Mips::FeatureMicroMips) == 0))
    Features |= Feature_NotInMicroMips;
  if (((FB & Mips::FeatureFP64Bit) != 0))
    Features |= Feature_IsFP64bit;
  if (((FB & Mips::FeatureFP64Bit) == 0))
    Features |= Feature_NotFP64bit;
  if (((FB & Mips::FeatureSingleFloat) != 0))
    Features |= Feature_IsSingleFloat;
  if (((FB & Mips::FeatureSingleFloat) == 0))
    Features |= Feature_IsNotSingleFloat;
  if (((FB & Mips::FeatureDSP) != 0))
    Features |= Feature_HasDSP;
  if (((FB & Mips::FeatureDSPR2) != 0))
    Features |= Feature_HasDSPR2;
  if (((FB & Mips::FeatureMSA) != 0))
    Features |= Feature_HasMSA;
  return Features;
}

static const char *const MnemonicTable =
    "\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005add.d\005"
    "add.s\007add_a.b\007add_a.d\007add_a.h\007add_a.w\004addi\005addiu\007a"
    "ddiupc\taddiur1sp\007addiur2\007addius5\007addiusp\007addq.ph\taddq_s.p"
    "h\010addq_s.w\010addqh.ph\007addqh.w\naddqh_r.ph\taddqh_r.w\010adds_a.b"
    "\010adds_a.d\010adds_a.h\010adds_a.w\010adds_s.b\010adds_s.d\010adds_s."
    "h\010adds_s.w\010adds_u.b\010adds_u.d\010adds_u.h\010adds_u.w\005addsc\004"
    "addu\007addu.ph\007addu.qb\006addu16\taddu_s.ph\taddu_s.qb\010adduh.qb\n"
    "adduh_r.qb\006addv.b\006addv.d\006addv.h\006addv.w\007addvi.b\007addvi."
    "d\007addvi.h\007addvi.w\005addwc\005align\006aluipc\003and\005and.v\005"
    "and16\004andi\006andi.b\006append\010asub_s.b\010asub_s.d\010asub_s.h\010"
    "asub_s.w\010asub_u.b\010asub_u.d\010asub_u.h\010asub_u.w\003aui\005auip"
    "c\007ave_s.b\007ave_s.d\007ave_s.h\007ave_s.w\007ave_u.b\007ave_u.d\007"
    "ave_u.h\007ave_u.w\010aver_s.b\010aver_s.d\010aver_s.h\010aver_s.w\010a"
    "ver_u.b\010aver_u.d\010aver_u.h\010aver_u.w\001b\005baddu\003bal\004bal"
    "c\006balign\002bc\006bc1eqz\004bc1f\005bc1fl\006bc1nez\004bc1t\005bc1tl"
    "\006bc2eqz\006bc2nez\006bclr.b\006bclr.d\006bclr.h\006bclr.w\007bclri.b"
    "\007bclri.d\007bclri.h\007bclri.w\003beq\004beqc\004beql\004beqz\007beq"
    "zalc\005beqzc\004bgec\005bgeuc\004bgez\006bgezal\007bgezalc\007bgezall\007"
    "bgezals\005bgezc\005bgezl\004bgtz\007bgtzalc\005bgtzc\005bgtzl\007binsl"
    ".b\007binsl.d\007binsl.h\007binsl.w\010binsli.b\010binsli.d\010binsli.h"
    "\010binsli.w\007binsr.b\007binsr.d\007binsr.h\007binsr.w\010binsri.b\010"
    "binsri.d\010binsri.h\010binsri.w\006bitrev\007bitswap\004blez\007blezal"
    "c\005blezc\005blezl\004bltc\005bltuc\004bltz\006bltzal\007bltzalc\007bl"
    "tzall\007bltzals\005bltzc\005bltzl\006bmnz.v\007bmnzi.b\005bmz.v\006bmz"
    "i.b\003bne\004bnec\006bneg.b\006bneg.d\006bneg.h\006bneg.w\007bnegi.b\007"
    "bnegi.d\007bnegi.h\007bnegi.w\004bnel\004bnez\007bnezalc\005bnezc\004bn"
    "vc\005bnz.b\005bnz.d\005bnz.h\005bnz.v\005bnz.w\004bovc\010bposge32\005"
    "break\006bsel.v\007bseli.b\006bset.b\006bset.d\006bset.h\006bset.w\007b"
    "seti.b\007bseti.d\007bseti.h\007bseti.w\005bteqz\005btnez\004bz.b\004bz"
    ".d\004bz.h\004bz.v\004bz.w\006c.eq.d\006c.eq.s\005c.f.d\005c.f.s\006c.l"
    "e.d\006c.le.s\006c.lt.d\006c.lt.s\007c.nge.d\007c.nge.s\007c.ngl.d\007c"
    ".ngl.s\010c.ngle.d\010c.ngle.s\007c.ngt.d\007c.ngt.s\007c.ole.d\007c.ol"
    "e.s\007c.olt.d\007c.olt.s\007c.seq.d\007c.seq.s\006c.sf.d\006c.sf.s\007"
    "c.ueq.d\007c.ueq.s\007c.ule.d\007c.ule.s\007c.ult.d\007c.ult.s\006c.un."
    "d\006c.un.s\005cache\010ceil.l.d\010ceil.l.s\010ceil.w.d\010ceil.w.s\005"
    "ceq.b\005ceq.d\005ceq.h\005ceq.w\006ceqi.b\006ceqi.d\006ceqi.h\006ceqi."
    "w\004cfc1\006cfcmsa\004cins\006cins32\007class.d\007class.s\007cle_s.b\007"
    "cle_s.d\007cle_s.h\007cle_s.w\007cle_u.b\007cle_u.d\007cle_u.h\007cle_u"
    ".w\010clei_s.b\010clei_s.d\010clei_s.h\010clei_s.w\010clei_u.b\010clei_"
    "u.d\010clei_u.h\010clei_u.w\003clo\007clt_s.b\007clt_s.d\007clt_s.h\007"
    "clt_s.w\007clt_u.b\007clt_u.d\007clt_u.h\007clt_u.w\010clti_s.b\010clti"
    "_s.d\010clti_s.h\010clti_s.w\010clti_u.b\010clti_u.d\010clti_u.h\010clt"
    "i_u.w\003clz\003cmp\010cmp.af.d\010cmp.af.s\010cmp.eq.d\tcmp.eq.ph\010c"
    "mp.eq.s\010cmp.le.d\tcmp.le.ph\010cmp.le.s\010cmp.lt.d\tcmp.lt.ph\010cm"
    "p.lt.s\tcmp.saf.d\tcmp.saf.s\tcmp.seq.d\tcmp.seq.s\tcmp.sle.d\tcmp.sle."
    "s\tcmp.slt.d\tcmp.slt.s\ncmp.sueq.d\ncmp.sueq.s\ncmp.sule.d\ncmp.sule.s"
    "\ncmp.sult.d\ncmp.sult.s\tcmp.sun.d\tcmp.sun.s\tcmp.ueq.d\tcmp.ueq.s\tc"
    "mp.ule.d\tcmp.ule.s\tcmp.ult.d\tcmp.ult.s\010cmp.un.d\010cmp.un.s\014cm"
    "pgdu.eq.qb\014cmpgdu.le.qb\014cmpgdu.lt.qb\013cmpgu.eq.qb\013cmpgu.le.q"
    "b\013cmpgu.lt.qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb\ncmpu.lt.qb\010copy_s."
    "b\010copy_s.d\010copy_s.h\010copy_s.w\010copy_u.b\010copy_u.d\010copy_u"
    ".h\010copy_u.w\004ctc1\006ctcmsa\007cvt.d.l\007cvt.d.s\007cvt.d.w\007cv"
    "t.l.d\007cvt.l.s\007cvt.s.d\007cvt.s.l\007cvt.s.w\007cvt.w.d\007cvt.w.s"
    "\004dadd\005daddi\006daddiu\005daddu\004dahi\006dalign\004dati\004daui\010"
    "dbitswap\004dclo\004dclz\004ddiv\005ddivu\005deret\004dext\005dextm\005"
    "dextu\002di\004dins\005dinsm\005dinsu\003div\005div.d\005div.s\007div_s"
    ".b\007div_s.d\007div_s.h\007div_s.w\007div_u.b\007div_u.d\007div_u.h\007"
    "div_u.w\004divu\003dli\004dlsa\005dmfc0\005dmfc1\005dmfc2\004dmod\005dm"
    "odu\005dmtc0\005dmtc1\005dmtc2\004dmuh\005dmuhu\004dmul\005dmult\006dmu"
    "ltu\005dmulu\010dotp_s.d\010dotp_s.h\010dotp_s.w\010dotp_u.d\010dotp_u."
    "h\010dotp_u.w\010dpa.w.ph\tdpadd_s.d\tdpadd_s.h\tdpadd_s.w\tdpadd_u.d\t"
    "dpadd_u.h\tdpadd_u.w\013dpaq_s.w.ph\013dpaq_sa.l.w\014dpaqx_s.w.ph\015d"
    "paqx_sa.w.ph\ndpau.h.qbl\ndpau.h.qbr\tdpax.w.ph\004dpop\010dps.w.ph\013"
    "dpsq_s.w.ph\013dpsq_sa.l.w\014dpsqx_s.w.ph\015dpsqx_sa.w.ph\ndpsu.h.qbl"
    "\ndpsu.h.qbr\tdpsub_s.d\tdpsub_s.h\tdpsub_s.w\tdpsub_u.d\tdpsub_u.h\tdp"
    "sub_u.w\tdpsx.w.ph\005drotr\007drotr32\006drotrv\004dsbh\004dshd\004dsl"
    "l\006dsll32\005dsllv\004dsra\006dsra32\005dsrav\004dsrl\006dsrl32\005ds"
    "rlv\004dsub\005dsubi\005dsubu\003ehb\002ei\004eret\003ext\004extp\006ex"
    "tpdp\007extpdpv\005extpv\006extr.w\010extr_r.w\textr_rs.w\010extr_s.h\007"
    "extrv.w\textrv_r.w\nextrv_rs.w\textrv_s.h\004exts\006exts32\006fadd.d\006"
    "fadd.w\006fcaf.d\006fcaf.w\006fceq.d\006fceq.w\010fclass.d\010fclass.w\006"
    "fcle.d\006fcle.w\006fclt.d\006fclt.w\006fcne.d\006fcne.w\006fcor.d\006f"
    "cor.w\007fcueq.d\007fcueq.w\007fcule.d\007fcule.w\007fcult.d\007fcult.w"
    "\006fcun.d\006fcun.w\007fcune.d\007fcune.w\006fdiv.d\006fdiv.w\007fexdo"
    ".h\007fexdo.w\007fexp2.d\007fexp2.w\010fexupl.d\010fexupl.w\010fexupr.d"
    "\010fexupr.w\tffint_s.d\tffint_s.w\tffint_u.d\tffint_u.w\006ffql.d\006f"
    "fql.w\006ffqr.d\006ffqr.w\006fill.b\006fill.d\006fill.h\006fill.w\007fl"
    "og2.d\007flog2.w\tfloor.l.d\tfloor.l.s\tfloor.w.d\tfloor.w.s\007fmadd.d"
    "\007fmadd.w\006fmax.d\006fmax.w\010fmax_a.d\010fmax_a.w\006fmin.d\006fm"
    "in.w\010fmin_a.d\010fmin_a.w\007fmsub.d\007fmsub.w\006fmul.d\006fmul.w\006"
    "frcp.d\006frcp.w\007frint.d\007frint.w\010frsqrt.d\010frsqrt.w\006fsaf."
    "d\006fsaf.w\006fseq.d\006fseq.w\006fsle.d\006fsle.w\006fslt.d\006fslt.w"
    "\006fsne.d\006fsne.w\006fsor.d\006fsor.w\007fsqrt.d\007fsqrt.w\006fsub."
    "d\006fsub.w\007fsueq.d\007fsueq.w\007fsule.d\007fsule.w\007fsult.d\007f"
    "sult.w\006fsun.d\006fsun.w\007fsune.d\007fsune.w\tftint_s.d\tftint_s.w\t"
    "ftint_u.d\tftint_u.w\005ftq.h\005ftq.w\nftrunc_s.d\nftrunc_s.w\nftrunc_"
    "u.d\nftrunc_u.w\010hadd_s.d\010hadd_s.h\010hadd_s.w\010hadd_u.d\010hadd"
    "_u.h\010hadd_u.w\010hsub_s.d\010hsub_s.h\010hsub_s.w\010hsub_u.d\010hsu"
    "b_u.h\010hsub_u.w\007ilvev.b\007ilvev.d\007ilvev.h\007ilvev.w\006ilvl.b"
    "\006ilvl.d\006ilvl.h\006ilvl.w\007ilvod.b\007ilvod.d\007ilvod.h\007ilvo"
    "d.w\006ilvr.b\006ilvr.d\006ilvr.h\006ilvr.w\003ins\010insert.b\010inser"
    "t.d\010insert.h\010insert.w\004insv\007insve.b\007insve.d\007insve.h\007"
    "insve.w\001j\003jal\004jalr\007jalr.hb\005jalrc\005jalrs\007jalrs16\004"
    "jals\004jalx\005jialc\003jic\002jr\005jr.hb\004jr16\tjraddiusp\003jrc\002"
    "la\002lb\003lbu\004lbux\002ld\004ld.b\004ld.d\004ld.h\004ld.w\004ldc1\004"
    "ldc2\004ldc3\005ldi.b\005ldi.d\005ldi.h\005ldi.w\003ldl\004ldpc\003ldr\005"
    "ldxc1\002lh\003lhu\003lhx\002li\004li16\002ll\003lld\003lsa\003lui\005l"
    "uxc1\002lw\004lwc1\004lwc2\004lwc3\003lwl\004lwpc\003lwr\003lwu\005lwup"
    "c\003lwx\005lwxc1\004madd\006madd.d\006madd.s\010madd_q.h\010madd_q.w\007"
    "maddf.d\007maddf.s\tmaddr_q.h\tmaddr_q.w\005maddu\007maddv.b\007maddv.d"
    "\007maddv.h\007maddv.w\013maq_s.w.phl\013maq_s.w.phr\014maq_sa.w.phl\014"
    "maq_sa.w.phr\005max.d\005max.s\007max_a.b\007max_a.d\007max_a.h\007max_"
    "a.w\007max_s.b\007max_s.d\007max_s.h\007max_s.w\007max_u.b\007max_u.d\007"
    "max_u.h\007max_u.w\006maxa.d\006maxa.s\010maxi_s.b\010maxi_s.d\010maxi_"
    "s.h\010maxi_s.w\010maxi_u.b\010maxi_u.d\010maxi_u.h\010maxi_u.w\004mfc0"
    "\004mfc1\004mfc2\005mfhc1\004mfhi\004mflo\005min.d\005min.s\007min_a.b\007"
    "min_a.d\007min_a.h\007min_a.w\007min_s.b\007min_s.d\007min_s.h\007min_s"
    ".w\007min_u.b\007min_u.d\007min_u.h\007min_u.w\006mina.d\006mina.s\010m"
    "ini_s.b\010mini_s.d\010mini_s.h\010mini_s.w\010mini_u.b\010mini_u.d\010"
    "mini_u.h\010mini_u.w\003mod\007mod_s.b\007mod_s.d\007mod_s.h\007mod_s.w"
    "\007mod_u.b\007mod_u.d\007mod_u.h\007mod_u.w\006modsub\004modu\005mov.d"
    "\005mov.s\004move\006move.v\004movf\006movf.d\006movf.s\004movn\006movn"
    ".d\006movn.s\004movt\006movt.d\006movt.s\004movz\006movz.d\006movz.s\004"
    "msub\006msub.d\006msub.s\010msub_q.h\010msub_q.w\007msubf.d\007msubf.s\t"
    "msubr_q.h\tmsubr_q.w\005msubu\007msubv.b\007msubv.d\007msubv.h\007msubv"
    ".w\004mtc0\004mtc1\004mtc2\005mthc1\004mthi\006mthlip\004mtlo\004mtm0\004"
    "mtm1\004mtm2\004mtp0\004mtp1\004mtp2\003muh\004muhu\003mul\005mul.d\006"
    "mul.ph\005mul.s\007mul_q.h\007mul_q.w\010mul_s.ph\015muleq_s.w.phl\015m"
    "uleq_s.w.phr\016muleu_s.ph.qbl\016muleu_s.ph.qbr\nmulq_rs.ph\tmulq_rs.w"
    "\tmulq_s.ph\010mulq_s.w\010mulr_q.h\010mulr_q.w\nmulsa.w.ph\015mulsaq_s"
    ".w.ph\004mult\005multu\004mulu\006mulv.b\006mulv.d\006mulv.h\006mulv.w\003"
    "neg\005neg.d\005neg.s\004negu\006nloc.b\006nloc.d\006nloc.h\006nloc.w\006"
    "nlzc.b\006nlzc.d\006nlzc.h\006nlzc.w\007nmadd.d\007nmadd.s\007nmsub.d\007"
    "nmsub.s\003nop\003nor\005nor.v\006nori.b\003not\005not16\002or\004or.v\004"
    "or16\003ori\005ori.b\tpackrl.ph\005pause\007pckev.b\007pckev.d\007pckev"
    ".h\007pckev.w\007pckod.b\007pckod.d\007pckod.h\007pckod.w\006pcnt.b\006"
    "pcnt.d\006pcnt.h\006pcnt.w\007pick.ph\007pick.qb\003pop\014preceq.w.phl"
    "\014preceq.w.phr\016precequ.ph.qbl\017precequ.ph.qbla\016precequ.ph.qbr"
    "\017precequ.ph.qbra\015preceu.ph.qbl\016preceu.ph.qbla\015preceu.ph.qbr"
    "\016preceu.ph.qbra\013precr.qb.ph\016precr_sra.ph.w\020precr_sra_r.ph.w"
    "\013precrq.ph.w\014precrq.qb.ph\016precrq_rs.ph.w\017precrqu_s.qb.ph\004"
    "pref\007prepend\nraddu.w.qb\005rddsp\005rdhwr\007repl.ph\007repl.qb\010"
    "replv.ph\010replv.qb\006rint.d\006rint.s\004rotr\005rotrv\tround.l.d\tr"
    "ound.l.s\tround.w.d\tround.w.s\007sat_s.b\007sat_s.d\007sat_s.h\007sat_"
    "s.w\007sat_u.b\007sat_u.d\007sat_u.h\007sat_u.w\002sb\002sc\003scd\002s"
    "d\005sdbbp\004sdc1\004sdc2\004sdc3\003sdl\003sdr\005sdxc1\003seb\003seh"
    "\005sel.d\005sel.s\006seleqz\010seleqz.d\010seleqz.s\006selnez\010selne"
    "z.d\010selnez.s\003seq\004seqi\002sh\005shf.b\005shf.h\005shf.w\005shil"
    "o\006shilov\007shll.ph\007shll.qb\tshll_s.ph\010shll_s.w\010shllv.ph\010"
    "shllv.qb\nshllv_s.ph\tshllv_s.w\007shra.ph\007shra.qb\tshra_r.ph\tshra_"
    "r.qb\010shra_r.w\010shrav.ph\010shrav.qb\nshrav_r.ph\nshrav_r.qb\tshrav"
    "_r.w\007shrl.ph\007shrl.qb\010shrlv.ph\010shrlv.qb\005sld.b\005sld.d\005"
    "sld.h\005sld.w\006sldi.b\006sldi.d\006sldi.h\006sldi.w\003sll\005sll.b\005"
    "sll.d\005sll.h\005sll.w\005sll16\006slli.b\006slli.d\006slli.h\006slli."
    "w\004sllv\003slt\004slti\005sltiu\004sltu\003sne\004snei\007splat.b\007"
    "splat.d\007splat.h\007splat.w\010splati.b\010splati.d\010splati.h\010sp"
    "lati.w\006sqrt.d\006sqrt.s\003sra\005sra.b\005sra.d\005sra.h\005sra.w\006"
    "srai.b\006srai.d\006srai.h\006srai.w\006srar.b\006srar.d\006srar.h\006s"
    "rar.w\007srari.b\007srari.d\007srari.h\007srari.w\004srav\003srl\005srl"
    ".b\005srl.d\005srl.h\005srl.w\005srl16\006srli.b\006srli.d\006srli.h\006"
    "srli.w\006srlr.b\006srlr.d\006srlr.h\006srlr.w\007srlri.b\007srlri.d\007"
    "srlri.h\007srlri.w\004srlv\005ssnop\004st.b\004st.d\004st.h\004st.w\003"
    "sub\005sub.d\005sub.s\007subq.ph\tsubq_s.ph\010subq_s.w\010subqh.ph\007"
    "subqh.w\nsubqh_r.ph\tsubqh_r.w\010subs_s.b\010subs_s.d\010subs_s.h\010s"
    "ubs_s.w\010subs_u.b\010subs_u.d\010subs_u.h\010subs_u.w\nsubsus_u.b\nsu"
    "bsus_u.d\nsubsus_u.h\nsubsus_u.w\nsubsuu_s.b\nsubsuu_s.d\nsubsuu_s.h\ns"
    "ubsuu_s.w\004subu\007subu.ph\007subu.qb\006subu16\tsubu_s.ph\tsubu_s.qb"
    "\010subuh.qb\nsubuh_r.qb\006subv.b\006subv.d\006subv.h\006subv.w\007sub"
    "vi.b\007subvi.d\007subvi.h\007subvi.w\005suxc1\002sw\004swc1\004swc2\004"
    "swc3\003swl\003swr\005swxc1\004sync\nsynciobdma\005syncs\005syncw\006sy"
    "ncws\007syscall\003teq\004teqi\003tge\004tgei\005tgeiu\004tgeu\004tlbp\004"
    "tlbr\005tlbwi\005tlbwr\003tlt\004tlti\005tltiu\004tltu\003tne\004tnei\t"
    "trunc.l.d\ttrunc.l.s\ttrunc.w.d\ttrunc.w.s\006v3mulu\004vmm0\005vmulu\006"
    "vshf.b\006vshf.d\006vshf.h\006vshf.w\004wait\005wrdsp\004wsbh\003xor\005"
    "xor.v\005xor16\004xori\006xori.b";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[8];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* abs.d */, Mips::FABS_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 0 /* abs.d */, Mips::FABS_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6 /* abs.s */, Mips::FABS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 45 /* add.d */, Mips::FADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 45 /* add.d */, Mips::FADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 51 /* add.s */, Mips::FADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 57 /* add_a.b */, Mips::ADD_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 65 /* add_a.d */, Mips::ADD_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 73 /* add_a.h */, Mips::ADD_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 81 /* add_a.w */, Mips::ADD_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 94 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 100 /* addiupc */, Mips::ADDIUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 108 /* addiur1sp */, Mips::ADDIUR1SP_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 118 /* addiur2 */, Mips::ADDIUR2_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 126 /* addius5 */, Mips::ADDIUS5_MM, Convert__GPR32AsmReg1_0__Tie0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 134 /* addiusp */, Mips::ADDIUSP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 142 /* addq.ph */, Mips::ADDQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 150 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 160 /* addq_s.w */, Mips::ADDQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 169 /* addqh.ph */, Mips::ADDQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 178 /* addqh.w */, Mips::ADDQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 186 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 197 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 207 /* adds_a.b */, Mips::ADDS_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 216 /* adds_a.d */, Mips::ADDS_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 225 /* adds_a.h */, Mips::ADDS_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 234 /* adds_a.w */, Mips::ADDS_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 243 /* adds_s.b */, Mips::ADDS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 252 /* adds_s.d */, Mips::ADDS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 261 /* adds_s.h */, Mips::ADDS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 270 /* adds_s.w */, Mips::ADDS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 279 /* adds_u.b */, Mips::ADDS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 288 /* adds_u.d */, Mips::ADDS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 297 /* adds_u.h */, Mips::ADDS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 306 /* adds_u.w */, Mips::ADDS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 315 /* addsc */, Mips::ADDSC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 321 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 326 /* addu.ph */, Mips::ADDU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 334 /* addu.qb */, Mips::ADDU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 342 /* addu16 */, Mips::ADDU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 349 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 359 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 369 /* adduh.qb */, Mips::ADDUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 378 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 389 /* addv.b */, Mips::ADDV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 396 /* addv.d */, Mips::ADDV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 403 /* addv.h */, Mips::ADDV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 410 /* addv.w */, Mips::ADDV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 417 /* addvi.b */, Mips::ADDVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 425 /* addvi.d */, Mips::ADDVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 433 /* addvi.h */, Mips::ADDVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 441 /* addvi.w */, Mips::ADDVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 449 /* addwc */, Mips::ADDWC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 455 /* align */, Mips::ALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 461 /* aluipc */, Mips::ALUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 472 /* and.v */, Mips::AND_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 478 /* and16 */, Mips::AND16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 489 /* andi.b */, Mips::ANDI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 496 /* append */, Mips::APPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 503 /* asub_s.b */, Mips::ASUB_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 512 /* asub_s.d */, Mips::ASUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 521 /* asub_s.h */, Mips::ASUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 530 /* asub_s.w */, Mips::ASUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 539 /* asub_u.b */, Mips::ASUB_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 548 /* asub_u.d */, Mips::ASUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 557 /* asub_u.h */, Mips::ASUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 566 /* asub_u.w */, Mips::ASUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 575 /* aui */, Mips::AUI, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 579 /* auipc */, Mips::AUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 585 /* ave_s.b */, Mips::AVE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 593 /* ave_s.d */, Mips::AVE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 601 /* ave_s.h */, Mips::AVE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 609 /* ave_s.w */, Mips::AVE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 617 /* ave_u.b */, Mips::AVE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 625 /* ave_u.d */, Mips::AVE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 633 /* ave_u.h */, Mips::AVE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 641 /* ave_u.w */, Mips::AVE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 649 /* aver_s.b */, Mips::AVER_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 658 /* aver_s.d */, Mips::AVER_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 667 /* aver_s.h */, Mips::AVER_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 676 /* aver_s.w */, Mips::AVER_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 685 /* aver_u.b */, Mips::AVER_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 694 /* aver_u.d */, Mips::AVER_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 703 /* aver_u.h */, Mips::AVER_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 712 /* aver_u.w */, Mips::AVER_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 721 /* b */, Mips::BimmX16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget }, },
  { 721 /* b */, Mips::BEQ, Convert__regZERO__regZERO__JumpTarget1_0, 0, { MCK_JumpTarget }, },
  { 721 /* b */, Mips::Bimm16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 723 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 723 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 729 /* bal */, Mips::BAL, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 729 /* bal */, Mips::BGEZAL, Convert__regZERO__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 733 /* balc */, Mips::BALC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 738 /* balign */, Mips::BALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 745 /* bc */, Mips::BC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 748 /* bc1eqz */, Mips::BC1EQZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 755 /* bc1f */, Mips::BC1F, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 755 /* bc1f */, Mips::BC1F, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 760 /* bc1fl */, Mips::BC1FL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 760 /* bc1fl */, Mips::BC1FL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 766 /* bc1nez */, Mips::BC1NEZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 773 /* bc1t */, Mips::BC1T, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 773 /* bc1t */, Mips::BC1T, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 778 /* bc1tl */, Mips::BC1TL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 778 /* bc1tl */, Mips::BC1TL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 784 /* bc2eqz */, Mips::BC2EQZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 791 /* bc2nez */, Mips::BC2NEZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 798 /* bclr.b */, Mips::BCLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 805 /* bclr.d */, Mips::BCLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 812 /* bclr.h */, Mips::BCLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 819 /* bclr.w */, Mips::BCLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 826 /* bclri.b */, Mips::BCLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 834 /* bclri.d */, Mips::BCLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 842 /* bclri.h */, Mips::BCLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 850 /* bclri.w */, Mips::BCLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 858 /* beq */, Mips::BEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 858 /* beq */, Mips::BEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 862 /* beqc */, Mips::BEQC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 867 /* beql */, Mips::BEQL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 872 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 872 /* beqz */, Mips::BEQ, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 872 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 877 /* beqzalc */, Mips::BEQZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 885 /* beqzc */, Mips::BEQZC_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 885 /* beqzc */, Mips::BEQZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 891 /* bgec */, Mips::BGEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 896 /* bgeuc */, Mips::BGEUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 902 /* bgez */, Mips::BGEZ_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 902 /* bgez */, Mips::BGEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 907 /* bgezal */, Mips::BGEZAL_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 907 /* bgezal */, Mips::BGEZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 914 /* bgezalc */, Mips::BGEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 922 /* bgezall */, Mips::BGEZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 930 /* bgezals */, Mips::BGEZALS_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 938 /* bgezc */, Mips::BGEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 944 /* bgezl */, Mips::BGEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 950 /* bgtz */, Mips::BGTZ_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 950 /* bgtz */, Mips::BGTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 955 /* bgtzalc */, Mips::BGTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 963 /* bgtzc */, Mips::BGTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 969 /* bgtzl */, Mips::BGTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 975 /* binsl.b */, Mips::BINSL_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 983 /* binsl.d */, Mips::BINSL_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 991 /* binsl.h */, Mips::BINSL_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 999 /* binsl.w */, Mips::BINSL_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1007 /* binsli.b */, Mips::BINSLI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1016 /* binsli.d */, Mips::BINSLI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1025 /* binsli.h */, Mips::BINSLI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1034 /* binsli.w */, Mips::BINSLI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1043 /* binsr.b */, Mips::BINSR_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1051 /* binsr.d */, Mips::BINSR_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1059 /* binsr.h */, Mips::BINSR_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1067 /* binsr.w */, Mips::BINSR_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1075 /* binsri.b */, Mips::BINSRI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1084 /* binsri.d */, Mips::BINSRI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1093 /* binsri.h */, Mips::BINSRI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1102 /* binsri.w */, Mips::BINSRI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1111 /* bitrev */, Mips::BITREV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1118 /* bitswap */, Mips::BITSWAP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1126 /* blez */, Mips::BLEZ_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 1126 /* blez */, Mips::BLEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1131 /* blezalc */, Mips::BLEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1139 /* blezc */, Mips::BLEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1145 /* blezl */, Mips::BLEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1151 /* bltc */, Mips::BLTC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1156 /* bltuc */, Mips::BLTUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1162 /* bltz */, Mips::BLTZ_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 1162 /* bltz */, Mips::BLTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1167 /* bltzal */, Mips::BLTZAL_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 1167 /* bltzal */, Mips::BLTZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1174 /* bltzalc */, Mips::BLTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1182 /* bltzall */, Mips::BLTZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1190 /* bltzals */, Mips::BLTZALS_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 1198 /* bltzc */, Mips::BLTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1204 /* bltzl */, Mips::BLTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1210 /* bmnz.v */, Mips::BMNZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1217 /* bmnzi.b */, Mips::BMNZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1225 /* bmz.v */, Mips::BMZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1231 /* bmzi.b */, Mips::BMZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1238 /* bne */, Mips::BNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 1238 /* bne */, Mips::BNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1242 /* bnec */, Mips::BNEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1247 /* bneg.b */, Mips::BNEG_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1254 /* bneg.d */, Mips::BNEG_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1261 /* bneg.h */, Mips::BNEG_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1268 /* bneg.w */, Mips::BNEG_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1275 /* bnegi.b */, Mips::BNEGI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1283 /* bnegi.d */, Mips::BNEGI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1291 /* bnegi.h */, Mips::BNEGI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1299 /* bnegi.w */, Mips::BNEGI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1307 /* bnel */, Mips::BNEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1312 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 1312 /* bnez */, Mips::BNE, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1312 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1317 /* bnezalc */, Mips::BNEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1325 /* bnezc */, Mips::BNEZC_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 1325 /* bnezc */, Mips::BNEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1331 /* bnvc */, Mips::BNVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1336 /* bnz.b */, Mips::BNZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1342 /* bnz.d */, Mips::BNZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1348 /* bnz.h */, Mips::BNZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1354 /* bnz.v */, Mips::BNZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1360 /* bnz.w */, Mips::BNZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1366 /* bovc */, Mips::BOVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1371 /* bposge32 */, Mips::BPOSGE32, Convert__JumpTarget1_0, Feature_HasDSP, { MCK_JumpTarget }, },
  { 1380 /* break */, Mips::BREAK, Convert__imm_0__imm_0, 0, {  }, },
  { 1380 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 1380 /* break */, Mips::BREAK, Convert__Imm1_0__imm_0, 0, { MCK_Imm }, },
  { 1380 /* break */, Mips::BREAK, Convert__Imm1_0__Imm1_1, Feature_HasStdEnc, { MCK_Imm, MCK_Imm }, },
  { 1380 /* break */, Mips::BREAK_MM, Convert__Imm1_0__Imm1_1, Feature_InMicroMips, { MCK_Imm, MCK_Imm }, },
  { 1386 /* bsel.v */, Mips::BSEL_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1393 /* bseli.b */, Mips::BSELI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1401 /* bset.b */, Mips::BSET_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1408 /* bset.d */, Mips::BSET_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1415 /* bset.h */, Mips::BSET_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1422 /* bset.w */, Mips::BSET_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1429 /* bseti.b */, Mips::BSETI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1437 /* bseti.d */, Mips::BSETI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1445 /* bseti.h */, Mips::BSETI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1453 /* bseti.w */, Mips::BSETI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1461 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1461 /* bteqz */, Mips::Bteqz16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1467 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1467 /* btnez */, Mips::Btnez16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1473 /* bz.b */, Mips::BZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1478 /* bz.d */, Mips::BZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1483 /* bz.h */, Mips::BZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1488 /* bz.v */, Mips::BZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1493 /* bz.w */, Mips::BZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1498 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1498 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1505 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1512 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1512 /* c.f.d */, Mips::C_F_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1518 /* c.f.s */, Mips::C_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1524 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1524 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1531 /* c.le.s */, Mips::C_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1538 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1538 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1545 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1552 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1552 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1560 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1568 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1568 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1576 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1584 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1584 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1593 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1602 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1602 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1610 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1618 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1618 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1626 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1634 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1634 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1642 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1650 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1650 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1658 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1666 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1666 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1673 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1680 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1680 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1688 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1696 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1696 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1704 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1712 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1712 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1720 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1728 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1728 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1735 /* c.un.s */, Mips::C_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1742 /* cache */, Mips::CACHE, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm, MCK_Mem }, },
  { 1742 /* cache */, Mips::CACHE_R6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm, MCK_Mem }, },
  { 1748 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1757 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1766 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1766 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 1775 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1784 /* ceq.b */, Mips::CEQ_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1790 /* ceq.d */, Mips::CEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1796 /* ceq.h */, Mips::CEQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1802 /* ceq.w */, Mips::CEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1808 /* ceqi.b */, Mips::CEQI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1815 /* ceqi.d */, Mips::CEQI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1822 /* ceqi.h */, Mips::CEQI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1829 /* ceqi.w */, Mips::CEQI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1836 /* cfc1 */, Mips::CFC1, Convert__GPR32AsmReg1_0__CCRAsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 1841 /* cfcmsa */, Mips::CFCMSA, Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSACtrlAsmReg }, },
  { 1848 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1848 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1853 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1853 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1860 /* class.d */, Mips::CLASS_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1868 /* class.s */, Mips::CLASS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1876 /* cle_s.b */, Mips::CLE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1884 /* cle_s.d */, Mips::CLE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1892 /* cle_s.h */, Mips::CLE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1900 /* cle_s.w */, Mips::CLE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1908 /* cle_u.b */, Mips::CLE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1916 /* cle_u.d */, Mips::CLE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1924 /* cle_u.h */, Mips::CLE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1932 /* cle_u.w */, Mips::CLE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1940 /* clei_s.b */, Mips::CLEI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1949 /* clei_s.d */, Mips::CLEI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1958 /* clei_s.h */, Mips::CLEI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1967 /* clei_s.w */, Mips::CLEI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1976 /* clei_u.b */, Mips::CLEI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1985 /* clei_u.d */, Mips::CLEI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1994 /* clei_u.h */, Mips::CLEI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2003 /* clei_u.w */, Mips::CLEI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2012 /* clo */, Mips::CLO, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2012 /* clo */, Mips::CLO_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2012 /* clo */, Mips::CLO_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2016 /* clt_s.b */, Mips::CLT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2024 /* clt_s.d */, Mips::CLT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2032 /* clt_s.h */, Mips::CLT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2040 /* clt_s.w */, Mips::CLT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2048 /* clt_u.b */, Mips::CLT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2056 /* clt_u.d */, Mips::CLT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2064 /* clt_u.h */, Mips::CLT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2072 /* clt_u.w */, Mips::CLT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2080 /* clti_s.b */, Mips::CLTI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2089 /* clti_s.d */, Mips::CLTI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2098 /* clti_s.h */, Mips::CLTI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2107 /* clti_s.w */, Mips::CLTI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2116 /* clti_u.b */, Mips::CLTI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2125 /* clti_u.d */, Mips::CLTI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2134 /* clti_u.h */, Mips::CLTI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2143 /* clti_u.w */, Mips::CLTI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2152 /* clz */, Mips::CLZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2152 /* clz */, Mips::CLZ_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2152 /* clz */, Mips::CLZ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2156 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2160 /* cmp.af.d */, Mips::CMP_F_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2169 /* cmp.af.s */, Mips::CMP_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2178 /* cmp.eq.d */, Mips::CMP_EQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2187 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2197 /* cmp.eq.s */, Mips::CMP_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2206 /* cmp.le.d */, Mips::CMP_LE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2215 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2225 /* cmp.le.s */, Mips::CMP_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2234 /* cmp.lt.d */, Mips::CMP_LT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2243 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2253 /* cmp.lt.s */, Mips::CMP_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2262 /* cmp.saf.d */, Mips::CMP_SAF_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2272 /* cmp.saf.s */, Mips::CMP_SAF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2282 /* cmp.seq.d */, Mips::CMP_SEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2292 /* cmp.seq.s */, Mips::CMP_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2302 /* cmp.sle.d */, Mips::CMP_SLE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2312 /* cmp.sle.s */, Mips::CMP_SLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2322 /* cmp.slt.d */, Mips::CMP_SLT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2332 /* cmp.slt.s */, Mips::CMP_SLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2342 /* cmp.sueq.d */, Mips::CMP_SUEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2353 /* cmp.sueq.s */, Mips::CMP_SUEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2364 /* cmp.sule.d */, Mips::CMP_SULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2375 /* cmp.sule.s */, Mips::CMP_SULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2386 /* cmp.sult.d */, Mips::CMP_SULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2397 /* cmp.sult.s */, Mips::CMP_SULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2408 /* cmp.sun.d */, Mips::CMP_SUN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2418 /* cmp.sun.s */, Mips::CMP_SUN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2428 /* cmp.ueq.d */, Mips::CMP_UEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2438 /* cmp.ueq.s */, Mips::CMP_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2448 /* cmp.ule.d */, Mips::CMP_ULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2458 /* cmp.ule.s */, Mips::CMP_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2468 /* cmp.ult.d */, Mips::CMP_ULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2478 /* cmp.ult.s */, Mips::CMP_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2488 /* cmp.un.d */, Mips::CMP_UN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2497 /* cmp.un.s */, Mips::CMP_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2506 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2519 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2532 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2545 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2557 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2569 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2581 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2581 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2586 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2597 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2608 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2619 /* copy_s.b */, Mips::COPY_S_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2628 /* copy_s.d */, Mips::COPY_S_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2637 /* copy_s.h */, Mips::COPY_S_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2646 /* copy_s.w */, Mips::COPY_S_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2655 /* copy_u.b */, Mips::COPY_U_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2664 /* copy_u.d */, Mips::COPY_U_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2673 /* copy_u.h */, Mips::COPY_U_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2682 /* copy_u.w */, Mips::COPY_U_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2691 /* ctc1 */, Mips::CTC1, Convert__CCRAsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2696 /* ctcmsa */, Mips::CTCMSA, Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSACtrlAsmReg, MCK_GPR32AsmReg }, },
  { 2703 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2711 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2711 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2719 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2719 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2727 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2735 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2743 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2743 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2751 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2759 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2767 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2767 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2775 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2783 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2783 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2783 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2783 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2788 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2788 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2794 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2794 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2801 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2801 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2801 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2801 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2807 /* dahi */, Mips::DAHI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2812 /* dalign */, Mips::DALIGN, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2819 /* dati */, Mips::DATI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2824 /* daui */, Mips::DAUI, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2829 /* dbitswap */, Mips::DBITSWAP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2838 /* dclo */, Mips::DCLO, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2838 /* dclo */, Mips::DCLO_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2843 /* dclz */, Mips::DCLZ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2843 /* dclz */, Mips::DCLZ_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2848 /* ddiv */, Mips::DSDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2848 /* ddiv */, Mips::DDIV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2853 /* ddivu */, Mips::DUDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2853 /* ddivu */, Mips::DDIVU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2859 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32, {  }, },
  { 2859 /* deret */, Mips::DERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 2865 /* dext */, Mips::DEXT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2870 /* dextm */, Mips::DEXTM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2876 /* dextu */, Mips::DEXTU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2882 /* di */, Mips::DI, Convert__regZERO, Feature_HasMips32r2, {  }, },
  { 2882 /* di */, Mips::DI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg }, },
  { 2882 /* di */, Mips::DI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 2885 /* dins */, Mips::DINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2890 /* dinsm */, Mips::DINSM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2896 /* dinsu */, Mips::DINSU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2902 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2902 /* div */, Mips::SDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2902 /* div */, Mips::SDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2902 /* div */, Mips::DIV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2906 /* div.d */, Mips::FDIV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 2906 /* div.d */, Mips::FDIV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2912 /* div.s */, Mips::FDIV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2918 /* div_s.b */, Mips::DIV_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2926 /* div_s.d */, Mips::DIV_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2934 /* div_s.h */, Mips::DIV_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2942 /* div_s.w */, Mips::DIV_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2950 /* div_u.b */, Mips::DIV_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2958 /* div_u.d */, Mips::DIV_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2966 /* div_u.h */, Mips::DIV_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2974 /* div_u.w */, Mips::DIV_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2982 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2982 /* divu */, Mips::UDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2982 /* divu */, Mips::UDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2982 /* divu */, Mips::DIVU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2987 /* dli */, Mips::LoadImm64Reg, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2991 /* dlsa */, Mips::DLSA_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2991 /* dlsa */, Mips::DLSA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_LSAImm }, },
  { 2996 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2996 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3002 /* dmfc1 */, Mips::DMFC1, Convert__GPR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3008 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3008 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3014 /* dmod */, Mips::DMOD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3019 /* dmodu */, Mips::DMODU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3025 /* dmtc0 */, Mips::DMTC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3025 /* dmtc0 */, Mips::DMTC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3031 /* dmtc1 */, Mips::DMTC1, Convert__FGR64AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3037 /* dmtc2 */, Mips::DMTC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3037 /* dmtc2 */, Mips::DMTC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3043 /* dmuh */, Mips::DMUH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3048 /* dmuhu */, Mips::DMUHU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3054 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3054 /* dmul */, Mips::DMUL_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3054 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3059 /* dmult */, Mips::DMULT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3065 /* dmultu */, Mips::DMULTu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3072 /* dmulu */, Mips::DMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3078 /* dotp_s.d */, Mips::DOTP_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3087 /* dotp_s.h */, Mips::DOTP_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3096 /* dotp_s.w */, Mips::DOTP_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3105 /* dotp_u.d */, Mips::DOTP_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3114 /* dotp_u.h */, Mips::DOTP_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3123 /* dotp_u.w */, Mips::DOTP_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3132 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3141 /* dpadd_s.d */, Mips::DPADD_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3151 /* dpadd_s.h */, Mips::DPADD_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3161 /* dpadd_s.w */, Mips::DPADD_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3171 /* dpadd_u.d */, Mips::DPADD_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3181 /* dpadd_u.h */, Mips::DPADD_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3191 /* dpadd_u.w */, Mips::DPADD_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3201 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3213 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3225 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3238 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3252 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3263 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3274 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3284 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 3284 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3289 /* dps.w.ph */, Mips::DPS_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3298 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3310 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3322 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3335 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3349 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3360 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3371 /* dpsub_s.d */, Mips::DPSUB_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3381 /* dpsub_s.h */, Mips::DPSUB_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3391 /* dpsub_s.w */, Mips::DPSUB_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3401 /* dpsub_u.d */, Mips::DPSUB_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3411 /* dpsub_u.h */, Mips::DPSUB_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3421 /* dpsub_u.w */, Mips::DPSUB_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3431 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3441 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3441 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3447 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3447 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3455 /* drotrv */, Mips::DROTRV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3462 /* dsbh */, Mips::DSBH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3467 /* dshd */, Mips::DSHD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3472 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3472 /* dsll */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3472 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3477 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3477 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3484 /* dsllv */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3490 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3490 /* dsra */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3490 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3495 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3495 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3502 /* dsrav */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3508 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3508 /* dsrl */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3508 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3513 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3513 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3520 /* dsrlv */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3526 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3526 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3526 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3526 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3531 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3531 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3537 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3537 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3537 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3537 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3543 /* ehb */, Mips::EHB, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 3547 /* ei */, Mips::EI, Convert__regZERO, Feature_HasMips32r2, {  }, },
  { 3547 /* ei */, Mips::EI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg }, },
  { 3547 /* ei */, Mips::EI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3550 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips3_32, {  }, },
  { 3550 /* eret */, Mips::ERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3555 /* ext */, Mips::EXT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 3555 /* ext */, Mips::EXT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 3559 /* extp */, Mips::EXTP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3564 /* extpdp */, Mips::EXTPDP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3571 /* extpdpv */, Mips::EXTPDPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3579 /* extpv */, Mips::EXTPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3585 /* extr.w */, Mips::EXTR_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3592 /* extr_r.w */, Mips::EXTR_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3601 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3611 /* extr_s.h */, Mips::EXTR_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3620 /* extrv.w */, Mips::EXTRV_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3628 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3638 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3649 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3659 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3659 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3664 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3664 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3671 /* fadd.d */, Mips::FADD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3678 /* fadd.w */, Mips::FADD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3685 /* fcaf.d */, Mips::FCAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3692 /* fcaf.w */, Mips::FCAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3699 /* fceq.d */, Mips::FCEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3706 /* fceq.w */, Mips::FCEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3713 /* fclass.d */, Mips::FCLASS_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3722 /* fclass.w */, Mips::FCLASS_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3731 /* fcle.d */, Mips::FCLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3738 /* fcle.w */, Mips::FCLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3745 /* fclt.d */, Mips::FCLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3752 /* fclt.w */, Mips::FCLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3759 /* fcne.d */, Mips::FCNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3766 /* fcne.w */, Mips::FCNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3773 /* fcor.d */, Mips::FCOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3780 /* fcor.w */, Mips::FCOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3787 /* fcueq.d */, Mips::FCUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3795 /* fcueq.w */, Mips::FCUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3803 /* fcule.d */, Mips::FCULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3811 /* fcule.w */, Mips::FCULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3819 /* fcult.d */, Mips::FCULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3827 /* fcult.w */, Mips::FCULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3835 /* fcun.d */, Mips::FCUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3842 /* fcun.w */, Mips::FCUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3849 /* fcune.d */, Mips::FCUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3857 /* fcune.w */, Mips::FCUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3865 /* fdiv.d */, Mips::FDIV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3872 /* fdiv.w */, Mips::FDIV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3879 /* fexdo.h */, Mips::FEXDO_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3887 /* fexdo.w */, Mips::FEXDO_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3895 /* fexp2.d */, Mips::FEXP2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3903 /* fexp2.w */, Mips::FEXP2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3911 /* fexupl.d */, Mips::FEXUPL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3920 /* fexupl.w */, Mips::FEXUPL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3929 /* fexupr.d */, Mips::FEXUPR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3938 /* fexupr.w */, Mips::FEXUPR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3947 /* ffint_s.d */, Mips::FFINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3957 /* ffint_s.w */, Mips::FFINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3967 /* ffint_u.d */, Mips::FFINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3977 /* ffint_u.w */, Mips::FFINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3987 /* ffql.d */, Mips::FFQL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3994 /* ffql.w */, Mips::FFQL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4001 /* ffqr.d */, Mips::FFQR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4008 /* ffqr.w */, Mips::FFQR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4015 /* fill.b */, Mips::FILL_B, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4022 /* fill.d */, Mips::FILL_D, Convert__MSA128AsmReg1_0__GPR64AsmReg1_1, Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK_GPR64AsmReg }, },
  { 4029 /* fill.h */, Mips::FILL_H, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4036 /* fill.w */, Mips::FILL_W, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4043 /* flog2.d */, Mips::FLOG2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4051 /* flog2.w */, Mips::FLOG2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4059 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4069 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4079 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4079 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 4089 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4099 /* fmadd.d */, Mips::FMADD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4107 /* fmadd.w */, Mips::FMADD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4115 /* fmax.d */, Mips::FMAX_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4122 /* fmax.w */, Mips::FMAX_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4129 /* fmax_a.d */, Mips::FMAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4138 /* fmax_a.w */, Mips::FMAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4147 /* fmin.d */, Mips::FMIN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4154 /* fmin.w */, Mips::FMIN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4161 /* fmin_a.d */, Mips::FMIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4170 /* fmin_a.w */, Mips::FMIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4179 /* fmsub.d */, Mips::FMSUB_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4187 /* fmsub.w */, Mips::FMSUB_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4195 /* fmul.d */, Mips::FMUL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4202 /* fmul.w */, Mips::FMUL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4209 /* frcp.d */, Mips::FRCP_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4216 /* frcp.w */, Mips::FRCP_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4223 /* frint.d */, Mips::FRINT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4231 /* frint.w */, Mips::FRINT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4239 /* frsqrt.d */, Mips::FRSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4248 /* frsqrt.w */, Mips::FRSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4257 /* fsaf.d */, Mips::FSAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4264 /* fsaf.w */, Mips::FSAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4271 /* fseq.d */, Mips::FSEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4278 /* fseq.w */, Mips::FSEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4285 /* fsle.d */, Mips::FSLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4292 /* fsle.w */, Mips::FSLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4299 /* fslt.d */, Mips::FSLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4306 /* fslt.w */, Mips::FSLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4313 /* fsne.d */, Mips::FSNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4320 /* fsne.w */, Mips::FSNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4327 /* fsor.d */, Mips::FSOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4334 /* fsor.w */, Mips::FSOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4341 /* fsqrt.d */, Mips::FSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4349 /* fsqrt.w */, Mips::FSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4357 /* fsub.d */, Mips::FSUB_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4364 /* fsub.w */, Mips::FSUB_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4371 /* fsueq.d */, Mips::FSUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4379 /* fsueq.w */, Mips::FSUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4387 /* fsule.d */, Mips::FSULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4395 /* fsule.w */, Mips::FSULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4403 /* fsult.d */, Mips::FSULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4411 /* fsult.w */, Mips::FSULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4419 /* fsun.d */, Mips::FSUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4426 /* fsun.w */, Mips::FSUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4433 /* fsune.d */, Mips::FSUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4441 /* fsune.w */, Mips::FSUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4449 /* ftint_s.d */, Mips::FTINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4459 /* ftint_s.w */, Mips::FTINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4469 /* ftint_u.d */, Mips::FTINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4479 /* ftint_u.w */, Mips::FTINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4489 /* ftq.h */, Mips::FTQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4495 /* ftq.w */, Mips::FTQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4501 /* ftrunc_s.d */, Mips::FTRUNC_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4512 /* ftrunc_s.w */, Mips::FTRUNC_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4523 /* ftrunc_u.d */, Mips::FTRUNC_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4534 /* ftrunc_u.w */, Mips::FTRUNC_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4545 /* hadd_s.d */, Mips::HADD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4554 /* hadd_s.h */, Mips::HADD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4563 /* hadd_s.w */, Mips::HADD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4572 /* hadd_u.d */, Mips::HADD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4581 /* hadd_u.h */, Mips::HADD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4590 /* hadd_u.w */, Mips::HADD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4599 /* hsub_s.d */, Mips::HSUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4608 /* hsub_s.h */, Mips::HSUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4617 /* hsub_s.w */, Mips::HSUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4626 /* hsub_u.d */, Mips::HSUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4635 /* hsub_u.h */, Mips::HSUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4644 /* hsub_u.w */, Mips::HSUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4653 /* ilvev.b */, Mips::ILVEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4661 /* ilvev.d */, Mips::ILVEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4669 /* ilvev.h */, Mips::ILVEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4677 /* ilvev.w */, Mips::ILVEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4685 /* ilvl.b */, Mips::ILVL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4692 /* ilvl.d */, Mips::ILVL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4699 /* ilvl.h */, Mips::ILVL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4706 /* ilvl.w */, Mips::ILVL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4713 /* ilvod.b */, Mips::ILVOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4721 /* ilvod.d */, Mips::ILVOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4729 /* ilvod.h */, Mips::ILVOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4737 /* ilvod.w */, Mips::ILVOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4745 /* ilvr.b */, Mips::ILVR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4752 /* ilvr.d */, Mips::ILVR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4759 /* ilvr.h */, Mips::ILVR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4766 /* ilvr.w */, Mips::ILVR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4773 /* ins */, Mips::INS, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 4773 /* ins */, Mips::INS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 4777 /* insert.b */, Mips::INSERT_B, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4786 /* insert.d */, Mips::INSERT_D, Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2, Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR64AsmReg }, },
  { 4795 /* insert.h */, Mips::INSERT_H, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4804 /* insert.w */, Mips::INSERT_W, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4813 /* insv */, Mips::INSV, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4818 /* insve.b */, Mips::INSVE_B, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4826 /* insve.d */, Mips::INSVE_D, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4834 /* insve.h */, Mips::INSVE_H, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4842 /* insve.w */, Mips::INSVE_W, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4850 /* j */, Mips::JR, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 4850 /* j */, Mips::J_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4850 /* j */, Mips::J, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_RelocStatic, { MCK_JumpTarget }, },
  { 4852 /* jal */, Mips::JALR, Convert__regRA__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 4852 /* jal */, Mips::JAL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4852 /* jal */, Mips::JAL, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 4852 /* jal */, Mips::JALR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4856 /* jalr */, Mips::JALR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4856 /* jalr */, Mips::JALR, Convert__regRA__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 4856 /* jalr */, Mips::JALR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4856 /* jalr */, Mips::JALR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4861 /* jalr.hb */, Mips::JALR_HB, Convert__regRA__GPR32AsmReg1_0, Feature_HasMips32, { MCK_GPR32AsmReg }, },
  { 4861 /* jalr.hb */, Mips::JALR_HB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4869 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 4875 /* jalrs */, Mips::JALRS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4881 /* jalrs16 */, Mips::JALRS16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4889 /* jals */, Mips::JALS_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4894 /* jalx */, Mips::JALX, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 4899 /* jialc */, Mips::JIALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 4905 /* jic */, Mips::JIC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 4909 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 4909 /* jr */, Mips::JR, Convert__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg }, },
  { 4909 /* jr */, Mips::JR_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4909 /* jr */, Mips::JALR, Convert__regZERO__GPR32AsmReg1_0, Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 4909 /* jr */, Mips::JALR64, Convert__regZERO_64__GPR64AsmReg1_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 4912 /* jr.hb */, Mips::JR_HB, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 4912 /* jr.hb */, Mips::JR_HB_R6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 4918 /* jr16 */, Mips::JR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4923 /* jraddiusp */, Mips::JRADDIUSP, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4933 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 4933 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 4933 /* jrc */, Mips::JRC16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4937 /* la */, Mips::LoadAddr32Imm, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 4937 /* la */, Mips::LoadAddr32Reg, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 4940 /* lb */, Mips::LB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 4940 /* lb */, Mips::LB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 4943 /* lbu */, Mips::LBu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 4943 /* lbu */, Mips::LBu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 4947 /* lbux */, Mips::LBUX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 4952 /* ld */, Mips::LD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 4955 /* ld.b */, Mips::LD_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 4960 /* ld.d */, Mips::LD_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 4965 /* ld.h */, Mips::LD_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 4970 /* ld.w */, Mips::LD_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 4975 /* ldc1 */, Mips::LDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 4975 /* ldc1 */, Mips::LDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 4980 /* ldc2 */, Mips::LDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 4980 /* ldc2 */, Mips::LDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_COP2AsmReg, MCK_Mem }, },
  { 4985 /* ldc3 */, Mips::LDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_COP3AsmReg, MCK_Mem }, },
  { 4990 /* ldi.b */, Mips::LDI_B, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 4996 /* ldi.d */, Mips::LDI_D, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5002 /* ldi.h */, Mips::LDI_H, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5008 /* ldi.w */, Mips::LDI_W, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5014 /* ldl */, Mips::LDL, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5018 /* ldpc */, Mips::LDPC, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5023 /* ldr */, Mips::LDR, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5027 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5027 /* ldxc1 */, Mips::LDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5033 /* lh */, Mips::LH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5033 /* lh */, Mips::LH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5036 /* lhu */, Mips::LHu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5036 /* lhu */, Mips::LHu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5040 /* lhx */, Mips::LHX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5044 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5044 /* li */, Mips::LoadImm32Reg, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5044 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5047 /* li16 */, Mips::LI16_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 5052 /* ll */, Mips::LL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5052 /* ll */, Mips::LL_R6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5052 /* ll */, Mips::LL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5055 /* lld */, Mips::LLD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5055 /* lld */, Mips::LLD_R6, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5059 /* lsa */, Mips::LSA_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5059 /* lsa */, Mips::LSA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_LSAImm }, },
  { 5063 /* lui */, Mips::LUi, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5063 /* lui */, Mips::LUi_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5067 /* luxc1 */, Mips::LUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5067 /* luxc1 */, Mips::LUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5073 /* lw */, Mips::LwRxPcTcpX16, Convert__Reg1_0__Imm1_1__imm_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5073 /* lw */, Mips::LW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5073 /* lw */, Mips::LW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5073 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 5073 /* lw */, Mips::LwRxPcTcp16, Convert__Reg1_0__Imm1_1__imm_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5076 /* lwc1 */, Mips::LWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 5081 /* lwc2 */, Mips::LWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5081 /* lwc2 */, Mips::LWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5086 /* lwc3 */, Mips::LWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5091 /* lwl */, Mips::LWL, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5091 /* lwl */, Mips::LWL_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5095 /* lwpc */, Mips::LWPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5100 /* lwr */, Mips::LWR, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5100 /* lwr */, Mips::LWR_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5104 /* lwu */, Mips::LWU_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5104 /* lwu */, Mips::LWu, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5108 /* lwupc */, Mips::LWUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5114 /* lwx */, Mips::LWX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5118 /* lwxc1 */, Mips::LWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5124 /* madd */, Mips::MADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5124 /* madd */, Mips::MADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5124 /* madd */, Mips::MADD_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5129 /* madd.d */, Mips::MADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5136 /* madd.s */, Mips::MADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5143 /* madd_q.h */, Mips::MADD_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5152 /* madd_q.w */, Mips::MADD_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5161 /* maddf.d */, Mips::MADDF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5169 /* maddf.s */, Mips::MADDF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5177 /* maddr_q.h */, Mips::MADDR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5187 /* maddr_q.w */, Mips::MADDR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5197 /* maddu */, Mips::MADDU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5197 /* maddu */, Mips::MADDU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5197 /* maddu */, Mips::MADDU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5203 /* maddv.b */, Mips::MADDV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5211 /* maddv.d */, Mips::MADDV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5219 /* maddv.h */, Mips::MADDV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5227 /* maddv.w */, Mips::MADDV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5235 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5247 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5259 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5272 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5285 /* max.d */, Mips::MAX_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5291 /* max.s */, Mips::MAX_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5297 /* max_a.b */, Mips::MAX_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5305 /* max_a.d */, Mips::MAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5313 /* max_a.h */, Mips::MAX_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5321 /* max_a.w */, Mips::MAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5329 /* max_s.b */, Mips::MAX_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5337 /* max_s.d */, Mips::MAX_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5345 /* max_s.h */, Mips::MAX_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5353 /* max_s.w */, Mips::MAX_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5361 /* max_u.b */, Mips::MAX_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5369 /* max_u.d */, Mips::MAX_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5377 /* max_u.h */, Mips::MAX_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5385 /* max_u.w */, Mips::MAX_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5393 /* maxa.d */, Mips::MAXA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5400 /* maxa.s */, Mips::MAXA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5407 /* maxi_s.b */, Mips::MAXI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5416 /* maxi_s.d */, Mips::MAXI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5425 /* maxi_s.h */, Mips::MAXI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5434 /* maxi_s.w */, Mips::MAXI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5443 /* maxi_u.b */, Mips::MAXI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5452 /* maxi_u.d */, Mips::MAXI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5461 /* maxi_u.h */, Mips::MAXI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5470 /* maxi_u.w */, Mips::MAXI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5479 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5479 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5484 /* mfc1 */, Mips::MFC1, Convert__GPR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 5489 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5489 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5494 /* mfhc1 */, Mips::MFHC1_D32, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5494 /* mfhc1 */, Mips::MFHC1_D64, Convert__GPR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 5500 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5500 /* mfhi */, Mips::MFHI, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5500 /* mfhi */, Mips::MFHI16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5500 /* mfhi */, Mips::MFHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5500 /* mfhi */, Mips::MFHI_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5505 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5505 /* mflo */, Mips::MFLO, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5505 /* mflo */, Mips::MFLO16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5505 /* mflo */, Mips::MFLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5505 /* mflo */, Mips::MFLO_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5510 /* min.d */, Mips::MIN_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5516 /* min.s */, Mips::MIN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5522 /* min_a.b */, Mips::MIN_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5530 /* min_a.d */, Mips::MIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5538 /* min_a.h */, Mips::MIN_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5546 /* min_a.w */, Mips::MIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5554 /* min_s.b */, Mips::MIN_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5562 /* min_s.d */, Mips::MIN_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5570 /* min_s.h */, Mips::MIN_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5578 /* min_s.w */, Mips::MIN_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5586 /* min_u.b */, Mips::MIN_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5594 /* min_u.d */, Mips::MIN_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5602 /* min_u.h */, Mips::MIN_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5610 /* min_u.w */, Mips::MIN_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5618 /* mina.d */, Mips::MINA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5625 /* mina.s */, Mips::MINA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5632 /* mini_s.b */, Mips::MINI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5641 /* mini_s.d */, Mips::MINI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5650 /* mini_s.h */, Mips::MINI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5659 /* mini_s.w */, Mips::MINI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5668 /* mini_u.b */, Mips::MINI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5677 /* mini_u.d */, Mips::MINI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5686 /* mini_u.h */, Mips::MINI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5695 /* mini_u.w */, Mips::MINI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5704 /* mod */, Mips::MOD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5708 /* mod_s.b */, Mips::MOD_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5716 /* mod_s.d */, Mips::MOD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5724 /* mod_s.h */, Mips::MOD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5732 /* mod_s.w */, Mips::MOD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5740 /* mod_u.b */, Mips::MOD_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5748 /* mod_u.d */, Mips::MOD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5756 /* mod_u.h */, Mips::MOD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5764 /* mod_u.w */, Mips::MOD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5772 /* modsub */, Mips::MODSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5779 /* modu */, Mips::MODU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5784 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5784 /* mov.d */, Mips::FMOV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5790 /* mov.s */, Mips::FMOV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5796 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPR }, },
  { 5796 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPR, MCK_CPU16Regs }, },
  { 5796 /* move */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5796 /* move */, Mips::MOVE16_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5796 /* move */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 5801 /* move.v */, Mips::MOVE_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5808 /* movf */, Mips::MOVF_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5808 /* movf */, Mips::MOVF_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5813 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 5813 /* movf.d */, Mips::MOVF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 5820 /* movf.s */, Mips::MOVF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 5827 /* movn */, Mips::MOVN_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5827 /* movn */, Mips::MOVN_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5832 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5832 /* movn.d */, Mips::MOVN_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5839 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 5846 /* movt */, Mips::MOVT_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5846 /* movt */, Mips::MOVT_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5851 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 5851 /* movt.d */, Mips::MOVT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 5858 /* movt.s */, Mips::MOVT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 5865 /* movz */, Mips::MOVZ_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5865 /* movz */, Mips::MOVZ_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5870 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5870 /* movz.d */, Mips::MOVZ_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5877 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 5884 /* msub */, Mips::MSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5884 /* msub */, Mips::MSUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5884 /* msub */, Mips::MSUB_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5889 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5896 /* msub.s */, Mips::MSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5903 /* msub_q.h */, Mips::MSUB_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5912 /* msub_q.w */, Mips::MSUB_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5921 /* msubf.d */, Mips::MSUBF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5929 /* msubf.s */, Mips::MSUBF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5937 /* msubr_q.h */, Mips::MSUBR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5947 /* msubr_q.w */, Mips::MSUBR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5957 /* msubu */, Mips::MSUBU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5957 /* msubu */, Mips::MSUBU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5957 /* msubu */, Mips::MSUBU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5963 /* msubv.b */, Mips::MSUBV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5971 /* msubv.d */, Mips::MSUBV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5979 /* msubv.h */, Mips::MSUBV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5987 /* msubv.w */, Mips::MSUBV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5995 /* mtc0 */, Mips::MTC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5995 /* mtc0 */, Mips::MTC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6000 /* mtc1 */, Mips::MTC1, Convert__FGR32AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 6005 /* mtc2 */, Mips::MTC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6005 /* mtc2 */, Mips::MTC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6010 /* mthc1 */, Mips::MTHC1_D32, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6010 /* mthc1 */, Mips::MTHC1_D64, Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 6016 /* mthi */, Mips::MTHI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6016 /* mthi */, Mips::MTHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6016 /* mthi */, Mips::MTHI_DSP, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6021 /* mthlip */, Mips::MTHLIP, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6028 /* mtlo */, Mips::MTLO, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6028 /* mtlo */, Mips::MTLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6028 /* mtlo */, Mips::MTLO_DSP, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6033 /* mtm0 */, Mips::MTM0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6038 /* mtm1 */, Mips::MTM1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6043 /* mtm2 */, Mips::MTM2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6048 /* mtp0 */, Mips::MTP0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6053 /* mtp1 */, Mips::MTP1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6058 /* mtp2 */, Mips::MTP2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6063 /* muh */, Mips::MUH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6067 /* muhu */, Mips::MUHU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6072 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6072 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6072 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6072 /* mul */, Mips::MUL_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6072 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6076 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6076 /* mul.d */, Mips::FMUL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6082 /* mul.ph */, Mips::MUL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6089 /* mul.s */, Mips::FMUL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6095 /* mul_q.h */, Mips::MUL_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6103 /* mul_q.w */, Mips::MUL_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6111 /* mul_s.ph */, Mips::MUL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6120 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6134 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6148 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6163 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6178 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6189 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6199 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6209 /* mulq_s.w */, Mips::MULQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6218 /* mulr_q.h */, Mips::MULR_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6227 /* mulr_q.w */, Mips::MULR_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6236 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6261 /* mult */, Mips::MULT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6261 /* mult */, Mips::MULT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6261 /* mult */, Mips::MULT_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6266 /* multu */, Mips::MULTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6266 /* multu */, Mips::MULTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6266 /* multu */, Mips::MULTU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6272 /* mulu */, Mips::MULU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6277 /* mulv.b */, Mips::MULV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6284 /* mulv.d */, Mips::MULV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6291 /* mulv.h */, Mips::MULV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6298 /* mulv.w */, Mips::MULV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6305 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6305 /* neg */, Mips::SUB, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6309 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6309 /* neg.d */, Mips::FNEG_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6315 /* neg.s */, Mips::FNEG_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6321 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 6321 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6326 /* nloc.b */, Mips::NLOC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6333 /* nloc.d */, Mips::NLOC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6340 /* nloc.h */, Mips::NLOC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6347 /* nloc.w */, Mips::NLOC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6354 /* nlzc.b */, Mips::NLZC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6361 /* nlzc.d */, Mips::NLZC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6368 /* nlzc.h */, Mips::NLZC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6375 /* nlzc.w */, Mips::NLZC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6382 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6390 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6398 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6406 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6414 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_0, 0, {  }, },
  { 6418 /* nor */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6418 /* nor */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6422 /* nor.v */, Mips::NOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6428 /* nori.b */, Mips::NORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6435 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6435 /* not */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6439 /* not16 */, Mips::NOT16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6445 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6445 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6445 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6445 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6445 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6445 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6445 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6448 /* or.v */, Mips::OR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6453 /* or16 */, Mips::OR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6458 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6458 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6458 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6458 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6462 /* ori.b */, Mips::ORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6468 /* packrl.ph */, Mips::PACKRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6478 /* pause */, Mips::PAUSE, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r2, {  }, },
  { 6484 /* pckev.b */, Mips::PCKEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6492 /* pckev.d */, Mips::PCKEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6500 /* pckev.h */, Mips::PCKEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6508 /* pckev.w */, Mips::PCKEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6516 /* pckod.b */, Mips::PCKOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6524 /* pckod.d */, Mips::PCKOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6532 /* pckod.h */, Mips::PCKOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6540 /* pckod.w */, Mips::PCKOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6548 /* pcnt.b */, Mips::PCNT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6555 /* pcnt.d */, Mips::PCNT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6562 /* pcnt.h */, Mips::PCNT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6569 /* pcnt.w */, Mips::PCNT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6576 /* pick.ph */, Mips::PICK_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6584 /* pick.qb */, Mips::PICK_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6592 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasCnMips, { MCK_GPR32AsmReg }, },
  { 6592 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6596 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6609 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6622 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6637 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6653 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6668 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6684 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6698 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6713 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6727 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6742 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6754 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6769 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6786 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6798 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6811 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6826 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6842 /* pref */, Mips::PREF, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm, MCK_Mem }, },
  { 6842 /* pref */, Mips::PREF_R6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm, MCK_Mem }, },
  { 6847 /* prepend */, Mips::PREPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6855 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6866 /* rddsp */, Mips::RDDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6872 /* rdhwr */, Mips::RDHWR, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 6878 /* repl.ph */, Mips::REPL_PH, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6886 /* repl.qb */, Mips::REPL_QB, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6894 /* replv.ph */, Mips::REPLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6903 /* replv.qb */, Mips::REPLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6912 /* rint.d */, Mips::RINT_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6919 /* rint.s */, Mips::RINT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6926 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6926 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6926 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6926 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6931 /* rotrv */, Mips::ROTRV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6931 /* rotrv */, Mips::ROTRV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6937 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6947 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 6957 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6957 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 6967 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6977 /* sat_s.b */, Mips::SAT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6985 /* sat_s.d */, Mips::SAT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6993 /* sat_s.h */, Mips::SAT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7001 /* sat_s.w */, Mips::SAT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7009 /* sat_u.b */, Mips::SAT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7017 /* sat_u.d */, Mips::SAT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7025 /* sat_u.h */, Mips::SAT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7033 /* sat_u.w */, Mips::SAT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7041 /* sb */, Mips::SB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7041 /* sb */, Mips::SB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7041 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7044 /* sc */, Mips::SC, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7044 /* sc */, Mips::SC_R6, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7044 /* sc */, Mips::SC_MM, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7047 /* scd */, Mips::SCD, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7047 /* scd */, Mips::SCD_R6, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7051 /* sd */, Mips::SD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7054 /* sdbbp */, Mips::SDBBP, Convert__imm_0, Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, {  }, },
  { 7054 /* sdbbp */, Mips::SDBBP_R6, Convert__imm_0, Feature_HasMips32r6, {  }, },
  { 7054 /* sdbbp */, Mips::SDBBP, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm }, },
  { 7054 /* sdbbp */, Mips::SDBBP_R6, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm }, },
  { 7060 /* sdc1 */, Mips::SDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 7060 /* sdc1 */, Mips::SDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 7065 /* sdc2 */, Mips::SDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 7065 /* sdc2 */, Mips::SDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_COP2AsmReg, MCK_Mem }, },
  { 7070 /* sdc3 */, Mips::SDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_COP3AsmReg, MCK_Mem }, },
  { 7075 /* sdl */, Mips::SDL, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7079 /* sdr */, Mips::SDR, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7083 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7083 /* sdxc1 */, Mips::SDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7089 /* seb */, Mips::SebRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7089 /* seb */, Mips::SEB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7089 /* seb */, Mips::SEB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7093 /* seh */, Mips::SehRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7093 /* seh */, Mips::SEH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7093 /* seh */, Mips::SEH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7097 /* sel.d */, Mips::SEL_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7103 /* sel.s */, Mips::SEL_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7109 /* seleqz */, Mips::SELEQZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7109 /* seleqz */, Mips::SELEQZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7116 /* seleqz.d */, Mips::SELEQZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7125 /* seleqz.s */, Mips::SELEQZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7134 /* selnez */, Mips::SELNEZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7134 /* selnez */, Mips::SELNEZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7141 /* selnez.d */, Mips::SELNEZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7150 /* selnez.s */, Mips::SELNEZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7159 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7159 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7163 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7163 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7168 /* sh */, Mips::SH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7168 /* sh */, Mips::SH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7168 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7171 /* shf.b */, Mips::SHF_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7177 /* shf.h */, Mips::SHF_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7183 /* shf.w */, Mips::SHF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7189 /* shilo */, Mips::SHILO, Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 7195 /* shilov */, Mips::SHILOV, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7202 /* shll.ph */, Mips::SHLL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7210 /* shll.qb */, Mips::SHLL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7218 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7228 /* shll_s.w */, Mips::SHLL_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7237 /* shllv.ph */, Mips::SHLLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7246 /* shllv.qb */, Mips::SHLLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7255 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7266 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7276 /* shra.ph */, Mips::SHRA_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7284 /* shra.qb */, Mips::SHRA_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7292 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7302 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7312 /* shra_r.w */, Mips::SHRA_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7321 /* shrav.ph */, Mips::SHRAV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7330 /* shrav.qb */, Mips::SHRAV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7339 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7350 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7361 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7371 /* shrl.ph */, Mips::SHRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7379 /* shrl.qb */, Mips::SHRL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7387 /* shrlv.ph */, Mips::SHRLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7396 /* shrlv.qb */, Mips::SHRLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7405 /* sld.b */, Mips::SLD_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7411 /* sld.d */, Mips::SLD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7417 /* sld.h */, Mips::SLD_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7423 /* sld.w */, Mips::SLD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7429 /* sldi.b */, Mips::SLDI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7436 /* sldi.d */, Mips::SLDI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7443 /* sldi.h */, Mips::SLDI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7450 /* sldi.w */, Mips::SLDI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7457 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7457 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7457 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7457 /* sll */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7457 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7457 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7461 /* sll.b */, Mips::SLL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7467 /* sll.d */, Mips::SLL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7473 /* sll.h */, Mips::SLL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7479 /* sll.w */, Mips::SLL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7485 /* sll16 */, Mips::SLL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7491 /* slli.b */, Mips::SLLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7498 /* slli.d */, Mips::SLLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7505 /* slli.h */, Mips::SLLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7512 /* slli.w */, Mips::SLLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7519 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7519 /* sllv */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7519 /* sllv */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7524 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7524 /* slt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7524 /* slt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7524 /* slt */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7528 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7528 /* slti */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7528 /* slti */, Mips::SLTi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7528 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7533 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7533 /* sltiu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7533 /* sltiu */, Mips::SLTiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7533 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7539 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7539 /* sltu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7539 /* sltu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7539 /* sltu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7544 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7544 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7548 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7548 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7553 /* splat.b */, Mips::SPLAT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7561 /* splat.d */, Mips::SPLAT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7569 /* splat.h */, Mips::SPLAT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7577 /* splat.w */, Mips::SPLAT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7585 /* splati.b */, Mips::SPLATI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7594 /* splati.d */, Mips::SPLATI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7603 /* splati.h */, Mips::SPLATI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7612 /* splati.w */, Mips::SPLATI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7621 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 7621 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7628 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7635 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7635 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7635 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7635 /* sra */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7635 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7635 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7639 /* sra.b */, Mips::SRA_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7645 /* sra.d */, Mips::SRA_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7651 /* sra.h */, Mips::SRA_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7657 /* sra.w */, Mips::SRA_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7663 /* srai.b */, Mips::SRAI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7670 /* srai.d */, Mips::SRAI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7677 /* srai.h */, Mips::SRAI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7684 /* srai.w */, Mips::SRAI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7691 /* srar.b */, Mips::SRAR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7698 /* srar.d */, Mips::SRAR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7705 /* srar.h */, Mips::SRAR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7712 /* srar.w */, Mips::SRAR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7719 /* srari.b */, Mips::SRARI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7727 /* srari.d */, Mips::SRARI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7735 /* srari.h */, Mips::SRARI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7743 /* srari.w */, Mips::SRARI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7751 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7751 /* srav */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7751 /* srav */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7756 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7756 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7756 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7756 /* srl */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7756 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7756 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7760 /* srl.b */, Mips::SRL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7766 /* srl.d */, Mips::SRL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7772 /* srl.h */, Mips::SRL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7778 /* srl.w */, Mips::SRL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7784 /* srl16 */, Mips::SRL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7790 /* srli.b */, Mips::SRLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7797 /* srli.d */, Mips::SRLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7804 /* srli.h */, Mips::SRLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7811 /* srli.w */, Mips::SRLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7818 /* srlr.b */, Mips::SRLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7825 /* srlr.d */, Mips::SRLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7832 /* srlr.h */, Mips::SRLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7839 /* srlr.w */, Mips::SRLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7846 /* srlri.b */, Mips::SRLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7854 /* srlri.d */, Mips::SRLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7862 /* srlri.h */, Mips::SRLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7870 /* srlri.w */, Mips::SRLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7878 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7878 /* srlv */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7878 /* srlv */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7883 /* ssnop */, Mips::SSNOP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 7889 /* st.b */, Mips::ST_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 7894 /* st.d */, Mips::ST_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 7899 /* st.h */, Mips::ST_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 7904 /* st.w */, Mips::ST_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 7909 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7909 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7909 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 7909 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7909 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7909 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 7913 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 7913 /* sub.d */, Mips::FSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7919 /* sub.s */, Mips::FSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7925 /* subq.ph */, Mips::SUBQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7933 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7943 /* subq_s.w */, Mips::SUBQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7952 /* subqh.ph */, Mips::SUBQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7961 /* subqh.w */, Mips::SUBQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7969 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7980 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7990 /* subs_s.b */, Mips::SUBS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7999 /* subs_s.d */, Mips::SUBS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8008 /* subs_s.h */, Mips::SUBS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8017 /* subs_s.w */, Mips::SUBS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8026 /* subs_u.b */, Mips::SUBS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8035 /* subs_u.d */, Mips::SUBS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8044 /* subs_u.h */, Mips::SUBS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8053 /* subs_u.w */, Mips::SUBS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8062 /* subsus_u.b */, Mips::SUBSUS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8073 /* subsus_u.d */, Mips::SUBSUS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8084 /* subsus_u.h */, Mips::SUBSUS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8095 /* subsus_u.w */, Mips::SUBSUS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8106 /* subsuu_s.b */, Mips::SUBSUU_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8117 /* subsuu_s.d */, Mips::SUBSUU_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8128 /* subsuu_s.h */, Mips::SUBSUU_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8139 /* subsuu_s.w */, Mips::SUBSUU_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8150 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8150 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8150 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, 0, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8150 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8150 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8150 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8150 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8155 /* subu.ph */, Mips::SUBU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8163 /* subu.qb */, Mips::SUBU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8171 /* subu16 */, Mips::SUBU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8178 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8188 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8198 /* subuh.qb */, Mips::SUBUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8207 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8218 /* subv.b */, Mips::SUBV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8225 /* subv.d */, Mips::SUBV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8232 /* subv.h */, Mips::SUBV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8239 /* subv.w */, Mips::SUBV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8246 /* subvi.b */, Mips::SUBVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8254 /* subvi.d */, Mips::SUBVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8262 /* subvi.h */, Mips::SUBVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8270 /* subvi.w */, Mips::SUBVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8278 /* suxc1 */, Mips::SUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8278 /* suxc1 */, Mips::SUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8284 /* sw */, Mips::SW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8284 /* sw */, Mips::SW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8284 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 8284 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 8287 /* swc1 */, Mips::SWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 8292 /* swc2 */, Mips::SWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 8292 /* swc2 */, Mips::SWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_COP2AsmReg, MCK_Mem }, },
  { 8297 /* swc3 */, Mips::SWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_COP3AsmReg, MCK_Mem }, },
  { 8302 /* swl */, Mips::SWL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8302 /* swl */, Mips::SWL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8306 /* swr */, Mips::SWR, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8306 /* swr */, Mips::SWR_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8310 /* swxc1 */, Mips::SWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8316 /* sync */, Mips::SYNC, Convert__imm_0, Feature_HasMips2, {  }, },
  { 8316 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32, { MCK_Imm }, },
  { 8316 /* sync */, Mips::SYNC_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8321 /* synciobdma */, Mips::SYNC, Convert__imm_2, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8332 /* syncs */, Mips::SYNC, Convert__imm_6, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8338 /* syncw */, Mips::SYNC, Convert__imm_4, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8344 /* syncws */, Mips::SYNC, Convert__imm_5, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8351 /* syscall */, Mips::SYSCALL, Convert__imm_0, 0, {  }, },
  { 8351 /* syscall */, Mips::SYSCALL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 8351 /* syscall */, Mips::SYSCALL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8359 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8359 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8359 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8363 /* teqi */, Mips::TEQI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8363 /* teqi */, Mips::TEQI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8368 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8368 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8368 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8372 /* tgei */, Mips::TGEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8372 /* tgei */, Mips::TGEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8377 /* tgeiu */, Mips::TGEIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8377 /* tgeiu */, Mips::TGEIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8383 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8383 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8383 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8388 /* tlbp */, Mips::TLBP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8388 /* tlbp */, Mips::TLBP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8393 /* tlbr */, Mips::TLBR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8393 /* tlbr */, Mips::TLBR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8398 /* tlbwi */, Mips::TLBWI, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8398 /* tlbwi */, Mips::TLBWI_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8404 /* tlbwr */, Mips::TLBWR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8404 /* tlbwr */, Mips::TLBWR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8410 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8410 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8410 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8414 /* tlti */, Mips::TLTI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8414 /* tlti */, Mips::TLTI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8419 /* tltiu */, Mips::TTLTIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8419 /* tltiu */, Mips::TLTIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8425 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8425 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8425 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8430 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8430 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8430 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8434 /* tnei */, Mips::TNEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8434 /* tnei */, Mips::TNEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8439 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8449 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 8459 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 8459 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 8469 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8479 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8479 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8486 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8486 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8491 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8491 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8497 /* vshf.b */, Mips::VSHF_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8504 /* vshf.d */, Mips::VSHF_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8511 /* vshf.h */, Mips::VSHF_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8518 /* vshf.w */, Mips::VSHF_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8525 /* wait */, Mips::WAIT, Convert_NoOperands, Feature_NotInMicroMips, {  }, },
  { 8525 /* wait */, Mips::WAIT_MM, Convert__imm_0, Feature_InMicroMips, {  }, },
  { 8525 /* wait */, Mips::WAIT_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8530 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8536 /* wsbh */, Mips::WSBH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8536 /* wsbh */, Mips::WSBH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8541 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8541 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8541 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8541 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8541 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8541 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8545 /* xor.v */, Mips::XOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8551 /* xor16 */, Mips::XOR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8557 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8557 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8557 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8557 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8562 /* xori.b */, Mips::XORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: // unreachable
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
uint64_t &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 9) {
    ErrorInfo = 9;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: // unreachable
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 8; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (CountPopulation_64(NewMissingFeatures) <=
          CountPopulation_64(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[1712] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_HasStdEnc|Feature_NotFP64bit, 0 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 0 /* abs.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 12 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 22 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 32 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 45 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 45 /* add.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 51 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 57 /* add_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 65 /* add_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 73 /* add_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 81 /* add_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 108 /* addiur1sp */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 118 /* addiur2 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 126 /* addius5 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 142 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 150 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 160 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 169 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 178 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 186 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 197 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 207 /* adds_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 216 /* adds_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 225 /* adds_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 234 /* adds_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 243 /* adds_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 252 /* adds_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 261 /* adds_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 270 /* adds_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 279 /* adds_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 288 /* adds_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 297 /* adds_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 306 /* adds_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 315 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 326 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 334 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 342 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 349 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 359 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 369 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 378 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 389 /* addv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 396 /* addv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 403 /* addv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 410 /* addv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 417 /* addvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 425 /* addvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 433 /* addvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 441 /* addvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 449 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 455 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 461 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 472 /* and.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 478 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 489 /* andi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 496 /* append */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 503 /* asub_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 512 /* asub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 521 /* asub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 530 /* asub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 539 /* asub_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 548 /* asub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 557 /* asub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 566 /* asub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 575 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 579 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 585 /* ave_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 593 /* ave_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 601 /* ave_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 609 /* ave_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 617 /* ave_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 625 /* ave_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 633 /* ave_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 641 /* ave_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 649 /* aver_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 658 /* aver_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 667 /* aver_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 676 /* aver_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 685 /* aver_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 694 /* aver_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 703 /* aver_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 712 /* aver_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMips16Mode, 721 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 721 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 721 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasCnMips, 723 /* baddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 723 /* baddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 729 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 729 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 733 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSPR2, 738 /* balign */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 745 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 748 /* bc1eqz */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 748 /* bc1eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 755 /* bc1f */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 755 /* bc1f */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 755 /* bc1f */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 760 /* bc1fl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 760 /* bc1fl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 760 /* bc1fl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 766 /* bc1nez */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 766 /* bc1nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 773 /* bc1t */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 773 /* bc1t */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 773 /* bc1t */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 778 /* bc1tl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 778 /* bc1tl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 778 /* bc1tl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 784 /* bc2eqz */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 784 /* bc2eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 791 /* bc2nez */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 791 /* bc2nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 798 /* bclr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 805 /* bclr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 812 /* bclr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 819 /* bclr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 826 /* bclri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 834 /* bclri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 842 /* bclri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 850 /* bclri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 858 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 858 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 858 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 862 /* beqc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 862 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 867 /* beql */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 867 /* beql */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 872 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 872 /* beqz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 872 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 872 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 877 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 877 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 885 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 885 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 885 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 891 /* bgec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 891 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 896 /* bgeuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 896 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 902 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 902 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 902 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 907 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 907 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 907 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 914 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 914 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 922 /* bgezall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 922 /* bgezall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 930 /* bgezals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 938 /* bgezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 938 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 944 /* bgezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 944 /* bgezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 950 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 950 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 950 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 955 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 955 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 963 /* bgtzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 963 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 969 /* bgtzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 969 /* bgtzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 975 /* binsl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 983 /* binsl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 991 /* binsl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 999 /* binsl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1007 /* binsli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1016 /* binsli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1025 /* binsli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1034 /* binsli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1043 /* binsr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1051 /* binsr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1059 /* binsr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1067 /* binsr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1075 /* binsri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1084 /* binsri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1093 /* binsri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1102 /* binsri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1111 /* bitrev */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1118 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1126 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1126 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1126 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1131 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1131 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1139 /* blezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1139 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1145 /* blezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1145 /* blezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1151 /* bltc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1151 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1156 /* bltuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1156 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 1162 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1162 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1162 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1167 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1167 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1167 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1174 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1174 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1182 /* bltzall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1182 /* bltzall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1190 /* bltzals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1198 /* bltzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1198 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1204 /* bltzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1204 /* bltzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1210 /* bmnz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1217 /* bmnzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1225 /* bmz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1231 /* bmzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1238 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1238 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1238 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1242 /* bnec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1242 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMSA, 1247 /* bneg.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1254 /* bneg.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1261 /* bneg.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1268 /* bneg.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1275 /* bnegi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1283 /* bnegi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1291 /* bnegi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1299 /* bnegi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1307 /* bnel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1307 /* bnel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 1312 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1312 /* bnez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1312 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 1312 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1317 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1317 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1325 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1325 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1325 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1331 /* bnvc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1331 /* bnvc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMSA, 1336 /* bnz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1336 /* bnz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1342 /* bnz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1342 /* bnz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1348 /* bnz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1348 /* bnz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1354 /* bnz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1354 /* bnz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1360 /* bnz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1360 /* bnz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1366 /* bovc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1366 /* bovc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasDSP, 1371 /* bposge32 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasMSA, 1386 /* bsel.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1393 /* bseli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1401 /* bset.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1408 /* bset.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1415 /* bset.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1422 /* bset.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1429 /* bseti.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1437 /* bseti.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1445 /* bseti.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1453 /* bseti.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1473 /* bz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1473 /* bz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1478 /* bz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1478 /* bz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1483 /* bz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1483 /* bz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1488 /* bz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1488 /* bz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1493 /* bz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1493 /* bz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1498 /* c.eq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1498 /* c.eq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1505 /* c.eq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1512 /* c.f.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1512 /* c.f.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1518 /* c.f.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1524 /* c.le.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1524 /* c.le.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1531 /* c.le.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1538 /* c.lt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1538 /* c.lt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1545 /* c.lt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1552 /* c.nge.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1552 /* c.nge.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1560 /* c.nge.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1568 /* c.ngl.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1568 /* c.ngl.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1576 /* c.ngl.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1584 /* c.ngle.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1584 /* c.ngle.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1593 /* c.ngle.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1602 /* c.ngt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1602 /* c.ngt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1610 /* c.ngt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1618 /* c.ole.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1618 /* c.ole.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1626 /* c.ole.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1634 /* c.olt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1634 /* c.olt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1642 /* c.olt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1650 /* c.seq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1650 /* c.seq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1658 /* c.seq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1666 /* c.sf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1666 /* c.sf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1673 /* c.sf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1680 /* c.ueq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1680 /* c.ueq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1688 /* c.ueq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1696 /* c.ule.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1696 /* c.ule.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1704 /* c.ule.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1712 /* c.ult.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1712 /* c.ult.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1720 /* c.ult.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1728 /* c.un.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1728 /* c.un.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1735 /* c.un.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 1742 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1742 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 1748 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 1757 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 1757 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 1766 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 1766 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 1766 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 1766 /* ceil.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 1775 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1784 /* ceq.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1790 /* ceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1796 /* ceq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1802 /* ceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1808 /* ceqi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1815 /* ceqi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1822 /* ceqi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1829 /* ceqi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1836 /* cfc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 1836 /* cfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1841 /* cfcmsa */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1841 /* cfcmsa */, MCK_MSACtrlAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 1848 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 1848 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 1853 /* cins32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 1853 /* cins32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1860 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1868 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1876 /* cle_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1884 /* cle_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1892 /* cle_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1900 /* cle_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1908 /* cle_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1916 /* cle_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1924 /* cle_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1932 /* cle_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1940 /* clei_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1949 /* clei_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1958 /* clei_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1967 /* clei_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1976 /* clei_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1985 /* clei_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1994 /* clei_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2003 /* clei_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2012 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2012 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2012 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2016 /* clt_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2024 /* clt_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2032 /* clt_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2040 /* clt_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2048 /* clt_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2056 /* clt_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2064 /* clt_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2072 /* clt_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2080 /* clti_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2089 /* clti_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2098 /* clti_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2107 /* clti_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2116 /* clti_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2125 /* clti_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2134 /* clti_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2143 /* clti_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2152 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2152 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2152 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2160 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2160 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2169 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2178 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2178 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2187 /* cmp.eq.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2197 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2206 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2206 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2215 /* cmp.le.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2225 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2234 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2234 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2243 /* cmp.lt.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2253 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2262 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2262 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2272 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2282 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2282 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2292 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2302 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2302 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2312 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2322 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2322 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2332 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2342 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2342 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2353 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2364 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2364 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2375 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2386 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2386 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2397 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2408 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2408 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2418 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2428 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2428 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2438 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2448 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2448 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2458 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2468 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2468 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2478 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2488 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2488 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2497 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2506 /* cmpgdu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2519 /* cmpgdu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2532 /* cmpgdu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2545 /* cmpgu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2557 /* cmpgu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2569 /* cmpgu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2586 /* cmpu.eq.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2597 /* cmpu.le.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2608 /* cmpu.lt.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2619 /* copy_s.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2619 /* copy_s.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 2628 /* copy_s.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 2628 /* copy_s.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2637 /* copy_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2637 /* copy_s.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2646 /* copy_s.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2646 /* copy_s.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2655 /* copy_u.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2655 /* copy_u.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 2664 /* copy_u.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 2664 /* copy_u.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2673 /* copy_u.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2673 /* copy_u.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2682 /* copy_u.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2682 /* copy_u.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2691 /* ctc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2691 /* ctc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2696 /* ctcmsa */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2696 /* ctcmsa */, MCK_MSACtrlAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2703 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2711 /* cvt.d.s */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2711 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2711 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2711 /* cvt.d.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2719 /* cvt.d.w */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2719 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2719 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2719 /* cvt.d.w */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2, 2727 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2, 2735 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2, 2735 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2743 /* cvt.s.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2743 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2743 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2743 /* cvt.s.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2751 /* cvt.s.l */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2751 /* cvt.s.l */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2759 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2767 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2767 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2767 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2767 /* cvt.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2775 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2783 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2783 /* dadd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2783 /* dadd */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2783 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2788 /* daddi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2788 /* daddi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2794 /* daddiu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2794 /* daddiu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2801 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 2801 /* daddu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2801 /* daddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 2801 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2807 /* dahi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2812 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2819 /* dati */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2824 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2829 /* dbitswap */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 2838 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2838 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 2843 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2843 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2848 /* ddiv */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2848 /* ddiv */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2853 /* ddivu */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2853 /* ddivu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2865 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2870 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2876 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2882 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 2882 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2885 /* dins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2890 /* dinsm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2896 /* dinsu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 2902 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 2902 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2902 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2906 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2906 /* div.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2912 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2918 /* div_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2926 /* div_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2934 /* div_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2942 /* div_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2950 /* div_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2958 /* div_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2966 /* div_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2974 /* div_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 2982 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 2982 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2982 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 2987 /* dli */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2991 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA|Feature_HasMips64, 2991 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA|Feature_HasMips64, 2991 /* dlsa */, MCK_LSAImm, 8 /* 3 */ },
  { 0, 2996 /* dmfc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 2996 /* dmfc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3002 /* dmfc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3002 /* dmfc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3008 /* dmfc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3008 /* dmfc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3014 /* dmod */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3019 /* dmodu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3025 /* dmtc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3025 /* dmtc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3031 /* dmtc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3031 /* dmtc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3037 /* dmtc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3037 /* dmtc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3043 /* dmuh */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3048 /* dmuhu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3054 /* dmul */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3054 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3054 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3059 /* dmult */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3065 /* dmultu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3072 /* dmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3078 /* dotp_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3087 /* dotp_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3096 /* dotp_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3105 /* dotp_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3114 /* dotp_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3123 /* dotp_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 3132 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3132 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 3141 /* dpadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3151 /* dpadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3161 /* dpadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3171 /* dpadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3181 /* dpadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3191 /* dpadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 3201 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3201 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3213 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3213 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3225 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3225 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3238 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3238 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3252 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3252 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3263 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3263 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3274 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3274 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasCnMips, 3284 /* dpop */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3284 /* dpop */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 3289 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3289 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3298 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3298 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3310 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3310 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3322 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3322 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3335 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3335 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3349 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3349 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3360 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3360 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 3371 /* dpsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3381 /* dpsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3391 /* dpsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3401 /* dpsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3411 /* dpsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3421 /* dpsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 3431 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3431 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3441 /* drotr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3441 /* drotr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3447 /* drotr32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3447 /* drotr32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3455 /* drotrv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3455 /* drotrv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3462 /* dsbh */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3467 /* dshd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3472 /* dsll */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3472 /* dsll */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3472 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3472 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3477 /* dsll32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3477 /* dsll32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3484 /* dsllv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3484 /* dsllv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3490 /* dsra */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3490 /* dsra */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3490 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3490 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3495 /* dsra32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3495 /* dsra32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3502 /* dsrav */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3502 /* dsrav */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3508 /* dsrl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3508 /* dsrl */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3508 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3508 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3513 /* dsrl32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3513 /* dsrl32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3520 /* dsrlv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3520 /* dsrlv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3526 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3526 /* dsub */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3526 /* dsub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3526 /* dsub */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3526 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3526 /* dsub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3531 /* dsubi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3531 /* dsubi */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3531 /* dsubi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3531 /* dsubi */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3537 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3537 /* dsubu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3537 /* dsubu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3537 /* dsubu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 3537 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3537 /* dsubu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3547 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3547 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3555 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 3555 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 3559 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3559 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3564 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3564 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3571 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3571 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3579 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3579 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3585 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3585 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3592 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3592 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3601 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3601 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3611 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3611 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3620 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3620 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3628 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3628 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3638 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3638 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3649 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3649 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasCnMips, 3659 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3659 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3664 /* exts32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3664 /* exts32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3671 /* fadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3678 /* fadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3685 /* fcaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3692 /* fcaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3699 /* fceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3706 /* fceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3713 /* fclass.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3722 /* fclass.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3731 /* fcle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3738 /* fcle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3745 /* fclt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3752 /* fclt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3759 /* fcne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3766 /* fcne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3773 /* fcor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3780 /* fcor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3787 /* fcueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3795 /* fcueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3803 /* fcule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3811 /* fcule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3819 /* fcult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3827 /* fcult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3835 /* fcun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3842 /* fcun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3849 /* fcune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3857 /* fcune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3865 /* fdiv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3872 /* fdiv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3879 /* fexdo.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3887 /* fexdo.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3895 /* fexp2.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3903 /* fexp2.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3911 /* fexupl.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3920 /* fexupl.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3929 /* fexupr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3938 /* fexupr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3947 /* ffint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3957 /* ffint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3967 /* ffint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3977 /* ffint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3987 /* ffql.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3994 /* ffql.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4001 /* ffqr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4008 /* ffqr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4015 /* fill.b */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4015 /* fill.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 4022 /* fill.d */, MCK_GPR64AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 4022 /* fill.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4029 /* fill.h */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4029 /* fill.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4036 /* fill.w */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4036 /* fill.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4043 /* flog2.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4051 /* flog2.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 4059 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 4069 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 4069 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 4079 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 4079 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 4079 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 4079 /* floor.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 4089 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4099 /* fmadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4107 /* fmadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4115 /* fmax.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4122 /* fmax.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4129 /* fmax_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4138 /* fmax_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4147 /* fmin.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4154 /* fmin.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4161 /* fmin_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4170 /* fmin_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4179 /* fmsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4187 /* fmsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4195 /* fmul.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4202 /* fmul.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4209 /* frcp.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4216 /* frcp.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4223 /* frint.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4231 /* frint.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4239 /* frsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4248 /* frsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4257 /* fsaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4264 /* fsaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4271 /* fseq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4278 /* fseq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4285 /* fsle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4292 /* fsle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4299 /* fslt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4306 /* fslt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4313 /* fsne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4320 /* fsne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4327 /* fsor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4334 /* fsor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4341 /* fsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4349 /* fsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4357 /* fsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4364 /* fsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4371 /* fsueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4379 /* fsueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4387 /* fsule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4395 /* fsule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4403 /* fsult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4411 /* fsult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4419 /* fsun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4426 /* fsun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4433 /* fsune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4441 /* fsune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4449 /* ftint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4459 /* ftint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4469 /* ftint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4479 /* ftint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4489 /* ftq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4495 /* ftq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4501 /* ftrunc_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4512 /* ftrunc_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4523 /* ftrunc_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4534 /* ftrunc_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4545 /* hadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4554 /* hadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4563 /* hadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4572 /* hadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4581 /* hadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4590 /* hadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4599 /* hsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4608 /* hsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4617 /* hsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4626 /* hsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4635 /* hsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4644 /* hsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4653 /* ilvev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4661 /* ilvev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4669 /* ilvev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4677 /* ilvev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4685 /* ilvl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4692 /* ilvl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4699 /* ilvl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4706 /* ilvl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4713 /* ilvod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4721 /* ilvod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4729 /* ilvod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4737 /* ilvod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4745 /* ilvr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4752 /* ilvr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4759 /* ilvr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4766 /* ilvr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 4773 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4773 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4777 /* insert.b */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4777 /* insert.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 4786 /* insert.d */, MCK_GPR64AsmReg, 16 /* 4 */ },
  { Feature_HasMSA|Feature_HasMips64, 4786 /* insert.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4795 /* insert.h */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4795 /* insert.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4804 /* insert.w */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4804 /* insert.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 4813 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4818 /* insve.b */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4826 /* insve.d */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4834 /* insve.h */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4842 /* insve.w */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { 0, 4850 /* j */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_RelocStatic, 4850 /* j */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 4852 /* jal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4852 /* jal */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 4852 /* jal */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4856 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 4856 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 4856 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4856 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips32, 4861 /* jalr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 4861 /* jalr.hb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4875 /* jalrs */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4881 /* jalrs16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 4894 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4899 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4899 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4905 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4905 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc, 4909 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4909 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips32r6, 4909 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 4909 /* jr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 4912 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4912 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4918 /* jr16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4933 /* jrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 4937 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 4937 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 4937 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 4940 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4940 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 4940 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4940 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 4943 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4943 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 4943 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4943 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP, 4947 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 4952 /* ld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 4952 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 4955 /* ld.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4955 /* ld.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 4960 /* ld.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4960 /* ld.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 4965 /* ld.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4965 /* ld.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 4970 /* ld.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4970 /* ld.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 4975 /* ldc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 4975 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 4975 /* ldc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 4975 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4980 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4980 /* ldc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 4980 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 4980 /* ldc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 4985 /* ldc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 4985 /* ldc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 4990 /* ldi.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4996 /* ldi.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5002 /* ldi.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5008 /* ldi.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5014 /* ldl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5014 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5018 /* ldpc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5018 /* ldpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5023 /* ldr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5023 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5027 /* ldxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5027 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5027 /* ldxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5027 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 5033 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5033 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5033 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5033 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5036 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5036 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5036 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5036 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP, 5040 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { 0, 5044 /* li */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5047 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5052 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5052 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5052 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5052 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5052 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5052 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5055 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5055 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5055 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5055 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5059 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5059 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5059 /* lsa */, MCK_LSAImm, 8 /* 3 */ },
  { Feature_HasStdEnc, 5063 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5063 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5067 /* luxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5067 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5067 /* luxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5067 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 5073 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5073 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5073 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5073 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5076 /* lwc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5076 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5081 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5081 /* lwc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 5081 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 5081 /* lwc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5086 /* lwc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5086 /* lwc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5091 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5091 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5091 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5091 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5095 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5095 /* lwpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5100 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5100 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5100 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5100 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5104 /* lwu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5104 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5104 /* lwu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5104 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5108 /* lwupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5108 /* lwupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasDSP, 5114 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5118 /* lwxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5118 /* lwxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5124 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5124 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5124 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5124 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5129 /* madd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5136 /* madd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMSA, 5143 /* madd_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5152 /* madd_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5161 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5169 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5177 /* maddr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5187 /* maddr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5197 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5197 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5197 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5197 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 5203 /* maddv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5211 /* maddv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5219 /* maddv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5227 /* maddv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 5235 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5235 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5247 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5247 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5259 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5259 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5272 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5272 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5285 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5291 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5297 /* max_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5305 /* max_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5313 /* max_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5321 /* max_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5329 /* max_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5337 /* max_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5345 /* max_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5353 /* max_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5361 /* max_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5369 /* max_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5377 /* max_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5385 /* max_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5393 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5400 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5407 /* maxi_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5416 /* maxi_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5425 /* maxi_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5434 /* maxi_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5443 /* maxi_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5452 /* maxi_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5461 /* maxi_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5470 /* maxi_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 5479 /* mfc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5479 /* mfc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5484 /* mfc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 5484 /* mfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5489 /* mfc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5489 /* mfc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 5494 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 5494 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 5494 /* mfhc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 5494 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5500 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5500 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5500 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5500 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5500 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5505 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5505 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5505 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5505 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5505 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5510 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5516 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5522 /* min_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5530 /* min_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5538 /* min_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5546 /* min_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5554 /* min_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5562 /* min_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5570 /* min_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5578 /* min_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5586 /* min_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5594 /* min_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5602 /* min_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5610 /* min_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5618 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5625 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5632 /* mini_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5641 /* mini_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5650 /* mini_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5659 /* mini_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5668 /* mini_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5677 /* mini_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5686 /* mini_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5695 /* mini_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5704 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5708 /* mod_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5716 /* mod_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5724 /* mod_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5732 /* mod_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5740 /* mod_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5748 /* mod_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5756 /* mod_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5764 /* mod_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 5772 /* modsub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5779 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 5784 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 5784 /* mov.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5790 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 5796 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5796 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit, 5796 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5801 /* move.v */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5808 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5808 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5808 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 5808 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5813 /* movf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5813 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5813 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5813 /* movf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5820 /* movf.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5820 /* movf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5827 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 5827 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5832 /* movn.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5832 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5832 /* movn.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5832 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5839 /* movn.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5839 /* movn.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5846 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5846 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5846 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 5846 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5851 /* movt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5851 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5851 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5851 /* movt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5858 /* movt.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5858 /* movt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5865 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 5865 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5870 /* movz.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5870 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5870 /* movz.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5870 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5877 /* movz.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5877 /* movz.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5884 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5884 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5884 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5884 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5889 /* msub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5896 /* msub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMSA, 5903 /* msub_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5912 /* msub_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5921 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5929 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5937 /* msubr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5947 /* msubr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5957 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5957 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5957 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5957 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 5963 /* msubv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5971 /* msubv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5979 /* msubv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5987 /* msubv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 5995 /* mtc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5995 /* mtc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6000 /* mtc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 6000 /* mtc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6005 /* mtc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6005 /* mtc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 6010 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 6010 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 6010 /* mthc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 6010 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6016 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6016 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6016 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6016 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6021 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6021 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6028 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6028 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6028 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6028 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 6033 /* mtm0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6038 /* mtm1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6043 /* mtm2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6048 /* mtp0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6053 /* mtp1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6058 /* mtp2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6063 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6067 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6072 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6072 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6072 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6072 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6072 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 6076 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6076 /* mul.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6082 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 6089 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6095 /* mul_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6103 /* mul_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6111 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6120 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6134 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6148 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6163 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6178 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6189 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6199 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6209 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6218 /* mulr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6227 /* mulr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6236 /* mulsa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 6236 /* mulsa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6247 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6247 /* mulsaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6261 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6261 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6261 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6261 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6266 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6266 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6266 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6266 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6272 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6277 /* mulv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6284 /* mulv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6291 /* mulv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6298 /* mulv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6305 /* neg */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 6309 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6309 /* neg.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6315 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6321 /* negu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6321 /* negu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6326 /* nloc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6333 /* nloc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6340 /* nloc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6347 /* nloc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6354 /* nlzc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6361 /* nlzc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6368 /* nlzc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6375 /* nlzc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6382 /* nmadd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6390 /* nmadd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6398 /* nmsub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6406 /* nmsub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 6418 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6418 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6422 /* nor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6428 /* nori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 6435 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6439 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6445 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6445 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6445 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6445 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6445 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6445 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6448 /* or.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6453 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6458 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6458 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6458 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6458 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6462 /* ori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6468 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6484 /* pckev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6492 /* pckev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6500 /* pckev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6508 /* pckev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6516 /* pckod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6524 /* pckod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6532 /* pckod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6540 /* pckod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6548 /* pcnt.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6555 /* pcnt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6562 /* pcnt.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6569 /* pcnt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6576 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6584 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 6592 /* pop */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6592 /* pop */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6596 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6609 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6622 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6637 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6653 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6668 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6684 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6698 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6713 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6727 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 6742 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6754 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 6769 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6786 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6798 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6811 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6826 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 6842 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6842 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSPR2, 6847 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6855 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6866 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6872 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6872 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6878 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6886 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6894 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6903 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6912 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6919 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 6926 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6926 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 6926 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6926 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 6931 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6931 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6937 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6947 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6947 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 6957 /* round.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 6957 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 6957 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 6957 /* round.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 6967 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6977 /* sat_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6985 /* sat_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6993 /* sat_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7001 /* sat_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7009 /* sat_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7017 /* sat_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7025 /* sat_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7033 /* sat_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7041 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7041 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7041 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7041 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7044 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7044 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7044 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7044 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7044 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7044 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7047 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7047 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7047 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7047 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7051 /* sd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7051 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 7060 /* sdc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 7060 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 7060 /* sdc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 7060 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7065 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7065 /* sdc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 7065 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 7065 /* sdc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 7070 /* sdc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 7070 /* sdc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7075 /* sdl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7075 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7079 /* sdr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7079 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7083 /* sdxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7083 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 7083 /* sdxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 7083 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7089 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7089 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7093 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7093 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7097 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7103 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7109 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7109 /* seleqz */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7116 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7125 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7134 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7134 /* selnez */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7141 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7150 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7159 /* seq */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7159 /* seq */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7163 /* seqi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7163 /* seqi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7168 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7168 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7168 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7168 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 7171 /* shf.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7177 /* shf.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7183 /* shf.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7189 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7195 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7195 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 7202 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7210 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7218 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7228 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7237 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7246 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7255 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7266 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7276 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7284 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7292 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7302 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7312 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7321 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7330 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7339 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7350 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7361 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7371 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7379 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7387 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7396 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7405 /* sld.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7405 /* sld.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7411 /* sld.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7411 /* sld.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7417 /* sld.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7417 /* sld.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7423 /* sld.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7423 /* sld.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7429 /* sldi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7436 /* sldi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7443 /* sldi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7450 /* sldi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7457 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7457 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7457 /* sll */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7457 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7457 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7461 /* sll.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7467 /* sll.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7473 /* sll.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7479 /* sll.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7485 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7491 /* slli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7498 /* slli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7505 /* slli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7512 /* slli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7519 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7519 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7524 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7524 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7524 /* slt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7528 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7528 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7533 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7533 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7539 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7539 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7539 /* sltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7544 /* sne */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7544 /* sne */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7548 /* snei */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7548 /* snei */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7553 /* splat.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7553 /* splat.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7561 /* splat.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7561 /* splat.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7569 /* splat.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7569 /* splat.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7577 /* splat.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7577 /* splat.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7585 /* splati.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7594 /* splati.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7603 /* splati.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7612 /* splati.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 7621 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 7621 /* sqrt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 7628 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7635 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7635 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7635 /* sra */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7635 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7635 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7639 /* sra.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7645 /* sra.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7651 /* sra.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7657 /* sra.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7663 /* srai.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7670 /* srai.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7677 /* srai.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7684 /* srai.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7691 /* srar.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7698 /* srar.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7705 /* srar.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7712 /* srar.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7719 /* srari.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7727 /* srari.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7735 /* srari.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7743 /* srari.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7751 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7751 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7756 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7756 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7756 /* srl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7756 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7756 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7760 /* srl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7766 /* srl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7772 /* srl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7778 /* srl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7784 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7790 /* srli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7797 /* srli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7804 /* srli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7811 /* srli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7818 /* srlr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7825 /* srlr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7832 /* srlr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7839 /* srlr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7846 /* srlri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7854 /* srlri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7862 /* srlri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7870 /* srlri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7878 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7878 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7889 /* st.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 7889 /* st.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 7894 /* st.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 7894 /* st.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 7899 /* st.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 7899 /* st.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 7904 /* st.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 7904 /* st.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 7909 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7909 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 7909 /* sub */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 7909 /* sub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc, 7909 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7909 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 7909 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 7909 /* sub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 7913 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 7913 /* sub.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7919 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7925 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7933 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7943 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7952 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7961 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7969 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7980 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7990 /* subs_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7999 /* subs_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8008 /* subs_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8017 /* subs_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8026 /* subs_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8035 /* subs_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8044 /* subs_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8053 /* subs_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8062 /* subsus_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8073 /* subsus_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8084 /* subsus_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8095 /* subsus_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8106 /* subsuu_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8117 /* subsuu_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8128 /* subsuu_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8139 /* subsuu_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 8150 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8150 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8150 /* subu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8150 /* subu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc, 8150 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8150 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8150 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8150 /* subu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasDSPR2, 8155 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8163 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8171 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8178 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8188 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8198 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8207 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8218 /* subv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8225 /* subv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8232 /* subv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8239 /* subv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8246 /* subvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8254 /* subvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8262 /* subvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8270 /* subvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8278 /* suxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8278 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8278 /* suxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8278 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 8284 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8284 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8284 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8284 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 8287 /* swc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8287 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8292 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8292 /* swc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 8292 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 8292 /* swc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 8297 /* swc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8297 /* swc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8302 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8302 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8302 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8302 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8306 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8306 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8306 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8306 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8310 /* swxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8310 /* swxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasMips2, 8359 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8359 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8359 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8363 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8363 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8368 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8368 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8368 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8372 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8372 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8377 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8377 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8383 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8383 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8383 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2, 8410 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8410 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8410 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8414 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8414 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8419 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8419 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8425 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8425 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8425 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2, 8430 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8430 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8430 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8434 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8434 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8439 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8449 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8449 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 8459 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 8459 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 8459 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 8459 /* trunc.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8469 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8479 /* v3mulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8479 /* v3mulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8486 /* vmm0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8486 /* vmm0 */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8491 /* vmulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8491 /* vmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8497 /* vshf.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8504 /* vshf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8511 /* vshf.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8518 /* vshf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8530 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 8536 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8536 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8541 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8541 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8541 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8541 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8541 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8545 /* xor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8551 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8557 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8557 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8557 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8557 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8562 /* xori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACC64DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_AFGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_CCRAsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP2AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP3AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FCCAsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGRH32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmReg:
    return parseAnyRegister(Operands);
  case MCK_HI32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_HWRegsAsmReg:
    return parseAnyRegister(Operands);
  case MCK_LO32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSA128AsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSACtrlAsmReg:
    return parseAnyRegister(Operands);
  case MCK_InvNum:
    return parseInvNum(Operands);
  case MCK_JumpTarget:
    return parseJumpTarget(Operands);
  case MCK_MemOffsetSimm11:
    return parseMemOperand(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  case MCK_LSAImm:
    return parseLSAImm(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+1712, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

