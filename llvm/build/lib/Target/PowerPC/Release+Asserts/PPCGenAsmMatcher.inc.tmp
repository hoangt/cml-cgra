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
#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  return "(unknown)";
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegG8RCOperands,
  CVT_95_addTLSRegOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_95_addS16ImmOperands,
  CVT_95_addU16ImmOperands,
  CVT_95_addBranchTargetOperands,
  CVT_95_addImmOperands,
  CVT_95_addRegCRBITRCOperands,
  CVT_imm_0,
  CVT_imm_8,
  CVT_imm_2,
  CVT_imm_10,
  CVT_imm_76,
  CVT_regCR0,
  CVT_95_addRegCRRCOperands,
  CVT_imm_79,
  CVT_imm_78,
  CVT_imm_4,
  CVT_imm_7,
  CVT_imm_6,
  CVT_imm_44,
  CVT_imm_47,
  CVT_imm_46,
  CVT_imm_36,
  CVT_imm_39,
  CVT_imm_38,
  CVT_imm_12,
  CVT_imm_15,
  CVT_imm_14,
  CVT_imm_68,
  CVT_imm_71,
  CVT_imm_70,
  CVT_imm_100,
  CVT_imm_103,
  CVT_imm_102,
  CVT_imm_108,
  CVT_imm_111,
  CVT_imm_110,
  CVT_imm_31,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_regR0,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_95_addRegVRRCOperands,
  CVT_imm_1,
  CVT_95_addRegVSFRCOperands,
  CVT_95_addRegVSRCOperands,
  CVT_imm_29,
  CVT_imm_280,
  CVT_imm_128,
  CVT_imm_129,
  CVT_imm_130,
  CVT_imm_131,
  CVT_imm_132,
  CVT_imm_133,
  CVT_imm_134,
  CVT_imm_135,
  CVT_imm_28,
  CVT_imm_19,
  CVT_imm_537,
  CVT_imm_539,
  CVT_imm_541,
  CVT_imm_543,
  CVT_imm_536,
  CVT_imm_538,
  CVT_imm_540,
  CVT_imm_542,
  CVT_imm_1018,
  CVT_imm_981,
  CVT_imm_22,
  CVT_imm_17,
  CVT_imm_18,
  CVT_imm_980,
  CVT_imm_529,
  CVT_imm_531,
  CVT_imm_533,
  CVT_imm_535,
  CVT_imm_528,
  CVT_imm_530,
  CVT_imm_532,
  CVT_imm_534,
  CVT_imm_1019,
  CVT_95_addCRBitMaskOperands,
  CVT_imm_48,
  CVT_imm_287,
  CVT_imm_5,
  CVT_imm_25,
  CVT_imm_512,
  CVT_imm_272,
  CVT_imm_273,
  CVT_imm_274,
  CVT_imm_275,
  CVT_imm_260,
  CVT_imm_261,
  CVT_imm_262,
  CVT_imm_263,
  CVT_imm_26,
  CVT_imm_27,
  CVT_imm_990,
  CVT_imm_991,
  CVT_imm_268,
  CVT_imm_988,
  CVT_imm_989,
  CVT_imm_269,
  CVT_imm_986,
  CVT_imm_255,
  CVT_imm_284,
  CVT_imm_285,
  CVT_imm_20,
  CVT_imm_16,
  CVT_imm_24,
  CVT_imm_3,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert__DirectBr1_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__RegCRBITRC1_1__imm_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2,
  Convert_NoOperands,
  Convert__CondBr1_0,
  Convert__imm_0__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_0__RegCRBITRC1_0__imm_0,
  Convert__imm_8__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_8__RegCRBITRC1_0__imm_0,
  Convert__imm_2__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_2__RegCRBITRC1_0__imm_0,
  Convert__imm_10__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_10__RegCRBITRC1_0__imm_0,
  Convert__imm_76__regCR0__CondBr1_0,
  Convert__imm_76__RegCRRC1_0__CondBr1_1,
  Convert__imm_79__regCR0__CondBr1_0,
  Convert__imm_79__RegCRRC1_0__CondBr1_1,
  Convert__imm_78__regCR0__CondBr1_0,
  Convert__imm_78__RegCRRC1_0__CondBr1_1,
  Convert__imm_76__regCR0,
  Convert__imm_76__RegCRRC1_0,
  Convert__imm_79__regCR0,
  Convert__imm_79__RegCRRC1_0,
  Convert__imm_78__regCR0,
  Convert__imm_78__RegCRRC1_0,
  Convert__imm_4__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_7__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_6__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_4__RegCRBITRC1_0__imm_0,
  Convert__imm_7__RegCRBITRC1_0__imm_0,
  Convert__imm_6__RegCRBITRC1_0__imm_0,
  Convert__imm_4__regCR0__CondBr1_0,
  Convert__imm_4__RegCRRC1_0__CondBr1_1,
  Convert__imm_7__regCR0__CondBr1_0,
  Convert__imm_7__RegCRRC1_0__CondBr1_1,
  Convert__imm_6__regCR0__CondBr1_0,
  Convert__imm_6__RegCRRC1_0__CondBr1_1,
  Convert__imm_4__regCR0,
  Convert__imm_4__RegCRRC1_0,
  Convert__imm_7__regCR0,
  Convert__imm_7__RegCRRC1_0,
  Convert__imm_6__regCR0,
  Convert__imm_6__RegCRRC1_0,
  Convert__imm_44__regCR0__CondBr1_0,
  Convert__imm_44__RegCRRC1_0__CondBr1_1,
  Convert__imm_47__regCR0__CondBr1_0,
  Convert__imm_47__RegCRRC1_0__CondBr1_1,
  Convert__imm_46__regCR0__CondBr1_0,
  Convert__imm_46__RegCRRC1_0__CondBr1_1,
  Convert__imm_44__regCR0,
  Convert__imm_44__RegCRRC1_0,
  Convert__imm_47__regCR0,
  Convert__imm_47__RegCRRC1_0,
  Convert__imm_46__regCR0,
  Convert__imm_46__RegCRRC1_0,
  Convert__DirectBr1_0__Imm1_1,
  Convert__imm_36__regCR0__CondBr1_0,
  Convert__imm_36__RegCRRC1_0__CondBr1_1,
  Convert__imm_39__regCR0__CondBr1_0,
  Convert__imm_39__RegCRRC1_0__CondBr1_1,
  Convert__imm_38__regCR0__CondBr1_0,
  Convert__imm_38__RegCRRC1_0__CondBr1_1,
  Convert__imm_36__regCR0,
  Convert__imm_36__RegCRRC1_0,
  Convert__imm_39__regCR0,
  Convert__imm_39__RegCRRC1_0,
  Convert__imm_38__regCR0,
  Convert__imm_38__RegCRRC1_0,
  Convert__imm_12__regCR0__CondBr1_0,
  Convert__imm_12__RegCRRC1_0__CondBr1_1,
  Convert__imm_15__regCR0__CondBr1_0,
  Convert__imm_15__RegCRRC1_0__CondBr1_1,
  Convert__imm_14__regCR0__CondBr1_0,
  Convert__imm_14__RegCRRC1_0__CondBr1_1,
  Convert__imm_12__regCR0,
  Convert__imm_12__RegCRRC1_0,
  Convert__imm_15__regCR0,
  Convert__imm_15__RegCRRC1_0,
  Convert__imm_14__regCR0,
  Convert__imm_14__RegCRRC1_0,
  Convert__imm_68__regCR0__CondBr1_0,
  Convert__imm_68__RegCRRC1_0__CondBr1_1,
  Convert__imm_71__regCR0__CondBr1_0,
  Convert__imm_71__RegCRRC1_0__CondBr1_1,
  Convert__imm_70__regCR0__CondBr1_0,
  Convert__imm_70__RegCRRC1_0__CondBr1_1,
  Convert__imm_68__regCR0,
  Convert__imm_68__RegCRRC1_0,
  Convert__imm_71__regCR0,
  Convert__imm_71__RegCRRC1_0,
  Convert__imm_70__regCR0,
  Convert__imm_70__RegCRRC1_0,
  Convert__imm_100__regCR0__CondBr1_0,
  Convert__imm_100__RegCRRC1_0__CondBr1_1,
  Convert__imm_103__regCR0__CondBr1_0,
  Convert__imm_103__RegCRRC1_0__CondBr1_1,
  Convert__imm_102__regCR0__CondBr1_0,
  Convert__imm_102__RegCRRC1_0__CondBr1_1,
  Convert__imm_100__regCR0,
  Convert__imm_100__RegCRRC1_0,
  Convert__imm_103__regCR0,
  Convert__imm_103__RegCRRC1_0,
  Convert__imm_102__regCR0,
  Convert__imm_102__RegCRRC1_0,
  Convert__imm_108__regCR0__CondBr1_0,
  Convert__imm_108__RegCRRC1_0__CondBr1_1,
  Convert__imm_111__regCR0__CondBr1_0,
  Convert__imm_111__RegCRRC1_0__CondBr1_1,
  Convert__imm_110__regCR0__CondBr1_0,
  Convert__imm_110__RegCRRC1_0__CondBr1_1,
  Convert__imm_108__regCR0,
  Convert__imm_108__RegCRRC1_0,
  Convert__imm_111__regCR0,
  Convert__imm_111__RegCRRC1_0,
  Convert__imm_110__regCR0,
  Convert__imm_110__RegCRRC1_0,
  Convert__imm_12__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_15__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_14__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_12__RegCRBITRC1_0__imm_0,
  Convert__imm_15__RegCRBITRC1_0__imm_0,
  Convert__imm_14__RegCRBITRC1_0__imm_0,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_0__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_0__U6Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_0__U5Imm1_2__imm_31,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_0__U5Imm1_3__imm_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegG8RC1_0__RegG8RC1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__regCR0__RegG8RC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3,
  Convert__regCR0__RegG8RC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3,
  Convert__regCR0__RegGPRC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__regCR0__RegGPRC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__regCR0__RegGPRC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__regR0__regR0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__U5Imm1_0,
  Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1,
  Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__Imm1_1,
  Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__S17Imm1_1,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_1,
  Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegGPRC1_0__imm_29,
  Convert__RegGPRC1_0__imm_280,
  Convert__RegGPRC1_0__imm_128,
  Convert__RegGPRC1_0__imm_129,
  Convert__RegGPRC1_0__imm_130,
  Convert__RegGPRC1_0__imm_131,
  Convert__RegGPRC1_0__imm_132,
  Convert__RegGPRC1_0__imm_133,
  Convert__RegGPRC1_0__imm_134,
  Convert__RegGPRC1_0__imm_135,
  Convert__RegGPRC1_0__imm_28,
  Convert__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_19,
  Convert__RegGPRC1_0__imm_537,
  Convert__RegGPRC1_0__imm_539,
  Convert__RegGPRC1_0__imm_541,
  Convert__RegGPRC1_0__imm_543,
  Convert__RegGPRC1_0__imm_536,
  Convert__RegGPRC1_0__imm_538,
  Convert__RegGPRC1_0__imm_540,
  Convert__RegGPRC1_0__imm_542,
  Convert__RegGPRC1_0__imm_1018,
  Convert__RegGPRC1_0__imm_981,
  Convert__RegGPRC1_0__imm_22,
  Convert__RegGPRC1_0__imm_17,
  Convert__RegGPRC1_0__imm_18,
  Convert__RegGPRC1_0__imm_980,
  Convert__RegF8RC1_0,
  Convert__RegGPRC1_0__imm_529,
  Convert__RegGPRC1_0__imm_531,
  Convert__RegGPRC1_0__imm_533,
  Convert__RegGPRC1_0__imm_535,
  Convert__RegGPRC1_0__imm_528,
  Convert__RegGPRC1_0__imm_530,
  Convert__RegGPRC1_0__imm_532,
  Convert__RegGPRC1_0__imm_534,
  Convert__RegGPRC1_0__imm_1019,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__imm_48,
  Convert__RegGPRC1_0__imm_287,
  Convert__RegGPRC1_0__imm_5,
  Convert__RegGPRC1_0__imm_4,
  Convert__RegGPRC1_0__imm_25,
  Convert__RegGPRC1_0__imm_512,
  Convert__RegGPRC1_0__imm_272,
  Convert__RegGPRC1_0__imm_273,
  Convert__RegGPRC1_0__imm_274,
  Convert__RegGPRC1_0__imm_275,
  Convert__RegGPRC1_0__imm_260,
  Convert__RegGPRC1_0__imm_261,
  Convert__RegGPRC1_0__imm_262,
  Convert__RegGPRC1_0__imm_263,
  Convert__RegGPRC1_0__U4Imm1_1,
  Convert__RegGPRC1_0__imm_26,
  Convert__RegGPRC1_0__imm_27,
  Convert__RegGPRC1_0__imm_990,
  Convert__RegGPRC1_0__imm_991,
  Convert__RegGPRC1_0__imm_268,
  Convert__RegGPRC1_0__imm_988,
  Convert__RegGPRC1_0__imm_989,
  Convert__RegGPRC1_0__imm_269,
  Convert__RegGPRC1_0__imm_986,
  Convert__RegVRRC1_0,
  Convert__RegGPRC1_0__imm_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2,
  Convert__imm_29__RegGPRC1_0,
  Convert__imm_280__RegGPRC1_0,
  Convert__imm_28__RegGPRC1_0,
  Convert__imm_255__RegG8RC1_0,
  Convert__Imm1_0__RegGPRC1_1,
  Convert__imm_19__RegGPRC1_0,
  Convert__imm_537__RegGPRC1_1,
  Convert__imm_539__RegGPRC1_1,
  Convert__imm_541__RegGPRC1_1,
  Convert__imm_543__RegGPRC1_1,
  Convert__imm_536__RegGPRC1_1,
  Convert__imm_538__RegGPRC1_1,
  Convert__imm_540__RegGPRC1_1,
  Convert__imm_542__RegGPRC1_1,
  Convert__imm_1018__RegGPRC1_0,
  Convert__RegGPRC1_1__Imm1_0,
  Convert__imm_981__RegGPRC1_0,
  Convert__imm_22__RegGPRC1_0,
  Convert__imm_17__RegGPRC1_0,
  Convert__imm_18__RegGPRC1_0,
  Convert__imm_980__RegGPRC1_0,
  Convert__Imm1_0__RegF8RC1_1,
  Convert__imm_529__RegGPRC1_1,
  Convert__imm_531__RegGPRC1_1,
  Convert__imm_533__RegGPRC1_1,
  Convert__imm_535__RegGPRC1_1,
  Convert__imm_528__RegGPRC1_1,
  Convert__imm_530__RegGPRC1_1,
  Convert__imm_532__RegGPRC1_1,
  Convert__imm_534__RegGPRC1_1,
  Convert__imm_1019__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_0,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__imm_48__RegGPRC1_0,
  Convert__imm_25__RegGPRC1_0,
  Convert__imm_512__RegGPRC1_0,
  Convert__imm_272__RegGPRC1_1,
  Convert__imm_273__RegGPRC1_1,
  Convert__imm_274__RegGPRC1_1,
  Convert__imm_275__RegGPRC1_1,
  Convert__imm_260__RegGPRC1_1,
  Convert__imm_261__RegGPRC1_1,
  Convert__imm_262__RegGPRC1_1,
  Convert__imm_263__RegGPRC1_1,
  Convert__imm_272__RegGPRC1_0,
  Convert__imm_273__RegGPRC1_0,
  Convert__imm_274__RegGPRC1_0,
  Convert__imm_275__RegGPRC1_0,
  Convert__imm_260__RegGPRC1_0,
  Convert__imm_261__RegGPRC1_0,
  Convert__imm_262__RegGPRC1_0,
  Convert__imm_263__RegGPRC1_0,
  Convert__RegGPRC1_1__U4Imm1_0,
  Convert__imm_26__RegGPRC1_0,
  Convert__imm_27__RegGPRC1_0,
  Convert__imm_990__RegGPRC1_0,
  Convert__imm_991__RegGPRC1_0,
  Convert__imm_988__RegGPRC1_0,
  Convert__imm_284__RegGPRC1_0,
  Convert__imm_989__RegGPRC1_0,
  Convert__imm_285__RegGPRC1_0,
  Convert__imm_986__RegGPRC1_0,
  Convert__imm_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__imm_2,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_0,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_0,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_0__imm_31,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_0__imm_31,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_0__imm_31,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_0__imm_31,
  Convert__Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2,
  Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_4__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_4__RegG8RC1_0__S16Imm1_1,
  Convert__imm_12__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_12__RegG8RC1_0__S16Imm1_1,
  Convert__imm_8__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_8__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2,
  Convert__imm_20__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_20__RegG8RC1_0__S16Imm1_1,
  Convert__imm_5__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_5__RegG8RC1_0__S16Imm1_1,
  Convert__imm_1__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_1__RegG8RC1_0__S16Imm1_1,
  Convert__imm_6__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_6__RegG8RC1_0__S16Imm1_1,
  Convert__imm_2__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_2__RegG8RC1_0__S16Imm1_1,
  Convert__imm_16__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_16__RegG8RC1_0__S16Imm1_1,
  Convert__imm_24__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_24__RegG8RC1_0__S16Imm1_1,
  Convert__imm_31__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_31__RegG8RC1_0__S16Imm1_1,
  Convert__regR0__RegGPRC1_0,
  Convert__RegGPRC1_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_0,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_1,
  Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__imm_4__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_4__RegGPRC1_0__S16Imm1_1,
  Convert__imm_12__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_12__RegGPRC1_0__S16Imm1_1,
  Convert__imm_8__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_8__RegGPRC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2,
  Convert__imm_20__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_20__RegGPRC1_0__S16Imm1_1,
  Convert__imm_5__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_5__RegGPRC1_0__S16Imm1_1,
  Convert__imm_1__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_1__RegGPRC1_0__S16Imm1_1,
  Convert__imm_6__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_6__RegGPRC1_0__S16Imm1_1,
  Convert__imm_2__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_2__RegGPRC1_0__S16Imm1_1,
  Convert__imm_16__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_16__RegGPRC1_0__S16Imm1_1,
  Convert__imm_24__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_24__RegGPRC1_0__S16Imm1_1,
  Convert__imm_31__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_31__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  Convert__regR0__regR0__imm_0,
  Convert__RegVSFRC1_0__RegVSFRC1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1,
  Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegCRRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_3,
  Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__DirectBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__imm_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__CondBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_0__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_0__RegCRBITRC1_0__imm_0
  { CVT_imm_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_8__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_8__RegCRBITRC1_0__imm_0
  { CVT_imm_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_2__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_2__RegCRBITRC1_0__imm_0
  { CVT_imm_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_10__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_10__RegCRBITRC1_0__imm_0
  { CVT_imm_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_76__regCR0__CondBr1_0
  { CVT_imm_76, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_76__RegCRRC1_0__CondBr1_1
  { CVT_imm_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_79__regCR0__CondBr1_0
  { CVT_imm_79, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_79__RegCRRC1_0__CondBr1_1
  { CVT_imm_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_78__regCR0__CondBr1_0
  { CVT_imm_78, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_78__RegCRRC1_0__CondBr1_1
  { CVT_imm_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_76__regCR0
  { CVT_imm_76, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_76__RegCRRC1_0
  { CVT_imm_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_79__regCR0
  { CVT_imm_79, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_79__RegCRRC1_0
  { CVT_imm_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_78__regCR0
  { CVT_imm_78, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_78__RegCRRC1_0
  { CVT_imm_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_4__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_7__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_6__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_4__RegCRBITRC1_0__imm_0
  { CVT_imm_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_7__RegCRBITRC1_0__imm_0
  { CVT_imm_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_6__RegCRBITRC1_0__imm_0
  { CVT_imm_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_4__regCR0__CondBr1_0
  { CVT_imm_4, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_4__RegCRRC1_0__CondBr1_1
  { CVT_imm_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_7__regCR0__CondBr1_0
  { CVT_imm_7, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_7__RegCRRC1_0__CondBr1_1
  { CVT_imm_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_6__regCR0__CondBr1_0
  { CVT_imm_6, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_6__RegCRRC1_0__CondBr1_1
  { CVT_imm_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_4__regCR0
  { CVT_imm_4, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_4__RegCRRC1_0
  { CVT_imm_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_7__regCR0
  { CVT_imm_7, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_7__RegCRRC1_0
  { CVT_imm_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_6__regCR0
  { CVT_imm_6, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_6__RegCRRC1_0
  { CVT_imm_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_44__regCR0__CondBr1_0
  { CVT_imm_44, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_44__RegCRRC1_0__CondBr1_1
  { CVT_imm_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_47__regCR0__CondBr1_0
  { CVT_imm_47, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_47__RegCRRC1_0__CondBr1_1
  { CVT_imm_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_46__regCR0__CondBr1_0
  { CVT_imm_46, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_46__RegCRRC1_0__CondBr1_1
  { CVT_imm_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_44__regCR0
  { CVT_imm_44, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_44__RegCRRC1_0
  { CVT_imm_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_47__regCR0
  { CVT_imm_47, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_47__RegCRRC1_0
  { CVT_imm_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_46__regCR0
  { CVT_imm_46, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_46__RegCRRC1_0
  { CVT_imm_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__DirectBr1_0__Imm1_1
  { CVT_95_addBranchTargetOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_36__regCR0__CondBr1_0
  { CVT_imm_36, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_36__RegCRRC1_0__CondBr1_1
  { CVT_imm_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_39__regCR0__CondBr1_0
  { CVT_imm_39, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_39__RegCRRC1_0__CondBr1_1
  { CVT_imm_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_38__regCR0__CondBr1_0
  { CVT_imm_38, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_38__RegCRRC1_0__CondBr1_1
  { CVT_imm_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_36__regCR0
  { CVT_imm_36, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_36__RegCRRC1_0
  { CVT_imm_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_39__regCR0
  { CVT_imm_39, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_39__RegCRRC1_0
  { CVT_imm_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_38__regCR0
  { CVT_imm_38, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_38__RegCRRC1_0
  { CVT_imm_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_12__regCR0__CondBr1_0
  { CVT_imm_12, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_12__RegCRRC1_0__CondBr1_1
  { CVT_imm_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_15__regCR0__CondBr1_0
  { CVT_imm_15, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_15__RegCRRC1_0__CondBr1_1
  { CVT_imm_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_14__regCR0__CondBr1_0
  { CVT_imm_14, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_14__RegCRRC1_0__CondBr1_1
  { CVT_imm_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_12__regCR0
  { CVT_imm_12, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_12__RegCRRC1_0
  { CVT_imm_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_15__regCR0
  { CVT_imm_15, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_15__RegCRRC1_0
  { CVT_imm_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_14__regCR0
  { CVT_imm_14, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_14__RegCRRC1_0
  { CVT_imm_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_68__regCR0__CondBr1_0
  { CVT_imm_68, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_68__RegCRRC1_0__CondBr1_1
  { CVT_imm_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_71__regCR0__CondBr1_0
  { CVT_imm_71, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_71__RegCRRC1_0__CondBr1_1
  { CVT_imm_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_70__regCR0__CondBr1_0
  { CVT_imm_70, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_70__RegCRRC1_0__CondBr1_1
  { CVT_imm_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_68__regCR0
  { CVT_imm_68, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_68__RegCRRC1_0
  { CVT_imm_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_71__regCR0
  { CVT_imm_71, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_71__RegCRRC1_0
  { CVT_imm_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_70__regCR0
  { CVT_imm_70, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_70__RegCRRC1_0
  { CVT_imm_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_100__regCR0__CondBr1_0
  { CVT_imm_100, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_100__RegCRRC1_0__CondBr1_1
  { CVT_imm_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_103__regCR0__CondBr1_0
  { CVT_imm_103, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_103__RegCRRC1_0__CondBr1_1
  { CVT_imm_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_102__regCR0__CondBr1_0
  { CVT_imm_102, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_102__RegCRRC1_0__CondBr1_1
  { CVT_imm_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_100__regCR0
  { CVT_imm_100, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_100__RegCRRC1_0
  { CVT_imm_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_103__regCR0
  { CVT_imm_103, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_103__RegCRRC1_0
  { CVT_imm_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_102__regCR0
  { CVT_imm_102, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_102__RegCRRC1_0
  { CVT_imm_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_108__regCR0__CondBr1_0
  { CVT_imm_108, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_108__RegCRRC1_0__CondBr1_1
  { CVT_imm_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_111__regCR0__CondBr1_0
  { CVT_imm_111, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_111__RegCRRC1_0__CondBr1_1
  { CVT_imm_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_110__regCR0__CondBr1_0
  { CVT_imm_110, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_110__RegCRRC1_0__CondBr1_1
  { CVT_imm_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_108__regCR0
  { CVT_imm_108, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_108__RegCRRC1_0
  { CVT_imm_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_111__regCR0
  { CVT_imm_111, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_111__RegCRRC1_0
  { CVT_imm_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_110__regCR0
  { CVT_imm_110, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_110__RegCRRC1_0
  { CVT_imm_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_12__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_15__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_14__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_12__RegCRBITRC1_0__imm_0
  { CVT_imm_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_15__RegCRBITRC1_0__imm_0
  { CVT_imm_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_14__RegCRBITRC1_0__imm_0
  { CVT_imm_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_0__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_0, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_0__U5Imm1_2__imm_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_0, 0, CVT_95_addImmOperands, 3, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_0__U5Imm1_3__imm_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_0, 0, CVT_95_addImmOperands, 4, CVT_imm_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__RegG8RC1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__RegGPRC1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__regR0__regR0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_1
  { CVT_imm_1, 0, CVT_Done },
  // Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0
  { CVT_imm_0, 0, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_29
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_29, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_280
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_128
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_128, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_129
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_129, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_130
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_130, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_131
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_131, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_132
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_132, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_133
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_133, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_134
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_134, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_135
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_135, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_28
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_28, 0, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_19
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_537
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_537, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_539
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_539, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_541
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_541, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_543
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_543, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_536
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_536, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_538
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_538, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_540
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_540, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_542
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_542, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_1018
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_1018, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_981
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_981, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_22
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_22, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_17
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_17, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_18
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_980
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_980, 0, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_529
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_529, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_531
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_531, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_533
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_533, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_535
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_535, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_528
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_528, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_530
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_530, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_532
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_532, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_534
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_534, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_1019
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_1019, 0, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_48
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_48, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_287
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_287, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_5
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_5, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_4
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_4, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_25
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_25, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_512
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_512, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_272
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_272, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_273
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_273, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_274
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_274, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_275
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_260
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_260, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_261
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_261, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_262
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_262, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_263
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_263, 0, CVT_Done },
  // Convert__RegGPRC1_0__U4Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_26
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_26, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_27
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_990
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_990, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_991
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_991, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_268
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_268, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_988
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_988, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_989
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_989, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_269
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_269, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_986
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_986, 0, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_1
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_1, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_29__RegGPRC1_0
  { CVT_imm_29, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_280__RegGPRC1_0
  { CVT_imm_280, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_28__RegGPRC1_0
  { CVT_imm_28, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_255__RegG8RC1_0
  { CVT_imm_255, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_19__RegGPRC1_0
  { CVT_imm_19, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_537__RegGPRC1_1
  { CVT_imm_537, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_539__RegGPRC1_1
  { CVT_imm_539, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_541__RegGPRC1_1
  { CVT_imm_541, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_543__RegGPRC1_1
  { CVT_imm_543, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_536__RegGPRC1_1
  { CVT_imm_536, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_538__RegGPRC1_1
  { CVT_imm_538, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_540__RegGPRC1_1
  { CVT_imm_540, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_542__RegGPRC1_1
  { CVT_imm_542, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_1018__RegGPRC1_0
  { CVT_imm_1018, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_981__RegGPRC1_0
  { CVT_imm_981, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_22__RegGPRC1_0
  { CVT_imm_22, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_17__RegGPRC1_0
  { CVT_imm_17, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_18__RegGPRC1_0
  { CVT_imm_18, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_980__RegGPRC1_0
  { CVT_imm_980, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__imm_529__RegGPRC1_1
  { CVT_imm_529, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_531__RegGPRC1_1
  { CVT_imm_531, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_533__RegGPRC1_1
  { CVT_imm_533, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_535__RegGPRC1_1
  { CVT_imm_535, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_528__RegGPRC1_1
  { CVT_imm_528, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_530__RegGPRC1_1
  { CVT_imm_530, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_532__RegGPRC1_1
  { CVT_imm_532, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_534__RegGPRC1_1
  { CVT_imm_534, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_1019__RegGPRC1_0
  { CVT_imm_1019, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_0
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_48__RegGPRC1_0
  { CVT_imm_48, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_25__RegGPRC1_0
  { CVT_imm_25, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_512__RegGPRC1_0
  { CVT_imm_512, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_272__RegGPRC1_1
  { CVT_imm_272, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_273__RegGPRC1_1
  { CVT_imm_273, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_274__RegGPRC1_1
  { CVT_imm_274, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_275__RegGPRC1_1
  { CVT_imm_275, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_260__RegGPRC1_1
  { CVT_imm_260, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_261__RegGPRC1_1
  { CVT_imm_261, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_262__RegGPRC1_1
  { CVT_imm_262, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_263__RegGPRC1_1
  { CVT_imm_263, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_272__RegGPRC1_0
  { CVT_imm_272, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_273__RegGPRC1_0
  { CVT_imm_273, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_274__RegGPRC1_0
  { CVT_imm_274, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_275__RegGPRC1_0
  { CVT_imm_275, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_260__RegGPRC1_0
  { CVT_imm_260, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_261__RegGPRC1_0
  { CVT_imm_261, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_262__RegGPRC1_0
  { CVT_imm_262, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_263__RegGPRC1_0
  { CVT_imm_263, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__U4Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_26__RegGPRC1_0
  { CVT_imm_26, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_27__RegGPRC1_0
  { CVT_imm_27, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_990__RegGPRC1_0
  { CVT_imm_990, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_991__RegGPRC1_0
  { CVT_imm_991, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_988__RegGPRC1_0
  { CVT_imm_988, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_284__RegGPRC1_0
  { CVT_imm_284, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_989__RegGPRC1_0
  { CVT_imm_989, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_285__RegGPRC1_0
  { CVT_imm_285, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_986__RegGPRC1_0
  { CVT_imm_986, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_1__RegGPRC1_0
  { CVT_imm_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__imm_2
  { CVT_imm_2, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_4__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_4__RegG8RC1_0__S16Imm1_1
  { CVT_imm_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_12__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_12__RegG8RC1_0__S16Imm1_1
  { CVT_imm_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_8__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_8__RegG8RC1_0__S16Imm1_1
  { CVT_imm_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_20__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_20__RegG8RC1_0__S16Imm1_1
  { CVT_imm_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_5__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_5__RegG8RC1_0__S16Imm1_1
  { CVT_imm_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_1__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_1__RegG8RC1_0__S16Imm1_1
  { CVT_imm_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_6__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_6__RegG8RC1_0__S16Imm1_1
  { CVT_imm_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_2__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_2__RegG8RC1_0__S16Imm1_1
  { CVT_imm_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_16__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_16__RegG8RC1_0__S16Imm1_1
  { CVT_imm_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_24__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_24__RegG8RC1_0__S16Imm1_1
  { CVT_imm_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_31__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_31__RegG8RC1_0__S16Imm1_1
  { CVT_imm_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__regR0__RegGPRC1_0
  { CVT_regR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_1, 0, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_4__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_4__RegGPRC1_0__S16Imm1_1
  { CVT_imm_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_12__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_12__RegGPRC1_0__S16Imm1_1
  { CVT_imm_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_8__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_8__RegGPRC1_0__S16Imm1_1
  { CVT_imm_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_20__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_20__RegGPRC1_0__S16Imm1_1
  { CVT_imm_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_5__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_5__RegGPRC1_0__S16Imm1_1
  { CVT_imm_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_1__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_1__RegGPRC1_0__S16Imm1_1
  { CVT_imm_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_6__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_6__RegGPRC1_0__S16Imm1_1
  { CVT_imm_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_2__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_2__RegGPRC1_0__S16Imm1_1
  { CVT_imm_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_16__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_16__RegGPRC1_0__S16Imm1_1
  { CVT_imm_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_24__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_24__RegGPRC1_0__S16Imm1_1
  { CVT_imm_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_31__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_31__RegGPRC1_0__S16Imm1_1
  { CVT_imm_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regR0__regR0__imm_0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_2, 0, CVT_Done },
};

void PPCAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addTLSRegOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addTLSRegOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addS16ImmOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addS16ImmOperands(Inst, 1);
      break;
    case CVT_95_addU16ImmOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addU16ImmOperands(Inst, 1);
      break;
    case CVT_95_addBranchTargetOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addBranchTargetOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_imm_8:
      Inst.addOperand(MCOperand::CreateImm(8));
      break;
    case CVT_imm_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_10:
      Inst.addOperand(MCOperand::CreateImm(10));
      break;
    case CVT_imm_76:
      Inst.addOperand(MCOperand::CreateImm(76));
      break;
    case CVT_regCR0:
      Inst.addOperand(MCOperand::CreateReg(PPC::CR0));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_79:
      Inst.addOperand(MCOperand::CreateImm(79));
      break;
    case CVT_imm_78:
      Inst.addOperand(MCOperand::CreateImm(78));
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_7:
      Inst.addOperand(MCOperand::CreateImm(7));
      break;
    case CVT_imm_6:
      Inst.addOperand(MCOperand::CreateImm(6));
      break;
    case CVT_imm_44:
      Inst.addOperand(MCOperand::CreateImm(44));
      break;
    case CVT_imm_47:
      Inst.addOperand(MCOperand::CreateImm(47));
      break;
    case CVT_imm_46:
      Inst.addOperand(MCOperand::CreateImm(46));
      break;
    case CVT_imm_36:
      Inst.addOperand(MCOperand::CreateImm(36));
      break;
    case CVT_imm_39:
      Inst.addOperand(MCOperand::CreateImm(39));
      break;
    case CVT_imm_38:
      Inst.addOperand(MCOperand::CreateImm(38));
      break;
    case CVT_imm_12:
      Inst.addOperand(MCOperand::CreateImm(12));
      break;
    case CVT_imm_15:
      Inst.addOperand(MCOperand::CreateImm(15));
      break;
    case CVT_imm_14:
      Inst.addOperand(MCOperand::CreateImm(14));
      break;
    case CVT_imm_68:
      Inst.addOperand(MCOperand::CreateImm(68));
      break;
    case CVT_imm_71:
      Inst.addOperand(MCOperand::CreateImm(71));
      break;
    case CVT_imm_70:
      Inst.addOperand(MCOperand::CreateImm(70));
      break;
    case CVT_imm_100:
      Inst.addOperand(MCOperand::CreateImm(100));
      break;
    case CVT_imm_103:
      Inst.addOperand(MCOperand::CreateImm(103));
      break;
    case CVT_imm_102:
      Inst.addOperand(MCOperand::CreateImm(102));
      break;
    case CVT_imm_108:
      Inst.addOperand(MCOperand::CreateImm(108));
      break;
    case CVT_imm_111:
      Inst.addOperand(MCOperand::CreateImm(111));
      break;
    case CVT_imm_110:
      Inst.addOperand(MCOperand::CreateImm(110));
      break;
    case CVT_imm_31:
      Inst.addOperand(MCOperand::CreateImm(31));
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGxRCOperands(Inst, 1);
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::CreateReg(PPC::R0));
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegF8RCOperands(Inst, 1);
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegVRRCOperands(Inst, 1);
      break;
    case CVT_imm_1:
      Inst.addOperand(MCOperand::CreateImm(1));
      break;
    case CVT_95_addRegVSFRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegVSFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegVSRCOperands(Inst, 1);
      break;
    case CVT_imm_29:
      Inst.addOperand(MCOperand::CreateImm(29));
      break;
    case CVT_imm_280:
      Inst.addOperand(MCOperand::CreateImm(280));
      break;
    case CVT_imm_128:
      Inst.addOperand(MCOperand::CreateImm(128));
      break;
    case CVT_imm_129:
      Inst.addOperand(MCOperand::CreateImm(129));
      break;
    case CVT_imm_130:
      Inst.addOperand(MCOperand::CreateImm(130));
      break;
    case CVT_imm_131:
      Inst.addOperand(MCOperand::CreateImm(131));
      break;
    case CVT_imm_132:
      Inst.addOperand(MCOperand::CreateImm(132));
      break;
    case CVT_imm_133:
      Inst.addOperand(MCOperand::CreateImm(133));
      break;
    case CVT_imm_134:
      Inst.addOperand(MCOperand::CreateImm(134));
      break;
    case CVT_imm_135:
      Inst.addOperand(MCOperand::CreateImm(135));
      break;
    case CVT_imm_28:
      Inst.addOperand(MCOperand::CreateImm(28));
      break;
    case CVT_imm_19:
      Inst.addOperand(MCOperand::CreateImm(19));
      break;
    case CVT_imm_537:
      Inst.addOperand(MCOperand::CreateImm(537));
      break;
    case CVT_imm_539:
      Inst.addOperand(MCOperand::CreateImm(539));
      break;
    case CVT_imm_541:
      Inst.addOperand(MCOperand::CreateImm(541));
      break;
    case CVT_imm_543:
      Inst.addOperand(MCOperand::CreateImm(543));
      break;
    case CVT_imm_536:
      Inst.addOperand(MCOperand::CreateImm(536));
      break;
    case CVT_imm_538:
      Inst.addOperand(MCOperand::CreateImm(538));
      break;
    case CVT_imm_540:
      Inst.addOperand(MCOperand::CreateImm(540));
      break;
    case CVT_imm_542:
      Inst.addOperand(MCOperand::CreateImm(542));
      break;
    case CVT_imm_1018:
      Inst.addOperand(MCOperand::CreateImm(1018));
      break;
    case CVT_imm_981:
      Inst.addOperand(MCOperand::CreateImm(981));
      break;
    case CVT_imm_22:
      Inst.addOperand(MCOperand::CreateImm(22));
      break;
    case CVT_imm_17:
      Inst.addOperand(MCOperand::CreateImm(17));
      break;
    case CVT_imm_18:
      Inst.addOperand(MCOperand::CreateImm(18));
      break;
    case CVT_imm_980:
      Inst.addOperand(MCOperand::CreateImm(980));
      break;
    case CVT_imm_529:
      Inst.addOperand(MCOperand::CreateImm(529));
      break;
    case CVT_imm_531:
      Inst.addOperand(MCOperand::CreateImm(531));
      break;
    case CVT_imm_533:
      Inst.addOperand(MCOperand::CreateImm(533));
      break;
    case CVT_imm_535:
      Inst.addOperand(MCOperand::CreateImm(535));
      break;
    case CVT_imm_528:
      Inst.addOperand(MCOperand::CreateImm(528));
      break;
    case CVT_imm_530:
      Inst.addOperand(MCOperand::CreateImm(530));
      break;
    case CVT_imm_532:
      Inst.addOperand(MCOperand::CreateImm(532));
      break;
    case CVT_imm_534:
      Inst.addOperand(MCOperand::CreateImm(534));
      break;
    case CVT_imm_1019:
      Inst.addOperand(MCOperand::CreateImm(1019));
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addCRBitMaskOperands(Inst, 1);
      break;
    case CVT_imm_48:
      Inst.addOperand(MCOperand::CreateImm(48));
      break;
    case CVT_imm_287:
      Inst.addOperand(MCOperand::CreateImm(287));
      break;
    case CVT_imm_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    case CVT_imm_25:
      Inst.addOperand(MCOperand::CreateImm(25));
      break;
    case CVT_imm_512:
      Inst.addOperand(MCOperand::CreateImm(512));
      break;
    case CVT_imm_272:
      Inst.addOperand(MCOperand::CreateImm(272));
      break;
    case CVT_imm_273:
      Inst.addOperand(MCOperand::CreateImm(273));
      break;
    case CVT_imm_274:
      Inst.addOperand(MCOperand::CreateImm(274));
      break;
    case CVT_imm_275:
      Inst.addOperand(MCOperand::CreateImm(275));
      break;
    case CVT_imm_260:
      Inst.addOperand(MCOperand::CreateImm(260));
      break;
    case CVT_imm_261:
      Inst.addOperand(MCOperand::CreateImm(261));
      break;
    case CVT_imm_262:
      Inst.addOperand(MCOperand::CreateImm(262));
      break;
    case CVT_imm_263:
      Inst.addOperand(MCOperand::CreateImm(263));
      break;
    case CVT_imm_26:
      Inst.addOperand(MCOperand::CreateImm(26));
      break;
    case CVT_imm_27:
      Inst.addOperand(MCOperand::CreateImm(27));
      break;
    case CVT_imm_990:
      Inst.addOperand(MCOperand::CreateImm(990));
      break;
    case CVT_imm_991:
      Inst.addOperand(MCOperand::CreateImm(991));
      break;
    case CVT_imm_268:
      Inst.addOperand(MCOperand::CreateImm(268));
      break;
    case CVT_imm_988:
      Inst.addOperand(MCOperand::CreateImm(988));
      break;
    case CVT_imm_989:
      Inst.addOperand(MCOperand::CreateImm(989));
      break;
    case CVT_imm_269:
      Inst.addOperand(MCOperand::CreateImm(269));
      break;
    case CVT_imm_986:
      Inst.addOperand(MCOperand::CreateImm(986));
      break;
    case CVT_imm_255:
      Inst.addOperand(MCOperand::CreateImm(255));
      break;
    case CVT_imm_284:
      Inst.addOperand(MCOperand::CreateImm(284));
      break;
    case CVT_imm_285:
      Inst.addOperand(MCOperand::CreateImm(285));
      break;
    case CVT_imm_20:
      Inst.addOperand(MCOperand::CreateImm(20));
      break;
    case CVT_imm_16:
      Inst.addOperand(MCOperand::CreateImm(16));
      break;
    case CVT_imm_24:
      Inst.addOperand(MCOperand::CreateImm(24));
      break;
    case CVT_imm_3:
      Inst.addOperand(MCOperand::CreateImm(3));
      break;
    }
  }
}

void PPCAsmParser::
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
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTLSRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addS16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addU16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBranchTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regCR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_79:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_78:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_47:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_46:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_39:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_38:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_71:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_70:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_103:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_102:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_111:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_110:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVSFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_29:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_280:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_128:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_129:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_130:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_131:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_132:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_133:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_134:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_135:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_19:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_537:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_539:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_541:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_543:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_536:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_538:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_540:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_542:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_1018:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_981:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_22:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_17:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_18:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_980:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_529:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_531:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_533:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_535:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_528:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_530:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_532:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_534:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_1019:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCRBitMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_287:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_25:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_512:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_272:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_273:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_274:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_275:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_260:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_261:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_262:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_263:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_26:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_27:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_990:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_991:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_268:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_988:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_989:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_269:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_986:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_284:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_285:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_20:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_3:
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
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_2, // '2'
  MCK_3, // '3'
  MCK_4, // '4'
  MCK_5, // '5'
  MCK_6, // '6'
  MCK_7, // '7'
  MCK_Reg2, // derived register class
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_Reg5, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_VFRC, // register class 'VFRC'
  MCK_VSFRC, // register class 'VSFRC'
  MCK_VRRC, // register class 'VRRC'
  MCK_VSLRC, // register class 'VSLRC'
  MCK_VSHRC, // register class 'VSHRC'
  MCK_VSRC, // register class 'VSRC'
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_CRRC, // register class 'CRRC'
  MCK_CCRC, // register class 'CCRC'
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_CondBr, // user defined class 'PPCCondBrAsmOperand'
  MCK_DirectBr, // user defined class 'PPCDirectBrAsmOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_DispSPE2, // user defined class 'PPCDispSPE2Operand'
  MCK_DispSPE4, // user defined class 'PPCDispSPE4Operand'
  MCK_DispSPE8, // user defined class 'PPCDispSPE8Operand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_RegVSFRC, // user defined class 'PPCRegVSFRCAsmOperand'
  MCK_RegVSRC, // user defined class 'PPCRegVSRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S17Imm, // user defined class 'PPCS17ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_TLSReg, // user defined class 'PPCTLSRegOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U2Imm, // user defined class 'PPCU2ImmAsmOperand'
  MCK_U4Imm, // user defined class 'PPCU4ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '2':	 // 1 string to match.
      return MCK_2;	 // "2"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '4':	 // 1 string to match.
      return MCK_4;	 // "4"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '6':	 // 1 string to match.
      return MCK_6;	 // "6"
    case '7':	 // 1 string to match.
      return MCK_7;	 // "7"
    }
    break;
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

  case MCK_Reg2:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }

  case MCK_Reg5:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    }

  case MCK_F4RC:
    return B == MCK_VSFRC;

  case MCK_VFRC:
    return B == MCK_VSFRC;

  case MCK_VSLRC:
    return B == MCK_VSRC;

  case MCK_VSHRC:
    return B == MCK_VSRC;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  PPCOperand &Operand = (PPCOperand&)GOp;
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

  // 'CRBitMask' class
  if (Kind == MCK_CRBitMask) {
    if (Operand.isCRBitMask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CondBr' class
  if (Kind == MCK_CondBr) {
    if (Operand.isCondBr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DirectBr' class
  if (Kind == MCK_DirectBr) {
    if (Operand.isDirectBr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRI' class
  if (Kind == MCK_DispRI) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRIX' class
  if (Kind == MCK_DispRIX) {
    if (Operand.isS16ImmX4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispSPE2' class
  if (Kind == MCK_DispSPE2) {
    if (Operand.isU6ImmX2())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispSPE4' class
  if (Kind == MCK_DispSPE4) {
    if (Operand.isU7ImmX4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispSPE8' class
  if (Kind == MCK_DispSPE8) {
    if (Operand.isU8ImmX8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRBITRC' class
  if (Kind == MCK_RegCRBITRC) {
    if (Operand.isCRBitNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRRC' class
  if (Kind == MCK_RegCRRC) {
    if (Operand.isCCRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF4RC' class
  if (Kind == MCK_RegF4RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF8RC' class
  if (Kind == MCK_RegF8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RC' class
  if (Kind == MCK_RegG8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RCNoX0' class
  if (Kind == MCK_RegG8RCNoX0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRC' class
  if (Kind == MCK_RegGPRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRCNoR0' class
  if (Kind == MCK_RegGPRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRCNoR0' class
  if (Kind == MCK_RegGxRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRC' class
  if (Kind == MCK_RegGxRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVRRC' class
  if (Kind == MCK_RegVRRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVSFRC' class
  if (Kind == MCK_RegVSFRC) {
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVSRC' class
  if (Kind == MCK_RegVSRC) {
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S17Imm' class
  if (Kind == MCK_S17Imm) {
    if (Operand.isS17Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S5Imm' class
  if (Kind == MCK_S5Imm) {
    if (Operand.isS5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'TLSReg' class
  if (Kind == MCK_TLSReg) {
    if (Operand.isTLSReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U2Imm' class
  if (Kind == MCK_U2Imm) {
    if (Operand.isU2Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U5Imm' class
  if (Kind == MCK_U5Imm) {
    if (Operand.isU5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg2; break;
    case PPC::R2: OpKind = MCK_Reg2; break;
    case PPC::R3: OpKind = MCK_Reg2; break;
    case PPC::R4: OpKind = MCK_Reg2; break;
    case PPC::R5: OpKind = MCK_Reg2; break;
    case PPC::R6: OpKind = MCK_Reg2; break;
    case PPC::R7: OpKind = MCK_Reg2; break;
    case PPC::R8: OpKind = MCK_Reg2; break;
    case PPC::R9: OpKind = MCK_Reg2; break;
    case PPC::R10: OpKind = MCK_Reg2; break;
    case PPC::R11: OpKind = MCK_Reg2; break;
    case PPC::R12: OpKind = MCK_Reg2; break;
    case PPC::R13: OpKind = MCK_Reg2; break;
    case PPC::R14: OpKind = MCK_Reg2; break;
    case PPC::R15: OpKind = MCK_Reg2; break;
    case PPC::R16: OpKind = MCK_Reg2; break;
    case PPC::R17: OpKind = MCK_Reg2; break;
    case PPC::R18: OpKind = MCK_Reg2; break;
    case PPC::R19: OpKind = MCK_Reg2; break;
    case PPC::R20: OpKind = MCK_Reg2; break;
    case PPC::R21: OpKind = MCK_Reg2; break;
    case PPC::R22: OpKind = MCK_Reg2; break;
    case PPC::R23: OpKind = MCK_Reg2; break;
    case PPC::R24: OpKind = MCK_Reg2; break;
    case PPC::R25: OpKind = MCK_Reg2; break;
    case PPC::R26: OpKind = MCK_Reg2; break;
    case PPC::R27: OpKind = MCK_Reg2; break;
    case PPC::R28: OpKind = MCK_Reg2; break;
    case PPC::R29: OpKind = MCK_Reg2; break;
    case PPC::R30: OpKind = MCK_Reg2; break;
    case PPC::R31: OpKind = MCK_Reg2; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg5; break;
    case PPC::X2: OpKind = MCK_Reg5; break;
    case PPC::X3: OpKind = MCK_Reg5; break;
    case PPC::X4: OpKind = MCK_Reg5; break;
    case PPC::X5: OpKind = MCK_Reg5; break;
    case PPC::X6: OpKind = MCK_Reg5; break;
    case PPC::X7: OpKind = MCK_Reg5; break;
    case PPC::X8: OpKind = MCK_Reg5; break;
    case PPC::X9: OpKind = MCK_Reg5; break;
    case PPC::X10: OpKind = MCK_Reg5; break;
    case PPC::X11: OpKind = MCK_Reg5; break;
    case PPC::X12: OpKind = MCK_Reg5; break;
    case PPC::X13: OpKind = MCK_Reg5; break;
    case PPC::X14: OpKind = MCK_Reg5; break;
    case PPC::X15: OpKind = MCK_Reg5; break;
    case PPC::X16: OpKind = MCK_Reg5; break;
    case PPC::X17: OpKind = MCK_Reg5; break;
    case PPC::X18: OpKind = MCK_Reg5; break;
    case PPC::X19: OpKind = MCK_Reg5; break;
    case PPC::X20: OpKind = MCK_Reg5; break;
    case PPC::X21: OpKind = MCK_Reg5; break;
    case PPC::X22: OpKind = MCK_Reg5; break;
    case PPC::X23: OpKind = MCK_Reg5; break;
    case PPC::X24: OpKind = MCK_Reg5; break;
    case PPC::X25: OpKind = MCK_Reg5; break;
    case PPC::X26: OpKind = MCK_Reg5; break;
    case PPC::X27: OpKind = MCK_Reg5; break;
    case PPC::X28: OpKind = MCK_Reg5; break;
    case PPC::X29: OpKind = MCK_Reg5; break;
    case PPC::X30: OpKind = MCK_Reg5; break;
    case PPC::X31: OpKind = MCK_Reg5; break;
    case PPC::F0: OpKind = MCK_F4RC; break;
    case PPC::F1: OpKind = MCK_F4RC; break;
    case PPC::F2: OpKind = MCK_F4RC; break;
    case PPC::F3: OpKind = MCK_F4RC; break;
    case PPC::F4: OpKind = MCK_F4RC; break;
    case PPC::F5: OpKind = MCK_F4RC; break;
    case PPC::F6: OpKind = MCK_F4RC; break;
    case PPC::F7: OpKind = MCK_F4RC; break;
    case PPC::F8: OpKind = MCK_F4RC; break;
    case PPC::F9: OpKind = MCK_F4RC; break;
    case PPC::F10: OpKind = MCK_F4RC; break;
    case PPC::F11: OpKind = MCK_F4RC; break;
    case PPC::F12: OpKind = MCK_F4RC; break;
    case PPC::F13: OpKind = MCK_F4RC; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::VF0: OpKind = MCK_VFRC; break;
    case PPC::VF1: OpKind = MCK_VFRC; break;
    case PPC::VF2: OpKind = MCK_VFRC; break;
    case PPC::VF3: OpKind = MCK_VFRC; break;
    case PPC::VF4: OpKind = MCK_VFRC; break;
    case PPC::VF5: OpKind = MCK_VFRC; break;
    case PPC::VF6: OpKind = MCK_VFRC; break;
    case PPC::VF7: OpKind = MCK_VFRC; break;
    case PPC::VF8: OpKind = MCK_VFRC; break;
    case PPC::VF9: OpKind = MCK_VFRC; break;
    case PPC::VF10: OpKind = MCK_VFRC; break;
    case PPC::VF11: OpKind = MCK_VFRC; break;
    case PPC::VF12: OpKind = MCK_VFRC; break;
    case PPC::VF13: OpKind = MCK_VFRC; break;
    case PPC::VF14: OpKind = MCK_VFRC; break;
    case PPC::VF15: OpKind = MCK_VFRC; break;
    case PPC::VF16: OpKind = MCK_VFRC; break;
    case PPC::VF17: OpKind = MCK_VFRC; break;
    case PPC::VF18: OpKind = MCK_VFRC; break;
    case PPC::VF19: OpKind = MCK_VFRC; break;
    case PPC::VF20: OpKind = MCK_VFRC; break;
    case PPC::VF21: OpKind = MCK_VFRC; break;
    case PPC::VF22: OpKind = MCK_VFRC; break;
    case PPC::VF23: OpKind = MCK_VFRC; break;
    case PPC::VF24: OpKind = MCK_VFRC; break;
    case PPC::VF25: OpKind = MCK_VFRC; break;
    case PPC::VF26: OpKind = MCK_VFRC; break;
    case PPC::VF27: OpKind = MCK_VFRC; break;
    case PPC::VF28: OpKind = MCK_VFRC; break;
    case PPC::VF29: OpKind = MCK_VFRC; break;
    case PPC::VF30: OpKind = MCK_VFRC; break;
    case PPC::VF31: OpKind = MCK_VFRC; break;
    case PPC::V0: OpKind = MCK_VRRC; break;
    case PPC::V1: OpKind = MCK_VRRC; break;
    case PPC::V2: OpKind = MCK_VRRC; break;
    case PPC::V3: OpKind = MCK_VRRC; break;
    case PPC::V4: OpKind = MCK_VRRC; break;
    case PPC::V5: OpKind = MCK_VRRC; break;
    case PPC::V6: OpKind = MCK_VRRC; break;
    case PPC::V7: OpKind = MCK_VRRC; break;
    case PPC::V8: OpKind = MCK_VRRC; break;
    case PPC::V9: OpKind = MCK_VRRC; break;
    case PPC::V10: OpKind = MCK_VRRC; break;
    case PPC::V11: OpKind = MCK_VRRC; break;
    case PPC::V12: OpKind = MCK_VRRC; break;
    case PPC::V13: OpKind = MCK_VRRC; break;
    case PPC::V14: OpKind = MCK_VRRC; break;
    case PPC::V15: OpKind = MCK_VRRC; break;
    case PPC::V16: OpKind = MCK_VRRC; break;
    case PPC::V17: OpKind = MCK_VRRC; break;
    case PPC::V18: OpKind = MCK_VRRC; break;
    case PPC::V19: OpKind = MCK_VRRC; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::VSL0: OpKind = MCK_VSLRC; break;
    case PPC::VSL1: OpKind = MCK_VSLRC; break;
    case PPC::VSL2: OpKind = MCK_VSLRC; break;
    case PPC::VSL3: OpKind = MCK_VSLRC; break;
    case PPC::VSL4: OpKind = MCK_VSLRC; break;
    case PPC::VSL5: OpKind = MCK_VSLRC; break;
    case PPC::VSL6: OpKind = MCK_VSLRC; break;
    case PPC::VSL7: OpKind = MCK_VSLRC; break;
    case PPC::VSL8: OpKind = MCK_VSLRC; break;
    case PPC::VSL9: OpKind = MCK_VSLRC; break;
    case PPC::VSL10: OpKind = MCK_VSLRC; break;
    case PPC::VSL11: OpKind = MCK_VSLRC; break;
    case PPC::VSL12: OpKind = MCK_VSLRC; break;
    case PPC::VSL13: OpKind = MCK_VSLRC; break;
    case PPC::VSL14: OpKind = MCK_VSLRC; break;
    case PPC::VSL15: OpKind = MCK_VSLRC; break;
    case PPC::VSL16: OpKind = MCK_VSLRC; break;
    case PPC::VSL17: OpKind = MCK_VSLRC; break;
    case PPC::VSL18: OpKind = MCK_VSLRC; break;
    case PPC::VSL19: OpKind = MCK_VSLRC; break;
    case PPC::VSL20: OpKind = MCK_VSLRC; break;
    case PPC::VSL21: OpKind = MCK_VSLRC; break;
    case PPC::VSL22: OpKind = MCK_VSLRC; break;
    case PPC::VSL23: OpKind = MCK_VSLRC; break;
    case PPC::VSL24: OpKind = MCK_VSLRC; break;
    case PPC::VSL25: OpKind = MCK_VSLRC; break;
    case PPC::VSL26: OpKind = MCK_VSLRC; break;
    case PPC::VSL27: OpKind = MCK_VSLRC; break;
    case PPC::VSL28: OpKind = MCK_VSLRC; break;
    case PPC::VSL29: OpKind = MCK_VSLRC; break;
    case PPC::VSL30: OpKind = MCK_VSLRC; break;
    case PPC::VSL31: OpKind = MCK_VSLRC; break;
    case PPC::VSH0: OpKind = MCK_VSHRC; break;
    case PPC::VSH1: OpKind = MCK_VSHRC; break;
    case PPC::VSH2: OpKind = MCK_VSHRC; break;
    case PPC::VSH3: OpKind = MCK_VSHRC; break;
    case PPC::VSH4: OpKind = MCK_VSHRC; break;
    case PPC::VSH5: OpKind = MCK_VSHRC; break;
    case PPC::VSH6: OpKind = MCK_VSHRC; break;
    case PPC::VSH7: OpKind = MCK_VSHRC; break;
    case PPC::VSH8: OpKind = MCK_VSHRC; break;
    case PPC::VSH9: OpKind = MCK_VSHRC; break;
    case PPC::VSH10: OpKind = MCK_VSHRC; break;
    case PPC::VSH11: OpKind = MCK_VSHRC; break;
    case PPC::VSH12: OpKind = MCK_VSHRC; break;
    case PPC::VSH13: OpKind = MCK_VSHRC; break;
    case PPC::VSH14: OpKind = MCK_VSHRC; break;
    case PPC::VSH15: OpKind = MCK_VSHRC; break;
    case PPC::VSH16: OpKind = MCK_VSHRC; break;
    case PPC::VSH17: OpKind = MCK_VSHRC; break;
    case PPC::VSH18: OpKind = MCK_VSHRC; break;
    case PPC::VSH19: OpKind = MCK_VSHRC; break;
    case PPC::VSH20: OpKind = MCK_VSHRC; break;
    case PPC::VSH21: OpKind = MCK_VSHRC; break;
    case PPC::VSH22: OpKind = MCK_VSHRC; break;
    case PPC::VSH23: OpKind = MCK_VSHRC; break;
    case PPC::VSH24: OpKind = MCK_VSHRC; break;
    case PPC::VSH25: OpKind = MCK_VSHRC; break;
    case PPC::VSH26: OpKind = MCK_VSHRC; break;
    case PPC::VSH27: OpKind = MCK_VSHRC; break;
    case PPC::VSH28: OpKind = MCK_VSHRC; break;
    case PPC::VSH29: OpKind = MCK_VSHRC; break;
    case PPC::VSH30: OpKind = MCK_VSHRC; break;
    case PPC::VSH31: OpKind = MCK_VSHRC; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg2; break;
    case PPC::FP8: OpKind = MCK_Reg5; break;
    case PPC::BP: OpKind = MCK_Reg2; break;
    case PPC::BP8: OpKind = MCK_Reg5; break;
    case PPC::CR0LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::CC: OpKind = MCK_CCRC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t PPCAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\004addc\004adde\004addi\005addic\005addis\005addme\005addze\003"
    "and\004andc\004andi\005andis\001b\002ba\002bc\003bca\005bcctr\006bcctrl"
    "\003bcl\004bcla\004bclr\005bclrl\004bctr\005bctrl\004bdnz\005bdnz+\005b"
    "dnz-\005bdnza\006bdnza+\006bdnza-\005bdnzf\006bdnzfa\006bdnzfl\007bdnzf"
    "la\007bdnzflr\010bdnzflrl\005bdnzl\006bdnzl+\006bdnzl-\006bdnzla\007bdn"
    "zla+\007bdnzla-\006bdnzlr\007bdnzlr+\007bdnzlr-\007bdnzlrl\010bdnzlrl+\010"
    "bdnzlrl-\005bdnzt\006bdnzta\006bdnztl\007bdnztla\007bdnztlr\010bdnztlrl"
    "\003bdz\004bdz+\004bdz-\004bdza\005bdza+\005bdza-\004bdzf\005bdzfa\005b"
    "dzfl\006bdzfla\006bdzflr\007bdzflrl\004bdzl\005bdzl+\005bdzl-\005bdzla\006"
    "bdzla+\006bdzla-\005bdzlr\006bdzlr+\006bdzlr-\006bdzlrl\007bdzlrl+\007b"
    "dzlrl-\004bdzt\005bdzta\005bdztl\006bdztla\006bdztlr\007bdztlrl\003beq\004"
    "beq+\004beq-\004beqa\005beqa+\005beqa-\006beqctr\007beqctr+\007beqctr-\007"
    "beqctrl\010beqctrl+\010beqctrl-\004beql\005beql+\005beql-\005beqla\006b"
    "eqla+\006beqla-\005beqlr\006beqlr+\006beqlr-\006beqlrl\007beqlrl+\007be"
    "qlrl-\002bf\003bf+\003bf-\003bfa\004bfa+\004bfa-\005bfctr\006bfctr+\006"
    "bfctr-\006bfctrl\007bfctrl+\007bfctrl-\003bfl\004bfl+\004bfl-\004bfla\005"
    "bfla+\005bfla-\004bflr\005bflr+\005bflr-\005bflrl\006bflrl+\006bflrl-\003"
    "bge\004bge+\004bge-\004bgea\005bgea+\005bgea-\006bgectr\007bgectr+\007b"
    "gectr-\007bgectrl\010bgectrl+\010bgectrl-\004bgel\005bgel+\005bgel-\005"
    "bgela\006bgela+\006bgela-\005bgelr\006bgelr+\006bgelr-\006bgelrl\007bge"
    "lrl+\007bgelrl-\003bgt\004bgt+\004bgt-\004bgta\005bgta+\005bgta-\006bgt"
    "ctr\007bgtctr+\007bgtctr-\007bgtctrl\010bgtctrl+\010bgtctrl-\004bgtl\005"
    "bgtl+\005bgtl-\005bgtla\006bgtla+\006bgtla-\005bgtlr\006bgtlr+\006bgtlr"
    "-\006bgtlrl\007bgtlrl+\007bgtlrl-\002bl\003bla\003ble\004ble+\004ble-\004"
    "blea\005blea+\005blea-\006blectr\007blectr+\007blectr-\007blectrl\010bl"
    "ectrl+\010blectrl-\004blel\005blel+\005blel-\005blela\006blela+\006blel"
    "a-\005blelr\006blelr+\006blelr-\006blelrl\007blelrl+\007blelrl-\003blr\004"
    "blrl\003blt\004blt+\004blt-\004blta\005blta+\005blta-\006bltctr\007bltc"
    "tr+\007bltctr-\007bltctrl\010bltctrl+\010bltctrl-\004bltl\005bltl+\005b"
    "ltl-\005bltla\006bltla+\006bltla-\005bltlr\006bltlr+\006bltlr-\006bltlr"
    "l\007bltlrl+\007bltlrl-\003bne\004bne+\004bne-\004bnea\005bnea+\005bnea"
    "-\006bnectr\007bnectr+\007bnectr-\007bnectrl\010bnectrl+\010bnectrl-\004"
    "bnel\005bnel+\005bnel-\005bnela\006bnela+\006bnela-\005bnelr\006bnelr+\006"
    "bnelr-\006bnelrl\007bnelrl+\007bnelrl-\003bng\004bng+\004bng-\004bnga\005"
    "bnga+\005bnga-\006bngctr\007bngctr+\007bngctr-\007bngctrl\010bngctrl+\010"
    "bngctrl-\004bngl\005bngl+\005bngl-\005bngla\006bngla+\006bngla-\005bngl"
    "r\006bnglr+\006bnglr-\006bnglrl\007bnglrl+\007bnglrl-\003bnl\004bnl+\004"
    "bnl-\004bnla\005bnla+\005bnla-\006bnlctr\007bnlctr+\007bnlctr-\007bnlct"
    "rl\010bnlctrl+\010bnlctrl-\004bnll\005bnll+\005bnll-\005bnlla\006bnlla+"
    "\006bnlla-\005bnllr\006bnllr+\006bnllr-\006bnllrl\007bnllrl+\007bnllrl-"
    "\003bns\004bns+\004bns-\004bnsa\005bnsa+\005bnsa-\006bnsctr\007bnsctr+\007"
    "bnsctr-\007bnsctrl\010bnsctrl+\010bnsctrl-\004bnsl\005bnsl+\005bnsl-\005"
    "bnsla\006bnsla+\006bnsla-\005bnslr\006bnslr+\006bnslr-\006bnslrl\007bns"
    "lrl+\007bnslrl-\003bnu\004bnu+\004bnu-\004bnua\005bnua+\005bnua-\006bnu"
    "ctr\007bnuctr+\007bnuctr-\007bnuctrl\010bnuctrl+\010bnuctrl-\004bnul\005"
    "bnul+\005bnul-\005bnula\006bnula+\006bnula-\005bnulr\006bnulr+\006bnulr"
    "-\006bnulrl\007bnulrl+\007bnulrl-\005brinc\003bso\004bso+\004bso-\004bs"
    "oa\005bsoa+\005bsoa-\006bsoctr\007bsoctr+\007bsoctr-\007bsoctrl\010bsoc"
    "trl+\010bsoctrl-\004bsol\005bsol+\005bsol-\005bsola\006bsola+\006bsola-"
    "\005bsolr\006bsolr+\006bsolr-\006bsolrl\007bsolrl+\007bsolrl-\002bt\003"
    "bt+\003bt-\003bta\004bta+\004bta-\005btctr\006btctr+\006btctr-\006btctr"
    "l\007btctrl+\007btctrl-\003btl\004btl+\004btl-\004btla\005btla+\005btla"
    "-\004btlr\005btlr+\005btlr-\005btlrl\006btlrl+\006btlrl-\003bun\004bun+"
    "\004bun-\004buna\005buna+\005buna-\006bunctr\007bunctr+\007bunctr-\007b"
    "unctrl\010bunctrl+\010bunctrl-\004bunl\005bunl+\005bunl-\005bunla\006bu"
    "nla+\006bunla-\005bunlr\006bunlr+\006bunlr-\006bunlrl\007bunlrl+\007bun"
    "lrl-\006clrldi\010clrlsldi\010clrlslwi\006clrlwi\006clrrdi\006clrrwi\003"
    "cmp\004cmpd\005cmpdi\004cmpi\004cmpl\005cmpld\006cmpldi\005cmpli\005cmp"
    "lw\006cmplwi\004cmpw\005cmpwi\006cntlzd\006cntlzw\005crand\006crandc\005"
    "crclr\005creqv\006crmove\006crnand\005crnor\005crnot\004cror\005crorc\005"
    "crset\005crxor\004dcba\004dcbf\004dcbi\005dcbst\004dcbt\006dcbtst\004dc"
    "bz\005dcbzl\005dccci\003dci\004divd\005divdu\004divw\005divwu\003dss\006"
    "dssall\003dst\005dstst\006dststt\004dstt\005eieio\003eqv\005evabs\007ev"
    "addiw\013evaddsmiaaw\013evaddssiaaw\013evaddumiaaw\013evaddusiaaw\006ev"
    "addw\005evand\006evandc\007evcmpeq\010evcmpgts\010evcmpgtu\010evcmplts\010"
    "evcmpltu\010evcntlsw\010evcntlzw\007evdivws\007evdivwu\005eveqv\007evex"
    "tsb\007evextsh\005evldd\006evlddx\005evldh\006evldhx\005evldw\006evldwx"
    "\013evlhhesplat\014evlhhesplatx\014evlhhossplat\015evlhhossplatx\014evl"
    "hhousplat\015evlhhousplatx\006evlwhe\007evlwhex\007evlwhos\010evlwhosx\007"
    "evlwhou\010evlwhoux\nevlwhsplat\013evlwhsplatx\nevlwwsplat\013evlwwspla"
    "tx\tevmergehi\013evmergehilo\tevmergelo\013evmergelohi\013evmhegsmfaa\013"
    "evmhegsmfan\013evmhegsmiaa\013evmhegsmian\013evmhegumiaa\013evmhegumian"
    "\010evmhesmf\tevmhesmfa\013evmhesmfaaw\013evmhesmfanw\010evmhesmi\tevmh"
    "esmia\013evmhesmiaaw\013evmhesmianw\010evmhessf\tevmhessfa\013evmhessfa"
    "aw\013evmhessfanw\013evmhessiaaw\013evmhessianw\010evmheumi\tevmheumia\013"
    "evmheumiaaw\013evmheumianw\013evmheusiaaw\013evmheusianw\013evmhogsmfaa"
    "\013evmhogsmfan\013evmhogsmiaa\013evmhogsmian\013evmhogumiaa\013evmhogu"
    "mian\010evmhosmf\tevmhosmfa\013evmhosmfaaw\013evmhosmfanw\010evmhosmi\t"
    "evmhosmia\013evmhosmiaaw\013evmhosmianw\010evmhossf\tevmhossfa\013evmho"
    "ssfaaw\013evmhossfanw\013evmhossiaaw\013evmhossianw\010evmhoumi\tevmhou"
    "mia\013evmhoumiaaw\013evmhoumianw\013evmhousiaaw\013evmhousianw\005evmr"
    "a\010evmwhsmf\tevmwhsmfa\010evmwhsmi\tevmwhsmia\010evmwhssf\tevmwhssfa\010"
    "evmwhumi\tevmwhumia\013evmwlsmiaaw\013evmwlsmianw\013evmwlssiaaw\013evm"
    "wlssianw\010evmwlumi\tevmwlumia\013evmwlumiaaw\013evmwlumianw\013evmwlu"
    "siaaw\013evmwlusianw\007evmwsmf\010evmwsmfa\tevmwsmfaa\tevmwsmfan\007ev"
    "mwsmi\010evmwsmia\tevmwsmiaa\tevmwsmian\007evmwssf\010evmwssfa\tevmwssf"
    "aa\tevmwssfan\007evmwumi\010evmwumia\tevmwumiaa\tevmwumian\006evnand\005"
    "evneg\005evnor\004evor\005evorc\005evrlw\006evrlwi\006evrndw\005evslw\006"
    "evslwi\tevsplatfi\010evsplati\007evsrwis\007evsrwiu\006evsrws\006evsrwu"
    "\006evstdd\007evstddx\006evstdh\007evstdhx\006evstdw\007evstdwx\007evst"
    "whe\010evstwhex\007evstwho\010evstwhox\007evstwwe\010evstwwex\007evstww"
    "o\010evstwwox\014evsubfsmiaaw\014evsubfssiaaw\014evsubfumiaaw\014evsubf"
    "usiaaw\007evsubfw\010evsubifw\005evxor\006extldi\006extlwi\006extrdi\006"
    "extrwi\005extsb\005extsh\005extsw\004fabs\004fadd\005fadds\005fcfid\006"
    "fcfids\006fcfidu\007fcfidus\005fcmpu\006fcpsgn\005fctid\007fctiduz\006f"
    "ctidz\005fctiw\007fctiwuz\006fctiwz\004fdiv\005fdivs\005fmadd\006fmadds"
    "\003fmr\005fmsub\006fmsubs\004fmul\005fmuls\005fnabs\004fneg\006fnmadd\007"
    "fnmadds\006fnmsub\007fnmsubs\003fre\004fres\004frim\004frin\004frip\004"
    "friz\004frsp\007frsqrte\010frsqrtes\004fsel\005fsqrt\006fsqrts\004fsub\005"
    "fsubs\004icbi\004icbt\005iccci\003ici\006inslwi\006insrdi\006insrwi\004"
    "isel\005isync\002la\003lbz\004lbzu\005lbzux\004lbzx\002ld\005ldarx\005l"
    "dbrx\003ldu\004ldux\003ldx\003lfd\004lfdu\005lfdux\004lfdx\006lfiwax\006"
    "lfiwzx\003lfs\004lfsu\005lfsux\004lfsx\003lha\004lhau\005lhaux\004lhax\005"
    "lhbrx\003lhz\004lhzu\005lhzux\004lhzx\002li\003lis\003lmw\004lswi\005lv"
    "ebx\005lvehx\005lvewx\004lvsl\004lvsr\003lvx\004lvxl\003lwa\005lwarx\005"
    "lwaux\004lwax\005lwbrx\006lwsync\003lwz\004lwzu\005lwzux\004lwzx\005lxs"
    "dx\006lxvd2x\006lxvdsx\006lxvw4x\004mbar\004mcrf\005mfamr\005mfasr\005m"
    "fbr0\005mfbr1\005mfbr2\005mfbr3\005mfbr4\005mfbr5\005mfbr6\005mfbr7\006"
    "mfcfar\004mfcr\005mfctr\005mfdar\007mfdbatl\007mfdbatu\006mfdccr\005mfd"
    "cr\006mfdear\005mfdec\006mfdscr\007mfdsisr\005mfesr\004mffs\007mfibatl\007"
    "mfibatu\006mficcr\004mflr\005mfmsr\006mfocrf\005mfpid\005mfpvr\006mfrtc"
    "l\006mfrtcu\006mfsdr1\tmfspefscr\005mfspr\006mfsprg\007mfsprg0\007mfspr"
    "g1\007mfsprg2\007mfsprg3\007mfsprg4\007mfsprg5\007mfsprg6\007mfsprg7\004"
    "mfsr\006mfsrin\006mfsrr0\006mfsrr1\006mfsrr2\006mfsrr3\004mftb\006mftbh"
    "i\005mftbl\006mftblo\005mftbu\005mftcr\006mfvscr\005mfxer\002mr\005msyn"
    "c\005mtamr\005mtasr\005mtbr0\005mtbr1\005mtbr2\005mtbr3\005mtbr4\005mtb"
    "r5\005mtbr6\005mtbr7\006mtcfar\004mtcr\005mtcrf\005mtctr\005mtdar\007mt"
    "dbatl\007mtdbatu\006mtdccr\005mtdcr\006mtdear\005mtdec\006mtdscr\007mtd"
    "sisr\005mtesr\006mtfsb0\006mtfsb1\005mtfsf\007mtibatl\007mtibatu\006mti"
    "ccr\004mtlr\005mtmsr\006mtmsrd\006mtocrf\005mtpid\006mtsdr1\tmtspefscr\005"
    "mtspr\006mtsprg\007mtsprg0\007mtsprg1\007mtsprg2\007mtsprg3\007mtsprg4\007"
    "mtsprg5\007mtsprg6\007mtsprg7\004mtsr\006mtsrin\006mtsrr0\006mtsrr1\006"
    "mtsrr2\006mtsrr3\006mttbhi\005mttbl\006mttblo\005mttbu\005mttcr\006mtvs"
    "cr\005mtxer\005mulhd\006mulhdu\005mulhw\006mulhwu\005mulld\005mulli\005"
    "mullw\004nand\003neg\003nop\003nor\003not\002or\003orc\003ori\004oris\007"
    "popcntd\007popcntw\007ptesync\004rfci\004rfdi\003rfi\004rfid\005rfmci\005"
    "rldcl\005rldcr\005rldic\006rldicl\006rldicr\006rldimi\006rlwimi\006rlwi"
    "nm\005rlwnm\005rotld\006rotldi\005rotlw\006rotlwi\006rotrdi\006rotrwi\002"
    "sc\005slbia\005slbie\007slbmfee\006slbmte\003sld\004sldi\003slw\004slwi"
    "\004srad\005sradi\004sraw\005srawi\003srd\004srdi\003srw\004srwi\003stb"
    "\004stbu\005stbux\004stbx\003std\006stdbrx\005stdcx\004stdu\005stdux\004"
    "stdx\004stfd\005stfdu\006stfdux\005stfdx\006stfiwx\004stfs\005stfsu\006"
    "stfsux\005stfsx\003sth\006sthbrx\004sthu\005sthux\004sthx\004stmw\005st"
    "swi\006stvebx\006stvehx\006stvewx\004stvx\005stvxl\003stw\006stwbrx\005"
    "stwcx\004stwu\005stwux\004stwx\006stxsdx\007stxvd2x\007stxvw4x\003sub\004"
    "subc\004subf\005subfc\005subfe\006subfic\006subfme\006subfze\004subi\005"
    "subic\005subis\004sync\002td\004tdeq\005tdeqi\004tdge\005tdgei\004tdgt\005"
    "tdgti\003tdi\004tdle\005tdlei\005tdlge\006tdlgei\005tdlgt\006tdlgti\005"
    "tdlle\006tdllei\005tdllt\006tdllti\005tdlng\006tdlngi\005tdlnl\006tdlnl"
    "i\004tdlt\005tdlti\004tdne\005tdnei\004tdng\005tdngi\004tdnl\005tdnli\003"
    "tdu\004tdui\005tlbia\005tlbie\006tlbiel\007tlbivax\005tlbld\005tlbli\005"
    "tlbre\007tlbrehi\007tlbrelo\005tlbsx\007tlbsync\005tlbwe\007tlbwehi\007"
    "tlbwelo\004trap\002tw\004tweq\005tweqi\004twge\005twgei\004twgt\005twgt"
    "i\003twi\004twle\005twlei\005twlge\006twlgei\005twlgt\006twlgti\005twll"
    "e\006twllei\005twllt\006twllti\005twlng\006twlngi\005twlnl\006twlnli\004"
    "twlt\005twlti\004twne\005twnei\004twng\005twngi\004twnl\005twnli\003twu"
    "\004twui\007vaddcuw\006vaddfp\007vaddsbs\007vaddshs\007vaddsws\007vaddu"
    "bm\007vaddubs\007vadduhm\007vadduhs\007vadduwm\007vadduws\004vand\005va"
    "ndc\006vavgsb\006vavgsh\006vavgsw\006vavgub\006vavguh\006vavguw\005vcfs"
    "x\005vcfux\007vcmpbfp\010vcmpeqfp\010vcmpequb\010vcmpequh\010vcmpequw\010"
    "vcmpgefp\010vcmpgtfp\010vcmpgtsb\010vcmpgtsh\010vcmpgtsw\010vcmpgtub\010"
    "vcmpgtuh\010vcmpgtuw\006vctsxs\006vctuxs\010vexptefp\007vlogefp\007vmad"
    "dfp\006vmaxfp\006vmaxsb\006vmaxsh\006vmaxsw\006vmaxub\006vmaxuh\006vmax"
    "uw\tvmhaddshs\nvmhraddshs\006vminfp\006vminsb\006vminsh\006vminsw\006vm"
    "inub\006vminuh\006vminuw\tvmladduhm\006vmrghb\006vmrghh\006vmrghw\006vm"
    "rglb\006vmrglh\006vmrglw\010vmsummbm\010vmsumshm\010vmsumshs\010vmsumub"
    "m\010vmsumuhm\010vmsumuhs\007vmulesb\007vmulesh\007vmuleub\007vmuleuh\007"
    "vmulosb\007vmulosh\007vmuloub\007vmulouh\010vnmsubfp\004vnor\003vor\005"
    "vperm\005vpkpx\007vpkshss\007vpkshus\007vpkswss\007vpkswus\007vpkuhum\007"
    "vpkuhus\007vpkuwum\007vpkuwus\005vrefp\005vrfim\005vrfin\005vrfip\005vr"
    "fiz\004vrlb\004vrlh\004vrlw\tvrsqrtefp\004vsel\003vsl\004vslb\006vsldoi"
    "\004vslh\004vslo\004vslw\006vspltb\006vsplth\010vspltisb\010vspltish\010"
    "vspltisw\006vspltw\003vsr\005vsrab\005vsrah\005vsraw\004vsrb\004vsrh\004"
    "vsro\004vsrw\007vsubcuw\006vsubfp\007vsubsbs\007vsubshs\007vsubsws\007v"
    "sububm\007vsububs\007vsubuhm\007vsubuhs\007vsubuwm\007vsubuws\010vsum2s"
    "ws\010vsum4sbs\010vsum4shs\010vsum4ubs\007vsumsws\007vupkhpx\007vupkhsb"
    "\007vupkhsh\007vupklpx\007vupklsb\007vupklsh\004vxor\004wait\010waitimp"
    "l\007waitrsv\005wrtee\006wrteei\004xnop\003xor\004xori\005xoris\007xsab"
    "sdp\007xsadddp\010xscmpodp\010xscmpudp\txscpsgndp\010xscvdpsp\nxscvdpsx"
    "ds\nxscvdpsxws\nxscvdpuxds\nxscvdpuxws\010xscvspdp\txscvsxddp\txscvuxdd"
    "p\007xsdivdp\txsmaddadp\txsmaddmdp\007xsmaxdp\007xsmindp\txsmsubadp\txs"
    "msubmdp\007xsmuldp\010xsnabsdp\007xsnegdp\nxsnmaddadp\nxsnmaddmdp\nxsnm"
    "subadp\nxsnmsubmdp\006xsrdpi\007xsrdpic\007xsrdpim\007xsrdpip\007xsrdpi"
    "z\006xsredp\nxsrsqrtedp\010xssqrtdp\007xssubdp\010xstdivdp\txstsqrtdp\007"
    "xvabsdp\007xvabssp\007xvadddp\007xvaddsp\txvcmpeqdp\txvcmpeqsp\txvcmpge"
    "dp\txvcmpgesp\txvcmpgtdp\txvcmpgtsp\txvcpsgndp\txvcpsgnsp\010xvcvdpsp\n"
    "xvcvdpsxds\nxvcvdpsxws\nxvcvdpuxds\nxvcvdpuxws\010xvcvspdp\nxvcvspsxds\n"
    "xvcvspsxws\nxvcvspuxds\nxvcvspuxws\txvcvsxddp\txvcvsxdsp\txvcvsxwdp\txv"
    "cvsxwsp\txvcvuxddp\txvcvuxdsp\txvcvuxwdp\txvcvuxwsp\007xvdivdp\007xvdiv"
    "sp\txvmaddadp\txvmaddasp\txvmaddmdp\txvmaddmsp\007xvmaxdp\007xvmaxsp\007"
    "xvmindp\007xvminsp\007xvmovdp\007xvmovsp\txvmsubadp\txvmsubasp\txvmsubm"
    "dp\txvmsubmsp\007xvmuldp\007xvmulsp\010xvnabsdp\010xvnabssp\007xvnegdp\007"
    "xvnegsp\nxvnmaddadp\nxvnmaddasp\nxvnmaddmdp\nxvnmaddmsp\nxvnmsubadp\nxv"
    "nmsubasp\nxvnmsubmdp\nxvnmsubmsp\006xvrdpi\007xvrdpic\007xvrdpim\007xvr"
    "dpip\007xvrdpiz\006xvredp\006xvresp\006xvrspi\007xvrspic\007xvrspim\007"
    "xvrspip\007xvrspiz\nxvrsqrtedp\nxvrsqrtesp\010xvsqrtdp\010xvsqrtsp\007x"
    "vsubdp\007xvsubsp\010xvtdivdp\010xvtdivsp\txvtsqrtdp\txvtsqrtsp\006xxla"
    "nd\007xxlandc\006xxlnor\005xxlor\006xxlxor\007xxmrghd\007xxmrghw\007xxm"
    "rgld\007xxmrglw\010xxpermdi\005xxsel\007xxsldwi\007xxspltd\007xxspltw\007"
    "xxswapd";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[6];
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
  { 0 /* add */, PPC::ADD8TLS_, Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_TLSReg }, },
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 0 /* add */, PPC::ADD4o, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 14 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 25 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S17Imm }, },
  { 31 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 31 /* addme */, PPC::ADDMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::ANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 52 /* andi */, PPC::ANDIo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 57 /* andis */, PPC::ANDISo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 63 /* b */, PPC::B, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 65 /* ba */, PPC::BA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 68 /* bc */, PPC::gBC, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 71 /* bca */, PPC::gBCA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 75 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 75 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 81 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 81 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 88 /* bcl */, PPC::gBCL, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 92 /* bcla */, PPC::gBCLA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 97 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 97 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 102 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 102 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 108 /* bctr */, PPC::BCTR, Convert_NoOperands, 0, {  }, },
  { 113 /* bctrl */, PPC::BCTRL, Convert_NoOperands, 0, {  }, },
  { 119 /* bdnz */, PPC::BDNZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 124 /* bdnz+ */, PPC::BDNZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 130 /* bdnz- */, PPC::BDNZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 136 /* bdnza */, PPC::BDNZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 142 /* bdnza+ */, PPC::BDNZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 149 /* bdnza- */, PPC::BDNZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 156 /* bdnzf */, PPC::gBC, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 162 /* bdnzfa */, PPC::gBCA, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 169 /* bdnzfl */, PPC::gBCL, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 176 /* bdnzfla */, PPC::gBCLA, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 184 /* bdnzflr */, PPC::gBCLR, Convert__imm_0__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 192 /* bdnzflrl */, PPC::gBCLRL, Convert__imm_0__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 201 /* bdnzl */, PPC::BDNZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 207 /* bdnzl+ */, PPC::BDNZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 214 /* bdnzl- */, PPC::BDNZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 221 /* bdnzla */, PPC::BDNZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 228 /* bdnzla+ */, PPC::BDNZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 236 /* bdnzla- */, PPC::BDNZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 244 /* bdnzlr */, PPC::BDNZLR, Convert_NoOperands, 0, {  }, },
  { 251 /* bdnzlr+ */, PPC::BDNZLRp, Convert_NoOperands, 0, {  }, },
  { 259 /* bdnzlr- */, PPC::BDNZLRm, Convert_NoOperands, 0, {  }, },
  { 267 /* bdnzlrl */, PPC::BDNZLRL, Convert_NoOperands, 0, {  }, },
  { 275 /* bdnzlrl+ */, PPC::BDNZLRLp, Convert_NoOperands, 0, {  }, },
  { 284 /* bdnzlrl- */, PPC::BDNZLRLm, Convert_NoOperands, 0, {  }, },
  { 293 /* bdnzt */, PPC::gBC, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 299 /* bdnzta */, PPC::gBCA, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 306 /* bdnztl */, PPC::gBCL, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 313 /* bdnztla */, PPC::gBCLA, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 321 /* bdnztlr */, PPC::gBCLR, Convert__imm_8__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 329 /* bdnztlrl */, PPC::gBCLRL, Convert__imm_8__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 338 /* bdz */, PPC::BDZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 342 /* bdz+ */, PPC::BDZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 347 /* bdz- */, PPC::BDZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 352 /* bdza */, PPC::BDZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 357 /* bdza+ */, PPC::BDZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 363 /* bdza- */, PPC::BDZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 369 /* bdzf */, PPC::gBC, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 374 /* bdzfa */, PPC::gBCA, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 380 /* bdzfl */, PPC::gBCL, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 386 /* bdzfla */, PPC::gBCLA, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 393 /* bdzflr */, PPC::gBCLR, Convert__imm_2__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 400 /* bdzflrl */, PPC::gBCLRL, Convert__imm_2__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 408 /* bdzl */, PPC::BDZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 413 /* bdzl+ */, PPC::BDZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 419 /* bdzl- */, PPC::BDZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 425 /* bdzla */, PPC::BDZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 431 /* bdzla+ */, PPC::BDZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 438 /* bdzla- */, PPC::BDZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 445 /* bdzlr */, PPC::BDZLR, Convert_NoOperands, 0, {  }, },
  { 451 /* bdzlr+ */, PPC::BDZLRp, Convert_NoOperands, 0, {  }, },
  { 458 /* bdzlr- */, PPC::BDZLRm, Convert_NoOperands, 0, {  }, },
  { 465 /* bdzlrl */, PPC::BDZLRL, Convert_NoOperands, 0, {  }, },
  { 472 /* bdzlrl+ */, PPC::BDZLRLp, Convert_NoOperands, 0, {  }, },
  { 480 /* bdzlrl- */, PPC::BDZLRLm, Convert_NoOperands, 0, {  }, },
  { 488 /* bdzt */, PPC::gBC, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 493 /* bdzta */, PPC::gBCA, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 499 /* bdztl */, PPC::gBCL, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 505 /* bdztla */, PPC::gBCLA, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 512 /* bdztlr */, PPC::gBCLR, Convert__imm_10__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 519 /* bdztlrl */, PPC::gBCLRL, Convert__imm_10__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 527 /* beq */, PPC::BCC, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 527 /* beq */, PPC::BCC, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 531 /* beq+ */, PPC::BCC, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 531 /* beq+ */, PPC::BCC, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 536 /* beq- */, PPC::BCC, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 536 /* beq- */, PPC::BCC, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 541 /* beqa */, PPC::BCCA, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 541 /* beqa */, PPC::BCCA, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 546 /* beqa+ */, PPC::BCCA, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 546 /* beqa+ */, PPC::BCCA, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 552 /* beqa- */, PPC::BCCA, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 552 /* beqa- */, PPC::BCCA, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 558 /* beqctr */, PPC::BCCCTR, Convert__imm_76__regCR0, 0, {  }, },
  { 558 /* beqctr */, PPC::BCCCTR, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 565 /* beqctr+ */, PPC::BCCCTR, Convert__imm_79__regCR0, 0, {  }, },
  { 565 /* beqctr+ */, PPC::BCCCTR, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 573 /* beqctr- */, PPC::BCCCTR, Convert__imm_78__regCR0, 0, {  }, },
  { 573 /* beqctr- */, PPC::BCCCTR, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 581 /* beqctrl */, PPC::BCCCTRL, Convert__imm_76__regCR0, 0, {  }, },
  { 581 /* beqctrl */, PPC::BCCCTRL, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 589 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_79__regCR0, 0, {  }, },
  { 589 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 598 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_78__regCR0, 0, {  }, },
  { 598 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 607 /* beql */, PPC::BCCL, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 607 /* beql */, PPC::BCCL, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 612 /* beql+ */, PPC::BCCL, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 612 /* beql+ */, PPC::BCCL, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 618 /* beql- */, PPC::BCCL, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 618 /* beql- */, PPC::BCCL, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 624 /* beqla */, PPC::BCCLA, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 624 /* beqla */, PPC::BCCLA, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 630 /* beqla+ */, PPC::BCCLA, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 630 /* beqla+ */, PPC::BCCLA, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 637 /* beqla- */, PPC::BCCLA, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 637 /* beqla- */, PPC::BCCLA, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 644 /* beqlr */, PPC::BCCLR, Convert__imm_76__regCR0, 0, {  }, },
  { 644 /* beqlr */, PPC::BCCLR, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 650 /* beqlr+ */, PPC::BCCLR, Convert__imm_79__regCR0, 0, {  }, },
  { 650 /* beqlr+ */, PPC::BCCLR, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 657 /* beqlr- */, PPC::BCCLR, Convert__imm_78__regCR0, 0, {  }, },
  { 657 /* beqlr- */, PPC::BCCLR, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 664 /* beqlrl */, PPC::BCCLRL, Convert__imm_76__regCR0, 0, {  }, },
  { 664 /* beqlrl */, PPC::BCCLRL, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 671 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_79__regCR0, 0, {  }, },
  { 671 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 679 /* beqlrl- */, PPC::BCCLRL, Convert__imm_78__regCR0, 0, {  }, },
  { 679 /* beqlrl- */, PPC::BCCLRL, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 687 /* bf */, PPC::gBC, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 690 /* bf+ */, PPC::gBC, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 694 /* bf- */, PPC::gBC, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 698 /* bfa */, PPC::gBCA, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 702 /* bfa+ */, PPC::gBCA, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 707 /* bfa- */, PPC::gBCA, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 712 /* bfctr */, PPC::gBCCTR, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 718 /* bfctr+ */, PPC::gBCCTR, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 725 /* bfctr- */, PPC::gBCCTR, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 732 /* bfctrl */, PPC::gBCCTRL, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 739 /* bfctrl+ */, PPC::gBCCTRL, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 747 /* bfctrl- */, PPC::gBCCTRL, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 755 /* bfl */, PPC::gBCL, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 759 /* bfl+ */, PPC::gBCL, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 764 /* bfl- */, PPC::gBCL, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 769 /* bfla */, PPC::gBCLA, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 774 /* bfla+ */, PPC::gBCLA, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 780 /* bfla- */, PPC::gBCLA, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 786 /* bflr */, PPC::gBCLR, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 791 /* bflr+ */, PPC::gBCLR, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 797 /* bflr- */, PPC::gBCLR, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 803 /* bflrl */, PPC::gBCLRL, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 809 /* bflrl+ */, PPC::gBCLRL, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 816 /* bflrl- */, PPC::gBCLRL, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 823 /* bge */, PPC::BCC, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 823 /* bge */, PPC::BCC, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 827 /* bge+ */, PPC::BCC, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 827 /* bge+ */, PPC::BCC, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 832 /* bge- */, PPC::BCC, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 832 /* bge- */, PPC::BCC, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 837 /* bgea */, PPC::BCCA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 837 /* bgea */, PPC::BCCA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 842 /* bgea+ */, PPC::BCCA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 842 /* bgea+ */, PPC::BCCA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 848 /* bgea- */, PPC::BCCA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 848 /* bgea- */, PPC::BCCA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 854 /* bgectr */, PPC::BCCCTR, Convert__imm_4__regCR0, 0, {  }, },
  { 854 /* bgectr */, PPC::BCCCTR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 861 /* bgectr+ */, PPC::BCCCTR, Convert__imm_7__regCR0, 0, {  }, },
  { 861 /* bgectr+ */, PPC::BCCCTR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 869 /* bgectr- */, PPC::BCCCTR, Convert__imm_6__regCR0, 0, {  }, },
  { 869 /* bgectr- */, PPC::BCCCTR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 877 /* bgectrl */, PPC::BCCCTRL, Convert__imm_4__regCR0, 0, {  }, },
  { 877 /* bgectrl */, PPC::BCCCTRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 885 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_7__regCR0, 0, {  }, },
  { 885 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 894 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_6__regCR0, 0, {  }, },
  { 894 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 903 /* bgel */, PPC::BCCL, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 903 /* bgel */, PPC::BCCL, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 908 /* bgel+ */, PPC::BCCL, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 908 /* bgel+ */, PPC::BCCL, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 914 /* bgel- */, PPC::BCCL, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 914 /* bgel- */, PPC::BCCL, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 920 /* bgela */, PPC::BCCLA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 920 /* bgela */, PPC::BCCLA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 926 /* bgela+ */, PPC::BCCLA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 926 /* bgela+ */, PPC::BCCLA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 933 /* bgela- */, PPC::BCCLA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 933 /* bgela- */, PPC::BCCLA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 940 /* bgelr */, PPC::BCCLR, Convert__imm_4__regCR0, 0, {  }, },
  { 940 /* bgelr */, PPC::BCCLR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 946 /* bgelr+ */, PPC::BCCLR, Convert__imm_7__regCR0, 0, {  }, },
  { 946 /* bgelr+ */, PPC::BCCLR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 953 /* bgelr- */, PPC::BCCLR, Convert__imm_6__regCR0, 0, {  }, },
  { 953 /* bgelr- */, PPC::BCCLR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 960 /* bgelrl */, PPC::BCCLRL, Convert__imm_4__regCR0, 0, {  }, },
  { 960 /* bgelrl */, PPC::BCCLRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 967 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_7__regCR0, 0, {  }, },
  { 967 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 975 /* bgelrl- */, PPC::BCCLRL, Convert__imm_6__regCR0, 0, {  }, },
  { 975 /* bgelrl- */, PPC::BCCLRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 983 /* bgt */, PPC::BCC, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 983 /* bgt */, PPC::BCC, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 987 /* bgt+ */, PPC::BCC, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 987 /* bgt+ */, PPC::BCC, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 992 /* bgt- */, PPC::BCC, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 992 /* bgt- */, PPC::BCC, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 997 /* bgta */, PPC::BCCA, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 997 /* bgta */, PPC::BCCA, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1002 /* bgta+ */, PPC::BCCA, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1002 /* bgta+ */, PPC::BCCA, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1008 /* bgta- */, PPC::BCCA, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1008 /* bgta- */, PPC::BCCA, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1014 /* bgtctr */, PPC::BCCCTR, Convert__imm_44__regCR0, 0, {  }, },
  { 1014 /* bgtctr */, PPC::BCCCTR, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1021 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_47__regCR0, 0, {  }, },
  { 1021 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1029 /* bgtctr- */, PPC::BCCCTR, Convert__imm_46__regCR0, 0, {  }, },
  { 1029 /* bgtctr- */, PPC::BCCCTR, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1037 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_44__regCR0, 0, {  }, },
  { 1037 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1045 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_47__regCR0, 0, {  }, },
  { 1045 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1054 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_46__regCR0, 0, {  }, },
  { 1054 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1063 /* bgtl */, PPC::BCCL, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1063 /* bgtl */, PPC::BCCL, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1068 /* bgtl+ */, PPC::BCCL, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1068 /* bgtl+ */, PPC::BCCL, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1074 /* bgtl- */, PPC::BCCL, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1074 /* bgtl- */, PPC::BCCL, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1080 /* bgtla */, PPC::BCCLA, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1080 /* bgtla */, PPC::BCCLA, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1086 /* bgtla+ */, PPC::BCCLA, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1086 /* bgtla+ */, PPC::BCCLA, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1093 /* bgtla- */, PPC::BCCLA, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1093 /* bgtla- */, PPC::BCCLA, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1100 /* bgtlr */, PPC::BCCLR, Convert__imm_44__regCR0, 0, {  }, },
  { 1100 /* bgtlr */, PPC::BCCLR, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1106 /* bgtlr+ */, PPC::BCCLR, Convert__imm_47__regCR0, 0, {  }, },
  { 1106 /* bgtlr+ */, PPC::BCCLR, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1113 /* bgtlr- */, PPC::BCCLR, Convert__imm_46__regCR0, 0, {  }, },
  { 1113 /* bgtlr- */, PPC::BCCLR, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1120 /* bgtlrl */, PPC::BCCLRL, Convert__imm_44__regCR0, 0, {  }, },
  { 1120 /* bgtlrl */, PPC::BCCLRL, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1127 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_47__regCR0, 0, {  }, },
  { 1127 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1135 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_46__regCR0, 0, {  }, },
  { 1135 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1143 /* bl */, PPC::BL, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1143 /* bl */, PPC::BL8_TLS_, Convert__DirectBr1_0__Imm1_1, 0, { MCK_DirectBr, MCK_Imm }, },
  { 1146 /* bla */, PPC::BLA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1150 /* ble */, PPC::BCC, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1150 /* ble */, PPC::BCC, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1154 /* ble+ */, PPC::BCC, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1154 /* ble+ */, PPC::BCC, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1159 /* ble- */, PPC::BCC, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1159 /* ble- */, PPC::BCC, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1164 /* blea */, PPC::BCCA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1164 /* blea */, PPC::BCCA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1169 /* blea+ */, PPC::BCCA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1169 /* blea+ */, PPC::BCCA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1175 /* blea- */, PPC::BCCA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1175 /* blea- */, PPC::BCCA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1181 /* blectr */, PPC::BCCCTR, Convert__imm_36__regCR0, 0, {  }, },
  { 1181 /* blectr */, PPC::BCCCTR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1188 /* blectr+ */, PPC::BCCCTR, Convert__imm_39__regCR0, 0, {  }, },
  { 1188 /* blectr+ */, PPC::BCCCTR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1196 /* blectr- */, PPC::BCCCTR, Convert__imm_38__regCR0, 0, {  }, },
  { 1196 /* blectr- */, PPC::BCCCTR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1204 /* blectrl */, PPC::BCCCTRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1204 /* blectrl */, PPC::BCCCTRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1212 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1212 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1221 /* blectrl- */, PPC::BCCCTRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1221 /* blectrl- */, PPC::BCCCTRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1230 /* blel */, PPC::BCCL, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1230 /* blel */, PPC::BCCL, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1235 /* blel+ */, PPC::BCCL, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1235 /* blel+ */, PPC::BCCL, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1241 /* blel- */, PPC::BCCL, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1241 /* blel- */, PPC::BCCL, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1247 /* blela */, PPC::BCCLA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1247 /* blela */, PPC::BCCLA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1253 /* blela+ */, PPC::BCCLA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1253 /* blela+ */, PPC::BCCLA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1260 /* blela- */, PPC::BCCLA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1260 /* blela- */, PPC::BCCLA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1267 /* blelr */, PPC::BCCLR, Convert__imm_36__regCR0, 0, {  }, },
  { 1267 /* blelr */, PPC::BCCLR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1273 /* blelr+ */, PPC::BCCLR, Convert__imm_39__regCR0, 0, {  }, },
  { 1273 /* blelr+ */, PPC::BCCLR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1280 /* blelr- */, PPC::BCCLR, Convert__imm_38__regCR0, 0, {  }, },
  { 1280 /* blelr- */, PPC::BCCLR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1287 /* blelrl */, PPC::BCCLRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1287 /* blelrl */, PPC::BCCLRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1294 /* blelrl+ */, PPC::BCCLRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1294 /* blelrl+ */, PPC::BCCLRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1302 /* blelrl- */, PPC::BCCLRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1302 /* blelrl- */, PPC::BCCLRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1310 /* blr */, PPC::BLR, Convert_NoOperands, 0, {  }, },
  { 1314 /* blrl */, PPC::BLRL, Convert_NoOperands, 0, {  }, },
  { 1319 /* blt */, PPC::BCC, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1319 /* blt */, PPC::BCC, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1323 /* blt+ */, PPC::BCC, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1323 /* blt+ */, PPC::BCC, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1328 /* blt- */, PPC::BCC, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1328 /* blt- */, PPC::BCC, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1333 /* blta */, PPC::BCCA, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1333 /* blta */, PPC::BCCA, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1338 /* blta+ */, PPC::BCCA, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1338 /* blta+ */, PPC::BCCA, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1344 /* blta- */, PPC::BCCA, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1344 /* blta- */, PPC::BCCA, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1350 /* bltctr */, PPC::BCCCTR, Convert__imm_12__regCR0, 0, {  }, },
  { 1350 /* bltctr */, PPC::BCCCTR, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1357 /* bltctr+ */, PPC::BCCCTR, Convert__imm_15__regCR0, 0, {  }, },
  { 1357 /* bltctr+ */, PPC::BCCCTR, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1365 /* bltctr- */, PPC::BCCCTR, Convert__imm_14__regCR0, 0, {  }, },
  { 1365 /* bltctr- */, PPC::BCCCTR, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1373 /* bltctrl */, PPC::BCCCTRL, Convert__imm_12__regCR0, 0, {  }, },
  { 1373 /* bltctrl */, PPC::BCCCTRL, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1381 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_15__regCR0, 0, {  }, },
  { 1381 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1390 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_14__regCR0, 0, {  }, },
  { 1390 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1399 /* bltl */, PPC::BCCL, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1399 /* bltl */, PPC::BCCL, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1404 /* bltl+ */, PPC::BCCL, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1404 /* bltl+ */, PPC::BCCL, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1410 /* bltl- */, PPC::BCCL, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1410 /* bltl- */, PPC::BCCL, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1416 /* bltla */, PPC::BCCLA, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1416 /* bltla */, PPC::BCCLA, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1422 /* bltla+ */, PPC::BCCLA, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1422 /* bltla+ */, PPC::BCCLA, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1429 /* bltla- */, PPC::BCCLA, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1429 /* bltla- */, PPC::BCCLA, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1436 /* bltlr */, PPC::BCCLR, Convert__imm_12__regCR0, 0, {  }, },
  { 1436 /* bltlr */, PPC::BCCLR, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1442 /* bltlr+ */, PPC::BCCLR, Convert__imm_15__regCR0, 0, {  }, },
  { 1442 /* bltlr+ */, PPC::BCCLR, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1449 /* bltlr- */, PPC::BCCLR, Convert__imm_14__regCR0, 0, {  }, },
  { 1449 /* bltlr- */, PPC::BCCLR, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1456 /* bltlrl */, PPC::BCCLRL, Convert__imm_12__regCR0, 0, {  }, },
  { 1456 /* bltlrl */, PPC::BCCLRL, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1463 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_15__regCR0, 0, {  }, },
  { 1463 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1471 /* bltlrl- */, PPC::BCCLRL, Convert__imm_14__regCR0, 0, {  }, },
  { 1471 /* bltlrl- */, PPC::BCCLRL, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1479 /* bne */, PPC::BCC, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1479 /* bne */, PPC::BCC, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1483 /* bne+ */, PPC::BCC, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1483 /* bne+ */, PPC::BCC, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1488 /* bne- */, PPC::BCC, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1488 /* bne- */, PPC::BCC, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1493 /* bnea */, PPC::BCCA, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1493 /* bnea */, PPC::BCCA, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1498 /* bnea+ */, PPC::BCCA, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1498 /* bnea+ */, PPC::BCCA, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1504 /* bnea- */, PPC::BCCA, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1504 /* bnea- */, PPC::BCCA, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1510 /* bnectr */, PPC::BCCCTR, Convert__imm_68__regCR0, 0, {  }, },
  { 1510 /* bnectr */, PPC::BCCCTR, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1517 /* bnectr+ */, PPC::BCCCTR, Convert__imm_71__regCR0, 0, {  }, },
  { 1517 /* bnectr+ */, PPC::BCCCTR, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1525 /* bnectr- */, PPC::BCCCTR, Convert__imm_70__regCR0, 0, {  }, },
  { 1525 /* bnectr- */, PPC::BCCCTR, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1533 /* bnectrl */, PPC::BCCCTRL, Convert__imm_68__regCR0, 0, {  }, },
  { 1533 /* bnectrl */, PPC::BCCCTRL, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1541 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_71__regCR0, 0, {  }, },
  { 1541 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1550 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_70__regCR0, 0, {  }, },
  { 1550 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1559 /* bnel */, PPC::BCCL, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1559 /* bnel */, PPC::BCCL, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1564 /* bnel+ */, PPC::BCCL, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1564 /* bnel+ */, PPC::BCCL, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1570 /* bnel- */, PPC::BCCL, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1570 /* bnel- */, PPC::BCCL, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1576 /* bnela */, PPC::BCCLA, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1576 /* bnela */, PPC::BCCLA, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1582 /* bnela+ */, PPC::BCCLA, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1582 /* bnela+ */, PPC::BCCLA, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1589 /* bnela- */, PPC::BCCLA, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1589 /* bnela- */, PPC::BCCLA, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1596 /* bnelr */, PPC::BCCLR, Convert__imm_68__regCR0, 0, {  }, },
  { 1596 /* bnelr */, PPC::BCCLR, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1602 /* bnelr+ */, PPC::BCCLR, Convert__imm_71__regCR0, 0, {  }, },
  { 1602 /* bnelr+ */, PPC::BCCLR, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1609 /* bnelr- */, PPC::BCCLR, Convert__imm_70__regCR0, 0, {  }, },
  { 1609 /* bnelr- */, PPC::BCCLR, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1616 /* bnelrl */, PPC::BCCLRL, Convert__imm_68__regCR0, 0, {  }, },
  { 1616 /* bnelrl */, PPC::BCCLRL, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1623 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_71__regCR0, 0, {  }, },
  { 1623 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1631 /* bnelrl- */, PPC::BCCLRL, Convert__imm_70__regCR0, 0, {  }, },
  { 1631 /* bnelrl- */, PPC::BCCLRL, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1639 /* bng */, PPC::BCC, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1639 /* bng */, PPC::BCC, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1643 /* bng+ */, PPC::BCC, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1643 /* bng+ */, PPC::BCC, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1648 /* bng- */, PPC::BCC, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1648 /* bng- */, PPC::BCC, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1653 /* bnga */, PPC::BCCA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1653 /* bnga */, PPC::BCCA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1658 /* bnga+ */, PPC::BCCA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1658 /* bnga+ */, PPC::BCCA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1664 /* bnga- */, PPC::BCCA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1664 /* bnga- */, PPC::BCCA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1670 /* bngctr */, PPC::BCCCTR, Convert__imm_36__regCR0, 0, {  }, },
  { 1670 /* bngctr */, PPC::BCCCTR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1677 /* bngctr+ */, PPC::BCCCTR, Convert__imm_39__regCR0, 0, {  }, },
  { 1677 /* bngctr+ */, PPC::BCCCTR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1685 /* bngctr- */, PPC::BCCCTR, Convert__imm_38__regCR0, 0, {  }, },
  { 1685 /* bngctr- */, PPC::BCCCTR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1693 /* bngctrl */, PPC::BCCCTRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1693 /* bngctrl */, PPC::BCCCTRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1701 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1701 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1710 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1710 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1719 /* bngl */, PPC::BCCL, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1719 /* bngl */, PPC::BCCL, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1724 /* bngl+ */, PPC::BCCL, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1724 /* bngl+ */, PPC::BCCL, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1730 /* bngl- */, PPC::BCCL, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1730 /* bngl- */, PPC::BCCL, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1736 /* bngla */, PPC::BCCLA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1736 /* bngla */, PPC::BCCLA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1742 /* bngla+ */, PPC::BCCLA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1742 /* bngla+ */, PPC::BCCLA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1749 /* bngla- */, PPC::BCCLA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1749 /* bngla- */, PPC::BCCLA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1756 /* bnglr */, PPC::BCCLR, Convert__imm_36__regCR0, 0, {  }, },
  { 1756 /* bnglr */, PPC::BCCLR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1762 /* bnglr+ */, PPC::BCCLR, Convert__imm_39__regCR0, 0, {  }, },
  { 1762 /* bnglr+ */, PPC::BCCLR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1769 /* bnglr- */, PPC::BCCLR, Convert__imm_38__regCR0, 0, {  }, },
  { 1769 /* bnglr- */, PPC::BCCLR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1776 /* bnglrl */, PPC::BCCLRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1776 /* bnglrl */, PPC::BCCLRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1783 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1783 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1791 /* bnglrl- */, PPC::BCCLRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1791 /* bnglrl- */, PPC::BCCLRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1799 /* bnl */, PPC::BCC, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1799 /* bnl */, PPC::BCC, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1803 /* bnl+ */, PPC::BCC, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1803 /* bnl+ */, PPC::BCC, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1808 /* bnl- */, PPC::BCC, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1808 /* bnl- */, PPC::BCC, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1813 /* bnla */, PPC::BCCA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1813 /* bnla */, PPC::BCCA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1818 /* bnla+ */, PPC::BCCA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1818 /* bnla+ */, PPC::BCCA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1824 /* bnla- */, PPC::BCCA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1824 /* bnla- */, PPC::BCCA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1830 /* bnlctr */, PPC::BCCCTR, Convert__imm_4__regCR0, 0, {  }, },
  { 1830 /* bnlctr */, PPC::BCCCTR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1837 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_7__regCR0, 0, {  }, },
  { 1837 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1845 /* bnlctr- */, PPC::BCCCTR, Convert__imm_6__regCR0, 0, {  }, },
  { 1845 /* bnlctr- */, PPC::BCCCTR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1853 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_4__regCR0, 0, {  }, },
  { 1853 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1861 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_7__regCR0, 0, {  }, },
  { 1861 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1870 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_6__regCR0, 0, {  }, },
  { 1870 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1879 /* bnll */, PPC::BCCL, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1879 /* bnll */, PPC::BCCL, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1884 /* bnll+ */, PPC::BCCL, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1884 /* bnll+ */, PPC::BCCL, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1890 /* bnll- */, PPC::BCCL, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1890 /* bnll- */, PPC::BCCL, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1896 /* bnlla */, PPC::BCCLA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1896 /* bnlla */, PPC::BCCLA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1902 /* bnlla+ */, PPC::BCCLA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1902 /* bnlla+ */, PPC::BCCLA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1909 /* bnlla- */, PPC::BCCLA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1909 /* bnlla- */, PPC::BCCLA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1916 /* bnllr */, PPC::BCCLR, Convert__imm_4__regCR0, 0, {  }, },
  { 1916 /* bnllr */, PPC::BCCLR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1922 /* bnllr+ */, PPC::BCCLR, Convert__imm_7__regCR0, 0, {  }, },
  { 1922 /* bnllr+ */, PPC::BCCLR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1929 /* bnllr- */, PPC::BCCLR, Convert__imm_6__regCR0, 0, {  }, },
  { 1929 /* bnllr- */, PPC::BCCLR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1936 /* bnllrl */, PPC::BCCLRL, Convert__imm_4__regCR0, 0, {  }, },
  { 1936 /* bnllrl */, PPC::BCCLRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1943 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_7__regCR0, 0, {  }, },
  { 1943 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1951 /* bnllrl- */, PPC::BCCLRL, Convert__imm_6__regCR0, 0, {  }, },
  { 1951 /* bnllrl- */, PPC::BCCLRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1959 /* bns */, PPC::BCC, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1959 /* bns */, PPC::BCC, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1963 /* bns+ */, PPC::BCC, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1963 /* bns+ */, PPC::BCC, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1968 /* bns- */, PPC::BCC, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1968 /* bns- */, PPC::BCC, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1973 /* bnsa */, PPC::BCCA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1973 /* bnsa */, PPC::BCCA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1978 /* bnsa+ */, PPC::BCCA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1978 /* bnsa+ */, PPC::BCCA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1984 /* bnsa- */, PPC::BCCA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1984 /* bnsa- */, PPC::BCCA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1990 /* bnsctr */, PPC::BCCCTR, Convert__imm_100__regCR0, 0, {  }, },
  { 1990 /* bnsctr */, PPC::BCCCTR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1997 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_103__regCR0, 0, {  }, },
  { 1997 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2005 /* bnsctr- */, PPC::BCCCTR, Convert__imm_102__regCR0, 0, {  }, },
  { 2005 /* bnsctr- */, PPC::BCCCTR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2013 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2013 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2021 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2021 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2030 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2030 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2039 /* bnsl */, PPC::BCCL, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2039 /* bnsl */, PPC::BCCL, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2044 /* bnsl+ */, PPC::BCCL, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2044 /* bnsl+ */, PPC::BCCL, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2050 /* bnsl- */, PPC::BCCL, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2050 /* bnsl- */, PPC::BCCL, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2056 /* bnsla */, PPC::BCCLA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2056 /* bnsla */, PPC::BCCLA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2062 /* bnsla+ */, PPC::BCCLA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2062 /* bnsla+ */, PPC::BCCLA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2069 /* bnsla- */, PPC::BCCLA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2069 /* bnsla- */, PPC::BCCLA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2076 /* bnslr */, PPC::BCCLR, Convert__imm_100__regCR0, 0, {  }, },
  { 2076 /* bnslr */, PPC::BCCLR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2082 /* bnslr+ */, PPC::BCCLR, Convert__imm_103__regCR0, 0, {  }, },
  { 2082 /* bnslr+ */, PPC::BCCLR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2089 /* bnslr- */, PPC::BCCLR, Convert__imm_102__regCR0, 0, {  }, },
  { 2089 /* bnslr- */, PPC::BCCLR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2096 /* bnslrl */, PPC::BCCLRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2096 /* bnslrl */, PPC::BCCLRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2103 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2103 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2111 /* bnslrl- */, PPC::BCCLRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2111 /* bnslrl- */, PPC::BCCLRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2119 /* bnu */, PPC::BCC, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2119 /* bnu */, PPC::BCC, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2123 /* bnu+ */, PPC::BCC, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2123 /* bnu+ */, PPC::BCC, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2128 /* bnu- */, PPC::BCC, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2128 /* bnu- */, PPC::BCC, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2133 /* bnua */, PPC::BCCA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2133 /* bnua */, PPC::BCCA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2138 /* bnua+ */, PPC::BCCA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2138 /* bnua+ */, PPC::BCCA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2144 /* bnua- */, PPC::BCCA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2144 /* bnua- */, PPC::BCCA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2150 /* bnuctr */, PPC::BCCCTR, Convert__imm_100__regCR0, 0, {  }, },
  { 2150 /* bnuctr */, PPC::BCCCTR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2157 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_103__regCR0, 0, {  }, },
  { 2157 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2165 /* bnuctr- */, PPC::BCCCTR, Convert__imm_102__regCR0, 0, {  }, },
  { 2165 /* bnuctr- */, PPC::BCCCTR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2173 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2173 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2181 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2181 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2190 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2190 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2199 /* bnul */, PPC::BCCL, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2199 /* bnul */, PPC::BCCL, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2204 /* bnul+ */, PPC::BCCL, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2204 /* bnul+ */, PPC::BCCL, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2210 /* bnul- */, PPC::BCCL, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2210 /* bnul- */, PPC::BCCL, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2216 /* bnula */, PPC::BCCLA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2216 /* bnula */, PPC::BCCLA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2222 /* bnula+ */, PPC::BCCLA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2222 /* bnula+ */, PPC::BCCLA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2229 /* bnula- */, PPC::BCCLA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2229 /* bnula- */, PPC::BCCLA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2236 /* bnulr */, PPC::BCCLR, Convert__imm_100__regCR0, 0, {  }, },
  { 2236 /* bnulr */, PPC::BCCLR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2242 /* bnulr+ */, PPC::BCCLR, Convert__imm_103__regCR0, 0, {  }, },
  { 2242 /* bnulr+ */, PPC::BCCLR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2249 /* bnulr- */, PPC::BCCLR, Convert__imm_102__regCR0, 0, {  }, },
  { 2249 /* bnulr- */, PPC::BCCLR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2256 /* bnulrl */, PPC::BCCLRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2256 /* bnulrl */, PPC::BCCLRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2263 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2263 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2271 /* bnulrl- */, PPC::BCCLRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2271 /* bnulrl- */, PPC::BCCLRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2279 /* brinc */, PPC::BRINC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2285 /* bso */, PPC::BCC, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2285 /* bso */, PPC::BCC, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2289 /* bso+ */, PPC::BCC, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2289 /* bso+ */, PPC::BCC, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2294 /* bso- */, PPC::BCC, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2294 /* bso- */, PPC::BCC, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2299 /* bsoa */, PPC::BCCA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2299 /* bsoa */, PPC::BCCA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2304 /* bsoa+ */, PPC::BCCA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2304 /* bsoa+ */, PPC::BCCA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2310 /* bsoa- */, PPC::BCCA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2310 /* bsoa- */, PPC::BCCA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2316 /* bsoctr */, PPC::BCCCTR, Convert__imm_108__regCR0, 0, {  }, },
  { 2316 /* bsoctr */, PPC::BCCCTR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2323 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_111__regCR0, 0, {  }, },
  { 2323 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2331 /* bsoctr- */, PPC::BCCCTR, Convert__imm_110__regCR0, 0, {  }, },
  { 2331 /* bsoctr- */, PPC::BCCCTR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2339 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2339 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2347 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2347 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2356 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2356 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2365 /* bsol */, PPC::BCCL, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2365 /* bsol */, PPC::BCCL, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2370 /* bsol+ */, PPC::BCCL, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2370 /* bsol+ */, PPC::BCCL, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2376 /* bsol- */, PPC::BCCL, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2376 /* bsol- */, PPC::BCCL, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2382 /* bsola */, PPC::BCCLA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2382 /* bsola */, PPC::BCCLA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2388 /* bsola+ */, PPC::BCCLA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2388 /* bsola+ */, PPC::BCCLA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2395 /* bsola- */, PPC::BCCLA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2395 /* bsola- */, PPC::BCCLA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2402 /* bsolr */, PPC::BCCLR, Convert__imm_108__regCR0, 0, {  }, },
  { 2402 /* bsolr */, PPC::BCCLR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2408 /* bsolr+ */, PPC::BCCLR, Convert__imm_111__regCR0, 0, {  }, },
  { 2408 /* bsolr+ */, PPC::BCCLR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2415 /* bsolr- */, PPC::BCCLR, Convert__imm_110__regCR0, 0, {  }, },
  { 2415 /* bsolr- */, PPC::BCCLR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2422 /* bsolrl */, PPC::BCCLRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2422 /* bsolrl */, PPC::BCCLRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2429 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2429 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2437 /* bsolrl- */, PPC::BCCLRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2437 /* bsolrl- */, PPC::BCCLRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2445 /* bt */, PPC::gBC, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2448 /* bt+ */, PPC::gBC, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2452 /* bt- */, PPC::gBC, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2456 /* bta */, PPC::gBCA, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2460 /* bta+ */, PPC::gBCA, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2465 /* bta- */, PPC::gBCA, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2470 /* btctr */, PPC::gBCCTR, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2476 /* btctr+ */, PPC::gBCCTR, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2483 /* btctr- */, PPC::gBCCTR, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2490 /* btctrl */, PPC::gBCCTRL, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2497 /* btctrl+ */, PPC::gBCCTRL, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2505 /* btctrl- */, PPC::gBCCTRL, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2513 /* btl */, PPC::gBCL, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2517 /* btl+ */, PPC::gBCL, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2522 /* btl- */, PPC::gBCL, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2527 /* btla */, PPC::gBCLA, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2532 /* btla+ */, PPC::gBCLA, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2538 /* btla- */, PPC::gBCLA, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2544 /* btlr */, PPC::gBCLR, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2549 /* btlr+ */, PPC::gBCLR, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2555 /* btlr- */, PPC::gBCLR, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2561 /* btlrl */, PPC::gBCLRL, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2567 /* btlrl+ */, PPC::gBCLRL, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2574 /* btlrl- */, PPC::gBCLRL, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2581 /* bun */, PPC::BCC, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2581 /* bun */, PPC::BCC, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2585 /* bun+ */, PPC::BCC, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2585 /* bun+ */, PPC::BCC, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2590 /* bun- */, PPC::BCC, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2590 /* bun- */, PPC::BCC, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2595 /* buna */, PPC::BCCA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2595 /* buna */, PPC::BCCA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2600 /* buna+ */, PPC::BCCA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2600 /* buna+ */, PPC::BCCA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2606 /* buna- */, PPC::BCCA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2606 /* buna- */, PPC::BCCA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2612 /* bunctr */, PPC::BCCCTR, Convert__imm_108__regCR0, 0, {  }, },
  { 2612 /* bunctr */, PPC::BCCCTR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2619 /* bunctr+ */, PPC::BCCCTR, Convert__imm_111__regCR0, 0, {  }, },
  { 2619 /* bunctr+ */, PPC::BCCCTR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2627 /* bunctr- */, PPC::BCCCTR, Convert__imm_110__regCR0, 0, {  }, },
  { 2627 /* bunctr- */, PPC::BCCCTR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2635 /* bunctrl */, PPC::BCCCTRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2635 /* bunctrl */, PPC::BCCCTRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2643 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2643 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2652 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2652 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2661 /* bunl */, PPC::BCCL, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2661 /* bunl */, PPC::BCCL, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2666 /* bunl+ */, PPC::BCCL, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2666 /* bunl+ */, PPC::BCCL, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2672 /* bunl- */, PPC::BCCL, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2672 /* bunl- */, PPC::BCCL, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2678 /* bunla */, PPC::BCCLA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2678 /* bunla */, PPC::BCCLA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2684 /* bunla+ */, PPC::BCCLA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2684 /* bunla+ */, PPC::BCCLA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2691 /* bunla- */, PPC::BCCLA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2691 /* bunla- */, PPC::BCCLA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2698 /* bunlr */, PPC::BCCLR, Convert__imm_108__regCR0, 0, {  }, },
  { 2698 /* bunlr */, PPC::BCCLR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2704 /* bunlr+ */, PPC::BCCLR, Convert__imm_111__regCR0, 0, {  }, },
  { 2704 /* bunlr+ */, PPC::BCCLR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2711 /* bunlr- */, PPC::BCCLR, Convert__imm_110__regCR0, 0, {  }, },
  { 2711 /* bunlr- */, PPC::BCCLR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2718 /* bunlrl */, PPC::BCCLRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2718 /* bunlrl */, PPC::BCCLRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2725 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2725 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2733 /* bunlrl- */, PPC::BCCLRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2733 /* bunlrl- */, PPC::BCCLRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2741 /* clrldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__imm_0__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2741 /* clrldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__imm_0__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2748 /* clrlsldi */, PPC::CLRLSLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2748 /* clrlsldi */, PPC::CLRLSLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2757 /* clrlslwi */, PPC::CLRLSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2757 /* clrlslwi */, PPC::CLRLSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2766 /* clrlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__imm_0__U5Imm1_2__imm_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2766 /* clrlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__imm_0__U5Imm1_3__imm_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2773 /* clrrdi */, PPC::CLRRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2773 /* clrrdi */, PPC::CLRRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2780 /* clrrwi */, PPC::CLRRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2780 /* clrrwi */, PPC::CLRRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2787 /* cmp */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2787 /* cmp */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2791 /* cmpd */, PPC::CMPD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2791 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2796 /* cmpdi */, PPC::CMPDI, Convert__regCR0__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 2796 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, },
  { 2802 /* cmpi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_S16Imm }, },
  { 2802 /* cmpi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_S16Imm }, },
  { 2807 /* cmpl */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2807 /* cmpl */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2812 /* cmpld */, PPC::CMPLD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2812 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2818 /* cmpldi */, PPC::CMPLDI, Convert__regCR0__RegG8RC1_0__U16Imm1_1, 0, { MCK_RegG8RC, MCK_U16Imm }, },
  { 2818 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, },
  { 2825 /* cmpli */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_U16Imm }, },
  { 2825 /* cmpli */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_U16Imm }, },
  { 2831 /* cmplw */, PPC::CMPLW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2831 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2837 /* cmplwi */, PPC::CMPLWI, Convert__regCR0__RegGPRC1_0__U16Imm1_1, 0, { MCK_RegGPRC, MCK_U16Imm }, },
  { 2837 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 2844 /* cmpw */, PPC::CMPW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2844 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2849 /* cmpwi */, PPC::CMPWI, Convert__regCR0__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 2849 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 2855 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2855 /* cntlzd */, PPC::CNTLZDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2862 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2862 /* cntlzw */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2869 /* crand */, PPC::CRAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2875 /* crandc */, PPC::CRANDC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2882 /* crclr */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 2888 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2894 /* crmove */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2901 /* crnand */, PPC::CRNAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2908 /* crnor */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2914 /* crnot */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2920 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2925 /* crorc */, PPC::CRORC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2931 /* crset */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 2937 /* crxor */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2943 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2948 /* dcbf */, PPC::DCBF, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2953 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2958 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2964 /* dcbt */, PPC::DCBT, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2969 /* dcbtst */, PPC::DCBTST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2976 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2981 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2987 /* dccci */, PPC::DCCCI, Convert__regR0__regR0, 0, {  }, },
  { 2987 /* dccci */, PPC::DCCCI, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2993 /* dci */, PPC::DCCCI, Convert__regR0__regR0, 0, { MCK_0 }, },
  { 2997 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2997 /* divd */, PPC::DIVDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3002 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3002 /* divdu */, PPC::DIVDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3008 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3008 /* divw */, PPC::DIVWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3013 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3013 /* divwu */, PPC::DIVWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3019 /* dss */, PPC::DSS, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 3023 /* dssall */, PPC::DSSALL, Convert_NoOperands, 0, {  }, },
  { 3030 /* dst */, PPC::DST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3034 /* dstst */, PPC::DSTST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3040 /* dststt */, PPC::DSTSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3047 /* dstt */, PPC::DSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3052 /* eieio */, PPC::EIEIO, Convert_NoOperands, 0, {  }, },
  { 3058 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3058 /* eqv */, PPC::EQVo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3062 /* evabs */, PPC::EVABS, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3068 /* evaddiw */, PPC::EVADDIW, Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1, 0, { MCK_RegGPRC, MCK_U5Imm, MCK_RegGPRC }, },
  { 3076 /* evaddsmiaaw */, PPC::EVADDSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3088 /* evaddssiaaw */, PPC::EVADDSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3100 /* evaddumiaaw */, PPC::EVADDUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3112 /* evaddusiaaw */, PPC::EVADDUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3124 /* evaddw */, PPC::EVADDW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3131 /* evand */, PPC::EVAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3137 /* evandc */, PPC::EVANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3144 /* evcmpeq */, PPC::EVCMPEQ, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3152 /* evcmpgts */, PPC::EVCMPGTS, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3161 /* evcmpgtu */, PPC::EVCMPGTU, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3170 /* evcmplts */, PPC::EVCMPLTS, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3179 /* evcmpltu */, PPC::EVCMPLTU, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3188 /* evcntlsw */, PPC::EVCNTLSW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3197 /* evcntlzw */, PPC::EVCNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3206 /* evdivws */, PPC::EVDIVWS, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3214 /* evdivwu */, PPC::EVDIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3222 /* eveqv */, PPC::EVEQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3228 /* evextsb */, PPC::EVEXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3236 /* evextsh */, PPC::EVEXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3244 /* evldd */, PPC::EVLDD, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3250 /* evlddx */, PPC::EVLDDX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3257 /* evldh */, PPC::EVLDH, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3263 /* evldhx */, PPC::EVLDHX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3270 /* evldw */, PPC::EVLDW, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3276 /* evldwx */, PPC::EVLDWX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3283 /* evlhhesplat */, PPC::EVLHHESPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3295 /* evlhhesplatx */, PPC::EVLHHESPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3308 /* evlhhossplat */, PPC::EVLHHOSSPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3321 /* evlhhossplatx */, PPC::EVLHHOSSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3335 /* evlhhousplat */, PPC::EVLHHOUSPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3348 /* evlhhousplatx */, PPC::EVLHHOUSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3362 /* evlwhe */, PPC::EVLWHE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3369 /* evlwhex */, PPC::EVLWHEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3377 /* evlwhos */, PPC::EVLWHOS, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3385 /* evlwhosx */, PPC::EVLWHOSX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3394 /* evlwhou */, PPC::EVLWHOU, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3402 /* evlwhoux */, PPC::EVLWHOUX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3411 /* evlwhsplat */, PPC::EVLWHSPLAT, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3422 /* evlwhsplatx */, PPC::EVLWHSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3434 /* evlwwsplat */, PPC::EVLWWSPLAT, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3445 /* evlwwsplatx */, PPC::EVLWWSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3457 /* evmergehi */, PPC::EVMERGEHI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3467 /* evmergehilo */, PPC::EVMERGEHILO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3479 /* evmergelo */, PPC::EVMERGELO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3489 /* evmergelohi */, PPC::EVMERGELOHI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3501 /* evmhegsmfaa */, PPC::EVMHEGSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3513 /* evmhegsmfan */, PPC::EVMHEGSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3525 /* evmhegsmiaa */, PPC::EVMHEGSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3537 /* evmhegsmian */, PPC::EVMHEGSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3549 /* evmhegumiaa */, PPC::EVMHEGUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3561 /* evmhegumian */, PPC::EVMHEGUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3573 /* evmhesmf */, PPC::EVMHESMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3582 /* evmhesmfa */, PPC::EVMHESMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3592 /* evmhesmfaaw */, PPC::EVMHESMFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3604 /* evmhesmfanw */, PPC::EVMHESMFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3616 /* evmhesmi */, PPC::EVMHESMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3625 /* evmhesmia */, PPC::EVMHESMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3635 /* evmhesmiaaw */, PPC::EVMHESMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3647 /* evmhesmianw */, PPC::EVMHESMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3659 /* evmhessf */, PPC::EVMHESSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3668 /* evmhessfa */, PPC::EVMHESSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3678 /* evmhessfaaw */, PPC::EVMHESSFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3690 /* evmhessfanw */, PPC::EVMHESSFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3702 /* evmhessiaaw */, PPC::EVMHESSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3714 /* evmhessianw */, PPC::EVMHESSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3726 /* evmheumi */, PPC::EVMHEUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3735 /* evmheumia */, PPC::EVMHEUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3745 /* evmheumiaaw */, PPC::EVMHEUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3757 /* evmheumianw */, PPC::EVMHEUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3769 /* evmheusiaaw */, PPC::EVMHEUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3781 /* evmheusianw */, PPC::EVMHEUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3793 /* evmhogsmfaa */, PPC::EVMHOGSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3805 /* evmhogsmfan */, PPC::EVMHOGSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3817 /* evmhogsmiaa */, PPC::EVMHOGSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3829 /* evmhogsmian */, PPC::EVMHOGSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3841 /* evmhogumiaa */, PPC::EVMHOGUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3853 /* evmhogumian */, PPC::EVMHOGUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3865 /* evmhosmf */, PPC::EVMHOSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3874 /* evmhosmfa */, PPC::EVMHOSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3884 /* evmhosmfaaw */, PPC::EVMHOSMFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3896 /* evmhosmfanw */, PPC::EVMHOSMFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3908 /* evmhosmi */, PPC::EVMHOSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3917 /* evmhosmia */, PPC::EVMHOSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3927 /* evmhosmiaaw */, PPC::EVMHOSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3939 /* evmhosmianw */, PPC::EVMHOSMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3951 /* evmhossf */, PPC::EVMHOSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3960 /* evmhossfa */, PPC::EVMHOSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3970 /* evmhossfaaw */, PPC::EVMHOSSFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3982 /* evmhossfanw */, PPC::EVMHOSSFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3994 /* evmhossiaaw */, PPC::EVMHOSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4006 /* evmhossianw */, PPC::EVMHOSSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4018 /* evmhoumi */, PPC::EVMHOUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4027 /* evmhoumia */, PPC::EVMHOUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4037 /* evmhoumiaaw */, PPC::EVMHOUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4049 /* evmhoumianw */, PPC::EVMHOUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4061 /* evmhousiaaw */, PPC::EVMHOUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4073 /* evmhousianw */, PPC::EVMHOUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4085 /* evmra */, PPC::EVMRA, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4091 /* evmwhsmf */, PPC::EVMWHSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4100 /* evmwhsmfa */, PPC::EVMWHSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4110 /* evmwhsmi */, PPC::EVMWHSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4119 /* evmwhsmia */, PPC::EVMWHSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4129 /* evmwhssf */, PPC::EVMWHSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4138 /* evmwhssfa */, PPC::EVMWHSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4148 /* evmwhumi */, PPC::EVMWHUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4157 /* evmwhumia */, PPC::EVMWHUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4167 /* evmwlsmiaaw */, PPC::EVMWLSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4179 /* evmwlsmianw */, PPC::EVMWLSMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4191 /* evmwlssiaaw */, PPC::EVMWLSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4203 /* evmwlssianw */, PPC::EVMWLSSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4215 /* evmwlumi */, PPC::EVMWLUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4224 /* evmwlumia */, PPC::EVMWLUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4234 /* evmwlumiaaw */, PPC::EVMWLUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4246 /* evmwlumianw */, PPC::EVMWLUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4258 /* evmwlusiaaw */, PPC::EVMWLUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4270 /* evmwlusianw */, PPC::EVMWLUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4282 /* evmwsmf */, PPC::EVMWSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4290 /* evmwsmfa */, PPC::EVMWSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4299 /* evmwsmfaa */, PPC::EVMWSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4309 /* evmwsmfan */, PPC::EVMWSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4319 /* evmwsmi */, PPC::EVMWSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4327 /* evmwsmia */, PPC::EVMWSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4336 /* evmwsmiaa */, PPC::EVMWSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4346 /* evmwsmian */, PPC::EVMWSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4356 /* evmwssf */, PPC::EVMWSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4364 /* evmwssfa */, PPC::EVMWSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4373 /* evmwssfaa */, PPC::EVMWSSFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4383 /* evmwssfan */, PPC::EVMWSSFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4393 /* evmwumi */, PPC::EVMWUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4401 /* evmwumia */, PPC::EVMWUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4410 /* evmwumiaa */, PPC::EVMWUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4420 /* evmwumian */, PPC::EVMWUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4430 /* evnand */, PPC::EVNAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4437 /* evneg */, PPC::EVNEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4443 /* evnor */, PPC::EVNOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4449 /* evor */, PPC::EVOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4454 /* evorc */, PPC::EVORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4460 /* evrlw */, PPC::EVRLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4466 /* evrlwi */, PPC::EVRLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4473 /* evrndw */, PPC::EVRNDW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4480 /* evslw */, PPC::EVSLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4486 /* evslwi */, PPC::EVSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4493 /* evsplatfi */, PPC::EVSPLATFI, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 4503 /* evsplati */, PPC::EVSPLATI, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 4512 /* evsrwis */, PPC::EVSRWIS, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4520 /* evsrwiu */, PPC::EVSRWIU, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4528 /* evsrws */, PPC::EVSRWS, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4535 /* evsrwu */, PPC::EVSRWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4542 /* evstdd */, PPC::EVSTDD, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4549 /* evstddx */, PPC::EVSTDDX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4557 /* evstdh */, PPC::EVSTDH, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4564 /* evstdhx */, PPC::EVSTDHX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4572 /* evstdw */, PPC::EVSTDW, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4579 /* evstdwx */, PPC::EVSTDWX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4587 /* evstwhe */, PPC::EVSTWHE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4595 /* evstwhex */, PPC::EVSTWHEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4604 /* evstwho */, PPC::EVSTWHO, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4612 /* evstwhox */, PPC::EVSTWHOX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4621 /* evstwwe */, PPC::EVSTWWE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4629 /* evstwwex */, PPC::EVSTWWEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4638 /* evstwwo */, PPC::EVSTWWO, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4646 /* evstwwox */, PPC::EVSTWWOX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4655 /* evsubfsmiaaw */, PPC::EVSUBFSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4668 /* evsubfssiaaw */, PPC::EVSUBFSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4681 /* evsubfumiaaw */, PPC::EVSUBFUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4694 /* evsubfusiaaw */, PPC::EVSUBFUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4707 /* evsubfw */, PPC::EVSUBFW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4715 /* evsubifw */, PPC::EVSUBIFW, Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_U5Imm, MCK_RegGPRC }, },
  { 4724 /* evxor */, PPC::EVXOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4730 /* extldi */, PPC::EXTLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4730 /* extldi */, PPC::EXTLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4737 /* extlwi */, PPC::EXTLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4737 /* extlwi */, PPC::EXTLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4744 /* extrdi */, PPC::EXTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4744 /* extrdi */, PPC::EXTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4751 /* extrwi */, PPC::EXTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4751 /* extrwi */, PPC::EXTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4758 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4758 /* extsb */, PPC::EXTSBo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4764 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4764 /* extsh */, PPC::EXTSHo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4770 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4770 /* extsw */, PPC::EXTSWo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4776 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4776 /* fabs */, PPC::FABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4781 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4781 /* fadd */, PPC::FADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4786 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4786 /* fadds */, PPC::FADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4792 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4792 /* fcfid */, PPC::FCFIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4798 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 4798 /* fcfids */, PPC::FCFIDSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 4805 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4805 /* fcfidu */, PPC::FCFIDUo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4812 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 4812 /* fcfidus */, PPC::FCFIDUSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 4820 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4826 /* fcpsgn */, PPC::FCPSGNS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4826 /* fcpsgn */, PPC::FCPSGNSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4833 /* fctid */, PPC::FCTID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4833 /* fctid */, PPC::FCTIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4839 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4839 /* fctiduz */, PPC::FCTIDUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4847 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4847 /* fctidz */, PPC::FCTIDZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4854 /* fctiw */, PPC::FCTIW, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4854 /* fctiw */, PPC::FCTIWo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4860 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4860 /* fctiwuz */, PPC::FCTIWUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4868 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4868 /* fctiwz */, PPC::FCTIWZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4875 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4875 /* fdiv */, PPC::FDIVo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4880 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4880 /* fdivs */, PPC::FDIVSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4886 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4886 /* fmadd */, PPC::FMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4892 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4892 /* fmadds */, PPC::FMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4899 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4899 /* fmr */, PPC::FMRo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4903 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4903 /* fmsub */, PPC::FMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4909 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4909 /* fmsubs */, PPC::FMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4916 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4916 /* fmul */, PPC::FMULo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4921 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4921 /* fmuls */, PPC::FMULSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4927 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4927 /* fnabs */, PPC::FNABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4933 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4933 /* fneg */, PPC::FNEGSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4938 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4938 /* fnmadd */, PPC::FNMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4945 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4945 /* fnmadds */, PPC::FNMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4953 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4953 /* fnmsub */, PPC::FNMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4960 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4960 /* fnmsubs */, PPC::FNMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4968 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4968 /* fre */, PPC::FREo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4972 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4972 /* fres */, PPC::FRESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4977 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4977 /* frim */, PPC::FRIMSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4982 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4982 /* frin */, PPC::FRINSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4987 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4987 /* frip */, PPC::FRIPSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4992 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4992 /* friz */, PPC::FRIZSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4997 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 4997 /* frsp */, PPC::FRSPo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5002 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5002 /* frsqrte */, PPC::FRSQRTEo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5010 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5010 /* frsqrtes */, PPC::FRSQRTESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5019 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5019 /* fsel */, PPC::FSELSo, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5024 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5024 /* fsqrt */, PPC::FSQRTo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5030 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5030 /* fsqrts */, PPC::FSQRTSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5037 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5037 /* fsub */, PPC::FSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5042 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5042 /* fsubs */, PPC::FSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5048 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5053 /* icbt */, PPC::ICBT, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5058 /* iccci */, PPC::ICCCI, Convert__regR0__regR0, 0, {  }, },
  { 5058 /* iccci */, PPC::ICCCI, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5064 /* ici */, PPC::ICCCI, Convert__regR0__regR0, 0, { MCK_0 }, },
  { 5068 /* inslwi */, PPC::INSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5068 /* inslwi */, PPC::INSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5075 /* insrdi */, PPC::INSRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5075 /* insrdi */, PPC::INSRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5082 /* insrwi */, PPC::INSRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5082 /* insrwi */, PPC::INSRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5089 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 5094 /* isync */, PPC::ISYNC, Convert_NoOperands, 0, {  }, },
  { 5100 /* la */, PPC::LAx, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5103 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5107 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5112 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5118 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5123 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5126 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5132 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5138 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5142 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5147 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5151 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5155 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5160 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5166 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5171 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5178 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5185 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5189 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5194 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5200 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5205 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5209 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5214 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5220 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5225 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5231 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5235 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5240 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5246 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5251 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 5254 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S17Imm1_1, 0, { MCK_RegGPRC, MCK_S17Imm }, },
  { 5258 /* lmw */, PPC::LMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5262 /* lswi */, PPC::LSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 5267 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5273 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5279 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5285 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5290 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5295 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5299 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5304 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5308 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5314 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5320 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5325 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5331 /* lwsync */, PPC::SYNC, Convert__imm_1, 0, {  }, },
  { 5338 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5342 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5347 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5353 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5358 /* lxsdx */, PPC::LXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5364 /* lxvd2x */, PPC::LXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5371 /* lxvdsx */, PPC::LXVDSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5378 /* lxvw4x */, PPC::LXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5385 /* mbar */, PPC::MBAR, Convert__imm_0, 0, {  }, },
  { 5385 /* mbar */, PPC::MBAR, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 5390 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 5395 /* mfamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_29, 0, { MCK_RegGPRC }, },
  { 5401 /* mfasr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_280, 0, { MCK_RegGPRC }, },
  { 5407 /* mfbr0 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_128, 0, { MCK_RegGPRC }, },
  { 5413 /* mfbr1 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_129, 0, { MCK_RegGPRC }, },
  { 5419 /* mfbr2 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_130, 0, { MCK_RegGPRC }, },
  { 5425 /* mfbr3 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_131, 0, { MCK_RegGPRC }, },
  { 5431 /* mfbr4 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_132, 0, { MCK_RegGPRC }, },
  { 5437 /* mfbr5 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_133, 0, { MCK_RegGPRC }, },
  { 5443 /* mfbr6 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_134, 0, { MCK_RegGPRC }, },
  { 5449 /* mfbr7 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_135, 0, { MCK_RegGPRC }, },
  { 5455 /* mfcfar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_28, 0, { MCK_RegGPRC }, },
  { 5462 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5467 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5473 /* mfdar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_19, 0, { MCK_RegGPRC }, },
  { 5479 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_537, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5479 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_539, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5479 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_541, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5479 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_543, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5487 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_536, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5487 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_538, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5487 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_540, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5487 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_542, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5495 /* mfdccr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_1018, 0, { MCK_RegGPRC }, },
  { 5502 /* mfdcr */, PPC::MFDCR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5508 /* mfdear */, PPC::MFSPR, Convert__RegGPRC1_0__imm_981, 0, { MCK_RegGPRC }, },
  { 5515 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_22, 0, { MCK_RegGPRC }, },
  { 5515 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_22, 0, { MCK_RegGPRC }, },
  { 5521 /* mfdscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_17, 0, { MCK_RegGPRC }, },
  { 5528 /* mfdsisr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_18, 0, { MCK_RegGPRC }, },
  { 5536 /* mfesr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_980, 0, { MCK_RegGPRC }, },
  { 5542 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, 0, { MCK_RegF8RC }, },
  { 5547 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_529, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5547 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_531, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5547 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_533, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5547 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_535, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5555 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_528, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5555 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_530, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5555 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_532, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5555 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_534, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5563 /* mficcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_1019, 0, { MCK_RegGPRC }, },
  { 5570 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5575 /* mfmsr */, PPC::MFMSR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5581 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, 0, { MCK_RegGPRC, MCK_CRBitMask }, },
  { 5588 /* mfpid */, PPC::MFSPR, Convert__RegGPRC1_0__imm_48, 0, { MCK_RegGPRC }, },
  { 5594 /* mfpvr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_287, 0, { MCK_RegGPRC }, },
  { 5600 /* mfrtcl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_5, 0, { MCK_RegGPRC }, },
  { 5607 /* mfrtcu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_4, 0, { MCK_RegGPRC }, },
  { 5614 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_25, 0, { MCK_RegGPRC }, },
  { 5614 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_25, 0, { MCK_RegGPRC }, },
  { 5621 /* mfspefscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_512, 0, { MCK_RegGPRC }, },
  { 5631 /* mfspr */, PPC::MFSPR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_272, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_273, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_274, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_275, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_260, 0, { MCK_RegGPRC, MCK_4 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_261, 0, { MCK_RegGPRC, MCK_5 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_262, 0, { MCK_RegGPRC, MCK_6 }, },
  { 5637 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_263, 0, { MCK_RegGPRC, MCK_7 }, },
  { 5644 /* mfsprg0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_272, 0, { MCK_RegGPRC }, },
  { 5652 /* mfsprg1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_273, 0, { MCK_RegGPRC }, },
  { 5660 /* mfsprg2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_274, 0, { MCK_RegGPRC }, },
  { 5668 /* mfsprg3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_275, 0, { MCK_RegGPRC }, },
  { 5676 /* mfsprg4 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_260, 0, { MCK_RegGPRC }, },
  { 5684 /* mfsprg5 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_261, 0, { MCK_RegGPRC }, },
  { 5692 /* mfsprg6 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_262, 0, { MCK_RegGPRC }, },
  { 5700 /* mfsprg7 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_263, 0, { MCK_RegGPRC }, },
  { 5708 /* mfsr */, PPC::MFSR, Convert__RegGPRC1_0__U4Imm1_1, 0, { MCK_RegGPRC, MCK_U4Imm }, },
  { 5713 /* mfsrin */, PPC::MFSRIN, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5720 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_26, 0, { MCK_RegGPRC }, },
  { 5720 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_26, 0, { MCK_RegGPRC }, },
  { 5727 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_27, 0, { MCK_RegGPRC }, },
  { 5727 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_27, 0, { MCK_RegGPRC }, },
  { 5734 /* mfsrr2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_990, 0, { MCK_RegGPRC }, },
  { 5741 /* mfsrr3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_991, 0, { MCK_RegGPRC }, },
  { 5748 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__imm_268, 0, { MCK_RegGPRC }, },
  { 5748 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5753 /* mftbhi */, PPC::MFSPR, Convert__RegGPRC1_0__imm_988, 0, { MCK_RegGPRC }, },
  { 5760 /* mftbl */, PPC::MFTB, Convert__RegGPRC1_0__imm_268, 0, { MCK_RegGPRC }, },
  { 5766 /* mftblo */, PPC::MFSPR, Convert__RegGPRC1_0__imm_989, 0, { MCK_RegGPRC }, },
  { 5773 /* mftbu */, PPC::MFTB, Convert__RegGPRC1_0__imm_269, 0, { MCK_RegGPRC }, },
  { 5779 /* mftcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_986, 0, { MCK_RegGPRC }, },
  { 5785 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 5792 /* mfxer */, PPC::MFSPR, Convert__RegGPRC1_0__imm_1, 0, { MCK_RegGPRC }, },
  { 5798 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 5798 /* mr */, PPC::OR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 5801 /* msync */, PPC::SYNC, Convert__imm_0, 0, {  }, },
  { 5807 /* mtamr */, PPC::MTSPR, Convert__imm_29__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5813 /* mtasr */, PPC::MTSPR, Convert__imm_280__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5813 /* mtasr */, PPC::MTSPR, Convert__imm_280__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5819 /* mtbr0 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_128, 0, { MCK_RegGPRC }, },
  { 5825 /* mtbr1 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_129, 0, { MCK_RegGPRC }, },
  { 5831 /* mtbr2 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_130, 0, { MCK_RegGPRC }, },
  { 5837 /* mtbr3 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_131, 0, { MCK_RegGPRC }, },
  { 5843 /* mtbr4 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_132, 0, { MCK_RegGPRC }, },
  { 5849 /* mtbr5 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_133, 0, { MCK_RegGPRC }, },
  { 5855 /* mtbr6 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_134, 0, { MCK_RegGPRC }, },
  { 5861 /* mtbr7 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_135, 0, { MCK_RegGPRC }, },
  { 5867 /* mtcfar */, PPC::MTSPR, Convert__imm_28__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5874 /* mtcr */, PPC::MTCRF8, Convert__imm_255__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 5879 /* mtcrf */, PPC::MTCRF, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 5885 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5891 /* mtdar */, PPC::MTSPR, Convert__imm_19__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5897 /* mtdbatl */, PPC::MTSPR, Convert__imm_537__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 5897 /* mtdbatl */, PPC::MTSPR, Convert__imm_539__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 5897 /* mtdbatl */, PPC::MTSPR, Convert__imm_541__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 5897 /* mtdbatl */, PPC::MTSPR, Convert__imm_543__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 5905 /* mtdbatu */, PPC::MTSPR, Convert__imm_536__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 5905 /* mtdbatu */, PPC::MTSPR, Convert__imm_538__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 5905 /* mtdbatu */, PPC::MTSPR, Convert__imm_540__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 5905 /* mtdbatu */, PPC::MTSPR, Convert__imm_542__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 5913 /* mtdccr */, PPC::MTSPR, Convert__imm_1018__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5920 /* mtdcr */, PPC::MTDCR, Convert__RegGPRC1_1__Imm1_0, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 5926 /* mtdear */, PPC::MTSPR, Convert__imm_981__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5933 /* mtdec */, PPC::MTSPR, Convert__imm_22__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5933 /* mtdec */, PPC::MTSPR, Convert__imm_22__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5939 /* mtdscr */, PPC::MTSPR, Convert__imm_17__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5946 /* mtdsisr */, PPC::MTSPR, Convert__imm_18__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5954 /* mtesr */, PPC::MTSPR, Convert__imm_980__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5960 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 5967 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 5974 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1, 0, { MCK_Imm, MCK_RegF8RC }, },
  { 5980 /* mtibatl */, PPC::MTSPR, Convert__imm_529__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 5980 /* mtibatl */, PPC::MTSPR, Convert__imm_531__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 5980 /* mtibatl */, PPC::MTSPR, Convert__imm_533__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 5980 /* mtibatl */, PPC::MTSPR, Convert__imm_535__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 5988 /* mtibatu */, PPC::MTSPR, Convert__imm_528__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 5988 /* mtibatu */, PPC::MTSPR, Convert__imm_530__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 5988 /* mtibatu */, PPC::MTSPR, Convert__imm_532__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 5988 /* mtibatu */, PPC::MTSPR, Convert__imm_534__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 5996 /* mticcr */, PPC::MTSPR, Convert__imm_1019__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6003 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6008 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__imm_0, 0, { MCK_RegGPRC }, },
  { 6008 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6014 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__imm_0, 0, { MCK_RegGPRC }, },
  { 6014 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6021 /* mtocrf */, PPC::MTOCRF, Convert__CRBitMask1_0__RegGPRC1_1, 0, { MCK_CRBitMask, MCK_RegGPRC }, },
  { 6028 /* mtpid */, PPC::MTSPR, Convert__imm_48__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6034 /* mtsdr1 */, PPC::MTSPR, Convert__imm_25__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6034 /* mtsdr1 */, PPC::MTSPR, Convert__imm_25__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6041 /* mtspefscr */, PPC::MTSPR, Convert__imm_512__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6051 /* mtspr */, PPC::MTSPR, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_272__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_273__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_274__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_275__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_260__RegGPRC1_1, 0, { MCK_4, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_261__RegGPRC1_1, 0, { MCK_5, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_262__RegGPRC1_1, 0, { MCK_6, MCK_RegGPRC }, },
  { 6057 /* mtsprg */, PPC::MTSPR, Convert__imm_263__RegGPRC1_1, 0, { MCK_7, MCK_RegGPRC }, },
  { 6064 /* mtsprg0 */, PPC::MTSPR, Convert__imm_272__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6072 /* mtsprg1 */, PPC::MTSPR, Convert__imm_273__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6080 /* mtsprg2 */, PPC::MTSPR, Convert__imm_274__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6088 /* mtsprg3 */, PPC::MTSPR, Convert__imm_275__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6096 /* mtsprg4 */, PPC::MTSPR, Convert__imm_260__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6104 /* mtsprg5 */, PPC::MTSPR, Convert__imm_261__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6112 /* mtsprg6 */, PPC::MTSPR, Convert__imm_262__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6120 /* mtsprg7 */, PPC::MTSPR, Convert__imm_263__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6128 /* mtsr */, PPC::MTSR, Convert__RegGPRC1_1__U4Imm1_0, 0, { MCK_U4Imm, MCK_RegGPRC }, },
  { 6133 /* mtsrin */, PPC::MTSRIN, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6140 /* mtsrr0 */, PPC::MTSPR, Convert__imm_26__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6140 /* mtsrr0 */, PPC::MTSPR, Convert__imm_26__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6147 /* mtsrr1 */, PPC::MTSPR, Convert__imm_27__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6147 /* mtsrr1 */, PPC::MTSPR, Convert__imm_27__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6154 /* mtsrr2 */, PPC::MTSPR, Convert__imm_990__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6161 /* mtsrr3 */, PPC::MTSPR, Convert__imm_991__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6168 /* mttbhi */, PPC::MTSPR, Convert__imm_988__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6175 /* mttbl */, PPC::MTSPR, Convert__imm_284__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6181 /* mttblo */, PPC::MTSPR, Convert__imm_989__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6188 /* mttbu */, PPC::MTSPR, Convert__imm_285__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6194 /* mttcr */, PPC::MTSPR, Convert__imm_986__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6200 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 6207 /* mtxer */, PPC::MTSPR, Convert__imm_1__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6213 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6213 /* mulhd */, PPC::MULHDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6219 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6219 /* mulhdu */, PPC::MULHDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6226 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6226 /* mulhw */, PPC::MULHWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6232 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6232 /* mulhwu */, PPC::MULHWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6239 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6239 /* mulld */, PPC::MULLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6245 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6251 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6251 /* mullw */, PPC::MULLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6257 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6257 /* nand */, PPC::NANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6262 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6262 /* neg */, PPC::NEGo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6266 /* nop */, PPC::NOP, Convert_NoOperands, 0, {  }, },
  { 6270 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6270 /* nor */, PPC::NORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6274 /* not */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6274 /* not */, PPC::NOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6278 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6278 /* or */, PPC::ORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6281 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6281 /* orc */, PPC::ORCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6285 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 6289 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 6294 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6302 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6310 /* ptesync */, PPC::SYNC, Convert__imm_2, 0, {  }, },
  { 6318 /* rfci */, PPC::RFCI, Convert_NoOperands, 0, {  }, },
  { 6323 /* rfdi */, PPC::RFDI, Convert_NoOperands, 0, {  }, },
  { 6328 /* rfi */, PPC::RFI, Convert_NoOperands, 0, {  }, },
  { 6332 /* rfid */, PPC::RFID, Convert_NoOperands, 0, {  }, },
  { 6337 /* rfmci */, PPC::RFMCI, Convert_NoOperands, 0, {  }, },
  { 6343 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6343 /* rldcl */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6349 /* rldcr */, PPC::RLDCR, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6349 /* rldcr */, PPC::RLDCRo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6355 /* rldic */, PPC::RLDIC, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6355 /* rldic */, PPC::RLDICo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6361 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6361 /* rldicl */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6368 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6368 /* rldicr */, PPC::RLDICRo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6375 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6375 /* rldimi */, PPC::RLDIMIo, Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6382 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6382 /* rlwimi */, PPC::RLWIMIo, Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6389 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6389 /* rlwinm */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6396 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6396 /* rlwnm */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6402 /* rotld */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6402 /* rotld */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6408 /* rotldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6408 /* rotldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6415 /* rotlw */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_0__imm_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6415 /* rotlw */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_0__imm_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6421 /* rotlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_0__imm_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6421 /* rotlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_0__imm_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6428 /* rotrdi */, PPC::ROTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6428 /* rotrdi */, PPC::ROTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6435 /* rotrwi */, PPC::ROTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6435 /* rotrwi */, PPC::ROTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6442 /* sc */, PPC::SC, Convert__imm_0, 0, {  }, },
  { 6442 /* sc */, PPC::SC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 6445 /* slbia */, PPC::SLBIA, Convert_NoOperands, 0, {  }, },
  { 6451 /* slbie */, PPC::SLBIE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6457 /* slbmfee */, PPC::SLBMFEE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6465 /* slbmte */, PPC::SLBMTE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6472 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6472 /* sld */, PPC::SLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6476 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6476 /* sldi */, PPC::SLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6481 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6481 /* slw */, PPC::SLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6485 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6485 /* slwi */, PPC::SLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6490 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6490 /* srad */, PPC::SRADo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6495 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6495 /* sradi */, PPC::SRADIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6501 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6501 /* sraw */, PPC::SRAWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6506 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6506 /* srawi */, PPC::SRAWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6512 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6512 /* srd */, PPC::SRDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6516 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6516 /* srdi */, PPC::SRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6521 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6521 /* srw */, PPC::SRWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6525 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6525 /* srwi */, PPC::SRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6530 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6534 /* stbu */, PPC::STBU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6539 /* stbux */, PPC::STBUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6545 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6550 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6554 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6561 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6567 /* stdu */, PPC::STDU, Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6572 /* stdux */, PPC::STDUX, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6578 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6583 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6588 /* stfdu */, PPC::STFDU, Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6594 /* stfdux */, PPC::STFDUX, Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6601 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6607 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6614 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6619 /* stfsu */, PPC::STFSU, Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6625 /* stfsux */, PPC::STFSUX, Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6632 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6638 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6642 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6649 /* sthu */, PPC::STHU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6654 /* sthux */, PPC::STHUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6660 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6665 /* stmw */, PPC::STMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6670 /* stswi */, PPC::STSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6676 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6683 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6690 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6697 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6702 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6708 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6712 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6719 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6725 /* stwu */, PPC::STWU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6730 /* stwux */, PPC::STWUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6736 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6741 /* stxsdx */, PPC::STXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6748 /* stxvd2x */, PPC::STXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6756 /* stxvw4x */, PPC::STXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6764 /* sub */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6764 /* sub */, PPC::SUBF8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6768 /* subc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6768 /* subc */, PPC::SUBFC8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6773 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6773 /* subf */, PPC::SUBFo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6778 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6778 /* subfc */, PPC::SUBFCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6784 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6784 /* subfe */, PPC::SUBFEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6790 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6797 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6797 /* subfme */, PPC::SUBFMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6804 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6804 /* subfze */, PPC::SUBFZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6811 /* subi */, PPC::SUBI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6816 /* subic */, PPC::SUBIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6816 /* subic */, PPC::SUBICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6822 /* subis */, PPC::SUBIS, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6828 /* sync */, PPC::SYNC, Convert__imm_0, 0, {  }, },
  { 6828 /* sync */, PPC::SYNC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 6833 /* td */, PPC::TD, Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6836 /* tdeq */, PPC::TD, Convert__imm_4__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6841 /* tdeqi */, PPC::TDI, Convert__imm_4__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6847 /* tdge */, PPC::TD, Convert__imm_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6852 /* tdgei */, PPC::TDI, Convert__imm_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6858 /* tdgt */, PPC::TD, Convert__imm_8__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6863 /* tdgti */, PPC::TDI, Convert__imm_8__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6869 /* tdi */, PPC::TDI, Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_S16Imm }, },
  { 6873 /* tdle */, PPC::TD, Convert__imm_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6878 /* tdlei */, PPC::TDI, Convert__imm_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6884 /* tdlge */, PPC::TD, Convert__imm_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6890 /* tdlgei */, PPC::TDI, Convert__imm_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6897 /* tdlgt */, PPC::TD, Convert__imm_1__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6903 /* tdlgti */, PPC::TDI, Convert__imm_1__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6910 /* tdlle */, PPC::TD, Convert__imm_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6916 /* tdllei */, PPC::TDI, Convert__imm_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6923 /* tdllt */, PPC::TD, Convert__imm_2__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6929 /* tdllti */, PPC::TDI, Convert__imm_2__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6936 /* tdlng */, PPC::TD, Convert__imm_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6942 /* tdlngi */, PPC::TDI, Convert__imm_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6949 /* tdlnl */, PPC::TD, Convert__imm_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6955 /* tdlnli */, PPC::TDI, Convert__imm_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6962 /* tdlt */, PPC::TD, Convert__imm_16__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6967 /* tdlti */, PPC::TDI, Convert__imm_16__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6973 /* tdne */, PPC::TD, Convert__imm_24__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6978 /* tdnei */, PPC::TDI, Convert__imm_24__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6984 /* tdng */, PPC::TD, Convert__imm_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6989 /* tdngi */, PPC::TDI, Convert__imm_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6995 /* tdnl */, PPC::TD, Convert__imm_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7000 /* tdnli */, PPC::TDI, Convert__imm_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7006 /* tdu */, PPC::TD, Convert__imm_31__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7010 /* tdui */, PPC::TDI, Convert__imm_31__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7015 /* tlbia */, PPC::TLBIA, Convert_NoOperands, 0, {  }, },
  { 7021 /* tlbie */, PPC::TLBIE, Convert__regR0__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7021 /* tlbie */, PPC::TLBIE, Convert__RegGPRC1_1__RegGPRC1_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7027 /* tlbiel */, PPC::TLBIEL, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7034 /* tlbivax */, PPC::TLBIVAX, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7042 /* tlbld */, PPC::TLBLD, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7048 /* tlbli */, PPC::TLBLI, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7054 /* tlbre */, PPC::TLBRE, Convert_NoOperands, 0, {  }, },
  { 7054 /* tlbre */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 7060 /* tlbrehi */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7068 /* tlbrelo */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7076 /* tlbsx */, PPC::TLBSX, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7076 /* tlbsx */, PPC::TLBSX2, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7076 /* tlbsx */, PPC::TLBSX2D, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7082 /* tlbsync */, PPC::TLBSYNC, Convert_NoOperands, 0, {  }, },
  { 7090 /* tlbwe */, PPC::TLBWE, Convert_NoOperands, 0, {  }, },
  { 7090 /* tlbwe */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 7096 /* tlbwehi */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7104 /* tlbwelo */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7112 /* trap */, PPC::TRAP, Convert_NoOperands, 0, {  }, },
  { 7117 /* tw */, PPC::TW, Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7120 /* tweq */, PPC::TW, Convert__imm_4__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7125 /* tweqi */, PPC::TWI, Convert__imm_4__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7131 /* twge */, PPC::TW, Convert__imm_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7136 /* twgei */, PPC::TWI, Convert__imm_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7142 /* twgt */, PPC::TW, Convert__imm_8__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7147 /* twgti */, PPC::TWI, Convert__imm_8__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7153 /* twi */, PPC::TWI, Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_S16Imm }, },
  { 7157 /* twle */, PPC::TW, Convert__imm_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7162 /* twlei */, PPC::TWI, Convert__imm_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7168 /* twlge */, PPC::TW, Convert__imm_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7174 /* twlgei */, PPC::TWI, Convert__imm_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7181 /* twlgt */, PPC::TW, Convert__imm_1__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7187 /* twlgti */, PPC::TWI, Convert__imm_1__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7194 /* twlle */, PPC::TW, Convert__imm_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7200 /* twllei */, PPC::TWI, Convert__imm_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7207 /* twllt */, PPC::TW, Convert__imm_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7213 /* twllti */, PPC::TWI, Convert__imm_2__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7220 /* twlng */, PPC::TW, Convert__imm_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7226 /* twlngi */, PPC::TWI, Convert__imm_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7233 /* twlnl */, PPC::TW, Convert__imm_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7239 /* twlnli */, PPC::TWI, Convert__imm_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7246 /* twlt */, PPC::TW, Convert__imm_16__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7251 /* twlti */, PPC::TWI, Convert__imm_16__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7257 /* twne */, PPC::TW, Convert__imm_24__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7262 /* twnei */, PPC::TWI, Convert__imm_24__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7268 /* twng */, PPC::TW, Convert__imm_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7273 /* twngi */, PPC::TWI, Convert__imm_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7279 /* twnl */, PPC::TW, Convert__imm_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7284 /* twnli */, PPC::TWI, Convert__imm_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7290 /* twu */, PPC::TW, Convert__imm_31__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7294 /* twui */, PPC::TWI, Convert__imm_31__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7299 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7307 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7314 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7322 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7330 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7338 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7346 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7354 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7362 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7370 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7378 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7386 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7391 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7397 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7404 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7411 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7418 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7425 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7432 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7439 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7445 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7451 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7451 /* vcmpbfp */, PPC::VCMPBFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7459 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7459 /* vcmpeqfp */, PPC::VCMPEQFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7468 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7468 /* vcmpequb */, PPC::VCMPEQUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7477 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7477 /* vcmpequh */, PPC::VCMPEQUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7486 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7486 /* vcmpequw */, PPC::VCMPEQUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7495 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7495 /* vcmpgefp */, PPC::VCMPGEFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7504 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7504 /* vcmpgtfp */, PPC::VCMPGTFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7513 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7513 /* vcmpgtsb */, PPC::VCMPGTSBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7522 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7522 /* vcmpgtsh */, PPC::VCMPGTSHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7531 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7531 /* vcmpgtsw */, PPC::VCMPGTSWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7540 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7540 /* vcmpgtub */, PPC::VCMPGTUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7549 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7549 /* vcmpgtuh */, PPC::VCMPGTUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7558 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7558 /* vcmpgtuw */, PPC::VCMPGTUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7567 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7574 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7581 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7590 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7598 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7606 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7613 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7620 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7627 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7634 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7641 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7648 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7655 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7665 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7676 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7683 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7690 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7697 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7704 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7711 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7718 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7725 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7735 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7742 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7749 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7756 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7763 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7770 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7777 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7786 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7795 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7804 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7813 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7822 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7831 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7839 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7847 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7855 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7863 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7871 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7879 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7887 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7895 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7904 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7909 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7913 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7919 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7925 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7933 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7941 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7949 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7957 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7965 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7973 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7981 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7989 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7995 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8001 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8007 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8013 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8019 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8024 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8029 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8034 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8044 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8049 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8053 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8058 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8065 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8070 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8075 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8080 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8087 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8094 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 8103 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 8112 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 8121 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8128 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8132 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8138 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8144 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8150 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8155 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8160 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8165 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8170 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8178 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8185 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8193 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8201 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8209 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8217 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8225 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8233 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8241 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8249 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8257 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8266 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8275 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8284 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8293 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8301 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8309 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8317 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8325 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8333 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8341 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8349 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8354 /* wait */, PPC::WAIT, Convert__imm_0, 0, {  }, },
  { 8354 /* wait */, PPC::WAIT, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 8359 /* waitimpl */, PPC::WAIT, Convert__imm_2, 0, {  }, },
  { 8368 /* waitrsv */, PPC::WAIT, Convert__imm_1, 0, {  }, },
  { 8376 /* wrtee */, PPC::WRTEE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 8382 /* wrteei */, PPC::WRTEEI, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 8389 /* xnop */, PPC::XORI, Convert__regR0__regR0__imm_0, 0, {  }, },
  { 8394 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8394 /* xor */, PPC::XORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8398 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8403 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8409 /* xsabsdp */, PPC::XSABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8417 /* xsadddp */, PPC::XSADDDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8425 /* xscmpodp */, PPC::XSCMPODP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8434 /* xscmpudp */, PPC::XSCMPUDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8443 /* xscpsgndp */, PPC::XSCPSGNDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8453 /* xscvdpsp */, PPC::XSCVDPSP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8462 /* xscvdpsxds */, PPC::XSCVDPSXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8473 /* xscvdpsxws */, PPC::XSCVDPSXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8484 /* xscvdpuxds */, PPC::XSCVDPUXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8495 /* xscvdpuxws */, PPC::XSCVDPUXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8506 /* xscvspdp */, PPC::XSCVSPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8515 /* xscvsxddp */, PPC::XSCVSXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8525 /* xscvuxddp */, PPC::XSCVUXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8535 /* xsdivdp */, PPC::XSDIVDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8543 /* xsmaddadp */, PPC::XSMADDADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8553 /* xsmaddmdp */, PPC::XSMADDMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8563 /* xsmaxdp */, PPC::XSMAXDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8571 /* xsmindp */, PPC::XSMINDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8579 /* xsmsubadp */, PPC::XSMSUBADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8589 /* xsmsubmdp */, PPC::XSMSUBMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8599 /* xsmuldp */, PPC::XSMULDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8607 /* xsnabsdp */, PPC::XSNABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8616 /* xsnegdp */, PPC::XSNEGDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8624 /* xsnmaddadp */, PPC::XSNMADDADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8635 /* xsnmaddmdp */, PPC::XSNMADDMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8646 /* xsnmsubadp */, PPC::XSNMSUBADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8657 /* xsnmsubmdp */, PPC::XSNMSUBMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8668 /* xsrdpi */, PPC::XSRDPI, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8675 /* xsrdpic */, PPC::XSRDPIC, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8683 /* xsrdpim */, PPC::XSRDPIM, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8691 /* xsrdpip */, PPC::XSRDPIP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8699 /* xsrdpiz */, PPC::XSRDPIZ, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8707 /* xsredp */, PPC::XSREDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8714 /* xsrsqrtedp */, PPC::XSRSQRTEDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8725 /* xssqrtdp */, PPC::XSSQRTDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8734 /* xssubdp */, PPC::XSSUBDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8742 /* xstdivdp */, PPC::XSTDIVDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8751 /* xstsqrtdp */, PPC::XSTSQRTDP, Convert__RegCRRC1_0__RegVSFRC1_1, 0, { MCK_RegCRRC, MCK_RegVSFRC }, },
  { 8761 /* xvabsdp */, PPC::XVABSDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8769 /* xvabssp */, PPC::XVABSSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8777 /* xvadddp */, PPC::XVADDDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8785 /* xvaddsp */, PPC::XVADDSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8793 /* xvcmpeqdp */, PPC::XVCMPEQDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8793 /* xvcmpeqdp */, PPC::XVCMPEQDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8803 /* xvcmpeqsp */, PPC::XVCMPEQSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8803 /* xvcmpeqsp */, PPC::XVCMPEQSPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8813 /* xvcmpgedp */, PPC::XVCMPGEDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8813 /* xvcmpgedp */, PPC::XVCMPGEDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8823 /* xvcmpgesp */, PPC::XVCMPGESP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8823 /* xvcmpgesp */, PPC::XVCMPGESPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8833 /* xvcmpgtdp */, PPC::XVCMPGTDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8833 /* xvcmpgtdp */, PPC::XVCMPGTDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8843 /* xvcmpgtsp */, PPC::XVCMPGTSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8843 /* xvcmpgtsp */, PPC::XVCMPGTSPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8853 /* xvcpsgndp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8863 /* xvcpsgnsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8873 /* xvcvdpsp */, PPC::XVCVDPSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8882 /* xvcvdpsxds */, PPC::XVCVDPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8893 /* xvcvdpsxws */, PPC::XVCVDPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8904 /* xvcvdpuxds */, PPC::XVCVDPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8915 /* xvcvdpuxws */, PPC::XVCVDPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8926 /* xvcvspdp */, PPC::XVCVSPDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8935 /* xvcvspsxds */, PPC::XVCVSPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8946 /* xvcvspsxws */, PPC::XVCVSPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8957 /* xvcvspuxds */, PPC::XVCVSPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8968 /* xvcvspuxws */, PPC::XVCVSPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8979 /* xvcvsxddp */, PPC::XVCVSXDDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8989 /* xvcvsxdsp */, PPC::XVCVSXDSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8999 /* xvcvsxwdp */, PPC::XVCVSXWDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9009 /* xvcvsxwsp */, PPC::XVCVSXWSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9019 /* xvcvuxddp */, PPC::XVCVUXDDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9029 /* xvcvuxdsp */, PPC::XVCVUXDSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9039 /* xvcvuxwdp */, PPC::XVCVUXWDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9049 /* xvcvuxwsp */, PPC::XVCVUXWSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9059 /* xvdivdp */, PPC::XVDIVDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9067 /* xvdivsp */, PPC::XVDIVSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9075 /* xvmaddadp */, PPC::XVMADDADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9085 /* xvmaddasp */, PPC::XVMADDASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9095 /* xvmaddmdp */, PPC::XVMADDMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9105 /* xvmaddmsp */, PPC::XVMADDMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9115 /* xvmaxdp */, PPC::XVMAXDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9123 /* xvmaxsp */, PPC::XVMAXSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9131 /* xvmindp */, PPC::XVMINDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9139 /* xvminsp */, PPC::XVMINSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9147 /* xvmovdp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9155 /* xvmovsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9163 /* xvmsubadp */, PPC::XVMSUBADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9173 /* xvmsubasp */, PPC::XVMSUBASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9183 /* xvmsubmdp */, PPC::XVMSUBMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9193 /* xvmsubmsp */, PPC::XVMSUBMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9203 /* xvmuldp */, PPC::XVMULDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9211 /* xvmulsp */, PPC::XVMULSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9219 /* xvnabsdp */, PPC::XVNABSDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9228 /* xvnabssp */, PPC::XVNABSSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9237 /* xvnegdp */, PPC::XVNEGDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9245 /* xvnegsp */, PPC::XVNEGSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9253 /* xvnmaddadp */, PPC::XVNMADDADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9264 /* xvnmaddasp */, PPC::XVNMADDASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9275 /* xvnmaddmdp */, PPC::XVNMADDMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9286 /* xvnmaddmsp */, PPC::XVNMADDMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9297 /* xvnmsubadp */, PPC::XVNMSUBADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9308 /* xvnmsubasp */, PPC::XVNMSUBASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9319 /* xvnmsubmdp */, PPC::XVNMSUBMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9330 /* xvnmsubmsp */, PPC::XVNMSUBMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9341 /* xvrdpi */, PPC::XVRDPI, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9348 /* xvrdpic */, PPC::XVRDPIC, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9356 /* xvrdpim */, PPC::XVRDPIM, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9364 /* xvrdpip */, PPC::XVRDPIP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9372 /* xvrdpiz */, PPC::XVRDPIZ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9380 /* xvredp */, PPC::XVREDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9387 /* xvresp */, PPC::XVRESP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9394 /* xvrspi */, PPC::XVRSPI, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9401 /* xvrspic */, PPC::XVRSPIC, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9409 /* xvrspim */, PPC::XVRSPIM, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9417 /* xvrspip */, PPC::XVRSPIP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9425 /* xvrspiz */, PPC::XVRSPIZ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9433 /* xvrsqrtedp */, PPC::XVRSQRTEDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9444 /* xvrsqrtesp */, PPC::XVRSQRTESP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9455 /* xvsqrtdp */, PPC::XVSQRTDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9464 /* xvsqrtsp */, PPC::XVSQRTSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9473 /* xvsubdp */, PPC::XVSUBDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9481 /* xvsubsp */, PPC::XVSUBSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9489 /* xvtdivdp */, PPC::XVTDIVDP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9498 /* xvtdivsp */, PPC::XVTDIVSP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9507 /* xvtsqrtdp */, PPC::XVTSQRTDP, Convert__RegCRRC1_0__RegVSRC1_1, 0, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 9517 /* xvtsqrtsp */, PPC::XVTSQRTSP, Convert__RegCRRC1_0__RegVSRC1_1, 0, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 9527 /* xxland */, PPC::XXLAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9534 /* xxlandc */, PPC::XXLANDC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9542 /* xxlnor */, PPC::XXLNOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9549 /* xxlor */, PPC::XXLOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9555 /* xxlxor */, PPC::XXLXOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9562 /* xxmrghd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_0, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9570 /* xxmrghw */, PPC::XXMRGHW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9578 /* xxmrgld */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9586 /* xxmrglw */, PPC::XXMRGLW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9594 /* xxpermdi */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 9603 /* xxsel */, PPC::XXSEL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9609 /* xxsldwi */, PPC::XXSLDWI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 9617 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_0, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_0 }, },
  { 9617 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_1 }, },
  { 9625 /* xxspltw */, PPC::XXSPLTW, Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 9633 /* xxswapd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_2, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
};

bool PPCAsmParser::
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

unsigned PPCAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
uint64_t &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((PPCOperand&)*Operands[0]).getToken();

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
    for (unsigned i = 0; i != 6; ++i) {
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

    std::string Info;
    if (MII.get(Inst.getOpcode()).getDeprecatedInfo(Inst, STI, Info)) {
      SMLoc Loc = ((PPCOperand&)*Operands[0]).getStartLoc();
      Parser.Warning(Loc, Info, None);
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

#endif // GET_MATCHER_IMPLEMENTATION

