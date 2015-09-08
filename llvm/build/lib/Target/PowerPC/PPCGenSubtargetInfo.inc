/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace PPC {
  const uint64_t DeprecatedDST = 1ULL << 0;
  const uint64_t DeprecatedMFTB = 1ULL << 1;
  const uint64_t Directive32 = 1ULL << 2;
  const uint64_t Directive64 = 1ULL << 3;
  const uint64_t Directive440 = 1ULL << 4;
  const uint64_t Directive601 = 1ULL << 5;
  const uint64_t Directive602 = 1ULL << 6;
  const uint64_t Directive603 = 1ULL << 7;
  const uint64_t Directive604 = 1ULL << 8;
  const uint64_t Directive620 = 1ULL << 9;
  const uint64_t Directive750 = 1ULL << 10;
  const uint64_t Directive970 = 1ULL << 11;
  const uint64_t Directive7400 = 1ULL << 12;
  const uint64_t DirectiveA2 = 1ULL << 13;
  const uint64_t DirectiveE500mc = 1ULL << 14;
  const uint64_t DirectiveE5500 = 1ULL << 15;
  const uint64_t DirectivePwr3 = 1ULL << 16;
  const uint64_t DirectivePwr4 = 1ULL << 17;
  const uint64_t DirectivePwr5 = 1ULL << 18;
  const uint64_t DirectivePwr5x = 1ULL << 19;
  const uint64_t DirectivePwr6 = 1ULL << 20;
  const uint64_t DirectivePwr6x = 1ULL << 21;
  const uint64_t DirectivePwr7 = 1ULL << 22;
  const uint64_t DirectivePwr8 = 1ULL << 23;
  const uint64_t Feature64Bit = 1ULL << 24;
  const uint64_t Feature64BitRegs = 1ULL << 25;
  const uint64_t FeatureAltivec = 1ULL << 26;
  const uint64_t FeatureBookE = 1ULL << 27;
  const uint64_t FeatureCRBits = 1ULL << 28;
  const uint64_t FeatureE500 = 1ULL << 29;
  const uint64_t FeatureELFv1 = 1ULL << 30;
  const uint64_t FeatureELFv2 = 1ULL << 31;
  const uint64_t FeatureFCPSGN = 1ULL << 32;
  const uint64_t FeatureFPCVT = 1ULL << 33;
  const uint64_t FeatureFPRND = 1ULL << 34;
  const uint64_t FeatureFRE = 1ULL << 35;
  const uint64_t FeatureFRES = 1ULL << 36;
  const uint64_t FeatureFRSQRTE = 1ULL << 37;
  const uint64_t FeatureFRSQRTES = 1ULL << 38;
  const uint64_t FeatureFSqrt = 1ULL << 39;
  const uint64_t FeatureISEL = 1ULL << 40;
  const uint64_t FeatureLDBRX = 1ULL << 41;
  const uint64_t FeatureLFIWAX = 1ULL << 42;
  const uint64_t FeatureMFOCRF = 1ULL << 43;
  const uint64_t FeatureMSYNC = 1ULL << 44;
  const uint64_t FeatureP8Vector = 1ULL << 45;
  const uint64_t FeaturePOPCNTD = 1ULL << 46;
  const uint64_t FeaturePPC4xx = 1ULL << 47;
  const uint64_t FeaturePPC6xx = 1ULL << 48;
  const uint64_t FeatureQPX = 1ULL << 49;
  const uint64_t FeatureRecipPrec = 1ULL << 50;
  const uint64_t FeatureSPE = 1ULL << 51;
  const uint64_t FeatureSTFIWX = 1ULL << 52;
  const uint64_t FeatureVSX = 1ULL << 53;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", PPC::Feature64Bit, 0ULL },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", PPC::Feature64BitRegs, 0ULL },
  { "altivec", "Enable Altivec instructions", PPC::FeatureAltivec, 0ULL },
  { "booke", "Enable Book E instructions", PPC::FeatureBookE, 0ULL },
  { "crbits", "Use condition-register bits individually", PPC::FeatureCRBits, 0ULL },
  { "e500", "Enable E500/E500mc instructions", PPC::FeatureE500, 0ULL },
  { "elfv1", "Use the ELFv1 ABI", PPC::FeatureELFv1, 0ULL },
  { "elfv2", "Use the ELFv2 ABI", PPC::FeatureELFv2, 0ULL },
  { "fcpsgn", "Enable the fcpsgn instruction", PPC::FeatureFCPSGN, 0ULL },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", PPC::FeatureFPCVT, 0ULL },
  { "fprnd", "Enable the fri[mnpz] instructions", PPC::FeatureFPRND, 0ULL },
  { "fre", "Enable the fre instruction", PPC::FeatureFRE, 0ULL },
  { "fres", "Enable the fres instruction", PPC::FeatureFRES, 0ULL },
  { "frsqrte", "Enable the frsqrte instruction", PPC::FeatureFRSQRTE, 0ULL },
  { "frsqrtes", "Enable the frsqrtes instruction", PPC::FeatureFRSQRTES, 0ULL },
  { "fsqrt", "Enable the fsqrt instruction", PPC::FeatureFSqrt, 0ULL },
  { "isel", "Enable the isel instruction", PPC::FeatureISEL, 0ULL },
  { "ldbrx", "Enable the ldbrx instruction", PPC::FeatureLDBRX, 0ULL },
  { "lfiwax", "Enable the lfiwax instruction", PPC::FeatureLFIWAX, 0ULL },
  { "mfocrf", "Enable the MFOCRF instruction", PPC::FeatureMFOCRF, 0ULL },
  { "msync", "Has only the msync instruction instead of sync", PPC::FeatureMSYNC, PPC::FeatureBookE },
  { "popcntd", "Enable the popcnt[dw] instructions", PPC::FeaturePOPCNTD, 0ULL },
  { "power8-vector", "Enable POWER8 vector instructions", PPC::FeatureP8Vector, PPC::FeatureVSX | PPC::FeatureAltivec },
  { "ppc4xx", "Enable PPC 4xx instructions", PPC::FeaturePPC4xx, 0ULL },
  { "ppc6xx", "Enable PPC 6xx instructions", PPC::FeaturePPC6xx, 0ULL },
  { "qpx", "Enable QPX instructions", PPC::FeatureQPX, 0ULL },
  { "recipprec", "Assume higher precision reciprocal estimates", PPC::FeatureRecipPrec, 0ULL },
  { "spe", "Enable SPE instructions", PPC::FeatureSPE, 0ULL },
  { "stfiwx", "Enable the stfiwx instruction", PPC::FeatureSTFIWX, 0ULL },
  { "vsx", "Enable VSX instructions", PPC::FeatureVSX, PPC::FeatureAltivec }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE | PPC::FeatureMSYNC | PPC::DeprecatedMFTB, 0ULL },
  { "450", "Select the 450 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE | PPC::FeatureMSYNC | PPC::DeprecatedMFTB, 0ULL },
  { "601", "Select the 601 processor", PPC::Directive601, 0ULL },
  { "602", "Select the 602 processor", PPC::Directive602, 0ULL },
  { "603", "Select the 603 processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603e", "Select the 603e processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603ev", "Select the 603ev processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604", "Select the 604 processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604e", "Select the 604e processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "620", "Select the 620 processor", PPC::Directive620 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7400", "Select the 7400 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7450", "Select the 7450 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "750", "Select the 750 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "970", "Select the 970 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "a2", "Select the a2 processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB, 0ULL },
  { "a2q", "Select the a2q processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureQPX | PPC::DeprecatedMFTB, 0ULL },
  { "e500mc", "Select the e500mc processor", PPC::DirectiveE500mc | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL | PPC::DeprecatedMFTB, 0ULL },
  { "e5500", "Select the e5500 processor", PPC::DirectiveE5500 | PPC::FeatureMFOCRF | PPC::Feature64Bit | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL | PPC::DeprecatedMFTB, 0ULL },
  { "g3", "Select the g3 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4", "Select the g4 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4+", "Select the g4+ processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g5", "Select the g5 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "generic", "Select the generic processor", PPC::Directive32, 0ULL },
  { "ppc", "Select the ppc processor", PPC::Directive32, 0ULL },
  { "ppc64", "Select the ppc64 processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "ppc64le", "Select the ppc64le processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr3", "Select the pwr3 processor", PPC::DirectivePwr3 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr4", "Select the pwr4 processor", PPC::DirectivePwr4 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5", "Select the pwr5 processor", PPC::DirectivePwr5 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr5x", "Select the pwr5x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr6", "Select the pwr6 processor", PPC::DirectivePwr6 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr6x", "Select the pwr6x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr7", "Select the pwr7 processor", PPC::DirectivePwr7 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr8", "Select the pwr8 processor", PPC::DirectivePwr8 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned P440_DISS1 = 1 << 0;
  const unsigned P440_DISS2 = 1 << 1;
  const unsigned P440_FRACC = 1 << 2;
  const unsigned P440_IRACC = 1 << 3;
  const unsigned P440_IEXE1 = 1 << 4;
  const unsigned P440_IEXE2 = 1 << 5;
  const unsigned P440_IWB = 1 << 6;
  const unsigned P440_LRACC = 1 << 7;
  const unsigned P440_JEXE1 = 1 << 8;
  const unsigned P440_JEXE2 = 1 << 9;
  const unsigned P440_JWB = 1 << 10;
  const unsigned P440_AGEN = 1 << 11;
  const unsigned P440_CRD = 1 << 12;
  const unsigned P440_LWB = 1 << 13;
  const unsigned P440_FEXE1 = 1 << 14;
  const unsigned P440_FEXE2 = 1 << 15;
  const unsigned P440_FEXE3 = 1 << 16;
  const unsigned P440_FEXE4 = 1 << 17;
  const unsigned P440_FEXE5 = 1 << 18;
  const unsigned P440_FEXE6 = 1 << 19;
  const unsigned P440_FWB = 1 << 20;
  const unsigned P440_LWARX_Hold = 1 << 21;
}

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned P440_GPR_Bypass = 1 << 0;
  const unsigned P440_FPR_Bypass = 1 << 1;
}

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned G3_IU1 = 1 << 0;
  const unsigned G3_IU2 = 1 << 1;
  const unsigned G3_FPU1 = 1 << 2;
  const unsigned G3_BPU = 1 << 3;
  const unsigned G3_SRU = 1 << 4;
  const unsigned G3_SLU = 1 << 5;
}

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned G4_IU1 = 1 << 0;
  const unsigned G4_IU2 = 1 << 1;
  const unsigned G4_SLU = 1 << 2;
  const unsigned G4_SRU = 1 << 3;
  const unsigned G4_BPU = 1 << 4;
  const unsigned G4_FPU1 = 1 << 5;
  const unsigned G4_VIU1 = 1 << 6;
  const unsigned G4_VIU2 = 1 << 7;
  const unsigned G4_VPU = 1 << 8;
  const unsigned G4_VFPU = 1 << 9;
}

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned G4P_IU1 = 1 << 0;
  const unsigned G4P_IU2 = 1 << 1;
  const unsigned G4P_IU3 = 1 << 2;
  const unsigned G4P_IU4 = 1 << 3;
  const unsigned G4P_BPU = 1 << 4;
  const unsigned G4P_SLU = 1 << 5;
  const unsigned G4P_FPU1 = 1 << 6;
  const unsigned G4P_VFPU = 1 << 7;
  const unsigned G4P_VIU1 = 1 << 8;
  const unsigned G4P_VIU2 = 1 << 9;
  const unsigned G4P_VPU = 1 << 10;
}

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned G5_IU1 = 1 << 0;
  const unsigned G5_IU2 = 1 << 1;
  const unsigned G5_SLU = 1 << 2;
  const unsigned G5_BPU = 1 << 3;
  const unsigned G5_FPU1 = 1 << 4;
  const unsigned G5_FPU2 = 1 << 5;
  const unsigned G5_VFPU = 1 << 6;
  const unsigned G5_VIU1 = 1 << 7;
  const unsigned G5_VIU2 = 1 << 8;
  const unsigned G5_VPU = 1 << 9;
}

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned A2_XU = 1 << 0;
  const unsigned A2_FU = 1 << 1;
}

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned E500_DIS0 = 1 << 0;
  const unsigned E500_DIS1 = 1 << 1;
  const unsigned E500_SFX0 = 1 << 2;
  const unsigned E500_SFX1 = 1 << 3;
  const unsigned E500_BU = 1 << 4;
  const unsigned E500_CFX_DivBypass = 1 << 5;
  const unsigned E500_CFX_0 = 1 << 6;
  const unsigned E500_LSU_0 = 1 << 7;
  const unsigned E500_FPU_0 = 1 << 8;
}

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500_CR_Bypass = 1 << 0;
  const unsigned E500_GPR_Bypass = 1 << 1;
  const unsigned E500_FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned E5500_DIS0 = 1 << 0;
  const unsigned E5500_DIS1 = 1 << 1;
  const unsigned E5500_SFX0 = 1 << 2;
  const unsigned E5500_SFX1 = 1 << 3;
  const unsigned E5500_BU = 1 << 4;
  const unsigned E5500_CFX_DivBypass = 1 << 5;
  const unsigned E5500_CFX_0 = 1 << 6;
  const unsigned E5500_CFX_1 = 1 << 7;
  const unsigned E5500_LSU_0 = 1 << 8;
  const unsigned E5500_FPU_0 = 1 << 9;
}

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E5500_CR_Bypass = 1 << 0;
  const unsigned E5500_GPR_Bypass = 1 << 1;
  const unsigned E5500_FPR_Bypass = 1 << 2;
}

