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
enum SubtargetFeatureFlag : uint8_t {
  Feature_FeatureDistinctOps = (1ULL << 0),
  Feature_FeatureLoadStoreOnCond = (1ULL << 5),
  Feature_FeatureHighWord = (1ULL << 3),
  Feature_FeatureFPExtension = (1ULL << 1),
  Feature_FeatureFastSerialization = (1ULL << 2),
  Feature_FeatureInterlockedAccess1 = (1ULL << 4),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeatureHighWord: return "high-word";
  case Feature_FeatureFPExtension: return "fp-extension";
  case Feature_FeatureFastSerialization: return "fast-serialization";
  case Feature_FeatureInterlockedAccess1: return "interlocked-access1";
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
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0__S32Imm1_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__PCRel161_1,
  Convert__GR641_0__PCRel321_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR641_0__GR641_1__Tie0__Tie1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__GR321_0,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__GRH321_0__U16Imm1_1,
  Convert__GR321_0__U16Imm1_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addAccessRegOperands(Inst, 1);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addAccessRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ADDR128' class
  if (Kind == MCK_ADDR128) {
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR32' class
  if (Kind == MCK_ADDR32) {
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR64' class
  if (Kind == MCK_ADDR64) {
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AccessReg' class
  if (Kind == MCK_AccessReg) {
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp12' class
  if (Kind == MCK_BDAddr32Disp12) {
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp20' class
  if (Kind == MCK_BDAddr32Disp20) {
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp12' class
  if (Kind == MCK_BDAddr64Disp12) {
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp20' class
  if (Kind == MCK_BDAddr64Disp20) {
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDLAddr64Disp12Len8' class
  if (Kind == MCK_BDLAddr64Disp12Len8) {
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp12' class
  if (Kind == MCK_BDXAddr64Disp12) {
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp20' class
  if (Kind == MCK_BDXAddr64Disp20) {
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP128' class
  if (Kind == MCK_FP128) {
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP32' class
  if (Kind == MCK_FP32) {
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP64' class
  if (Kind == MCK_FP64) {
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR128' class
  if (Kind == MCK_GR128) {
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR32' class
  if (Kind == MCK_GR32) {
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR64' class
  if (Kind == MCK_GR64) {
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GRH32' class
  if (Kind == MCK_GRH32) {
    if (Operand.isGRH32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GRX32' class
  if (Kind == MCK_GRX32) {
    if (Operand.isGRX32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel16' class
  if (Kind == MCK_PCRel16) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel32' class
  if (Kind == MCK_PCRel32) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S32Imm' class
  if (Kind == MCK_S32Imm) {
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S8Imm' class
  if (Kind == MCK_S8Imm) {
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U32Imm' class
  if (Kind == MCK_U32Imm) {
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U8Imm' class
  if (Kind == MCK_U8Imm) {
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SystemZAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  if (((FB & SystemZ::FeatureDistinctOps) != 0))
    Features |= Feature_FeatureDistinctOps;
  if (((FB & SystemZ::FeatureLoadStoreOnCond) != 0))
    Features |= Feature_FeatureLoadStoreOnCond;
  if (((FB & SystemZ::FeatureHighWord) != 0))
    Features |= Feature_FeatureHighWord;
  if (((FB & SystemZ::FeatureFPExtension) != 0))
    Features |= Feature_FeatureFPExtension;
  if (((FB & SystemZ::FeatureFastSerialization) != 0))
    Features |= Feature_FeatureFastSerialization;
  if (((FB & SystemZ::FeatureInterlockedAccess1) != 0))
    Features |= Feature_FeatureInterlockedAccess1;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\005aghik\003agr\004agrk\004agsi\002ah\003ahi\004ahik\003ahy\003"
    "aih\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005alg"
    "fi\005algfr\007alghsik\004algr\005algrk\006alhsik\003alr\004alrk\003aly"
    "\002ar\003ark\003asi\004axbr\002ay\004basr\003bcr\003ber\004bher\003bhr"
    "\004bler\004blhr\003blr\004bner\005bnher\004bnhr\005bnler\005bnlhr\004b"
    "nlr\004bnor\003bor\002br\004bras\005brasl\003brc\004brcl\004brct\005brc"
    "tg\001c\003cdb\004cdbr\005cdfbr\005cdgbr\006cdlfbr\006cdlgbr\003ceb\004"
    "cebr\005cefbr\005cegbr\006celfbr\006celgbr\005cfdbr\005cfebr\003cfi\005"
    "cfxbr\002cg\005cgdbr\005cgebr\003cgf\004cgfi\004cgfr\005cgfrl\003cgh\004"
    "cghi\005cghrl\005cghsi\004cgij\005cgije\005cgijh\006cgijhe\005cgijl\006"
    "cgijle\006cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgijnl\007cgijnle\007"
    "cgijnlh\003cgr\004cgrj\005cgrje\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006"
    "cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004"
    "cgrl\005cgxbr\002ch\003chf\005chhsi\003chi\004chrl\004chsi\003chy\003ci"
    "h\003cij\004cije\004cijh\005cijhe\004cijl\005cijle\005cijlh\005cijne\005"
    "cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh\002cl\003clc\006clfdbr\006"
    "clfebr\006clfhsi\004clfi\006clfxbr\003clg\006clgdbr\006clgebr\004clgf\005"
    "clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgij\006clgije\006clgi"
    "jh\007clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010"
    "clgijnhe\007clgijnl\010clgijnle\010clgijnlh\004clgr\005clgrj\006clgrje\006"
    "clgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh"
    "\010clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\006clgxbr\004c"
    "lhf\006clhhsi\005clhrl\003cli\004clih\004clij\005clije\005clijh\006clij"
    "he\005clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijn"
    "l\007clijnle\007clijnlh\004cliy\003clr\004clrj\005clrje\005clrjh\006clr"
    "jhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clrj"
    "nl\007clrjnle\007clrjnlh\004clrl\004clst\003cly\005cpsdr\002cr\003crj\004"
    "crje\004crjh\005crjhe\004crjl\005crjle\005crjlh\005crjne\005crjnh\006cr"
    "jnhe\005crjnl\006crjnle\006crjnlh\003crl\002cs\003csg\003csy\004cxbr\005"
    "cxfbr\005cxgbr\006cxlfbr\006cxlgbr\002cy\003ddb\004ddbr\003deb\004debr\002"
    "dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005dsgfr\004dsgr\004dxbr\003ear"
    "\005fidbr\006fidbra\005fiebr\006fiebra\005fixbr\006fixbra\005flogr\002i"
    "c\003icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipm\001j\002"
    "je\002jg\003jge\003jgh\004jghe\003jgl\004jgle\004jglh\004jgne\004jgnh\005"
    "jgnhe\004jgnl\005jgnle\005jgnlh\004jgno\003jgo\002jh\003jhe\002jl\003jl"
    "e\003jlh\003jne\003jnh\004jnhe\003jnl\004jnle\004jnlh\003jno\002jo\001l"
    "\002la\003laa\004laag\004laal\005laalg\003lan\004lang\003lao\004laog\004"
    "larl\003lax\004laxg\003lay\002lb\003lbh\003lbr\005lcdbr\005lcebr\005lcg"
    "fr\004lcgr\003lcr\005lcxbr\002ld\004ldeb\005ldebr\004ldgr\003ldr\005ldx"
    "br\006ldxbra\003ldy\002le\005ledbr\006ledbra\003ler\005lexbr\006lexbra\003"
    "ley\003lfh\002lg\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004lgfr\005lgfrl"
    "\003lgh\004lghi\004lghr\005lghrl\003lgr\004lgrl\002lh\003lhh\003lhi\003"
    "lhr\004lhrl\003lhy\003llc\004llch\004llcr\004llgc\005llgcr\004llgf\005l"
    "lgfr\006llgfrl\004llgh\005llghr\006llghrl\003llh\004llhh\004llhr\005llh"
    "rl\005llihf\005llihh\005llihl\005llilf\005llilh\005llill\003lmg\005lndb"
    "r\005lnebr\005lngfr\004lngr\003lnr\005lnxbr\003loc\004loce\004locg\005l"
    "ocge\005locgh\006locghe\005locgl\006locgle\006locglh\006locgne\006locgn"
    "h\007locgnhe\006locgnl\007locgnle\007locgnlh\006locgno\005locgo\005locg"
    "r\006locgre\006locgrh\007locgrhe\006locgrl\007locgrle\007locgrlh\007loc"
    "grne\007locgrnh\010locgrnhe\007locgrnl\010locgrnle\010locgrnlh\007locgr"
    "no\006locgro\004loch\005loche\004locl\005locle\005loclh\005locne\005loc"
    "nh\006locnhe\005locnl\006locnle\006locnlh\005locno\004loco\004locr\005l"
    "ocre\005locrh\006locrhe\005locrl\006locrle\006locrlh\006locrne\006locrn"
    "h\007locrnhe\006locrnl\007locrnle\007locrnlh\006locrno\005locro\005lpdb"
    "r\005lpebr\005lpgfr\004lpgr\003lpr\005lpxbr\002lr\003lrl\003lrv\004lrvg"
    "\005lrvgr\004lrvr\002lt\005ltdbr\005ltebr\003ltg\004ltgf\005ltgfr\004lt"
    "gr\003ltr\005ltxbr\004lxdb\005lxdbr\004lxeb\005lxebr\003lxr\002ly\004lz"
    "dr\004lzer\004lzxr\004madb\005madbr\004maeb\005maebr\003mdb\004mdbr\004"
    "mdeb\005mdebr\004meeb\005meebr\004mghi\002mh\003mhi\003mhy\003mlg\004ml"
    "gr\002ms\004msdb\005msdbr\004mseb\005msebr\004msfi\003msg\004msgf\005ms"
    "gfi\005msgfr\004msgr\003msr\003msy\003mvc\005mvghi\005mvhhi\004mvhi\003"
    "mvi\004mviy\004mvst\004mxbr\004mxdb\005mxdbr\001n\002nc\002ng\003ngr\004"
    "ngrk\002ni\004nihf\004nihh\004nihl\004nilf\004nilh\004nill\003niy\002nr"
    "\003nrk\002ny\001o\002oc\002og\003ogr\004ogrk\002oi\004oihf\004oihh\004"
    "oihl\004oilf\004oilh\004oill\003oiy\002or\003ork\002oy\003pfd\005pfdrl\005"
    "risbg\006risbhg\006risblg\003rll\004rllg\005rnsbg\005rosbg\005rxsbg\001"
    "s\003sdb\004sdbr\003seb\004sebr\002sg\003sgf\004sgfr\003sgr\004sgrk\002"
    "sh\003shy\002sl\003slb\004slbg\005slbgr\004slbr\004slfi\003slg\004slgf\005"
    "slgfi\005slgfr\004slgr\005slgrk\003sll\004sllg\004sllk\003slr\004slrk\003"
    "sly\004sqdb\005sqdbr\004sqeb\005sqebr\005sqxbr\002sr\003sra\004srag\004"
    "srak\003srk\003srl\004srlg\004srlk\004srst\002st\003stc\004stch\004stcy"
    "\003std\004stdy\003ste\004stey\004stfh\003stg\005stgrl\003sth\004sthh\005"
    "sthrl\004sthy\004stmg\004stoc\005stoce\005stocg\006stocge\006stocgh\007"
    "stocghe\006stocgl\007stocgle\007stocglh\007stocgne\007stocgnh\010stocgn"
    "he\007stocgnl\010stocgnle\010stocgnlh\007stocgno\006stocgo\005stoch\006"
    "stoche\005stocl\006stocle\006stoclh\006stocne\006stocnh\007stocnhe\006s"
    "tocnl\007stocnle\007stocnlh\006stocno\005stoco\004strl\004strv\005strvg"
    "\003sty\004sxbr\002sy\002tm\004tmhh\004tmhl\004tmlh\004tmll\003tmy\001x"
    "\002xc\002xg\003xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\002"
    "xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[5];
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
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 46 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 52 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 56 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 61 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 66 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 69 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 73 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 78 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 82 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 86 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 89 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 93 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 98 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 104 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 109 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 114 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 118 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 123 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 129 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 135 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 143 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 148 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 154 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 161 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 165 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 170 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 174 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 177 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 181 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 185 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 190 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 193 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 198 /* bcr */, SystemZ::AsmBCR, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 202 /* ber */, SystemZ::AsmEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 206 /* bher */, SystemZ::AsmHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 211 /* bhr */, SystemZ::AsmHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 215 /* bler */, SystemZ::AsmLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 220 /* blhr */, SystemZ::AsmLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 225 /* blr */, SystemZ::AsmLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 229 /* bner */, SystemZ::AsmNEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 234 /* bnher */, SystemZ::AsmNHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 240 /* bnhr */, SystemZ::AsmNHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 245 /* bnler */, SystemZ::AsmNLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 251 /* bnlhr */, SystemZ::AsmNLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 257 /* bnlr */, SystemZ::AsmNLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 262 /* bnor */, SystemZ::AsmNOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 267 /* bor */, SystemZ::AsmOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 271 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 274 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 279 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 285 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 289 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 294 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 299 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 305 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 307 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 311 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 316 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 322 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 328 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 335 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 342 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 346 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 351 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 357 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 363 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 370 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 377 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 383 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 389 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 393 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 399 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 402 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 408 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 414 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 418 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 423 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 428 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 434 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 438 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 443 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 449 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 455 /* cgij */, SystemZ::AsmCGIJ, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 460 /* cgije */, SystemZ::AsmJECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 466 /* cgijh */, SystemZ::AsmJHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 472 /* cgijhe */, SystemZ::AsmJHECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 479 /* cgijl */, SystemZ::AsmJLCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 485 /* cgijle */, SystemZ::AsmJLECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 492 /* cgijlh */, SystemZ::AsmJLHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 499 /* cgijne */, SystemZ::AsmJLHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 506 /* cgijnh */, SystemZ::AsmJLEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 513 /* cgijnhe */, SystemZ::AsmJLAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 521 /* cgijnl */, SystemZ::AsmJHEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 528 /* cgijnle */, SystemZ::AsmJHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 536 /* cgijnlh */, SystemZ::AsmJEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 544 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 548 /* cgrj */, SystemZ::AsmCGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 553 /* cgrje */, SystemZ::AsmJECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 559 /* cgrjh */, SystemZ::AsmJHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 565 /* cgrjhe */, SystemZ::AsmJHECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 572 /* cgrjl */, SystemZ::AsmJLCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 578 /* cgrjle */, SystemZ::AsmJLECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 585 /* cgrjlh */, SystemZ::AsmJLHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 592 /* cgrjne */, SystemZ::AsmJLHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 599 /* cgrjnh */, SystemZ::AsmJLEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 606 /* cgrjnhe */, SystemZ::AsmJLAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 614 /* cgrjnl */, SystemZ::AsmJHEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 621 /* cgrjnle */, SystemZ::AsmJHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 629 /* cgrjnlh */, SystemZ::AsmJEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 637 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 642 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 648 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 651 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 655 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 661 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 665 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 670 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 675 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 679 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 683 /* cij */, SystemZ::AsmCIJ, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 687 /* cije */, SystemZ::AsmJECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 692 /* cijh */, SystemZ::AsmJHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 697 /* cijhe */, SystemZ::AsmJHECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 703 /* cijl */, SystemZ::AsmJLCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 708 /* cijle */, SystemZ::AsmJLECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 714 /* cijlh */, SystemZ::AsmJLHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 720 /* cijne */, SystemZ::AsmJLHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 726 /* cijnh */, SystemZ::AsmJLEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 732 /* cijnhe */, SystemZ::AsmJLAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 739 /* cijnl */, SystemZ::AsmJHEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 745 /* cijnle */, SystemZ::AsmJHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 752 /* cijnlh */, SystemZ::AsmJEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 759 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 762 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 766 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 773 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 780 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 787 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 792 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 799 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 803 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 810 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 817 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 822 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 828 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 834 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 841 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 848 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 855 /* clgij */, SystemZ::AsmCLGIJ, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 861 /* clgije */, SystemZ::AsmJECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 868 /* clgijh */, SystemZ::AsmJHCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 875 /* clgijhe */, SystemZ::AsmJHECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 883 /* clgijl */, SystemZ::AsmJLCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 890 /* clgijle */, SystemZ::AsmJLECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 898 /* clgijlh */, SystemZ::AsmJLHCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 906 /* clgijne */, SystemZ::AsmJLHAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 914 /* clgijnh */, SystemZ::AsmJLEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 922 /* clgijnhe */, SystemZ::AsmJLAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 931 /* clgijnl */, SystemZ::AsmJHEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 939 /* clgijnle */, SystemZ::AsmJHAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 948 /* clgijnlh */, SystemZ::AsmJEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 957 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 962 /* clgrj */, SystemZ::AsmCLGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 968 /* clgrje */, SystemZ::AsmJECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 975 /* clgrjh */, SystemZ::AsmJHCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 982 /* clgrjhe */, SystemZ::AsmJHECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 990 /* clgrjl */, SystemZ::AsmJLCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 997 /* clgrjle */, SystemZ::AsmJLECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1005 /* clgrjlh */, SystemZ::AsmJLHCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1013 /* clgrjne */, SystemZ::AsmJLHAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1021 /* clgrjnh */, SystemZ::AsmJLEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1029 /* clgrjnhe */, SystemZ::AsmJLAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1038 /* clgrjnl */, SystemZ::AsmJHEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1046 /* clgrjnle */, SystemZ::AsmJHAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1055 /* clgrjnlh */, SystemZ::AsmJEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1064 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1070 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1077 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1082 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1089 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1095 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 1099 /* clih */, SystemZ::CLIH, Convert__GR321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GR32, MCK_U32Imm }, },
  { 1104 /* clij */, SystemZ::AsmCLIJ, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1109 /* clije */, SystemZ::AsmJECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1115 /* clijh */, SystemZ::AsmJHCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1121 /* clijhe */, SystemZ::AsmJHECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1128 /* clijl */, SystemZ::AsmJLCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1134 /* clijle */, SystemZ::AsmJLECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1141 /* clijlh */, SystemZ::AsmJLHCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1148 /* clijne */, SystemZ::AsmJLHAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1155 /* clijnh */, SystemZ::AsmJLEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1162 /* clijnhe */, SystemZ::AsmJLAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1170 /* clijnl */, SystemZ::AsmJHEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1177 /* clijnle */, SystemZ::AsmJHAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1185 /* clijnlh */, SystemZ::AsmJEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1193 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 1198 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1202 /* clrj */, SystemZ::AsmCLRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 1207 /* clrje */, SystemZ::AsmJECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1213 /* clrjh */, SystemZ::AsmJHCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1219 /* clrjhe */, SystemZ::AsmJHECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1226 /* clrjl */, SystemZ::AsmJLCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1232 /* clrjle */, SystemZ::AsmJLECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1239 /* clrjlh */, SystemZ::AsmJLHCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1246 /* clrjne */, SystemZ::AsmJLHAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1253 /* clrjnh */, SystemZ::AsmJLEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1260 /* clrjnhe */, SystemZ::AsmJLAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1268 /* clrjnl */, SystemZ::AsmJHEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1275 /* clrjnle */, SystemZ::AsmJHAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1283 /* clrjnlh */, SystemZ::AsmJEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1291 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1296 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1301 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1305 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 1311 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1314 /* crj */, SystemZ::AsmCRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 1318 /* crje */, SystemZ::AsmJECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1323 /* crjh */, SystemZ::AsmJHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1328 /* crjhe */, SystemZ::AsmJHECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1334 /* crjl */, SystemZ::AsmJLCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1339 /* crjle */, SystemZ::AsmJLECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1345 /* crjlh */, SystemZ::AsmJLHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1351 /* crjne */, SystemZ::AsmJLHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1357 /* crjnh */, SystemZ::AsmJLEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1363 /* crjnhe */, SystemZ::AsmJLAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1370 /* crjnl */, SystemZ::AsmJHEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1376 /* crjnle */, SystemZ::AsmJHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1383 /* crjnlh */, SystemZ::AsmJEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1390 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1394 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 1397 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1401 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1405 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1410 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 1416 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 1422 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 1429 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 1436 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1439 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1443 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1448 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1452 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1457 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1460 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1464 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1469 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 1473 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1477 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1482 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 1488 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1493 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1498 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, },
  { 1502 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 1508 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1515 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 1521 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1528 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 1534 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1541 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1547 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1550 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1554 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 1559 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 1564 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 1569 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 1574 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1579 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1584 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 1588 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1590 /* je */, SystemZ::AsmEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1593 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1596 /* jge */, SystemZ::AsmEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1600 /* jgh */, SystemZ::AsmHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1604 /* jghe */, SystemZ::AsmHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1609 /* jgl */, SystemZ::AsmLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1613 /* jgle */, SystemZ::AsmLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1618 /* jglh */, SystemZ::AsmLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1623 /* jgne */, SystemZ::AsmNEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1628 /* jgnh */, SystemZ::AsmNHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1633 /* jgnhe */, SystemZ::AsmNHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1639 /* jgnl */, SystemZ::AsmNLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1644 /* jgnle */, SystemZ::AsmNLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1650 /* jgnlh */, SystemZ::AsmNLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1656 /* jgno */, SystemZ::AsmNOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1661 /* jgo */, SystemZ::AsmOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1665 /* jh */, SystemZ::AsmHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1668 /* jhe */, SystemZ::AsmHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1672 /* jl */, SystemZ::AsmLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1675 /* jle */, SystemZ::AsmLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1679 /* jlh */, SystemZ::AsmLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1683 /* jne */, SystemZ::AsmNEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1687 /* jnh */, SystemZ::AsmNHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1691 /* jnhe */, SystemZ::AsmNHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1696 /* jnl */, SystemZ::AsmNLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1700 /* jnle */, SystemZ::AsmNLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1705 /* jnlh */, SystemZ::AsmNLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1710 /* jno */, SystemZ::AsmNOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1714 /* jo */, SystemZ::AsmOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1717 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1719 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1722 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1726 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1731 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1736 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1742 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1746 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1751 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1755 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1760 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1765 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1769 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1774 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1778 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1781 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1785 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1789 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1795 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1801 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1807 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1812 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1816 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1822 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1825 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1830 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 1836 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 1841 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1845 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1851 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1858 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 1862 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1865 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 1871 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1878 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1882 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1888 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1895 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 1899 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1903 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1906 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1910 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1915 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 1920 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1924 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 1929 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1934 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1940 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1944 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1949 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1954 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1960 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1964 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1969 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1972 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1976 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1980 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1984 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1989 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1993 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1997 /* llch */, SystemZ::LLCH, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2002 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2007 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2012 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2018 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2023 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2029 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2036 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2041 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2047 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2054 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2058 /* llhh */, SystemZ::LLHH, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2063 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2068 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2074 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2080 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2086 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2092 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2098 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2104 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2110 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2114 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2120 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2126 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2132 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2137 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2141 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2147 /* loc */, SystemZ::AsmLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2151 /* loce */, SystemZ::AsmELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2156 /* locg */, SystemZ::AsmLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2161 /* locge */, SystemZ::AsmELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2167 /* locgh */, SystemZ::AsmHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2173 /* locghe */, SystemZ::AsmHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2180 /* locgl */, SystemZ::AsmLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2186 /* locgle */, SystemZ::AsmLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2193 /* locglh */, SystemZ::AsmLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2200 /* locgne */, SystemZ::AsmNELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2207 /* locgnh */, SystemZ::AsmNHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2214 /* locgnhe */, SystemZ::AsmNHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2222 /* locgnl */, SystemZ::AsmNLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2229 /* locgnle */, SystemZ::AsmNLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2237 /* locgnlh */, SystemZ::AsmNLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2245 /* locgno */, SystemZ::AsmNOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2252 /* locgo */, SystemZ::AsmOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2258 /* locgr */, SystemZ::AsmLOCGR, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2264 /* locgre */, SystemZ::AsmELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2271 /* locgrh */, SystemZ::AsmHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2278 /* locgrhe */, SystemZ::AsmHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2286 /* locgrl */, SystemZ::AsmLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2293 /* locgrle */, SystemZ::AsmLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2301 /* locgrlh */, SystemZ::AsmLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2309 /* locgrne */, SystemZ::AsmNELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2317 /* locgrnh */, SystemZ::AsmNHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2325 /* locgrnhe */, SystemZ::AsmNHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2334 /* locgrnl */, SystemZ::AsmNLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2342 /* locgrnle */, SystemZ::AsmNLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2351 /* locgrnlh */, SystemZ::AsmNLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2360 /* locgrno */, SystemZ::AsmNOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2368 /* locgro */, SystemZ::AsmOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2375 /* loch */, SystemZ::AsmHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2380 /* loche */, SystemZ::AsmHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2386 /* locl */, SystemZ::AsmLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2391 /* locle */, SystemZ::AsmLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2397 /* loclh */, SystemZ::AsmLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2403 /* locne */, SystemZ::AsmNELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2409 /* locnh */, SystemZ::AsmNHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2415 /* locnhe */, SystemZ::AsmNHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2422 /* locnl */, SystemZ::AsmNLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2428 /* locnle */, SystemZ::AsmNLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2435 /* locnlh */, SystemZ::AsmNLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2442 /* locno */, SystemZ::AsmNOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2448 /* loco */, SystemZ::AsmOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2453 /* locr */, SystemZ::AsmLOCR, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 2458 /* locre */, SystemZ::AsmELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2464 /* locrh */, SystemZ::AsmHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2470 /* locrhe */, SystemZ::AsmHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2477 /* locrl */, SystemZ::AsmLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2483 /* locrle */, SystemZ::AsmLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2490 /* locrlh */, SystemZ::AsmLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2497 /* locrne */, SystemZ::AsmNELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2504 /* locrnh */, SystemZ::AsmNHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2511 /* locrnhe */, SystemZ::AsmNHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2519 /* locrnl */, SystemZ::AsmNLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2526 /* locrnle */, SystemZ::AsmNLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2534 /* locrnlh */, SystemZ::AsmNLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2542 /* locrno */, SystemZ::AsmNOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2549 /* locro */, SystemZ::AsmOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2555 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2561 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2567 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2573 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2578 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2582 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2588 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2591 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2595 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2599 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2604 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2610 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2615 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2618 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2624 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2630 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2634 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2639 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2645 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2650 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2654 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2660 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2665 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2671 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2676 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 2682 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2686 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2689 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 2694 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 2699 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 2704 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2709 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2715 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2720 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2726 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2730 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2735 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2740 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 2746 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2751 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2757 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 2762 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2765 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 2769 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2773 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2777 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 2782 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2785 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2790 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2796 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2801 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2807 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 2812 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2816 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2821 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 2827 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2833 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2838 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2842 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2846 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2850 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2856 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2862 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2867 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2871 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2876 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2881 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2886 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2891 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2897 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2899 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2902 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2905 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2909 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2914 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2917 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 2922 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2927 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2932 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 2937 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2942 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2947 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2951 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2954 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2958 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2961 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2963 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2966 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2969 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2973 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2978 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2981 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 2986 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2991 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2996 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3001 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3006 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3011 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3015 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3018 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3022 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3025 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 3029 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 3035 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3041 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3048 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3055 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3059 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3064 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3070 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3076 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3082 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3084 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3088 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3093 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3097 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3102 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3105 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3109 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3114 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3118 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3123 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3126 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3130 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3133 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3137 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3142 /* slbgr */, SystemZ::SLGBR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3148 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3153 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3158 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3162 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3167 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 3173 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3179 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3184 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3190 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3194 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3199 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3204 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3208 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3213 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3217 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3222 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3228 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3233 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3239 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3245 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3248 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3252 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3257 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3262 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3266 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3270 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3275 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3280 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3285 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3288 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3292 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3297 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3302 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3306 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 3311 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3315 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 3320 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3325 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3329 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3335 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3339 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3344 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3350 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3355 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3360 /* stoc */, SystemZ::AsmSTOC, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3365 /* stoce */, SystemZ::AsmESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3371 /* stocg */, SystemZ::AsmSTOCG, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3377 /* stocge */, SystemZ::AsmESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3384 /* stocgh */, SystemZ::AsmHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3391 /* stocghe */, SystemZ::AsmHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3399 /* stocgl */, SystemZ::AsmLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3406 /* stocgle */, SystemZ::AsmLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3414 /* stocglh */, SystemZ::AsmLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3422 /* stocgne */, SystemZ::AsmNESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3430 /* stocgnh */, SystemZ::AsmNHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3438 /* stocgnhe */, SystemZ::AsmNHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3447 /* stocgnl */, SystemZ::AsmNLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3455 /* stocgnle */, SystemZ::AsmNLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3464 /* stocgnlh */, SystemZ::AsmNLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3473 /* stocgno */, SystemZ::AsmNOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3481 /* stocgo */, SystemZ::AsmOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3488 /* stoch */, SystemZ::AsmHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3494 /* stoche */, SystemZ::AsmHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3501 /* stocl */, SystemZ::AsmLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3507 /* stocle */, SystemZ::AsmLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3514 /* stoclh */, SystemZ::AsmLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3521 /* stocne */, SystemZ::AsmNESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3528 /* stocnh */, SystemZ::AsmNHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3535 /* stocnhe */, SystemZ::AsmNHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3543 /* stocnl */, SystemZ::AsmNLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3550 /* stocnle */, SystemZ::AsmNLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3558 /* stocnlh */, SystemZ::AsmNLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3566 /* stocno */, SystemZ::AsmNOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3573 /* stoco */, SystemZ::AsmOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3579 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3584 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3589 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3595 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3599 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3604 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3607 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 3610 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3615 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3620 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3625 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3630 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3634 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3636 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 3639 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3642 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3646 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3651 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 3654 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 3659 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3664 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3668 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3671 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3675 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
};

bool SystemZAsmParser::
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

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
uint64_t &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

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
    for (unsigned i = 0; i != 5; ++i) {
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
    uint8_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[1083] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 46 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 52 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 56 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 61 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 66 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 73 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 78 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 78 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 82 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 86 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 86 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 89 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 89 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 93 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 93 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 104 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 109 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 114 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 118 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 118 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 123 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 129 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 129 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 135 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 143 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 148 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDistinctOps, 154 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 161 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 165 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 170 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 170 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 174 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 177 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 181 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 185 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 190 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 190 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 193 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 193 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 198 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 202 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 206 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 211 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 215 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 220 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 225 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 229 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 234 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 240 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 245 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 251 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 257 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 262 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 267 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 271 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 274 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 274 /* bras */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 279 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 279 /* brasl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 285 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 289 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 294 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 294 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 299 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 299 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 305 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 305 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 307 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 307 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 311 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 316 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 316 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 322 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 322 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 328 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 328 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 335 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 335 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 342 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 342 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 346 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 351 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 351 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 357 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 357 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 363 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 363 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 370 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 370 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 377 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 377 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 383 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 383 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 389 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 393 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 393 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 399 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 399 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 402 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 402 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 408 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 408 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 414 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 414 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 418 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 423 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 423 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 434 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 434 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 438 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 443 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 443 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 449 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 455 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 455 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 460 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 460 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 466 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 466 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 472 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 472 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 479 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 479 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 485 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 485 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 492 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 492 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 499 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 499 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 506 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 506 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 513 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 513 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 521 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 521 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 528 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 528 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 536 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 536 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 544 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 548 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 548 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 553 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 553 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 559 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 559 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 565 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 565 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 572 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 572 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 578 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 578 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 585 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 585 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 592 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 592 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 599 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 599 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 606 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 606 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 614 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 614 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 621 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 621 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 629 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 629 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 637 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 637 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 642 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 642 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 648 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 648 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 651 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 651 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 655 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 661 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 670 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 675 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 675 /* chy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 679 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 683 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 683 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 687 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 687 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 692 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 692 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 697 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 697 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 703 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 703 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 708 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 708 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 714 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 714 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 720 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 720 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 726 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 726 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 732 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 732 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 739 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 739 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 745 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 745 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 752 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 752 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 759 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 759 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 762 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 762 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 766 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 766 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 773 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 773 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 780 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 787 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 792 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 792 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 799 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 799 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 803 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 803 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 810 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 810 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 817 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 817 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 822 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 828 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 828 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 834 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 834 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 841 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 841 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 848 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 855 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 855 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 861 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 861 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 868 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 868 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 875 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 875 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 883 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 883 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 890 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 890 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 898 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 898 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 906 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 906 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 914 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 914 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 922 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 922 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 931 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 931 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 939 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 939 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 948 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 948 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 957 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 962 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 962 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 968 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 968 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 975 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 975 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 982 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 982 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 990 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 990 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 997 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 997 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1005 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1005 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1013 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1013 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1021 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1021 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1029 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1029 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1038 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1038 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1046 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1046 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1055 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1055 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1064 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1064 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1070 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1070 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1077 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1077 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1082 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1089 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1089 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1095 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1099 /* clih */, MCK_GR32, 1 /* 0 */ },
  { 0, 1104 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1104 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1109 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1109 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1115 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1115 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1121 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1121 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1128 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1128 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1134 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1134 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1141 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1141 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1148 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1148 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1155 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1155 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1162 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1162 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1170 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1170 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1177 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1177 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1185 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1185 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1193 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1198 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1202 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1202 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1207 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1207 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1213 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1213 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1219 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1219 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1226 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1226 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1232 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1232 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1239 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1239 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1246 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1246 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1253 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1253 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1260 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1260 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1268 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1268 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1275 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1275 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1283 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1283 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1291 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1291 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1296 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1301 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1301 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1305 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1311 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1314 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1314 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1318 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1318 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1323 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1323 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1328 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1328 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1334 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1334 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1339 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1339 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1345 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1345 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1351 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1351 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1357 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1357 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1363 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1363 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1370 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1370 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1376 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1376 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1383 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1383 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1390 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1390 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1394 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1394 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1397 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1397 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1401 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1401 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1405 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1410 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1410 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1416 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1416 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1422 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1422 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1429 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1429 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 1436 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1436 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1439 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1439 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1443 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1448 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1448 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1452 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1457 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1457 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 1460 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1460 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1464 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1464 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1469 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1469 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1473 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1473 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1477 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1477 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 1482 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1482 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1488 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1488 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1493 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1498 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 1498 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 1502 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1508 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 1515 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1521 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 1528 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1534 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1541 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1541 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1547 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1547 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 1550 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1550 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 1554 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1559 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1564 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1569 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 1574 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1579 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 1584 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 1588 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1590 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1593 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1596 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1600 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1604 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1609 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1613 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1618 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1623 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1628 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1633 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1639 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1644 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1650 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1656 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1661 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1665 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1668 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1672 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1675 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1679 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1683 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1687 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1691 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1696 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1700 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1705 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1710 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1714 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1717 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1717 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 1719 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1719 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 1722 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1722 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1726 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1726 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1731 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1731 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1736 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1736 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1742 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1742 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1746 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1746 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1751 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1751 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1755 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1755 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1760 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1760 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureInterlockedAccess1, 1765 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1765 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1769 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1769 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1774 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1774 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 1778 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1778 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1781 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1781 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1785 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1789 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1795 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1801 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1801 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1807 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1812 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1816 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1822 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1822 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 1825 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1825 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1830 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1830 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1836 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1836 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1841 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1845 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1851 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1858 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1858 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1862 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1862 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 1865 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 1865 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1871 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1871 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 1878 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1882 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1888 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1895 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1895 /* ley */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1899 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1899 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1903 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1903 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1906 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1906 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 1910 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1915 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1915 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1920 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1920 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1924 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1929 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1929 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1934 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1934 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1940 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1940 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1944 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1949 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1954 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1954 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1960 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1964 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1964 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1969 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1969 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1972 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1972 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1976 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1980 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1984 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1984 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1989 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1989 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1993 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1993 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1997 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1997 /* llch */, MCK_GR32, 1 /* 0 */ },
  { 0, 2002 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2007 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2007 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 2012 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2018 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2018 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2023 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2023 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2029 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2029 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2036 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2036 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2041 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2047 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2047 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2054 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2054 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2058 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2058 /* llhh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2063 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2068 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2068 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2074 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2080 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2086 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2092 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2098 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2104 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 2110 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2110 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2114 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2120 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2126 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2126 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2132 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2137 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2141 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2147 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2147 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2151 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2151 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2156 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2156 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2161 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2161 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2167 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2167 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2173 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2173 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2180 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2180 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2186 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2186 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2193 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2193 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2200 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2200 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2207 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2207 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2214 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2214 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2222 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2222 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2229 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2229 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2237 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2237 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2245 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2245 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2252 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2252 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2258 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2264 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2271 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2278 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2286 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2293 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2301 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2309 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2317 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2325 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2334 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2342 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2351 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2360 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2368 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2375 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2375 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2380 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2380 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2386 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2386 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2391 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2391 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2397 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2397 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2403 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2403 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2409 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2409 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2415 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2415 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2422 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2422 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2428 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2428 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2435 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2435 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2442 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2442 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2448 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2448 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2453 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2458 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2464 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2470 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2477 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2483 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2490 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2497 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2504 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2511 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2519 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2526 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2534 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2542 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2549 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2555 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2561 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2567 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2567 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2573 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2578 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2582 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2588 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2591 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2591 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2595 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2595 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 2599 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2599 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2604 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2610 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2615 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2615 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 2618 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2624 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2630 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2630 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2634 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2634 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2639 /* ltgfr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2645 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2650 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2654 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2660 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2660 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2665 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2665 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2671 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2671 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2676 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2676 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2682 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2686 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2686 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 2689 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2694 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 2699 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2704 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2704 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2709 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2715 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2715 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2720 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2726 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2726 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2730 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2735 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2735 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2740 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2740 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2746 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2746 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2751 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2757 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2762 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2762 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2765 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2769 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2769 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2773 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2773 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 2777 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2777 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 2782 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2782 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 2785 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2785 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2790 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2796 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2796 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2801 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2807 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2812 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2812 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2816 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2816 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2821 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2827 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2827 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2833 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2838 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2842 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2842 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2846 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2846 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2850 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2856 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2862 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2867 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2871 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2876 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2881 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2886 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2886 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2891 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2891 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2897 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2897 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 2899 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2899 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2902 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2902 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 2905 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2909 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2914 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2917 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2922 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2927 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2932 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 2937 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2942 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 2947 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2951 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2954 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 2958 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2958 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 2961 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2961 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 2963 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2963 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2966 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2966 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 2969 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2973 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2978 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2981 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2986 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2991 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2996 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3001 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3006 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 3011 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3015 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3018 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3022 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3022 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3025 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3029 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3035 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 3041 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3041 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3048 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3048 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 3055 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3055 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3059 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3059 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3064 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3070 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3076 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3082 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3082 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 3084 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3084 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3088 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3093 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3093 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3097 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3102 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3102 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3105 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3105 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3109 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3109 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3114 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3118 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3123 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3123 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3126 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3126 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3130 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3130 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3133 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3133 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3137 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3137 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3142 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3148 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3153 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 3158 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3158 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3162 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3162 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3167 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 3173 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3173 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3179 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3184 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3190 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3190 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 3194 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3194 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3199 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3199 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3204 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3208 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3213 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3213 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 3217 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3217 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3222 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3228 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3228 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3233 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3239 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3245 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3248 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3248 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 3252 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3252 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3257 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3257 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3262 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3266 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3266 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3270 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3270 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3275 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3275 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3280 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3285 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3285 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 3288 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3288 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3292 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3292 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3297 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3297 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3302 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3302 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 3306 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3306 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 3311 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3311 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 3315 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3315 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3320 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3320 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3325 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3325 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3329 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3329 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3335 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3335 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3339 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3339 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3344 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3344 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3350 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3350 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3355 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3355 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3360 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3360 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3365 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3365 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3371 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3371 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3377 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3377 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3384 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3384 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3391 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3391 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3399 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3399 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3406 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3406 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3414 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3414 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3422 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3422 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3430 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3430 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3438 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3438 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3447 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3447 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3455 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3455 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3464 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3464 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3473 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3473 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3481 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3481 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3488 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3488 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3494 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3494 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3501 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3501 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3507 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3507 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3514 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3514 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3521 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3521 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3528 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3528 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3535 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3535 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3543 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3543 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3550 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3550 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3558 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3558 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3566 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3566 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3573 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3573 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { 0, 3579 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3579 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3584 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3584 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 3589 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3589 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3595 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3595 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 3599 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3604 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3604 /* sy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3607 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3610 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3615 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3620 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3625 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 3630 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3634 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3634 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 3636 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 3636 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 3639 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3639 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3642 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3646 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3651 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3654 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3659 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3664 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3668 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3671 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3675 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3675 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+1083, Mnemonic,
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

