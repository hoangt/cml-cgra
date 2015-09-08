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
  Feature_HasV9 = (1ULL << 0),
  Feature_HasVIS = (1ULL << 1),
  Feature_HasVIS2 = (1ULL << 2),
  Feature_HasVIS3 = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasV9: return "";
  case Feature_HasVIS: return "";
  case Feature_HasVIS2: return "";
  case Feature_HasVIS3: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, uint64_t Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 2 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddc", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
            Mnemonic = "addx";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubc", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
            Mnemonic = "subx";
          return;
        }
        break;
      case 6:	 // 3 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddccc", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
            Mnemonic = "addxcc";
          return;
        case 'r':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "eturn", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
            Mnemonic = "rett";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubccc", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
            Mnemonic = "subxcc";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 2 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddc", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
        Mnemonic = "addx";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubc", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
        Mnemonic = "subx";
      return;
    }
    break;
  case 6:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddccc", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
        Mnemonic = "addxcc";
      return;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "eturn", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
        Mnemonic = "rett";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubccc", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
        Mnemonic = "subxcc";
      return;
    }
    break;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_imm_8,
  CVT_imm_13,
  CVT_imm_5,
  CVT_imm_1,
  CVT_imm_10,
  CVT_imm_11,
  CVT_imm_12,
  CVT_imm_3,
  CVT_imm_2,
  CVT_imm_4,
  CVT_imm_0,
  CVT_imm_9,
  CVT_imm_6,
  CVT_imm_14,
  CVT_imm_15,
  CVT_imm_7,
  CVT_regO7,
  CVT_95_addMEMriOperands,
  CVT_95_addMEMrrOperands,
  CVT_regFCC0,
  CVT_regG0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_2__Reg1_0__Reg1_1,
  Convert__Reg1_2__Reg1_0__Imm1_1,
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_2__Imm1_0,
  Convert__Imm1_3__Imm1_0,
  Convert__Imm1_4__Imm1_0,
  Convert__Imm1_0,
  Convert__Imm1_0__imm_8,
  Convert__Imm1_1__imm_8,
  Convert__Imm1_2__imm_8,
  Convert__Imm1_3__imm_8,
  Convert__Imm1_0__imm_13,
  Convert__Imm1_1__imm_13,
  Convert__Imm1_2__imm_13,
  Convert__Imm1_3__imm_13,
  Convert__Imm1_0__imm_5,
  Convert__Imm1_1__imm_5,
  Convert__Imm1_2__imm_5,
  Convert__Imm1_3__imm_5,
  Convert__Imm1_0__imm_1,
  Convert__Imm1_1__imm_1,
  Convert__Imm1_2__imm_1,
  Convert__Imm1_3__imm_1,
  Convert__Imm1_0__imm_10,
  Convert__Imm1_1__imm_10,
  Convert__Imm1_2__imm_10,
  Convert__Imm1_3__imm_10,
  Convert__Imm1_0__imm_11,
  Convert__Imm1_1__imm_11,
  Convert__Imm1_2__imm_11,
  Convert__Imm1_3__imm_11,
  Convert__Imm1_0__imm_12,
  Convert__Imm1_1__imm_12,
  Convert__Imm1_2__imm_12,
  Convert__Imm1_3__imm_12,
  Convert__Imm1_0__imm_3,
  Convert__Imm1_1__imm_3,
  Convert__Imm1_2__imm_3,
  Convert__Imm1_3__imm_3,
  Convert__Imm1_0__imm_2,
  Convert__Imm1_1__imm_2,
  Convert__Imm1_2__imm_2,
  Convert__Imm1_3__imm_2,
  Convert__Imm1_0__imm_4,
  Convert__Imm1_1__imm_4,
  Convert__Imm1_2__imm_4,
  Convert__Imm1_3__imm_4,
  Convert__Imm1_0__imm_0,
  Convert__Imm1_1__imm_0,
  Convert__Imm1_2__imm_0,
  Convert__Imm1_3__imm_0,
  Convert__Imm1_0__imm_9,
  Convert__Imm1_1__imm_9,
  Convert__Imm1_2__imm_9,
  Convert__Imm1_3__imm_9,
  Convert__Imm1_0__imm_6,
  Convert__Imm1_1__imm_6,
  Convert__Imm1_2__imm_6,
  Convert__Imm1_3__imm_6,
  Convert__Imm1_0__imm_14,
  Convert__Imm1_1__imm_14,
  Convert__Imm1_2__imm_14,
  Convert__Imm1_3__imm_14,
  Convert__Reg1_0__Imm1_1,
  Convert__Reg1_1__Imm1_2,
  Convert__Reg1_2__Imm1_3,
  Convert__Imm1_0__imm_15,
  Convert__Imm1_1__imm_15,
  Convert__Imm1_2__imm_15,
  Convert__Imm1_3__imm_15,
  Convert__Imm1_0__imm_7,
  Convert__Imm1_1__imm_7,
  Convert__Imm1_2__imm_7,
  Convert__Imm1_3__imm_7,
  Convert__regO7__MEMri2_0,
  Convert__regO7__MEMrr2_0,
  Convert__Reg1_4__Reg1_1__Reg1_3__Tie0,
  Convert__Reg1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_1__Reg1_0,
  Convert__Imm1_2__Imm1_0__Reg1_1,
  Convert__Imm1_3__Imm1_0__Reg1_2,
  Convert__Imm1_4__Imm1_0__Reg1_3,
  Convert__Imm1_1__imm_0__Reg1_0,
  Convert__Imm1_2__imm_0__Reg1_1,
  Convert__Imm1_3__imm_0__Reg1_2,
  Convert__Imm1_1__imm_9__Reg1_0,
  Convert__Imm1_2__imm_9__Reg1_1,
  Convert__Imm1_3__imm_9__Reg1_2,
  Convert__Imm1_1__imm_6__Reg1_0,
  Convert__Imm1_2__imm_6__Reg1_1,
  Convert__Imm1_3__imm_6__Reg1_2,
  Convert__Imm1_1__imm_11__Reg1_0,
  Convert__Imm1_2__imm_11__Reg1_1,
  Convert__Imm1_3__imm_11__Reg1_2,
  Convert__Imm1_1__imm_4__Reg1_0,
  Convert__Imm1_2__imm_4__Reg1_1,
  Convert__Imm1_3__imm_4__Reg1_2,
  Convert__Imm1_1__imm_13__Reg1_0,
  Convert__Imm1_2__imm_13__Reg1_1,
  Convert__Imm1_3__imm_13__Reg1_2,
  Convert__Imm1_1__imm_2__Reg1_0,
  Convert__Imm1_2__imm_2__Reg1_1,
  Convert__Imm1_3__imm_2__Reg1_2,
  Convert__Imm1_1__imm_8__Reg1_0,
  Convert__Imm1_2__imm_8__Reg1_1,
  Convert__Imm1_3__imm_8__Reg1_2,
  Convert__Imm1_1__imm_1__Reg1_0,
  Convert__Imm1_2__imm_1__Reg1_1,
  Convert__Imm1_3__imm_1__Reg1_2,
  Convert__Imm1_1__imm_15__Reg1_0,
  Convert__Imm1_2__imm_15__Reg1_1,
  Convert__Imm1_3__imm_15__Reg1_2,
  Convert__Imm1_1__imm_7__Reg1_0,
  Convert__Imm1_2__imm_7__Reg1_1,
  Convert__Imm1_3__imm_7__Reg1_2,
  Convert__Imm1_1__imm_10__Reg1_0,
  Convert__Imm1_2__imm_10__Reg1_1,
  Convert__Imm1_3__imm_10__Reg1_2,
  Convert__Imm1_1__imm_5__Reg1_0,
  Convert__Imm1_2__imm_5__Reg1_1,
  Convert__Imm1_3__imm_5__Reg1_2,
  Convert__Imm1_1__imm_12__Reg1_0,
  Convert__Imm1_2__imm_12__Reg1_1,
  Convert__Imm1_3__imm_12__Reg1_2,
  Convert__Imm1_1__imm_3__Reg1_0,
  Convert__Imm1_2__imm_3__Reg1_1,
  Convert__Imm1_3__imm_3__Reg1_2,
  Convert__Imm1_1__imm_14__Reg1_0,
  Convert__Imm1_2__imm_14__Reg1_1,
  Convert__Imm1_3__imm_14__Reg1_2,
  Convert__regFCC0__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert_NoOperands,
  Convert__Reg1_3__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_8,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_5,
  Convert__Reg1_2__Reg1_1__Tie0__imm_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_9,
  Convert__Reg1_2__Reg1_1__Tie0__imm_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_6,
  Convert__Reg1_2__Reg1_1__Tie0__imm_11,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_11,
  Convert__Reg1_2__Reg1_1__Tie0__imm_12,
  Convert__Reg1_2__Reg1_1__Tie0__imm_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_4,
  Convert__Reg1_2__Reg1_1__Tie0__imm_2,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_4,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_2,
  Convert__Reg1_2__Reg1_1__Tie0__imm_0,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_8,
  Convert__Reg1_2__Reg1_1__Tie0__imm_9,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_1,
  Convert__Reg1_2__Reg1_1__Tie0__imm_6,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_14,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_7,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_5,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_12,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_14,
  Convert__Reg1_2__Reg1_1__Tie0__imm_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_7,
  Convert__Reg1_0__Tie0,
  Convert__regG0__MEMri2_0,
  Convert__regG0__MEMrr2_0,
  Convert__Reg1_1__MEMri2_0,
  Convert__Reg1_1__MEMrr2_0,
  Convert__Reg1_3__MEMri2_1,
  Convert__Reg1_3__MEMrr2_1,
  Convert__Reg1_1__regG0__Reg1_0,
  Convert__Reg1_1__regG0__Imm1_0,
  Convert__Reg1_3__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_8,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_5,
  Convert__Reg1_2__Imm1_1__Tie0__imm_1,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_9,
  Convert__Reg1_2__Imm1_1__Tie0__imm_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_6,
  Convert__Reg1_2__Imm1_1__Tie0__imm_11,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_11,
  Convert__Reg1_2__Imm1_1__Tie0__imm_12,
  Convert__Reg1_2__Imm1_1__Tie0__imm_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_4,
  Convert__Reg1_2__Imm1_1__Tie0__imm_2,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_4,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_2,
  Convert__Reg1_2__Imm1_1__Tie0__imm_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_8,
  Convert__Reg1_2__Imm1_1__Tie0__imm_9,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_1,
  Convert__Reg1_2__Imm1_1__Tie0__imm_6,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_14,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_7,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_5,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_12,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_14,
  Convert__Reg1_2__Imm1_1__Tie0__imm_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_7,
  Convert__Reg1_1,
  Convert__regG0__regG0__regG0,
  Convert__imm_8,
  Convert__MEMri2_0,
  Convert__MEMrr2_0,
  Convert__Reg1_1__Imm1_0,
  Convert__MEMri2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0,
  Convert__Reg1_3__MEMri2_1__Tie0,
  Convert__Reg1_3__MEMrr2_1__Tie0,
  Convert__Reg1_2__Reg1_4__Imm1_0,
  Convert__Reg1_2__Imm1_4__Imm1_0,
  Convert__regG0__Reg1_0__imm_8,
  Convert__regG0__Imm1_0__imm_8,
  Convert__regG0__Reg1_1__imm_8,
  Convert__regG0__Imm1_1__imm_8,
  Convert__Reg1_0__Reg1_2__imm_8,
  Convert__Reg1_0__Imm1_2__imm_8,
  Convert__Reg1_1__Reg1_3__imm_8,
  Convert__Reg1_1__Imm1_3__imm_8,
  Convert__regG0__Reg1_0__imm_13,
  Convert__regG0__Imm1_0__imm_13,
  Convert__regG0__Reg1_1__imm_13,
  Convert__regG0__Imm1_1__imm_13,
  Convert__Reg1_0__Reg1_2__imm_13,
  Convert__Reg1_0__Imm1_2__imm_13,
  Convert__Reg1_1__Reg1_3__imm_13,
  Convert__Reg1_1__Imm1_3__imm_13,
  Convert__regG0__Reg1_0__imm_5,
  Convert__regG0__Imm1_0__imm_5,
  Convert__regG0__Reg1_1__imm_5,
  Convert__regG0__Imm1_1__imm_5,
  Convert__Reg1_0__Reg1_2__imm_5,
  Convert__Reg1_0__Imm1_2__imm_5,
  Convert__Reg1_1__Reg1_3__imm_5,
  Convert__Reg1_1__Imm1_3__imm_5,
  Convert__regG0__Reg1_0__imm_1,
  Convert__regG0__Imm1_0__imm_1,
  Convert__regG0__Reg1_1__imm_1,
  Convert__regG0__Imm1_1__imm_1,
  Convert__Reg1_0__Reg1_2__imm_1,
  Convert__Reg1_0__Imm1_2__imm_1,
  Convert__Reg1_1__Reg1_3__imm_1,
  Convert__Reg1_1__Imm1_3__imm_1,
  Convert__regG0__Reg1_0__imm_10,
  Convert__regG0__Imm1_0__imm_10,
  Convert__regG0__Reg1_1__imm_10,
  Convert__regG0__Imm1_1__imm_10,
  Convert__Reg1_0__Reg1_2__imm_10,
  Convert__Reg1_0__Imm1_2__imm_10,
  Convert__Reg1_1__Reg1_3__imm_10,
  Convert__Reg1_1__Imm1_3__imm_10,
  Convert__regG0__Reg1_0__imm_11,
  Convert__regG0__Imm1_0__imm_11,
  Convert__regG0__Reg1_1__imm_11,
  Convert__regG0__Imm1_1__imm_11,
  Convert__Reg1_0__Reg1_2__imm_11,
  Convert__Reg1_0__Imm1_2__imm_11,
  Convert__Reg1_1__Reg1_3__imm_11,
  Convert__Reg1_1__Imm1_3__imm_11,
  Convert__regG0__Reg1_0__imm_12,
  Convert__regG0__Imm1_0__imm_12,
  Convert__regG0__Reg1_1__imm_12,
  Convert__regG0__Imm1_1__imm_12,
  Convert__Reg1_0__Reg1_2__imm_12,
  Convert__Reg1_0__Imm1_2__imm_12,
  Convert__Reg1_1__Reg1_3__imm_12,
  Convert__Reg1_1__Imm1_3__imm_12,
  Convert__regG0__Reg1_0__imm_3,
  Convert__regG0__Imm1_0__imm_3,
  Convert__regG0__Reg1_1__imm_3,
  Convert__regG0__Imm1_1__imm_3,
  Convert__Reg1_0__Reg1_2__imm_3,
  Convert__Reg1_0__Imm1_2__imm_3,
  Convert__Reg1_1__Reg1_3__imm_3,
  Convert__Reg1_1__Imm1_3__imm_3,
  Convert__regG0__Reg1_0__imm_2,
  Convert__regG0__Imm1_0__imm_2,
  Convert__regG0__Reg1_1__imm_2,
  Convert__regG0__Imm1_1__imm_2,
  Convert__Reg1_0__Reg1_2__imm_2,
  Convert__Reg1_0__Imm1_2__imm_2,
  Convert__Reg1_1__Reg1_3__imm_2,
  Convert__Reg1_1__Imm1_3__imm_2,
  Convert__regG0__Reg1_0__imm_4,
  Convert__regG0__Imm1_0__imm_4,
  Convert__regG0__Reg1_1__imm_4,
  Convert__regG0__Imm1_1__imm_4,
  Convert__Reg1_0__Reg1_2__imm_4,
  Convert__Reg1_0__Imm1_2__imm_4,
  Convert__Reg1_1__Reg1_3__imm_4,
  Convert__Reg1_1__Imm1_3__imm_4,
  Convert__regG0__Reg1_0__imm_0,
  Convert__regG0__Imm1_0__imm_0,
  Convert__regG0__Reg1_1__imm_0,
  Convert__regG0__Imm1_1__imm_0,
  Convert__Reg1_0__Reg1_2__imm_0,
  Convert__Reg1_0__Imm1_2__imm_0,
  Convert__Reg1_1__Reg1_3__imm_0,
  Convert__Reg1_1__Imm1_3__imm_0,
  Convert__regG0__Reg1_0__imm_9,
  Convert__regG0__Imm1_0__imm_9,
  Convert__regG0__Reg1_1__imm_9,
  Convert__regG0__Imm1_1__imm_9,
  Convert__Reg1_0__Reg1_2__imm_9,
  Convert__Reg1_0__Imm1_2__imm_9,
  Convert__Reg1_1__Reg1_3__imm_9,
  Convert__Reg1_1__Imm1_3__imm_9,
  Convert__regG0__Reg1_0__imm_6,
  Convert__regG0__Imm1_0__imm_6,
  Convert__regG0__Reg1_1__imm_6,
  Convert__regG0__Imm1_1__imm_6,
  Convert__Reg1_0__Reg1_2__imm_6,
  Convert__Reg1_0__Imm1_2__imm_6,
  Convert__Reg1_1__Reg1_3__imm_6,
  Convert__Reg1_1__Imm1_3__imm_6,
  Convert__regG0__Reg1_0__imm_14,
  Convert__regG0__Imm1_0__imm_14,
  Convert__regG0__Reg1_1__imm_14,
  Convert__regG0__Imm1_1__imm_14,
  Convert__Reg1_0__Reg1_2__imm_14,
  Convert__Reg1_0__Imm1_2__imm_14,
  Convert__Reg1_1__Reg1_3__imm_14,
  Convert__Reg1_1__Imm1_3__imm_14,
  Convert__regG0__Reg1_0__imm_15,
  Convert__regG0__Imm1_0__imm_15,
  Convert__regG0__Reg1_1__imm_15,
  Convert__regG0__Imm1_1__imm_15,
  Convert__Reg1_0__Reg1_2__imm_15,
  Convert__Reg1_0__Imm1_2__imm_15,
  Convert__Reg1_1__Reg1_3__imm_15,
  Convert__Reg1_1__Imm1_3__imm_15,
  Convert__regG0__Reg1_0__imm_7,
  Convert__regG0__Imm1_0__imm_7,
  Convert__regG0__Reg1_1__imm_7,
  Convert__regG0__Imm1_1__imm_7,
  Convert__Reg1_0__Reg1_2__imm_7,
  Convert__Reg1_0__Imm1_2__imm_7,
  Convert__Reg1_1__Reg1_3__imm_7,
  Convert__Reg1_1__Imm1_3__imm_7,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_2__Reg1_0__Reg1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_2__Imm1_0
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_3__Imm1_0
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_4__Imm1_0
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_8
  { CVT_95_addImmOperands, 1, CVT_imm_8, 0, CVT_Done },
  // Convert__Imm1_1__imm_8
  { CVT_95_addImmOperands, 2, CVT_imm_8, 0, CVT_Done },
  // Convert__Imm1_2__imm_8
  { CVT_95_addImmOperands, 3, CVT_imm_8, 0, CVT_Done },
  // Convert__Imm1_3__imm_8
  { CVT_95_addImmOperands, 4, CVT_imm_8, 0, CVT_Done },
  // Convert__Imm1_0__imm_13
  { CVT_95_addImmOperands, 1, CVT_imm_13, 0, CVT_Done },
  // Convert__Imm1_1__imm_13
  { CVT_95_addImmOperands, 2, CVT_imm_13, 0, CVT_Done },
  // Convert__Imm1_2__imm_13
  { CVT_95_addImmOperands, 3, CVT_imm_13, 0, CVT_Done },
  // Convert__Imm1_3__imm_13
  { CVT_95_addImmOperands, 4, CVT_imm_13, 0, CVT_Done },
  // Convert__Imm1_0__imm_5
  { CVT_95_addImmOperands, 1, CVT_imm_5, 0, CVT_Done },
  // Convert__Imm1_1__imm_5
  { CVT_95_addImmOperands, 2, CVT_imm_5, 0, CVT_Done },
  // Convert__Imm1_2__imm_5
  { CVT_95_addImmOperands, 3, CVT_imm_5, 0, CVT_Done },
  // Convert__Imm1_3__imm_5
  { CVT_95_addImmOperands, 4, CVT_imm_5, 0, CVT_Done },
  // Convert__Imm1_0__imm_1
  { CVT_95_addImmOperands, 1, CVT_imm_1, 0, CVT_Done },
  // Convert__Imm1_1__imm_1
  { CVT_95_addImmOperands, 2, CVT_imm_1, 0, CVT_Done },
  // Convert__Imm1_2__imm_1
  { CVT_95_addImmOperands, 3, CVT_imm_1, 0, CVT_Done },
  // Convert__Imm1_3__imm_1
  { CVT_95_addImmOperands, 4, CVT_imm_1, 0, CVT_Done },
  // Convert__Imm1_0__imm_10
  { CVT_95_addImmOperands, 1, CVT_imm_10, 0, CVT_Done },
  // Convert__Imm1_1__imm_10
  { CVT_95_addImmOperands, 2, CVT_imm_10, 0, CVT_Done },
  // Convert__Imm1_2__imm_10
  { CVT_95_addImmOperands, 3, CVT_imm_10, 0, CVT_Done },
  // Convert__Imm1_3__imm_10
  { CVT_95_addImmOperands, 4, CVT_imm_10, 0, CVT_Done },
  // Convert__Imm1_0__imm_11
  { CVT_95_addImmOperands, 1, CVT_imm_11, 0, CVT_Done },
  // Convert__Imm1_1__imm_11
  { CVT_95_addImmOperands, 2, CVT_imm_11, 0, CVT_Done },
  // Convert__Imm1_2__imm_11
  { CVT_95_addImmOperands, 3, CVT_imm_11, 0, CVT_Done },
  // Convert__Imm1_3__imm_11
  { CVT_95_addImmOperands, 4, CVT_imm_11, 0, CVT_Done },
  // Convert__Imm1_0__imm_12
  { CVT_95_addImmOperands, 1, CVT_imm_12, 0, CVT_Done },
  // Convert__Imm1_1__imm_12
  { CVT_95_addImmOperands, 2, CVT_imm_12, 0, CVT_Done },
  // Convert__Imm1_2__imm_12
  { CVT_95_addImmOperands, 3, CVT_imm_12, 0, CVT_Done },
  // Convert__Imm1_3__imm_12
  { CVT_95_addImmOperands, 4, CVT_imm_12, 0, CVT_Done },
  // Convert__Imm1_0__imm_3
  { CVT_95_addImmOperands, 1, CVT_imm_3, 0, CVT_Done },
  // Convert__Imm1_1__imm_3
  { CVT_95_addImmOperands, 2, CVT_imm_3, 0, CVT_Done },
  // Convert__Imm1_2__imm_3
  { CVT_95_addImmOperands, 3, CVT_imm_3, 0, CVT_Done },
  // Convert__Imm1_3__imm_3
  { CVT_95_addImmOperands, 4, CVT_imm_3, 0, CVT_Done },
  // Convert__Imm1_0__imm_2
  { CVT_95_addImmOperands, 1, CVT_imm_2, 0, CVT_Done },
  // Convert__Imm1_1__imm_2
  { CVT_95_addImmOperands, 2, CVT_imm_2, 0, CVT_Done },
  // Convert__Imm1_2__imm_2
  { CVT_95_addImmOperands, 3, CVT_imm_2, 0, CVT_Done },
  // Convert__Imm1_3__imm_2
  { CVT_95_addImmOperands, 4, CVT_imm_2, 0, CVT_Done },
  // Convert__Imm1_0__imm_4
  { CVT_95_addImmOperands, 1, CVT_imm_4, 0, CVT_Done },
  // Convert__Imm1_1__imm_4
  { CVT_95_addImmOperands, 2, CVT_imm_4, 0, CVT_Done },
  // Convert__Imm1_2__imm_4
  { CVT_95_addImmOperands, 3, CVT_imm_4, 0, CVT_Done },
  // Convert__Imm1_3__imm_4
  { CVT_95_addImmOperands, 4, CVT_imm_4, 0, CVT_Done },
  // Convert__Imm1_0__imm_0
  { CVT_95_addImmOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_1__imm_0
  { CVT_95_addImmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_2__imm_0
  { CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_3__imm_0
  { CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_0__imm_9
  { CVT_95_addImmOperands, 1, CVT_imm_9, 0, CVT_Done },
  // Convert__Imm1_1__imm_9
  { CVT_95_addImmOperands, 2, CVT_imm_9, 0, CVT_Done },
  // Convert__Imm1_2__imm_9
  { CVT_95_addImmOperands, 3, CVT_imm_9, 0, CVT_Done },
  // Convert__Imm1_3__imm_9
  { CVT_95_addImmOperands, 4, CVT_imm_9, 0, CVT_Done },
  // Convert__Imm1_0__imm_6
  { CVT_95_addImmOperands, 1, CVT_imm_6, 0, CVT_Done },
  // Convert__Imm1_1__imm_6
  { CVT_95_addImmOperands, 2, CVT_imm_6, 0, CVT_Done },
  // Convert__Imm1_2__imm_6
  { CVT_95_addImmOperands, 3, CVT_imm_6, 0, CVT_Done },
  // Convert__Imm1_3__imm_6
  { CVT_95_addImmOperands, 4, CVT_imm_6, 0, CVT_Done },
  // Convert__Imm1_0__imm_14
  { CVT_95_addImmOperands, 1, CVT_imm_14, 0, CVT_Done },
  // Convert__Imm1_1__imm_14
  { CVT_95_addImmOperands, 2, CVT_imm_14, 0, CVT_Done },
  // Convert__Imm1_2__imm_14
  { CVT_95_addImmOperands, 3, CVT_imm_14, 0, CVT_Done },
  // Convert__Imm1_3__imm_14
  { CVT_95_addImmOperands, 4, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__Imm1_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_0__imm_15
  { CVT_95_addImmOperands, 1, CVT_imm_15, 0, CVT_Done },
  // Convert__Imm1_1__imm_15
  { CVT_95_addImmOperands, 2, CVT_imm_15, 0, CVT_Done },
  // Convert__Imm1_2__imm_15
  { CVT_95_addImmOperands, 3, CVT_imm_15, 0, CVT_Done },
  // Convert__Imm1_3__imm_15
  { CVT_95_addImmOperands, 4, CVT_imm_15, 0, CVT_Done },
  // Convert__Imm1_0__imm_7
  { CVT_95_addImmOperands, 1, CVT_imm_7, 0, CVT_Done },
  // Convert__Imm1_1__imm_7
  { CVT_95_addImmOperands, 2, CVT_imm_7, 0, CVT_Done },
  // Convert__Imm1_2__imm_7
  { CVT_95_addImmOperands, 3, CVT_imm_7, 0, CVT_Done },
  // Convert__Imm1_3__imm_7
  { CVT_95_addImmOperands, 4, CVT_imm_7, 0, CVT_Done },
  // Convert__regO7__MEMri2_0
  { CVT_regO7, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regO7__MEMrr2_0
  { CVT_regO7, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_4__Reg1_1__Reg1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__Imm1_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__Imm1_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_4__Imm1_0__Reg1_3
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_95_Reg, 4, CVT_Done },
  // Convert__Imm1_1__imm_0__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_9__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_9, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_9__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_9, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_9__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_9, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_6__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_6, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_6__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_6, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_6__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_6, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_11__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_11, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_11__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_11, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_11__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_11, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_4__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_4, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_4__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_4, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_4__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_4, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_13__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_13, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_13__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_13, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_13__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_13, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_2__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_2__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_2__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_2, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_8__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_8, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_8__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_8, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_8__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_8, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_1__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_1__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_1__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_1, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_15__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_15, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_15__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_15, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_15__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_15, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_7__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_7, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_7__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_7, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_7__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_7, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_10__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_10, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_10__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_10, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_10__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_10, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_5__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_5, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_5__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_5, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_5__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_5, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_12__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_12, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_12__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_12, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_12__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_12, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_3__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_3__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_3__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_3, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_14__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_14, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_14__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_14, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_14__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_14, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__regFCC0__Reg1_0__Reg1_1
  { CVT_regFCC0, 0, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_3__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_8
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_13
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_5
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_1
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_10
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_11
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_12
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_3
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_2
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_4
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_0
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_9
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_6
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_14
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_15
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_7
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__regG0__MEMri2_0
  { CVT_regG0, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regG0__MEMrr2_0
  { CVT_regG0, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMri2_0
  { CVT_95_Reg, 2, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMrr2_0
  { CVT_95_Reg, 2, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_3__MEMri2_1
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_1__regG0__Reg1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Imm1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_8
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_13
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_5
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_1
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_10
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_11
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_12
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_2
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_4
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_9
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_6
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_14
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_15
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_7
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 2, CVT_Done },
  // Convert__regG0__regG0__regG0
  { CVT_regG0, 0, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__imm_8
  { CVT_imm_8, 0, CVT_Done },
  // Convert__MEMri2_0
  { CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__MEMrr2_0
  { CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__MEMri2_2__Reg1_0
  { CVT_95_addMEMriOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_3__MEMri2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regG0__Reg1_0__imm_8
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_8, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_8, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_8
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_8, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_8
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_8
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_8
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_8
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_8, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_13
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_13, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_13, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_13
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_13, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_13
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_13
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_13
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_13, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_13
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_13, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_5
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_5, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_5, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_5
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_5, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_5
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_5
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_5, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_1
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_1, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_1, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_1
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_1, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_1
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_1, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_1
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_1, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_10
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_10, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_10, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_10
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_10, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_10
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_10
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_10
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_10, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_10, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_11
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_11, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_11, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_11
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_11, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_11
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_11
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_11
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_11, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_11, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_12
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_12, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_12, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_12
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_12, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_12
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_12
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_12
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_12, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_12, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_3
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_3, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_3, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_3
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_3, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_3
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_3, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_3, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_2
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_2, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_2, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_2
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_2, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_2
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_2, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_4
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_4, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_4, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_4
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_4, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_4
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_4
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_4, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_4
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_4, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_9
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_9, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_9, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_9
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_9, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_9
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_9
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_9
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_9, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_9, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_6
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_6, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_6, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_6
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_6, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_6
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_6
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_6, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_6
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_6, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_14
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_14, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_14, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_14
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_14, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_14
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_14
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_14
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_14, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_14
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_14, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_15
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_15, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_15, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_15
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_15, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_15
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_15
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_15
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_15, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_15
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_15, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_7
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_7, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_7, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_7
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_7, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_7
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_7
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_7, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_7
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_7, 0, CVT_Done },
};

void SparcAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_Reg:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_imm_8:
      Inst.addOperand(MCOperand::CreateImm(8));
      break;
    case CVT_imm_13:
      Inst.addOperand(MCOperand::CreateImm(13));
      break;
    case CVT_imm_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    case CVT_imm_1:
      Inst.addOperand(MCOperand::CreateImm(1));
      break;
    case CVT_imm_10:
      Inst.addOperand(MCOperand::CreateImm(10));
      break;
    case CVT_imm_11:
      Inst.addOperand(MCOperand::CreateImm(11));
      break;
    case CVT_imm_12:
      Inst.addOperand(MCOperand::CreateImm(12));
      break;
    case CVT_imm_3:
      Inst.addOperand(MCOperand::CreateImm(3));
      break;
    case CVT_imm_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_imm_9:
      Inst.addOperand(MCOperand::CreateImm(9));
      break;
    case CVT_imm_6:
      Inst.addOperand(MCOperand::CreateImm(6));
      break;
    case CVT_imm_14:
      Inst.addOperand(MCOperand::CreateImm(14));
      break;
    case CVT_imm_15:
      Inst.addOperand(MCOperand::CreateImm(15));
      break;
    case CVT_imm_7:
      Inst.addOperand(MCOperand::CreateImm(7));
      break;
    case CVT_regO7:
      Inst.addOperand(MCOperand::CreateReg(SP::O7));
      break;
    case CVT_95_addMEMriOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addMEMriOperands(Inst, 2);
      break;
    case CVT_95_addMEMrrOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addMEMrrOperands(Inst, 2);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::CreateReg(SP::FCC0));
      break;
    case CVT_regG0:
      Inst.addOperand(MCOperand::CreateReg(SP::G0));
      break;
    }
  }
}

void SparcAsmParser::
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
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_11:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regO7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMEMriOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMEMrrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regG0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
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
  MCK__PCT_fcc0, // '%fcc0'
  MCK__PCT_icc, // '%icc'
  MCK__PCT_xcc, // '%xcc'
  MCK__PCT_y, // '%y'
  MCK__43_, // '+'
  MCK_3, // '3'
  MCK_5, // '5'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_a, // 'a'
  MCK_pn, // 'pn'
  MCK_pt, // 'pt'
  MCK_FCCRegs, // register class 'FCCRegs'
  MCK_IntRegs, // register class 'IntRegs,I64Regs'
  MCK_FPRegs, // register class 'FPRegs'
  MCK_Reg3, // derived register class
  MCK_DFPRegs, // register class 'DFPRegs'
  MCK_Reg5, // derived register class
  MCK_QFPRegs, // register class 'QFPRegs'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_MEMri, // user defined class 'SparcMEMriAsmOperand'
  MCK_MEMrr, // user defined class 'SparcMEMrrAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case 'a':	 // 1 string to match.
      return MCK_a;	 // "a"
    }
    break;
  case 2:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '%':	 // 1 string to match.
      if (Name[1] != 'y')
        break;
      return MCK__PCT_y;	 // "%y"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        return MCK_pn;	 // "pn"
      case 't':	 // 1 string to match.
        return MCK_pt;	 // "pt"
      }
      break;
    }
    break;
  case 4:	 // 2 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2))
        break;
      return MCK__PCT_icc;	 // "%icc"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2))
        break;
      return MCK__PCT_xcc;	 // "%xcc"
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "%fcc0", 5))
      break;
    return MCK__PCT_fcc0;	 // "%fcc0"
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

  case MCK_Reg3:
    return B == MCK_DFPRegs;

  case MCK_Reg5:
    return B == MCK_QFPRegs;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SparcOperand &Operand = (SparcOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MEMri' class
  if (Kind == MCK_MEMri) {
    if (Operand.isMEMri())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MEMrr' class
  if (Kind == MCK_MEMrr) {
    if (Operand.isMEMrr())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Sparc::FCC0: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC1: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC2: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC3: OpKind = MCK_FCCRegs; break;
    case Sparc::G0: OpKind = MCK_IntRegs; break;
    case Sparc::G1: OpKind = MCK_IntRegs; break;
    case Sparc::G2: OpKind = MCK_IntRegs; break;
    case Sparc::G3: OpKind = MCK_IntRegs; break;
    case Sparc::G4: OpKind = MCK_IntRegs; break;
    case Sparc::G5: OpKind = MCK_IntRegs; break;
    case Sparc::G6: OpKind = MCK_IntRegs; break;
    case Sparc::G7: OpKind = MCK_IntRegs; break;
    case Sparc::O0: OpKind = MCK_IntRegs; break;
    case Sparc::O1: OpKind = MCK_IntRegs; break;
    case Sparc::O2: OpKind = MCK_IntRegs; break;
    case Sparc::O3: OpKind = MCK_IntRegs; break;
    case Sparc::O4: OpKind = MCK_IntRegs; break;
    case Sparc::O5: OpKind = MCK_IntRegs; break;
    case Sparc::O6: OpKind = MCK_IntRegs; break;
    case Sparc::O7: OpKind = MCK_IntRegs; break;
    case Sparc::L0: OpKind = MCK_IntRegs; break;
    case Sparc::L1: OpKind = MCK_IntRegs; break;
    case Sparc::L2: OpKind = MCK_IntRegs; break;
    case Sparc::L3: OpKind = MCK_IntRegs; break;
    case Sparc::L4: OpKind = MCK_IntRegs; break;
    case Sparc::L5: OpKind = MCK_IntRegs; break;
    case Sparc::L6: OpKind = MCK_IntRegs; break;
    case Sparc::L7: OpKind = MCK_IntRegs; break;
    case Sparc::I0: OpKind = MCK_IntRegs; break;
    case Sparc::I1: OpKind = MCK_IntRegs; break;
    case Sparc::I2: OpKind = MCK_IntRegs; break;
    case Sparc::I3: OpKind = MCK_IntRegs; break;
    case Sparc::I4: OpKind = MCK_IntRegs; break;
    case Sparc::I5: OpKind = MCK_IntRegs; break;
    case Sparc::I6: OpKind = MCK_IntRegs; break;
    case Sparc::I7: OpKind = MCK_IntRegs; break;
    case Sparc::F0: OpKind = MCK_FPRegs; break;
    case Sparc::F1: OpKind = MCK_FPRegs; break;
    case Sparc::F2: OpKind = MCK_FPRegs; break;
    case Sparc::F3: OpKind = MCK_FPRegs; break;
    case Sparc::F4: OpKind = MCK_FPRegs; break;
    case Sparc::F5: OpKind = MCK_FPRegs; break;
    case Sparc::F6: OpKind = MCK_FPRegs; break;
    case Sparc::F7: OpKind = MCK_FPRegs; break;
    case Sparc::F8: OpKind = MCK_FPRegs; break;
    case Sparc::F9: OpKind = MCK_FPRegs; break;
    case Sparc::F10: OpKind = MCK_FPRegs; break;
    case Sparc::F11: OpKind = MCK_FPRegs; break;
    case Sparc::F12: OpKind = MCK_FPRegs; break;
    case Sparc::F13: OpKind = MCK_FPRegs; break;
    case Sparc::F14: OpKind = MCK_FPRegs; break;
    case Sparc::F15: OpKind = MCK_FPRegs; break;
    case Sparc::F16: OpKind = MCK_FPRegs; break;
    case Sparc::F17: OpKind = MCK_FPRegs; break;
    case Sparc::F18: OpKind = MCK_FPRegs; break;
    case Sparc::F19: OpKind = MCK_FPRegs; break;
    case Sparc::F20: OpKind = MCK_FPRegs; break;
    case Sparc::F21: OpKind = MCK_FPRegs; break;
    case Sparc::F22: OpKind = MCK_FPRegs; break;
    case Sparc::F23: OpKind = MCK_FPRegs; break;
    case Sparc::F24: OpKind = MCK_FPRegs; break;
    case Sparc::F25: OpKind = MCK_FPRegs; break;
    case Sparc::F26: OpKind = MCK_FPRegs; break;
    case Sparc::F27: OpKind = MCK_FPRegs; break;
    case Sparc::F28: OpKind = MCK_FPRegs; break;
    case Sparc::F29: OpKind = MCK_FPRegs; break;
    case Sparc::F30: OpKind = MCK_FPRegs; break;
    case Sparc::F31: OpKind = MCK_FPRegs; break;
    case Sparc::D0: OpKind = MCK_Reg3; break;
    case Sparc::D1: OpKind = MCK_Reg3; break;
    case Sparc::D2: OpKind = MCK_Reg3; break;
    case Sparc::D3: OpKind = MCK_Reg3; break;
    case Sparc::D4: OpKind = MCK_Reg3; break;
    case Sparc::D5: OpKind = MCK_Reg3; break;
    case Sparc::D6: OpKind = MCK_Reg3; break;
    case Sparc::D7: OpKind = MCK_Reg3; break;
    case Sparc::D8: OpKind = MCK_Reg3; break;
    case Sparc::D9: OpKind = MCK_Reg3; break;
    case Sparc::D10: OpKind = MCK_Reg3; break;
    case Sparc::D11: OpKind = MCK_Reg3; break;
    case Sparc::D12: OpKind = MCK_Reg3; break;
    case Sparc::D13: OpKind = MCK_Reg3; break;
    case Sparc::D14: OpKind = MCK_Reg3; break;
    case Sparc::D15: OpKind = MCK_Reg3; break;
    case Sparc::D16: OpKind = MCK_DFPRegs; break;
    case Sparc::D17: OpKind = MCK_DFPRegs; break;
    case Sparc::D18: OpKind = MCK_DFPRegs; break;
    case Sparc::D19: OpKind = MCK_DFPRegs; break;
    case Sparc::D20: OpKind = MCK_DFPRegs; break;
    case Sparc::D21: OpKind = MCK_DFPRegs; break;
    case Sparc::D22: OpKind = MCK_DFPRegs; break;
    case Sparc::D23: OpKind = MCK_DFPRegs; break;
    case Sparc::D24: OpKind = MCK_DFPRegs; break;
    case Sparc::D25: OpKind = MCK_DFPRegs; break;
    case Sparc::D26: OpKind = MCK_DFPRegs; break;
    case Sparc::D27: OpKind = MCK_DFPRegs; break;
    case Sparc::D28: OpKind = MCK_DFPRegs; break;
    case Sparc::D29: OpKind = MCK_DFPRegs; break;
    case Sparc::D30: OpKind = MCK_DFPRegs; break;
    case Sparc::D31: OpKind = MCK_DFPRegs; break;
    case Sparc::Q0: OpKind = MCK_Reg5; break;
    case Sparc::Q1: OpKind = MCK_Reg5; break;
    case Sparc::Q2: OpKind = MCK_Reg5; break;
    case Sparc::Q3: OpKind = MCK_Reg5; break;
    case Sparc::Q4: OpKind = MCK_Reg5; break;
    case Sparc::Q5: OpKind = MCK_Reg5; break;
    case Sparc::Q6: OpKind = MCK_Reg5; break;
    case Sparc::Q7: OpKind = MCK_Reg5; break;
    case Sparc::Q8: OpKind = MCK_QFPRegs; break;
    case Sparc::Q9: OpKind = MCK_QFPRegs; break;
    case Sparc::Q10: OpKind = MCK_QFPRegs; break;
    case Sparc::Q11: OpKind = MCK_QFPRegs; break;
    case Sparc::Q12: OpKind = MCK_QFPRegs; break;
    case Sparc::Q13: OpKind = MCK_QFPRegs; break;
    case Sparc::Q14: OpKind = MCK_QFPRegs; break;
    case Sparc::Q15: OpKind = MCK_QFPRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SparcAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  if (((FB & Sparc::FeatureV9) != 0))
    Features |= Feature_HasV9;
  if (((FB & Sparc::FeatureVIS) != 0))
    Features |= Feature_HasVIS;
  if (((FB & Sparc::FeatureVIS2) != 0))
    Features |= Feature_HasVIS2;
  if (((FB & Sparc::FeatureVIS3) != 0))
    Features |= Feature_HasVIS3;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\005addcc\004addx\005addxc\006addxcc\007addxccc\talignaddr\nalig"
    "naddrl\003and\005andcc\004andn\006andncc\007array16\007array32\006array"
    "8\001b\002ba\003bcc\003bcs\002be\002bg\003bge\003bgu\002bl\003ble\004bl"
    "eu\005bmask\002bn\003bne\004bneg\004bpos\005brgez\004brgz\005brlez\004b"
    "rlz\004brnz\003brz\010bshuffle\003bvc\003bvs\004call\003cas\004casx\007"
    "cmask16\007cmask32\006cmask8\003cmp\006edge16\007edge16l\010edge16ln\007"
    "edge16n\006edge32\007edge32l\010edge32ln\007edge32n\005edge8\006edge8l\007"
    "edge8ln\006edge8n\005fabsd\005fabsq\005fabss\005faddd\005faddq\005fadds"
    "\nfaligndata\004fand\010fandnot1\tfandnot1s\010fandnot2\tfandnot2s\005f"
    "ands\002fb\003fba\003fbe\003fbg\004fbge\003fbl\004fble\004fblg\003fbn\004"
    "fbne\003fbo\003fbu\004fbue\004fbug\005fbuge\004fbul\005fbule\010fchksm1"
    "6\005fcmpd\006fcmped\006fcmpeq\010fcmpeq16\010fcmpeq32\006fcmpes\010fcm"
    "pgt16\010fcmpgt32\010fcmple16\010fcmple32\010fcmpne16\010fcmpne32\005fc"
    "mpq\005fcmps\005fdivd\005fdivq\005fdivs\006fdmulq\005fdtoi\005fdtoq\005"
    "fdtos\005fdtox\007fexpand\006fhaddd\006fhadds\006fhsubd\006fhsubs\005fi"
    "tod\005fitoq\005fitos\006flcmpd\006flcmps\006flushw\007fmean16\005fmovd"
    "\006fmovda\007fmovdcc\007fmovdcs\006fmovde\006fmovdg\007fmovdge\007fmov"
    "dgu\006fmovdl\007fmovdle\010fmovdleu\007fmovdlg\006fmovdn\007fmovdne\010"
    "fmovdneg\006fmovdo\010fmovdpos\006fmovdu\007fmovdue\007fmovdug\010fmovd"
    "uge\007fmovdul\010fmovdule\007fmovdvc\007fmovdvs\005fmovq\006fmovqa\007"
    "fmovqcc\007fmovqcs\006fmovqe\006fmovqg\007fmovqge\007fmovqgu\006fmovql\007"
    "fmovqle\010fmovqleu\007fmovqlg\006fmovqn\007fmovqne\010fmovqneg\006fmov"
    "qo\010fmovqpos\006fmovqu\007fmovque\007fmovqug\010fmovquge\007fmovqul\010"
    "fmovqule\007fmovqvc\007fmovqvs\tfmovrdgez\010fmovrdgz\tfmovrdlez\010fmo"
    "vrdlz\010fmovrdnz\007fmovrdz\tfmovrqgez\010fmovrqgz\tfmovrqlez\010fmovr"
    "qlz\010fmovrqnz\007fmovrqz\tfmovrsgez\010fmovrsgz\tfmovrslez\010fmovrsl"
    "z\010fmovrsnz\007fmovrsz\005fmovs\006fmovsa\007fmovscc\007fmovscs\006fm"
    "ovse\006fmovsg\007fmovsge\007fmovsgu\006fmovsl\007fmovsle\010fmovsleu\007"
    "fmovslg\006fmovsn\007fmovsne\010fmovsneg\006fmovso\010fmovspos\006fmovs"
    "u\007fmovsue\007fmovsug\010fmovsuge\007fmovsul\010fmovsule\007fmovsvc\007"
    "fmovsvs\nfmul8sux16\nfmul8ulx16\010fmul8x16\nfmul8x16al\nfmul8x16au\005"
    "fmuld\013fmuld8sux16\013fmuld8ulx16\005fmulq\005fmuls\006fnaddd\006fnad"
    "ds\005fnand\006fnands\005fnegd\005fnegq\005fnegs\007fnhaddd\007fnhadds\004"
    "fnor\005fnors\005fnot1\006fnot1s\005fnot2\006fnot2s\004fone\005fones\003"
    "for\007fornot1\010fornot1s\007fornot2\010fornot2s\004fors\007fpack16\007"
    "fpack32\010fpackfix\007fpadd16\010fpadd16s\007fpadd32\010fpadd32s\007fp"
    "add64\007fpmerge\007fpsub16\010fpsub16S\007fpsub32\010fpsub32S\005fqtod"
    "\005fqtoi\005fqtos\005fqtox\007fslas16\007fslas32\006fsll16\006fsll32\006"
    "fsmuld\006fsqrtd\006fsqrtq\006fsqrts\006fsra16\006fsra32\005fsrc1\006fs"
    "rc1s\005fsrc2\006fsrc2s\006fsrl16\006fsrl32\005fstod\005fstoi\005fstoq\005"
    "fstox\005fsubd\005fsubq\005fsubs\005fxnor\006fxnors\004fxor\005fxors\005"
    "fxtod\005fxtoq\005fxtos\005fzero\006fzeros\003jmp\004jmpl\002ld\003ldd\003"
    "ldq\004ldsb\004ldsh\004ldsw\004ldub\004lduh\003ldx\005lzcnt\006membar\003"
    "mov\004mova\005movcc\005movcs\007movdtox\004move\004movg\005movge\005mo"
    "vgu\004movl\005movle\006movleu\005movlg\004movn\005movne\006movneg\004m"
    "ovo\006movpos\007movrgez\006movrgz\007movrlez\006movrlz\006movrnz\005mo"
    "vrz\010movstosw\010movstouw\004movu\005movue\005movug\006movuge\005movu"
    "l\006movule\005movvc\005movvs\004mulx\003nop\002or\004orcc\003orn\005or"
    "ncc\005pdist\006pdistn\004popc\002rd\007restore\003ret\004retl\004rett\004"
    "save\004sdiv\006sdivcc\005sdivx\005sethi\010shutdown\004siam\003sll\004"
    "sllx\004smul\006smulcc\003sra\004srax\003srl\004srlx\002st\003stb\005st"
    "bar\003std\003sth\003stq\003stx\003sub\005subcc\004subx\006subxcc\004sw"
    "ap\001t\002ta\006taddcc\010taddcctv\003tcc\003tcs\002te\002tg\003tge\003"
    "tgu\002tl\003tle\004tleu\002tn\003tne\004tneg\004tpos\006tsubcc\010tsub"
    "cctv\003tvc\003tvs\004udiv\006udivcc\005udivx\004umul\006umulcc\007umul"
    "xhi\005unimp\002wr\005xmulx\007xmulxhi\004xnor\006xnorcc\003xor\005xorc"
    "c";

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
  { 0 /* add */, Sparc::ADDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 0 /* add */, Sparc::ADDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 4 /* addcc */, Sparc::ADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 4 /* addcc */, Sparc::ADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 10 /* addx */, Sparc::ADDCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 10 /* addx */, Sparc::ADDCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 15 /* addxc */, Sparc::ADDXC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, Sparc::ADDErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, Sparc::ADDEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 28 /* addxccc */, Sparc::ADDXCCC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 36 /* alignaddr */, Sparc::ALIGNADDR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 46 /* alignaddrl */, Sparc::ALIGNADDRL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, Sparc::ANDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, Sparc::ANDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 61 /* andcc */, Sparc::ANDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 61 /* andcc */, Sparc::ANDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 67 /* andn */, Sparc::ANDNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 67 /* andn */, Sparc::ANDNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 72 /* andncc */, Sparc::ANDNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 72 /* andncc */, Sparc::ANDNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 79 /* array16 */, Sparc::ARRAY16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 87 /* array32 */, Sparc::ARRAY32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 95 /* array8 */, Sparc::ARRAY8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 102 /* b */, Sparc::BCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICC, Convert__Imm1_2__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCC, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCA, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCA, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCNT, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCNT, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCANT, Convert__Imm1_4__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCANT, Convert__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BA, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 104 /* ba */, Sparc::BCOND, Convert__Imm1_0__imm_8, 0, { MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICC, Convert__Imm1_1__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCC, Convert__Imm1_1__imm_8, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BCONDA, Convert__Imm1_1__imm_8, 0, { MCK_a, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCA, Convert__Imm1_2__imm_8, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCA, Convert__Imm1_2__imm_8, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCNT, Convert__Imm1_2__imm_8, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCNT, Convert__Imm1_2__imm_8, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICC, Convert__Imm1_2__imm_8, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCC, Convert__Imm1_2__imm_8, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCANT, Convert__Imm1_3__imm_8, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCANT, Convert__Imm1_3__imm_8, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCA, Convert__Imm1_3__imm_8, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCA, Convert__Imm1_3__imm_8, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BCOND, Convert__Imm1_0__imm_13, 0, { MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICC, Convert__Imm1_1__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCC, Convert__Imm1_1__imm_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BCONDA, Convert__Imm1_1__imm_13, 0, { MCK_a, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCA, Convert__Imm1_2__imm_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCA, Convert__Imm1_2__imm_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCNT, Convert__Imm1_2__imm_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCNT, Convert__Imm1_2__imm_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICC, Convert__Imm1_2__imm_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCC, Convert__Imm1_2__imm_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCANT, Convert__Imm1_3__imm_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCANT, Convert__Imm1_3__imm_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCA, Convert__Imm1_3__imm_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCA, Convert__Imm1_3__imm_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BCOND, Convert__Imm1_0__imm_5, 0, { MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICC, Convert__Imm1_1__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCC, Convert__Imm1_1__imm_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BCONDA, Convert__Imm1_1__imm_5, 0, { MCK_a, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCA, Convert__Imm1_2__imm_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCA, Convert__Imm1_2__imm_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCNT, Convert__Imm1_2__imm_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCNT, Convert__Imm1_2__imm_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICC, Convert__Imm1_2__imm_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCC, Convert__Imm1_2__imm_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCANT, Convert__Imm1_3__imm_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCANT, Convert__Imm1_3__imm_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCA, Convert__Imm1_3__imm_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCA, Convert__Imm1_3__imm_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BCOND, Convert__Imm1_0__imm_1, 0, { MCK_Imm }, },
  { 115 /* be */, Sparc::BPICC, Convert__Imm1_1__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCC, Convert__Imm1_1__imm_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BCONDA, Convert__Imm1_1__imm_1, 0, { MCK_a, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCA, Convert__Imm1_2__imm_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCA, Convert__Imm1_2__imm_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCNT, Convert__Imm1_2__imm_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCNT, Convert__Imm1_2__imm_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICC, Convert__Imm1_2__imm_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCC, Convert__Imm1_2__imm_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCANT, Convert__Imm1_3__imm_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCANT, Convert__Imm1_3__imm_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCA, Convert__Imm1_3__imm_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCA, Convert__Imm1_3__imm_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BCOND, Convert__Imm1_0__imm_10, 0, { MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICC, Convert__Imm1_1__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCC, Convert__Imm1_1__imm_10, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BCONDA, Convert__Imm1_1__imm_10, 0, { MCK_a, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCA, Convert__Imm1_2__imm_10, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCA, Convert__Imm1_2__imm_10, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCNT, Convert__Imm1_2__imm_10, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCNT, Convert__Imm1_2__imm_10, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICC, Convert__Imm1_2__imm_10, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCC, Convert__Imm1_2__imm_10, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCANT, Convert__Imm1_3__imm_10, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCANT, Convert__Imm1_3__imm_10, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCA, Convert__Imm1_3__imm_10, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCA, Convert__Imm1_3__imm_10, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BCOND, Convert__Imm1_0__imm_11, 0, { MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICC, Convert__Imm1_1__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCC, Convert__Imm1_1__imm_11, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BCONDA, Convert__Imm1_1__imm_11, 0, { MCK_a, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCA, Convert__Imm1_2__imm_11, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCA, Convert__Imm1_2__imm_11, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCNT, Convert__Imm1_2__imm_11, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCNT, Convert__Imm1_2__imm_11, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICC, Convert__Imm1_2__imm_11, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCC, Convert__Imm1_2__imm_11, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCANT, Convert__Imm1_3__imm_11, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCANT, Convert__Imm1_3__imm_11, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCA, Convert__Imm1_3__imm_11, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCA, Convert__Imm1_3__imm_11, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BCOND, Convert__Imm1_0__imm_12, 0, { MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPICC, Convert__Imm1_1__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPXCC, Convert__Imm1_1__imm_12, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BCONDA, Convert__Imm1_1__imm_12, 0, { MCK_a, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPICCA, Convert__Imm1_2__imm_12, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPXCCA, Convert__Imm1_2__imm_12, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPICCNT, Convert__Imm1_2__imm_12, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_12, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPICC, Convert__Imm1_2__imm_12, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPXCC, Convert__Imm1_2__imm_12, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPICCANT, Convert__Imm1_3__imm_12, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_12, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPICCA, Convert__Imm1_3__imm_12, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgu */, Sparc::BPXCCA, Convert__Imm1_3__imm_12, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BCOND, Convert__Imm1_0__imm_3, 0, { MCK_Imm }, },
  { 129 /* bl */, Sparc::BPICC, Convert__Imm1_1__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPXCC, Convert__Imm1_1__imm_3, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BCONDA, Convert__Imm1_1__imm_3, 0, { MCK_a, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPICCA, Convert__Imm1_2__imm_3, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPXCCA, Convert__Imm1_2__imm_3, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPICCNT, Convert__Imm1_2__imm_3, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPXCCNT, Convert__Imm1_2__imm_3, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPICC, Convert__Imm1_2__imm_3, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPXCC, Convert__Imm1_2__imm_3, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPICCANT, Convert__Imm1_3__imm_3, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPXCCANT, Convert__Imm1_3__imm_3, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPICCA, Convert__Imm1_3__imm_3, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 129 /* bl */, Sparc::BPXCCA, Convert__Imm1_3__imm_3, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BCOND, Convert__Imm1_0__imm_2, 0, { MCK_Imm }, },
  { 132 /* ble */, Sparc::BPICC, Convert__Imm1_1__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPXCC, Convert__Imm1_1__imm_2, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BCONDA, Convert__Imm1_1__imm_2, 0, { MCK_a, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPICCA, Convert__Imm1_2__imm_2, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPXCCA, Convert__Imm1_2__imm_2, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPICCNT, Convert__Imm1_2__imm_2, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPXCCNT, Convert__Imm1_2__imm_2, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPICC, Convert__Imm1_2__imm_2, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPXCC, Convert__Imm1_2__imm_2, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPICCANT, Convert__Imm1_3__imm_2, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPXCCANT, Convert__Imm1_3__imm_2, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPICCA, Convert__Imm1_3__imm_2, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 132 /* ble */, Sparc::BPXCCA, Convert__Imm1_3__imm_2, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BCOND, Convert__Imm1_0__imm_4, 0, { MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPICC, Convert__Imm1_1__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPXCC, Convert__Imm1_1__imm_4, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BCONDA, Convert__Imm1_1__imm_4, 0, { MCK_a, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPICCA, Convert__Imm1_2__imm_4, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPXCCA, Convert__Imm1_2__imm_4, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPICCNT, Convert__Imm1_2__imm_4, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_4, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPICC, Convert__Imm1_2__imm_4, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPXCC, Convert__Imm1_2__imm_4, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPICCANT, Convert__Imm1_3__imm_4, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_4, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPICCA, Convert__Imm1_3__imm_4, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 136 /* bleu */, Sparc::BPXCCA, Convert__Imm1_3__imm_4, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bmask */, Sparc::BMASK, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 147 /* bn */, Sparc::BCOND, Convert__Imm1_0__imm_0, 0, { MCK_Imm }, },
  { 147 /* bn */, Sparc::BPICC, Convert__Imm1_1__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPXCC, Convert__Imm1_1__imm_0, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BCONDA, Convert__Imm1_1__imm_0, 0, { MCK_a, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPICCA, Convert__Imm1_2__imm_0, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPXCCA, Convert__Imm1_2__imm_0, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPICCNT, Convert__Imm1_2__imm_0, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPXCCNT, Convert__Imm1_2__imm_0, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPICC, Convert__Imm1_2__imm_0, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPXCC, Convert__Imm1_2__imm_0, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPICCANT, Convert__Imm1_3__imm_0, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPXCCANT, Convert__Imm1_3__imm_0, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPICCA, Convert__Imm1_3__imm_0, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 147 /* bn */, Sparc::BPXCCA, Convert__Imm1_3__imm_0, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BCOND, Convert__Imm1_0__imm_9, 0, { MCK_Imm }, },
  { 150 /* bne */, Sparc::BPICC, Convert__Imm1_1__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPXCC, Convert__Imm1_1__imm_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BCONDA, Convert__Imm1_1__imm_9, 0, { MCK_a, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPICCA, Convert__Imm1_2__imm_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPXCCA, Convert__Imm1_2__imm_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPICCNT, Convert__Imm1_2__imm_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPXCCNT, Convert__Imm1_2__imm_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPICC, Convert__Imm1_2__imm_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPXCC, Convert__Imm1_2__imm_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPICCANT, Convert__Imm1_3__imm_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPXCCANT, Convert__Imm1_3__imm_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPICCA, Convert__Imm1_3__imm_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bne */, Sparc::BPXCCA, Convert__Imm1_3__imm_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BCOND, Convert__Imm1_0__imm_6, 0, { MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPICC, Convert__Imm1_1__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPXCC, Convert__Imm1_1__imm_6, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BCONDA, Convert__Imm1_1__imm_6, 0, { MCK_a, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPICCA, Convert__Imm1_2__imm_6, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPXCCA, Convert__Imm1_2__imm_6, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPICCNT, Convert__Imm1_2__imm_6, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPXCCNT, Convert__Imm1_2__imm_6, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPICC, Convert__Imm1_2__imm_6, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPXCC, Convert__Imm1_2__imm_6, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPICCANT, Convert__Imm1_3__imm_6, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPXCCANT, Convert__Imm1_3__imm_6, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPICCA, Convert__Imm1_3__imm_6, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 154 /* bneg */, Sparc::BPXCCA, Convert__Imm1_3__imm_6, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BCOND, Convert__Imm1_0__imm_14, 0, { MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPICC, Convert__Imm1_1__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPXCC, Convert__Imm1_1__imm_14, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BCONDA, Convert__Imm1_1__imm_14, 0, { MCK_a, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPICCA, Convert__Imm1_2__imm_14, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPXCCA, Convert__Imm1_2__imm_14, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPICCNT, Convert__Imm1_2__imm_14, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPXCCNT, Convert__Imm1_2__imm_14, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPICC, Convert__Imm1_2__imm_14, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPXCC, Convert__Imm1_2__imm_14, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPICCANT, Convert__Imm1_3__imm_14, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPXCCANT, Convert__Imm1_3__imm_14, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPICCA, Convert__Imm1_3__imm_14, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bpos */, Sparc::BPXCCA, Convert__Imm1_3__imm_14, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* brgez */, Sparc::BPGEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 164 /* brgez */, Sparc::BPGEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 164 /* brgez */, Sparc::BPGEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 164 /* brgez */, Sparc::BPGEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 164 /* brgez */, Sparc::BPGEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 164 /* brgez */, Sparc::BPGEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 170 /* brgz */, Sparc::BPGZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 170 /* brgz */, Sparc::BPGZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 170 /* brgz */, Sparc::BPGZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 170 /* brgz */, Sparc::BPGZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 170 /* brgz */, Sparc::BPGZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 170 /* brgz */, Sparc::BPGZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 175 /* brlez */, Sparc::BPLEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 175 /* brlez */, Sparc::BPLEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 175 /* brlez */, Sparc::BPLEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 175 /* brlez */, Sparc::BPLEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 175 /* brlez */, Sparc::BPLEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 175 /* brlez */, Sparc::BPLEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 181 /* brlz */, Sparc::BPLZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 181 /* brlz */, Sparc::BPLZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 181 /* brlz */, Sparc::BPLZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 181 /* brlz */, Sparc::BPLZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 181 /* brlz */, Sparc::BPLZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 181 /* brlz */, Sparc::BPLZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brnz */, Sparc::BPNZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 186 /* brnz */, Sparc::BPNZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brnz */, Sparc::BPNZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brnz */, Sparc::BPNZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brnz */, Sparc::BPNZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brnz */, Sparc::BPNZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 191 /* brz */, Sparc::BPZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 191 /* brz */, Sparc::BPZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 191 /* brz */, Sparc::BPZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 191 /* brz */, Sparc::BPZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 191 /* brz */, Sparc::BPZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 191 /* brz */, Sparc::BPZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 195 /* bshuffle */, Sparc::BSHUFFLE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 204 /* bvc */, Sparc::BCOND, Convert__Imm1_0__imm_15, 0, { MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPICC, Convert__Imm1_1__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPXCC, Convert__Imm1_1__imm_15, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BCONDA, Convert__Imm1_1__imm_15, 0, { MCK_a, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPICCA, Convert__Imm1_2__imm_15, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPXCCA, Convert__Imm1_2__imm_15, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPICCNT, Convert__Imm1_2__imm_15, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPXCCNT, Convert__Imm1_2__imm_15, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPICC, Convert__Imm1_2__imm_15, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPXCC, Convert__Imm1_2__imm_15, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPICCANT, Convert__Imm1_3__imm_15, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPXCCANT, Convert__Imm1_3__imm_15, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPICCA, Convert__Imm1_3__imm_15, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 204 /* bvc */, Sparc::BPXCCA, Convert__Imm1_3__imm_15, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BCOND, Convert__Imm1_0__imm_7, 0, { MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPICC, Convert__Imm1_1__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPXCC, Convert__Imm1_1__imm_7, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BCONDA, Convert__Imm1_1__imm_7, 0, { MCK_a, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPICCA, Convert__Imm1_2__imm_7, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPXCCA, Convert__Imm1_2__imm_7, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPICCNT, Convert__Imm1_2__imm_7, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPXCCNT, Convert__Imm1_2__imm_7, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPICC, Convert__Imm1_2__imm_7, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPXCC, Convert__Imm1_2__imm_7, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPICCANT, Convert__Imm1_3__imm_7, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPXCCANT, Convert__Imm1_3__imm_7, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPICCA, Convert__Imm1_3__imm_7, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 208 /* bvs */, Sparc::BPXCCA, Convert__Imm1_3__imm_7, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 212 /* call */, Sparc::CALL, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 212 /* call */, Sparc::JMPLri, Convert__regO7__MEMri2_0, 0, { MCK_MEMri }, },
  { 212 /* call */, Sparc::JMPLrr, Convert__regO7__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 217 /* cas */, Sparc::CASrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, Feature_HasV9, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 221 /* casx */, Sparc::CASXrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, 0, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 226 /* cmask16 */, Sparc::CMASK16, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 234 /* cmask32 */, Sparc::CMASK32, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 242 /* cmask8 */, Sparc::CMASK8, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 249 /* cmp */, Sparc::CMPrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 249 /* cmp */, Sparc::CMPri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 253 /* edge16 */, Sparc::EDGE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 260 /* edge16l */, Sparc::EDGE16L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 268 /* edge16ln */, Sparc::EDGE16LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 277 /* edge16n */, Sparc::EDGE16N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 285 /* edge32 */, Sparc::EDGE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 292 /* edge32l */, Sparc::EDGE32L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 300 /* edge32ln */, Sparc::EDGE32LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 309 /* edge32n */, Sparc::EDGE32N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 317 /* edge8 */, Sparc::EDGE8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 323 /* edge8l */, Sparc::EDGE8L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 330 /* edge8ln */, Sparc::EDGE8LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 338 /* edge8n */, Sparc::EDGE8N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 345 /* fabsd */, Sparc::FABSD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 351 /* fabsq */, Sparc::FABSQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 357 /* fabss */, Sparc::FABSS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 363 /* faddd */, Sparc::FADDD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 369 /* faddq */, Sparc::FADDQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 375 /* fadds */, Sparc::FADDS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 381 /* faligndata */, Sparc::FALIGNADATA, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 392 /* fand */, Sparc::FAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 397 /* fandnot1 */, Sparc::FANDNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 406 /* fandnot1s */, Sparc::FANDNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 416 /* fandnot2 */, Sparc::FANDNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 425 /* fandnot2s */, Sparc::FANDNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 435 /* fands */, Sparc::FANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 441 /* fb */, Sparc::FBCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 441 /* fb */, Sparc::FBCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 441 /* fb */, Sparc::BPFCC, Convert__Imm1_2__Imm1_0__Reg1_1, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm }, },
  { 441 /* fb */, Sparc::BPFCCA, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 441 /* fb */, Sparc::BPFCCNT, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 441 /* fb */, Sparc::BPFCCANT, Convert__Imm1_4__Imm1_0__Reg1_3, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 444 /* fba */, Sparc::FBCOND, Convert__Imm1_0__imm_0, 0, { MCK_Imm }, },
  { 444 /* fba */, Sparc::FBCONDA, Convert__Imm1_1__imm_0, 0, { MCK_a, MCK_Imm }, },
  { 444 /* fba */, Sparc::BPFCC, Convert__Imm1_1__imm_0__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 444 /* fba */, Sparc::BPFCCA, Convert__Imm1_2__imm_0__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 444 /* fba */, Sparc::BPFCCNT, Convert__Imm1_2__imm_0__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 444 /* fba */, Sparc::BPFCC, Convert__Imm1_2__imm_0__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 444 /* fba */, Sparc::BPFCCANT, Convert__Imm1_3__imm_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 444 /* fba */, Sparc::BPFCCA, Convert__Imm1_3__imm_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 448 /* fbe */, Sparc::FBCOND, Convert__Imm1_0__imm_9, 0, { MCK_Imm }, },
  { 448 /* fbe */, Sparc::FBCONDA, Convert__Imm1_1__imm_9, 0, { MCK_a, MCK_Imm }, },
  { 448 /* fbe */, Sparc::BPFCC, Convert__Imm1_1__imm_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 448 /* fbe */, Sparc::BPFCCA, Convert__Imm1_2__imm_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 448 /* fbe */, Sparc::BPFCCNT, Convert__Imm1_2__imm_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 448 /* fbe */, Sparc::BPFCC, Convert__Imm1_2__imm_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 448 /* fbe */, Sparc::BPFCCANT, Convert__Imm1_3__imm_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 448 /* fbe */, Sparc::BPFCCA, Convert__Imm1_3__imm_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 452 /* fbg */, Sparc::FBCOND, Convert__Imm1_0__imm_6, 0, { MCK_Imm }, },
  { 452 /* fbg */, Sparc::FBCONDA, Convert__Imm1_1__imm_6, 0, { MCK_a, MCK_Imm }, },
  { 452 /* fbg */, Sparc::BPFCC, Convert__Imm1_1__imm_6__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 452 /* fbg */, Sparc::BPFCCA, Convert__Imm1_2__imm_6__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 452 /* fbg */, Sparc::BPFCCNT, Convert__Imm1_2__imm_6__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 452 /* fbg */, Sparc::BPFCC, Convert__Imm1_2__imm_6__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 452 /* fbg */, Sparc::BPFCCANT, Convert__Imm1_3__imm_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 452 /* fbg */, Sparc::BPFCCA, Convert__Imm1_3__imm_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 456 /* fbge */, Sparc::FBCOND, Convert__Imm1_0__imm_11, 0, { MCK_Imm }, },
  { 456 /* fbge */, Sparc::FBCONDA, Convert__Imm1_1__imm_11, 0, { MCK_a, MCK_Imm }, },
  { 456 /* fbge */, Sparc::BPFCC, Convert__Imm1_1__imm_11__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 456 /* fbge */, Sparc::BPFCCA, Convert__Imm1_2__imm_11__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 456 /* fbge */, Sparc::BPFCCNT, Convert__Imm1_2__imm_11__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 456 /* fbge */, Sparc::BPFCC, Convert__Imm1_2__imm_11__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 456 /* fbge */, Sparc::BPFCCANT, Convert__Imm1_3__imm_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 456 /* fbge */, Sparc::BPFCCA, Convert__Imm1_3__imm_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 461 /* fbl */, Sparc::FBCOND, Convert__Imm1_0__imm_4, 0, { MCK_Imm }, },
  { 461 /* fbl */, Sparc::FBCONDA, Convert__Imm1_1__imm_4, 0, { MCK_a, MCK_Imm }, },
  { 461 /* fbl */, Sparc::BPFCC, Convert__Imm1_1__imm_4__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 461 /* fbl */, Sparc::BPFCCA, Convert__Imm1_2__imm_4__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 461 /* fbl */, Sparc::BPFCCNT, Convert__Imm1_2__imm_4__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 461 /* fbl */, Sparc::BPFCC, Convert__Imm1_2__imm_4__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 461 /* fbl */, Sparc::BPFCCANT, Convert__Imm1_3__imm_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 461 /* fbl */, Sparc::BPFCCA, Convert__Imm1_3__imm_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 465 /* fble */, Sparc::FBCOND, Convert__Imm1_0__imm_13, 0, { MCK_Imm }, },
  { 465 /* fble */, Sparc::FBCONDA, Convert__Imm1_1__imm_13, 0, { MCK_a, MCK_Imm }, },
  { 465 /* fble */, Sparc::BPFCC, Convert__Imm1_1__imm_13__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 465 /* fble */, Sparc::BPFCCA, Convert__Imm1_2__imm_13__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 465 /* fble */, Sparc::BPFCCNT, Convert__Imm1_2__imm_13__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 465 /* fble */, Sparc::BPFCC, Convert__Imm1_2__imm_13__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 465 /* fble */, Sparc::BPFCCANT, Convert__Imm1_3__imm_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 465 /* fble */, Sparc::BPFCCA, Convert__Imm1_3__imm_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 470 /* fblg */, Sparc::FBCOND, Convert__Imm1_0__imm_2, 0, { MCK_Imm }, },
  { 470 /* fblg */, Sparc::FBCONDA, Convert__Imm1_1__imm_2, 0, { MCK_a, MCK_Imm }, },
  { 470 /* fblg */, Sparc::BPFCC, Convert__Imm1_1__imm_2__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 470 /* fblg */, Sparc::BPFCCA, Convert__Imm1_2__imm_2__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 470 /* fblg */, Sparc::BPFCCNT, Convert__Imm1_2__imm_2__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 470 /* fblg */, Sparc::BPFCC, Convert__Imm1_2__imm_2__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 470 /* fblg */, Sparc::BPFCCANT, Convert__Imm1_3__imm_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 470 /* fblg */, Sparc::BPFCCA, Convert__Imm1_3__imm_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 475 /* fbn */, Sparc::FBCOND, Convert__Imm1_0__imm_8, 0, { MCK_Imm }, },
  { 475 /* fbn */, Sparc::FBCONDA, Convert__Imm1_1__imm_8, 0, { MCK_a, MCK_Imm }, },
  { 475 /* fbn */, Sparc::BPFCC, Convert__Imm1_1__imm_8__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 475 /* fbn */, Sparc::BPFCCA, Convert__Imm1_2__imm_8__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 475 /* fbn */, Sparc::BPFCCNT, Convert__Imm1_2__imm_8__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 475 /* fbn */, Sparc::BPFCC, Convert__Imm1_2__imm_8__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 475 /* fbn */, Sparc::BPFCCANT, Convert__Imm1_3__imm_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 475 /* fbn */, Sparc::BPFCCA, Convert__Imm1_3__imm_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 479 /* fbne */, Sparc::FBCOND, Convert__Imm1_0__imm_1, 0, { MCK_Imm }, },
  { 479 /* fbne */, Sparc::FBCONDA, Convert__Imm1_1__imm_1, 0, { MCK_a, MCK_Imm }, },
  { 479 /* fbne */, Sparc::BPFCC, Convert__Imm1_1__imm_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 479 /* fbne */, Sparc::BPFCCA, Convert__Imm1_2__imm_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 479 /* fbne */, Sparc::BPFCCNT, Convert__Imm1_2__imm_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 479 /* fbne */, Sparc::BPFCC, Convert__Imm1_2__imm_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 479 /* fbne */, Sparc::BPFCCANT, Convert__Imm1_3__imm_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 479 /* fbne */, Sparc::BPFCCA, Convert__Imm1_3__imm_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 484 /* fbo */, Sparc::FBCOND, Convert__Imm1_0__imm_15, 0, { MCK_Imm }, },
  { 484 /* fbo */, Sparc::FBCONDA, Convert__Imm1_1__imm_15, 0, { MCK_a, MCK_Imm }, },
  { 484 /* fbo */, Sparc::BPFCC, Convert__Imm1_1__imm_15__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 484 /* fbo */, Sparc::BPFCCA, Convert__Imm1_2__imm_15__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 484 /* fbo */, Sparc::BPFCCNT, Convert__Imm1_2__imm_15__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 484 /* fbo */, Sparc::BPFCC, Convert__Imm1_2__imm_15__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 484 /* fbo */, Sparc::BPFCCANT, Convert__Imm1_3__imm_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 484 /* fbo */, Sparc::BPFCCA, Convert__Imm1_3__imm_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 488 /* fbu */, Sparc::FBCOND, Convert__Imm1_0__imm_7, 0, { MCK_Imm }, },
  { 488 /* fbu */, Sparc::FBCONDA, Convert__Imm1_1__imm_7, 0, { MCK_a, MCK_Imm }, },
  { 488 /* fbu */, Sparc::BPFCC, Convert__Imm1_1__imm_7__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 488 /* fbu */, Sparc::BPFCCA, Convert__Imm1_2__imm_7__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 488 /* fbu */, Sparc::BPFCCNT, Convert__Imm1_2__imm_7__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 488 /* fbu */, Sparc::BPFCC, Convert__Imm1_2__imm_7__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 488 /* fbu */, Sparc::BPFCCANT, Convert__Imm1_3__imm_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 488 /* fbu */, Sparc::BPFCCA, Convert__Imm1_3__imm_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 492 /* fbue */, Sparc::FBCOND, Convert__Imm1_0__imm_10, 0, { MCK_Imm }, },
  { 492 /* fbue */, Sparc::FBCONDA, Convert__Imm1_1__imm_10, 0, { MCK_a, MCK_Imm }, },
  { 492 /* fbue */, Sparc::BPFCC, Convert__Imm1_1__imm_10__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 492 /* fbue */, Sparc::BPFCCA, Convert__Imm1_2__imm_10__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 492 /* fbue */, Sparc::BPFCCNT, Convert__Imm1_2__imm_10__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 492 /* fbue */, Sparc::BPFCC, Convert__Imm1_2__imm_10__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 492 /* fbue */, Sparc::BPFCCANT, Convert__Imm1_3__imm_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 492 /* fbue */, Sparc::BPFCCA, Convert__Imm1_3__imm_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 497 /* fbug */, Sparc::FBCOND, Convert__Imm1_0__imm_5, 0, { MCK_Imm }, },
  { 497 /* fbug */, Sparc::FBCONDA, Convert__Imm1_1__imm_5, 0, { MCK_a, MCK_Imm }, },
  { 497 /* fbug */, Sparc::BPFCC, Convert__Imm1_1__imm_5__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 497 /* fbug */, Sparc::BPFCCA, Convert__Imm1_2__imm_5__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 497 /* fbug */, Sparc::BPFCCNT, Convert__Imm1_2__imm_5__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 497 /* fbug */, Sparc::BPFCC, Convert__Imm1_2__imm_5__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 497 /* fbug */, Sparc::BPFCCANT, Convert__Imm1_3__imm_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 497 /* fbug */, Sparc::BPFCCA, Convert__Imm1_3__imm_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::FBCOND, Convert__Imm1_0__imm_12, 0, { MCK_Imm }, },
  { 502 /* fbuge */, Sparc::FBCONDA, Convert__Imm1_1__imm_12, 0, { MCK_a, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::BPFCC, Convert__Imm1_1__imm_12__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::BPFCCA, Convert__Imm1_2__imm_12__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::BPFCCNT, Convert__Imm1_2__imm_12__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::BPFCC, Convert__Imm1_2__imm_12__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::BPFCCANT, Convert__Imm1_3__imm_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 502 /* fbuge */, Sparc::BPFCCA, Convert__Imm1_3__imm_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbul */, Sparc::FBCOND, Convert__Imm1_0__imm_3, 0, { MCK_Imm }, },
  { 508 /* fbul */, Sparc::FBCONDA, Convert__Imm1_1__imm_3, 0, { MCK_a, MCK_Imm }, },
  { 508 /* fbul */, Sparc::BPFCC, Convert__Imm1_1__imm_3__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbul */, Sparc::BPFCCA, Convert__Imm1_2__imm_3__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbul */, Sparc::BPFCCNT, Convert__Imm1_2__imm_3__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbul */, Sparc::BPFCC, Convert__Imm1_2__imm_3__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbul */, Sparc::BPFCCANT, Convert__Imm1_3__imm_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbul */, Sparc::BPFCCA, Convert__Imm1_3__imm_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbule */, Sparc::FBCOND, Convert__Imm1_0__imm_14, 0, { MCK_Imm }, },
  { 513 /* fbule */, Sparc::FBCONDA, Convert__Imm1_1__imm_14, 0, { MCK_a, MCK_Imm }, },
  { 513 /* fbule */, Sparc::BPFCC, Convert__Imm1_1__imm_14__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbule */, Sparc::BPFCCA, Convert__Imm1_2__imm_14__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbule */, Sparc::BPFCCNT, Convert__Imm1_2__imm_14__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbule */, Sparc::BPFCC, Convert__Imm1_2__imm_14__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbule */, Sparc::BPFCCANT, Convert__Imm1_3__imm_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbule */, Sparc::BPFCCA, Convert__Imm1_3__imm_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 519 /* fchksm16 */, Sparc::FCHKSM16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 528 /* fcmpd */, Sparc::V9FCMPD, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 528 /* fcmpd */, Sparc::V9FCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 534 /* fcmped */, Sparc::V9FCMPED, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 534 /* fcmped */, Sparc::V9FCMPED, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 541 /* fcmpeq */, Sparc::V9FCMPEQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 541 /* fcmpeq */, Sparc::V9FCMPEQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 548 /* fcmpeq16 */, Sparc::FCMPEQ16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 557 /* fcmpeq32 */, Sparc::FCMPEQ32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 566 /* fcmpes */, Sparc::V9FCMPES, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 566 /* fcmpes */, Sparc::V9FCMPES, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 573 /* fcmpgt16 */, Sparc::FCMPGT16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 582 /* fcmpgt32 */, Sparc::FCMPGT32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 591 /* fcmple16 */, Sparc::FCMPLE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 600 /* fcmple32 */, Sparc::FCMPLE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 609 /* fcmpne16 */, Sparc::FCMPNE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 618 /* fcmpne32 */, Sparc::FCMPNE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 627 /* fcmpq */, Sparc::V9FCMPQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 627 /* fcmpq */, Sparc::V9FCMPQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 633 /* fcmps */, Sparc::V9FCMPS, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 633 /* fcmps */, Sparc::V9FCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 639 /* fdivd */, Sparc::FDIVD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 645 /* fdivq */, Sparc::FDIVQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 651 /* fdivs */, Sparc::FDIVS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 657 /* fdmulq */, Sparc::FDMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_QFPRegs }, },
  { 664 /* fdtoi */, Sparc::FDTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 670 /* fdtoq */, Sparc::FDTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 676 /* fdtos */, Sparc::FDTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 682 /* fdtox */, Sparc::FDTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 688 /* fexpand */, Sparc::FEXPAND, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 696 /* fhaddd */, Sparc::FHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 703 /* fhadds */, Sparc::FHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 710 /* fhsubd */, Sparc::FHSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 717 /* fhsubs */, Sparc::FHSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 724 /* fitod */, Sparc::FITOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 730 /* fitoq */, Sparc::FITOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 736 /* fitos */, Sparc::FITOS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 742 /* flcmpd */, Sparc::FLCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 749 /* flcmps */, Sparc::FLCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 756 /* flushw */, Sparc::FLUSHW, Convert_NoOperands, Feature_HasV9, {  }, },
  { 763 /* fmean16 */, Sparc::FMEAN16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 771 /* fmovd */, Sparc::FMOVD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 771 /* fmovd */, Sparc::FMOVD_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_DFPRegs, MCK_DFPRegs }, },
  { 771 /* fmovd */, Sparc::FMOVD_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 771 /* fmovd */, Sparc::FMOVD_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 771 /* fmovd */, Sparc::V9FMOVD_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 777 /* fmovda */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 777 /* fmovda */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_8, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 777 /* fmovda */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 784 /* fmovdcc */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 784 /* fmovdcc */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 792 /* fmovdcs */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 792 /* fmovdcs */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 800 /* fmovde */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 800 /* fmovde */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 800 /* fmovde */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 807 /* fmovdg */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 807 /* fmovdg */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_10, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 807 /* fmovdg */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 814 /* fmovdge */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 814 /* fmovdge */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_11, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 814 /* fmovdge */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 822 /* fmovdgu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 822 /* fmovdgu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_12, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 830 /* fmovdl */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 830 /* fmovdl */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_3, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 830 /* fmovdl */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 837 /* fmovdle */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 837 /* fmovdle */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_2, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 837 /* fmovdle */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 845 /* fmovdleu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 845 /* fmovdleu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_4, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 854 /* fmovdlg */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 862 /* fmovdn */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 862 /* fmovdn */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_0, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 862 /* fmovdn */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 869 /* fmovdne */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 869 /* fmovdne */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 869 /* fmovdne */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 877 /* fmovdneg */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 877 /* fmovdneg */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_6, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 886 /* fmovdo */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 893 /* fmovdpos */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 893 /* fmovdpos */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_14, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 902 /* fmovdu */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 909 /* fmovdue */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 917 /* fmovdug */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 925 /* fmovduge */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 934 /* fmovdul */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovdule */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 951 /* fmovdvc */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 951 /* fmovdvc */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_15, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 959 /* fmovdvs */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 959 /* fmovdvs */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_7, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 967 /* fmovq */, Sparc::FMOVQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 967 /* fmovq */, Sparc::FMOVQ_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_QFPRegs, MCK_QFPRegs }, },
  { 967 /* fmovq */, Sparc::FMOVQ_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 967 /* fmovq */, Sparc::FMOVQ_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 967 /* fmovq */, Sparc::V9FMOVQ_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 973 /* fmovqa */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 973 /* fmovqa */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_8, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 973 /* fmovqa */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 980 /* fmovqcc */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 980 /* fmovqcc */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 988 /* fmovqcs */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 988 /* fmovqcs */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 996 /* fmovqe */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 996 /* fmovqe */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 996 /* fmovqe */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1003 /* fmovqg */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1003 /* fmovqg */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_10, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1003 /* fmovqg */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1010 /* fmovqge */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1010 /* fmovqge */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_11, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1010 /* fmovqge */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1018 /* fmovqgu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1018 /* fmovqgu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_12, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1026 /* fmovql */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1026 /* fmovql */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_3, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1026 /* fmovql */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1033 /* fmovqle */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1033 /* fmovqle */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_2, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1033 /* fmovqle */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1041 /* fmovqleu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1041 /* fmovqleu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_4, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1050 /* fmovqlg */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1058 /* fmovqn */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1058 /* fmovqn */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_0, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1058 /* fmovqn */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1065 /* fmovqne */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1065 /* fmovqne */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1065 /* fmovqne */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1073 /* fmovqneg */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1073 /* fmovqneg */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_6, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1082 /* fmovqo */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1089 /* fmovqpos */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1089 /* fmovqpos */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_14, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1098 /* fmovqu */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1105 /* fmovque */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1113 /* fmovqug */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1121 /* fmovquge */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1130 /* fmovqul */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1138 /* fmovqule */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1147 /* fmovqvc */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1147 /* fmovqvc */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_15, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1155 /* fmovqvs */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1155 /* fmovqvs */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_7, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1163 /* fmovrdgez */, Sparc::FMOVRGEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1173 /* fmovrdgz */, Sparc::FMOVRGZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1182 /* fmovrdlez */, Sparc::FMOVRLEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1192 /* fmovrdlz */, Sparc::FMOVRLZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1201 /* fmovrdnz */, Sparc::FMOVRNZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1210 /* fmovrdz */, Sparc::FMOVRZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1218 /* fmovrqgez */, Sparc::FMOVRGEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1228 /* fmovrqgz */, Sparc::FMOVRGZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1237 /* fmovrqlez */, Sparc::FMOVRLEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1247 /* fmovrqlz */, Sparc::FMOVRLZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1256 /* fmovrqnz */, Sparc::FMOVRNZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1265 /* fmovrqz */, Sparc::FMOVRZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1273 /* fmovrsgez */, Sparc::FMOVRGEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1283 /* fmovrsgz */, Sparc::FMOVRGZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1292 /* fmovrslez */, Sparc::FMOVRLEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1302 /* fmovrslz */, Sparc::FMOVRLZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1311 /* fmovrsnz */, Sparc::FMOVRNZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1320 /* fmovrsz */, Sparc::FMOVRZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1328 /* fmovs */, Sparc::FMOVS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1328 /* fmovs */, Sparc::FMOVS_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_FPRegs, MCK_FPRegs }, },
  { 1328 /* fmovs */, Sparc::FMOVS_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1328 /* fmovs */, Sparc::FMOVS_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1328 /* fmovs */, Sparc::V9FMOVS_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1334 /* fmovsa */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1334 /* fmovsa */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_8, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1334 /* fmovsa */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1341 /* fmovscc */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1341 /* fmovscc */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1349 /* fmovscs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1349 /* fmovscs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1357 /* fmovse */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1357 /* fmovse */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1357 /* fmovse */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1364 /* fmovsg */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1364 /* fmovsg */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_10, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1364 /* fmovsg */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1371 /* fmovsge */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1371 /* fmovsge */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_11, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1371 /* fmovsge */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1379 /* fmovsgu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1379 /* fmovsgu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_12, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1387 /* fmovsl */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1387 /* fmovsl */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_3, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1387 /* fmovsl */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1394 /* fmovsle */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1394 /* fmovsle */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_2, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1394 /* fmovsle */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1402 /* fmovsleu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1402 /* fmovsleu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_4, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1411 /* fmovslg */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1419 /* fmovsn */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1419 /* fmovsn */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_0, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1419 /* fmovsn */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1426 /* fmovsne */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1426 /* fmovsne */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1426 /* fmovsne */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1434 /* fmovsneg */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1434 /* fmovsneg */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_6, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1443 /* fmovso */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1450 /* fmovspos */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1450 /* fmovspos */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_14, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1459 /* fmovsu */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1466 /* fmovsue */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1474 /* fmovsug */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1482 /* fmovsuge */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1491 /* fmovsul */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1499 /* fmovsule */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1508 /* fmovsvc */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1508 /* fmovsvc */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_15, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1516 /* fmovsvs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1516 /* fmovsvs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_7, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1524 /* fmul8sux16 */, Sparc::FMUL8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1535 /* fmul8ulx16 */, Sparc::FMUL8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1546 /* fmul8x16 */, Sparc::FMUL8X16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1555 /* fmul8x16al */, Sparc::FMUL8X16AL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1566 /* fmul8x16au */, Sparc::FMUL8X16AU, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1577 /* fmuld */, Sparc::FMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1583 /* fmuld8sux16 */, Sparc::FMULD8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1595 /* fmuld8ulx16 */, Sparc::FMULD8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1607 /* fmulq */, Sparc::FMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1613 /* fmuls */, Sparc::FMULS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1619 /* fnaddd */, Sparc::FNADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1626 /* fnadds */, Sparc::FNADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1633 /* fnand */, Sparc::FNAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1639 /* fnands */, Sparc::FNANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1646 /* fnegd */, Sparc::FNEGD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1652 /* fnegq */, Sparc::FNEGQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1658 /* fnegs */, Sparc::FNEGS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1664 /* fnhaddd */, Sparc::FNHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1664 /* fnhaddd */, Sparc::FNMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1672 /* fnhadds */, Sparc::FNHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1672 /* fnhadds */, Sparc::FNMULS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1672 /* fnhadds */, Sparc::FNSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1680 /* fnor */, Sparc::FNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1685 /* fnors */, Sparc::FNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1691 /* fnot1 */, Sparc::FNOT1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1697 /* fnot1s */, Sparc::FNOT1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1704 /* fnot2 */, Sparc::FNOT2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1710 /* fnot2s */, Sparc::FNOT2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1717 /* fone */, Sparc::FONE, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 1722 /* fones */, Sparc::FONES, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 1728 /* for */, Sparc::FOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1732 /* fornot1 */, Sparc::FORNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1740 /* fornot1s */, Sparc::FORNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1749 /* fornot2 */, Sparc::FORNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1757 /* fornot2s */, Sparc::FORNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1766 /* fors */, Sparc::FORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1771 /* fpack16 */, Sparc::FPACK16, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1779 /* fpack32 */, Sparc::FPACK32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1787 /* fpackfix */, Sparc::FPACKFIX, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1796 /* fpadd16 */, Sparc::FPADD16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1804 /* fpadd16s */, Sparc::FPADD16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1813 /* fpadd32 */, Sparc::FPADD32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1821 /* fpadd32s */, Sparc::FPADD32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1830 /* fpadd64 */, Sparc::FPADD64, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1838 /* fpmerge */, Sparc::FPMERGE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1846 /* fpsub16 */, Sparc::FPSUB16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1854 /* fpsub16S */, Sparc::FPSUB16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1863 /* fpsub32 */, Sparc::FPSUB32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1871 /* fpsub32S */, Sparc::FPSUB32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1880 /* fqtod */, Sparc::FQTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 1886 /* fqtoi */, Sparc::FQTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 1892 /* fqtos */, Sparc::FQTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 1898 /* fqtox */, Sparc::FQTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 1904 /* fslas16 */, Sparc::FSLAS16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1912 /* fslas32 */, Sparc::FSLAS32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1920 /* fsll16 */, Sparc::FSLL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1927 /* fsll32 */, Sparc::FSLL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1934 /* fsmuld */, Sparc::FSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_DFPRegs }, },
  { 1941 /* fsqrtd */, Sparc::FSQRTD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1948 /* fsqrtq */, Sparc::FSQRTQ, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1955 /* fsqrts */, Sparc::FSQRTS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1962 /* fsra16 */, Sparc::FSRA16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1969 /* fsra32 */, Sparc::FSRA32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1976 /* fsrc1 */, Sparc::FSRC1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1982 /* fsrc1s */, Sparc::FSRC1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1989 /* fsrc2 */, Sparc::FSRC2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1995 /* fsrc2s */, Sparc::FSRC2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2002 /* fsrl16 */, Sparc::FSRL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2009 /* fsrl32 */, Sparc::FSRL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2016 /* fstod */, Sparc::FSTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2022 /* fstoi */, Sparc::FSTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2028 /* fstoq */, Sparc::FSTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 2034 /* fstox */, Sparc::FSTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2040 /* fsubd */, Sparc::FSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2046 /* fsubq */, Sparc::FSUBQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 2052 /* fsubs */, Sparc::FSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2058 /* fxnor */, Sparc::FXNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2064 /* fxnors */, Sparc::FXNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2071 /* fxor */, Sparc::FXOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2076 /* fxors */, Sparc::FXORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2082 /* fxtod */, Sparc::FXTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2088 /* fxtoq */, Sparc::FXTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 2094 /* fxtos */, Sparc::FXTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 2100 /* fzero */, Sparc::FZERO, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 2106 /* fzeros */, Sparc::FZEROS, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 2113 /* jmp */, Sparc::JMPLri, Convert__regG0__MEMri2_0, 0, { MCK_MEMri }, },
  { 2113 /* jmp */, Sparc::JMPLrr, Convert__regG0__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2117 /* jmpl */, Sparc::JMPLri, Convert__Reg1_1__MEMri2_0, 0, { MCK_MEMri, MCK_IntRegs }, },
  { 2117 /* jmpl */, Sparc::JMPLrr, Convert__Reg1_1__MEMrr2_0, 0, { MCK_MEMrr, MCK_IntRegs }, },
  { 2122 /* ld */, Sparc::LDri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2122 /* ld */, Sparc::LDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_FPRegs }, },
  { 2122 /* ld */, Sparc::LDrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2122 /* ld */, Sparc::LDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_FPRegs }, },
  { 2125 /* ldd */, Sparc::LDDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_DFPRegs }, },
  { 2125 /* ldd */, Sparc::LDDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_DFPRegs }, },
  { 2129 /* ldq */, Sparc::LDQFri, Convert__Reg1_3__MEMri2_1, Feature_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK_QFPRegs }, },
  { 2129 /* ldq */, Sparc::LDQFrr, Convert__Reg1_3__MEMrr2_1, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_QFPRegs }, },
  { 2133 /* ldsb */, Sparc::LDSBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2133 /* ldsb */, Sparc::LDSBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2138 /* ldsh */, Sparc::LDSHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2138 /* ldsh */, Sparc::LDSHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2143 /* ldsw */, Sparc::LDSWri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2143 /* ldsw */, Sparc::LDSWrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2148 /* ldub */, Sparc::LDUBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2148 /* ldub */, Sparc::LDUBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2153 /* lduh */, Sparc::LDUHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2153 /* lduh */, Sparc::LDUHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2158 /* ldx */, Sparc::LDXri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2158 /* ldx */, Sparc::LDXrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2162 /* lzcnt */, Sparc::LZCNT, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs }, },
  { 2168 /* membar */, Sparc::MEMBARi, Convert__Imm1_0, Feature_HasV9, { MCK_Imm }, },
  { 2175 /* mov */, Sparc::ORrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::ORri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::MOVFCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_IntRegs, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::MOVFCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_Imm, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::MOVICCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::MOVICCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::MOVXCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::MOVXCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::V9MOVFCCrr, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2175 /* mov */, Sparc::V9MOVFCCri, Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2179 /* mova */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2179 /* mova */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2179 /* mova */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_8, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2179 /* mova */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_8, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2179 /* mova */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2179 /* mova */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2184 /* movcc */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2184 /* movcc */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2184 /* movcc */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2184 /* movcc */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2190 /* movcs */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2190 /* movcs */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2190 /* movcs */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2190 /* movcs */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2196 /* movdtox */, Sparc::MOVWTOS, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2196 /* movdtox */, Sparc::MOVXTOD, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2196 /* movdtox */, Sparc::MOVDTOX, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2204 /* move */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2204 /* move */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2204 /* move */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2204 /* move */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2204 /* move */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2204 /* move */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2209 /* movg */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2209 /* movg */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2209 /* movg */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_10, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2209 /* movg */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_10, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2209 /* movg */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2209 /* movg */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_6, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2214 /* movge */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2214 /* movge */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2214 /* movge */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_11, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2214 /* movge */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_11, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2214 /* movge */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_11, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2214 /* movge */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_11, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2220 /* movgu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2220 /* movgu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2220 /* movgu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_12, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2220 /* movgu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_12, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2226 /* movl */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2226 /* movl */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2226 /* movl */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_3, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2226 /* movl */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_3, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2226 /* movl */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2226 /* movl */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_4, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2231 /* movle */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2231 /* movle */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2231 /* movle */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_2, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2231 /* movle */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_2, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2231 /* movle */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_13, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2231 /* movle */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_13, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2237 /* movleu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2237 /* movleu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2237 /* movleu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_4, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2237 /* movleu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_4, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2244 /* movlg */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_2, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2244 /* movlg */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_2, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2250 /* movn */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2250 /* movn */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2250 /* movn */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_0, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2250 /* movn */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_0, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2250 /* movn */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_8, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2250 /* movn */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_8, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2255 /* movne */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2255 /* movne */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2255 /* movne */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2255 /* movne */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2255 /* movne */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2255 /* movne */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2261 /* movneg */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2261 /* movneg */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2261 /* movneg */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_6, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2261 /* movneg */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_6, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2268 /* movo */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2268 /* movo */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_15, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2273 /* movpos */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2273 /* movpos */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2273 /* movpos */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_14, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2273 /* movpos */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_14, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2280 /* movrgez */, Sparc::MOVRGEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2280 /* movrgez */, Sparc::MOVRGEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2288 /* movrgz */, Sparc::MOVRGZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2288 /* movrgz */, Sparc::MOVRGZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2295 /* movrlez */, Sparc::MOVRLEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2295 /* movrlez */, Sparc::MOVRLEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2303 /* movrlz */, Sparc::MOVRLZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2303 /* movrlz */, Sparc::MOVRLZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2310 /* movrnz */, Sparc::MOVRNZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2310 /* movrnz */, Sparc::MOVRNZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2317 /* movrz */, Sparc::MOVRRZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2317 /* movrz */, Sparc::MOVRRZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2323 /* movstosw */, Sparc::MOVSTOSW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2332 /* movstouw */, Sparc::MOVSTOUW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2341 /* movu */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2341 /* movu */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_7, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2346 /* movue */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_10, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2346 /* movue */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_10, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2352 /* movug */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_5, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2352 /* movug */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_5, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2358 /* movuge */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_12, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2358 /* movuge */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_12, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2365 /* movul */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_3, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2365 /* movul */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_3, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2371 /* movule */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_14, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2371 /* movule */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_14, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2378 /* movvc */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2378 /* movvc */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2378 /* movvc */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_15, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2378 /* movvc */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_15, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2384 /* movvs */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2384 /* movvs */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2384 /* movvs */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_7, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2384 /* movvs */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_7, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2390 /* mulx */, Sparc::MULXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2390 /* mulx */, Sparc::MULXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2395 /* nop */, Sparc::NOP, Convert_NoOperands, 0, {  }, },
  { 2399 /* or */, Sparc::ORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2399 /* or */, Sparc::ORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2402 /* orcc */, Sparc::ORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2402 /* orcc */, Sparc::ORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2407 /* orn */, Sparc::ORNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2407 /* orn */, Sparc::ORNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2411 /* orncc */, Sparc::ORNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2411 /* orncc */, Sparc::ORNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2417 /* pdist */, Sparc::PDIST, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2423 /* pdistn */, Sparc::PDISTN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2430 /* popc */, Sparc::POPCrr, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2435 /* rd */, Sparc::RDY, Convert__Reg1_1, 0, { MCK__PCT_y, MCK_IntRegs }, },
  { 2438 /* restore */, Sparc::RESTORErr, Convert__regG0__regG0__regG0, 0, {  }, },
  { 2438 /* restore */, Sparc::RESTORErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2438 /* restore */, Sparc::RESTOREri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2446 /* ret */, Sparc::RET, Convert__imm_8, 0, {  }, },
  { 2450 /* retl */, Sparc::RETL, Convert__imm_8, 0, {  }, },
  { 2455 /* rett */, Sparc::RETTri, Convert__MEMri2_0, 0, { MCK_MEMri }, },
  { 2455 /* rett */, Sparc::RETTrr, Convert__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2460 /* save */, Sparc::SAVErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2460 /* save */, Sparc::SAVEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2465 /* sdiv */, Sparc::SDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2465 /* sdiv */, Sparc::SDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2470 /* sdivcc */, Sparc::SDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2470 /* sdivcc */, Sparc::SDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2477 /* sdivx */, Sparc::SDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2477 /* sdivx */, Sparc::SDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2483 /* sethi */, Sparc::SETHIi, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2489 /* shutdown */, Sparc::SHUTDOWN, Convert_NoOperands, Feature_HasVIS, {  }, },
  { 2498 /* siam */, Sparc::SIAM, Convert_NoOperands, Feature_HasVIS2, {  }, },
  { 2503 /* sll */, Sparc::SLLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2503 /* sll */, Sparc::SLLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2507 /* sllx */, Sparc::SLLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2507 /* sllx */, Sparc::SLLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2512 /* smul */, Sparc::SMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2512 /* smul */, Sparc::SMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2517 /* smulcc */, Sparc::SMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2517 /* smulcc */, Sparc::SMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2524 /* sra */, Sparc::SRArr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2524 /* sra */, Sparc::SRAri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2528 /* srax */, Sparc::SRAXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2528 /* srax */, Sparc::SRAXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2533 /* srl */, Sparc::SRLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2533 /* srl */, Sparc::SRLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2537 /* srlx */, Sparc::SRLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2537 /* srlx */, Sparc::SRLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2542 /* st */, Sparc::STri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2542 /* st */, Sparc::STrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2542 /* st */, Sparc::STFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2542 /* st */, Sparc::STFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2545 /* stb */, Sparc::STBri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2545 /* stb */, Sparc::STBrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2549 /* stbar */, Sparc::STBAR, Convert_NoOperands, 0, {  }, },
  { 2555 /* std */, Sparc::STDFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2555 /* std */, Sparc::STDFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2559 /* sth */, Sparc::STHri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2559 /* sth */, Sparc::STHrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2563 /* stq */, Sparc::STQFri, Convert__MEMri2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2563 /* stq */, Sparc::STQFrr, Convert__MEMrr2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2567 /* stx */, Sparc::STXri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2567 /* stx */, Sparc::STXrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2571 /* sub */, Sparc::SUBrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2571 /* sub */, Sparc::SUBri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2575 /* subcc */, Sparc::SUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2575 /* subcc */, Sparc::SUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2581 /* subx */, Sparc::SUBCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2581 /* subx */, Sparc::SUBCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2586 /* subxcc */, Sparc::SUBErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2586 /* subxcc */, Sparc::SUBEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2593 /* swap */, Sparc::SWAPri, Convert__Reg1_3__MEMri2_1__Tie0, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2593 /* swap */, Sparc::SWAPrr, Convert__Reg1_3__MEMrr2_1__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2598 /* t */, Sparc::TICCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2598 /* t */, Sparc::TICCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2598 /* t */, Sparc::TXCCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2598 /* t */, Sparc::TXCCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2600 /* ta */, Sparc::TA3, Convert_NoOperands, 0, { MCK_3 }, },
  { 2600 /* ta */, Sparc::TA5, Convert_NoOperands, 0, { MCK_5 }, },
  { 2600 /* ta */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_8, 0, { MCK_IntRegs }, },
  { 2600 /* ta */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_8, 0, { MCK_Imm }, },
  { 2600 /* ta */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2600 /* ta */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2600 /* ta */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2600 /* ta */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_8, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2600 /* ta */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_8, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2600 /* ta */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_8, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2600 /* ta */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2600 /* ta */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2600 /* ta */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2600 /* ta */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2603 /* taddcc */, Sparc::TADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2603 /* taddcc */, Sparc::TADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2610 /* taddcctv */, Sparc::TADDCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2610 /* taddcctv */, Sparc::TADDCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_13, 0, { MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_13, 0, { MCK_Imm }, },
  { 2619 /* tcc */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2619 /* tcc */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2619 /* tcc */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2619 /* tcc */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2619 /* tcc */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2619 /* tcc */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2623 /* tcs */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_5, 0, { MCK_IntRegs }, },
  { 2623 /* tcs */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_5, 0, { MCK_Imm }, },
  { 2623 /* tcs */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2623 /* tcs */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2623 /* tcs */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2623 /* tcs */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2623 /* tcs */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2623 /* tcs */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2623 /* tcs */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2623 /* tcs */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2623 /* tcs */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2623 /* tcs */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2627 /* te */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_1, 0, { MCK_IntRegs }, },
  { 2627 /* te */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_1, 0, { MCK_Imm }, },
  { 2627 /* te */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2627 /* te */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2627 /* te */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2627 /* te */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2627 /* te */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2627 /* te */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2627 /* te */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2627 /* te */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2627 /* te */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2627 /* te */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2630 /* tg */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_10, 0, { MCK_IntRegs }, },
  { 2630 /* tg */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_10, 0, { MCK_Imm }, },
  { 2630 /* tg */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2630 /* tg */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2630 /* tg */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2630 /* tg */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_10, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2630 /* tg */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_10, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2630 /* tg */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_10, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2630 /* tg */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2630 /* tg */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2630 /* tg */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2630 /* tg */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2633 /* tge */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_11, 0, { MCK_IntRegs }, },
  { 2633 /* tge */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_11, 0, { MCK_Imm }, },
  { 2633 /* tge */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2633 /* tge */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2633 /* tge */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2633 /* tge */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_11, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2633 /* tge */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_11, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2633 /* tge */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_11, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2633 /* tge */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2633 /* tge */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2633 /* tge */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2633 /* tge */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2637 /* tgu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_12, 0, { MCK_IntRegs }, },
  { 2637 /* tgu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_12, 0, { MCK_Imm }, },
  { 2637 /* tgu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2637 /* tgu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2637 /* tgu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2637 /* tgu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_12, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2637 /* tgu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_12, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2637 /* tgu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_12, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2637 /* tgu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2637 /* tgu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2637 /* tgu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2637 /* tgu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2641 /* tl */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_3, 0, { MCK_IntRegs }, },
  { 2641 /* tl */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_3, 0, { MCK_Imm }, },
  { 2641 /* tl */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2641 /* tl */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2641 /* tl */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2641 /* tl */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_3, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2641 /* tl */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_3, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2641 /* tl */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_3, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2641 /* tl */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2641 /* tl */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2641 /* tl */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2641 /* tl */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2644 /* tle */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_2, 0, { MCK_IntRegs }, },
  { 2644 /* tle */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_2, 0, { MCK_Imm }, },
  { 2644 /* tle */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2644 /* tle */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2644 /* tle */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2644 /* tle */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_2, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2644 /* tle */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_2, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2644 /* tle */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_2, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2644 /* tle */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2644 /* tle */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2644 /* tle */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2644 /* tle */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2648 /* tleu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_4, 0, { MCK_IntRegs }, },
  { 2648 /* tleu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_4, 0, { MCK_Imm }, },
  { 2648 /* tleu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2648 /* tleu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2648 /* tleu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2648 /* tleu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_4, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2648 /* tleu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_4, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2648 /* tleu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_4, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2648 /* tleu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2648 /* tleu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2648 /* tleu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2648 /* tleu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2653 /* tn */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_0, 0, { MCK_IntRegs }, },
  { 2653 /* tn */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_0, 0, { MCK_Imm }, },
  { 2653 /* tn */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2653 /* tn */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2653 /* tn */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2653 /* tn */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_0, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2653 /* tn */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2653 /* tn */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_0, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2653 /* tn */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2653 /* tn */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2653 /* tn */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2653 /* tn */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2656 /* tne */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_9, 0, { MCK_IntRegs }, },
  { 2656 /* tne */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_9, 0, { MCK_Imm }, },
  { 2656 /* tne */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2656 /* tne */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2656 /* tne */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2656 /* tne */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2656 /* tne */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2656 /* tne */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2656 /* tne */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2656 /* tne */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2656 /* tne */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2656 /* tne */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2660 /* tneg */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_6, 0, { MCK_IntRegs }, },
  { 2660 /* tneg */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_6, 0, { MCK_Imm }, },
  { 2660 /* tneg */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2660 /* tneg */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2660 /* tneg */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2660 /* tneg */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_6, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2660 /* tneg */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_6, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2660 /* tneg */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_6, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2660 /* tneg */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2660 /* tneg */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2660 /* tneg */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2660 /* tneg */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2665 /* tpos */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_14, 0, { MCK_IntRegs }, },
  { 2665 /* tpos */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_14, 0, { MCK_Imm }, },
  { 2665 /* tpos */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2665 /* tpos */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2665 /* tpos */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2665 /* tpos */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_14, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2665 /* tpos */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_14, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2665 /* tpos */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_14, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2665 /* tpos */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2665 /* tpos */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2665 /* tpos */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2665 /* tpos */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2670 /* tsubcc */, Sparc::TSUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2670 /* tsubcc */, Sparc::TSUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2677 /* tsubcctv */, Sparc::TSUBCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2677 /* tsubcctv */, Sparc::TSUBCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_15, 0, { MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_15, 0, { MCK_Imm }, },
  { 2686 /* tvc */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2686 /* tvc */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_15, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2686 /* tvc */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_15, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_15, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2686 /* tvc */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2686 /* tvc */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2686 /* tvc */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2690 /* tvs */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_7, 0, { MCK_IntRegs }, },
  { 2690 /* tvs */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_7, 0, { MCK_Imm }, },
  { 2690 /* tvs */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2690 /* tvs */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2690 /* tvs */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2690 /* tvs */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_7, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2690 /* tvs */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_7, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2690 /* tvs */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_7, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2690 /* tvs */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2690 /* tvs */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2690 /* tvs */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2690 /* tvs */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2694 /* udiv */, Sparc::UDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2694 /* udiv */, Sparc::UDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2699 /* udivcc */, Sparc::UDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2699 /* udivcc */, Sparc::UDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2706 /* udivx */, Sparc::UDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2706 /* udivx */, Sparc::UDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2712 /* umul */, Sparc::UMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2712 /* umul */, Sparc::UMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2717 /* umulcc */, Sparc::UMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2717 /* umulcc */, Sparc::UMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2724 /* umulxhi */, Sparc::UMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2732 /* unimp */, Sparc::UNIMP, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 2738 /* wr */, Sparc::WRYrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_y }, },
  { 2738 /* wr */, Sparc::WRYri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_y }, },
  { 2741 /* xmulx */, Sparc::XMULX, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2747 /* xmulxhi */, Sparc::XMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2755 /* xnor */, Sparc::XNORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2755 /* xnor */, Sparc::XNORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2760 /* xnorcc */, Sparc::XNORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2760 /* xnorcc */, Sparc::XNORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2767 /* xor */, Sparc::XORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2767 /* xor */, Sparc::XORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2771 /* xorcc */, Sparc::XORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2771 /* xorcc */, Sparc::XORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
};

bool SparcAsmParser::
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

unsigned SparcAsmParser::
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
  StringRef Mnemonic = ((SparcOperand&)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

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

static const OperandMatchEntry OperandMatchTable[44] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 212 /* call */, MCK_MEMri, 1 /* 0 */ },
  { 0, 212 /* call */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2113 /* jmp */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2113 /* jmp */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2117 /* jmpl */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2117 /* jmpl */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2122 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2122 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2122 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2122 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2125 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2125 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2129 /* ldq */, MCK_MEMri, 2 /* 1 */ },
  { Feature_HasV9, 2129 /* ldq */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2133 /* ldsb */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2133 /* ldsb */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2138 /* ldsh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2138 /* ldsh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2143 /* ldsw */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2143 /* ldsw */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2148 /* ldub */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2148 /* ldub */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2153 /* lduh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2153 /* lduh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2158 /* ldx */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2158 /* ldx */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2455 /* rett */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2455 /* rett */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2542 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2542 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2542 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2542 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2545 /* stb */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2545 /* stb */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2555 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2555 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2559 /* sth */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2559 /* sth */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2563 /* stq */, MCK_MEMri, 4 /* 2 */ },
  { Feature_HasV9, 2563 /* stq */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2567 /* stx */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2567 /* stx */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2593 /* swap */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2593 /* swap */, MCK_MEMrr, 2 /* 1 */ },
};

SparcAsmParser::OperandMatchResultTy SparcAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_MEMri:
    return parseMEMOperand(Operands);
  case MCK_MEMrr:
    return parseMEMOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SparcAsmParser::OperandMatchResultTy SparcAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+44, Mnemonic,
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

