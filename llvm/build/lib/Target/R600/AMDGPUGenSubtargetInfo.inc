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
namespace AMDGPU {
enum {
  Feature64BitPtr =  1ULL << 0,
  FeatureCFALUBug =  1ULL << 1,
  FeatureCaymanISA =  1ULL << 2,
  FeatureDumpCode =  1ULL << 3,
  FeatureEnableLoadStoreOpt =  1ULL << 4,
  FeatureEvergreen =  1ULL << 5,
  FeatureFP32Denormals =  1ULL << 6,
  FeatureFP64 =  1ULL << 7,
  FeatureFP64Denormals =  1ULL << 8,
  FeatureFetchLimit8 =  1ULL << 9,
  FeatureFetchLimit16 =  1ULL << 10,
  FeatureFlatAddressSpace =  1ULL << 11,
  FeatureIRStructurizer =  1ULL << 12,
  FeatureIfCvt =  1ULL << 13,
  FeatureLocalMemorySize0 =  1ULL << 14,
  FeatureLocalMemorySize32768 =  1ULL << 15,
  FeatureLocalMemorySize65536 =  1ULL << 16,
  FeatureNorthernIslands =  1ULL << 17,
  FeaturePromoteAlloca =  1ULL << 18,
  FeatureR600 =  1ULL << 19,
  FeatureR600ALUInst =  1ULL << 20,
  FeatureR700 =  1ULL << 21,
  FeatureSeaIslands =  1ULL << 22,
  FeatureSouthernIslands =  1ULL << 23,
  FeatureVertexCache =  1ULL << 24,
  FeatureWavefrontSize16 =  1ULL << 25,
  FeatureWavefrontSize32 =  1ULL << 26,
  FeatureWavefrontSize64 =  1ULL << 27
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[] = {
  { "64BitPtr", "Specify if 64-bit addressing should be used", AMDGPU::Feature64BitPtr, 0ULL },
  { "DumpCode", "Dump MachineInstrs in the CodeEmitter", AMDGPU::FeatureDumpCode, 0ULL },
  { "EVERGREEN", "EVERGREEN GPU generation", AMDGPU::FeatureEvergreen, AMDGPU::FeatureFetchLimit16 | AMDGPU::FeatureLocalMemorySize32768 },
  { "HasVertexCache", "Specify use of dedicated vertex cache", AMDGPU::FeatureVertexCache, 0ULL },
  { "NORTHERN_ISLANDS", "NORTHERN_ISLANDS GPU generation", AMDGPU::FeatureNorthernIslands, AMDGPU::FeatureFetchLimit16 | AMDGPU::FeatureWavefrontSize64 | AMDGPU::FeatureLocalMemorySize32768 },
  { "R600", "R600 GPU generation", AMDGPU::FeatureR600, AMDGPU::FeatureR600ALUInst | AMDGPU::FeatureFetchLimit8 | AMDGPU::FeatureLocalMemorySize0 },
  { "R600ALUInst", "Older version of ALU instructions encoding", AMDGPU::FeatureR600ALUInst, 0ULL },
  { "R700", "R700 GPU generation", AMDGPU::FeatureR700, AMDGPU::FeatureFetchLimit16 | AMDGPU::FeatureLocalMemorySize0 },
  { "SEA_ISLANDS", "SEA_ISLANDS GPU generation", AMDGPU::FeatureSeaIslands, AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64 | AMDGPU::FeatureLocalMemorySize65536 | AMDGPU::FeatureWavefrontSize64 | AMDGPU::FeatureFlatAddressSpace },
  { "SOUTHERN_ISLANDS", "SOUTHERN_ISLANDS GPU generation", AMDGPU::FeatureSouthernIslands, AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64 | AMDGPU::FeatureLocalMemorySize32768 | AMDGPU::FeatureWavefrontSize64 },
  { "caymanISA", "Use Cayman ISA", AMDGPU::FeatureCaymanISA, 0ULL },
  { "cfalubug", "GPU has CF_ALU bug", AMDGPU::FeatureCFALUBug, 0ULL },
  { "disable-ifcvt", "Disable the if conversion pass", AMDGPU::FeatureIfCvt, 0ULL },
  { "disable-irstructurizer", "Disable IR Structurizer", AMDGPU::FeatureIRStructurizer, 0ULL },
  { "fetch16", "Limit the maximum number of fetches in a clause to 16", AMDGPU::FeatureFetchLimit16, 0ULL },
  { "fetch8", "Limit the maximum number of fetches in a clause to 8", AMDGPU::FeatureFetchLimit8, 0ULL },
  { "flat-address-space", "Support flat address space", AMDGPU::FeatureFlatAddressSpace, 0ULL },
  { "fp32-denormals", "Enable single precision denormal handling", AMDGPU::FeatureFP32Denormals, 0ULL },
  { "fp64", "Enable double precision operations", AMDGPU::FeatureFP64, 0ULL },
  { "fp64-denormals", "Enable double precision denormal handling", AMDGPU::FeatureFP64Denormals, AMDGPU::FeatureFP64 },
  { "load-store-opt", "Enable SI load/store optimizer pass", AMDGPU::FeatureEnableLoadStoreOpt, 0ULL },
  { "localmemorysize0", "The size of local memory in bytes", AMDGPU::FeatureLocalMemorySize0, 0ULL },
  { "localmemorysize32768", "The size of local memory in bytes", AMDGPU::FeatureLocalMemorySize32768, 0ULL },
  { "localmemorysize65536", "The size of local memory in bytes", AMDGPU::FeatureLocalMemorySize65536, 0ULL },
  { "promote-alloca", "Enable promote alloca pass", AMDGPU::FeaturePromoteAlloca, 0ULL },
  { "wavefrontsize16", "The number of threads per wavefront", AMDGPU::FeatureWavefrontSize16, 0ULL },
  { "wavefrontsize32", "The number of threads per wavefront", AMDGPU::FeatureWavefrontSize32, 0ULL },
  { "wavefrontsize64", "The number of threads per wavefront", AMDGPU::FeatureWavefrontSize64, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[] = {
  { "", "Select the  processor", AMDGPU::FeatureR600 | AMDGPU::FeatureVertexCache, 0ULL },
  { "SI", "Select the SI processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "barts", "Select the barts processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureVertexCache | AMDGPU::FeatureCFALUBug, 0ULL },
  { "bonaire", "Select the bonaire processor", AMDGPU::FeatureSeaIslands, 0ULL },
  { "caicos", "Select the caicos processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureCFALUBug, 0ULL },
  { "cayman", "Select the cayman processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureFP64 | AMDGPU::FeatureCaymanISA, 0ULL },
  { "cedar", "Select the cedar processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize32 | AMDGPU::FeatureCFALUBug, 0ULL },
  { "cypress", "Select the cypress processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize64, 0ULL },
  { "hainan", "Select the hainan processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "hawaii", "Select the hawaii processor", AMDGPU::FeatureSeaIslands, 0ULL },
  { "juniper", "Select the juniper processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize64, 0ULL },
  { "kabini", "Select the kabini processor", AMDGPU::FeatureSeaIslands, 0ULL },
  { "kaveri", "Select the kaveri processor", AMDGPU::FeatureSeaIslands, 0ULL },
  { "mullins", "Select the mullins processor", AMDGPU::FeatureSeaIslands, 0ULL },
  { "oland", "Select the oland processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "pitcairn", "Select the pitcairn processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "r600", "Select the r600 processor", AMDGPU::FeatureR600 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize64, 0ULL },
  { "r630", "Select the r630 processor", AMDGPU::FeatureR600 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize32, 0ULL },
  { "redwood", "Select the redwood processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize64 | AMDGPU::FeatureCFALUBug, 0ULL },
  { "rs880", "Select the rs880 processor", AMDGPU::FeatureR600 | AMDGPU::FeatureWavefrontSize16, 0ULL },
  { "rv670", "Select the rv670 processor", AMDGPU::FeatureR600 | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize64, 0ULL },
  { "rv710", "Select the rv710 processor", AMDGPU::FeatureR700 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize32, 0ULL },
  { "rv730", "Select the rv730 processor", AMDGPU::FeatureR700 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize32, 0ULL },
  { "rv770", "Select the rv770 processor", AMDGPU::FeatureR700 | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache | AMDGPU::FeatureWavefrontSize64, 0ULL },
  { "sumo", "Select the sumo processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureWavefrontSize64 | AMDGPU::FeatureCFALUBug, 0ULL },
  { "tahiti", "Select the tahiti processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "turks", "Select the turks processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureVertexCache | AMDGPU::FeatureCFALUBug, 0ULL },
  { "verde", "Select the verde processor", AMDGPU::FeatureSouthernIslands, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "R600_VLIW5_Itin"
namespace R600_VLIW5_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned TRANS = 1 << 4;
  const unsigned ALU_NULL = 1 << 5;
}

// Functional units for "R600_VLIW4_Itin"
namespace R600_VLIW4_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned ALU_NULL = 1 << 4;
}

extern const llvm::InstrStage AMDGPUStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W | R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, R600_VLIW5_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, R600_VLIW5_ItinFU::ALU_X, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, R600_VLIW4_ItinFU::ALU_X | R600_VLIW4_ItinFU::ALU_Y | R600_VLIW4_ItinFU::ALU_Z | R600_VLIW4_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, R600_VLIW4_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned AMDGPUOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned AMDGPUForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary R600_VLIW5_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 AnyALU
  { 1, 2, 3, 0, 0 }, // 2 NullALU
  { 1, 3, 4, 0, 0 }, // 3 VecALU
  { 1, 4, 5, 0, 0 }, // 4 TransALU
  { 1, 5, 6, 0, 0 }, // 5 XALU
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary R600_VLIW4_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 6, 7, 0, 0 }, // 1 AnyALU
  { 1, 7, 8, 0, 0 }, // 2 NullALU
  { 1, 6, 7, 0, 0 }, // 3 VecALU
  { 1, 7, 8, 0, 0 }, // 4 TransALU
  { 0, 0, 0, 0, 0 }, // 5 XALU
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // AMDGPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // AMDGPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // AMDGPUReadAdvanceTable

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

static const llvm::MCSchedModel R600_VLIW5_ItinModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  R600_VLIW5_Itin};

static const llvm::MCSchedModel R600_VLIW4_ItinModel = {
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
  R600_VLIW4_Itin};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[] = {
  { "", (const void *)&R600_VLIW5_ItinModel },
  { "SI", (const void *)&NoSchedModel },
  { "barts", (const void *)&R600_VLIW5_ItinModel },
  { "bonaire", (const void *)&NoSchedModel },
  { "caicos", (const void *)&R600_VLIW5_ItinModel },
  { "cayman", (const void *)&R600_VLIW4_ItinModel },
  { "cedar", (const void *)&R600_VLIW5_ItinModel },
  { "cypress", (const void *)&R600_VLIW5_ItinModel },
  { "hainan", (const void *)&NoSchedModel },
  { "hawaii", (const void *)&NoSchedModel },
  { "juniper", (const void *)&R600_VLIW5_ItinModel },
  { "kabini", (const void *)&NoSchedModel },
  { "kaveri", (const void *)&NoSchedModel },
  { "mullins", (const void *)&NoSchedModel },
  { "oland", (const void *)&NoSchedModel },
  { "pitcairn", (const void *)&NoSchedModel },
  { "r600", (const void *)&R600_VLIW5_ItinModel },
  { "r630", (const void *)&R600_VLIW5_ItinModel },
  { "redwood", (const void *)&R600_VLIW5_ItinModel },
  { "rs880", (const void *)&R600_VLIW5_ItinModel },
  { "rv670", (const void *)&R600_VLIW5_ItinModel },
  { "rv710", (const void *)&R600_VLIW5_ItinModel },
  { "rv730", (const void *)&R600_VLIW5_ItinModel },
  { "rv770", (const void *)&R600_VLIW5_ItinModel },
  { "sumo", (const void *)&R600_VLIW5_ItinModel },
  { "tahiti", (const void *)&NoSchedModel },
  { "turks", (const void *)&R600_VLIW5_ItinModel },
  { "verde", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitAMDGPUMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AMDGPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & AMDGPU::Feature64BitPtr) != 0) Is64bit = true;
  if ((Bits & AMDGPU::FeatureCFALUBug) != 0) CFALUBug = true;
  if ((Bits & AMDGPU::FeatureCaymanISA) != 0) CaymanISA = true;
  if ((Bits & AMDGPU::FeatureDumpCode) != 0) DumpCode = true;
  if ((Bits & AMDGPU::FeatureEnableLoadStoreOpt) != 0) EnableLoadStoreOpt = true;
  if ((Bits & AMDGPU::FeatureEvergreen) != 0 && Gen < AMDGPUSubtarget::EVERGREEN) Gen = AMDGPUSubtarget::EVERGREEN;
  if ((Bits & AMDGPU::FeatureFP32Denormals) != 0) FP32Denormals = true;
  if ((Bits & AMDGPU::FeatureFP64) != 0) FP64 = true;
  if ((Bits & AMDGPU::FeatureFP64Denormals) != 0) FP64Denormals = true;
  if ((Bits & AMDGPU::FeatureFetchLimit8) != 0 && TexVTXClauseSize < 8) TexVTXClauseSize = 8;
  if ((Bits & AMDGPU::FeatureFetchLimit16) != 0 && TexVTXClauseSize < 16) TexVTXClauseSize = 16;
  if ((Bits & AMDGPU::FeatureFlatAddressSpace) != 0) FlatAddressSpace = true;
  if ((Bits & AMDGPU::FeatureIRStructurizer) != 0) EnableIRStructurizer = false;
  if ((Bits & AMDGPU::FeatureIfCvt) != 0) EnableIfCvt = false;
  if ((Bits & AMDGPU::FeatureLocalMemorySize0) != 0 && LocalMemorySize < 0) LocalMemorySize = 0;
  if ((Bits & AMDGPU::FeatureLocalMemorySize32768) != 0 && LocalMemorySize < 32768) LocalMemorySize = 32768;
  if ((Bits & AMDGPU::FeatureLocalMemorySize65536) != 0 && LocalMemorySize < 65536) LocalMemorySize = 65536;
  if ((Bits & AMDGPU::FeatureNorthernIslands) != 0 && Gen < AMDGPUSubtarget::NORTHERN_ISLANDS) Gen = AMDGPUSubtarget::NORTHERN_ISLANDS;
  if ((Bits & AMDGPU::FeaturePromoteAlloca) != 0) EnablePromoteAlloca = true;
  if ((Bits & AMDGPU::FeatureR600) != 0 && Gen < AMDGPUSubtarget::R600) Gen = AMDGPUSubtarget::R600;
  if ((Bits & AMDGPU::FeatureR600ALUInst) != 0) R600ALUInst = false;
  if ((Bits & AMDGPU::FeatureR700) != 0 && Gen < AMDGPUSubtarget::R700) Gen = AMDGPUSubtarget::R700;
  if ((Bits & AMDGPU::FeatureSeaIslands) != 0 && Gen < AMDGPUSubtarget::SEA_ISLANDS) Gen = AMDGPUSubtarget::SEA_ISLANDS;
  if ((Bits & AMDGPU::FeatureSouthernIslands) != 0 && Gen < AMDGPUSubtarget::SOUTHERN_ISLANDS) Gen = AMDGPUSubtarget::SOUTHERN_ISLANDS;
  if ((Bits & AMDGPU::FeatureVertexCache) != 0) HasVertexCache = true;
  if ((Bits & AMDGPU::FeatureWavefrontSize16) != 0 && WavefrontSize < 16) WavefrontSize = 16;
  if ((Bits & AMDGPU::FeatureWavefrontSize32) != 0 && WavefrontSize < 32) WavefrontSize = 32;
  if ((Bits & AMDGPU::FeatureWavefrontSize64) != 0 && WavefrontSize < 64) WavefrontSize = 64;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct AMDGPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit AMDGPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[];
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[];
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[];
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[];
extern const llvm::InstrStage AMDGPUStages[];
extern const unsigned AMDGPUOperandCycles[];
extern const unsigned AMDGPUForwardingPaths[];
AMDGPUGenSubtargetInfo::AMDGPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(AMDGPUFeatureKV, 28), makeArrayRef(AMDGPUSubTypeKV, 28), 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths);
}

unsigned AMDGPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // AMDGPUGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