// Functional units for "P7Itineraries"
namespace P7ItinerariesFU {
  const unsigned P7_DU1 = 1 << 0;
  const unsigned P7_DU2 = 1 << 1;
  const unsigned P7_DU3 = 1 << 2;
  const unsigned P7_DU4 = 1 << 3;
  const unsigned P7_DU5 = 1 << 4;
  const unsigned P7_DU6 = 1 << 5;
  const unsigned P7_LS1 = 1 << 6;
  const unsigned P7_LS2 = 1 << 7;
  const unsigned P7_FX1 = 1 << 8;
  const unsigned P7_FX2 = 1 << 9;
  const unsigned P7_VS1 = 1 << 10;
  const unsigned P7_VS2 = 1 << 11;
  const unsigned P7_CRU = 1 << 12;
  const unsigned P7_BRU = 1 << 13;
}

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC | PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1 | PPC440ItinerariesFU::P440_JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2 | PPC440ItinerariesFU::P440_JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB | PPC440ItinerariesFU::P440_JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-5
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-10
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-15
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-20
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-25
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-34
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-43
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-52
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-68
  { 1, PPC440ItinerariesFU::P440_DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::P440_LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-75
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-80
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-85
  { 1, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, G3ItinerariesFU::G3_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 3, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 2, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 19, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 31, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 17, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 2, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 2, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 34, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 3, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 3, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 5, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 6, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 3, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 8, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 2, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 1, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 1, G4ItinerariesFU::G4_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 4, G4ItinerariesFU::G4_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 1, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 2, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 19, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 1, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 31, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 17, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 2, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 34, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 3, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 3, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 3, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 8, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 5, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 6, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 3, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 5, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 8, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 2, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 1, G4ItinerariesFU::G4_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 1, G4ItinerariesFU::G4_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4PlusItinerariesFU::G4P_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 4, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 2, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 3, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 23, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 5, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 35, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 21, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 3, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 0, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 4, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 37, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 4, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 5, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 35, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 2, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 1, G4PlusItinerariesFU::G4P_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 2, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4PlusItinerariesFU::G4P_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 2, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 1, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 8, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 3, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 4, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 3, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 68, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 36, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 6, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 8, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 33, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 40, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 40, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 11, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 5, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 64, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 2, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 2, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 3, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 6, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 10, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 35, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 3, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 8, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 5, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 7, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 4, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 1, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 4, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 1, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 2, G5ItinerariesFU::G5_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 2, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 3, G5ItinerariesFU::G5_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 1, PPCA2ItinerariesFU::A2_XU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 1, PPCA2ItinerariesFU::A2_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183-184
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185-186
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-188
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::E500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189-191
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-197
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198-199
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-202
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 203-204
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-206
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-208
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-210
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 211-212
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 213-214
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 215-216
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 217-218
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-222
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 223-224
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 225-226
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227-229
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-232
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-238
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-241
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-243
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-245
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-247
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-249
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 250-251
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252-253
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 254-255
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 256-257
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 258-260
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-263
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 264-265
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 266-267
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 268-269
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2 | P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 270-271
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-273
  { 1, P7ItinerariesFU::P7_DU5 | P7ItinerariesFU::P7_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 274-275
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 276-277
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-279
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-281
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 282-284
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 36, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-287
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-293
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 294-300
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301-305
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 306-309
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 310-314
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 315-322
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 323-325
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-331
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-333
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-340
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 341-343
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 344-348
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 349-350
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 351-352
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  2,   0,   0, // 1-3
  2,   0,   0, // 4-6
  4,   0, // 7-8
  2,   0,   0, // 9-11
  4,   0,   0, // 12-14
  1,   1, // 15-16
  5,   1,   1, // 17-19
  36,   0,   0, // 20-22
  6,   0,   0, // 23-25
  6,   0,   0, // 26-28
  6,   0,   0, // 29-31
  31,   0,   0, // 32-34
  19,   0,   0, // 35-37
  6,   0,   0,   0, // 38-41
  4,   1,   1, // 42-44
  5,   2,   1,   1, // 45-48
  5,   2,   1,   1, // 49-52
  5,   1,   1, // 53-55
  5,   2,   1,   1, // 56-59
  5,   2,   1,   1, // 60-63
  4,   1,   1, // 64-66
  4,   1,   1, // 67-69
  4,   1,   1, // 70-72
  4,   1,   1, // 73-75
  4,   1,   1, // 76-78
  4,   0,   0, // 79-81
  4,   0, // 82-83
  6,   0, // 84-85
  3,   0,   0, // 86-88
  3,   0, // 89-90
  2,   0, // 91-92
  6,   0, // 93-94
  1,   1,   1, // 95-97
  4,   0,   0, // 98-100
  6,   0, // 101-102
  3,   0,   0, // 103-105
  2,   0, // 106-107
  5,   0, // 108-109
  4,   0,   0, // 110-112
  4,   0,   0, // 113-115
  4,   0,   0, // 116-118
  4,   0, // 119-120
  2,   0,   0, // 121-123
  2,   0,   0, // 124-126
  2,   1,   1,   1, // 127-130
  4,   1,   1, // 131-133
  4,   1,   1, // 134-136
  2,   1,   1,   1, // 137-140
  2,   1,   1,   1, // 141-144
  1,   1,   1, // 145-147
  2,   1,   1,   1, // 148-151
  4,   1,   1, // 152-154
  2,   0, // 155-156
  1,   0,   0, // 157-159
  2,   0,   0, // 160-162
  6,   0,   0, // 163-165
  2,   0,   0, // 166-168
  1,   0,   0, // 169-171
  1,   0,   0, // 172-174
  6,   0,   0, // 175-177
  71,   0,   0, // 178-180
  39,   0,   0, // 181-183
  6,   0,   0, // 184-186
  6,   0,   0, // 187-189
  5,   0,   0, // 190-192
  72,   0,   0, // 193-195
  59,   0,   0, // 196-198
  6,   0,   0,   0, // 199-202
  69,   0,   0, // 203-205
  65,   0,   0, // 206-208
  16,   0,   0, // 209-211
  16, // 212
  6,   8,   0,   0, // 213-216
  6,   8,   0,   0, // 217-220
  6,   0,   0, // 221-223
  6,   0,   0, // 224-226
  7,   0,   0, // 227-229
  7,   9,   0,   0, // 230-233
  7,   9,   0,   0, // 234-237
  6,   0,   0, // 238-240
  6,   8,   0,   0, // 241-244
  6,   8,   0,   0, // 245-248
  82,   0,   0, // 249-251
  5,   0,   0, // 252-254
  6,   0, // 255-256
  6,   0, // 257-258
  4,   0, // 259-260
  1,   0, // 261-262
  4,   0, // 263-264
  0,   0,   0, // 265-267
  6, // 268
  1,   0,   0, // 269-271
  6,   0, // 272-273
  16,   0, // 274-275
  5,   0,   0, // 276-278
  5,   0,   0, // 279-281
  6,   0,   0, // 282-284
  16, // 285
  2,   0,   0, // 286-288
  2,   0,   0, // 289-291
  2,   0,   0, // 292-294
  2,   0,   0, // 295-297
  2,   0,   0,   0, // 298-301
  0,   0,   0, // 302-304
  82,   0,   0, // 305-307
  2,   0,   0,   0, // 308-311
  2,   0,   0,   0, // 312-315
  0,   0,   0, // 316-318
  2,   0,   0,   0, // 319-322
  82,   0,   0, // 323-325
  2,   0, // 326-327
  2,   0, // 328-329
  4,   1,   1, // 330-332
  4,   1,   1, // 333-335
  4,   1, // 336-337
  5,   1,   1, // 338-340
  4,   1,   1, // 341-343
  6,   1, // 344-345
  6,   1, // 346-347
  17,   1,   1, // 348-350
  11,   1,   1, // 351-353
  13,   1,   1, // 354-356
  11,   1,   1, // 357-359
  71,   1,   1, // 360-362
  41,   1,   1, // 363-365
  13,   1,   1,   1, // 366-369
  6,   1, // 370-371
  6,   1, // 372-373
  6,   1, // 374-375
  7,   1,   1, // 376-378
  7,   1,   1, // 379-381
  7,   1,   1, // 382-384
  6,   1, // 385-386
  6,   1, // 387-388
  6,   1, // 389-390
  7,   1, // 391-392
  6,   1,   1, // 393-395
  4,   1, // 396-397
  8,   1, // 398-399
  4,   1, // 400-401
  11, // 402
  7,   1, // 403-404
  8,   1, // 405-406
  7,   1, // 407-408
  7,   1, // 409-410
  6,   1, // 411-412
  4,   1,   1, // 413-415
  4,   1, // 416-417
  11,   1,   1, // 418-420
  5,   1, // 421-422
  5,   1, // 423-424
  7,   1,   1, // 425-427
  7,   1,   1, // 428-430
  7,   1,   1, // 431-433
  4,   1,   1, // 434-436
  4,   1,   1, // 437-439
  6,   1, // 440-441
  6,   1,   1, // 442-444
  6,   1,   1, // 445-447
  6,   1, // 448-449
  5,   1, // 450-451
  5,   2,   2, // 452-454
  5,   2,   2, // 455-457
  5,   2, // 458-459
  6,   2,   2, // 460-462
  5,   2,   2, // 463-465
  7,   2, // 466-467
  7,   2, // 468-469
  30,   2,   2, // 470-472
  20,   2,   2, // 473-475
  11,   2,   2, // 476-478
  11,   2,   2, // 479-481
  11,   2,   2, // 482-484
  39,   2,   2, // 485-487
  24,   2,   2, // 488-490
  11,   2,   2,   2, // 491-494
  7,   2, // 495-496
  7,   2, // 497-498
  7,   2, // 499-500
  7,   2, // 501-502
  7,   2, // 503-504
  7,   2, // 505-506
  7,   2, // 507-508
  8,   2,   2, // 509-511
  8,   2,   2, // 512-514
  8,   2,   2, // 515-517
  7,   2, // 518-519
  7,   2, // 520-521
  7,   2, // 522-523
  8,   2, // 524-525
  7,   2,   2, // 526-528
  5,   2, // 529-530
  9,   2, // 531-532
  5, // 533
  11, // 534
  8,   2, // 535-536
  9,   2, // 537-538
  8,   2, // 539-540
  7,   2, // 541-542
  5,   2,   2, // 543-545
  5, // 546
  11,   2,   2, // 547-549
  6,   2, // 550-551
  8,   2,   2, // 552-554
  8,   2,   2, // 555-557
  9,   2,   2, // 558-560
  8,   2,   2, // 561-563
  6,   2,   2, // 564-566
  5,   2,   2, // 567-569
  5,   2,   2, // 570-572
  6,   2,   2, // 573-575
  7,   2, // 576-577
  7,   2, // 578-579
  7,   2, // 580-581
  7,   2, // 582-583
  7,   2, // 584-585
  7,   2,   2, // 586-588
  7,   2,   2, // 589-591
  7,   2, // 592-593
  6,   2, // 594-595
  1,   1,   1, // 596-598
  1,   1,   1, // 599-601
  3,   1,   1, // 602-604
  6,   1,   1, // 605-607
  1,   1,   1, // 608-610
  3,   1,   1, // 611-613
  2,   1,   1, // 614-616
  68,   1,   1, // 617-619
  36,   1,   1, // 620-622
  5,   1,   1, // 623-625
  8,   1,   1, // 626-628
  33,   1,   1, // 629-631
  27,   1,   1, // 632-634
  5,   1,   1,   1, // 635-638
  44,   1,   1, // 639-641
  32,   1,   1, // 642-644
  2,   2,   1,   1, // 645-648
  3,   3,   1,   1, // 649-652
  2,   1,   1, // 653-655
  3,   1,   1, // 656-658
  2,   2,   1,   1, // 659-662
  3,   3,   1,   1, // 663-666
  3,   1,   1, // 667-669
  3,   3,   1,   1, // 670-673
  3,   3,   1,   1, // 674-677
  3,   1,   1, // 678-680
  4,   4,   1,   1, // 681-684
  4,   4,   1,   1, // 685-688
  2,   1,   1, // 689-691
  3,   1,   1, // 692-694
  3,   1,   1, // 695-697
  3,   1,   1, // 698-700
  6,   1, // 701-702
  3,   1, // 703-704
  1,   1,   1, // 705-707
  3,   1, // 708-709
  4,   1, // 710-711
  4,   1,   1, // 712-714
  4,   1,   1, // 715-717
  4,   1,   1, // 718-720
  1,   1,   1, // 721-723
  1,   1,   1, // 724-726
  1,   1,   1, // 727-729
  1,   1,   1, // 730-732
  1,   1,   1, // 733-735
  2,   1,   1,   1, // 736-739
  2,   1,   1,   1, // 740-743
  1,   1,   1, // 744-746
  2,   1,   1,   1, // 747-750
  1,   1,   1, // 751-753
  1,   1, // 754-755
  1,   1, // 756-757
  2,   1,   1, // 758-760
  6,   1,   1, // 761-763
  3,   1,   1, // 764-766
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 1-3
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 15-16
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 17-19
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 20-22
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 23-25
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 26-28
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 29-31
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 32-34
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 35-37
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 38-41
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 42-44
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 45-48
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 49-52
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 53-55
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 56-59
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 60-63
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 64-66
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 67-69
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 70-72
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 73-75
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 76-78
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 79-81
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 82-83
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 84-85
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 86-88
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 89-90
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 91-92
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 93-94
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 95-97
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 98-100
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 101-102
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 103-105
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 106-107
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 108-109
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 110-112
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 113-115
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 116-118
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 119-120
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 121-123
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 124-126
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 127-130
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 131-133
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 134-136
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 137-140
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 141-144
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 145-147
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 148-151
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 152-154
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 155-156
 0,  0,  0, // 157-159
 0,  0,  0, // 160-162
 0,  0,  0, // 163-165
 0,  0,  0, // 166-168
 0,  0,  0, // 169-171
 0,  0,  0, // 172-174
 0,  0,  0, // 175-177
 0,  0,  0, // 178-180
 0,  0,  0, // 181-183
 0,  0,  0, // 184-186
 0,  0,  0, // 187-189
 0,  0,  0, // 190-192
 0,  0,  0, // 193-195
 0,  0,  0, // 196-198
 0,  0,  0,  0, // 199-202
 0,  0,  0, // 203-205
 0,  0,  0, // 206-208
 0,  0,  0, // 209-211
 0, // 212
 0,  0,  0,  0, // 213-216
 0,  0,  0,  0, // 217-220
 0,  0,  0, // 221-223
 0,  0,  0, // 224-226
 0,  0,  0, // 227-229
 0,  0,  0,  0, // 230-233
 0,  0,  0,  0, // 234-237
 0,  0,  0, // 238-240
 0,  0,  0,  0, // 241-244
 0,  0,  0,  0, // 245-248
 0,  0,  0, // 249-251
 0,  0,  0, // 252-254
 0,  0, // 255-256
 0,  0, // 257-258
 0,  0, // 259-260
 0,  0, // 261-262
 0,  0, // 263-264
 0,  0,  0, // 265-267
 0, // 268
 0,  0,  0, // 269-271
 0,  0, // 272-273
 0,  0, // 274-275
 0,  0,  0, // 276-278
 0,  0,  0, // 279-281
 0,  0,  0, // 282-284
 0, // 285
 0,  0,  0, // 286-288
 0,  0,  0, // 289-291
 0,  0,  0, // 292-294
 0,  0,  0, // 295-297
 0,  0,  0,  0, // 298-301
 0,  0,  0, // 302-304
 0,  0,  0, // 305-307
 0,  0,  0,  0, // 308-311
 0,  0,  0,  0, // 312-315
 0,  0,  0, // 316-318
 0,  0,  0,  0, // 319-322
 0,  0,  0, // 323-325
 0,  0, // 326-327
 0,  0, // 328-329
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 330-332
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 333-335
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 336-337
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 338-340
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 341-343
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 344-345
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 346-347
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 348-350
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 351-353
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 354-356
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 357-359
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 360-362
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 363-365
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 366-369
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 370-371
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 372-373
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 374-375
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 376-378
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 379-381
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 382-384
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 385-386
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 387-388
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 389-390
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 391-392
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 393-395
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 396-397
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 398-399
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 400-401
PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 402
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 403-404
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 405-406
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 407-408
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 409-410
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 411-412
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 413-415
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 416-417
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 418-420
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 421-422
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 423-424
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 425-427
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 428-430
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 431-433
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 434-436
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 437-439
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 440-441
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 442-444
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 445-447
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 448-449
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 450-451
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 452-454
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 455-457
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 458-459
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 460-462
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 463-465
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 466-467
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 468-469
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 470-472
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 473-475
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 476-478
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 479-481
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 482-484
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 485-487
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 488-490
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 491-494
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 495-496
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 497-498
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 499-500
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 501-502
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 503-504
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 505-506
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 507-508
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 509-511
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 512-514
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 515-517
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 518-519
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 520-521
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 522-523
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 524-525
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 526-528
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 529-530
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 531-532
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 533
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 534
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 535-536
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 537-538
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 539-540
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 541-542
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 543-545
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 546
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 547-549
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 550-551
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 552-554
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 555-557
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 558-560
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 561-563
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 564-566
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 567-569
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 570-572
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 573-575
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 576-577
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 578-579
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 580-581
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 582-583
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 584-585
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 586-588
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 589-591
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 592-593
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 594-595
 0,  0,  0, // 596-598
 0,  0,  0, // 599-601
 0,  0,  0, // 602-604
 0,  0,  0, // 605-607
 0,  0,  0, // 608-610
 0,  0,  0, // 611-613
 0,  0,  0, // 614-616
 0,  0,  0, // 617-619
 0,  0,  0, // 620-622
 0,  0,  0, // 623-625
 0,  0,  0, // 626-628
 0,  0,  0, // 629-631
 0,  0,  0, // 632-634
 0,  0,  0,  0, // 635-638
 0,  0,  0, // 639-641
 0,  0,  0, // 642-644
 0,  0,  0,  0, // 645-648
 0,  0,  0,  0, // 649-652
 0,  0,  0, // 653-655
 0,  0,  0, // 656-658
 0,  0,  0,  0, // 659-662
 0,  0,  0,  0, // 663-666
 0,  0,  0, // 667-669
 0,  0,  0,  0, // 670-673
 0,  0,  0,  0, // 674-677
 0,  0,  0, // 678-680
 0,  0,  0,  0, // 681-684
 0,  0,  0,  0, // 685-688
 0,  0,  0, // 689-691
 0,  0,  0, // 692-694
 0,  0,  0, // 695-697
 0,  0,  0, // 698-700
 0,  0, // 701-702
 0,  0, // 703-704
 0,  0,  0, // 705-707
 0,  0, // 708-709
 0,  0, // 710-711
 0,  0,  0, // 712-714
 0,  0,  0, // 715-717
 0,  0,  0, // 718-720
 0,  0,  0, // 721-723
 0,  0,  0, // 724-726
 0,  0,  0, // 727-729
 0,  0,  0, // 730-732
 0,  0,  0, // 733-735
 0,  0,  0,  0, // 736-739
 0,  0,  0,  0, // 740-743
 0,  0,  0, // 744-746
 0,  0,  0,  0, // 747-750
 0,  0,  0, // 751-753
 0,  0, // 754-755
 0,  0, // 756-757
 0,  0,  0, // 758-760
 0,  0,  0, // 761-763
 0,  0,  0, // 764-766
 0 // End bypass tables
};

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 6, 1, 4 }, // 1 IIC_IntSimple
  { 1, 1, 6, 4, 7 }, // 2 IIC_IntGeneral
  { 1, 6, 11, 7, 9 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 1, 6, 9, 12 }, // 5 IIC_IntCompare
  { 1, 6, 11, 12, 15 }, // 6 IIC_BrCR
  { 1, 11, 16, 15, 17 }, // 7 IIC_LdStDCBF
  { 1, 16, 21, 17, 20 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 21, 26, 20, 23 }, // 10 IIC_IntDivW
  { 1, 26, 35, 23, 26 }, // 11 IIC_FPGeneral
  { 1, 26, 35, 26, 29 }, // 12 IIC_FPAddSub
  { 1, 26, 35, 29, 32 }, // 13 IIC_FPCompare
  { 1, 35, 44, 32, 35 }, // 14 IIC_FPDivD
  { 1, 44, 53, 35, 38 }, // 15 IIC_FPDivS
  { 1, 26, 35, 38, 42 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 11, 16, 42, 45 }, // 19 IIC_LdStICBI
  { 1, 53, 69, 0, 0 }, // 20 IIC_SprISYNC
  { 1, 16, 21, 45, 49 }, // 21 IIC_LdStLoadUpd
  { 1, 16, 21, 49, 53 }, // 22 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDUX
  { 1, 16, 21, 53, 56 }, // 27 IIC_LdStLFD
  { 1, 11, 16, 56, 60 }, // 28 IIC_LdStLFDU
  { 1, 11, 16, 60, 64 }, // 29 IIC_LdStLFDUX
  { 1, 11, 16, 64, 67 }, // 30 IIC_LdStLHA
  { 1, 11, 16, 67, 70 }, // 31 IIC_LdStLHAU
  { 1, 11, 16, 70, 73 }, // 32 IIC_LdStLHAUX
  { 1, 11, 16, 73, 76 }, // 33 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 69, 76, 76, 79 }, // 35 IIC_LdStLWARX
  { 1, 6, 11, 79, 82 }, // 36 IIC_BrMCR
  { 1, 6, 11, 82, 84 }, // 37 IIC_SprMFCR
  { 1, 76, 81, 84, 86 }, // 38 IIC_SprMFSPR
  { 1, 6, 11, 86, 89 }, // 39 IIC_IntMFFS
  { 1, 6, 11, 89, 91 }, // 40 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFCRF
  { 1, 6, 11, 91, 93 }, // 42 IIC_SprMFSR
  { 1, 76, 81, 93, 95 }, // 43 IIC_SprMFTB
  { 1, 16, 21, 95, 98 }, // 44 IIC_LdStStore
  { 1, 81, 86, 0, 0 }, // 45 IIC_LdStSync
  { 1, 6, 11, 98, 101 }, // 46 IIC_BrMCRX
  { 1, 76, 81, 101, 103 }, // 47 IIC_SprMTSPR
  { 1, 6, 11, 103, 106 }, // 48 IIC_IntMTFSB0
  { 1, 6, 11, 106, 108 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 1, 76, 81, 108, 110 }, // 51 IIC_SprMTSR
  { 1, 6, 11, 110, 113 }, // 52 IIC_IntMulHW
  { 1, 6, 11, 113, 116 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 6, 11, 116, 119 }, // 55 IIC_IntMulLI
  { 1, 6, 11, 119, 121 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 1, 6, 121, 124 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 1, 6, 124, 127 }, // 65 IIC_IntShift
  { 1, 16, 21, 127, 131 }, // 66 IIC_LdStStoreUpd
  { 1, 16, 21, 131, 134 }, // 67 IIC_LdStSTD
  { 1, 69, 76, 134, 137 }, // 68 IIC_LdStSTDCX
  { 1, 16, 21, 137, 141 }, // 69 IIC_LdStSTDU
  { 1, 16, 21, 141, 145 }, // 70 IIC_LdStSTDUX
  { 1, 11, 16, 145, 148 }, // 71 IIC_LdStSTFD
  { 1, 11, 16, 148, 152 }, // 72 IIC_LdStSTFDU
  { 1, 69, 76, 152, 155 }, // 73 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 6, 11, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 6, 11, 155, 157 }, // 79 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 80 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 86, 87, 0, 0 }, // 1 IIC_IntSimple
  { 1, 86, 87, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 87, 88, 0, 0 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 86, 87, 0, 0 }, // 5 IIC_IntCompare
  { 1, 88, 89, 0, 0 }, // 6 IIC_BrCR
  { 1, 89, 90, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 90, 91, 0, 0 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 91, 92, 0, 0 }, // 10 IIC_IntDivW
  { 1, 92, 93, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 92, 93, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 92, 93, 0, 0 }, // 13 IIC_FPCompare
  { 1, 93, 94, 0, 0 }, // 14 IIC_FPDivD
  { 1, 94, 95, 0, 0 }, // 15 IIC_FPDivS
  { 1, 95, 96, 0, 0 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 89, 90, 0, 0 }, // 19 IIC_LdStICBI
  { 1, 96, 97, 0, 0 }, // 20 IIC_SprISYNC
  { 1, 90, 91, 0, 0 }, // 21 IIC_LdStLoadUpd
  { 1, 90, 91, 0, 0 }, // 22 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDUX
  { 1, 90, 91, 0, 0 }, // 27 IIC_LdStLFD
  { 1, 90, 91, 0, 0 }, // 28 IIC_LdStLFDU
  { 1, 90, 91, 0, 0 }, // 29 IIC_LdStLFDUX
  { 1, 90, 91, 0, 0 }, // 30 IIC_LdStLHA
  { 1, 90, 91, 0, 0 }, // 31 IIC_LdStLHAU
  { 1, 90, 91, 0, 0 }, // 32 IIC_LdStLHAUX
  { 1, 97, 98, 0, 0 }, // 33 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 89, 90, 0, 0 }, // 35 IIC_LdStLWARX
  { 1, 88, 89, 0, 0 }, // 36 IIC_BrMCR
  { 1, 88, 89, 0, 0 }, // 37 IIC_SprMFCR
  { 1, 98, 99, 0, 0 }, // 38 IIC_SprMFSPR
  { 1, 92, 93, 0, 0 }, // 39 IIC_IntMFFS
  { 1, 88, 89, 0, 0 }, // 40 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFCRF
  { 1, 98, 99, 0, 0 }, // 42 IIC_SprMFSR
  { 1, 98, 99, 0, 0 }, // 43 IIC_SprMFTB
  { 1, 90, 91, 0, 0 }, // 44 IIC_LdStStore
  { 1, 89, 90, 0, 0 }, // 45 IIC_LdStSync
  { 1, 88, 89, 0, 0 }, // 46 IIC_BrMCRX
  { 1, 96, 97, 0, 0 }, // 47 IIC_SprMTSPR
  { 1, 99, 100, 0, 0 }, // 48 IIC_IntMTFSB0
  { 1, 88, 89, 0, 0 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 1, 96, 97, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 100, 101, 0, 0 }, // 52 IIC_IntMulHW
  { 1, 101, 102, 0, 0 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 102, 103, 0, 0 }, // 55 IIC_IntMulLI
  { 1, 96, 97, 0, 0 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 86, 87, 0, 0 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 86, 87, 0, 0 }, // 65 IIC_IntShift
  { 1, 90, 91, 0, 0 }, // 66 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 67 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 68 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTDUX
  { 1, 90, 91, 0, 0 }, // 71 IIC_LdStSTFD
  { 1, 90, 91, 0, 0 }, // 72 IIC_LdStSTFDU
  { 1, 103, 104, 0, 0 }, // 73 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 98, 99, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 104, 105, 0, 0 }, // 79 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 80 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 105, 106, 0, 0 }, // 1 IIC_IntSimple
  { 1, 105, 106, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 106, 107, 0, 0 }, // 3 IIC_BrB
  { 1, 107, 108, 0, 0 }, // 4 IIC_VecFP
  { 1, 105, 106, 0, 0 }, // 5 IIC_IntCompare
  { 1, 108, 109, 0, 0 }, // 6 IIC_BrCR
  { 1, 109, 110, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 109, 110, 0, 0 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 110, 111, 0, 0 }, // 10 IIC_IntDivW
  { 1, 111, 112, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 111, 112, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 111, 112, 0, 0 }, // 13 IIC_FPCompare
  { 1, 112, 113, 0, 0 }, // 14 IIC_FPDivD
  { 1, 113, 114, 0, 0 }, // 15 IIC_FPDivS
  { 1, 111, 112, 0, 0 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 109, 110, 0, 0 }, // 19 IIC_LdStICBI
  { 1, 114, 115, 0, 0 }, // 20 IIC_SprISYNC
  { 1, 109, 110, 0, 0 }, // 21 IIC_LdStLoadUpd
  { 1, 109, 110, 0, 0 }, // 22 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDUX
  { 1, 109, 110, 0, 0 }, // 27 IIC_LdStLFD
  { 1, 109, 110, 0, 0 }, // 28 IIC_LdStLFDU
  { 1, 109, 110, 0, 0 }, // 29 IIC_LdStLFDUX
  { 1, 109, 110, 0, 0 }, // 30 IIC_LdStLHA
  { 1, 109, 110, 0, 0 }, // 31 IIC_LdStLHAU
  { 1, 109, 110, 0, 0 }, // 32 IIC_LdStLHAUX
  { 1, 115, 116, 0, 0 }, // 33 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 116, 117, 0, 0 }, // 35 IIC_LdStLWARX
  { 1, 108, 109, 0, 0 }, // 36 IIC_BrMCR
  { 1, 108, 109, 0, 0 }, // 37 IIC_SprMFCR
  { 1, 117, 118, 0, 0 }, // 38 IIC_SprMFSPR
  { 1, 118, 119, 0, 0 }, // 39 IIC_IntMFFS
  { 1, 108, 109, 0, 0 }, // 40 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFCRF
  { 1, 117, 118, 0, 0 }, // 42 IIC_SprMFSR
  { 1, 108, 109, 0, 0 }, // 43 IIC_SprMFTB
  { 1, 109, 110, 0, 0 }, // 44 IIC_LdStStore
  { 1, 119, 120, 0, 0 }, // 45 IIC_LdStSync
  { 1, 108, 109, 0, 0 }, // 46 IIC_BrMCRX
  { 1, 114, 115, 0, 0 }, // 47 IIC_SprMTSPR
  { 1, 118, 119, 0, 0 }, // 48 IIC_IntMTFSB0
  { 1, 108, 109, 0, 0 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 1, 114, 115, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 120, 121, 0, 0 }, // 52 IIC_IntMulHW
  { 1, 121, 122, 0, 0 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 122, 123, 0, 0 }, // 55 IIC_IntMulLI
  { 1, 114, 115, 0, 0 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 105, 106, 0, 0 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 105, 106, 0, 0 }, // 65 IIC_IntShift
  { 1, 109, 110, 0, 0 }, // 66 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 67 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 68 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTDUX
  { 1, 109, 110, 0, 0 }, // 71 IIC_LdStSTFD
  { 1, 109, 110, 0, 0 }, // 72 IIC_LdStSTFDU
  { 1, 123, 124, 0, 0 }, // 73 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 124, 125, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 125, 126, 0, 0 }, // 79 IIC_IntTrapW
  { 1, 126, 127, 0, 0 }, // 80 IIC_VecGeneral
  { 1, 126, 127, 0, 0 }, // 81 IIC_VecFPCompare
  { 1, 127, 128, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 128, 129, 0, 0 }, // 1 IIC_IntSimple
  { 1, 128, 129, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 129, 130, 0, 0 }, // 3 IIC_BrB
  { 1, 130, 131, 0, 0 }, // 4 IIC_VecFP
  { 1, 128, 129, 0, 0 }, // 5 IIC_IntCompare
  { 1, 131, 132, 0, 0 }, // 6 IIC_BrCR
  { 1, 132, 133, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 132, 133, 0, 0 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 133, 134, 0, 0 }, // 10 IIC_IntDivW
  { 1, 134, 135, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 134, 135, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 134, 135, 0, 0 }, // 13 IIC_FPCompare
  { 1, 135, 136, 0, 0 }, // 14 IIC_FPDivD
  { 1, 136, 137, 0, 0 }, // 15 IIC_FPDivS
  { 1, 134, 135, 0, 0 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 137, 138, 0, 0 }, // 19 IIC_LdStICBI
  { 1, 138, 139, 0, 0 }, // 20 IIC_SprISYNC
  { 1, 132, 133, 0, 0 }, // 21 IIC_LdStLoadUpd
  { 1, 132, 133, 0, 0 }, // 22 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDUX
  { 1, 139, 140, 0, 0 }, // 27 IIC_LdStLFD
  { 1, 139, 140, 0, 0 }, // 28 IIC_LdStLFDU
  { 1, 139, 140, 0, 0 }, // 29 IIC_LdStLFDUX
  { 1, 132, 133, 0, 0 }, // 30 IIC_LdStLHA
  { 1, 132, 133, 0, 0 }, // 31 IIC_LdStLHAU
  { 1, 132, 133, 0, 0 }, // 32 IIC_LdStLHAUX
  { 1, 140, 141, 0, 0 }, // 33 IIC_LdStLMW
  { 1, 132, 133, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 132, 133, 0, 0 }, // 35 IIC_LdStLWARX
  { 1, 131, 132, 0, 0 }, // 36 IIC_BrMCR
  { 1, 131, 132, 0, 0 }, // 37 IIC_SprMFCR
  { 1, 141, 142, 0, 0 }, // 38 IIC_SprMFSPR
  { 1, 134, 135, 0, 0 }, // 39 IIC_IntMFFS
  { 1, 137, 138, 0, 0 }, // 40 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFCRF
  { 1, 141, 142, 0, 0 }, // 42 IIC_SprMFSR
  { 1, 142, 143, 0, 0 }, // 43 IIC_SprMFTB
  { 1, 132, 133, 0, 0 }, // 44 IIC_LdStStore
  { 1, 143, 144, 0, 0 }, // 45 IIC_LdStSync
  { 1, 131, 132, 0, 0 }, // 46 IIC_BrMCRX
  { 1, 131, 132, 0, 0 }, // 47 IIC_SprMTSPR
  { 1, 134, 135, 0, 0 }, // 48 IIC_IntMTFSB0
  { 1, 131, 132, 0, 0 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 1, 131, 132, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 141, 142, 0, 0 }, // 52 IIC_IntMulHW
  { 1, 141, 142, 0, 0 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 137, 138, 0, 0 }, // 55 IIC_IntMulLI
  { 1, 128, 129, 0, 0 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 128, 129, 0, 0 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 144, 145, 0, 0 }, // 65 IIC_IntShift
  { 1, 132, 133, 0, 0 }, // 66 IIC_LdStStoreUpd
  { 1, 132, 133, 0, 0 }, // 67 IIC_LdStSTD
  { 1, 132, 133, 0, 0 }, // 68 IIC_LdStSTDCX
  { 1, 132, 133, 0, 0 }, // 69 IIC_LdStSTDU
  { 1, 132, 133, 0, 0 }, // 70 IIC_LdStSTDUX
  { 1, 132, 133, 0, 0 }, // 71 IIC_LdStSTFD
  { 1, 132, 133, 0, 0 }, // 72 IIC_LdStSTFDU
  { 1, 132, 133, 0, 0 }, // 73 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 132, 133, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 144, 145, 0, 0 }, // 79 IIC_IntTrapW
  { 1, 145, 146, 0, 0 }, // 80 IIC_VecGeneral
  { 1, 146, 147, 0, 0 }, // 81 IIC_VecFPCompare
  { 1, 147, 148, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 148, 149, 0, 0 }, // 1 IIC_IntSimple
  { 1, 148, 149, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 149, 150, 0, 0 }, // 3 IIC_BrB
  { 1, 150, 151, 0, 0 }, // 4 IIC_VecFP
  { 1, 151, 152, 0, 0 }, // 5 IIC_IntCompare
  { 1, 152, 153, 0, 0 }, // 6 IIC_BrCR
  { 1, 153, 154, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 153, 154, 0, 0 }, // 8 IIC_LdStLoad
  { 1, 154, 155, 0, 0 }, // 9 IIC_IntDivD
  { 1, 155, 156, 0, 0 }, // 10 IIC_IntDivW
  { 1, 156, 157, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 156, 157, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 157, 158, 0, 0 }, // 13 IIC_FPCompare
  { 1, 158, 159, 0, 0 }, // 14 IIC_FPDivD
  { 1, 158, 159, 0, 0 }, // 15 IIC_FPDivS
  { 1, 156, 157, 0, 0 }, // 16 IIC_FPFused
  { 1, 159, 160, 0, 0 }, // 17 IIC_FPSqrtD
  { 1, 159, 160, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 160, 161, 0, 0 }, // 19 IIC_LdStICBI
  { 1, 160, 161, 0, 0 }, // 20 IIC_SprISYNC
  { 1, 153, 154, 0, 0 }, // 21 IIC_LdStLoadUpd
  { 1, 153, 154, 0, 0 }, // 22 IIC_LdStLoadUpdX
  { 1, 153, 154, 0, 0 }, // 23 IIC_LdStLD
  { 1, 161, 162, 0, 0 }, // 24 IIC_LdStLDARX
  { 1, 153, 154, 0, 0 }, // 25 IIC_LdStLDU
  { 1, 153, 154, 0, 0 }, // 26 IIC_LdStLDUX
  { 1, 153, 154, 0, 0 }, // 27 IIC_LdStLFD
  { 1, 162, 163, 0, 0 }, // 28 IIC_LdStLFDU
  { 1, 162, 163, 0, 0 }, // 29 IIC_LdStLFDUX
  { 1, 162, 163, 0, 0 }, // 30 IIC_LdStLHA
  { 1, 162, 163, 0, 0 }, // 31 IIC_LdStLHAU
  { 1, 162, 163, 0, 0 }, // 32 IIC_LdStLHAUX
  { 1, 163, 164, 0, 0 }, // 33 IIC_LdStLMW
  { 1, 162, 163, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 161, 162, 0, 0 }, // 35 IIC_LdStLWARX
  { 1, 164, 165, 0, 0 }, // 36 IIC_BrMCR
  { 1, 165, 166, 0, 0 }, // 37 IIC_SprMFCR
  { 1, 166, 167, 0, 0 }, // 38 IIC_SprMFSPR
  { 1, 167, 168, 0, 0 }, // 39 IIC_IntMFFS
  { 1, 166, 167, 0, 0 }, // 40 IIC_SprMFMSR
  { 1, 165, 166, 0, 0 }, // 41 IIC_SprMFCRF
  { 1, 153, 154, 0, 0 }, // 42 IIC_SprMFSR
  { 1, 168, 169, 0, 0 }, // 43 IIC_SprMFTB
  { 1, 153, 154, 0, 0 }, // 44 IIC_LdStStore
  { 1, 169, 170, 0, 0 }, // 45 IIC_LdStSync
  { 1, 170, 171, 0, 0 }, // 46 IIC_BrMCRX
  { 1, 171, 172, 0, 0 }, // 47 IIC_SprMTSPR
  { 1, 156, 157, 0, 0 }, // 48 IIC_IntMTFSB0
  { 1, 153, 154, 0, 0 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 1, 153, 154, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 172, 173, 0, 0 }, // 52 IIC_IntMulHW
  { 1, 172, 173, 0, 0 }, // 53 IIC_IntMulHWU
  { 1, 173, 174, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 174, 175, 0, 0 }, // 55 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprRFI
  { 1, 175, 176, 0, 0 }, // 57 IIC_IntRFID
  { 1, 148, 149, 0, 0 }, // 58 IIC_IntRotateD
  { 1, 148, 149, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 174, 175, 0, 0 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 148, 149, 0, 0 }, // 65 IIC_IntShift
  { 1, 153, 154, 0, 0 }, // 66 IIC_LdStStoreUpd
  { 1, 153, 154, 0, 0 }, // 67 IIC_LdStSTD
  { 1, 161, 162, 0, 0 }, // 68 IIC_LdStSTDCX
  { 1, 153, 154, 0, 0 }, // 69 IIC_LdStSTDU
  { 1, 153, 154, 0, 0 }, // 70 IIC_LdStSTDUX
  { 1, 176, 177, 0, 0 }, // 71 IIC_LdStSTFD
  { 1, 176, 177, 0, 0 }, // 72 IIC_LdStSTFDU
  { 1, 161, 162, 0, 0 }, // 73 IIC_LdStSTWCX
  { 1, 177, 178, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 153, 154, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 177, 178, 0, 0 }, // 79 IIC_IntTrapW
  { 1, 178, 179, 0, 0 }, // 80 IIC_VecGeneral
  { 1, 179, 180, 0, 0 }, // 81 IIC_VecFPCompare
  { 1, 180, 181, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 181, 182, 157, 160 }, // 1 IIC_IntSimple
  { 1, 181, 182, 160, 163 }, // 2 IIC_IntGeneral
  { 1, 181, 182, 163, 166 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 181, 182, 166, 169 }, // 5 IIC_IntCompare
  { 1, 181, 182, 169, 172 }, // 6 IIC_BrCR
  { 1, 181, 182, 172, 175 }, // 7 IIC_LdStDCBF
  { 1, 181, 182, 175, 178 }, // 8 IIC_LdStLoad
  { 1, 181, 182, 178, 181 }, // 9 IIC_IntDivD
  { 1, 181, 182, 181, 184 }, // 10 IIC_IntDivW
  { 1, 182, 183, 184, 187 }, // 11 IIC_FPGeneral
  { 1, 182, 183, 187, 190 }, // 12 IIC_FPAddSub
  { 1, 182, 183, 190, 193 }, // 13 IIC_FPCompare
  { 1, 182, 183, 193, 196 }, // 14 IIC_FPDivD
  { 1, 182, 183, 196, 199 }, // 15 IIC_FPDivS
  { 1, 182, 183, 199, 203 }, // 16 IIC_FPFused
  { 1, 182, 183, 203, 206 }, // 17 IIC_FPSqrtD
  { 1, 182, 183, 206, 209 }, // 18 IIC_FPSqrtS
  { 1, 181, 182, 209, 212 }, // 19 IIC_LdStICBI
  { 1, 181, 182, 212, 213 }, // 20 IIC_SprISYNC
  { 1, 181, 182, 213, 217 }, // 21 IIC_LdStLoadUpd
  { 1, 181, 182, 217, 221 }, // 22 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDARX
  { 1, 181, 182, 221, 224 }, // 25 IIC_LdStLDU
  { 1, 181, 182, 224, 227 }, // 26 IIC_LdStLDUX
  { 1, 181, 182, 227, 230 }, // 27 IIC_LdStLFD
  { 1, 181, 182, 230, 234 }, // 28 IIC_LdStLFDU
  { 1, 181, 182, 234, 238 }, // 29 IIC_LdStLFDUX
  { 1, 181, 182, 238, 241 }, // 30 IIC_LdStLHA
  { 1, 181, 182, 241, 245 }, // 31 IIC_LdStLHAU
  { 1, 181, 182, 245, 249 }, // 32 IIC_LdStLHAUX
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 181, 182, 249, 252 }, // 35 IIC_LdStLWARX
  { 1, 181, 182, 252, 255 }, // 36 IIC_BrMCR
  { 1, 181, 182, 255, 257 }, // 37 IIC_SprMFCR
  { 1, 181, 182, 257, 259 }, // 38 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 39 IIC_IntMFFS
  { 1, 181, 182, 259, 261 }, // 40 IIC_SprMFMSR
  { 1, 181, 182, 261, 263 }, // 41 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFSR
  { 1, 181, 182, 263, 265 }, // 43 IIC_SprMFTB
  { 1, 181, 182, 265, 268 }, // 44 IIC_LdStStore
  { 1, 181, 182, 268, 269 }, // 45 IIC_LdStSync
  { 1, 181, 182, 269, 272 }, // 46 IIC_BrMCRX
  { 1, 181, 182, 272, 274 }, // 47 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 48 IIC_IntMTFSB0
  { 1, 181, 182, 274, 276 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 181, 182, 276, 279 }, // 52 IIC_IntMulHW
  { 1, 181, 182, 279, 282 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 181, 182, 282, 285 }, // 55 IIC_IntMulLI
  { 1, 181, 182, 285, 286 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 1, 181, 182, 286, 289 }, // 58 IIC_IntRotateD
  { 1, 181, 182, 289, 292 }, // 59 IIC_IntRotateDI
  { 1, 181, 182, 292, 295 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 181, 182, 295, 298 }, // 65 IIC_IntShift
  { 1, 181, 182, 298, 302 }, // 66 IIC_LdStStoreUpd
  { 1, 181, 182, 302, 305 }, // 67 IIC_LdStSTD
  { 1, 181, 182, 305, 308 }, // 68 IIC_LdStSTDCX
  { 1, 181, 182, 308, 312 }, // 69 IIC_LdStSTDU
  { 1, 181, 182, 312, 316 }, // 70 IIC_LdStSTDUX
  { 1, 181, 182, 316, 319 }, // 71 IIC_LdStSTFD
  { 1, 181, 182, 319, 323 }, // 72 IIC_LdStSTFDU
  { 1, 181, 182, 323, 326 }, // 73 IIC_LdStSTWCX
  { 1, 181, 182, 326, 328 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 181, 182, 328, 330 }, // 79 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 80 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 183, 185, 330, 333 }, // 1 IIC_IntSimple
  { 1, 183, 185, 333, 336 }, // 2 IIC_IntGeneral
  { 1, 185, 187, 336, 338 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 183, 185, 338, 341 }, // 5 IIC_IntCompare
  { 1, 185, 187, 341, 344 }, // 6 IIC_BrCR
  { 1, 187, 189, 344, 346 }, // 7 IIC_LdStDCBF
  { 1, 187, 189, 346, 348 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 189, 192, 348, 351 }, // 10 IIC_IntDivW
  { 1, 192, 194, 351, 354 }, // 11 IIC_FPGeneral
  { 1, 194, 196, 354, 357 }, // 12 IIC_FPAddSub
  { 1, 192, 194, 357, 360 }, // 13 IIC_FPCompare
  { 1, 196, 198, 360, 363 }, // 14 IIC_FPDivD
  { 1, 198, 200, 363, 366 }, // 15 IIC_FPDivS
  { 1, 194, 196, 366, 370 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 187, 189, 370, 372 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_SprISYNC
  { 2, 200, 203, 372, 374 }, // 21 IIC_LdStLoadUpd
  { 2, 200, 203, 374, 376 }, // 22 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDUX
  { 1, 187, 189, 376, 379 }, // 27 IIC_LdStLFD
  { 2, 200, 203, 379, 382 }, // 28 IIC_LdStLFDU
  { 2, 200, 203, 382, 385 }, // 29 IIC_LdStLFDUX
  { 1, 187, 189, 385, 387 }, // 30 IIC_LdStLHA
  { 1, 200, 203, 387, 389 }, // 31 IIC_LdStLHAU
  { 1, 200, 203, 389, 391 }, // 32 IIC_LdStLHAUX
  { 1, 187, 189, 391, 393 }, // 33 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 203, 205, 393, 396 }, // 35 IIC_LdStLWARX
  { 1, 185, 187, 396, 398 }, // 36 IIC_BrMCR
  { 1, 205, 207, 398, 400 }, // 37 IIC_SprMFCR
  { 1, 183, 185, 400, 402 }, // 38 IIC_SprMFSPR
  { 1, 207, 209, 402, 403 }, // 39 IIC_IntMFFS
  { 1, 209, 211, 403, 405 }, // 40 IIC_SprMFMSR
  { 1, 205, 207, 405, 407 }, // 41 IIC_SprMFCRF
  { 1, 209, 211, 407, 409 }, // 42 IIC_SprMFSR
  { 1, 209, 211, 409, 411 }, // 43 IIC_SprMFTB
  { 1, 187, 189, 411, 413 }, // 44 IIC_LdStStore
  { 1, 187, 189, 0, 0 }, // 45 IIC_LdStSync
  { 1, 183, 185, 413, 416 }, // 46 IIC_BrMCRX
  { 1, 183, 185, 416, 418 }, // 47 IIC_SprMTSPR
  { 1, 207, 209, 418, 421 }, // 48 IIC_IntMTFSB0
  { 1, 211, 213, 421, 423 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 1, 213, 215, 423, 425 }, // 51 IIC_SprMTSR
  { 1, 215, 217, 425, 428 }, // 52 IIC_IntMulHW
  { 1, 215, 217, 428, 431 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 215, 217, 431, 434 }, // 55 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 183, 185, 434, 437 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 183, 185, 437, 440 }, // 65 IIC_IntShift
  { 2, 200, 203, 440, 442 }, // 66 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 67 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 68 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTDUX
  { 1, 187, 189, 442, 445 }, // 71 IIC_LdStSTFD
  { 2, 200, 203, 445, 448 }, // 72 IIC_LdStSTFDU
  { 1, 187, 189, 448, 450 }, // 73 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 217, 219, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 219, 221, 450, 452 }, // 79 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 80 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 221, 223, 452, 455 }, // 1 IIC_IntSimple
  { 1, 221, 223, 455, 458 }, // 2 IIC_IntGeneral
  { 1, 223, 225, 458, 460 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 221, 223, 460, 463 }, // 5 IIC_IntCompare
  { 1, 223, 225, 463, 466 }, // 6 IIC_BrCR
  { 1, 225, 227, 466, 468 }, // 7 IIC_LdStDCBF
  { 1, 225, 227, 468, 470 }, // 8 IIC_LdStLoad
  { 1, 227, 230, 470, 473 }, // 9 IIC_IntDivD
  { 1, 230, 233, 473, 476 }, // 10 IIC_IntDivW
  { 1, 233, 235, 476, 479 }, // 11 IIC_FPGeneral
  { 1, 233, 235, 479, 482 }, // 12 IIC_FPAddSub
  { 1, 233, 235, 482, 485 }, // 13 IIC_FPCompare
  { 1, 235, 237, 485, 488 }, // 14 IIC_FPDivD
  { 1, 237, 239, 488, 491 }, // 15 IIC_FPDivS
  { 1, 233, 235, 491, 495 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 225, 227, 495, 497 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_SprISYNC
  { 2, 239, 242, 497, 499 }, // 21 IIC_LdStLoadUpd
  { 2, 239, 242, 499, 501 }, // 22 IIC_LdStLoadUpdX
  { 1, 225, 227, 501, 503 }, // 23 IIC_LdStLD
  { 1, 242, 244, 503, 505 }, // 24 IIC_LdStLDARX
  { 2, 239, 242, 505, 507 }, // 25 IIC_LdStLDU
  { 2, 239, 242, 507, 509 }, // 26 IIC_LdStLDUX
  { 2, 225, 227, 509, 512 }, // 27 IIC_LdStLFD
  { 2, 239, 242, 512, 515 }, // 28 IIC_LdStLFDU
  { 2, 239, 242, 515, 518 }, // 29 IIC_LdStLFDUX
  { 1, 225, 227, 518, 520 }, // 30 IIC_LdStLHA
  { 2, 239, 242, 520, 522 }, // 31 IIC_LdStLHAU
  { 2, 239, 242, 522, 524 }, // 32 IIC_LdStLHAUX
  { 1, 244, 246, 524, 526 }, // 33 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLWA
  { 1, 242, 244, 526, 529 }, // 35 IIC_LdStLWARX
  { 1, 223, 225, 529, 531 }, // 36 IIC_BrMCR
  { 1, 246, 248, 531, 533 }, // 37 IIC_SprMFCR
  { 1, 248, 250, 533, 534 }, // 38 IIC_SprMFSPR
  { 1, 233, 235, 534, 535 }, // 39 IIC_IntMFFS
  { 1, 250, 252, 535, 537 }, // 40 IIC_SprMFMSR
  { 1, 246, 248, 537, 539 }, // 41 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFSR
  { 1, 252, 254, 539, 541 }, // 43 IIC_SprMFTB
  { 1, 225, 227, 541, 543 }, // 44 IIC_LdStStore
  { 1, 225, 227, 0, 0 }, // 45 IIC_LdStSync
  { 1, 248, 250, 543, 546 }, // 46 IIC_BrMCRX
  { 1, 221, 223, 546, 547 }, // 47 IIC_SprMTSPR
  { 1, 254, 256, 547, 550 }, // 48 IIC_IntMTFSB0
  { 1, 256, 258, 550, 552 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 258, 261, 552, 555 }, // 52 IIC_IntMulHW
  { 1, 258, 261, 555, 558 }, // 53 IIC_IntMulHWU
  { 1, 261, 264, 558, 561 }, // 54 IIC_IntMulHD
  { 1, 261, 264, 561, 564 }, // 55 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 1, 264, 266, 564, 567 }, // 58 IIC_IntRotateD
  { 1, 221, 223, 567, 570 }, // 59 IIC_IntRotateDI
  { 1, 221, 223, 570, 573 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 264, 266, 573, 576 }, // 65 IIC_IntShift
  { 2, 239, 242, 576, 578 }, // 66 IIC_LdStStoreUpd
  { 1, 225, 227, 578, 580 }, // 67 IIC_LdStSTD
  { 1, 225, 227, 580, 582 }, // 68 IIC_LdStSTDCX
  { 2, 239, 242, 582, 584 }, // 69 IIC_LdStSTDU
  { 2, 239, 242, 584, 586 }, // 70 IIC_LdStSTDUX
  { 1, 225, 227, 586, 589 }, // 71 IIC_LdStSTFD
  { 2, 239, 242, 589, 592 }, // 72 IIC_LdStSTFDU
  { 1, 225, 227, 592, 594 }, // 73 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 1, 266, 268, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 268, 270, 594, 596 }, // 79 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 80 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P7Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 270, 272, 596, 599 }, // 1 IIC_IntSimple
  { 1, 272, 274, 599, 602 }, // 2 IIC_IntGeneral
  { 1, 274, 276, 602, 605 }, // 3 IIC_BrB
  { 1, 276, 278, 605, 608 }, // 4 IIC_VecFP
  { 1, 272, 274, 608, 611 }, // 5 IIC_IntCompare
  { 1, 278, 280, 611, 614 }, // 6 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 280, 282, 614, 617 }, // 8 IIC_LdStLoad
  { 1, 282, 285, 617, 620 }, // 9 IIC_IntDivD
  { 1, 285, 288, 620, 623 }, // 10 IIC_IntDivW
  { 1, 288, 290, 623, 626 }, // 11 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 288, 290, 626, 629 }, // 13 IIC_FPCompare
  { 1, 288, 290, 629, 632 }, // 14 IIC_FPDivD
  { 1, 288, 290, 632, 635 }, // 15 IIC_FPDivS
  { 1, 288, 290, 635, 639 }, // 16 IIC_FPFused
  { 1, 288, 290, 639, 642 }, // 17 IIC_FPSqrtD
  { 1, 288, 290, 642, 645 }, // 18 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_SprISYNC
  { 1, 290, 294, 645, 649 }, // 21 IIC_LdStLoadUpd
  { 1, 294, 301, 649, 653 }, // 22 IIC_LdStLoadUpdX
  { 1, 280, 282, 653, 656 }, // 23 IIC_LdStLD
  { 1, 301, 306, 656, 659 }, // 24 IIC_LdStLDARX
  { 1, 290, 294, 659, 663 }, // 25 IIC_LdStLDU
  { 1, 294, 301, 663, 667 }, // 26 IIC_LdStLDUX
  { 1, 280, 282, 667, 670 }, // 27 IIC_LdStLFD
  { 1, 290, 294, 670, 674 }, // 28 IIC_LdStLFDU
  { 1, 290, 294, 674, 678 }, // 29 IIC_LdStLFDUX
  { 1, 306, 310, 678, 681 }, // 30 IIC_LdStLHA
  { 1, 310, 315, 681, 685 }, // 31 IIC_LdStLHAU
  { 1, 315, 323, 685, 689 }, // 32 IIC_LdStLHAUX
  { 1, 280, 282, 689, 692 }, // 33 IIC_LdStLMW
  { 1, 306, 310, 692, 695 }, // 34 IIC_LdStLWA
  { 1, 301, 306, 695, 698 }, // 35 IIC_LdStLWARX
  { 1, 274, 276, 698, 701 }, // 36 IIC_BrMCR
  { 1, 278, 280, 701, 703 }, // 37 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 38 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 39 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 40 IIC_SprMFMSR
  { 1, 278, 280, 703, 705 }, // 41 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 43 IIC_SprMFTB
  { 1, 323, 326, 705, 708 }, // 44 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 45 IIC_LdStSync
  { 1, 326, 332, 708, 710 }, // 46 IIC_BrMCRX
  { 1, 332, 334, 710, 712 }, // 47 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 48 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTSR
  { 1, 272, 274, 712, 715 }, // 52 IIC_IntMulHW
  { 1, 272, 274, 715, 718 }, // 53 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntMulHD
  { 1, 272, 274, 718, 721 }, // 55 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntRFID
  { 1, 272, 274, 721, 724 }, // 58 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateDI
  { 1, 272, 274, 724, 727 }, // 60 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMTE
  { 1, 272, 274, 727, 730 }, // 65 IIC_IntShift
  { 0, 0, 0, 0, 0 }, // 66 IIC_LdStStoreUpd
  { 1, 323, 326, 730, 733 }, // 67 IIC_LdStSTD
  { 1, 301, 306, 733, 736 }, // 68 IIC_LdStSTDCX
  { 1, 310, 315, 736, 740 }, // 69 IIC_LdStSTDU
  { 1, 334, 341, 740, 744 }, // 70 IIC_LdStSTDUX
  { 1, 341, 344, 744, 747 }, // 71 IIC_LdStSTFD
  { 1, 344, 349, 747, 751 }, // 72 IIC_LdStSTFDU
  { 1, 301, 306, 751, 754 }, // 73 IIC_LdStSTWCX
  { 1, 272, 274, 754, 756 }, // 74 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBSYNC
  { 1, 272, 274, 756, 758 }, // 79 IIC_IntTrapW
  { 1, 349, 351, 758, 761 }, // 80 IIC_VecGeneral
  { 1, 276, 278, 761, 764 }, // 81 IIC_VecFPCompare
  { 1, 351, 353, 764, 767 }, // 82 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel PPC440Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPC440Itineraries};

static const llvm::MCSchedModel G3ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G3Itineraries};

static const llvm::MCSchedModel G4ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4Itineraries};

