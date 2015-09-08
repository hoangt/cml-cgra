/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    ADC16mi	= 20,
    ADC16mm	= 21,
    ADC16mr	= 22,
    ADC16ri	= 23,
    ADC16rm	= 24,
    ADC16rr	= 25,
    ADC8mi	= 26,
    ADC8mm	= 27,
    ADC8mr	= 28,
    ADC8ri	= 29,
    ADC8rm	= 30,
    ADC8rr	= 31,
    ADD16mi	= 32,
    ADD16mm	= 33,
    ADD16mr	= 34,
    ADD16ri	= 35,
    ADD16rm	= 36,
    ADD16rm_POST	= 37,
    ADD16rr	= 38,
    ADD8mi	= 39,
    ADD8mm	= 40,
    ADD8mr	= 41,
    ADD8ri	= 42,
    ADD8rm	= 43,
    ADD8rm_POST	= 44,
    ADD8rr	= 45,
    ADJCALLSTACKDOWN	= 46,
    ADJCALLSTACKUP	= 47,
    AND16mi	= 48,
    AND16mm	= 49,
    AND16mr	= 50,
    AND16ri	= 51,
    AND16rm	= 52,
    AND16rm_POST	= 53,
    AND16rr	= 54,
    AND8mi	= 55,
    AND8mm	= 56,
    AND8mr	= 57,
    AND8ri	= 58,
    AND8rm	= 59,
    AND8rm_POST	= 60,
    AND8rr	= 61,
    BIC16mm	= 62,
    BIC16mr	= 63,
    BIC16rm	= 64,
    BIC16rr	= 65,
    BIC8mm	= 66,
    BIC8mr	= 67,
    BIC8rm	= 68,
    BIC8rr	= 69,
    BIT16mi	= 70,
    BIT16mm	= 71,
    BIT16mr	= 72,
    BIT16ri	= 73,
    BIT16rm	= 74,
    BIT16rr	= 75,
    BIT8mi	= 76,
    BIT8mm	= 77,
    BIT8mr	= 78,
    BIT8ri	= 79,
    BIT8rm	= 80,
    BIT8rr	= 81,
    Bi	= 82,
    Bm	= 83,
    Br	= 84,
    CALLi	= 85,
    CALLm	= 86,
    CALLr	= 87,
    CMP16mi	= 88,
    CMP16mr	= 89,
    CMP16ri	= 90,
    CMP16rm	= 91,
    CMP16rr	= 92,
    CMP8mi	= 93,
    CMP8mr	= 94,
    CMP8ri	= 95,
    CMP8rm	= 96,
    CMP8rr	= 97,
    JCC	= 98,
    JMP	= 99,
    MOV16mi	= 100,
    MOV16mm	= 101,
    MOV16mr	= 102,
    MOV16ri	= 103,
    MOV16rm	= 104,
    MOV16rm_POST	= 105,
    MOV16rr	= 106,
    MOV8mi	= 107,
    MOV8mm	= 108,
    MOV8mr	= 109,
    MOV8ri	= 110,
    MOV8rm	= 111,
    MOV8rm_POST	= 112,
    MOV8rr	= 113,
    MOVZX16rm8	= 114,
    MOVZX16rr8	= 115,
    NOP	= 116,
    OR16mi	= 117,
    OR16mm	= 118,
    OR16mr	= 119,
    OR16ri	= 120,
    OR16rm	= 121,
    OR16rm_POST	= 122,
    OR16rr	= 123,
    OR8mi	= 124,
    OR8mm	= 125,
    OR8mr	= 126,
    OR8ri	= 127,
    OR8rm	= 128,
    OR8rm_POST	= 129,
    OR8rr	= 130,
    POP16r	= 131,
    PUSH16r	= 132,
    RET	= 133,
    RETI	= 134,
    SAR16r1	= 135,
    SAR16r1c	= 136,
    SAR8r1	= 137,
    SAR8r1c	= 138,
    SBC16mi	= 139,
    SBC16mm	= 140,
    SBC16mr	= 141,
    SBC16ri	= 142,
    SBC16rm	= 143,
    SBC16rr	= 144,
    SBC8mi	= 145,
    SBC8mm	= 146,
    SBC8mr	= 147,
    SBC8ri	= 148,
    SBC8rm	= 149,
    SBC8rr	= 150,
    SEXT16r	= 151,
    SHL16r1	= 152,
    SHL8r1	= 153,
    SUB16mi	= 154,
    SUB16mm	= 155,
    SUB16mr	= 156,
    SUB16ri	= 157,
    SUB16rm	= 158,
    SUB16rm_POST	= 159,
    SUB16rr	= 160,
    SUB8mi	= 161,
    SUB8mm	= 162,
    SUB8mr	= 163,
    SUB8ri	= 164,
    SUB8rm	= 165,
    SUB8rm_POST	= 166,
    SUB8rr	= 167,
    SWPB16r	= 168,
    Select16	= 169,
    Select8	= 170,
    Shl16	= 171,
    Shl8	= 172,
    Sra16	= 173,
    Sra8	= 174,
    Srl16	= 175,
    Srl8	= 176,
    XOR16mi	= 177,
    XOR16mm	= 178,
    XOR16mr	= 179,
    XOR16ri	= 180,
    XOR16rm	= 181,
    XOR16rm_POST	= 182,
    XOR16rr	= 183,
    XOR8mi	= 184,
    XOR8mm	= 185,
    XOR8mr	= 186,
    XOR8ri	= 187,
    XOR8rm	= 188,
    XOR8rm_POST	= 189,
    XOR8rr	= 190,
    ZEXT16r	= 191,
    INSTRUCTION_LIST_END = 192
  };
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
}
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { MSP430::SR, 0 };
static const uint16_t ImplicitList2[] = { MSP430::SP, 0 };
static const uint16_t ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const uint16_t ImplicitList4[] = { MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo22[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo23[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4,0,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6,0,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9,0,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #20 = ADC16mi
  { 21,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #21 = ADC16mm
  { 22,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #22 = ADC16mr
  { 23,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #23 = ADC16ri
  { 24,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #24 = ADC16rm
  { 25,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #25 = ADC16rr
  { 26,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #26 = ADC8mi
  { 27,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #27 = ADC8mm
  { 28,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #28 = ADC8mr
  { 29,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #29 = ADC8ri
  { 30,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #30 = ADC8rm
  { 31,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #31 = ADC8rr
  { 32,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #32 = ADD16mi
  { 33,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #33 = ADD16mm
  { 34,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #34 = ADD16mr
  { 35,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #35 = ADD16ri
  { 36,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #36 = ADD16rm
  { 37,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #37 = ADD16rm_POST
  { 38,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #38 = ADD16rr
  { 39,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #39 = ADD8mi
  { 40,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #40 = ADD8mm
  { 41,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #41 = ADD8mr
  { 42,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #42 = ADD8ri
  { 43,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #43 = ADD8rm
  { 44,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #44 = ADD8rm_POST
  { 45,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #45 = ADD8rr
  { 46,	1,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #46 = ADJCALLSTACKDOWN
  { 47,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8,0,nullptr },  // Inst #47 = ADJCALLSTACKUP
  { 48,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #48 = AND16mi
  { 49,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #49 = AND16mm
  { 50,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #50 = AND16mr
  { 51,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #51 = AND16ri
  { 52,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #52 = AND16rm
  { 53,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #53 = AND16rm_POST
  { 54,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #54 = AND16rr
  { 55,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #55 = AND8mi
  { 56,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #56 = AND8mm
  { 57,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #57 = AND8mr
  { 58,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #58 = AND8ri
  { 59,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #59 = AND8rm
  { 60,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #60 = AND8rm_POST
  { 61,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #61 = AND8rr
  { 62,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #62 = BIC16mm
  { 63,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #63 = BIC16mr
  { 64,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #64 = BIC16rm
  { 65,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #65 = BIC16rr
  { 66,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #66 = BIC8mm
  { 67,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #67 = BIC8mr
  { 68,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #68 = BIC8rm
  { 69,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #69 = BIC8rr
  { 70,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #70 = BIT16mi
  { 71,	4,	0,	0,	0,	0|(1<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #71 = BIT16mm
  { 72,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #72 = BIT16mr
  { 73,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #73 = BIT16ri
  { 74,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #74 = BIT16rm
  { 75,	2,	0,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #75 = BIT16rr
  { 76,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #76 = BIT8mi
  { 77,	4,	0,	0,	0,	0|(1<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #77 = BIT8mm
  { 78,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #78 = BIT8mr
  { 79,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #79 = BIT8ri
  { 80,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #80 = BIT8rm
  { 81,	2,	0,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo28,0,nullptr },  // Inst #81 = BIT8rr
  { 82,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #82 = Bi
  { 83,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #83 = Bm
  { 84,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #84 = Br
  { 85,	1,	0,	0,	0,	0|(1<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo2,0,nullptr },  // Inst #85 = CALLi
  { 86,	2,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo29,0,nullptr },  // Inst #86 = CALLm
  { 87,	1,	0,	0,	0,	0|(1<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo30,0,nullptr },  // Inst #87 = CALLr
  { 88,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #88 = CMP16mi
  { 89,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #89 = CMP16mr
  { 90,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #90 = CMP16ri
  { 91,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #91 = CMP16rm
  { 92,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #92 = CMP16rr
  { 93,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #93 = CMP8mi
  { 94,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #94 = CMP8mr
  { 95,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #95 = CMP8ri
  { 96,	3,	0,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #96 = CMP8rm
  { 97,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo28,0,nullptr },  // Inst #97 = CMP8rr
  { 98,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7,0,nullptr },  // Inst #98 = JCC
  { 99,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #99 = JMP
  { 100,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #100 = MOV16mi
  { 101,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #101 = MOV16mm
  { 102,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #102 = MOV16mr
  { 103,	2,	1,	0,	0,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #103 = MOV16ri
  { 104,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #104 = MOV16rm
  { 105,	3,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #105 = MOV16rm_POST
  { 106,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #106 = MOV16rr
  { 107,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #107 = MOV8mi
  { 108,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #108 = MOV8mm
  { 109,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #109 = MOV8mr
  { 110,	2,	1,	0,	0,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #110 = MOV8ri
  { 111,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #111 = MOV8rm
  { 112,	3,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #112 = MOV8rm_POST
  { 113,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #113 = MOV8rr
  { 114,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #114 = MOVZX16rm8
  { 115,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #115 = MOVZX16rr8
  { 116,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #116 = NOP
  { 117,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #117 = OR16mi
  { 118,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #118 = OR16mm
  { 119,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #119 = OR16mr
  { 120,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #120 = OR16ri
  { 121,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #121 = OR16rm
  { 122,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #122 = OR16rm_POST
  { 123,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #123 = OR16rr
  { 124,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #124 = OR8mi
  { 125,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #125 = OR8mm
  { 126,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #126 = OR8mr
  { 127,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #127 = OR8ri
  { 128,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #128 = OR8rm
  { 129,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #129 = OR8rm_POST
  { 130,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #130 = OR8rr
  { 131,	1,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo30,0,nullptr },  // Inst #131 = POP16r
  { 132,	1,	0,	0,	0,	0|(1<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo30,0,nullptr },  // Inst #132 = PUSH16r
  { 133,	0,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #133 = RET
  { 134,	0,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #134 = RETI
  { 135,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #135 = SAR16r1
  { 136,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #136 = SAR16r1c
  { 137,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #137 = SAR8r1
  { 138,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #138 = SAR8r1c
  { 139,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #139 = SBC16mi
  { 140,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #140 = SBC16mm
  { 141,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #141 = SBC16mr
  { 142,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #142 = SBC16ri
  { 143,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #143 = SBC16rm
  { 144,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #144 = SBC16rr
  { 145,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #145 = SBC8mi
  { 146,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #146 = SBC8mm
  { 147,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #147 = SBC8mr
  { 148,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #148 = SBC8ri
  { 149,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #149 = SBC8rm
  { 150,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #150 = SBC8rr
  { 151,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #151 = SEXT16r
  { 152,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #152 = SHL16r1
  { 153,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #153 = SHL8r1
  { 154,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #154 = SUB16mi
  { 155,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #155 = SUB16mm
  { 156,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #156 = SUB16mr
  { 157,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #157 = SUB16ri
  { 158,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #158 = SUB16rm
  { 159,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #159 = SUB16rm_POST
  { 160,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #160 = SUB16rr
  { 161,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #161 = SUB8mi
  { 162,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #162 = SUB8mm
  { 163,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #163 = SUB8mr
  { 164,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #164 = SUB8ri
  { 165,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #165 = SUB8rm
  { 166,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #166 = SUB8rm_POST
  { 167,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #167 = SUB8rr
  { 168,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #168 = SWPB16r
  { 169,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #169 = Select16
  { 170,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #170 = Select8
  { 171,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #171 = Shl16
  { 172,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #172 = Shl8
  { 173,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #173 = Sra16
  { 174,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #174 = Sra8
  { 175,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #175 = Srl16
  { 176,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #176 = Srl8
  { 177,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #177 = XOR16mi
  { 178,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #178 = XOR16mm
  { 179,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #179 = XOR16mr
  { 180,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #180 = XOR16ri
  { 181,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #181 = XOR16rm
  { 182,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #182 = XOR16rm_POST
  { 183,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #183 = XOR16rr
  { 184,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #184 = XOR8mi
  { 185,	4,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #185 = XOR8mm
  { 186,	3,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #186 = XOR8mr
  { 187,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #187 = XOR8ri
  { 188,	4,	1,	0,	0,	0|(1<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #188 = XOR8rm
  { 189,	4,	2,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #189 = XOR8rm_POST
  { 190,	3,	1,	0,	0,	0|(1<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #190 = XOR8rr
  { 191,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #191 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'S', 'H', 'L', '1', '6', 'r', '1', 0,
  /* 8 */ 'S', 'A', 'R', '1', '6', 'r', '1', 0,
  /* 16 */ 'S', 'H', 'L', '8', 'r', '1', 0,
  /* 23 */ 'S', 'A', 'R', '8', 'r', '1', 0,
  /* 30 */ 'S', 'r', 'a', '1', '6', 0,
  /* 36 */ 'S', 'h', 'l', '1', '6', 0,
  /* 42 */ 'S', 'r', 'l', '1', '6', 0,
  /* 48 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 57 */ 'S', 'r', 'a', '8', 0,
  /* 62 */ 'S', 'h', 'l', '8', 0,
  /* 67 */ 'S', 'r', 'l', '8', 0,
  /* 72 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 83 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 94 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 102 */ 'J', 'C', 'C', 0,
  /* 106 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 119 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 136 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 149 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 156 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 166 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 179 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 194 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 208 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 222 */ 'P', 'H', 'I', 0,
  /* 226 */ 'R', 'E', 'T', 'I', 0,
  /* 231 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 240 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 249 */ 'K', 'I', 'L', 'L', 0,
  /* 254 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 264 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 280 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 297 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 306 */ 'J', 'M', 'P', 0,
  /* 310 */ 'N', 'O', 'P', 0,
  /* 314 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 329 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 346 */ 'R', 'E', 'T', 0,
  /* 350 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 361 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 376 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 389 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 402 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 415 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 428 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 441 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 453 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 465 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 477 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 489 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 501 */ 'C', 'O', 'P', 'Y', 0,
  /* 506 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 515 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 523 */ 'B', 'i', 0,
  /* 526 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 532 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 540 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 548 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 556 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 564 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 572 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 580 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 588 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 596 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 604 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 611 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 618 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 625 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 632 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 639 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 646 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 653 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 660 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 667 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 675 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 683 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 691 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 699 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 707 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 715 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 723 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 731 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 739 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 746 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 753 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 760 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 767 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 774 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 781 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 788 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 795 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 802 */ 'B', 'm', 0,
  /* 805 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 811 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 819 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 827 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 835 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 843 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 851 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 859 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 867 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 875 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 883 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 890 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 897 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 904 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 911 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 918 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 925 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 932 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 939 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 946 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 954 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 962 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 970 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 978 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 986 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 994 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 1002 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 1010 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 1018 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 1026 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 1033 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 1040 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 1047 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 1054 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 1061 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 1068 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 1075 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 1082 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 1089 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 1096 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 1104 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 1112 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 1119 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1127 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1135 */ 'B', 'r', 0,
  /* 1138 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 1144 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 1152 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 1160 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 1168 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 1176 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 1184 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 1192 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 1200 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 1208 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 1216 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 1224 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 1231 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 1238 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 1245 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 1252 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 1259 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 1266 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 1273 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 1280 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 1287 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 1294 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 1302 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 1310 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 1318 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 1326 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 1334 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 1342 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 1350 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 1358 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 1366 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 1374 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 1381 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 1388 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 1395 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 1402 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 1409 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 1416 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 1423 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 1430 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 1437 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    222U, 254U, 264U, 240U, 231U, 249U, 179U, 194U, 
    166U, 208U, 329U, 156U, 136U, 501U, 149U, 361U, 
    106U, 297U, 350U, 119U, 548U, 827U, 1160U, 683U, 
    962U, 1310U, 618U, 897U, 1238U, 753U, 1040U, 1388U, 
    556U, 843U, 1176U, 691U, 978U, 389U, 1326U, 625U, 
    911U, 1252U, 760U, 1054U, 453U, 1402U, 280U, 314U, 
    564U, 851U, 1184U, 699U, 986U, 402U, 1334U, 632U, 
    918U, 1259U, 767U, 1061U, 465U, 1409U, 835U, 1168U, 
    970U, 1318U, 904U, 1245U, 1047U, 1395U, 588U, 867U, 
    1208U, 723U, 1010U, 1358U, 653U, 932U, 1280U, 788U, 
    1082U, 1430U, 523U, 802U, 1135U, 526U, 805U, 1138U, 
    572U, 1192U, 707U, 994U, 1342U, 639U, 1266U, 774U, 
    1068U, 1416U, 102U, 306U, 596U, 875U, 1216U, 731U, 
    1018U, 428U, 1366U, 660U, 939U, 1287U, 795U, 1089U, 
    489U, 1437U, 72U, 83U, 310U, 581U, 860U, 1201U, 
    716U, 1003U, 416U, 1351U, 647U, 926U, 1274U, 782U, 
    1076U, 478U, 1424U, 1112U, 1104U, 346U, 226U, 8U, 
    506U, 23U, 515U, 540U, 819U, 1152U, 675U, 954U, 
    1302U, 611U, 890U, 1231U, 746U, 1033U, 1381U, 1119U, 
    0U, 16U, 532U, 811U, 1144U, 667U, 946U, 376U, 
    1294U, 604U, 883U, 1224U, 739U, 1026U, 441U, 1374U, 
    1096U, 48U, 94U, 36U, 62U, 30U, 57U, 42U, 
    67U, 580U, 859U, 1200U, 715U, 1002U, 415U, 1350U, 
    646U, 925U, 1273U, 781U, 1075U, 477U, 1423U, 1127U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 192);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int SO = -1, int DO = -1);
  virtual ~MSP430GenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 192);
}
MSP430GenInstrInfo::~MSP430GenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace MSP430 {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace MSP430
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace MSP430
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace MSP430 {
namespace OpTypes { 
enum OperandType {
  cc = 0,
  f32imm = 1,
  f64imm = 2,
  i16imm = 3,
  i1imm = 4,
  i32imm = 5,
  i64imm = 6,
  i8imm = 7,
  jmptarget = 8,
  memdst = 9,
  memsrc = 10,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace MSP430
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
