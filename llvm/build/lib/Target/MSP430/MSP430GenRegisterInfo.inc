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
extern const MCRegisterClass MSP430MCRegisterClasses[];

namespace MSP430 {
enum {
  NoRegister,
  CG = 1,
  CGB = 2,
  FP = 3,
  FPB = 4,
  PC = 5,
  PCB = 6,
  SP = 7,
  SPB = 8,
  SR = 9,
  SRB = 10,
  R5 = 11,
  R6 = 12,
  R7 = 13,
  R8 = 14,
  R9 = 15,
  R10 = 16,
  R11 = 17,
  R12 = 18,
  R13 = 19,
  R14 = 20,
  R15 = 21,
  R5B = 22,
  R6B = 23,
  R7B = 24,
  R8B = 25,
  R9B = 26,
  R10B = 27,
  R11B = 28,
  R12B = 29,
  R13B = 30,
  R14B = 31,
  R15B = 32,
  NUM_TARGET_REGS 	// 33
};
}

// Register classes
namespace MSP430 {
enum {
  GR8RegClassID = 0,
  GR16RegClassID = 1
  };
}

// Subregister indices
namespace MSP430 {
enum {
  NoSubRegister,
  subreg_8bit,	// 1
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

extern const MCPhysReg MSP430RegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 1, 0,
  /* 4 */ 2, 0,
  /* 6 */ 3, 0,
  /* 8 */ 4, 0,
  /* 10 */ 11, 0,
  /* 12 */ 65519, 0,
  /* 14 */ 65525, 0,
  /* 16 */ 65530, 0,
  /* 18 */ 65535, 0,
};

extern const uint16_t MSP430SubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits MSP430SubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 8 },	// subreg_8bit
};

extern const char MSP430RegStrings[] = {
  /* 0 */ 'R', '1', '0', 0,
  /* 4 */ 'R', '1', '1', 0,
  /* 8 */ 'R', '1', '2', 0,
  /* 12 */ 'R', '1', '3', 0,
  /* 16 */ 'R', '1', '4', 0,
  /* 20 */ 'R', '1', '5', 0,
  /* 24 */ 'R', '5', 0,
  /* 27 */ 'R', '6', 0,
  /* 30 */ 'R', '7', 0,
  /* 33 */ 'R', '8', 0,
  /* 36 */ 'R', '9', 0,
  /* 39 */ 'R', '1', '0', 'B', 0,
  /* 44 */ 'R', '1', '1', 'B', 0,
  /* 49 */ 'R', '1', '2', 'B', 0,
  /* 54 */ 'R', '1', '3', 'B', 0,
  /* 59 */ 'R', '1', '4', 'B', 0,
  /* 64 */ 'R', '1', '5', 'B', 0,
  /* 69 */ 'R', '5', 'B', 0,
  /* 73 */ 'R', '6', 'B', 0,
  /* 77 */ 'R', '7', 'B', 0,
  /* 81 */ 'R', '8', 'B', 0,
  /* 85 */ 'R', '9', 'B', 0,
  /* 89 */ 'P', 'C', 'B', 0,
  /* 93 */ 'C', 'G', 'B', 0,
  /* 97 */ 'F', 'P', 'B', 0,
  /* 101 */ 'S', 'P', 'B', 0,
  /* 105 */ 'S', 'R', 'B', 0,
  /* 109 */ 'P', 'C', 0,
  /* 112 */ 'C', 'G', 0,
  /* 115 */ 'F', 'P', 0,
  /* 118 */ 'S', 'P', 0,
  /* 121 */ 'S', 'R', 0,
};

extern const MCRegisterDesc MSP430RegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0 },
  { 112, 2, 1, 0, 0 },
  { 93, 1, 18, 1, 0 },
  { 115, 2, 1, 0, 32 },
  { 97, 1, 18, 1, 32 },
  { 109, 2, 1, 0, 64 },
  { 89, 1, 18, 1, 64 },
  { 118, 2, 1, 0, 96 },
  { 101, 1, 18, 1, 96 },
  { 121, 2, 1, 0, 128 },
  { 105, 1, 18, 1, 128 },
  { 24, 10, 1, 0, 257 },
  { 27, 10, 1, 0, 257 },
  { 30, 10, 1, 0, 257 },
  { 33, 10, 1, 0, 257 },
  { 36, 10, 1, 0, 257 },
  { 0, 10, 1, 0, 257 },
  { 4, 10, 1, 0, 257 },
  { 8, 10, 1, 0, 257 },
  { 12, 10, 1, 0, 257 },
  { 16, 10, 1, 0, 257 },
  { 20, 10, 1, 0, 257 },
  { 69, 1, 14, 1, 193 },
  { 73, 1, 14, 1, 193 },
  { 77, 1, 14, 1, 193 },
  { 81, 1, 14, 1, 193 },
  { 85, 1, 14, 1, 193 },
  { 39, 1, 14, 1, 193 },
  { 44, 1, 14, 1, 193 },
  { 49, 1, 14, 1, 193 },
  { 54, 1, 14, 1, 193 },
  { 59, 1, 14, 1, 193 },
  { 64, 1, 14, 1, 193 },
};

