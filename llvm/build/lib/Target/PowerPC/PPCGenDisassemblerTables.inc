/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * PPC Disassembler                                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 167, 7, 0, // Opcode: TDI
/* 11 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 184, 7, 1, // Opcode: TWI
/* 19 */      MCD::OPC_FilterValue, 4, 155, 5, // Skip to: 1458
/* 23 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 26 */      MCD::OPC_FilterValue, 0, 163, 0, // Skip to: 193
/* 30 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 33 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 41
/* 37 */      MCD::OPC_Decode, 192, 7, 2, // Opcode: VADDUBM
/* 41 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 194, 7, 2, // Opcode: VADDUHM
/* 49 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 196, 7, 2, // Opcode: VADDUWM
/* 57 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 65
/* 61 */      MCD::OPC_Decode, 187, 7, 2, // Opcode: VADDCUW
/* 65 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 193, 7, 2, // Opcode: VADDUBS
/* 73 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 195, 7, 2, // Opcode: VADDUHS
/* 81 */      MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 89
/* 85 */      MCD::OPC_Decode, 197, 7, 2, // Opcode: VADDUWS
/* 89 */      MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 97
/* 93 */      MCD::OPC_Decode, 189, 7, 2, // Opcode: VADDSBS
/* 97 */      MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 105
/* 101 */     MCD::OPC_Decode, 190, 7, 2, // Opcode: VADDSHS
/* 105 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 113
/* 109 */     MCD::OPC_Decode, 191, 7, 2, // Opcode: VADDSWS
/* 113 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 121
/* 117 */     MCD::OPC_Decode, 200, 8, 2, // Opcode: VSUBUBM
/* 121 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 129
/* 125 */     MCD::OPC_Decode, 202, 8, 2, // Opcode: VSUBUHM
/* 129 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 137
/* 133 */     MCD::OPC_Decode, 204, 8, 2, // Opcode: VSUBUWM
/* 137 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 195, 8, 2, // Opcode: VSUBCUW
/* 145 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 153
/* 149 */     MCD::OPC_Decode, 201, 8, 2, // Opcode: VSUBUBS
/* 153 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 161
/* 157 */     MCD::OPC_Decode, 203, 8, 2, // Opcode: VSUBUHS
/* 161 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 169
/* 165 */     MCD::OPC_Decode, 205, 8, 2, // Opcode: VSUBUWS
/* 169 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 177
/* 173 */     MCD::OPC_Decode, 197, 8, 2, // Opcode: VSUBSBS
/* 177 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 185
/* 181 */     MCD::OPC_Decode, 198, 8, 2, // Opcode: VSUBSHS
/* 185 */     MCD::OPC_FilterValue, 30, 238, 35, // Skip to: 9387
/* 189 */     MCD::OPC_Decode, 199, 8, 2, // Opcode: VSUBSWS
/* 193 */     MCD::OPC_FilterValue, 2, 147, 0, // Skip to: 344
/* 197 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 200 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 247, 7, 2, // Opcode: VMAXUB
/* 208 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 248, 7, 2, // Opcode: VMAXUH
/* 216 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 249, 7, 2, // Opcode: VMAXUW
/* 224 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 244, 7, 2, // Opcode: VMAXSB
/* 232 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 245, 7, 2, // Opcode: VMAXSH
/* 240 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 246, 7, 2, // Opcode: VMAXSW
/* 248 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 256
/* 252 */     MCD::OPC_Decode, 128, 8, 2, // Opcode: VMINUB
/* 256 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 264
/* 260 */     MCD::OPC_Decode, 129, 8, 2, // Opcode: VMINUH
/* 264 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 130, 8, 2, // Opcode: VMINUW
/* 272 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 280
/* 276 */     MCD::OPC_Decode, 253, 7, 2, // Opcode: VMINSB
/* 280 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 254, 7, 2, // Opcode: VMINSH
/* 288 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 296
/* 292 */     MCD::OPC_Decode, 255, 7, 2, // Opcode: VMINSW
/* 296 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 304
/* 300 */     MCD::OPC_Decode, 203, 7, 2, // Opcode: VAVGUB
/* 304 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 312
/* 308 */     MCD::OPC_Decode, 204, 7, 2, // Opcode: VAVGUH
/* 312 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 320
/* 316 */     MCD::OPC_Decode, 205, 7, 2, // Opcode: VAVGUW
/* 320 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 328
/* 324 */     MCD::OPC_Decode, 200, 7, 2, // Opcode: VAVGSB
/* 328 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 336
/* 332 */     MCD::OPC_Decode, 201, 7, 2, // Opcode: VAVGSH
/* 336 */     MCD::OPC_FilterValue, 22, 87, 35, // Skip to: 9387
/* 340 */     MCD::OPC_Decode, 202, 7, 2, // Opcode: VAVGSW
/* 344 */     MCD::OPC_FilterValue, 4, 183, 0, // Skip to: 531
/* 348 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 351 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 359
/* 355 */     MCD::OPC_Decode, 170, 8, 2, // Opcode: VRLB
/* 359 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 367
/* 363 */     MCD::OPC_Decode, 171, 8, 2, // Opcode: VRLH
/* 367 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 375
/* 371 */     MCD::OPC_Decode, 172, 8, 2, // Opcode: VRLW
/* 375 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 383
/* 379 */     MCD::OPC_Decode, 176, 8, 2, // Opcode: VSLB
/* 383 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 178, 8, 2, // Opcode: VSLH
/* 391 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 399
/* 395 */     MCD::OPC_Decode, 180, 8, 2, // Opcode: VSLW
/* 399 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 407
/* 403 */     MCD::OPC_Decode, 175, 8, 2, // Opcode: VSL
/* 407 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 415
/* 411 */     MCD::OPC_Decode, 191, 8, 2, // Opcode: VSRB
/* 415 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 423
/* 419 */     MCD::OPC_Decode, 192, 8, 2, // Opcode: VSRH
/* 423 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 431
/* 427 */     MCD::OPC_Decode, 194, 8, 2, // Opcode: VSRW
/* 431 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 439
/* 435 */     MCD::OPC_Decode, 187, 8, 2, // Opcode: VSR
/* 439 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 447
/* 443 */     MCD::OPC_Decode, 188, 8, 2, // Opcode: VSRAB
/* 447 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 189, 8, 2, // Opcode: VSRAH
/* 455 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 190, 8, 2, // Opcode: VSRAW
/* 463 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 471
/* 467 */     MCD::OPC_Decode, 198, 7, 2, // Opcode: VAND
/* 471 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 479
/* 475 */     MCD::OPC_Decode, 199, 7, 2, // Opcode: VANDC
/* 479 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 487
/* 483 */     MCD::OPC_Decode, 154, 8, 2, // Opcode: VOR
/* 487 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 495
/* 491 */     MCD::OPC_Decode, 217, 8, 2, // Opcode: VXOR
/* 495 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 503
/* 499 */     MCD::OPC_Decode, 153, 8, 2, // Opcode: VNOR
/* 503 */     MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 517
/* 507 */     MCD::OPC_CheckField, 11, 10, 0, 170, 34, // Skip to: 9387
/* 513 */     MCD::OPC_Decode, 179, 5, 3, // Opcode: MFVSCR
/* 517 */     MCD::OPC_FilterValue, 25, 162, 34, // Skip to: 9387
/* 521 */     MCD::OPC_CheckField, 16, 10, 0, 156, 34, // Skip to: 9387
/* 527 */     MCD::OPC_Decode, 202, 5, 4, // Opcode: MTVSCR
/* 531 */     MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 746
/* 535 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 538 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 546
/* 542 */     MCD::OPC_Decode, 214, 7, 2, // Opcode: VCMPEQUB
/* 546 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 554
/* 550 */     MCD::OPC_Decode, 216, 7, 2, // Opcode: VCMPEQUH
/* 554 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 218, 7, 2, // Opcode: VCMPEQUW
/* 562 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 570
/* 566 */     MCD::OPC_Decode, 212, 7, 2, // Opcode: VCMPEQFP
/* 570 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 578
/* 574 */     MCD::OPC_Decode, 220, 7, 2, // Opcode: VCMPGEFP
/* 578 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 230, 7, 2, // Opcode: VCMPGTUB
/* 586 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 594
/* 590 */     MCD::OPC_Decode, 232, 7, 2, // Opcode: VCMPGTUH
/* 594 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 234, 7, 2, // Opcode: VCMPGTUW
/* 602 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 222, 7, 2, // Opcode: VCMPGTFP
/* 610 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 618
/* 614 */     MCD::OPC_Decode, 224, 7, 2, // Opcode: VCMPGTSB
/* 618 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 626
/* 622 */     MCD::OPC_Decode, 226, 7, 2, // Opcode: VCMPGTSH
/* 626 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 228, 7, 2, // Opcode: VCMPGTSW
/* 634 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 210, 7, 2, // Opcode: VCMPBFP
/* 642 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 215, 7, 2, // Opcode: VCMPEQUBo
/* 650 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 217, 7, 2, // Opcode: VCMPEQUHo
/* 658 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 219, 7, 2, // Opcode: VCMPEQUWo
/* 666 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 674
/* 670 */     MCD::OPC_Decode, 213, 7, 2, // Opcode: VCMPEQFPo
/* 674 */     MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 682
/* 678 */     MCD::OPC_Decode, 221, 7, 2, // Opcode: VCMPGEFPo
/* 682 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 690
/* 686 */     MCD::OPC_Decode, 231, 7, 2, // Opcode: VCMPGTUBo
/* 690 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 698
/* 694 */     MCD::OPC_Decode, 233, 7, 2, // Opcode: VCMPGTUHo
/* 698 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 706
/* 702 */     MCD::OPC_Decode, 235, 7, 2, // Opcode: VCMPGTUWo
/* 706 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 714
/* 710 */     MCD::OPC_Decode, 223, 7, 2, // Opcode: VCMPGTFPo
/* 714 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 722
/* 718 */     MCD::OPC_Decode, 225, 7, 2, // Opcode: VCMPGTSBo
/* 722 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 730
/* 726 */     MCD::OPC_Decode, 227, 7, 2, // Opcode: VCMPGTSHo
/* 730 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 738
/* 734 */     MCD::OPC_Decode, 229, 7, 2, // Opcode: VCMPGTSWo
/* 738 */     MCD::OPC_FilterValue, 31, 197, 33, // Skip to: 9387
/* 742 */     MCD::OPC_Decode, 211, 7, 2, // Opcode: VCMPBFPo
/* 746 */     MCD::OPC_FilterValue, 8, 107, 0, // Skip to: 857
/* 750 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 753 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 761
/* 757 */     MCD::OPC_Decode, 150, 8, 2, // Opcode: VMULOUB
/* 761 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 769
/* 765 */     MCD::OPC_Decode, 151, 8, 2, // Opcode: VMULOUH
/* 769 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 777
/* 773 */     MCD::OPC_Decode, 148, 8, 2, // Opcode: VMULOSB
/* 777 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 785
/* 781 */     MCD::OPC_Decode, 149, 8, 2, // Opcode: VMULOSH
/* 785 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 793
/* 789 */     MCD::OPC_Decode, 146, 8, 2, // Opcode: VMULEUB
/* 793 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 801
/* 797 */     MCD::OPC_Decode, 147, 8, 2, // Opcode: VMULEUH
/* 801 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 809
/* 805 */     MCD::OPC_Decode, 144, 8, 2, // Opcode: VMULESB
/* 809 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 817
/* 813 */     MCD::OPC_Decode, 145, 8, 2, // Opcode: VMULESH
/* 817 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 825
/* 821 */     MCD::OPC_Decode, 209, 8, 2, // Opcode: VSUM4UBS
/* 825 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 833
/* 829 */     MCD::OPC_Decode, 208, 8, 2, // Opcode: VSUM4SHS
/* 833 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 841
/* 837 */     MCD::OPC_Decode, 206, 8, 2, // Opcode: VSUM2SWS
/* 841 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 849
/* 845 */     MCD::OPC_Decode, 207, 8, 2, // Opcode: VSUM4SBS
/* 849 */     MCD::OPC_FilterValue, 30, 86, 33, // Skip to: 9387
/* 853 */     MCD::OPC_Decode, 210, 8, 2, // Opcode: VSUMSWS
/* 857 */     MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 1040
/* 861 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 864 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 872
/* 868 */     MCD::OPC_Decode, 188, 7, 2, // Opcode: VADDFP
/* 872 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 880
/* 876 */     MCD::OPC_Decode, 196, 8, 2, // Opcode: VSUBFP
/* 880 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 894
/* 884 */     MCD::OPC_CheckField, 16, 5, 0, 49, 33, // Skip to: 9387
/* 890 */     MCD::OPC_Decode, 165, 8, 5, // Opcode: VREFP
/* 894 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 908
/* 898 */     MCD::OPC_CheckField, 16, 5, 0, 35, 33, // Skip to: 9387
/* 904 */     MCD::OPC_Decode, 173, 8, 5, // Opcode: VRSQRTEFP
/* 908 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 922
/* 912 */     MCD::OPC_CheckField, 16, 5, 0, 21, 33, // Skip to: 9387
/* 918 */     MCD::OPC_Decode, 240, 7, 5, // Opcode: VEXPTEFP
/* 922 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 936
/* 926 */     MCD::OPC_CheckField, 16, 5, 0, 7, 33, // Skip to: 9387
/* 932 */     MCD::OPC_Decode, 241, 7, 5, // Opcode: VLOGEFP
/* 936 */     MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 950
/* 940 */     MCD::OPC_CheckField, 16, 5, 0, 249, 32, // Skip to: 9387
/* 946 */     MCD::OPC_Decode, 167, 8, 5, // Opcode: VRFIN
/* 950 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 964
/* 954 */     MCD::OPC_CheckField, 16, 5, 0, 235, 32, // Skip to: 9387
/* 960 */     MCD::OPC_Decode, 169, 8, 5, // Opcode: VRFIZ
/* 964 */     MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 978
/* 968 */     MCD::OPC_CheckField, 16, 5, 0, 221, 32, // Skip to: 9387
/* 974 */     MCD::OPC_Decode, 168, 8, 5, // Opcode: VRFIP
/* 978 */     MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 992
/* 982 */     MCD::OPC_CheckField, 16, 5, 0, 207, 32, // Skip to: 9387
/* 988 */     MCD::OPC_Decode, 166, 8, 5, // Opcode: VRFIM
/* 992 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1000
/* 996 */     MCD::OPC_Decode, 208, 7, 6, // Opcode: VCFUX
/* 1000 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1008
/* 1004 */    MCD::OPC_Decode, 206, 7, 6, // Opcode: VCFSX
/* 1008 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1016
/* 1012 */    MCD::OPC_Decode, 238, 7, 6, // Opcode: VCTUXS
/* 1016 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1024
/* 1020 */    MCD::OPC_Decode, 236, 7, 6, // Opcode: VCTSXS
/* 1024 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1032
/* 1028 */    MCD::OPC_Decode, 243, 7, 2, // Opcode: VMAXFP
/* 1032 */    MCD::OPC_FilterValue, 17, 159, 32, // Skip to: 9387
/* 1036 */    MCD::OPC_Decode, 252, 7, 2, // Opcode: VMINFP
/* 1040 */    MCD::OPC_FilterValue, 12, 133, 0, // Skip to: 1177
/* 1044 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1047 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1055
/* 1051 */    MCD::OPC_Decode, 132, 8, 2, // Opcode: VMRGHB
/* 1055 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1063
/* 1059 */    MCD::OPC_Decode, 133, 8, 2, // Opcode: VMRGHH
/* 1063 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1071
/* 1067 */    MCD::OPC_Decode, 134, 8, 2, // Opcode: VMRGHW
/* 1071 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1079
/* 1075 */    MCD::OPC_Decode, 135, 8, 2, // Opcode: VMRGLB
/* 1079 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1087
/* 1083 */    MCD::OPC_Decode, 136, 8, 2, // Opcode: VMRGLH
/* 1087 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1095
/* 1091 */    MCD::OPC_Decode, 137, 8, 2, // Opcode: VMRGLW
/* 1095 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1103
/* 1099 */    MCD::OPC_Decode, 181, 8, 6, // Opcode: VSPLTB
/* 1103 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1111
/* 1107 */    MCD::OPC_Decode, 182, 8, 6, // Opcode: VSPLTH
/* 1111 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1119
/* 1115 */    MCD::OPC_Decode, 186, 8, 6, // Opcode: VSPLTW
/* 1119 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1133
/* 1123 */    MCD::OPC_CheckField, 11, 5, 0, 66, 32, // Skip to: 9387
/* 1129 */    MCD::OPC_Decode, 183, 8, 7, // Opcode: VSPLTISB
/* 1133 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1147
/* 1137 */    MCD::OPC_CheckField, 11, 5, 0, 52, 32, // Skip to: 9387
/* 1143 */    MCD::OPC_Decode, 184, 8, 7, // Opcode: VSPLTISH
/* 1147 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 1161
/* 1151 */    MCD::OPC_CheckField, 11, 5, 0, 38, 32, // Skip to: 9387
/* 1157 */    MCD::OPC_Decode, 185, 8, 7, // Opcode: VSPLTISW
/* 1161 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 179, 8, 2, // Opcode: VSLO
/* 1169 */    MCD::OPC_FilterValue, 17, 22, 32, // Skip to: 9387
/* 1173 */    MCD::OPC_Decode, 193, 8, 2, // Opcode: VSRO
/* 1177 */    MCD::OPC_FilterValue, 14, 159, 0, // Skip to: 1340
/* 1181 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1184 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1192
/* 1188 */    MCD::OPC_Decode, 161, 8, 2, // Opcode: VPKUHUM
/* 1192 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1200
/* 1196 */    MCD::OPC_Decode, 163, 8, 2, // Opcode: VPKUWUM
/* 1200 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1208
/* 1204 */    MCD::OPC_Decode, 162, 8, 2, // Opcode: VPKUHUS
/* 1208 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1216
/* 1212 */    MCD::OPC_Decode, 164, 8, 2, // Opcode: VPKUWUS
/* 1216 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1224
/* 1220 */    MCD::OPC_Decode, 158, 8, 2, // Opcode: VPKSHUS
/* 1224 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1232
/* 1228 */    MCD::OPC_Decode, 160, 8, 2, // Opcode: VPKSWUS
/* 1232 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1240
/* 1236 */    MCD::OPC_Decode, 157, 8, 2, // Opcode: VPKSHSS
/* 1240 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1248
/* 1244 */    MCD::OPC_Decode, 159, 8, 2, // Opcode: VPKSWSS
/* 1248 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1262
/* 1252 */    MCD::OPC_CheckField, 16, 5, 0, 193, 31, // Skip to: 9387
/* 1258 */    MCD::OPC_Decode, 212, 8, 5, // Opcode: VUPKHSB
/* 1262 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1276
/* 1266 */    MCD::OPC_CheckField, 16, 5, 0, 179, 31, // Skip to: 9387
/* 1272 */    MCD::OPC_Decode, 213, 8, 5, // Opcode: VUPKHSH
/* 1276 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1290
/* 1280 */    MCD::OPC_CheckField, 16, 5, 0, 165, 31, // Skip to: 9387
/* 1286 */    MCD::OPC_Decode, 215, 8, 5, // Opcode: VUPKLSB
/* 1290 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1304
/* 1294 */    MCD::OPC_CheckField, 16, 5, 0, 151, 31, // Skip to: 9387
/* 1300 */    MCD::OPC_Decode, 216, 8, 5, // Opcode: VUPKLSH
/* 1304 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1312
/* 1308 */    MCD::OPC_Decode, 156, 8, 2, // Opcode: VPKPX
/* 1312 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1326
/* 1316 */    MCD::OPC_CheckField, 16, 5, 0, 129, 31, // Skip to: 9387
/* 1322 */    MCD::OPC_Decode, 211, 8, 5, // Opcode: VUPKHPX
/* 1326 */    MCD::OPC_FilterValue, 15, 121, 31, // Skip to: 9387
/* 1330 */    MCD::OPC_CheckField, 16, 5, 0, 115, 31, // Skip to: 9387
/* 1336 */    MCD::OPC_Decode, 214, 8, 5, // Opcode: VUPKLPX
/* 1340 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 1348
/* 1344 */    MCD::OPC_Decode, 250, 7, 8, // Opcode: VMHADDSHS
/* 1348 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 1356
/* 1352 */    MCD::OPC_Decode, 251, 7, 8, // Opcode: VMHRADDSHS
/* 1356 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 1364
/* 1360 */    MCD::OPC_Decode, 131, 8, 8, // Opcode: VMLADDUHM
/* 1364 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1372
/* 1368 */    MCD::OPC_Decode, 141, 8, 8, // Opcode: VMSUMUBM
/* 1372 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 1380
/* 1376 */    MCD::OPC_Decode, 138, 8, 8, // Opcode: VMSUMMBM
/* 1380 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 1388
/* 1384 */    MCD::OPC_Decode, 142, 8, 8, // Opcode: VMSUMUHM
/* 1388 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 1396
/* 1392 */    MCD::OPC_Decode, 143, 8, 8, // Opcode: VMSUMUHS
/* 1396 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 1404
/* 1400 */    MCD::OPC_Decode, 139, 8, 8, // Opcode: VMSUMSHM
/* 1404 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 1412
/* 1408 */    MCD::OPC_Decode, 140, 8, 8, // Opcode: VMSUMSHS
/* 1412 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 1420
/* 1416 */    MCD::OPC_Decode, 174, 8, 8, // Opcode: VSEL
/* 1420 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 1428
/* 1424 */    MCD::OPC_Decode, 155, 8, 8, // Opcode: VPERM
/* 1428 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 1442
/* 1432 */    MCD::OPC_CheckField, 10, 1, 0, 13, 31, // Skip to: 9387
/* 1438 */    MCD::OPC_Decode, 177, 8, 9, // Opcode: VSLDOI
/* 1442 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 1450
/* 1446 */    MCD::OPC_Decode, 242, 7, 10, // Opcode: VMADDFP
/* 1450 */    MCD::OPC_FilterValue, 47, 253, 30, // Skip to: 9387
/* 1454 */    MCD::OPC_Decode, 152, 8, 10, // Opcode: VNMSUBFP
/* 1458 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1466
/* 1462 */    MCD::OPC_Decode, 213, 5, 11, // Opcode: MULLI
/* 1466 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1474
/* 1470 */    MCD::OPC_Decode, 138, 7, 11, // Opcode: SUBFIC
/* 1474 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 1497
/* 1478 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1481 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1489
/* 1485 */    MCD::OPC_Decode, 212, 1, 12, // Opcode: CMPLWI
/* 1489 */    MCD::OPC_FilterValue, 1, 214, 30, // Skip to: 9387
/* 1493 */    MCD::OPC_Decode, 210, 1, 13, // Opcode: CMPLDI
/* 1497 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 1520
/* 1501 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1504 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1512
/* 1508 */    MCD::OPC_Decode, 214, 1, 14, // Opcode: CMPWI
/* 1512 */    MCD::OPC_FilterValue, 1, 191, 30, // Skip to: 9387
/* 1516 */    MCD::OPC_Decode, 208, 1, 15, // Opcode: CMPDI
/* 1520 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 1527
/* 1524 */    MCD::OPC_Decode, 37, 11, // Opcode: ADDIC
/* 1527 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 1534
/* 1531 */    MCD::OPC_Decode, 39, 11, // Opcode: ADDICo
/* 1534 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 1551
/* 1538 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1548
/* 1544 */    MCD::OPC_Decode, 254, 4, 16, // Opcode: LI
/* 1548 */    MCD::OPC_Decode, 35, 17, // Opcode: ADDI
/* 1551 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 1568
/* 1555 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1565
/* 1561 */    MCD::OPC_Decode, 128, 5, 16, // Opcode: LIS
/* 1565 */    MCD::OPC_Decode, 40, 17, // Opcode: ADDIS
/* 1568 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 1835
/* 1572 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 1575 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 1640
/* 1579 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1582 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1591
/* 1587 */    MCD::OPC_Decode, 146, 1, 18, // Opcode: BDNZ
/* 1591 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1600
/* 1596 */    MCD::OPC_Decode, 166, 1, 18, // Opcode: BDZ
/* 1600 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1609
/* 1605 */    MCD::OPC_Decode, 164, 1, 18, // Opcode: BDNZm
/* 1609 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1618
/* 1614 */    MCD::OPC_Decode, 165, 1, 18, // Opcode: BDNZp
/* 1618 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1627
/* 1623 */    MCD::OPC_Decode, 184, 1, 18, // Opcode: BDZm
/* 1627 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1636
/* 1632 */    MCD::OPC_Decode, 185, 1, 18, // Opcode: BDZp
/* 1636 */    MCD::OPC_Decode, 243, 9, 19, // Opcode: gBC
/* 1640 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 1705
/* 1644 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1647 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1656
/* 1652 */    MCD::OPC_Decode, 151, 1, 18, // Opcode: BDNZL
/* 1656 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 171, 1, 18, // Opcode: BDZL
/* 1665 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1674
/* 1670 */    MCD::OPC_Decode, 162, 1, 18, // Opcode: BDNZLm
/* 1674 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1683
/* 1679 */    MCD::OPC_Decode, 163, 1, 18, // Opcode: BDNZLp
/* 1683 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1692
/* 1688 */    MCD::OPC_Decode, 182, 1, 18, // Opcode: BDZLm
/* 1692 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1701
/* 1697 */    MCD::OPC_Decode, 183, 1, 18, // Opcode: BDZLp
/* 1701 */    MCD::OPC_Decode, 247, 9, 19, // Opcode: gBCL
/* 1705 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 1770
/* 1709 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1712 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1721
/* 1717 */    MCD::OPC_Decode, 148, 1, 18, // Opcode: BDNZA
/* 1721 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1730
/* 1726 */    MCD::OPC_Decode, 168, 1, 18, // Opcode: BDZA
/* 1730 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1739
/* 1735 */    MCD::OPC_Decode, 149, 1, 18, // Opcode: BDNZAm
/* 1739 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1748
/* 1744 */    MCD::OPC_Decode, 150, 1, 18, // Opcode: BDNZAp
/* 1748 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1757
/* 1753 */    MCD::OPC_Decode, 169, 1, 18, // Opcode: BDZAm
/* 1757 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1766
/* 1762 */    MCD::OPC_Decode, 170, 1, 18, // Opcode: BDZAp
/* 1766 */    MCD::OPC_Decode, 244, 9, 19, // Opcode: gBCA
/* 1770 */    MCD::OPC_FilterValue, 3, 189, 29, // Skip to: 9387
/* 1774 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1777 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1786
/* 1782 */    MCD::OPC_Decode, 152, 1, 18, // Opcode: BDNZLA
/* 1786 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1795
/* 1791 */    MCD::OPC_Decode, 172, 1, 18, // Opcode: BDZLA
/* 1795 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1804
/* 1800 */    MCD::OPC_Decode, 153, 1, 18, // Opcode: BDNZLAm
/* 1804 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1813
/* 1809 */    MCD::OPC_Decode, 154, 1, 18, // Opcode: BDNZLAp
/* 1813 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1822
/* 1818 */    MCD::OPC_Decode, 173, 1, 18, // Opcode: BDZLAm
/* 1822 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 174, 1, 18, // Opcode: BDZLAp
/* 1831 */    MCD::OPC_Decode, 248, 9, 19, // Opcode: gBCLA
/* 1835 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 1849
/* 1839 */    MCD::OPC_CheckField, 1, 1, 1, 118, 29, // Skip to: 9387
/* 1845 */    MCD::OPC_Decode, 157, 6, 20, // Opcode: SC
/* 1849 */    MCD::OPC_FilterValue, 18, 33, 0, // Skip to: 1886
/* 1853 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 1856 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1863
/* 1860 */    MCD::OPC_Decode, 113, 21, // Opcode: B
/* 1863 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1871
/* 1867 */    MCD::OPC_Decode, 186, 1, 21, // Opcode: BL
/* 1871 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 1878
/* 1875 */    MCD::OPC_Decode, 114, 21, // Opcode: BA
/* 1878 */    MCD::OPC_FilterValue, 3, 81, 29, // Skip to: 9387
/* 1882 */    MCD::OPC_Decode, 192, 1, 21, // Opcode: BLA
/* 1886 */    MCD::OPC_FilterValue, 19, 235, 1, // Skip to: 2381
/* 1890 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1893 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1913
/* 1897 */    MCD::OPC_CheckField, 21, 2, 0, 60, 29, // Skip to: 9387
/* 1903 */    MCD::OPC_CheckField, 11, 7, 0, 54, 29, // Skip to: 9387
/* 1909 */    MCD::OPC_Decode, 160, 5, 22, // Opcode: MCRF
/* 1913 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 2036
/* 1917 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 1920 */    MCD::OPC_FilterValue, 0, 39, 29, // Skip to: 9387
/* 1924 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1927 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 1942
/* 1932 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2032
/* 1938 */    MCD::OPC_Decode, 155, 1, 23, // Opcode: BDNZLR
/* 1942 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 1957
/* 1947 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2032
/* 1953 */    MCD::OPC_Decode, 175, 1, 23, // Opcode: BDZLR
/* 1957 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 1972
/* 1962 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2032
/* 1968 */    MCD::OPC_Decode, 195, 1, 23, // Opcode: BLR
/* 1972 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 1987
/* 1977 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2032
/* 1983 */    MCD::OPC_Decode, 160, 1, 23, // Opcode: BDNZLRm
/* 1987 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2002
/* 1992 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2032
/* 1998 */    MCD::OPC_Decode, 161, 1, 23, // Opcode: BDNZLRp
/* 2002 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2017
/* 2007 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2032
/* 2013 */    MCD::OPC_Decode, 180, 1, 23, // Opcode: BDZLRm
/* 2017 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2032
/* 2022 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2032
/* 2028 */    MCD::OPC_Decode, 181, 1, 23, // Opcode: BDZLRp
/* 2032 */    MCD::OPC_Decode, 249, 9, 24, // Opcode: gBCLR
/* 2036 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 2159
/* 2040 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2043 */    MCD::OPC_FilterValue, 0, 172, 28, // Skip to: 9387
/* 2047 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2050 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 2065
/* 2055 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2155
/* 2061 */    MCD::OPC_Decode, 157, 1, 23, // Opcode: BDNZLRL
/* 2065 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 2080
/* 2070 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2155
/* 2076 */    MCD::OPC_Decode, 177, 1, 23, // Opcode: BDZLRL
/* 2080 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 2095
/* 2085 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2155
/* 2091 */    MCD::OPC_Decode, 196, 1, 23, // Opcode: BLRL
/* 2095 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 2110
/* 2100 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2155
/* 2106 */    MCD::OPC_Decode, 158, 1, 23, // Opcode: BDNZLRLm
/* 2110 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2125
/* 2115 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2155
/* 2121 */    MCD::OPC_Decode, 159, 1, 23, // Opcode: BDNZLRLp
/* 2125 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2140
/* 2130 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2155
/* 2136 */    MCD::OPC_Decode, 178, 1, 23, // Opcode: BDZLRLm
/* 2140 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2155
/* 2145 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2155
/* 2151 */    MCD::OPC_Decode, 179, 1, 23, // Opcode: BDZLRLp
/* 2155 */    MCD::OPC_Decode, 250, 9, 24, // Opcode: gBCLRL
/* 2159 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 2173
/* 2163 */    MCD::OPC_CheckField, 11, 15, 0, 50, 28, // Skip to: 9387
/* 2169 */    MCD::OPC_Decode, 128, 6, 23, // Opcode: RFID
/* 2173 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2181
/* 2177 */    MCD::OPC_Decode, 225, 1, 25, // Opcode: CRNOR
/* 2181 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 2195
/* 2185 */    MCD::OPC_CheckField, 11, 15, 0, 28, 28, // Skip to: 9387
/* 2191 */    MCD::OPC_Decode, 129, 6, 23, // Opcode: RFMCI
/* 2195 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 2209
/* 2199 */    MCD::OPC_CheckField, 11, 15, 0, 14, 28, // Skip to: 9387
/* 2205 */    MCD::OPC_Decode, 254, 5, 23, // Opcode: RFDI
/* 2209 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 2223
/* 2213 */    MCD::OPC_CheckField, 11, 15, 0, 0, 28, // Skip to: 9387
/* 2219 */    MCD::OPC_Decode, 255, 5, 23, // Opcode: RFI
/* 2223 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 2237
/* 2227 */    MCD::OPC_CheckField, 11, 15, 0, 242, 27, // Skip to: 9387
/* 2233 */    MCD::OPC_Decode, 253, 5, 23, // Opcode: RFCI
/* 2237 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 2246
/* 2242 */    MCD::OPC_Decode, 222, 1, 25, // Opcode: CRANDC
/* 2246 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 2261
/* 2251 */    MCD::OPC_CheckField, 11, 15, 0, 218, 27, // Skip to: 9387
/* 2257 */    MCD::OPC_Decode, 202, 4, 23, // Opcode: ISYNC
/* 2261 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 2270
/* 2266 */    MCD::OPC_Decode, 230, 1, 25, // Opcode: CRXOR
/* 2270 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 2279
/* 2275 */    MCD::OPC_Decode, 224, 1, 25, // Opcode: CRNAND
/* 2279 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 2288
/* 2284 */    MCD::OPC_Decode, 221, 1, 25, // Opcode: CRAND
/* 2288 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 2297
/* 2293 */    MCD::OPC_Decode, 223, 1, 25, // Opcode: CREQV
/* 2297 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 2306
/* 2302 */    MCD::OPC_Decode, 227, 1, 25, // Opcode: CRORC
/* 2306 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 2315
/* 2311 */    MCD::OPC_Decode, 226, 1, 25, // Opcode: CROR
/* 2315 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 2348
/* 2320 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2323 */    MCD::OPC_FilterValue, 0, 148, 27, // Skip to: 9387
/* 2327 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2344
/* 2334 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2344
/* 2340 */    MCD::OPC_Decode, 141, 1, 23, // Opcode: BCTR
/* 2344 */    MCD::OPC_Decode, 245, 9, 24, // Opcode: gBCCTR
/* 2348 */    MCD::OPC_FilterValue, 161, 8, 122, 27, // Skip to: 9387
/* 2353 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2356 */    MCD::OPC_FilterValue, 0, 115, 27, // Skip to: 9387
/* 2360 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2377
/* 2367 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2377
/* 2373 */    MCD::OPC_Decode, 143, 1, 23, // Opcode: BCTRL
/* 2377 */    MCD::OPC_Decode, 246, 9, 24, // Opcode: gBCCTRL
/* 2381 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 2404
/* 2385 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2388 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2396
/* 2392 */    MCD::OPC_Decode, 143, 6, 26, // Opcode: RLWIMI
/* 2396 */    MCD::OPC_FilterValue, 1, 75, 27, // Skip to: 9387
/* 2400 */    MCD::OPC_Decode, 146, 6, 26, // Opcode: RLWIMIo
/* 2404 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 2427
/* 2408 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2411 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2419
/* 2415 */    MCD::OPC_Decode, 147, 6, 27, // Opcode: RLWINM
/* 2419 */    MCD::OPC_FilterValue, 1, 52, 27, // Skip to: 9387
/* 2423 */    MCD::OPC_Decode, 150, 6, 27, // Opcode: RLWINMo
/* 2427 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 2450
/* 2431 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2434 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2442
/* 2438 */    MCD::OPC_Decode, 151, 6, 28, // Opcode: RLWNM
/* 2442 */    MCD::OPC_FilterValue, 1, 29, 27, // Skip to: 9387
/* 2446 */    MCD::OPC_Decode, 152, 6, 28, // Opcode: RLWNMo
/* 2450 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 2468
/* 2454 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 2464
/* 2460 */    MCD::OPC_Decode, 227, 5, 23, // Opcode: NOP
/* 2464 */    MCD::OPC_Decode, 241, 5, 29, // Opcode: ORI
/* 2468 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2476
/* 2472 */    MCD::OPC_Decode, 243, 5, 29, // Opcode: ORIS
/* 2476 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2484
/* 2480 */    MCD::OPC_Decode, 230, 8, 29, // Opcode: XORI
/* 2484 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 2492
/* 2488 */    MCD::OPC_Decode, 232, 8, 29, // Opcode: XORIS
/* 2492 */    MCD::OPC_FilterValue, 28, 3, 0, // Skip to: 2499
/* 2496 */    MCD::OPC_Decode, 74, 29, // Opcode: ANDIo
/* 2499 */    MCD::OPC_FilterValue, 29, 3, 0, // Skip to: 2506
/* 2503 */    MCD::OPC_Decode, 72, 29, // Opcode: ANDISo
/* 2506 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 2644
/* 2510 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 2513 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 2536
/* 2517 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2520 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2528
/* 2524 */    MCD::OPC_Decode, 135, 6, 30, // Opcode: RLDICL
/* 2528 */    MCD::OPC_FilterValue, 1, 199, 26, // Skip to: 9387
/* 2532 */    MCD::OPC_Decode, 137, 6, 30, // Opcode: RLDICLo
/* 2536 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 2559
/* 2540 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2543 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2551
/* 2547 */    MCD::OPC_Decode, 138, 6, 30, // Opcode: RLDICR
/* 2551 */    MCD::OPC_FilterValue, 1, 176, 26, // Skip to: 9387
/* 2555 */    MCD::OPC_Decode, 139, 6, 30, // Opcode: RLDICRo
/* 2559 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 2582
/* 2563 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2566 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2574
/* 2570 */    MCD::OPC_Decode, 134, 6, 30, // Opcode: RLDIC
/* 2574 */    MCD::OPC_FilterValue, 1, 153, 26, // Skip to: 9387
/* 2578 */    MCD::OPC_Decode, 140, 6, 30, // Opcode: RLDICo
/* 2582 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 2605
/* 2586 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2589 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2597
/* 2593 */    MCD::OPC_Decode, 141, 6, 31, // Opcode: RLDIMI
/* 2597 */    MCD::OPC_FilterValue, 1, 130, 26, // Skip to: 9387
/* 2601 */    MCD::OPC_Decode, 142, 6, 31, // Opcode: RLDIMIo
/* 2605 */    MCD::OPC_FilterValue, 4, 122, 26, // Skip to: 9387
/* 2609 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2612 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2620
/* 2616 */    MCD::OPC_Decode, 130, 6, 32, // Opcode: RLDCL
/* 2620 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2628
/* 2624 */    MCD::OPC_Decode, 131, 6, 32, // Opcode: RLDCLo
/* 2628 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2636
/* 2632 */    MCD::OPC_Decode, 132, 6, 32, // Opcode: RLDCR
/* 2636 */    MCD::OPC_FilterValue, 3, 91, 26, // Skip to: 9387
/* 2640 */    MCD::OPC_Decode, 133, 6, 32, // Opcode: RLDCRo
/* 2644 */    MCD::OPC_FilterValue, 31, 53, 12, // Skip to: 5773
/* 2648 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 2651 */    MCD::OPC_FilterValue, 0, 73, 0, // Skip to: 2728
/* 2655 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2658 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2693
/* 2662 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2665 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2679
/* 2669 */    MCD::OPC_CheckField, 0, 2, 0, 56, 26, // Skip to: 9387
/* 2675 */    MCD::OPC_Decode, 213, 1, 33, // Opcode: CMPW
/* 2679 */    MCD::OPC_FilterValue, 1, 48, 26, // Skip to: 9387
/* 2683 */    MCD::OPC_CheckField, 0, 2, 0, 42, 26, // Skip to: 9387
/* 2689 */    MCD::OPC_Decode, 207, 1, 34, // Opcode: CMPD
/* 2693 */    MCD::OPC_FilterValue, 1, 34, 26, // Skip to: 9387
/* 2697 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2700 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2714
/* 2704 */    MCD::OPC_CheckField, 0, 2, 0, 21, 26, // Skip to: 9387
/* 2710 */    MCD::OPC_Decode, 211, 1, 33, // Opcode: CMPLW
/* 2714 */    MCD::OPC_FilterValue, 1, 13, 26, // Skip to: 9387
/* 2718 */    MCD::OPC_CheckField, 0, 2, 0, 7, 26, // Skip to: 9387
/* 2724 */    MCD::OPC_Decode, 209, 1, 34, // Opcode: CMPLD
/* 2728 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 2797
/* 2732 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2735 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 2755
/* 2739 */    MCD::OPC_CheckField, 16, 1, 0, 242, 25, // Skip to: 9387
/* 2745 */    MCD::OPC_CheckField, 1, 1, 1, 236, 25, // Skip to: 9387
/* 2751 */    MCD::OPC_Decode, 225, 8, 35, // Opcode: WRTEE
/* 2755 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2769
/* 2759 */    MCD::OPC_CheckField, 1, 1, 1, 222, 25, // Skip to: 9387
/* 2765 */    MCD::OPC_Decode, 226, 8, 36, // Opcode: WRTEEI
/* 2769 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 2783
/* 2773 */    MCD::OPC_CheckField, 0, 2, 2, 208, 25, // Skip to: 9387
/* 2779 */    MCD::OPC_Decode, 165, 5, 37, // Opcode: MFDCR
/* 2783 */    MCD::OPC_FilterValue, 14, 200, 25, // Skip to: 9387
/* 2787 */    MCD::OPC_CheckField, 0, 2, 2, 194, 25, // Skip to: 9387
/* 2793 */    MCD::OPC_Decode, 187, 5, 37, // Opcode: MTDCR
/* 2797 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 2845
/* 2801 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2804 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 2831
/* 2808 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2811 */    MCD::OPC_FilterValue, 0, 172, 25, // Skip to: 9387
/* 2815 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 2827
/* 2823 */    MCD::OPC_Decode, 182, 7, 23, // Opcode: TRAP
/* 2827 */    MCD::OPC_Decode, 183, 7, 38, // Opcode: TW
/* 2831 */    MCD::OPC_FilterValue, 2, 152, 25, // Skip to: 9387
/* 2835 */    MCD::OPC_CheckField, 0, 2, 0, 146, 25, // Skip to: 9387
/* 2841 */    MCD::OPC_Decode, 166, 7, 39, // Opcode: TD
/* 2845 */    MCD::OPC_FilterValue, 3, 201, 0, // Skip to: 3050
/* 2849 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2852 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 2875
/* 2856 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2859 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2867
/* 2863 */    MCD::OPC_Decode, 135, 5, 40, // Opcode: LVSL
/* 2867 */    MCD::OPC_FilterValue, 2, 116, 25, // Skip to: 9387
/* 2871 */    MCD::OPC_Decode, 132, 5, 40, // Opcode: LVEBX
/* 2875 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 2898
/* 2879 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2882 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2890
/* 2886 */    MCD::OPC_Decode, 136, 5, 40, // Opcode: LVSR
/* 2890 */    MCD::OPC_FilterValue, 2, 93, 25, // Skip to: 9387
/* 2894 */    MCD::OPC_Decode, 133, 5, 40, // Opcode: LVEHX
/* 2898 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2912
/* 2902 */    MCD::OPC_CheckField, 0, 2, 2, 79, 25, // Skip to: 9387
/* 2908 */    MCD::OPC_Decode, 134, 5, 40, // Opcode: LVEWX
/* 2912 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2926
/* 2916 */    MCD::OPC_CheckField, 0, 2, 2, 65, 25, // Skip to: 9387
/* 2922 */    MCD::OPC_Decode, 137, 5, 40, // Opcode: LVX
/* 2926 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 2940
/* 2930 */    MCD::OPC_CheckField, 0, 2, 2, 51, 25, // Skip to: 9387
/* 2936 */    MCD::OPC_Decode, 237, 6, 40, // Opcode: STVEBX
/* 2940 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2954
/* 2944 */    MCD::OPC_CheckField, 0, 2, 2, 37, 25, // Skip to: 9387
/* 2950 */    MCD::OPC_Decode, 238, 6, 40, // Opcode: STVEHX
/* 2954 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2968
/* 2958 */    MCD::OPC_CheckField, 0, 2, 2, 23, 25, // Skip to: 9387
/* 2964 */    MCD::OPC_Decode, 239, 6, 40, // Opcode: STVEWX
/* 2968 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2982
/* 2972 */    MCD::OPC_CheckField, 0, 2, 2, 9, 25, // Skip to: 9387
/* 2978 */    MCD::OPC_Decode, 240, 6, 40, // Opcode: STVX
/* 2982 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2996
/* 2986 */    MCD::OPC_CheckField, 0, 2, 2, 251, 24, // Skip to: 9387
/* 2992 */    MCD::OPC_Decode, 138, 5, 40, // Opcode: LVXL
/* 2996 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 3016
/* 3000 */    MCD::OPC_CheckField, 21, 5, 0, 237, 24, // Skip to: 9387
/* 3006 */    MCD::OPC_CheckField, 0, 2, 0, 231, 24, // Skip to: 9387
/* 3012 */    MCD::OPC_Decode, 239, 1, 41, // Opcode: DCCCI
/* 3016 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 3030
/* 3020 */    MCD::OPC_CheckField, 0, 2, 2, 217, 24, // Skip to: 9387
/* 3026 */    MCD::OPC_Decode, 241, 6, 40, // Opcode: STVXL
/* 3030 */    MCD::OPC_FilterValue, 30, 209, 24, // Skip to: 9387
/* 3034 */    MCD::OPC_CheckField, 21, 5, 0, 203, 24, // Skip to: 9387
/* 3040 */    MCD::OPC_CheckField, 0, 2, 0, 197, 24, // Skip to: 9387
/* 3046 */    MCD::OPC_Decode, 193, 4, 41, // Opcode: ICCCI
/* 3050 */    MCD::OPC_FilterValue, 4, 22, 1, // Skip to: 3332
/* 3054 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3057 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 3096
/* 3061 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3064 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3072
/* 3068 */    MCD::OPC_Decode, 130, 7, 42, // Opcode: SUBFC
/* 3072 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3080
/* 3076 */    MCD::OPC_Decode, 133, 7, 42, // Opcode: SUBFCo
/* 3080 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3088
/* 3084 */    MCD::OPC_Decode, 204, 5, 43, // Opcode: MULHDU
/* 3088 */    MCD::OPC_FilterValue, 3, 151, 24, // Skip to: 9387
/* 3092 */    MCD::OPC_Decode, 205, 5, 43, // Opcode: MULHDUo
/* 3096 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3119
/* 3100 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3103 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3111
/* 3107 */    MCD::OPC_Decode, 255, 6, 42, // Opcode: SUBF
/* 3111 */    MCD::OPC_FilterValue, 1, 128, 24, // Skip to: 9387
/* 3115 */    MCD::OPC_Decode, 148, 7, 42, // Opcode: SUBFo
/* 3119 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3142
/* 3123 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3126 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3134
/* 3130 */    MCD::OPC_Decode, 203, 5, 43, // Opcode: MULHD
/* 3134 */    MCD::OPC_FilterValue, 3, 105, 24, // Skip to: 9387
/* 3138 */    MCD::OPC_Decode, 206, 5, 43, // Opcode: MULHDo
/* 3142 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 3177
/* 3146 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3149 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3163
/* 3153 */    MCD::OPC_CheckField, 11, 5, 0, 84, 24, // Skip to: 9387
/* 3159 */    MCD::OPC_Decode, 223, 5, 44, // Opcode: NEG
/* 3163 */    MCD::OPC_FilterValue, 1, 76, 24, // Skip to: 9387
/* 3167 */    MCD::OPC_CheckField, 11, 5, 0, 70, 24, // Skip to: 9387
/* 3173 */    MCD::OPC_Decode, 226, 5, 44, // Opcode: NEGo
/* 3177 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 3200
/* 3181 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3184 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3192
/* 3188 */    MCD::OPC_Decode, 134, 7, 42, // Opcode: SUBFE
/* 3192 */    MCD::OPC_FilterValue, 1, 47, 24, // Skip to: 9387
/* 3196 */    MCD::OPC_Decode, 137, 7, 42, // Opcode: SUBFEo
/* 3200 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 3235
/* 3204 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3207 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3221
/* 3211 */    MCD::OPC_CheckField, 11, 5, 0, 26, 24, // Skip to: 9387
/* 3217 */    MCD::OPC_Decode, 144, 7, 44, // Opcode: SUBFZE
/* 3221 */    MCD::OPC_FilterValue, 1, 18, 24, // Skip to: 9387
/* 3225 */    MCD::OPC_CheckField, 11, 5, 0, 12, 24, // Skip to: 9387
/* 3231 */    MCD::OPC_Decode, 147, 7, 44, // Opcode: SUBFZEo
/* 3235 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 3286
/* 3239 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3242 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3256
/* 3246 */    MCD::OPC_CheckField, 11, 5, 0, 247, 23, // Skip to: 9387
/* 3252 */    MCD::OPC_Decode, 140, 7, 44, // Opcode: SUBFME
/* 3256 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3270
/* 3260 */    MCD::OPC_CheckField, 11, 5, 0, 233, 23, // Skip to: 9387
/* 3266 */    MCD::OPC_Decode, 143, 7, 44, // Opcode: SUBFMEo
/* 3270 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3278
/* 3274 */    MCD::OPC_Decode, 211, 5, 43, // Opcode: MULLD
/* 3278 */    MCD::OPC_FilterValue, 3, 217, 23, // Skip to: 9387
/* 3282 */    MCD::OPC_Decode, 212, 5, 43, // Opcode: MULLDo
/* 3286 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3309
/* 3290 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3293 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3301
/* 3297 */    MCD::OPC_Decode, 241, 1, 43, // Opcode: DIVDU
/* 3301 */    MCD::OPC_FilterValue, 3, 194, 23, // Skip to: 9387
/* 3305 */    MCD::OPC_Decode, 242, 1, 43, // Opcode: DIVDUo
/* 3309 */    MCD::OPC_FilterValue, 15, 186, 23, // Skip to: 9387
/* 3313 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3316 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3324
/* 3320 */    MCD::OPC_Decode, 240, 1, 43, // Opcode: DIVD
/* 3324 */    MCD::OPC_FilterValue, 3, 171, 23, // Skip to: 9387
/* 3328 */    MCD::OPC_Decode, 243, 1, 43, // Opcode: DIVDo
/* 3332 */    MCD::OPC_FilterValue, 5, 233, 0, // Skip to: 3569
/* 3336 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3339 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 3376
/* 3343 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3346 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3353
/* 3350 */    MCD::OPC_Decode, 27, 42, // Opcode: ADDC
/* 3353 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 3360
/* 3357 */    MCD::OPC_Decode, 30, 42, // Opcode: ADDCo
/* 3360 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3368
/* 3364 */    MCD::OPC_Decode, 208, 5, 42, // Opcode: MULHWU
/* 3368 */    MCD::OPC_FilterValue, 3, 127, 23, // Skip to: 9387
/* 3372 */    MCD::OPC_Decode, 209, 5, 42, // Opcode: MULHWUo
/* 3376 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3399
/* 3380 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3383 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3391
/* 3387 */    MCD::OPC_Decode, 207, 5, 42, // Opcode: MULHW
/* 3391 */    MCD::OPC_FilterValue, 3, 104, 23, // Skip to: 9387
/* 3395 */    MCD::OPC_Decode, 210, 5, 42, // Opcode: MULHWo
/* 3399 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 3420
/* 3403 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3406 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3413
/* 3410 */    MCD::OPC_Decode, 31, 42, // Opcode: ADDE
/* 3413 */    MCD::OPC_FilterValue, 1, 82, 23, // Skip to: 9387
/* 3417 */    MCD::OPC_Decode, 34, 42, // Opcode: ADDEo
/* 3420 */    MCD::OPC_FilterValue, 6, 29, 0, // Skip to: 3453
/* 3424 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3427 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3440
/* 3431 */    MCD::OPC_CheckField, 11, 5, 0, 62, 23, // Skip to: 9387
/* 3437 */    MCD::OPC_Decode, 59, 44, // Opcode: ADDZE
/* 3440 */    MCD::OPC_FilterValue, 1, 55, 23, // Skip to: 9387
/* 3444 */    MCD::OPC_CheckField, 11, 5, 0, 49, 23, // Skip to: 9387
/* 3450 */    MCD::OPC_Decode, 62, 44, // Opcode: ADDZEo
/* 3453 */    MCD::OPC_FilterValue, 7, 45, 0, // Skip to: 3502
/* 3457 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3460 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3473
/* 3464 */    MCD::OPC_CheckField, 11, 5, 0, 29, 23, // Skip to: 9387
/* 3470 */    MCD::OPC_Decode, 55, 44, // Opcode: ADDME
/* 3473 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3486
/* 3477 */    MCD::OPC_CheckField, 11, 5, 0, 16, 23, // Skip to: 9387
/* 3483 */    MCD::OPC_Decode, 58, 44, // Opcode: ADDMEo
/* 3486 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3494
/* 3490 */    MCD::OPC_Decode, 215, 5, 42, // Opcode: MULLW
/* 3494 */    MCD::OPC_FilterValue, 3, 1, 23, // Skip to: 9387
/* 3498 */    MCD::OPC_Decode, 216, 5, 42, // Opcode: MULLWo
/* 3502 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 3523
/* 3506 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3509 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3516
/* 3513 */    MCD::OPC_Decode, 20, 42, // Opcode: ADD4
/* 3516 */    MCD::OPC_FilterValue, 1, 235, 22, // Skip to: 9387
/* 3520 */    MCD::OPC_Decode, 22, 42, // Opcode: ADD4o
/* 3523 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3546
/* 3527 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3530 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3538
/* 3534 */    MCD::OPC_Decode, 245, 1, 42, // Opcode: DIVWU
/* 3538 */    MCD::OPC_FilterValue, 3, 213, 22, // Skip to: 9387
/* 3542 */    MCD::OPC_Decode, 246, 1, 42, // Opcode: DIVWUo
/* 3546 */    MCD::OPC_FilterValue, 15, 205, 22, // Skip to: 9387
/* 3550 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3553 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3561
/* 3557 */    MCD::OPC_Decode, 244, 1, 42, // Opcode: DIVW
/* 3561 */    MCD::OPC_FilterValue, 3, 190, 22, // Skip to: 9387
/* 3565 */    MCD::OPC_Decode, 247, 1, 42, // Opcode: DIVWo
/* 3569 */    MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 3674
/* 3573 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3576 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 3590
/* 3580 */    MCD::OPC_CheckField, 1, 1, 0, 169, 22, // Skip to: 9387
/* 3586 */    MCD::OPC_Decode, 157, 5, 45, // Opcode: LXVDSX
/* 3590 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3604
/* 3594 */    MCD::OPC_CheckField, 1, 1, 0, 155, 22, // Skip to: 9387
/* 3600 */    MCD::OPC_Decode, 155, 5, 46, // Opcode: LXSDX
/* 3604 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3618
/* 3608 */    MCD::OPC_CheckField, 1, 1, 0, 141, 22, // Skip to: 9387
/* 3614 */    MCD::OPC_Decode, 252, 6, 46, // Opcode: STXSDX
/* 3618 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 3632
/* 3622 */    MCD::OPC_CheckField, 1, 1, 0, 127, 22, // Skip to: 9387
/* 3628 */    MCD::OPC_Decode, 158, 5, 45, // Opcode: LXVW4X
/* 3632 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 3646
/* 3636 */    MCD::OPC_CheckField, 1, 1, 0, 113, 22, // Skip to: 9387
/* 3642 */    MCD::OPC_Decode, 156, 5, 45, // Opcode: LXVD2X
/* 3646 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 3660
/* 3650 */    MCD::OPC_CheckField, 1, 1, 0, 99, 22, // Skip to: 9387
/* 3656 */    MCD::OPC_Decode, 254, 6, 45, // Opcode: STXVW4X
/* 3660 */    MCD::OPC_FilterValue, 30, 91, 22, // Skip to: 9387
/* 3664 */    MCD::OPC_CheckField, 1, 1, 0, 85, 22, // Skip to: 9387
/* 3670 */    MCD::OPC_Decode, 253, 6, 45, // Opcode: STXVD2X
/* 3674 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 3688
/* 3678 */    MCD::OPC_CheckField, 0, 2, 2, 71, 22, // Skip to: 9387
/* 3684 */    MCD::OPC_Decode, 200, 4, 47, // Opcode: ISEL
/* 3688 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 3735
/* 3692 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3695 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3715
/* 3699 */    MCD::OPC_CheckField, 6, 6, 4, 50, 22, // Skip to: 9387
/* 3705 */    MCD::OPC_CheckField, 0, 2, 0, 44, 22, // Skip to: 9387
/* 3711 */    MCD::OPC_Decode, 181, 5, 48, // Opcode: MTCRF
/* 3715 */    MCD::OPC_FilterValue, 1, 36, 22, // Skip to: 9387
/* 3719 */    MCD::OPC_CheckField, 6, 6, 4, 30, 22, // Skip to: 9387
/* 3725 */    MCD::OPC_CheckField, 0, 2, 0, 24, 22, // Skip to: 9387
/* 3731 */    MCD::OPC_Decode, 195, 5, 49, // Opcode: MTOCRF
/* 3735 */    MCD::OPC_FilterValue, 9, 246, 1, // Skip to: 4241
/* 3739 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3742 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 3789
/* 3746 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3749 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3769
/* 3753 */    MCD::OPC_CheckField, 11, 9, 0, 252, 21, // Skip to: 9387
/* 3759 */    MCD::OPC_CheckField, 0, 2, 2, 246, 21, // Skip to: 9387
/* 3765 */    MCD::OPC_Decode, 161, 5, 35, // Opcode: MFCR
/* 3769 */    MCD::OPC_FilterValue, 1, 238, 21, // Skip to: 9387
/* 3773 */    MCD::OPC_CheckField, 11, 1, 0, 232, 21, // Skip to: 9387
/* 3779 */    MCD::OPC_CheckField, 0, 2, 2, 226, 21, // Skip to: 9387
/* 3785 */    MCD::OPC_Decode, 170, 5, 50, // Opcode: MFOCRF
/* 3789 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 3809
/* 3793 */    MCD::OPC_CheckField, 11, 10, 0, 212, 21, // Skip to: 9387
/* 3799 */    MCD::OPC_CheckField, 0, 2, 2, 206, 21, // Skip to: 9387
/* 3805 */    MCD::OPC_Decode, 169, 5, 35, // Opcode: MFMSR
/* 3809 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 3823
/* 3813 */    MCD::OPC_CheckField, 1, 1, 0, 192, 21, // Skip to: 9387
/* 3819 */    MCD::OPC_Decode, 193, 5, 51, // Opcode: MTMSR
/* 3823 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3837
/* 3827 */    MCD::OPC_CheckField, 1, 1, 0, 178, 21, // Skip to: 9387
/* 3833 */    MCD::OPC_Decode, 194, 5, 51, // Opcode: MTMSRD
/* 3837 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 3851
/* 3841 */    MCD::OPC_CheckField, 1, 1, 0, 164, 21, // Skip to: 9387
/* 3847 */    MCD::OPC_Decode, 198, 5, 52, // Opcode: MTSR
/* 3851 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 3865
/* 3855 */    MCD::OPC_CheckField, 1, 1, 0, 150, 21, // Skip to: 9387
/* 3861 */    MCD::OPC_Decode, 199, 5, 53, // Opcode: MTSRIN
/* 3865 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 3885
/* 3869 */    MCD::OPC_CheckField, 16, 10, 0, 136, 21, // Skip to: 9387
/* 3875 */    MCD::OPC_CheckField, 0, 2, 0, 130, 21, // Skip to: 9387
/* 3881 */    MCD::OPC_Decode, 170, 7, 54, // Opcode: TLBIEL
/* 3885 */    MCD::OPC_FilterValue, 9, 16, 0, // Skip to: 3905
/* 3889 */    MCD::OPC_CheckField, 16, 5, 0, 116, 21, // Skip to: 9387
/* 3895 */    MCD::OPC_CheckField, 0, 2, 0, 110, 21, // Skip to: 9387
/* 3901 */    MCD::OPC_Decode, 169, 7, 53, // Opcode: TLBIE
/* 3905 */    MCD::OPC_FilterValue, 10, 32, 0, // Skip to: 3941
/* 3909 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3912 */    MCD::OPC_FilterValue, 2, 95, 21, // Skip to: 9387
/* 3916 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 3919 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 3928
/* 3924 */    MCD::OPC_Decode, 167, 5, 35, // Opcode: MFLR
/* 3928 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 3937
/* 3933 */    MCD::OPC_Decode, 163, 5, 35, // Opcode: MFCTR
/* 3937 */    MCD::OPC_Decode, 172, 5, 37, // Opcode: MFSPR
/* 3941 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 3970
/* 3945 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3948 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3962
/* 3952 */    MCD::OPC_CheckField, 11, 15, 0, 53, 21, // Skip to: 9387
/* 3958 */    MCD::OPC_Decode, 168, 7, 23, // Opcode: TLBIA
/* 3962 */    MCD::OPC_FilterValue, 2, 45, 21, // Skip to: 9387
/* 3966 */    MCD::OPC_Decode, 175, 5, 37, // Opcode: MFTB
/* 3970 */    MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 3990
/* 3974 */    MCD::OPC_CheckField, 16, 5, 0, 31, 21, // Skip to: 9387
/* 3980 */    MCD::OPC_CheckField, 0, 2, 0, 25, 21, // Skip to: 9387
/* 3986 */    MCD::OPC_Decode, 175, 6, 53, // Opcode: SLBMTE
/* 3990 */    MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 4010
/* 3994 */    MCD::OPC_CheckField, 16, 10, 0, 11, 21, // Skip to: 9387
/* 4000 */    MCD::OPC_CheckField, 0, 2, 0, 5, 21, // Skip to: 9387
/* 4006 */    MCD::OPC_Decode, 173, 6, 54, // Opcode: SLBIE
/* 4010 */    MCD::OPC_FilterValue, 14, 32, 0, // Skip to: 4046
/* 4014 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4017 */    MCD::OPC_FilterValue, 2, 246, 20, // Skip to: 9387
/* 4021 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 4024 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 4033
/* 4029 */    MCD::OPC_Decode, 191, 5, 35, // Opcode: MTLR
/* 4033 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 4042
/* 4038 */    MCD::OPC_Decode, 183, 5, 35, // Opcode: MTCTR
/* 4042 */    MCD::OPC_Decode, 197, 5, 55, // Opcode: MTSPR
/* 4046 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 4066
/* 4050 */    MCD::OPC_CheckField, 11, 15, 0, 211, 20, // Skip to: 9387
/* 4056 */    MCD::OPC_CheckField, 0, 2, 0, 205, 20, // Skip to: 9387
/* 4062 */    MCD::OPC_Decode, 172, 6, 23, // Opcode: SLBIA
/* 4066 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4080
/* 4070 */    MCD::OPC_CheckField, 1, 1, 1, 191, 20, // Skip to: 9387
/* 4076 */    MCD::OPC_Decode, 173, 5, 52, // Opcode: MFSR
/* 4080 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 4094
/* 4084 */    MCD::OPC_CheckField, 1, 1, 1, 177, 20, // Skip to: 9387
/* 4090 */    MCD::OPC_Decode, 174, 5, 53, // Opcode: MFSRIN
/* 4094 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4114
/* 4098 */    MCD::OPC_CheckField, 21, 5, 0, 163, 20, // Skip to: 9387
/* 4104 */    MCD::OPC_CheckField, 0, 2, 0, 157, 20, // Skip to: 9387
/* 4110 */    MCD::OPC_Decode, 171, 7, 41, // Opcode: TLBIVAX
/* 4114 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 4161
/* 4118 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4121 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4139
/* 4125 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 4135
/* 4131 */    MCD::OPC_Decode, 176, 7, 41, // Opcode: TLBSX
/* 4135 */    MCD::OPC_Decode, 177, 7, 42, // Opcode: TLBSX2
/* 4139 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4147
/* 4143 */    MCD::OPC_Decode, 178, 7, 42, // Opcode: TLBSX2D
/* 4147 */    MCD::OPC_FilterValue, 2, 116, 20, // Skip to: 9387
/* 4151 */    MCD::OPC_CheckField, 16, 5, 0, 110, 20, // Skip to: 9387
/* 4157 */    MCD::OPC_Decode, 174, 6, 53, // Opcode: SLBMFEE
/* 4161 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 4186
/* 4165 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4168 */    MCD::OPC_FilterValue, 0, 95, 20, // Skip to: 9387
/* 4172 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 4182
/* 4178 */    MCD::OPC_Decode, 174, 7, 23, // Opcode: TLBRE
/* 4182 */    MCD::OPC_Decode, 175, 7, 56, // Opcode: TLBRE2
/* 4186 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 4221
/* 4190 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4193 */    MCD::OPC_FilterValue, 0, 70, 20, // Skip to: 9387
/* 4197 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 4207
/* 4203 */    MCD::OPC_Decode, 180, 7, 23, // Opcode: TLBWE
/* 4207 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 4217
/* 4213 */    MCD::OPC_Decode, 172, 7, 54, // Opcode: TLBLD
/* 4217 */    MCD::OPC_Decode, 181, 7, 56, // Opcode: TLBWE2
/* 4221 */    MCD::OPC_FilterValue, 31, 42, 20, // Skip to: 9387
/* 4225 */    MCD::OPC_CheckField, 16, 10, 0, 36, 20, // Skip to: 9387
/* 4231 */    MCD::OPC_CheckField, 0, 2, 0, 30, 20, // Skip to: 9387
/* 4237 */    MCD::OPC_Decode, 173, 7, 54, // Opcode: TLBLI
/* 4241 */    MCD::OPC_FilterValue, 10, 166, 0, // Skip to: 4411
/* 4245 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4248 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4271
/* 4252 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4255 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4263
/* 4259 */    MCD::OPC_Decode, 140, 5, 57, // Opcode: LWARX
/* 4263 */    MCD::OPC_FilterValue, 2, 0, 20, // Skip to: 9387
/* 4267 */    MCD::OPC_Decode, 218, 4, 58, // Opcode: LDX
/* 4271 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4285
/* 4275 */    MCD::OPC_CheckField, 0, 2, 2, 242, 19, // Skip to: 9387
/* 4281 */    MCD::OPC_Decode, 217, 4, 59, // Opcode: LDUX
/* 4285 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4299
/* 4289 */    MCD::OPC_CheckField, 0, 2, 0, 228, 19, // Skip to: 9387
/* 4295 */    MCD::OPC_Decode, 214, 4, 58, // Opcode: LDARX
/* 4299 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4313
/* 4303 */    MCD::OPC_CheckField, 0, 2, 2, 214, 19, // Skip to: 9387
/* 4309 */    MCD::OPC_Decode, 216, 6, 58, // Opcode: STDX
/* 4313 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4327
/* 4317 */    MCD::OPC_CheckField, 0, 2, 2, 200, 19, // Skip to: 9387
/* 4323 */    MCD::OPC_Decode, 215, 6, 60, // Opcode: STDUX
/* 4327 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4341
/* 4331 */    MCD::OPC_CheckField, 0, 2, 2, 186, 19, // Skip to: 9387
/* 4337 */    MCD::OPC_Decode, 142, 5, 58, // Opcode: LWAX
/* 4341 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4355
/* 4345 */    MCD::OPC_CheckField, 0, 2, 2, 172, 19, // Skip to: 9387
/* 4351 */    MCD::OPC_Decode, 141, 5, 59, // Opcode: LWAUX
/* 4355 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 4369
/* 4359 */    MCD::OPC_CheckField, 0, 2, 0, 158, 19, // Skip to: 9387
/* 4365 */    MCD::OPC_Decode, 215, 4, 58, // Opcode: LDBRX
/* 4369 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4383
/* 4373 */    MCD::OPC_CheckField, 0, 2, 2, 144, 19, // Skip to: 9387
/* 4379 */    MCD::OPC_Decode, 131, 5, 61, // Opcode: LSWI
/* 4383 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 4397
/* 4387 */    MCD::OPC_CheckField, 0, 2, 0, 130, 19, // Skip to: 9387
/* 4393 */    MCD::OPC_Decode, 212, 6, 58, // Opcode: STDBRX
/* 4397 */    MCD::OPC_FilterValue, 22, 122, 19, // Skip to: 9387
/* 4401 */    MCD::OPC_CheckField, 0, 2, 2, 116, 19, // Skip to: 9387
/* 4407 */    MCD::OPC_Decode, 236, 6, 61, // Opcode: STSWI
/* 4411 */    MCD::OPC_FilterValue, 11, 227, 2, // Skip to: 5154
/* 4415 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4418 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 4447
/* 4422 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4425 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4439
/* 4429 */    MCD::OPC_CheckField, 25, 1, 0, 88, 19, // Skip to: 9387
/* 4435 */    MCD::OPC_Decode, 192, 4, 62, // Opcode: ICBT
/* 4439 */    MCD::OPC_FilterValue, 2, 80, 19, // Skip to: 9387
/* 4443 */    MCD::OPC_Decode, 152, 5, 57, // Opcode: LWZX
/* 4447 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 4476
/* 4451 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4454 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4468
/* 4458 */    MCD::OPC_CheckField, 21, 5, 0, 59, 19, // Skip to: 9387
/* 4464 */    MCD::OPC_Decode, 234, 1, 63, // Opcode: DCBST
/* 4468 */    MCD::OPC_FilterValue, 2, 51, 19, // Skip to: 9387
/* 4472 */    MCD::OPC_Decode, 150, 5, 64, // Opcode: LWZUX
/* 4476 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 4505
/* 4480 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4483 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4497
/* 4487 */    MCD::OPC_CheckField, 21, 5, 0, 30, 19, // Skip to: 9387
/* 4493 */    MCD::OPC_Decode, 232, 1, 63, // Opcode: DCBF
/* 4497 */    MCD::OPC_FilterValue, 2, 22, 19, // Skip to: 9387
/* 4501 */    MCD::OPC_Decode, 211, 4, 57, // Opcode: LBZX
/* 4505 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4519
/* 4509 */    MCD::OPC_CheckField, 0, 2, 2, 8, 19, // Skip to: 9387
/* 4515 */    MCD::OPC_Decode, 209, 4, 64, // Opcode: LBZUX
/* 4519 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4542
/* 4523 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4526 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4534
/* 4530 */    MCD::OPC_Decode, 245, 6, 57, // Opcode: STWCX
/* 4534 */    MCD::OPC_FilterValue, 2, 241, 18, // Skip to: 9387
/* 4538 */    MCD::OPC_Decode, 250, 6, 57, // Opcode: STWX
/* 4542 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4556
/* 4546 */    MCD::OPC_CheckField, 0, 2, 2, 227, 18, // Skip to: 9387
/* 4552 */    MCD::OPC_Decode, 248, 6, 65, // Opcode: STWUX
/* 4556 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 4579
/* 4560 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4563 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4571
/* 4567 */    MCD::OPC_Decode, 213, 6, 58, // Opcode: STDCX
/* 4571 */    MCD::OPC_FilterValue, 2, 204, 18, // Skip to: 9387
/* 4575 */    MCD::OPC_Decode, 209, 6, 57, // Opcode: STBX
/* 4579 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4608
/* 4583 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4586 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4600
/* 4590 */    MCD::OPC_CheckField, 21, 5, 0, 183, 18, // Skip to: 9387
/* 4596 */    MCD::OPC_Decode, 236, 1, 63, // Opcode: DCBTST
/* 4600 */    MCD::OPC_FilterValue, 2, 175, 18, // Skip to: 9387
/* 4604 */    MCD::OPC_Decode, 207, 6, 65, // Opcode: STBUX
/* 4608 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 4637
/* 4612 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4615 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4629
/* 4619 */    MCD::OPC_CheckField, 21, 5, 0, 154, 18, // Skip to: 9387
/* 4625 */    MCD::OPC_Decode, 235, 1, 63, // Opcode: DCBT
/* 4629 */    MCD::OPC_FilterValue, 2, 146, 18, // Skip to: 9387
/* 4633 */    MCD::OPC_Decode, 252, 4, 57, // Opcode: LHZX
/* 4637 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 4651
/* 4641 */    MCD::OPC_CheckField, 0, 2, 2, 132, 18, // Skip to: 9387
/* 4647 */    MCD::OPC_Decode, 250, 4, 64, // Opcode: LHZUX
/* 4651 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 4689
/* 4655 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4658 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4681
/* 4662 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 4665 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4673
/* 4669 */    MCD::OPC_Decode, 250, 1, 66, // Opcode: DST
/* 4673 */    MCD::OPC_FilterValue, 4, 102, 18, // Skip to: 9387
/* 4677 */    MCD::OPC_Decode, 128, 2, 66, // Opcode: DSTT
/* 4681 */    MCD::OPC_FilterValue, 2, 94, 18, // Skip to: 9387
/* 4685 */    MCD::OPC_Decode, 243, 4, 57, // Opcode: LHAX
/* 4689 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 4727
/* 4693 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4696 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4719
/* 4700 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 4703 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4711
/* 4707 */    MCD::OPC_Decode, 252, 1, 66, // Opcode: DSTST
/* 4711 */    MCD::OPC_FilterValue, 4, 64, 18, // Skip to: 9387
/* 4715 */    MCD::OPC_Decode, 254, 1, 66, // Opcode: DSTSTT
/* 4719 */    MCD::OPC_FilterValue, 2, 56, 18, // Skip to: 9387
/* 4723 */    MCD::OPC_Decode, 241, 4, 64, // Opcode: LHAUX
/* 4727 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 4741
/* 4731 */    MCD::OPC_CheckField, 0, 2, 2, 42, 18, // Skip to: 9387
/* 4737 */    MCD::OPC_Decode, 233, 6, 57, // Opcode: STHX
/* 4741 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 4755
/* 4745 */    MCD::OPC_CheckField, 0, 2, 2, 28, 18, // Skip to: 9387
/* 4751 */    MCD::OPC_Decode, 231, 6, 65, // Opcode: STHUX
/* 4755 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 4775
/* 4759 */    MCD::OPC_CheckField, 21, 5, 0, 14, 18, // Skip to: 9387
/* 4765 */    MCD::OPC_CheckField, 0, 2, 0, 8, 18, // Skip to: 9387
/* 4771 */    MCD::OPC_Decode, 233, 1, 63, // Opcode: DCBI
/* 4775 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 4798
/* 4779 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4782 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4790
/* 4786 */    MCD::OPC_Decode, 145, 5, 57, // Opcode: LWBRX
/* 4790 */    MCD::OPC_FilterValue, 2, 241, 17, // Skip to: 9387
/* 4794 */    MCD::OPC_Decode, 236, 4, 67, // Opcode: LFSX
/* 4798 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 4827
/* 4802 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4805 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4819
/* 4809 */    MCD::OPC_CheckField, 11, 15, 0, 220, 17, // Skip to: 9387
/* 4815 */    MCD::OPC_Decode, 179, 7, 23, // Opcode: TLBSYNC
/* 4819 */    MCD::OPC_FilterValue, 2, 212, 17, // Skip to: 9387
/* 4823 */    MCD::OPC_Decode, 235, 4, 68, // Opcode: LFSUX
/* 4827 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 4862
/* 4831 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4834 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 4854
/* 4838 */    MCD::OPC_CheckField, 23, 3, 0, 191, 17, // Skip to: 9387
/* 4844 */    MCD::OPC_CheckField, 11, 10, 0, 185, 17, // Skip to: 9387
/* 4850 */    MCD::OPC_Decode, 153, 7, 69, // Opcode: SYNC
/* 4854 */    MCD::OPC_FilterValue, 2, 177, 17, // Skip to: 9387
/* 4858 */    MCD::OPC_Decode, 230, 4, 70, // Opcode: LFDX
/* 4862 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 4876
/* 4866 */    MCD::OPC_CheckField, 0, 2, 2, 163, 17, // Skip to: 9387
/* 4872 */    MCD::OPC_Decode, 229, 4, 71, // Opcode: LFDUX
/* 4876 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 4899
/* 4880 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4883 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4891
/* 4887 */    MCD::OPC_Decode, 244, 6, 57, // Opcode: STWBRX
/* 4891 */    MCD::OPC_FilterValue, 2, 140, 17, // Skip to: 9387
/* 4895 */    MCD::OPC_Decode, 225, 6, 67, // Opcode: STFSX
/* 4899 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 4913
/* 4903 */    MCD::OPC_CheckField, 0, 2, 2, 126, 17, // Skip to: 9387
/* 4909 */    MCD::OPC_Decode, 224, 6, 72, // Opcode: STFSUX
/* 4913 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4927
/* 4917 */    MCD::OPC_CheckField, 0, 2, 2, 112, 17, // Skip to: 9387
/* 4923 */    MCD::OPC_Decode, 220, 6, 70, // Opcode: STFDX
/* 4927 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 4956
/* 4931 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4934 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4948
/* 4938 */    MCD::OPC_CheckField, 21, 5, 0, 91, 17, // Skip to: 9387
/* 4944 */    MCD::OPC_Decode, 231, 1, 63, // Opcode: DCBA
/* 4948 */    MCD::OPC_FilterValue, 2, 83, 17, // Skip to: 9387
/* 4952 */    MCD::OPC_Decode, 219, 6, 73, // Opcode: STFDUX
/* 4956 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 4970
/* 4960 */    MCD::OPC_CheckField, 0, 2, 0, 69, 17, // Skip to: 9387
/* 4966 */    MCD::OPC_Decode, 245, 4, 57, // Opcode: LHBRX
/* 4970 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 5017
/* 4974 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 4977 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 4997
/* 4981 */    MCD::OPC_CheckField, 11, 10, 0, 48, 17, // Skip to: 9387
/* 4987 */    MCD::OPC_CheckField, 0, 2, 0, 42, 17, // Skip to: 9387
/* 4993 */    MCD::OPC_Decode, 248, 1, 74, // Opcode: DSS
/* 4997 */    MCD::OPC_FilterValue, 4, 34, 17, // Skip to: 9387
/* 5001 */    MCD::OPC_CheckField, 11, 12, 0, 28, 17, // Skip to: 9387
/* 5007 */    MCD::OPC_CheckField, 0, 2, 0, 22, 17, // Skip to: 9387
/* 5013 */    MCD::OPC_Decode, 249, 1, 23, // Opcode: DSSALL
/* 5017 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 5062
/* 5021 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5024 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 5048
/* 5028 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 5044
/* 5034 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 5044
/* 5040 */    MCD::OPC_Decode, 137, 2, 23, // Opcode: EIEIO
/* 5044 */    MCD::OPC_Decode, 159, 5, 75, // Opcode: MBAR
/* 5048 */    MCD::OPC_FilterValue, 1, 239, 16, // Skip to: 9387
/* 5052 */    MCD::OPC_CheckField, 0, 1, 0, 233, 16, // Skip to: 9387
/* 5058 */    MCD::OPC_Decode, 231, 4, 70, // Opcode: LFIWAX
/* 5062 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5076
/* 5066 */    MCD::OPC_CheckField, 0, 2, 2, 219, 16, // Skip to: 9387
/* 5072 */    MCD::OPC_Decode, 232, 4, 70, // Opcode: LFIWZX
/* 5076 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 5090
/* 5080 */    MCD::OPC_CheckField, 0, 2, 0, 205, 16, // Skip to: 9387
/* 5086 */    MCD::OPC_Decode, 228, 6, 57, // Opcode: STHBRX
/* 5090 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 5119
/* 5094 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5097 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5111
/* 5101 */    MCD::OPC_CheckField, 21, 5, 0, 184, 16, // Skip to: 9387
/* 5107 */    MCD::OPC_Decode, 191, 4, 63, // Opcode: ICBI
/* 5111 */    MCD::OPC_FilterValue, 2, 176, 16, // Skip to: 9387
/* 5115 */    MCD::OPC_Decode, 221, 6, 70, // Opcode: STFIWX
/* 5119 */    MCD::OPC_FilterValue, 31, 168, 16, // Skip to: 9387
/* 5123 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5126 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5140
/* 5130 */    MCD::OPC_CheckField, 0, 2, 0, 155, 16, // Skip to: 9387
/* 5136 */    MCD::OPC_Decode, 237, 1, 63, // Opcode: DCBZ
/* 5140 */    MCD::OPC_FilterValue, 1, 147, 16, // Skip to: 9387
/* 5144 */    MCD::OPC_CheckField, 0, 2, 0, 141, 16, // Skip to: 9387
/* 5150 */    MCD::OPC_Decode, 238, 1, 63, // Opcode: DCBZL
/* 5154 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 5253
/* 5158 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5161 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5184
/* 5165 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5168 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5176
/* 5172 */    MCD::OPC_Decode, 180, 6, 76, // Opcode: SLW
/* 5176 */    MCD::OPC_FilterValue, 1, 111, 16, // Skip to: 9387
/* 5180 */    MCD::OPC_Decode, 183, 6, 76, // Opcode: SLWo
/* 5184 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 5207
/* 5188 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5191 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5199
/* 5195 */    MCD::OPC_Decode, 199, 6, 76, // Opcode: SRW
/* 5199 */    MCD::OPC_FilterValue, 1, 88, 16, // Skip to: 9387
/* 5203 */    MCD::OPC_Decode, 202, 6, 76, // Opcode: SRWo
/* 5207 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5230
/* 5211 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5214 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5222
/* 5218 */    MCD::OPC_Decode, 191, 6, 76, // Opcode: SRAW
/* 5222 */    MCD::OPC_FilterValue, 1, 65, 16, // Skip to: 9387
/* 5226 */    MCD::OPC_Decode, 194, 6, 76, // Opcode: SRAWo
/* 5230 */    MCD::OPC_FilterValue, 25, 57, 16, // Skip to: 9387
/* 5234 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5237 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5245
/* 5241 */    MCD::OPC_Decode, 192, 6, 77, // Opcode: SRAWI
/* 5245 */    MCD::OPC_FilterValue, 1, 42, 16, // Skip to: 9387
/* 5249 */    MCD::OPC_Decode, 193, 6, 77, // Opcode: SRAWIo
/* 5253 */    MCD::OPC_FilterValue, 13, 47, 1, // Skip to: 5560
/* 5257 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5260 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 5311
/* 5264 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5267 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5281
/* 5271 */    MCD::OPC_CheckField, 11, 5, 0, 14, 16, // Skip to: 9387
/* 5277 */    MCD::OPC_Decode, 217, 1, 78, // Opcode: CNTLZW
/* 5281 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5295
/* 5285 */    MCD::OPC_CheckField, 11, 5, 0, 0, 16, // Skip to: 9387
/* 5291 */    MCD::OPC_Decode, 218, 1, 78, // Opcode: CNTLZWo
/* 5295 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5303
/* 5299 */    MCD::OPC_Decode, 176, 6, 79, // Opcode: SLD
/* 5303 */    MCD::OPC_FilterValue, 3, 240, 15, // Skip to: 9387
/* 5307 */    MCD::OPC_Decode, 179, 6, 79, // Opcode: SLDo
/* 5311 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 5346
/* 5315 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5318 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5332
/* 5322 */    MCD::OPC_CheckField, 11, 5, 0, 219, 15, // Skip to: 9387
/* 5328 */    MCD::OPC_Decode, 215, 1, 80, // Opcode: CNTLZD
/* 5332 */    MCD::OPC_FilterValue, 1, 211, 15, // Skip to: 9387
/* 5336 */    MCD::OPC_CheckField, 11, 5, 0, 205, 15, // Skip to: 9387
/* 5342 */    MCD::OPC_Decode, 216, 1, 80, // Opcode: CNTLZDo
/* 5346 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 5366
/* 5350 */    MCD::OPC_CheckField, 11, 5, 0, 191, 15, // Skip to: 9387
/* 5356 */    MCD::OPC_CheckField, 0, 2, 0, 185, 15, // Skip to: 9387
/* 5362 */    MCD::OPC_Decode, 247, 5, 78, // Opcode: POPCNTW
/* 5366 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 5386
/* 5370 */    MCD::OPC_CheckField, 11, 5, 0, 171, 15, // Skip to: 9387
/* 5376 */    MCD::OPC_CheckField, 0, 2, 0, 165, 15, // Skip to: 9387
/* 5382 */    MCD::OPC_Decode, 246, 5, 80, // Opcode: POPCNTD
/* 5386 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 5409
/* 5390 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5393 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5401
/* 5397 */    MCD::OPC_Decode, 195, 6, 79, // Opcode: SRD
/* 5401 */    MCD::OPC_FilterValue, 3, 142, 15, // Skip to: 9387
/* 5405 */    MCD::OPC_Decode, 198, 6, 79, // Opcode: SRDo
/* 5409 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5432
/* 5413 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5416 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5424
/* 5420 */    MCD::OPC_Decode, 187, 6, 79, // Opcode: SRAD
/* 5424 */    MCD::OPC_FilterValue, 1, 119, 15, // Skip to: 9387
/* 5428 */    MCD::OPC_Decode, 190, 6, 79, // Opcode: SRADo
/* 5432 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 5455
/* 5436 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 5439 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5447
/* 5443 */    MCD::OPC_Decode, 188, 6, 81, // Opcode: SRADI
/* 5447 */    MCD::OPC_FilterValue, 1, 96, 15, // Skip to: 9387
/* 5451 */    MCD::OPC_Decode, 189, 6, 81, // Opcode: SRADIo
/* 5455 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 5490
/* 5459 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5462 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5476
/* 5466 */    MCD::OPC_CheckField, 11, 5, 0, 75, 15, // Skip to: 9387
/* 5472 */    MCD::OPC_Decode, 198, 3, 78, // Opcode: EXTSH
/* 5476 */    MCD::OPC_FilterValue, 1, 67, 15, // Skip to: 9387
/* 5480 */    MCD::OPC_CheckField, 11, 5, 0, 61, 15, // Skip to: 9387
/* 5486 */    MCD::OPC_Decode, 202, 3, 78, // Opcode: EXTSHo
/* 5490 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 5525
/* 5494 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5497 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5511
/* 5501 */    MCD::OPC_CheckField, 11, 5, 0, 40, 15, // Skip to: 9387
/* 5507 */    MCD::OPC_Decode, 193, 3, 78, // Opcode: EXTSB
/* 5511 */    MCD::OPC_FilterValue, 1, 32, 15, // Skip to: 9387
/* 5515 */    MCD::OPC_CheckField, 11, 5, 0, 26, 15, // Skip to: 9387
/* 5521 */    MCD::OPC_Decode, 197, 3, 78, // Opcode: EXTSBo
/* 5525 */    MCD::OPC_FilterValue, 30, 18, 15, // Skip to: 9387
/* 5529 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5532 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5546
/* 5536 */    MCD::OPC_CheckField, 11, 5, 0, 5, 15, // Skip to: 9387
/* 5542 */    MCD::OPC_Decode, 203, 3, 80, // Opcode: EXTSW
/* 5546 */    MCD::OPC_FilterValue, 1, 253, 14, // Skip to: 9387
/* 5550 */    MCD::OPC_CheckField, 11, 5, 0, 247, 14, // Skip to: 9387
/* 5556 */    MCD::OPC_Decode, 206, 3, 80, // Opcode: EXTSWo
/* 5560 */    MCD::OPC_FilterValue, 14, 183, 0, // Skip to: 5747
/* 5564 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5567 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 5588
/* 5571 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5574 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5581
/* 5578 */    MCD::OPC_Decode, 65, 76, // Opcode: AND
/* 5581 */    MCD::OPC_FilterValue, 1, 218, 14, // Skip to: 9387
/* 5585 */    MCD::OPC_Decode, 80, 76, // Opcode: ANDo
/* 5588 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 5609
/* 5592 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5595 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5602
/* 5599 */    MCD::OPC_Decode, 68, 76, // Opcode: ANDC
/* 5602 */    MCD::OPC_FilterValue, 1, 197, 14, // Skip to: 9387
/* 5606 */    MCD::OPC_Decode, 71, 76, // Opcode: ANDCo
/* 5609 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 5632
/* 5613 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5616 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5624
/* 5620 */    MCD::OPC_Decode, 230, 5, 76, // Opcode: NOR
/* 5624 */    MCD::OPC_FilterValue, 1, 175, 14, // Skip to: 9387
/* 5628 */    MCD::OPC_Decode, 233, 5, 76, // Opcode: NORo
/* 5632 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5655
/* 5636 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5639 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5647
/* 5643 */    MCD::OPC_Decode, 138, 2, 76, // Opcode: EQV
/* 5647 */    MCD::OPC_FilterValue, 1, 152, 14, // Skip to: 9387
/* 5651 */    MCD::OPC_Decode, 141, 2, 76, // Opcode: EQVo
/* 5655 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 5678
/* 5659 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5662 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5670
/* 5666 */    MCD::OPC_Decode, 227, 8, 76, // Opcode: XOR
/* 5670 */    MCD::OPC_FilterValue, 1, 129, 14, // Skip to: 9387
/* 5674 */    MCD::OPC_Decode, 234, 8, 76, // Opcode: XORo
/* 5678 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5701
/* 5682 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5685 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5693
/* 5689 */    MCD::OPC_Decode, 237, 5, 76, // Opcode: ORC
/* 5693 */    MCD::OPC_FilterValue, 1, 106, 14, // Skip to: 9387
/* 5697 */    MCD::OPC_Decode, 240, 5, 76, // Opcode: ORCo
/* 5701 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5724
/* 5705 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5708 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5716
/* 5712 */    MCD::OPC_Decode, 234, 5, 76, // Opcode: OR
/* 5716 */    MCD::OPC_FilterValue, 1, 83, 14, // Skip to: 9387
/* 5720 */    MCD::OPC_Decode, 245, 5, 76, // Opcode: ORo
/* 5724 */    MCD::OPC_FilterValue, 14, 75, 14, // Skip to: 9387
/* 5728 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5731 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5739
/* 5735 */    MCD::OPC_Decode, 219, 5, 76, // Opcode: NAND
/* 5739 */    MCD::OPC_FilterValue, 1, 60, 14, // Skip to: 9387
/* 5743 */    MCD::OPC_Decode, 222, 5, 76, // Opcode: NANDo
/* 5747 */    MCD::OPC_FilterValue, 15, 52, 14, // Skip to: 9387
/* 5751 */    MCD::OPC_CheckField, 23, 3, 0, 46, 14, // Skip to: 9387
/* 5757 */    MCD::OPC_CheckField, 6, 15, 1, 40, 14, // Skip to: 9387
/* 5763 */    MCD::OPC_CheckField, 0, 2, 0, 34, 14, // Skip to: 9387
/* 5769 */    MCD::OPC_Decode, 224, 8, 69, // Opcode: WAIT
/* 5773 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 5781
/* 5777 */    MCD::OPC_Decode, 146, 5, 82, // Opcode: LWZ
/* 5781 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 5789
/* 5785 */    MCD::OPC_Decode, 148, 5, 82, // Opcode: LWZU
/* 5789 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 5797
/* 5793 */    MCD::OPC_Decode, 205, 4, 82, // Opcode: LBZ
/* 5797 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 5805
/* 5801 */    MCD::OPC_Decode, 207, 4, 82, // Opcode: LBZU
/* 5805 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 5813
/* 5809 */    MCD::OPC_Decode, 242, 6, 82, // Opcode: STW
/* 5813 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 5821
/* 5817 */    MCD::OPC_Decode, 246, 6, 82, // Opcode: STWU
/* 5821 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 5829
/* 5825 */    MCD::OPC_Decode, 203, 6, 82, // Opcode: STB
/* 5829 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 5837
/* 5833 */    MCD::OPC_Decode, 205, 6, 82, // Opcode: STBU
/* 5837 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 5845
/* 5841 */    MCD::OPC_Decode, 246, 4, 82, // Opcode: LHZ
/* 5845 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 5853
/* 5849 */    MCD::OPC_Decode, 248, 4, 82, // Opcode: LHZU
/* 5853 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 5861
/* 5857 */    MCD::OPC_Decode, 237, 4, 82, // Opcode: LHA
/* 5861 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 5869
/* 5865 */    MCD::OPC_Decode, 239, 4, 82, // Opcode: LHAU
/* 5869 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 5877
/* 5873 */    MCD::OPC_Decode, 226, 6, 82, // Opcode: STH
/* 5877 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 5885
/* 5881 */    MCD::OPC_Decode, 229, 6, 82, // Opcode: STHU
/* 5885 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 5893
/* 5889 */    MCD::OPC_Decode, 130, 5, 82, // Opcode: LMW
/* 5893 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 5901
/* 5897 */    MCD::OPC_Decode, 235, 6, 82, // Opcode: STMW
/* 5901 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 5909
/* 5905 */    MCD::OPC_Decode, 233, 4, 83, // Opcode: LFS
/* 5909 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 5917
/* 5913 */    MCD::OPC_Decode, 234, 4, 83, // Opcode: LFSU
/* 5917 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 5925
/* 5921 */    MCD::OPC_Decode, 227, 4, 84, // Opcode: LFD
/* 5925 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 5933
/* 5929 */    MCD::OPC_Decode, 228, 4, 84, // Opcode: LFDU
/* 5933 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 5941
/* 5937 */    MCD::OPC_Decode, 222, 6, 83, // Opcode: STFS
/* 5941 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 5949
/* 5945 */    MCD::OPC_Decode, 223, 6, 83, // Opcode: STFSU
/* 5949 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 5957
/* 5953 */    MCD::OPC_Decode, 217, 6, 84, // Opcode: STFD
/* 5957 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 5965
/* 5961 */    MCD::OPC_Decode, 218, 6, 84, // Opcode: STFDU
/* 5965 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 5996
/* 5969 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5972 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5980
/* 5976 */    MCD::OPC_Decode, 213, 4, 85, // Opcode: LD
/* 5980 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5988
/* 5984 */    MCD::OPC_Decode, 216, 4, 85, // Opcode: LDU
/* 5988 */    MCD::OPC_FilterValue, 2, 67, 13, // Skip to: 9387
/* 5992 */    MCD::OPC_Decode, 139, 5, 85, // Opcode: LWA
/* 5996 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 6369
/* 6000 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 6003 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 6038
/* 6007 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6010 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6024
/* 6014 */    MCD::OPC_CheckField, 16, 5, 0, 39, 13, // Skip to: 9387
/* 6020 */    MCD::OPC_Decode, 217, 3, 86, // Opcode: FCFIDS
/* 6024 */    MCD::OPC_FilterValue, 30, 31, 13, // Skip to: 9387
/* 6028 */    MCD::OPC_CheckField, 16, 5, 0, 25, 13, // Skip to: 9387
/* 6034 */    MCD::OPC_Decode, 220, 3, 86, // Opcode: FCFIDUS
/* 6038 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 6073
/* 6042 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6045 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6059
/* 6049 */    MCD::OPC_CheckField, 16, 5, 0, 4, 13, // Skip to: 9387
/* 6055 */    MCD::OPC_Decode, 218, 3, 86, // Opcode: FCFIDSo
/* 6059 */    MCD::OPC_FilterValue, 30, 252, 12, // Skip to: 9387
/* 6063 */    MCD::OPC_CheckField, 16, 5, 0, 246, 12, // Skip to: 9387
/* 6069 */    MCD::OPC_Decode, 221, 3, 86, // Opcode: FCFIDUSo
/* 6073 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 6087
/* 6077 */    MCD::OPC_CheckField, 6, 5, 0, 232, 12, // Skip to: 9387
/* 6083 */    MCD::OPC_Decode, 243, 3, 87, // Opcode: FDIVS
/* 6087 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 6101
/* 6091 */    MCD::OPC_CheckField, 6, 5, 0, 218, 12, // Skip to: 9387
/* 6097 */    MCD::OPC_Decode, 244, 3, 87, // Opcode: FDIVSo
/* 6101 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 6115
/* 6105 */    MCD::OPC_CheckField, 6, 5, 0, 204, 12, // Skip to: 9387
/* 6111 */    MCD::OPC_Decode, 183, 4, 87, // Opcode: FSUBS
/* 6115 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 6129
/* 6119 */    MCD::OPC_CheckField, 6, 5, 0, 190, 12, // Skip to: 9387
/* 6125 */    MCD::OPC_Decode, 184, 4, 87, // Opcode: FSUBSo
/* 6129 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 6143
/* 6133 */    MCD::OPC_CheckField, 6, 5, 0, 176, 12, // Skip to: 9387
/* 6139 */    MCD::OPC_Decode, 212, 3, 87, // Opcode: FADDS
/* 6143 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 6157
/* 6147 */    MCD::OPC_CheckField, 6, 5, 0, 162, 12, // Skip to: 9387
/* 6153 */    MCD::OPC_Decode, 213, 3, 87, // Opcode: FADDSo
/* 6157 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 6177
/* 6161 */    MCD::OPC_CheckField, 16, 5, 0, 148, 12, // Skip to: 9387
/* 6167 */    MCD::OPC_CheckField, 6, 5, 0, 142, 12, // Skip to: 9387
/* 6173 */    MCD::OPC_Decode, 179, 4, 88, // Opcode: FSQRTS
/* 6177 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 6197
/* 6181 */    MCD::OPC_CheckField, 16, 5, 0, 128, 12, // Skip to: 9387
/* 6187 */    MCD::OPC_CheckField, 6, 5, 0, 122, 12, // Skip to: 9387
/* 6193 */    MCD::OPC_Decode, 180, 4, 88, // Opcode: FSQRTSo
/* 6197 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 6217
/* 6201 */    MCD::OPC_CheckField, 16, 5, 0, 108, 12, // Skip to: 9387
/* 6207 */    MCD::OPC_CheckField, 6, 5, 0, 102, 12, // Skip to: 9387
/* 6213 */    MCD::OPC_Decode, 149, 4, 88, // Opcode: FRES
/* 6217 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 6237
/* 6221 */    MCD::OPC_CheckField, 16, 5, 0, 88, 12, // Skip to: 9387
/* 6227 */    MCD::OPC_CheckField, 6, 5, 0, 82, 12, // Skip to: 9387
/* 6233 */    MCD::OPC_Decode, 150, 4, 88, // Opcode: FRESo
/* 6237 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 6251
/* 6241 */    MCD::OPC_CheckField, 11, 5, 0, 68, 12, // Skip to: 9387
/* 6247 */    MCD::OPC_Decode, 129, 4, 89, // Opcode: FMULS
/* 6251 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 6265
/* 6255 */    MCD::OPC_CheckField, 11, 5, 0, 54, 12, // Skip to: 9387
/* 6261 */    MCD::OPC_Decode, 130, 4, 89, // Opcode: FMULSo
/* 6265 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 6285
/* 6269 */    MCD::OPC_CheckField, 16, 5, 0, 40, 12, // Skip to: 9387
/* 6275 */    MCD::OPC_CheckField, 6, 5, 0, 34, 12, // Skip to: 9387
/* 6281 */    MCD::OPC_Decode, 171, 4, 88, // Opcode: FRSQRTES
/* 6285 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 6305
/* 6289 */    MCD::OPC_CheckField, 16, 5, 0, 20, 12, // Skip to: 9387
/* 6295 */    MCD::OPC_CheckField, 6, 5, 0, 14, 12, // Skip to: 9387
/* 6301 */    MCD::OPC_Decode, 172, 4, 88, // Opcode: FRSQRTESo
/* 6305 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 6313
/* 6309 */    MCD::OPC_Decode, 253, 3, 90, // Opcode: FMSUBS
/* 6313 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 6321
/* 6317 */    MCD::OPC_Decode, 254, 3, 90, // Opcode: FMSUBSo
/* 6321 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 6329
/* 6325 */    MCD::OPC_Decode, 247, 3, 90, // Opcode: FMADDS
/* 6329 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 6337
/* 6333 */    MCD::OPC_Decode, 248, 3, 90, // Opcode: FMADDSo
/* 6337 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 6345
/* 6341 */    MCD::OPC_Decode, 145, 4, 90, // Opcode: FNMSUBS
/* 6345 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 6353
/* 6349 */    MCD::OPC_Decode, 146, 4, 90, // Opcode: FNMSUBSo
/* 6353 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 6361
/* 6357 */    MCD::OPC_Decode, 141, 4, 90, // Opcode: FNMADDS
/* 6361 */    MCD::OPC_FilterValue, 63, 206, 11, // Skip to: 9387
/* 6365 */    MCD::OPC_Decode, 142, 4, 90, // Opcode: FNMADDSo
/* 6369 */    MCD::OPC_FilterValue, 60, 250, 7, // Skip to: 8415
/* 6373 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 6376 */    MCD::OPC_FilterValue, 0, 16, 2, // Skip to: 6908
/* 6380 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6383 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 6406
/* 6387 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6390 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6398
/* 6394 */    MCD::OPC_Decode, 236, 8, 91, // Opcode: XSADDDP
/* 6398 */    MCD::OPC_FilterValue, 1, 169, 11, // Skip to: 9387
/* 6402 */    MCD::OPC_Decode, 249, 8, 92, // Opcode: XSMADDADP
/* 6406 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 6429
/* 6410 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6413 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6421
/* 6417 */    MCD::OPC_Decode, 142, 9, 91, // Opcode: XSSUBDP
/* 6421 */    MCD::OPC_FilterValue, 1, 146, 11, // Skip to: 9387
/* 6425 */    MCD::OPC_Decode, 250, 8, 92, // Opcode: XSMADDMDP
/* 6429 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 6452
/* 6433 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6436 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6444
/* 6440 */    MCD::OPC_Decode, 255, 8, 91, // Opcode: XSMULDP
/* 6444 */    MCD::OPC_FilterValue, 1, 123, 11, // Skip to: 9387
/* 6448 */    MCD::OPC_Decode, 253, 8, 92, // Opcode: XSMSUBADP
/* 6452 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 6475
/* 6456 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6459 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6467
/* 6463 */    MCD::OPC_Decode, 248, 8, 91, // Opcode: XSDIVDP
/* 6467 */    MCD::OPC_FilterValue, 1, 100, 11, // Skip to: 9387
/* 6471 */    MCD::OPC_Decode, 254, 8, 92, // Opcode: XSMSUBMDP
/* 6475 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 6498
/* 6479 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6482 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6490
/* 6486 */    MCD::OPC_Decode, 148, 9, 93, // Opcode: XVADDSP
/* 6490 */    MCD::OPC_FilterValue, 1, 77, 11, // Skip to: 9387
/* 6494 */    MCD::OPC_Decode, 184, 9, 94, // Opcode: XVMADDASP
/* 6498 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 6521
/* 6502 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6505 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6513
/* 6509 */    MCD::OPC_Decode, 226, 9, 93, // Opcode: XVSUBSP
/* 6513 */    MCD::OPC_FilterValue, 1, 54, 11, // Skip to: 9387
/* 6517 */    MCD::OPC_Decode, 186, 9, 94, // Opcode: XVMADDMSP
/* 6521 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 6544
/* 6525 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6528 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6536
/* 6532 */    MCD::OPC_Decode, 196, 9, 93, // Opcode: XVMULSP
/* 6536 */    MCD::OPC_FilterValue, 1, 31, 11, // Skip to: 9387
/* 6540 */    MCD::OPC_Decode, 192, 9, 94, // Opcode: XVMSUBASP
/* 6544 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 6567
/* 6548 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6551 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6559
/* 6555 */    MCD::OPC_Decode, 182, 9, 93, // Opcode: XVDIVSP
/* 6559 */    MCD::OPC_FilterValue, 1, 8, 11, // Skip to: 9387
/* 6563 */    MCD::OPC_Decode, 194, 9, 94, // Opcode: XVMSUBMSP
/* 6567 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 6590
/* 6571 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6574 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6582
/* 6578 */    MCD::OPC_Decode, 147, 9, 93, // Opcode: XVADDDP
/* 6582 */    MCD::OPC_FilterValue, 1, 241, 10, // Skip to: 9387
/* 6586 */    MCD::OPC_Decode, 183, 9, 94, // Opcode: XVMADDADP
/* 6590 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 6613
/* 6594 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6597 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6605
/* 6601 */    MCD::OPC_Decode, 225, 9, 93, // Opcode: XVSUBDP
/* 6605 */    MCD::OPC_FilterValue, 1, 218, 10, // Skip to: 9387
/* 6609 */    MCD::OPC_Decode, 185, 9, 94, // Opcode: XVMADDMDP
/* 6613 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 6636
/* 6617 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6620 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6628
/* 6624 */    MCD::OPC_Decode, 195, 9, 93, // Opcode: XVMULDP
/* 6628 */    MCD::OPC_FilterValue, 1, 195, 10, // Skip to: 9387
/* 6632 */    MCD::OPC_Decode, 191, 9, 94, // Opcode: XVMSUBADP
/* 6636 */    MCD::OPC_FilterValue, 15, 19, 0, // Skip to: 6659
/* 6640 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6643 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6651
/* 6647 */    MCD::OPC_Decode, 181, 9, 93, // Opcode: XVDIVDP
/* 6651 */    MCD::OPC_FilterValue, 1, 172, 10, // Skip to: 9387
/* 6655 */    MCD::OPC_Decode, 193, 9, 94, // Opcode: XVMSUBMDP
/* 6659 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 6682
/* 6663 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6666 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6674
/* 6670 */    MCD::OPC_Decode, 251, 8, 91, // Opcode: XSMAXDP
/* 6674 */    MCD::OPC_FilterValue, 1, 149, 10, // Skip to: 9387
/* 6678 */    MCD::OPC_Decode, 130, 9, 92, // Opcode: XSNMADDADP
/* 6682 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 6705
/* 6686 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6689 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6697
/* 6693 */    MCD::OPC_Decode, 252, 8, 91, // Opcode: XSMINDP
/* 6697 */    MCD::OPC_FilterValue, 1, 126, 10, // Skip to: 9387
/* 6701 */    MCD::OPC_Decode, 131, 9, 92, // Opcode: XSNMADDMDP
/* 6705 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 6728
/* 6709 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6712 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6720
/* 6716 */    MCD::OPC_Decode, 239, 8, 91, // Opcode: XSCPSGNDP
/* 6720 */    MCD::OPC_FilterValue, 1, 103, 10, // Skip to: 9387
/* 6724 */    MCD::OPC_Decode, 132, 9, 92, // Opcode: XSNMSUBADP
/* 6728 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6742
/* 6732 */    MCD::OPC_CheckField, 3, 1, 1, 89, 10, // Skip to: 9387
/* 6738 */    MCD::OPC_Decode, 133, 9, 92, // Opcode: XSNMSUBMDP
/* 6742 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 6765
/* 6746 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6749 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6757
/* 6753 */    MCD::OPC_Decode, 188, 9, 93, // Opcode: XVMAXSP
/* 6757 */    MCD::OPC_FilterValue, 1, 66, 10, // Skip to: 9387
/* 6761 */    MCD::OPC_Decode, 202, 9, 94, // Opcode: XVNMADDASP
/* 6765 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 6788
/* 6769 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6772 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6780
/* 6776 */    MCD::OPC_Decode, 190, 9, 93, // Opcode: XVMINSP
/* 6780 */    MCD::OPC_FilterValue, 1, 43, 10, // Skip to: 9387
/* 6784 */    MCD::OPC_Decode, 204, 9, 94, // Opcode: XVNMADDMSP
/* 6788 */    MCD::OPC_FilterValue, 26, 19, 0, // Skip to: 6811
/* 6792 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6795 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6803
/* 6799 */    MCD::OPC_Decode, 162, 9, 93, // Opcode: XVCPSGNSP
/* 6803 */    MCD::OPC_FilterValue, 1, 20, 10, // Skip to: 9387
/* 6807 */    MCD::OPC_Decode, 206, 9, 94, // Opcode: XVNMSUBASP
/* 6811 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6825
/* 6815 */    MCD::OPC_CheckField, 3, 1, 1, 6, 10, // Skip to: 9387
/* 6821 */    MCD::OPC_Decode, 208, 9, 94, // Opcode: XVNMSUBMSP
/* 6825 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 6848
/* 6829 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6832 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6840
/* 6836 */    MCD::OPC_Decode, 187, 9, 93, // Opcode: XVMAXDP
/* 6840 */    MCD::OPC_FilterValue, 1, 239, 9, // Skip to: 9387
/* 6844 */    MCD::OPC_Decode, 201, 9, 94, // Opcode: XVNMADDADP
/* 6848 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 6871
/* 6852 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6855 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6863
/* 6859 */    MCD::OPC_Decode, 189, 9, 93, // Opcode: XVMINDP
/* 6863 */    MCD::OPC_FilterValue, 1, 216, 9, // Skip to: 9387
/* 6867 */    MCD::OPC_Decode, 203, 9, 94, // Opcode: XVNMADDMDP
/* 6871 */    MCD::OPC_FilterValue, 30, 19, 0, // Skip to: 6894
/* 6875 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6878 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6886
/* 6882 */    MCD::OPC_Decode, 161, 9, 93, // Opcode: XVCPSGNDP
/* 6886 */    MCD::OPC_FilterValue, 1, 193, 9, // Skip to: 9387
/* 6890 */    MCD::OPC_Decode, 205, 9, 94, // Opcode: XVNMSUBADP
/* 6894 */    MCD::OPC_FilterValue, 31, 185, 9, // Skip to: 9387
/* 6898 */    MCD::OPC_CheckField, 3, 1, 1, 179, 9, // Skip to: 9387
/* 6904 */    MCD::OPC_Decode, 207, 9, 94, // Opcode: XVNMSUBMDP
/* 6908 */    MCD::OPC_FilterValue, 1, 92, 1, // Skip to: 7260
/* 6912 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 6915 */    MCD::OPC_FilterValue, 0, 100, 0, // Skip to: 7019
/* 6919 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6922 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 6960
/* 6926 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 6929 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6937
/* 6933 */    MCD::OPC_Decode, 241, 9, 95, // Opcode: XXSLDWI
/* 6937 */    MCD::OPC_FilterValue, 1, 142, 9, // Skip to: 9387
/* 6941 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 6944 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6952
/* 6948 */    MCD::OPC_Decode, 231, 9, 93, // Opcode: XXLAND
/* 6952 */    MCD::OPC_FilterValue, 1, 127, 9, // Skip to: 9387
/* 6956 */    MCD::OPC_Decode, 233, 9, 93, // Opcode: XXLNOR
/* 6960 */    MCD::OPC_FilterValue, 1, 119, 9, // Skip to: 9387
/* 6964 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 6967 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 6987
/* 6971 */    MCD::OPC_CheckField, 21, 2, 0, 106, 9, // Skip to: 9387
/* 6977 */    MCD::OPC_CheckField, 0, 1, 0, 100, 9, // Skip to: 9387
/* 6983 */    MCD::OPC_Decode, 238, 8, 96, // Opcode: XSCMPUDP
/* 6987 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6995
/* 6991 */    MCD::OPC_Decode, 151, 9, 93, // Opcode: XVCMPEQSP
/* 6995 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7003
/* 6999 */    MCD::OPC_Decode, 149, 9, 93, // Opcode: XVCMPEQDP
/* 7003 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7011
/* 7007 */    MCD::OPC_Decode, 152, 9, 93, // Opcode: XVCMPEQSPo
/* 7011 */    MCD::OPC_FilterValue, 7, 68, 9, // Skip to: 9387
/* 7015 */    MCD::OPC_Decode, 150, 9, 93, // Opcode: XVCMPEQDPo
/* 7019 */    MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 7114
/* 7023 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7026 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 7055
/* 7030 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 7033 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7041
/* 7037 */    MCD::OPC_Decode, 239, 9, 95, // Opcode: XXPERMDI
/* 7041 */    MCD::OPC_FilterValue, 1, 38, 9, // Skip to: 9387
/* 7045 */    MCD::OPC_CheckField, 8, 2, 0, 32, 9, // Skip to: 9387
/* 7051 */    MCD::OPC_Decode, 232, 9, 93, // Opcode: XXLANDC
/* 7055 */    MCD::OPC_FilterValue, 1, 24, 9, // Skip to: 9387
/* 7059 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 7062 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 7082
/* 7066 */    MCD::OPC_CheckField, 21, 2, 0, 11, 9, // Skip to: 9387
/* 7072 */    MCD::OPC_CheckField, 0, 1, 0, 5, 9, // Skip to: 9387
/* 7078 */    MCD::OPC_Decode, 237, 8, 96, // Opcode: XSCMPODP
/* 7082 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7090
/* 7086 */    MCD::OPC_Decode, 159, 9, 93, // Opcode: XVCMPGTSP
/* 7090 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7098
/* 7094 */    MCD::OPC_Decode, 157, 9, 93, // Opcode: XVCMPGTDP
/* 7098 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7106
/* 7102 */    MCD::OPC_Decode, 160, 9, 93, // Opcode: XVCMPGTSPo
/* 7106 */    MCD::OPC_FilterValue, 7, 229, 8, // Skip to: 9387
/* 7110 */    MCD::OPC_Decode, 158, 9, 93, // Opcode: XVCMPGTDPo
/* 7114 */    MCD::OPC_FilterValue, 2, 122, 0, // Skip to: 7240
/* 7118 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 7121 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7135
/* 7125 */    MCD::OPC_CheckField, 3, 1, 0, 208, 8, // Skip to: 9387
/* 7131 */    MCD::OPC_Decode, 237, 9, 93, // Opcode: XXMRGHW
/* 7135 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7149
/* 7139 */    MCD::OPC_CheckField, 3, 1, 0, 194, 8, // Skip to: 9387
/* 7145 */    MCD::OPC_Decode, 238, 9, 93, // Opcode: XXMRGLW
/* 7149 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 7184
/* 7153 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7156 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7176
/* 7160 */    MCD::OPC_CheckField, 18, 3, 0, 173, 8, // Skip to: 9387
/* 7166 */    MCD::OPC_CheckField, 2, 1, 0, 167, 8, // Skip to: 9387
/* 7172 */    MCD::OPC_Decode, 242, 9, 97, // Opcode: XXSPLTW
/* 7176 */    MCD::OPC_FilterValue, 1, 159, 8, // Skip to: 9387
/* 7180 */    MCD::OPC_Decode, 155, 9, 93, // Opcode: XVCMPGESP
/* 7184 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 7198
/* 7188 */    MCD::OPC_CheckField, 3, 1, 1, 145, 8, // Skip to: 9387
/* 7194 */    MCD::OPC_Decode, 153, 9, 93, // Opcode: XVCMPGEDP
/* 7198 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 7212
/* 7202 */    MCD::OPC_CheckField, 3, 1, 0, 131, 8, // Skip to: 9387
/* 7208 */    MCD::OPC_Decode, 234, 9, 93, // Opcode: XXLOR
/* 7212 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 7226
/* 7216 */    MCD::OPC_CheckField, 3, 1, 1, 117, 8, // Skip to: 9387
/* 7222 */    MCD::OPC_Decode, 156, 9, 93, // Opcode: XVCMPGESPo
/* 7226 */    MCD::OPC_FilterValue, 7, 109, 8, // Skip to: 9387
/* 7230 */    MCD::OPC_CheckField, 3, 1, 1, 103, 8, // Skip to: 9387
/* 7236 */    MCD::OPC_Decode, 154, 9, 93, // Opcode: XVCMPGEDPo
/* 7240 */    MCD::OPC_FilterValue, 3, 95, 8, // Skip to: 9387
/* 7244 */    MCD::OPC_CheckField, 8, 3, 4, 89, 8, // Skip to: 9387
/* 7250 */    MCD::OPC_CheckField, 3, 1, 0, 83, 8, // Skip to: 9387
/* 7256 */    MCD::OPC_Decode, 236, 9, 93, // Opcode: XXLXOR
/* 7260 */    MCD::OPC_FilterValue, 2, 119, 4, // Skip to: 8407
/* 7264 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7267 */    MCD::OPC_FilterValue, 4, 59, 0, // Skip to: 7330
/* 7271 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7274 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7288
/* 7278 */    MCD::OPC_CheckField, 16, 5, 0, 55, 8, // Skip to: 9387
/* 7284 */    MCD::OPC_Decode, 244, 8, 98, // Opcode: XSCVDPUXWS
/* 7288 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7302
/* 7292 */    MCD::OPC_CheckField, 16, 5, 0, 41, 8, // Skip to: 9387
/* 7298 */    MCD::OPC_Decode, 134, 9, 98, // Opcode: XSRDPI
/* 7302 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7316
/* 7306 */    MCD::OPC_CheckField, 16, 5, 0, 27, 8, // Skip to: 9387
/* 7312 */    MCD::OPC_Decode, 140, 9, 98, // Opcode: XSRSQRTEDP
/* 7316 */    MCD::OPC_FilterValue, 3, 19, 8, // Skip to: 9387
/* 7320 */    MCD::OPC_CheckField, 16, 5, 0, 13, 8, // Skip to: 9387
/* 7326 */    MCD::OPC_Decode, 141, 9, 98, // Opcode: XSSQRTDP
/* 7330 */    MCD::OPC_FilterValue, 5, 45, 0, // Skip to: 7379
/* 7334 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7337 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7351
/* 7341 */    MCD::OPC_CheckField, 16, 5, 0, 248, 7, // Skip to: 9387
/* 7347 */    MCD::OPC_Decode, 242, 8, 98, // Opcode: XSCVDPSXWS
/* 7351 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7365
/* 7355 */    MCD::OPC_CheckField, 16, 5, 0, 234, 7, // Skip to: 9387
/* 7361 */    MCD::OPC_Decode, 138, 9, 98, // Opcode: XSRDPIZ
/* 7365 */    MCD::OPC_FilterValue, 2, 226, 7, // Skip to: 9387
/* 7369 */    MCD::OPC_CheckField, 16, 5, 0, 220, 7, // Skip to: 9387
/* 7375 */    MCD::OPC_Decode, 139, 9, 98, // Opcode: XSREDP
/* 7379 */    MCD::OPC_FilterValue, 6, 51, 0, // Skip to: 7434
/* 7383 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7386 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7400
/* 7390 */    MCD::OPC_CheckField, 16, 5, 0, 199, 7, // Skip to: 9387
/* 7396 */    MCD::OPC_Decode, 137, 9, 98, // Opcode: XSRDPIP
/* 7400 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7420
/* 7404 */    MCD::OPC_CheckField, 16, 7, 0, 185, 7, // Skip to: 9387
/* 7410 */    MCD::OPC_CheckField, 0, 1, 0, 179, 7, // Skip to: 9387
/* 7416 */    MCD::OPC_Decode, 144, 9, 99, // Opcode: XSTSQRTDP
/* 7420 */    MCD::OPC_FilterValue, 3, 171, 7, // Skip to: 9387
/* 7424 */    MCD::OPC_CheckField, 16, 5, 0, 165, 7, // Skip to: 9387
/* 7430 */    MCD::OPC_Decode, 135, 9, 98, // Opcode: XSRDPIC
/* 7434 */    MCD::OPC_FilterValue, 7, 43, 0, // Skip to: 7481
/* 7438 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7441 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7461
/* 7445 */    MCD::OPC_CheckField, 16, 5, 0, 144, 7, // Skip to: 9387
/* 7451 */    MCD::OPC_CheckField, 2, 1, 1, 138, 7, // Skip to: 9387
/* 7457 */    MCD::OPC_Decode, 136, 9, 98, // Opcode: XSRDPIM
/* 7461 */    MCD::OPC_FilterValue, 1, 130, 7, // Skip to: 9387
/* 7465 */    MCD::OPC_CheckField, 21, 2, 0, 124, 7, // Skip to: 9387
/* 7471 */    MCD::OPC_CheckField, 0, 1, 0, 118, 7, // Skip to: 9387
/* 7477 */    MCD::OPC_Decode, 143, 9, 96, // Opcode: XSTDIVDP
/* 7481 */    MCD::OPC_FilterValue, 8, 59, 0, // Skip to: 7544
/* 7485 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7488 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7502
/* 7492 */    MCD::OPC_CheckField, 16, 5, 0, 97, 7, // Skip to: 9387
/* 7498 */    MCD::OPC_Decode, 172, 9, 100, // Opcode: XVCVSPUXWS
/* 7502 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7516
/* 7506 */    MCD::OPC_CheckField, 16, 5, 0, 83, 7, // Skip to: 9387
/* 7512 */    MCD::OPC_Decode, 216, 9, 100, // Opcode: XVRSPI
/* 7516 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7530
/* 7520 */    MCD::OPC_CheckField, 16, 5, 0, 69, 7, // Skip to: 9387
/* 7526 */    MCD::OPC_Decode, 222, 9, 100, // Opcode: XVRSQRTESP
/* 7530 */    MCD::OPC_FilterValue, 3, 61, 7, // Skip to: 9387
/* 7534 */    MCD::OPC_CheckField, 16, 5, 0, 55, 7, // Skip to: 9387
/* 7540 */    MCD::OPC_Decode, 224, 9, 100, // Opcode: XVSQRTSP
/* 7544 */    MCD::OPC_FilterValue, 9, 45, 0, // Skip to: 7593
/* 7548 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7551 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7565
/* 7555 */    MCD::OPC_CheckField, 16, 5, 0, 34, 7, // Skip to: 9387
/* 7561 */    MCD::OPC_Decode, 170, 9, 100, // Opcode: XVCVSPSXWS
/* 7565 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7579
/* 7569 */    MCD::OPC_CheckField, 16, 5, 0, 20, 7, // Skip to: 9387
/* 7575 */    MCD::OPC_Decode, 220, 9, 100, // Opcode: XVRSPIZ
/* 7579 */    MCD::OPC_FilterValue, 2, 12, 7, // Skip to: 9387
/* 7583 */    MCD::OPC_CheckField, 16, 5, 0, 6, 7, // Skip to: 9387
/* 7589 */    MCD::OPC_Decode, 215, 9, 100, // Opcode: XVRESP
/* 7593 */    MCD::OPC_FilterValue, 10, 65, 0, // Skip to: 7662
/* 7597 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7600 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7614
/* 7604 */    MCD::OPC_CheckField, 16, 5, 0, 241, 6, // Skip to: 9387
/* 7610 */    MCD::OPC_Decode, 180, 9, 100, // Opcode: XVCVUXWSP
/* 7614 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7628
/* 7618 */    MCD::OPC_CheckField, 16, 5, 0, 227, 6, // Skip to: 9387
/* 7624 */    MCD::OPC_Decode, 219, 9, 100, // Opcode: XVRSPIP
/* 7628 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7648
/* 7632 */    MCD::OPC_CheckField, 16, 7, 0, 213, 6, // Skip to: 9387
/* 7638 */    MCD::OPC_CheckField, 0, 1, 0, 207, 6, // Skip to: 9387
/* 7644 */    MCD::OPC_Decode, 230, 9, 101, // Opcode: XVTSQRTSP
/* 7648 */    MCD::OPC_FilterValue, 3, 199, 6, // Skip to: 9387
/* 7652 */    MCD::OPC_CheckField, 16, 5, 0, 193, 6, // Skip to: 9387
/* 7658 */    MCD::OPC_Decode, 217, 9, 100, // Opcode: XVRSPIC
/* 7662 */    MCD::OPC_FilterValue, 11, 58, 0, // Skip to: 7724
/* 7666 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7669 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 7704
/* 7673 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 7676 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7690
/* 7680 */    MCD::OPC_CheckField, 16, 5, 0, 165, 6, // Skip to: 9387
/* 7686 */    MCD::OPC_Decode, 176, 9, 100, // Opcode: XVCVSXWSP
/* 7690 */    MCD::OPC_FilterValue, 1, 157, 6, // Skip to: 9387
/* 7694 */    MCD::OPC_CheckField, 16, 5, 0, 151, 6, // Skip to: 9387
/* 7700 */    MCD::OPC_Decode, 218, 9, 100, // Opcode: XVRSPIM
/* 7704 */    MCD::OPC_FilterValue, 1, 143, 6, // Skip to: 9387
/* 7708 */    MCD::OPC_CheckField, 21, 2, 0, 137, 6, // Skip to: 9387
/* 7714 */    MCD::OPC_CheckField, 0, 1, 0, 131, 6, // Skip to: 9387
/* 7720 */    MCD::OPC_Decode, 228, 9, 102, // Opcode: XVTDIVSP
/* 7724 */    MCD::OPC_FilterValue, 12, 59, 0, // Skip to: 7787
/* 7728 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7731 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7745
/* 7735 */    MCD::OPC_CheckField, 16, 5, 0, 110, 6, // Skip to: 9387
/* 7741 */    MCD::OPC_Decode, 167, 9, 100, // Opcode: XVCVDPUXWS
/* 7745 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7759
/* 7749 */    MCD::OPC_CheckField, 16, 5, 0, 96, 6, // Skip to: 9387
/* 7755 */    MCD::OPC_Decode, 209, 9, 100, // Opcode: XVRDPI
/* 7759 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7773
/* 7763 */    MCD::OPC_CheckField, 16, 5, 0, 82, 6, // Skip to: 9387
/* 7769 */    MCD::OPC_Decode, 221, 9, 100, // Opcode: XVRSQRTEDP
/* 7773 */    MCD::OPC_FilterValue, 3, 74, 6, // Skip to: 9387
/* 7777 */    MCD::OPC_CheckField, 16, 5, 0, 68, 6, // Skip to: 9387
/* 7783 */    MCD::OPC_Decode, 223, 9, 100, // Opcode: XVSQRTDP
/* 7787 */    MCD::OPC_FilterValue, 13, 45, 0, // Skip to: 7836
/* 7791 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7794 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7808
/* 7798 */    MCD::OPC_CheckField, 16, 5, 0, 47, 6, // Skip to: 9387
/* 7804 */    MCD::OPC_Decode, 165, 9, 100, // Opcode: XVCVDPSXWS
/* 7808 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7822
/* 7812 */    MCD::OPC_CheckField, 16, 5, 0, 33, 6, // Skip to: 9387
/* 7818 */    MCD::OPC_Decode, 213, 9, 100, // Opcode: XVRDPIZ
/* 7822 */    MCD::OPC_FilterValue, 2, 25, 6, // Skip to: 9387
/* 7826 */    MCD::OPC_CheckField, 16, 5, 0, 19, 6, // Skip to: 9387
/* 7832 */    MCD::OPC_Decode, 214, 9, 100, // Opcode: XVREDP
/* 7836 */    MCD::OPC_FilterValue, 14, 65, 0, // Skip to: 7905
/* 7840 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7843 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7857
/* 7847 */    MCD::OPC_CheckField, 16, 5, 0, 254, 5, // Skip to: 9387
/* 7853 */    MCD::OPC_Decode, 179, 9, 100, // Opcode: XVCVUXWDP
/* 7857 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7871
/* 7861 */    MCD::OPC_CheckField, 16, 5, 0, 240, 5, // Skip to: 9387
/* 7867 */    MCD::OPC_Decode, 212, 9, 100, // Opcode: XVRDPIP
/* 7871 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7891
/* 7875 */    MCD::OPC_CheckField, 16, 7, 0, 226, 5, // Skip to: 9387
/* 7881 */    MCD::OPC_CheckField, 0, 1, 0, 220, 5, // Skip to: 9387
/* 7887 */    MCD::OPC_Decode, 229, 9, 101, // Opcode: XVTSQRTDP
/* 7891 */    MCD::OPC_FilterValue, 3, 212, 5, // Skip to: 9387
/* 7895 */    MCD::OPC_CheckField, 16, 5, 0, 206, 5, // Skip to: 9387
/* 7901 */    MCD::OPC_Decode, 210, 9, 100, // Opcode: XVRDPIC
/* 7905 */    MCD::OPC_FilterValue, 15, 58, 0, // Skip to: 7967
/* 7909 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7912 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 7947
/* 7916 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 7919 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7933
/* 7923 */    MCD::OPC_CheckField, 16, 5, 0, 178, 5, // Skip to: 9387
/* 7929 */    MCD::OPC_Decode, 175, 9, 100, // Opcode: XVCVSXWDP
/* 7933 */    MCD::OPC_FilterValue, 1, 170, 5, // Skip to: 9387
/* 7937 */    MCD::OPC_CheckField, 16, 5, 0, 164, 5, // Skip to: 9387
/* 7943 */    MCD::OPC_Decode, 211, 9, 100, // Opcode: XVRDPIM
/* 7947 */    MCD::OPC_FilterValue, 1, 156, 5, // Skip to: 9387
/* 7951 */    MCD::OPC_CheckField, 21, 2, 0, 150, 5, // Skip to: 9387
/* 7957 */    MCD::OPC_CheckField, 0, 1, 0, 144, 5, // Skip to: 9387
/* 7963 */    MCD::OPC_Decode, 227, 9, 102, // Opcode: XVTDIVDP
/* 7967 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 7987
/* 7971 */    MCD::OPC_CheckField, 16, 5, 0, 130, 5, // Skip to: 9387
/* 7977 */    MCD::OPC_CheckField, 2, 2, 1, 124, 5, // Skip to: 9387
/* 7983 */    MCD::OPC_Decode, 240, 8, 98, // Opcode: XSCVDPSP
/* 7987 */    MCD::OPC_FilterValue, 20, 31, 0, // Skip to: 8022
/* 7991 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7994 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8008
/* 7998 */    MCD::OPC_CheckField, 16, 5, 0, 103, 5, // Skip to: 9387
/* 8004 */    MCD::OPC_Decode, 243, 8, 98, // Opcode: XSCVDPUXDS
/* 8008 */    MCD::OPC_FilterValue, 1, 95, 5, // Skip to: 9387
/* 8012 */    MCD::OPC_CheckField, 16, 5, 0, 89, 5, // Skip to: 9387
/* 8018 */    MCD::OPC_Decode, 245, 8, 98, // Opcode: XSCVSPDP
/* 8022 */    MCD::OPC_FilterValue, 21, 31, 0, // Skip to: 8057
/* 8026 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8029 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8043
/* 8033 */    MCD::OPC_CheckField, 16, 5, 0, 68, 5, // Skip to: 9387
/* 8039 */    MCD::OPC_Decode, 241, 8, 98, // Opcode: XSCVDPSXDS
/* 8043 */    MCD::OPC_FilterValue, 1, 60, 5, // Skip to: 9387
/* 8047 */    MCD::OPC_CheckField, 16, 5, 0, 54, 5, // Skip to: 9387
/* 8053 */    MCD::OPC_Decode, 235, 8, 98, // Opcode: XSABSDP
/* 8057 */    MCD::OPC_FilterValue, 22, 31, 0, // Skip to: 8092
/* 8061 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8064 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8078
/* 8068 */    MCD::OPC_CheckField, 16, 5, 0, 33, 5, // Skip to: 9387
/* 8074 */    MCD::OPC_Decode, 247, 8, 98, // Opcode: XSCVUXDDP
/* 8078 */    MCD::OPC_FilterValue, 1, 25, 5, // Skip to: 9387
/* 8082 */    MCD::OPC_CheckField, 16, 5, 0, 19, 5, // Skip to: 9387
/* 8088 */    MCD::OPC_Decode, 128, 9, 98, // Opcode: XSNABSDP
/* 8092 */    MCD::OPC_FilterValue, 23, 31, 0, // Skip to: 8127
/* 8096 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8099 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8113
/* 8103 */    MCD::OPC_CheckField, 16, 5, 0, 254, 4, // Skip to: 9387
/* 8109 */    MCD::OPC_Decode, 246, 8, 98, // Opcode: XSCVSXDDP
/* 8113 */    MCD::OPC_FilterValue, 1, 246, 4, // Skip to: 9387
/* 8117 */    MCD::OPC_CheckField, 16, 5, 0, 240, 4, // Skip to: 9387
/* 8123 */    MCD::OPC_Decode, 129, 9, 98, // Opcode: XSNEGDP
/* 8127 */    MCD::OPC_FilterValue, 24, 31, 0, // Skip to: 8162
/* 8131 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8134 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8148
/* 8138 */    MCD::OPC_CheckField, 16, 5, 0, 219, 4, // Skip to: 9387
/* 8144 */    MCD::OPC_Decode, 171, 9, 100, // Opcode: XVCVSPUXDS
/* 8148 */    MCD::OPC_FilterValue, 1, 211, 4, // Skip to: 9387
/* 8152 */    MCD::OPC_CheckField, 16, 5, 0, 205, 4, // Skip to: 9387
/* 8158 */    MCD::OPC_Decode, 163, 9, 100, // Opcode: XVCVDPSP
/* 8162 */    MCD::OPC_FilterValue, 25, 31, 0, // Skip to: 8197
/* 8166 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8169 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8183
/* 8173 */    MCD::OPC_CheckField, 16, 5, 0, 184, 4, // Skip to: 9387
/* 8179 */    MCD::OPC_Decode, 169, 9, 100, // Opcode: XVCVSPSXDS
/* 8183 */    MCD::OPC_FilterValue, 1, 176, 4, // Skip to: 9387
/* 8187 */    MCD::OPC_CheckField, 16, 5, 0, 170, 4, // Skip to: 9387
/* 8193 */    MCD::OPC_Decode, 146, 9, 100, // Opcode: XVABSSP
/* 8197 */    MCD::OPC_FilterValue, 26, 31, 0, // Skip to: 8232
/* 8201 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8204 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8218
/* 8208 */    MCD::OPC_CheckField, 16, 5, 0, 149, 4, // Skip to: 9387
/* 8214 */    MCD::OPC_Decode, 178, 9, 100, // Opcode: XVCVUXDSP
/* 8218 */    MCD::OPC_FilterValue, 1, 141, 4, // Skip to: 9387
/* 8222 */    MCD::OPC_CheckField, 16, 5, 0, 135, 4, // Skip to: 9387
/* 8228 */    MCD::OPC_Decode, 198, 9, 100, // Opcode: XVNABSSP
/* 8232 */    MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 8267
/* 8236 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8239 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8253
/* 8243 */    MCD::OPC_CheckField, 16, 5, 0, 114, 4, // Skip to: 9387
/* 8249 */    MCD::OPC_Decode, 174, 9, 100, // Opcode: XVCVSXDSP
/* 8253 */    MCD::OPC_FilterValue, 1, 106, 4, // Skip to: 9387
/* 8257 */    MCD::OPC_CheckField, 16, 5, 0, 100, 4, // Skip to: 9387
/* 8263 */    MCD::OPC_Decode, 200, 9, 100, // Opcode: XVNEGSP
/* 8267 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8302
/* 8271 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8274 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8288
/* 8278 */    MCD::OPC_CheckField, 16, 5, 0, 79, 4, // Skip to: 9387
/* 8284 */    MCD::OPC_Decode, 166, 9, 100, // Opcode: XVCVDPUXDS
/* 8288 */    MCD::OPC_FilterValue, 1, 71, 4, // Skip to: 9387
/* 8292 */    MCD::OPC_CheckField, 16, 5, 0, 65, 4, // Skip to: 9387
/* 8298 */    MCD::OPC_Decode, 168, 9, 100, // Opcode: XVCVSPDP
/* 8302 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8337
/* 8306 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8309 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8323
/* 8313 */    MCD::OPC_CheckField, 16, 5, 0, 44, 4, // Skip to: 9387
/* 8319 */    MCD::OPC_Decode, 164, 9, 100, // Opcode: XVCVDPSXDS
/* 8323 */    MCD::OPC_FilterValue, 1, 36, 4, // Skip to: 9387
/* 8327 */    MCD::OPC_CheckField, 16, 5, 0, 30, 4, // Skip to: 9387
/* 8333 */    MCD::OPC_Decode, 145, 9, 100, // Opcode: XVABSDP
/* 8337 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 8372
/* 8341 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8344 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8358
/* 8348 */    MCD::OPC_CheckField, 16, 5, 0, 9, 4, // Skip to: 9387
/* 8354 */    MCD::OPC_Decode, 177, 9, 100, // Opcode: XVCVUXDDP
/* 8358 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 9387
/* 8362 */    MCD::OPC_CheckField, 16, 5, 0, 251, 3, // Skip to: 9387
/* 8368 */    MCD::OPC_Decode, 197, 9, 100, // Opcode: XVNABSDP
/* 8372 */    MCD::OPC_FilterValue, 31, 243, 3, // Skip to: 9387
/* 8376 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8379 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8393
/* 8383 */    MCD::OPC_CheckField, 16, 5, 0, 230, 3, // Skip to: 9387
/* 8389 */    MCD::OPC_Decode, 173, 9, 100, // Opcode: XVCVSXDDP
/* 8393 */    MCD::OPC_FilterValue, 1, 222, 3, // Skip to: 9387
/* 8397 */    MCD::OPC_CheckField, 16, 5, 0, 216, 3, // Skip to: 9387
/* 8403 */    MCD::OPC_Decode, 199, 9, 100, // Opcode: XVNEGDP
/* 8407 */    MCD::OPC_FilterValue, 3, 208, 3, // Skip to: 9387
/* 8411 */    MCD::OPC_Decode, 240, 9, 103, // Opcode: XXSEL
/* 8415 */    MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 8438
/* 8419 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8422 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8430
/* 8426 */    MCD::OPC_Decode, 211, 6, 85, // Opcode: STD
/* 8430 */    MCD::OPC_FilterValue, 1, 185, 3, // Skip to: 9387
/* 8434 */    MCD::OPC_Decode, 214, 6, 85, // Opcode: STDU
/* 8438 */    MCD::OPC_FilterValue, 63, 177, 3, // Skip to: 9387
/* 8442 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 8445 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 8465
/* 8449 */    MCD::OPC_CheckField, 21, 2, 0, 164, 3, // Skip to: 9387
/* 8455 */    MCD::OPC_CheckField, 6, 5, 0, 158, 3, // Skip to: 9387
/* 8461 */    MCD::OPC_Decode, 225, 3, 104, // Opcode: FCMPUS
/* 8465 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 8488
/* 8469 */    MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 8472 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8480
/* 8476 */    MCD::OPC_Decode, 189, 5, 75, // Opcode: MTFSB1
/* 8480 */    MCD::OPC_FilterValue, 2, 135, 3, // Skip to: 9387
/* 8484 */    MCD::OPC_Decode, 188, 5, 75, // Opcode: MTFSB0
/* 8488 */    MCD::OPC_FilterValue, 14, 37, 0, // Skip to: 8529
/* 8492 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8495 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 8509
/* 8499 */    MCD::OPC_CheckField, 11, 10, 0, 114, 3, // Skip to: 9387
/* 8505 */    MCD::OPC_Decode, 166, 5, 105, // Opcode: MFFS
/* 8509 */    MCD::OPC_FilterValue, 22, 106, 3, // Skip to: 9387
/* 8513 */    MCD::OPC_CheckField, 25, 1, 0, 100, 3, // Skip to: 9387
/* 8519 */    MCD::OPC_CheckField, 16, 1, 0, 94, 3, // Skip to: 9387
/* 8525 */    MCD::OPC_Decode, 190, 5, 106, // Opcode: MTFSF
/* 8529 */    MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 8656
/* 8533 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8536 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8544
/* 8540 */    MCD::OPC_Decode, 228, 3, 87, // Opcode: FCPSGNS
/* 8544 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8558
/* 8548 */    MCD::OPC_CheckField, 16, 5, 0, 65, 3, // Skip to: 9387
/* 8554 */    MCD::OPC_Decode, 138, 4, 88, // Opcode: FNEGS
/* 8558 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8572
/* 8562 */    MCD::OPC_CheckField, 16, 5, 0, 51, 3, // Skip to: 9387
/* 8568 */    MCD::OPC_Decode, 250, 3, 88, // Opcode: FMR
/* 8572 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8586
/* 8576 */    MCD::OPC_CheckField, 16, 5, 0, 37, 3, // Skip to: 9387
/* 8582 */    MCD::OPC_Decode, 134, 4, 88, // Opcode: FNABSS
/* 8586 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 8600
/* 8590 */    MCD::OPC_CheckField, 16, 5, 0, 23, 3, // Skip to: 9387
/* 8596 */    MCD::OPC_Decode, 209, 3, 88, // Opcode: FABSS
/* 8600 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 8614
/* 8604 */    MCD::OPC_CheckField, 16, 5, 0, 9, 3, // Skip to: 9387
/* 8610 */    MCD::OPC_Decode, 158, 4, 88, // Opcode: FRINS
/* 8614 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 8628
/* 8618 */    MCD::OPC_CheckField, 16, 5, 0, 251, 2, // Skip to: 9387
/* 8624 */    MCD::OPC_Decode, 166, 4, 88, // Opcode: FRIZS
/* 8628 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 8642
/* 8632 */    MCD::OPC_CheckField, 16, 5, 0, 237, 2, // Skip to: 9387
/* 8638 */    MCD::OPC_Decode, 162, 4, 88, // Opcode: FRIPS
/* 8642 */    MCD::OPC_FilterValue, 15, 229, 2, // Skip to: 9387
/* 8646 */    MCD::OPC_CheckField, 16, 5, 0, 223, 2, // Skip to: 9387
/* 8652 */    MCD::OPC_Decode, 154, 4, 88, // Opcode: FRIMS
/* 8656 */    MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 8783
/* 8660 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8663 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8671
/* 8667 */    MCD::OPC_Decode, 229, 3, 87, // Opcode: FCPSGNSo
/* 8671 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8685
/* 8675 */    MCD::OPC_CheckField, 16, 5, 0, 194, 2, // Skip to: 9387
/* 8681 */    MCD::OPC_Decode, 139, 4, 88, // Opcode: FNEGSo
/* 8685 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8699
/* 8689 */    MCD::OPC_CheckField, 16, 5, 0, 180, 2, // Skip to: 9387
/* 8695 */    MCD::OPC_Decode, 251, 3, 88, // Opcode: FMRo
/* 8699 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8713
/* 8703 */    MCD::OPC_CheckField, 16, 5, 0, 166, 2, // Skip to: 9387
/* 8709 */    MCD::OPC_Decode, 135, 4, 88, // Opcode: FNABSSo
/* 8713 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 8727
/* 8717 */    MCD::OPC_CheckField, 16, 5, 0, 152, 2, // Skip to: 9387
/* 8723 */    MCD::OPC_Decode, 210, 3, 88, // Opcode: FABSSo
/* 8727 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 8741
/* 8731 */    MCD::OPC_CheckField, 16, 5, 0, 138, 2, // Skip to: 9387
/* 8737 */    MCD::OPC_Decode, 159, 4, 88, // Opcode: FRINSo
/* 8741 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 8755
/* 8745 */    MCD::OPC_CheckField, 16, 5, 0, 124, 2, // Skip to: 9387
/* 8751 */    MCD::OPC_Decode, 167, 4, 88, // Opcode: FRIZSo
/* 8755 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 8769
/* 8759 */    MCD::OPC_CheckField, 16, 5, 0, 110, 2, // Skip to: 9387
/* 8765 */    MCD::OPC_Decode, 163, 4, 88, // Opcode: FRIPSo
/* 8769 */    MCD::OPC_FilterValue, 15, 102, 2, // Skip to: 9387
/* 8773 */    MCD::OPC_CheckField, 16, 5, 0, 96, 2, // Skip to: 9387
/* 8779 */    MCD::OPC_Decode, 155, 4, 88, // Opcode: FRIMSo
/* 8783 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 8803
/* 8787 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 9387
/* 8793 */    MCD::OPC_CheckField, 6, 5, 0, 76, 2, // Skip to: 9387
/* 8799 */    MCD::OPC_Decode, 168, 4, 86, // Opcode: FRSP
/* 8803 */    MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 8823
/* 8807 */    MCD::OPC_CheckField, 16, 5, 0, 62, 2, // Skip to: 9387
/* 8813 */    MCD::OPC_CheckField, 6, 5, 0, 56, 2, // Skip to: 9387
/* 8819 */    MCD::OPC_Decode, 169, 4, 86, // Opcode: FRSPo
/* 8823 */    MCD::OPC_FilterValue, 28, 59, 0, // Skip to: 8886
/* 8827 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8830 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8844
/* 8834 */    MCD::OPC_CheckField, 16, 5, 0, 35, 2, // Skip to: 9387
/* 8840 */    MCD::OPC_Decode, 236, 3, 107, // Opcode: FCTIW
/* 8844 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8858
/* 8848 */    MCD::OPC_CheckField, 16, 5, 0, 21, 2, // Skip to: 9387
/* 8854 */    MCD::OPC_Decode, 230, 3, 107, // Opcode: FCTID
/* 8858 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8872
/* 8862 */    MCD::OPC_CheckField, 16, 5, 0, 7, 2, // Skip to: 9387
/* 8868 */    MCD::OPC_Decode, 216, 3, 107, // Opcode: FCFID
/* 8872 */    MCD::OPC_FilterValue, 30, 255, 1, // Skip to: 9387
/* 8876 */    MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 9387
/* 8882 */    MCD::OPC_Decode, 219, 3, 107, // Opcode: FCFIDU
/* 8886 */    MCD::OPC_FilterValue, 29, 59, 0, // Skip to: 8949
/* 8890 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8893 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8907
/* 8897 */    MCD::OPC_CheckField, 16, 5, 0, 228, 1, // Skip to: 9387
/* 8903 */    MCD::OPC_Decode, 241, 3, 107, // Opcode: FCTIWo
/* 8907 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8921
/* 8911 */    MCD::OPC_CheckField, 16, 5, 0, 214, 1, // Skip to: 9387
/* 8917 */    MCD::OPC_Decode, 235, 3, 107, // Opcode: FCTIDo
/* 8921 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8935
/* 8925 */    MCD::OPC_CheckField, 16, 5, 0, 200, 1, // Skip to: 9387
/* 8931 */    MCD::OPC_Decode, 223, 3, 107, // Opcode: FCFIDo
/* 8935 */    MCD::OPC_FilterValue, 30, 192, 1, // Skip to: 9387
/* 8939 */    MCD::OPC_CheckField, 16, 5, 0, 186, 1, // Skip to: 9387
/* 8945 */    MCD::OPC_Decode, 222, 3, 107, // Opcode: FCFIDUo
/* 8949 */    MCD::OPC_FilterValue, 30, 59, 0, // Skip to: 9012
/* 8953 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8956 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8970
/* 8960 */    MCD::OPC_CheckField, 16, 5, 0, 165, 1, // Skip to: 9387
/* 8966 */    MCD::OPC_Decode, 239, 3, 107, // Opcode: FCTIWZ
/* 8970 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8984
/* 8974 */    MCD::OPC_CheckField, 16, 5, 0, 151, 1, // Skip to: 9387
/* 8980 */    MCD::OPC_Decode, 237, 3, 107, // Opcode: FCTIWUZ
/* 8984 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8998
/* 8988 */    MCD::OPC_CheckField, 16, 5, 0, 137, 1, // Skip to: 9387
/* 8994 */    MCD::OPC_Decode, 233, 3, 107, // Opcode: FCTIDZ
/* 8998 */    MCD::OPC_FilterValue, 29, 129, 1, // Skip to: 9387
/* 9002 */    MCD::OPC_CheckField, 16, 5, 0, 123, 1, // Skip to: 9387
/* 9008 */    MCD::OPC_Decode, 231, 3, 107, // Opcode: FCTIDUZ
/* 9012 */    MCD::OPC_FilterValue, 31, 59, 0, // Skip to: 9075
/* 9016 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9019 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9033
/* 9023 */    MCD::OPC_CheckField, 16, 5, 0, 102, 1, // Skip to: 9387
/* 9029 */    MCD::OPC_Decode, 240, 3, 107, // Opcode: FCTIWZo
/* 9033 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 9047
/* 9037 */    MCD::OPC_CheckField, 16, 5, 0, 88, 1, // Skip to: 9387
/* 9043 */    MCD::OPC_Decode, 238, 3, 107, // Opcode: FCTIWUZo
/* 9047 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 9061
/* 9051 */    MCD::OPC_CheckField, 16, 5, 0, 74, 1, // Skip to: 9387
/* 9057 */    MCD::OPC_Decode, 234, 3, 107, // Opcode: FCTIDZo
/* 9061 */    MCD::OPC_FilterValue, 29, 66, 1, // Skip to: 9387
/* 9065 */    MCD::OPC_CheckField, 16, 5, 0, 60, 1, // Skip to: 9387
/* 9071 */    MCD::OPC_Decode, 232, 3, 107, // Opcode: FCTIDUZo
/* 9075 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 9089
/* 9079 */    MCD::OPC_CheckField, 6, 5, 0, 46, 1, // Skip to: 9387
/* 9085 */    MCD::OPC_Decode, 242, 3, 108, // Opcode: FDIV
/* 9089 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 9103
/* 9093 */    MCD::OPC_CheckField, 6, 5, 0, 32, 1, // Skip to: 9387
/* 9099 */    MCD::OPC_Decode, 245, 3, 108, // Opcode: FDIVo
/* 9103 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 9117
/* 9107 */    MCD::OPC_CheckField, 6, 5, 0, 18, 1, // Skip to: 9387
/* 9113 */    MCD::OPC_Decode, 182, 4, 108, // Opcode: FSUB
/* 9117 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 9131
/* 9121 */    MCD::OPC_CheckField, 6, 5, 0, 4, 1, // Skip to: 9387
/* 9127 */    MCD::OPC_Decode, 185, 4, 108, // Opcode: FSUBo
/* 9131 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 9145
/* 9135 */    MCD::OPC_CheckField, 6, 5, 0, 246, 0, // Skip to: 9387
/* 9141 */    MCD::OPC_Decode, 211, 3, 108, // Opcode: FADD
/* 9145 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 9159
/* 9149 */    MCD::OPC_CheckField, 6, 5, 0, 232, 0, // Skip to: 9387
/* 9155 */    MCD::OPC_Decode, 214, 3, 108, // Opcode: FADDo
/* 9159 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 9179
/* 9163 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 9387
/* 9169 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 9387
/* 9175 */    MCD::OPC_Decode, 178, 4, 107, // Opcode: FSQRT
/* 9179 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 9199
/* 9183 */    MCD::OPC_CheckField, 16, 5, 0, 198, 0, // Skip to: 9387
/* 9189 */    MCD::OPC_CheckField, 6, 5, 0, 192, 0, // Skip to: 9387
/* 9195 */    MCD::OPC_Decode, 181, 4, 107, // Opcode: FSQRTo
/* 9199 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 9207
/* 9203 */    MCD::OPC_Decode, 176, 4, 109, // Opcode: FSELS
/* 9207 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 9215
/* 9211 */    MCD::OPC_Decode, 177, 4, 109, // Opcode: FSELSo
/* 9215 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 9235
/* 9219 */    MCD::OPC_CheckField, 16, 5, 0, 162, 0, // Skip to: 9387
/* 9225 */    MCD::OPC_CheckField, 6, 5, 0, 156, 0, // Skip to: 9387
/* 9231 */    MCD::OPC_Decode, 148, 4, 107, // Opcode: FRE
/* 9235 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 9255
/* 9239 */    MCD::OPC_CheckField, 16, 5, 0, 142, 0, // Skip to: 9387
/* 9245 */    MCD::OPC_CheckField, 6, 5, 0, 136, 0, // Skip to: 9387
/* 9251 */    MCD::OPC_Decode, 151, 4, 107, // Opcode: FREo
/* 9255 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 9269
/* 9259 */    MCD::OPC_CheckField, 11, 5, 0, 122, 0, // Skip to: 9387
/* 9265 */    MCD::OPC_Decode, 128, 4, 110, // Opcode: FMUL
/* 9269 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 9283
/* 9273 */    MCD::OPC_CheckField, 11, 5, 0, 108, 0, // Skip to: 9387
/* 9279 */    MCD::OPC_Decode, 131, 4, 110, // Opcode: FMULo
/* 9283 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 9303
/* 9287 */    MCD::OPC_CheckField, 16, 5, 0, 94, 0, // Skip to: 9387
/* 9293 */    MCD::OPC_CheckField, 6, 5, 0, 88, 0, // Skip to: 9387
/* 9299 */    MCD::OPC_Decode, 170, 4, 107, // Opcode: FRSQRTE
/* 9303 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 9323
/* 9307 */    MCD::OPC_CheckField, 16, 5, 0, 74, 0, // Skip to: 9387
/* 9313 */    MCD::OPC_CheckField, 6, 5, 0, 68, 0, // Skip to: 9387
/* 9319 */    MCD::OPC_Decode, 173, 4, 107, // Opcode: FRSQRTEo
/* 9323 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 9331
/* 9327 */    MCD::OPC_Decode, 252, 3, 111, // Opcode: FMSUB
/* 9331 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 9339
/* 9335 */    MCD::OPC_Decode, 255, 3, 111, // Opcode: FMSUBo
/* 9339 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 9347
/* 9343 */    MCD::OPC_Decode, 246, 3, 111, // Opcode: FMADD
/* 9347 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 9355
/* 9351 */    MCD::OPC_Decode, 249, 3, 111, // Opcode: FMADDo
/* 9355 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 9363
/* 9359 */    MCD::OPC_Decode, 144, 4, 111, // Opcode: FNMSUB
/* 9363 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 9371
/* 9367 */    MCD::OPC_Decode, 147, 4, 111, // Opcode: FNMSUBo
/* 9371 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 9379
/* 9375 */    MCD::OPC_Decode, 140, 4, 111, // Opcode: FNMADD
/* 9379 */    MCD::OPC_FilterValue, 63, 4, 0, // Skip to: 9387
/* 9383 */    MCD::OPC_Decode, 143, 4, 111, // Opcode: FNMADDo
/* 9387 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 4);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 2, 24);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 98:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
