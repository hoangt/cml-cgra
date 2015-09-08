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
namespace Hexagon {
enum {
  ArchV2 =  1ULL << 0,
  ArchV3 =  1ULL << 1,
  ArchV4 =  1ULL << 2,
  ArchV5 =  1ULL << 3
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "v2", "Hexagon v2", Hexagon::ArchV2, 0ULL },
  { "v3", "Hexagon v3", Hexagon::ArchV3, 0ULL },
  { "v4", "Hexagon v4", Hexagon::ArchV4, 0ULL },
  { "v5", "Hexagon v5", Hexagon::ArchV5, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv4", "Select the hexagonv4 processor", Hexagon::ArchV2 | Hexagon::ArchV3 | Hexagon::ArchV4, 0ULL },
  { "hexagonv5", "Select the hexagonv5 processor", Hexagon::ArchV2 | Hexagon::ArchV3 | Hexagon::ArchV4 | Hexagon::ArchV5, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
}

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 ALU32_3op_tc_1_SLOT0123
  { 1, 2, 3, 0, 0 }, // 2 ALU64_tc_1_SLOT23
  { 1, 2, 3, 0, 0 }, // 3 S_2op_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 4 ALU32_2op_tc_1_SLOT0123
  { 1, 2, 3, 0, 0 }, // 5 M_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 6 M_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 7 PSEUDO
  { 1, 3, 4, 0, 0 }, // 8 ST_tc_st_SLOT01
  { 1, 2, 3, 0, 0 }, // 9 S_3op_tc_1_SLOT23
  { 1, 4, 5, 0, 0 }, // 10 ST_tc_3stall_SLOT0
  { 1, 1, 2, 0, 0 }, // 11 ALU32_2op_tc_2early_SLOT0123
  { 1, 2, 3, 0, 0 }, // 12 J_tc_2early_SLOT23
  { 1, 5, 6, 0, 0 }, // 13 J_tc_2early_SLOT2
  { 1, 4, 5, 0, 0 }, // 14 NCJ_tc_3or4stall_SLOT0
  { 1, 3, 4, 0, 0 }, // 15 LD_tc_ld_SLOT01
  { 1, 4, 5, 0, 0 }, // 16 LD_tc_ld_SLOT0
  { 1, 6, 7, 0, 0 }, // 17 J_tc_2early_SLOT0123
  { 1, 2, 3, 0, 0 }, // 18 ALU64_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 19 EXTENDER_tc_1_SLOT0123
  { 1, 7, 8, 0, 0 }, // 20 CR_tc_2early_SLOT3
  { 1, 4, 5, 0, 0 }, // 21 V4LDST_tc_st_SLOT0
  { 1, 4, 5, 0, 0 }, // 22 ST_tc_st_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

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

static const llvm::MCSchedModel HexagonModelV4 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 }
};
#undef DBGFIELD
static inline void InitHexagonMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & Hexagon::ArchV2) != 0 && HexagonArchVersion < V2) HexagonArchVersion = V2;
  if ((Bits & Hexagon::ArchV3) != 0 && HexagonArchVersion < V3) HexagonArchVersion = V3;
  if ((Bits & Hexagon::ArchV4) != 0 && HexagonArchVersion < V4) HexagonArchVersion = V4;
  if ((Bits & Hexagon::ArchV5) != 0 && HexagonArchVersion < V5) HexagonArchVersion = V5;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 4), makeArrayRef(HexagonSubTypeKV, 2), 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

