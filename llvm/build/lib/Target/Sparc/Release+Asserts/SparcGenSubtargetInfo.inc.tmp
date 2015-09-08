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
namespace Sparc {
enum {
  FeatureHardQuad =  1ULL << 0,
  FeatureV8Deprecated =  1ULL << 1,
  FeatureV9 =  1ULL << 2,
  FeatureVIS =  1ULL << 3,
  FeatureVIS2 =  1ULL << 4,
  FeatureVIS3 =  1ULL << 5,
  UsePopc =  1ULL << 6
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SparcFeatureKV[] = {
  { "deprecated-v8", "Enable deprecated V8 instructions in V9 mode", Sparc::FeatureV8Deprecated, 0ULL },
  { "hard-quad-float", "Enable quad-word floating point instructions", Sparc::FeatureHardQuad, 0ULL },
  { "popc", "Use the popc (population count) instruction", Sparc::UsePopc, 0ULL },
  { "v9", "Enable SPARC-V9 instructions", Sparc::FeatureV9, 0ULL },
  { "vis", "Enable UltraSPARC Visual Instruction Set extensions", Sparc::FeatureVIS, 0ULL },
  { "vis2", "Enable Visual Instruction Set extensions II", Sparc::FeatureVIS2, 0ULL },
  { "vis3", "Enable Visual Instruction Set extensions III", Sparc::FeatureVIS3, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SparcSubTypeKV[] = {
  { "f934", "Select the f934 processor", 0ULL, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "hypersparc", "Select the hypersparc processor", 0ULL, 0ULL },
  { "niagara", "Select the niagara processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::FeatureVIS | Sparc::FeatureVIS2, 0ULL },
  { "niagara2", "Select the niagara2 processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::UsePopc | Sparc::FeatureVIS | Sparc::FeatureVIS2, 0ULL },
  { "niagara3", "Select the niagara3 processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::UsePopc | Sparc::FeatureVIS | Sparc::FeatureVIS2, 0ULL },
  { "niagara4", "Select the niagara4 processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::UsePopc | Sparc::FeatureVIS | Sparc::FeatureVIS2 | Sparc::FeatureVIS3, 0ULL },
  { "sparclet", "Select the sparclet processor", 0ULL, 0ULL },
  { "sparclite", "Select the sparclite processor", 0ULL, 0ULL },
  { "sparclite86x", "Select the sparclite86x processor", 0ULL, 0ULL },
  { "supersparc", "Select the supersparc processor", 0ULL, 0ULL },
  { "tsc701", "Select the tsc701 processor", 0ULL, 0ULL },
  { "ultrasparc", "Select the ultrasparc processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::FeatureVIS, 0ULL },
  { "ultrasparc3", "Select the ultrasparc3 processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::FeatureVIS | Sparc::FeatureVIS2, 0ULL },
  { "v7", "Select the v7 processor", 0ULL, 0ULL },
  { "v8", "Select the v8 processor", 0ULL, 0ULL },
  { "v9", "Select the v9 processor", Sparc::FeatureV9, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SparcWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // SparcWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SparcWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // SparcWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SparcReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SparcReadAdvanceTable

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

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV SparcProcSchedKV[] = {
  { "f934", (const void *)&NoSchedModel },
  { "generic", (const void *)&NoSchedModel },
  { "hypersparc", (const void *)&NoSchedModel },
  { "niagara", (const void *)&NoSchedModel },
  { "niagara2", (const void *)&NoSchedModel },
  { "niagara3", (const void *)&NoSchedModel },
  { "niagara4", (const void *)&NoSchedModel },
  { "sparclet", (const void *)&NoSchedModel },
  { "sparclite", (const void *)&NoSchedModel },
  { "sparclite86x", (const void *)&NoSchedModel },
  { "supersparc", (const void *)&NoSchedModel },
  { "tsc701", (const void *)&NoSchedModel },
  { "ultrasparc", (const void *)&NoSchedModel },
  { "ultrasparc3", (const void *)&NoSchedModel },
  { "v7", (const void *)&NoSchedModel },
  { "v8", (const void *)&NoSchedModel },
  { "v9", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitSparcMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, SparcFeatureKV, SparcSubTypeKV, 
                      SparcProcSchedKV, SparcWriteProcResTable, SparcWriteLatencyTable, SparcReadAdvanceTable, 0, 0, 0);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SparcSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & Sparc::FeatureHardQuad) != 0) HasHardQuad = true;
  if ((Bits & Sparc::FeatureV8Deprecated) != 0) V8DeprecatedInsts = true;
  if ((Bits & Sparc::FeatureV9) != 0) IsV9 = true;
  if ((Bits & Sparc::FeatureVIS) != 0) IsVIS = true;
  if ((Bits & Sparc::FeatureVIS2) != 0) IsVIS2 = true;
  if ((Bits & Sparc::FeatureVIS3) != 0) IsVIS3 = true;
  if ((Bits & Sparc::UsePopc) != 0) UsePopc = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct SparcGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SparcGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV SparcFeatureKV[];
extern const llvm::SubtargetFeatureKV SparcSubTypeKV[];
extern const llvm::SubtargetInfoKV SparcProcSchedKV[];
extern const llvm::MCWriteProcResEntry SparcWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SparcWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SparcReadAdvanceTable[];
SparcGenSubtargetInfo::SparcGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(SparcFeatureKV, 7), makeArrayRef(SparcSubTypeKV, 17), 
                      SparcProcSchedKV, SparcWriteProcResTable, SparcWriteLatencyTable, SparcReadAdvanceTable, 
                      0, 0, 0);
}

unsigned SparcGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SparcGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