extern const MCPhysReg MSP430RegUnitRoots[][2] = {
  { MSP430::CGB },
  { MSP430::FPB },
  { MSP430::PCB },
  { MSP430::SPB },
  { MSP430::SRB },
  { MSP430::R5B },
  { MSP430::R6B },
  { MSP430::R7B },
  { MSP430::R8B },
  { MSP430::R9B },
  { MSP430::R10B },
  { MSP430::R11B },
  { MSP430::R12B },
  { MSP430::R13B },
  { MSP430::R14B },
  { MSP430::R15B },
};

namespace {     // Register classes...
  // GR8 Register Class...
  const MCPhysReg GR8[] = {
    MSP430::R12B, MSP430::R13B, MSP430::R14B, MSP430::R15B, MSP430::R11B, MSP430::R10B, MSP430::R9B, MSP430::R8B, MSP430::R7B, MSP430::R6B, MSP430::R5B, MSP430::FPB, MSP430::PCB, MSP430::SPB, MSP430::SRB, MSP430::CGB, 
  };

  // GR8 Bit set.
  const uint8_t GR8Bits[] = {
    0x54, 0x05, 0xc0, 0xff, 0x01, 
  };

  // GR16 Register Class...
  const MCPhysReg GR16[] = {
    MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::R11, MSP430::R10, MSP430::R9, MSP430::R8, MSP430::R7, MSP430::R6, MSP430::R5, MSP430::FP, MSP430::PC, MSP430::SP, MSP430::SR, MSP430::CG, 
  };

  // GR16 Bit set.
  const uint8_t GR16Bits[] = {
    0xaa, 0xfa, 0x3f, 
  };

}

extern const MCRegisterClass MSP430MCRegisterClasses[] = {
  { "GR8", GR8, GR8Bits, 16, sizeof(GR8Bits), MSP430::GR8RegClassID, 1, 1, 1, 1 },
  { "GR16", GR16, GR16Bits, 16, sizeof(GR16Bits), MSP430::GR16RegClassID, 2, 2, 1, 1 },
};

extern const uint16_t MSP430RegEncodingTable[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
};
static inline void InitMSP430MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(MSP430RegDesc, 33, RA, PC, MSP430MCRegisterClasses, 2, MSP430RegUnitRoots, 16, MSP430RegDiffLists, MSP430RegStrings, MSP430SubRegIdxLists, 2,
MSP430SubRegIdxRanges,   MSP430RegEncodingTable);

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

struct MSP430GenRegisterInfo : public TargetRegisterInfo {
  explicit MSP430GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace MSP430 { // Register classes
  extern const TargetRegisterClass GR8RegClass;
  extern const TargetRegisterClass GR16RegClass;
} // end of namespace MSP430

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

extern const MCRegisterClass MSP430MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "subreg_8bit" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // subreg_8bit
 };



static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GR8SubClassMask[] = {
  0x00000001, 
  0x00000002, // subreg_8bit
};

static const uint32_t GR16SubClassMask[] = {
  0x00000002, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
};

namespace MSP430 {   // Register class instances
  extern const TargetRegisterClass GR8RegClass = {
    &MSP430MCRegisterClasses[GR8RegClassID],
    VTLists + 0,
    GR8SubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16RegClass = {
    &MSP430MCRegisterClasses[GR16RegClassID],
    VTLists + 2,
    GR16SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    nullptr
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &MSP430::GR8RegClass,
    &MSP430::GR16RegClass,
  };
}

static const TargetRegisterInfoDesc MSP430RegInfoDesc[] = { // Extra Descriptors
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
};
unsigned MSP430GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][1] = {
    { 0, },
  };

  --IdxA; assert(IdxA < 1);
  --IdxB; assert(IdxB < 1);
  return Rows[0][IdxB];
}

const TargetRegisterClass *MSP430GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[2][1] = {
    {	// GR8
      0,	// subreg_8bit
    },
    {	// GR16
      2,	// subreg_8bit -> GR16
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 1 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MSP430GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 16},  	// GR8
    {1, 16},  	// GR16
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned MSP430GenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned MSP430GenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the name of this register unit pressure set.
const char *MSP430GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "GR8",
    nullptr };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MSP430GenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    16,  	// 0: GR8
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    0,  -1,  	// #0 GR8
    0,  -1,  	// #2 GR16
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* MSP430GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* MSP430GenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc MSP430RegDesc[];
extern const MCPhysReg MSP430RegDiffLists[];
extern const char MSP430RegStrings[];
extern const MCPhysReg MSP430RegUnitRoots[][2];
extern const uint16_t MSP430SubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits MSP430SubRegIdxRanges[];
extern const uint16_t MSP430RegEncodingTable[];
MSP430GenRegisterInfo::
MSP430GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(MSP430RegInfoDesc, RegisterClasses, RegisterClasses+2,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xfffffffe) {
  InitMCRegisterInfo(MSP430RegDesc, 33, RA, PC,
                     MSP430MCRegisterClasses, 2,
                     MSP430RegUnitRoots,
                     16,
                     MSP430RegDiffLists,
                     MSP430RegStrings,
                     MSP430SubRegIdxLists,
                     2,
                     MSP430SubRegIdxRanges,
                     MSP430RegEncodingTable);

}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