static const llvm::MCSchedModel G4PlusItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4PlusItineraries};

static const llvm::MCSchedModel G5Model = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  5, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G5Itineraries};

static const llvm::MCSchedModel PPCA2Model = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  6, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries};

static const llvm::MCSchedModel PPCE500mcModel = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  7, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries};

static const llvm::MCSchedModel PPCE5500Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  8, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries};

static const llvm::MCSchedModel P7Model = {
  6, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  9, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  P7Itineraries};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440Model },
  { "450", (const void *)&PPC440Model },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&G5Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&P7Model },
  { "pwr8", (const void *)&P7Model }
};
#undef DBGFIELD
static inline void InitPPCMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & PPC::DeprecatedDST) != 0) DeprecatedDST = true;
  if ((Bits & PPC::DeprecatedMFTB) != 0) DeprecatedMFTB = true;
  if ((Bits & PPC::Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & PPC::Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & PPC::Directive440) != 0 && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if ((Bits & PPC::Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & PPC::Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & PPC::Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & PPC::Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & PPC::Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & PPC::DirectiveA2) != 0 && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if ((Bits & PPC::DirectiveE500mc) != 0 && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if ((Bits & PPC::DirectiveE5500) != 0 && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if ((Bits & PPC::DirectivePwr3) != 0 && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if ((Bits & PPC::DirectivePwr4) != 0 && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if ((Bits & PPC::DirectivePwr5) != 0 && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if ((Bits & PPC::DirectivePwr5x) != 0 && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if ((Bits & PPC::DirectivePwr6) != 0 && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if ((Bits & PPC::DirectivePwr6x) != 0 && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if ((Bits & PPC::DirectivePwr7) != 0 && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if ((Bits & PPC::DirectivePwr8) != 0 && DarwinDirective < PPC::DIR_PWR8) DarwinDirective = PPC::DIR_PWR8;
  if ((Bits & PPC::Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & PPC::Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & PPC::FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & PPC::FeatureBookE) != 0) IsBookE = true;
  if ((Bits & PPC::FeatureCRBits) != 0) UseCRBits = true;
  if ((Bits & PPC::FeatureE500) != 0) IsE500 = true;
  if ((Bits & PPC::FeatureELFv1) != 0 && TargetABI < PPC_ABI_ELFv1) TargetABI = PPC_ABI_ELFv1;
  if ((Bits & PPC::FeatureELFv2) != 0 && TargetABI < PPC_ABI_ELFv2) TargetABI = PPC_ABI_ELFv2;
  if ((Bits & PPC::FeatureFCPSGN) != 0) HasFCPSGN = true;
  if ((Bits & PPC::FeatureFPCVT) != 0) HasFPCVT = true;
  if ((Bits & PPC::FeatureFPRND) != 0) HasFPRND = true;
  if ((Bits & PPC::FeatureFRE) != 0) HasFRE = true;
  if ((Bits & PPC::FeatureFRES) != 0) HasFRES = true;
  if ((Bits & PPC::FeatureFRSQRTE) != 0) HasFRSQRTE = true;
  if ((Bits & PPC::FeatureFRSQRTES) != 0) HasFRSQRTES = true;
  if ((Bits & PPC::FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & PPC::FeatureISEL) != 0) HasISEL = true;
  if ((Bits & PPC::FeatureLDBRX) != 0) HasLDBRX = true;
  if ((Bits & PPC::FeatureLFIWAX) != 0) HasLFIWAX = true;
  if ((Bits & PPC::FeatureMFOCRF) != 0) HasMFOCRF = true;
  if ((Bits & PPC::FeatureMSYNC) != 0) HasOnlyMSYNC = true;
  if ((Bits & PPC::FeatureP8Vector) != 0) HasP8Vector = true;
  if ((Bits & PPC::FeaturePOPCNTD) != 0) HasPOPCNTD = true;
  if ((Bits & PPC::FeaturePPC4xx) != 0) IsPPC4xx = true;
  if ((Bits & PPC::FeaturePPC6xx) != 0) IsPPC6xx = true;
  if ((Bits & PPC::FeatureQPX) != 0) HasQPX = true;
  if ((Bits & PPC::FeatureRecipPrec) != 0) HasRecipPrec = true;
  if ((Bits & PPC::FeatureSPE) != 0) HasSPE = true;
  if ((Bits & PPC::FeatureSTFIWX) != 0) HasSTFIWX = true;
  if ((Bits & PPC::FeatureVSX) != 0) HasVSX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(PPCFeatureKV, 30), makeArrayRef(PPCSubTypeKV, 34), 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

