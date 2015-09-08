/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Sparc target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*74 cases */, 102|128,3/*486*/, TARGET_VAL(ISD::STORE),// ->491
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'st' chained node
/*7*/         OPC_Scope, 94, /*->103*/ // 2 children in Scope
/*9*/           OPC_CheckChild1Integer, 0, 
/*11*/          OPC_Scope, 43, /*->56*/ // 2 children in Scope
/*13*/            OPC_CheckChild1Type, MVT::i32,
/*15*/            OPC_RecordChild2, // #1 = $dst
/*16*/            OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*18*/            OPC_CheckPredicate, 1, // Predicate_store
/*20*/            OPC_Scope, 16, /*->38*/ // 2 children in Scope
/*22*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*25*/              OPC_EmitMergeInputChains1_0,
/*26*/              OPC_EmitRegister, MVT::i32, SP::G0,
/*29*/              OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i32, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STrr ADDRrr:iPTR:$dst, G0:i32)
/*38*/            /*Scope*/ 16, /*->55*/
/*39*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*42*/              OPC_EmitMergeInputChains1_0,
/*43*/              OPC_EmitRegister, MVT::i32, SP::G0,
/*46*/              OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i32, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STri ADDRri:iPTR:$dst, G0:i32)
/*55*/            0, /*End of Scope*/
/*56*/          /*Scope*/ 45, /*->102*/
/*57*/            OPC_CheckChild1Type, MVT::i64,
/*59*/            OPC_RecordChild2, // #1 = $dst
/*60*/            OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*62*/            OPC_CheckPredicate, 1, // Predicate_store
/*64*/            OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*66*/            OPC_Scope, 16, /*->84*/ // 2 children in Scope
/*68*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*71*/              OPC_EmitMergeInputChains1_0,
/*72*/              OPC_EmitRegister, MVT::i64, SP::G0,
/*75*/              OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i64, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXrr ADDRrr:iPTR:$dst, G0:i64)
/*84*/            /*Scope*/ 16, /*->101*/
/*85*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*88*/              OPC_EmitMergeInputChains1_0,
/*89*/              OPC_EmitRegister, MVT::i64, SP::G0,
/*92*/              OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i64, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXri ADDRri:iPTR:$dst, G0:i64)
/*101*/           0, /*End of Scope*/
/*102*/         0, /*End of Scope*/
/*103*/       /*Scope*/ 1|128,3/*385*/, /*->490*/
/*105*/         OPC_RecordChild1, // #1 = $rd
/*106*/         OPC_Scope, 111, /*->219*/ // 5 children in Scope
/*108*/           OPC_CheckChild1Type, MVT::i32,
/*110*/           OPC_RecordChild2, // #2 = $addr
/*111*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*113*/           OPC_Scope, 70, /*->185*/ // 2 children in Scope
/*115*/             OPC_CheckPredicate, 2, // Predicate_truncstore
/*117*/             OPC_Scope, 32, /*->151*/ // 2 children in Scope
/*119*/               OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*121*/               OPC_Scope, 13, /*->136*/ // 2 children in Scope
/*123*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*126*/                 OPC_EmitMergeInputChains1_0,
/*127*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*136*/               /*Scope*/ 13, /*->150*/
/*137*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*140*/                 OPC_EmitMergeInputChains1_0,
/*141*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$rd)
/*150*/               0, /*End of Scope*/
/*151*/             /*Scope*/ 32, /*->184*/
/*152*/               OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*154*/               OPC_Scope, 13, /*->169*/ // 2 children in Scope
/*156*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*159*/                 OPC_EmitMergeInputChains1_0,
/*160*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*169*/               /*Scope*/ 13, /*->183*/
/*170*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*173*/                 OPC_EmitMergeInputChains1_0,
/*174*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$rd)
/*183*/               0, /*End of Scope*/
/*184*/             0, /*End of Scope*/
/*185*/           /*Scope*/ 32, /*->218*/
/*186*/             OPC_CheckPredicate, 1, // Predicate_store
/*188*/             OPC_Scope, 13, /*->203*/ // 2 children in Scope
/*190*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*193*/               OPC_EmitMergeInputChains1_0,
/*194*/               OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*203*/             /*Scope*/ 13, /*->217*/
/*204*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*207*/               OPC_EmitMergeInputChains1_0,
/*208*/               OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$rd)
/*217*/             0, /*End of Scope*/
/*218*/           0, /*End of Scope*/
/*219*/         /*Scope*/ 37, /*->257*/
/*220*/           OPC_CheckChild1Type, MVT::f32,
/*222*/           OPC_RecordChild2, // #2 = $addr
/*223*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*225*/           OPC_CheckPredicate, 1, // Predicate_store
/*227*/           OPC_Scope, 13, /*->242*/ // 2 children in Scope
/*229*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*232*/             OPC_EmitMergeInputChains1_0,
/*233*/             OPC_MorphNodeTo, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:f32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$rd)
/*242*/           /*Scope*/ 13, /*->256*/
/*243*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*246*/             OPC_EmitMergeInputChains1_0,
/*247*/             OPC_MorphNodeTo, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:f32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$rd)
/*256*/           0, /*End of Scope*/
/*257*/         /*Scope*/ 37, /*->295*/
/*258*/           OPC_CheckChild1Type, MVT::f64,
/*260*/           OPC_RecordChild2, // #2 = $addr
/*261*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*263*/           OPC_CheckPredicate, 1, // Predicate_store
/*265*/           OPC_Scope, 13, /*->280*/ // 2 children in Scope
/*267*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*270*/             OPC_EmitMergeInputChains1_0,
/*271*/             OPC_MorphNodeTo, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:f64:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$rd)
/*280*/           /*Scope*/ 13, /*->294*/
/*281*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*284*/             OPC_EmitMergeInputChains1_0,
/*285*/             OPC_MorphNodeTo, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:f64:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$rd)
/*294*/           0, /*End of Scope*/
/*295*/         /*Scope*/ 39, /*->335*/
/*296*/           OPC_CheckChild1Type, MVT::f128,
/*298*/           OPC_RecordChild2, // #2 = $addr
/*299*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*301*/           OPC_CheckPredicate, 1, // Predicate_store
/*303*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isV9()) && (Subtarget.hasHardQuad())
/*305*/           OPC_Scope, 13, /*->320*/ // 2 children in Scope
/*307*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*310*/             OPC_EmitMergeInputChains1_0,
/*311*/             OPC_MorphNodeTo, TARGET_VAL(SP::STQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:f128:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFrr ADDRrr:iPTR:$addr, f128:f128:$rd)
/*320*/           /*Scope*/ 13, /*->334*/
/*321*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*324*/             OPC_EmitMergeInputChains1_0,
/*325*/             OPC_MorphNodeTo, TARGET_VAL(SP::STQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:f128:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFri ADDRri:iPTR:$addr, f128:f128:$rd)
/*334*/           0, /*End of Scope*/
/*335*/         /*Scope*/ 24|128,1/*152*/, /*->489*/
/*337*/           OPC_CheckChild1Type, MVT::i64,
/*339*/           OPC_RecordChild2, // #2 = $addr
/*340*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*342*/           OPC_Scope, 34, /*->378*/ // 2 children in Scope
/*344*/             OPC_CheckPredicate, 1, // Predicate_store
/*346*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*348*/             OPC_Scope, 13, /*->363*/ // 2 children in Scope
/*350*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*353*/               OPC_EmitMergeInputChains1_0,
/*354*/               OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$rd)
/*363*/             /*Scope*/ 13, /*->377*/
/*364*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*367*/               OPC_EmitMergeInputChains1_0,
/*368*/               OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$rd)
/*377*/             0, /*End of Scope*/
/*378*/           /*Scope*/ 109, /*->488*/
/*379*/             OPC_CheckPredicate, 2, // Predicate_truncstore
/*381*/             OPC_Scope, 34, /*->417*/ // 3 children in Scope
/*383*/               OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*385*/               OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*387*/               OPC_Scope, 13, /*->402*/ // 2 children in Scope
/*389*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*392*/                 OPC_EmitMergeInputChains1_0,
/*393*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*402*/               /*Scope*/ 13, /*->416*/
/*403*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*406*/                 OPC_EmitMergeInputChains1_0,
/*407*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*416*/               0, /*End of Scope*/
/*417*/             /*Scope*/ 34, /*->452*/
/*418*/               OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*420*/               OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*422*/               OPC_Scope, 13, /*->437*/ // 2 children in Scope
/*424*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*427*/                 OPC_EmitMergeInputChains1_0,
/*428*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*437*/               /*Scope*/ 13, /*->451*/
/*438*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*441*/                 OPC_EmitMergeInputChains1_0,
/*442*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*451*/               0, /*End of Scope*/
/*452*/             /*Scope*/ 34, /*->487*/
/*453*/               OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*455*/               OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*457*/               OPC_Scope, 13, /*->472*/ // 2 children in Scope
/*459*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*462*/                 OPC_EmitMergeInputChains1_0,
/*463*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*472*/               /*Scope*/ 13, /*->486*/
/*473*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*476*/                 OPC_EmitMergeInputChains1_0,
/*477*/                 OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*486*/               0, /*End of Scope*/
/*487*/             0, /*End of Scope*/
/*488*/           0, /*End of Scope*/
/*489*/         0, /*End of Scope*/
/*490*/       0, /*End of Scope*/
/*491*/     /*SwitchOpcode*/ 42, TARGET_VAL(SPISD::TLS_LD),// ->536
/*494*/       OPC_RecordChild0, // #0 = $addr
/*495*/       OPC_RecordChild1, // #1 = $sym
/*496*/       OPC_MoveChild, 1,
/*498*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*501*/       OPC_MoveParent,
/*502*/       OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->518
/*505*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*508*/         OPC_MorphNodeTo, TARGET_VAL(SP::TLS_LDrr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:i32 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym) - Complexity = 15
                // Dst: (TLS_LDrr:i32 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym)
/*518*/       /*SwitchType*/ 15, MVT::i64,// ->535
/*520*/         OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*522*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*525*/         OPC_MorphNodeTo, TARGET_VAL(SP::TLS_LDXrr), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:i64 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym) - Complexity = 15
                // Dst: (TLS_LDXrr:i64 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym)
/*535*/       0, // EndSwitchType
/*536*/     /*SwitchOpcode*/ 54|128,3/*438*/, TARGET_VAL(ISD::ADD),// ->978
/*540*/       OPC_Scope, 12|128,1/*140*/, /*->683*/ // 4 children in Scope
/*543*/         OPC_MoveChild, 0,
/*545*/         OPC_SwitchOpcode /*2 cases */, 65, TARGET_VAL(SPISD::Hi),// ->614
/*549*/           OPC_RecordChild0, // #0 = $in1
/*550*/           OPC_MoveChild, 0,
/*552*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*555*/           OPC_MoveParent,
/*556*/           OPC_MoveParent,
/*557*/           OPC_MoveChild, 1,
/*559*/           OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*562*/           OPC_RecordChild0, // #1 = $in2
/*563*/           OPC_MoveChild, 0,
/*565*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*568*/           OPC_MoveParent,
/*569*/           OPC_MoveParent,
/*570*/           OPC_Scope, 19, /*->591*/ // 2 children in Scope
/*572*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*574*/             OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*582*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (add:iPTR (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1), (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2)) - Complexity = 15
                    // Dst: (ADDri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*591*/           /*Scope*/ 21, /*->613*/
/*592*/             OPC_CheckType, MVT::i64,
/*594*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*596*/             OPC_EmitNode, TARGET_VAL(SP::SETHIXi), 0,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*604*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (add:i64 (SPhi:i64 (tglobaltlsaddr:i64):$in1), (SPlo:i64 (tglobaltlsaddr:i64):$in2)) - Complexity = 15
                    // Dst: (ADDXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*613*/           0, /*End of Scope*/
/*614*/         /*SwitchOpcode*/ 65, TARGET_VAL(SPISD::Lo),// ->682
/*617*/           OPC_RecordChild0, // #0 = $in2
/*618*/           OPC_MoveChild, 0,
/*620*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*623*/           OPC_MoveParent,
/*624*/           OPC_MoveParent,
/*625*/           OPC_MoveChild, 1,
/*627*/           OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*630*/           OPC_RecordChild0, // #1 = $in1
/*631*/           OPC_MoveChild, 0,
/*633*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*636*/           OPC_MoveParent,
/*637*/           OPC_MoveParent,
/*638*/           OPC_Scope, 19, /*->659*/ // 2 children in Scope
/*640*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*642*/             OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*650*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2), (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1)) - Complexity = 15
                    // Dst: (ADDri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*659*/           /*Scope*/ 21, /*->681*/
/*660*/             OPC_CheckType, MVT::i64,
/*662*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*664*/             OPC_EmitNode, TARGET_VAL(SP::SETHIXi), 0,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*672*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (add:i64 (SPlo:i64 (tglobaltlsaddr:i64):$in2), (SPhi:i64 (tglobaltlsaddr:i64):$in1)) - Complexity = 15
                    // Dst: (ADDXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*681*/           0, /*End of Scope*/
/*682*/         0, // EndSwitchOpcode
/*683*/       /*Scope*/ 110, /*->794*/
/*684*/         OPC_RecordChild0, // #0 = $r
/*685*/         OPC_MoveChild, 1,
/*687*/         OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*690*/         OPC_RecordChild0, // #1 = $in
/*691*/         OPC_MoveChild, 0,
/*693*/         OPC_SwitchOpcode /*3 cases */, 30, TARGET_VAL(ISD::TargetGlobalAddress),// ->727
/*697*/           OPC_MoveParent,
/*698*/           OPC_MoveParent,
/*699*/           OPC_Scope, 11, /*->712*/ // 2 children in Scope
/*701*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*703*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
/*712*/           /*Scope*/ 13, /*->726*/
/*713*/             OPC_CheckType, MVT::i64,
/*715*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*717*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tglobaladdr:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tglobaladdr:i64):$in)
/*726*/           0, /*End of Scope*/
/*727*/         /*SwitchOpcode*/ 30, TARGET_VAL(ISD::TargetConstantPool),// ->760
/*730*/           OPC_MoveParent,
/*731*/           OPC_MoveParent,
/*732*/           OPC_Scope, 11, /*->745*/ // 2 children in Scope
/*734*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*736*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
/*745*/           /*Scope*/ 13, /*->759*/
/*746*/             OPC_CheckType, MVT::i64,
/*748*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*750*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tconstpool:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tconstpool:i64):$in)
/*759*/           0, /*End of Scope*/
/*760*/         /*SwitchOpcode*/ 30, TARGET_VAL(ISD::TargetBlockAddress),// ->793
/*763*/           OPC_MoveParent,
/*764*/           OPC_MoveParent,
/*765*/           OPC_Scope, 11, /*->778*/ // 2 children in Scope
/*767*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*769*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tblockaddress:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
/*778*/           /*Scope*/ 13, /*->792*/
/*779*/             OPC_CheckType, MVT::i64,
/*781*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*783*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tblockaddress:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tblockaddress:i64):$in)
/*792*/           0, /*End of Scope*/
/*793*/         0, // EndSwitchOpcode
/*794*/       /*Scope*/ 112, /*->907*/
/*795*/         OPC_MoveChild, 0,
/*797*/         OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*800*/         OPC_RecordChild0, // #0 = $in
/*801*/         OPC_MoveChild, 0,
/*803*/         OPC_SwitchOpcode /*3 cases */, 31, TARGET_VAL(ISD::TargetGlobalAddress),// ->838
/*807*/           OPC_MoveParent,
/*808*/           OPC_MoveParent,
/*809*/           OPC_RecordChild1, // #1 = $r
/*810*/           OPC_Scope, 11, /*->823*/ // 2 children in Scope
/*812*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*814*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
/*823*/           /*Scope*/ 13, /*->837*/
/*824*/             OPC_CheckType, MVT::i64,
/*826*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*828*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tglobaladdr:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tglobaladdr:i64):$in)
/*837*/           0, /*End of Scope*/
/*838*/         /*SwitchOpcode*/ 31, TARGET_VAL(ISD::TargetConstantPool),// ->872
/*841*/           OPC_MoveParent,
/*842*/           OPC_MoveParent,
/*843*/           OPC_RecordChild1, // #1 = $r
/*844*/           OPC_Scope, 11, /*->857*/ // 2 children in Scope
/*846*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*848*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
/*857*/           /*Scope*/ 13, /*->871*/
/*858*/             OPC_CheckType, MVT::i64,
/*860*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*862*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tconstpool:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tconstpool:i64):$in)
/*871*/           0, /*End of Scope*/
/*872*/         /*SwitchOpcode*/ 31, TARGET_VAL(ISD::TargetBlockAddress),// ->906
/*875*/           OPC_MoveParent,
/*876*/           OPC_MoveParent,
/*877*/           OPC_RecordChild1, // #1 = $r
/*878*/           OPC_Scope, 11, /*->891*/ // 2 children in Scope
/*880*/             OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*882*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tblockaddress:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
/*891*/           /*Scope*/ 13, /*->905*/
/*892*/             OPC_CheckType, MVT::i64,
/*894*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*896*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tblockaddress:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tblockaddress:i64):$in)
/*905*/           0, /*End of Scope*/
/*906*/         0, // EndSwitchOpcode
/*907*/       /*Scope*/ 69, /*->977*/
/*908*/         OPC_RecordChild0, // #0 = $rs1
/*909*/         OPC_RecordChild1, // #1 = $simm13
/*910*/         OPC_Scope, 38, /*->950*/ // 3 children in Scope
/*912*/           OPC_MoveChild, 1,
/*914*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*917*/           OPC_CheckPredicate, 6, // Predicate_simm13
/*919*/           OPC_MoveParent,
/*920*/           OPC_SwitchType /*2 cases */, 11, MVT::i32,// ->934
/*923*/             OPC_EmitConvertToTarget, 1,
/*925*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*934*/           /*SwitchType*/ 13, MVT::i64,// ->949
/*936*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*938*/             OPC_EmitConvertToTarget, 1,
/*940*/             OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*949*/           0, // EndSwitchType
/*950*/         /*Scope*/ 11, /*->962*/
/*951*/           OPC_CheckType, MVT::i32,
/*953*/           OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ADDrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*962*/         /*Scope*/ 13, /*->976*/
/*963*/           OPC_CheckType, MVT::i64,
/*965*/           OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*967*/           OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ADDXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*976*/         0, /*End of Scope*/
/*977*/       0, /*End of Scope*/
/*978*/     /*SwitchOpcode*/ 0|128,3/*384*/, TARGET_VAL(ISD::XOR),// ->1366
/*982*/       OPC_Scope, 83|128,1/*211*/, /*->1196*/ // 4 children in Scope
/*985*/         OPC_MoveChild, 0,
/*987*/         OPC_SwitchOpcode /*3 cases */, 65, TARGET_VAL(SPISD::Hi),// ->1056
/*991*/           OPC_RecordChild0, // #0 = $in1
/*992*/           OPC_MoveChild, 0,
/*994*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*997*/           OPC_MoveParent,
/*998*/           OPC_MoveParent,
/*999*/           OPC_MoveChild, 1,
/*1001*/          OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*1004*/          OPC_RecordChild0, // #1 = $in2
/*1005*/          OPC_MoveChild, 0,
/*1007*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1010*/          OPC_MoveParent,
/*1011*/          OPC_MoveParent,
/*1012*/          OPC_Scope, 19, /*->1033*/ // 2 children in Scope
/*1014*/            OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*1016*/            OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*1024*/            OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:iPTR (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1), (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2)) - Complexity = 15
                    // Dst: (XORri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*1033*/          /*Scope*/ 21, /*->1055*/
/*1034*/            OPC_CheckType, MVT::i64,
/*1036*/            OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1038*/            OPC_EmitNode, TARGET_VAL(SP::SETHIXi), 0,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*1046*/            OPC_MorphNodeTo, TARGET_VAL(SP::XORXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:i64 (SPhi:i64 (tglobaltlsaddr:i64):$in1), (SPlo:i64 (tglobaltlsaddr:i64):$in2)) - Complexity = 15
                    // Dst: (XORXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*1055*/          0, /*End of Scope*/
/*1056*/        /*SwitchOpcode*/ 65, TARGET_VAL(SPISD::Lo),// ->1124
/*1059*/          OPC_RecordChild0, // #0 = $in2
/*1060*/          OPC_MoveChild, 0,
/*1062*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1065*/          OPC_MoveParent,
/*1066*/          OPC_MoveParent,
/*1067*/          OPC_MoveChild, 1,
/*1069*/          OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*1072*/          OPC_RecordChild0, // #1 = $in1
/*1073*/          OPC_MoveChild, 0,
/*1075*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1078*/          OPC_MoveParent,
/*1079*/          OPC_MoveParent,
/*1080*/          OPC_Scope, 19, /*->1101*/ // 2 children in Scope
/*1082*/            OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*1084*/            OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*1092*/            OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                        1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:iPTR (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2), (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1)) - Complexity = 15
                    // Dst: (XORri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*1101*/          /*Scope*/ 21, /*->1123*/
/*1102*/            OPC_CheckType, MVT::i64,
/*1104*/            OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1106*/            OPC_EmitNode, TARGET_VAL(SP::SETHIXi), 0,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*1114*/            OPC_MorphNodeTo, TARGET_VAL(SP::XORXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:i64 (SPlo:i64 (tglobaltlsaddr:i64):$in2), (SPhi:i64 (tglobaltlsaddr:i64):$in1)) - Complexity = 15
                    // Dst: (XORXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*1123*/          0, /*End of Scope*/
/*1124*/        /*SwitchOpcode*/ 68, TARGET_VAL(ISD::XOR),// ->1195
/*1127*/          OPC_RecordChild0, // #0 = $rs1
/*1128*/          OPC_Scope, 39, /*->1169*/ // 2 children in Scope
/*1130*/            OPC_RecordChild1, // #1 = $rs2
/*1131*/            OPC_MoveParent,
/*1132*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1143*/            OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->1155
/*1146*/              OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:i32 (xor:i32 i32:i32:$rs1, i32:i32:$rs2), -1:i32) - Complexity = 11
                      // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1155*/            /*SwitchType*/ 11, MVT::i64,// ->1168
/*1157*/              OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1159*/              OPC_MorphNodeTo, TARGET_VAL(SP::XNORXrr), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:i64 (xor:i64 i64:i64:$b, i64:i64:$c), -1:i64) - Complexity = 11
                      // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1168*/            0, // EndSwitchType
/*1169*/          /*Scope*/ 24, /*->1194*/
/*1170*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1181*/            OPC_MoveParent,
/*1182*/            OPC_RecordChild1, // #1 = $rs2
/*1183*/            OPC_CheckType, MVT::i32,
/*1185*/            OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rs1, -1:i32), i32:i32:$rs2) - Complexity = 11
                    // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1194*/          0, /*End of Scope*/
/*1195*/        0, // EndSwitchOpcode
/*1196*/      /*Scope*/ 30, /*->1227*/
/*1197*/        OPC_RecordChild0, // #0 = $rs2
/*1198*/        OPC_MoveChild, 1,
/*1200*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1203*/        OPC_RecordChild0, // #1 = $rs1
/*1204*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1215*/        OPC_MoveParent,
/*1216*/        OPC_CheckType, MVT::i32,
/*1218*/        OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (xor:i32 i32:i32:$rs2, (xor:i32 i32:i32:$rs1, -1:i32)) - Complexity = 11
                // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1227*/      /*Scope*/ 32, /*->1260*/
/*1228*/        OPC_MoveChild, 0,
/*1230*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1233*/        OPC_RecordChild0, // #0 = $b
/*1234*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1245*/        OPC_MoveParent,
/*1246*/        OPC_RecordChild1, // #1 = $c
/*1247*/        OPC_CheckType, MVT::i64,
/*1249*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1251*/        OPC_MorphNodeTo, TARGET_VAL(SP::XNORXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$c) - Complexity = 11
                // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1260*/      /*Scope*/ 104, /*->1365*/
/*1261*/        OPC_RecordChild0, // #0 = $c
/*1262*/        OPC_Scope, 31, /*->1295*/ // 2 children in Scope
/*1264*/          OPC_MoveChild, 1,
/*1266*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1269*/          OPC_RecordChild0, // #1 = $b
/*1270*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1281*/          OPC_MoveParent,
/*1282*/          OPC_CheckType, MVT::i64,
/*1284*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1286*/          OPC_MorphNodeTo, TARGET_VAL(SP::XNORXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 i64:i64:$c, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                  // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1295*/        /*Scope*/ 68, /*->1364*/
/*1296*/          OPC_RecordChild1, // #1 = $simm13
/*1297*/          OPC_Scope, 38, /*->1337*/ // 3 children in Scope
/*1299*/            OPC_MoveChild, 1,
/*1301*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1304*/            OPC_CheckPredicate, 6, // Predicate_simm13
/*1306*/            OPC_MoveParent,
/*1307*/            OPC_SwitchType /*2 cases */, 11, MVT::i32,// ->1321
/*1310*/              OPC_EmitConvertToTarget, 1,
/*1312*/              OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*1321*/            /*SwitchType*/ 13, MVT::i64,// ->1336
/*1323*/              OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1325*/              OPC_EmitConvertToTarget, 1,
/*1327*/              OPC_MorphNodeTo, TARGET_VAL(SP::XORXri), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*1336*/            0, // EndSwitchType
/*1337*/          /*Scope*/ 11, /*->1349*/
/*1338*/            OPC_CheckType, MVT::i32,
/*1340*/            OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                    // Dst: (XORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1349*/          /*Scope*/ 13, /*->1363*/
/*1350*/            OPC_CheckType, MVT::i64,
/*1352*/            OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1354*/            OPC_MorphNodeTo, TARGET_VAL(SP::XORXrr), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                    // Dst: (XORXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*1363*/          0, /*End of Scope*/
/*1364*/        0, /*End of Scope*/
/*1365*/      0, /*End of Scope*/
/*1366*/    /*SwitchOpcode*/ 4|128,7/*900*/, TARGET_VAL(ISD::LOAD),// ->2270
/*1370*/      OPC_RecordMemRef,
/*1371*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1372*/      OPC_RecordChild1, // #1 = $addr
/*1373*/      OPC_CheckPredicate, 7, // Predicate_unindexedload
/*1375*/      OPC_Scope, 72, /*->1449*/ // 18 children in Scope
/*1377*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*1379*/        OPC_CheckType, MVT::i32,
/*1381*/        OPC_Scope, 32, /*->1415*/ // 2 children in Scope
/*1383*/          OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1385*/          OPC_Scope, 13, /*->1400*/ // 2 children in Scope
/*1387*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1390*/            OPC_EmitMergeInputChains1_0,
/*1391*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*1400*/          /*Scope*/ 13, /*->1414*/
/*1401*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1404*/            OPC_EmitMergeInputChains1_0,
/*1405*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*1414*/          0, /*End of Scope*/
/*1415*/        /*Scope*/ 32, /*->1448*/
/*1416*/          OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*1418*/          OPC_Scope, 13, /*->1433*/ // 2 children in Scope
/*1420*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1423*/            OPC_EmitMergeInputChains1_0,
/*1424*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*1433*/          /*Scope*/ 13, /*->1447*/
/*1434*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1437*/            OPC_EmitMergeInputChains1_0,
/*1438*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*1447*/          0, /*End of Scope*/
/*1448*/        0, /*End of Scope*/
/*1449*/      /*Scope*/ 72, /*->1522*/
/*1450*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1452*/        OPC_CheckType, MVT::i32,
/*1454*/        OPC_Scope, 32, /*->1488*/ // 2 children in Scope
/*1456*/          OPC_CheckPredicate, 12, // Predicate_zextloadi8
/*1458*/          OPC_Scope, 13, /*->1473*/ // 2 children in Scope
/*1460*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1463*/            OPC_EmitMergeInputChains1_0,
/*1464*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*1473*/          /*Scope*/ 13, /*->1487*/
/*1474*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1477*/            OPC_EmitMergeInputChains1_0,
/*1478*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*1487*/          0, /*End of Scope*/
/*1488*/        /*Scope*/ 32, /*->1521*/
/*1489*/          OPC_CheckPredicate, 13, // Predicate_zextloadi16
/*1491*/          OPC_Scope, 13, /*->1506*/ // 2 children in Scope
/*1493*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1496*/            OPC_EmitMergeInputChains1_0,
/*1497*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*1506*/          /*Scope*/ 13, /*->1520*/
/*1507*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1510*/            OPC_EmitMergeInputChains1_0,
/*1511*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*1520*/          0, /*End of Scope*/
/*1521*/        0, /*End of Scope*/
/*1522*/      /*Scope*/ 34, /*->1557*/
/*1523*/        OPC_CheckPredicate, 14, // Predicate_load
/*1525*/        OPC_CheckType, MVT::i32,
/*1527*/        OPC_Scope, 13, /*->1542*/ // 2 children in Scope
/*1529*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1532*/          OPC_EmitMergeInputChains1_0,
/*1533*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*1542*/        /*Scope*/ 13, /*->1556*/
/*1543*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1546*/          OPC_EmitMergeInputChains1_0,
/*1547*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*1556*/        0, /*End of Scope*/
/*1557*/      /*Scope*/ 105, /*->1663*/
/*1558*/        OPC_CheckPredicate, 15, // Predicate_extload
/*1560*/        OPC_CheckType, MVT::i32,
/*1562*/        OPC_Scope, 32, /*->1596*/ // 3 children in Scope
/*1564*/          OPC_CheckPredicate, 16, // Predicate_extloadi1
/*1566*/          OPC_Scope, 13, /*->1581*/ // 2 children in Scope
/*1568*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1571*/            OPC_EmitMergeInputChains1_0,
/*1572*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1581*/          /*Scope*/ 13, /*->1595*/
/*1582*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1585*/            OPC_EmitMergeInputChains1_0,
/*1586*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1595*/          0, /*End of Scope*/
/*1596*/        /*Scope*/ 32, /*->1629*/
/*1597*/          OPC_CheckPredicate, 17, // Predicate_extloadi8
/*1599*/          OPC_Scope, 13, /*->1614*/ // 2 children in Scope
/*1601*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1604*/            OPC_EmitMergeInputChains1_0,
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1614*/          /*Scope*/ 13, /*->1628*/
/*1615*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1618*/            OPC_EmitMergeInputChains1_0,
/*1619*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1628*/          0, /*End of Scope*/
/*1629*/        /*Scope*/ 32, /*->1662*/
/*1630*/          OPC_CheckPredicate, 18, // Predicate_extloadi16
/*1632*/          OPC_Scope, 13, /*->1647*/ // 2 children in Scope
/*1634*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1637*/            OPC_EmitMergeInputChains1_0,
/*1638*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*1647*/          /*Scope*/ 13, /*->1661*/
/*1648*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1651*/            OPC_EmitMergeInputChains1_0,
/*1652*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*1661*/          0, /*End of Scope*/
/*1662*/        0, /*End of Scope*/
/*1663*/      /*Scope*/ 36, /*->1700*/
/*1664*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1666*/        OPC_CheckPredicate, 19, // Predicate_zextloadi1
/*1668*/        OPC_CheckType, MVT::i32,
/*1670*/        OPC_Scope, 13, /*->1685*/ // 2 children in Scope
/*1672*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1675*/          OPC_EmitMergeInputChains1_0,
/*1676*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1685*/        /*Scope*/ 13, /*->1699*/
/*1686*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1689*/          OPC_EmitMergeInputChains1_0,
/*1690*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1699*/        0, /*End of Scope*/
/*1700*/      /*Scope*/ 36, /*->1737*/
/*1701*/        OPC_CheckPredicate, 14, // Predicate_load
/*1703*/        OPC_CheckType, MVT::i64,
/*1705*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1707*/        OPC_Scope, 13, /*->1722*/ // 2 children in Scope
/*1709*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1712*/          OPC_EmitMergeInputChains1_0,
/*1713*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*1722*/        /*Scope*/ 13, /*->1736*/
/*1723*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1726*/          OPC_EmitMergeInputChains1_0,
/*1727*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*1736*/        0, /*End of Scope*/
/*1737*/      /*Scope*/ 38, /*->1776*/
/*1738*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1740*/        OPC_CheckPredicate, 19, // Predicate_zextloadi1
/*1742*/        OPC_CheckType, MVT::i64,
/*1744*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1746*/        OPC_Scope, 13, /*->1761*/ // 2 children in Scope
/*1748*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1751*/          OPC_EmitMergeInputChains1_0,
/*1752*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1761*/        /*Scope*/ 13, /*->1775*/
/*1762*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1765*/          OPC_EmitMergeInputChains1_0,
/*1766*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1775*/        0, /*End of Scope*/
/*1776*/      /*Scope*/ 38, /*->1815*/
/*1777*/        OPC_CheckPredicate, 15, // Predicate_extload
/*1779*/        OPC_CheckPredicate, 16, // Predicate_extloadi1
/*1781*/        OPC_CheckType, MVT::i64,
/*1783*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1785*/        OPC_Scope, 13, /*->1800*/ // 2 children in Scope
/*1787*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1790*/          OPC_EmitMergeInputChains1_0,
/*1791*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1800*/        /*Scope*/ 13, /*->1814*/
/*1801*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1804*/          OPC_EmitMergeInputChains1_0,
/*1805*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1814*/        0, /*End of Scope*/
/*1815*/      /*Scope*/ 38, /*->1854*/
/*1816*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1818*/        OPC_CheckPredicate, 12, // Predicate_zextloadi8
/*1820*/        OPC_CheckType, MVT::i64,
/*1822*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1824*/        OPC_Scope, 13, /*->1839*/ // 2 children in Scope
/*1826*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1829*/          OPC_EmitMergeInputChains1_0,
/*1830*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1839*/        /*Scope*/ 13, /*->1853*/
/*1840*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1843*/          OPC_EmitMergeInputChains1_0,
/*1844*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1853*/        0, /*End of Scope*/
/*1854*/      /*Scope*/ 38, /*->1893*/
/*1855*/        OPC_CheckPredicate, 15, // Predicate_extload
/*1857*/        OPC_CheckPredicate, 17, // Predicate_extloadi8
/*1859*/        OPC_CheckType, MVT::i64,
/*1861*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1863*/        OPC_Scope, 13, /*->1878*/ // 2 children in Scope
/*1865*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1868*/          OPC_EmitMergeInputChains1_0,
/*1869*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1878*/        /*Scope*/ 13, /*->1892*/
/*1879*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1882*/          OPC_EmitMergeInputChains1_0,
/*1883*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1892*/        0, /*End of Scope*/
/*1893*/      /*Scope*/ 38, /*->1932*/
/*1894*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*1896*/        OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1898*/        OPC_CheckType, MVT::i64,
/*1900*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1902*/        OPC_Scope, 13, /*->1917*/ // 2 children in Scope
/*1904*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1907*/          OPC_EmitMergeInputChains1_0,
/*1908*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*1917*/        /*Scope*/ 13, /*->1931*/
/*1918*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1921*/          OPC_EmitMergeInputChains1_0,
/*1922*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*1931*/        0, /*End of Scope*/
/*1932*/      /*Scope*/ 38, /*->1971*/
/*1933*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1935*/        OPC_CheckPredicate, 13, // Predicate_zextloadi16
/*1937*/        OPC_CheckType, MVT::i64,
/*1939*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1941*/        OPC_Scope, 13, /*->1956*/ // 2 children in Scope
/*1943*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1946*/          OPC_EmitMergeInputChains1_0,
/*1947*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1956*/        /*Scope*/ 13, /*->1970*/
/*1957*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1960*/          OPC_EmitMergeInputChains1_0,
/*1961*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1970*/        0, /*End of Scope*/
/*1971*/      /*Scope*/ 38, /*->2010*/
/*1972*/        OPC_CheckPredicate, 15, // Predicate_extload
/*1974*/        OPC_CheckPredicate, 18, // Predicate_extloadi16
/*1976*/        OPC_CheckType, MVT::i64,
/*1978*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1980*/        OPC_Scope, 13, /*->1995*/ // 2 children in Scope
/*1982*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1985*/          OPC_EmitMergeInputChains1_0,
/*1986*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1995*/        /*Scope*/ 13, /*->2009*/
/*1996*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1999*/          OPC_EmitMergeInputChains1_0,
/*2000*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*2009*/        0, /*End of Scope*/
/*2010*/      /*Scope*/ 38, /*->2049*/
/*2011*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*2013*/        OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*2015*/        OPC_CheckType, MVT::i64,
/*2017*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2019*/        OPC_Scope, 13, /*->2034*/ // 2 children in Scope
/*2021*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2024*/          OPC_EmitMergeInputChains1_0,
/*2025*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*2034*/        /*Scope*/ 13, /*->2048*/
/*2035*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2038*/          OPC_EmitMergeInputChains1_0,
/*2039*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*2048*/        0, /*End of Scope*/
/*2049*/      /*Scope*/ 38, /*->2088*/
/*2050*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*2052*/        OPC_CheckPredicate, 20, // Predicate_zextloadi32
/*2054*/        OPC_CheckType, MVT::i64,
/*2056*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2058*/        OPC_Scope, 13, /*->2073*/ // 2 children in Scope
/*2060*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2063*/          OPC_EmitMergeInputChains1_0,
/*2064*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*2073*/        /*Scope*/ 13, /*->2087*/
/*2074*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2077*/          OPC_EmitMergeInputChains1_0,
/*2078*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*2087*/        0, /*End of Scope*/
/*2088*/      /*Scope*/ 38, /*->2127*/
/*2089*/        OPC_CheckPredicate, 15, // Predicate_extload
/*2091*/        OPC_CheckPredicate, 21, // Predicate_extloadi32
/*2093*/        OPC_CheckType, MVT::i64,
/*2095*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2097*/        OPC_Scope, 13, /*->2112*/ // 2 children in Scope
/*2099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2102*/          OPC_EmitMergeInputChains1_0,
/*2103*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*2112*/        /*Scope*/ 13, /*->2126*/
/*2113*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2116*/          OPC_EmitMergeInputChains1_0,
/*2117*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*2126*/        0, /*End of Scope*/
/*2127*/      /*Scope*/ 38, /*->2166*/
/*2128*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*2130*/        OPC_CheckPredicate, 22, // Predicate_sextloadi32
/*2132*/        OPC_CheckType, MVT::i64,
/*2134*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2136*/        OPC_Scope, 13, /*->2151*/ // 2 children in Scope
/*2138*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2141*/          OPC_EmitMergeInputChains1_0,
/*2142*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*2151*/        /*Scope*/ 13, /*->2165*/
/*2152*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2155*/          OPC_EmitMergeInputChains1_0,
/*2156*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*2165*/        0, /*End of Scope*/
/*2166*/      /*Scope*/ 102, /*->2269*/
/*2167*/        OPC_CheckPredicate, 14, // Predicate_load
/*2169*/        OPC_SwitchType /*3 cases */, 30, MVT::f32,// ->2202
/*2172*/          OPC_Scope, 13, /*->2187*/ // 2 children in Scope
/*2174*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2177*/            OPC_EmitMergeInputChains1_0,
/*2178*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*2187*/          /*Scope*/ 13, /*->2201*/
/*2188*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2191*/            OPC_EmitMergeInputChains1_0,
/*2192*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*2201*/          0, /*End of Scope*/
/*2202*/        /*SwitchType*/ 30, MVT::f64,// ->2234
/*2204*/          OPC_Scope, 13, /*->2219*/ // 2 children in Scope
/*2206*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2209*/            OPC_EmitMergeInputChains1_0,
/*2210*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*2219*/          /*Scope*/ 13, /*->2233*/
/*2220*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2223*/            OPC_EmitMergeInputChains1_0,
/*2224*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*2233*/          0, /*End of Scope*/
/*2234*/        /*SwitchType*/ 32, MVT::f128,// ->2268
/*2236*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9()) && (Subtarget.hasHardQuad())
/*2238*/          OPC_Scope, 13, /*->2253*/ // 2 children in Scope
/*2240*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2243*/            OPC_EmitMergeInputChains1_0,
/*2244*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f128 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFrr:f128 ADDRrr:iPTR:$addr)
/*2253*/          /*Scope*/ 13, /*->2267*/
/*2254*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2257*/            OPC_EmitMergeInputChains1_0,
/*2258*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f128 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFri:f128 ADDRri:iPTR:$addr)
/*2267*/          0, /*End of Scope*/
/*2268*/        0, // EndSwitchType
/*2269*/      0, /*End of Scope*/
/*2270*/    /*SwitchOpcode*/ 58, TARGET_VAL(ISD::ATOMIC_SWAP),// ->2331
/*2273*/      OPC_RecordMemRef,
/*2274*/      OPC_RecordNode, // #0 = 'atomic_swap' chained node
/*2275*/      OPC_RecordChild1, // #1 = $addr
/*2276*/      OPC_RecordChild2, // #2 = $val
/*2277*/      OPC_SwitchType /*2 cases */, 34, MVT::i32,// ->2314
/*2280*/        OPC_CheckPredicate, 23, // Predicate_atomic_swap_32
/*2282*/        OPC_Scope, 14, /*->2298*/ // 2 children in Scope
/*2284*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #3 #4
/*2287*/          OPC_EmitMergeInputChains1_0,
/*2288*/          OPC_MorphNodeTo, TARGET_VAL(SP::SWAPrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_swap:i32 ADDRrr:iPTR:$addr, i32:i32:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                  // Dst: (SWAPrr:i32 ADDRrr:iPTR:$addr, i32:i32:$val)
/*2298*/        /*Scope*/ 14, /*->2313*/
/*2299*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #3 #4
/*2302*/          OPC_EmitMergeInputChains1_0,
/*2303*/          OPC_MorphNodeTo, TARGET_VAL(SP::SWAPri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_swap:i32 ADDRri:iPTR:$addr, i32:i32:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                  // Dst: (SWAPri:i32 ADDRri:iPTR:$addr, i32:i32:$val)
/*2313*/        0, /*End of Scope*/
/*2314*/      /*SwitchType*/ 14, MVT::i64,// ->2330
/*2316*/        OPC_CheckPredicate, 24, // Predicate_atomic_swap_64
/*2318*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2320*/        OPC_EmitMergeInputChains1_0,
/*2321*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*2330*/      0, // EndSwitchType
/*2331*/    /*SwitchOpcode*/ 30, TARGET_VAL(ISD::BRIND),// ->2364
/*2334*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2335*/      OPC_RecordChild1, // #1 = $ptr
/*2336*/      OPC_Scope, 12, /*->2350*/ // 2 children in Scope
/*2338*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*2341*/        OPC_EmitMergeInputChains1_0,
/*2342*/        OPC_MorphNodeTo, TARGET_VAL(SP::BINDrr), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRrr:iPTR:$ptr) - Complexity = 12
                // Dst: (BINDrr ADDRrr:iPTR:$ptr)
/*2350*/      /*Scope*/ 12, /*->2363*/
/*2351*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*2354*/        OPC_EmitMergeInputChains1_0,
/*2355*/        OPC_MorphNodeTo, TARGET_VAL(SP::BINDri), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRri:iPTR:$ptr) - Complexity = 12
                // Dst: (BINDri ADDRri:iPTR:$ptr)
/*2363*/      0, /*End of Scope*/
/*2364*/    /*SwitchOpcode*/ 60, TARGET_VAL(SPISD::CALL),// ->2427
/*2367*/      OPC_RecordNode, // #0 = 'call' chained node
/*2368*/      OPC_CaptureGlueInput,
/*2369*/      OPC_RecordChild1, // #1 = $ptr
/*2370*/      OPC_Scope, 12, /*->2384*/ // 3 children in Scope
/*2372*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*2375*/        OPC_EmitMergeInputChains1_0,
/*2376*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 3, 
                // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
                // Dst: (CALLrr ADDRrr:i32:$ptr)
/*2384*/      /*Scope*/ 12, /*->2397*/
/*2385*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*2388*/        OPC_EmitMergeInputChains1_0,
/*2389*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 3, 
                // Src: (call ADDRri:i32:$ptr) - Complexity = 12
                // Dst: (CALLri ADDRri:i32:$ptr)
/*2397*/      /*Scope*/ 28, /*->2426*/
/*2398*/        OPC_MoveChild, 1,
/*2400*/        OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->2413
/*2404*/          OPC_MoveParent,
/*2405*/          OPC_EmitMergeInputChains1_0,
/*2406*/          OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL (tglobaladdr:i32):$dst)
/*2413*/        /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->2425
/*2416*/          OPC_MoveParent,
/*2417*/          OPC_EmitMergeInputChains1_0,
/*2418*/          OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALL (texternalsym:i32):$dst)
/*2425*/        0, // EndSwitchOpcode
/*2426*/      0, /*End of Scope*/
/*2427*/    /*SwitchOpcode*/ 71, TARGET_VAL(ISD::ATOMIC_LOAD),// ->2501
/*2430*/      OPC_RecordMemRef,
/*2431*/      OPC_RecordNode, // #0 = 'atomic_load' chained node
/*2432*/      OPC_RecordChild1, // #1 = $src
/*2433*/      OPC_SwitchType /*2 cases */, 30, MVT::i32,// ->2466
/*2436*/        OPC_Scope, 13, /*->2451*/ // 2 children in Scope
/*2438*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2441*/          OPC_EmitMergeInputChains1_0,
/*2442*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i32 ADDRrr:iPTR:$src) - Complexity = 12
                  // Dst: (LDrr:i32 ADDRrr:iPTR:$src)
/*2451*/        /*Scope*/ 13, /*->2465*/
/*2452*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2455*/          OPC_EmitMergeInputChains1_0,
/*2456*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i32 ADDRri:iPTR:$src) - Complexity = 12
                  // Dst: (LDri:i32 ADDRri:iPTR:$src)
/*2465*/        0, /*End of Scope*/
/*2466*/      /*SwitchType*/ 32, MVT::i64,// ->2500
/*2468*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2470*/        OPC_Scope, 13, /*->2485*/ // 2 children in Scope
/*2472*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2475*/          OPC_EmitMergeInputChains1_0,
/*2476*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i64 ADDRrr:iPTR:$src) - Complexity = 12
                  // Dst: (LDXrr:i64 ADDRrr:iPTR:$src)
/*2485*/        /*Scope*/ 13, /*->2499*/
/*2486*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2489*/          OPC_EmitMergeInputChains1_0,
/*2490*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i64 ADDRri:iPTR:$src) - Complexity = 12
                  // Dst: (LDXri:i64 ADDRri:iPTR:$src)
/*2499*/        0, /*End of Scope*/
/*2500*/      0, // EndSwitchType
/*2501*/    /*SwitchOpcode*/ 74, TARGET_VAL(ISD::ATOMIC_STORE),// ->2578
/*2504*/      OPC_RecordMemRef,
/*2505*/      OPC_RecordNode, // #0 = 'atomic_store' chained node
/*2506*/      OPC_RecordChild1, // #1 = $dst
/*2507*/      OPC_RecordChild2, // #2 = $val
/*2508*/      OPC_Scope, 32, /*->2542*/ // 2 children in Scope
/*2510*/        OPC_CheckChild2Type, MVT::i32,
/*2512*/        OPC_Scope, 13, /*->2527*/ // 2 children in Scope
/*2514*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2517*/          OPC_EmitMergeInputChains1_0,
/*2518*/          OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val) - Complexity = 12
                  // Dst: (STrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2527*/        /*Scope*/ 13, /*->2541*/
/*2528*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2531*/          OPC_EmitMergeInputChains1_0,
/*2532*/          OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val) - Complexity = 12
                  // Dst: (STri ADDRri:iPTR:$dst, ?:i32:$val)
/*2541*/        0, /*End of Scope*/
/*2542*/      /*Scope*/ 34, /*->2577*/
/*2543*/        OPC_CheckChild2Type, MVT::i64,
/*2545*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2547*/        OPC_Scope, 13, /*->2562*/ // 2 children in Scope
/*2549*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2552*/          OPC_EmitMergeInputChains1_0,
/*2553*/          OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRrr:iPTR:$dst, i64:i64:$val) - Complexity = 12
                  // Dst: (STXrr ADDRrr:iPTR:$dst, ?:i64:$val)
/*2562*/        /*Scope*/ 13, /*->2576*/
/*2563*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2566*/          OPC_EmitMergeInputChains1_0,
/*2567*/          OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRri:iPTR:$dst, i64:i64:$val) - Complexity = 12
                  // Dst: (STXri ADDRri:iPTR:$dst, ?:i64:$val)
/*2576*/        0, /*End of Scope*/
/*2577*/      0, /*End of Scope*/
/*2578*/    /*SwitchOpcode*/ 60|128,1/*188*/, TARGET_VAL(ISD::AND),// ->2770
/*2582*/      OPC_Scope, 45, /*->2629*/ // 4 children in Scope
/*2584*/        OPC_RecordChild0, // #0 = $rs1
/*2585*/        OPC_MoveChild, 1,
/*2587*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2590*/        OPC_RecordChild0, // #1 = $rs2
/*2591*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2602*/        OPC_MoveParent,
/*2603*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->2615
/*2606*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rs1, (xor:i32 i32:i32:$rs2, -1:i32)) - Complexity = 11
                  // Dst: (ANDNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2615*/        /*SwitchType*/ 11, MVT::i64,// ->2628
/*2617*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2619*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDXNrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$b, (xor:i64 i64:i64:$c, -1:i64)) - Complexity = 11
                  // Dst: (ANDXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2628*/        0, // EndSwitchType
/*2629*/      /*Scope*/ 45, /*->2675*/
/*2630*/        OPC_MoveChild, 0,
/*2632*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2635*/        OPC_RecordChild0, // #0 = $rs2
/*2636*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2647*/        OPC_MoveParent,
/*2648*/        OPC_RecordChild1, // #1 = $rs1
/*2649*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->2661
/*2652*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rs2, -1:i32), i32:i32:$rs1) - Complexity = 11
                  // Dst: (ANDNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2661*/        /*SwitchType*/ 11, MVT::i64,// ->2674
/*2663*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2665*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDXNrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$c, -1:i64), i64:i64:$b) - Complexity = 11
                  // Dst: (ANDXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2674*/        0, // EndSwitchType
/*2675*/      /*Scope*/ 23, /*->2699*/
/*2676*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*2682*/        OPC_RecordChild0, // #0 = $val
/*2683*/        OPC_CheckType, MVT::i64,
/*2685*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2687*/        OPC_EmitInteger, MVT::i32, 0, 
/*2690*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
                // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*2699*/      /*Scope*/ 69, /*->2769*/
/*2700*/        OPC_RecordChild0, // #0 = $rs1
/*2701*/        OPC_RecordChild1, // #1 = $simm13
/*2702*/        OPC_Scope, 38, /*->2742*/ // 3 children in Scope
/*2704*/          OPC_MoveChild, 1,
/*2706*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2709*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*2711*/          OPC_MoveParent,
/*2712*/          OPC_SwitchType /*2 cases */, 11, MVT::i32,// ->2726
/*2715*/            OPC_EmitConvertToTarget, 1,
/*2717*/            OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ANDri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*2726*/          /*SwitchType*/ 13, MVT::i64,// ->2741
/*2728*/            OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2730*/            OPC_EmitConvertToTarget, 1,
/*2732*/            OPC_MorphNodeTo, TARGET_VAL(SP::ANDXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ANDXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*2741*/          0, // EndSwitchType
/*2742*/        /*Scope*/ 11, /*->2754*/
/*2743*/          OPC_CheckType, MVT::i32,
/*2745*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ANDrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2754*/        /*Scope*/ 13, /*->2768*/
/*2755*/          OPC_CheckType, MVT::i64,
/*2757*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2759*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ANDXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*2768*/        0, /*End of Scope*/
/*2769*/      0, /*End of Scope*/
/*2770*/    /*SwitchOpcode*/ 36|128,1/*164*/, TARGET_VAL(ISD::OR),// ->2938
/*2774*/      OPC_Scope, 45, /*->2821*/ // 3 children in Scope
/*2776*/        OPC_RecordChild0, // #0 = $rs1
/*2777*/        OPC_MoveChild, 1,
/*2779*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2782*/        OPC_RecordChild0, // #1 = $rs2
/*2783*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2794*/        OPC_MoveParent,
/*2795*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->2807
/*2798*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$rs1, (xor:i32 i32:i32:$rs2, -1:i32)) - Complexity = 11
                  // Dst: (ORNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2807*/        /*SwitchType*/ 11, MVT::i64,// ->2820
/*2809*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2811*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXNrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$b, (xor:i64 i64:i64:$c, -1:i64)) - Complexity = 11
                  // Dst: (ORXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2820*/        0, // EndSwitchType
/*2821*/      /*Scope*/ 45, /*->2867*/
/*2822*/        OPC_MoveChild, 0,
/*2824*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2827*/        OPC_RecordChild0, // #0 = $rs2
/*2828*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2839*/        OPC_MoveParent,
/*2840*/        OPC_RecordChild1, // #1 = $rs1
/*2841*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->2853
/*2844*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (xor:i32 i32:i32:$rs2, -1:i32), i32:i32:$rs1) - Complexity = 11
                  // Dst: (ORNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2853*/        /*SwitchType*/ 11, MVT::i64,// ->2866
/*2855*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2857*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXNrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i64 (xor:i64 i64:i64:$c, -1:i64), i64:i64:$b) - Complexity = 11
                  // Dst: (ORXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2866*/        0, // EndSwitchType
/*2867*/      /*Scope*/ 69, /*->2937*/
/*2868*/        OPC_RecordChild0, // #0 = $rs1
/*2869*/        OPC_RecordChild1, // #1 = $simm13
/*2870*/        OPC_Scope, 38, /*->2910*/ // 3 children in Scope
/*2872*/          OPC_MoveChild, 1,
/*2874*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2877*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*2879*/          OPC_MoveParent,
/*2880*/          OPC_SwitchType /*2 cases */, 11, MVT::i32,// ->2894
/*2883*/            OPC_EmitConvertToTarget, 1,
/*2885*/            OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ORri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*2894*/          /*SwitchType*/ 13, MVT::i64,// ->2909
/*2896*/            OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2898*/            OPC_EmitConvertToTarget, 1,
/*2900*/            OPC_MorphNodeTo, TARGET_VAL(SP::ORXri), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ORXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*2909*/          0, // EndSwitchType
/*2910*/        /*Scope*/ 11, /*->2922*/
/*2911*/          OPC_CheckType, MVT::i32,
/*2913*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2922*/        /*Scope*/ 13, /*->2936*/
/*2923*/          OPC_CheckType, MVT::i64,
/*2925*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2927*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ORXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*2936*/        0, /*End of Scope*/
/*2937*/      0, /*End of Scope*/
/*2938*/    /*SwitchOpcode*/ 88|128,1/*216*/, TARGET_VAL(SPISD::SELECT_ICC),// ->3158
/*2942*/      OPC_CaptureGlueInput,
/*2943*/      OPC_RecordChild0, // #0 = $simm11
/*2944*/      OPC_Scope, 55, /*->3001*/ // 2 children in Scope
/*2946*/        OPC_MoveChild, 0,
/*2948*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2951*/        OPC_CheckPredicate, 25, // Predicate_simm11
/*2953*/        OPC_MoveParent,
/*2954*/        OPC_RecordChild1, // #1 = $f
/*2955*/        OPC_RecordChild2, // #2 = $cond
/*2956*/        OPC_MoveChild, 2,
/*2958*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2961*/        OPC_MoveParent,
/*2962*/        OPC_SwitchType /*2 cases */, 16, MVT::i32,// ->2981
/*2965*/          OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*2967*/          OPC_EmitConvertToTarget, 0,
/*2969*/          OPC_EmitConvertToTarget, 2,
/*2971*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVICCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*2981*/        /*SwitchType*/ 17, MVT::i64,// ->3000
/*2983*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2985*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2988*/          OPC_EmitConvertToTarget, 2,
/*2990*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVICCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3000*/        0, // EndSwitchType
/*3001*/      /*Scope*/ 26|128,1/*154*/, /*->3157*/
/*3003*/        OPC_RecordChild1, // #1 = $f
/*3004*/        OPC_RecordChild2, // #2 = $cond
/*3005*/        OPC_MoveChild, 2,
/*3007*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3010*/        OPC_MoveParent,
/*3011*/        OPC_SwitchType /*5 cases */, 30, MVT::i32,// ->3044
/*3014*/          OPC_Scope, 14, /*->3030*/ // 2 children in Scope
/*3016*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3018*/            OPC_EmitConvertToTarget, 2,
/*3020*/            OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (MOVICCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3030*/          /*Scope*/ 12, /*->3043*/
/*3031*/            OPC_EmitConvertToTarget, 2,
/*3033*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*3043*/          0, /*End of Scope*/
/*3044*/        /*SwitchType*/ 14, MVT::i64,// ->3060
/*3046*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3048*/          OPC_EmitConvertToTarget, 2,
/*3050*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVICCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3060*/        /*SwitchType*/ 30, MVT::f32,// ->3092
/*3062*/          OPC_Scope, 14, /*->3078*/ // 2 children in Scope
/*3064*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3066*/            OPC_EmitConvertToTarget, 2,
/*3068*/            OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVS_ICC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3078*/          /*Scope*/ 12, /*->3091*/
/*3079*/            OPC_EmitConvertToTarget, 2,
/*3081*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*3091*/          0, /*End of Scope*/
/*3092*/        /*SwitchType*/ 30, MVT::f64,// ->3124
/*3094*/          OPC_Scope, 14, /*->3110*/ // 2 children in Scope
/*3096*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3098*/            OPC_EmitConvertToTarget, 2,
/*3100*/            OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVD_ICC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3110*/          /*Scope*/ 12, /*->3123*/
/*3111*/            OPC_EmitConvertToTarget, 2,
/*3113*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*3123*/          0, /*End of Scope*/
/*3124*/        /*SwitchType*/ 30, MVT::f128,// ->3156
/*3126*/          OPC_Scope, 14, /*->3142*/ // 2 children in Scope
/*3128*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3130*/            OPC_EmitConvertToTarget, 2,
/*3132*/            OPC_MorphNodeTo, TARGET_VAL(SP::FMOVQ_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVQ_ICC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3142*/          /*Scope*/ 12, /*->3155*/
/*3143*/            OPC_EmitConvertToTarget, 2,
/*3145*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_QFP_ICC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_ICC:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond)
/*3155*/          0, /*End of Scope*/
/*3156*/        0, // EndSwitchType
/*3157*/      0, /*End of Scope*/
/*3158*/    /*SwitchOpcode*/ 88|128,1/*216*/, TARGET_VAL(SPISD::SELECT_FCC),// ->3378
/*3162*/      OPC_CaptureGlueInput,
/*3163*/      OPC_RecordChild0, // #0 = $simm11
/*3164*/      OPC_Scope, 55, /*->3221*/ // 2 children in Scope
/*3166*/        OPC_MoveChild, 0,
/*3168*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3171*/        OPC_CheckPredicate, 25, // Predicate_simm11
/*3173*/        OPC_MoveParent,
/*3174*/        OPC_RecordChild1, // #1 = $f
/*3175*/        OPC_RecordChild2, // #2 = $cond
/*3176*/        OPC_MoveChild, 2,
/*3178*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3181*/        OPC_MoveParent,
/*3182*/        OPC_SwitchType /*2 cases */, 16, MVT::i32,// ->3201
/*3185*/          OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3187*/          OPC_EmitConvertToTarget, 0,
/*3189*/          OPC_EmitConvertToTarget, 2,
/*3191*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3201*/        /*SwitchType*/ 17, MVT::i64,// ->3220
/*3203*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3205*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3208*/          OPC_EmitConvertToTarget, 2,
/*3210*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3220*/        0, // EndSwitchType
/*3221*/      /*Scope*/ 26|128,1/*154*/, /*->3377*/
/*3223*/        OPC_RecordChild1, // #1 = $f
/*3224*/        OPC_RecordChild2, // #2 = $cond
/*3225*/        OPC_MoveChild, 2,
/*3227*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3230*/        OPC_MoveParent,
/*3231*/        OPC_SwitchType /*5 cases */, 30, MVT::i32,// ->3264
/*3234*/          OPC_Scope, 14, /*->3250*/ // 2 children in Scope
/*3236*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3238*/            OPC_EmitConvertToTarget, 2,
/*3240*/            OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (MOVFCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3250*/          /*Scope*/ 12, /*->3263*/
/*3251*/            OPC_EmitConvertToTarget, 2,
/*3253*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*3263*/          0, /*End of Scope*/
/*3264*/        /*SwitchType*/ 14, MVT::i64,// ->3280
/*3266*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3268*/          OPC_EmitConvertToTarget, 2,
/*3270*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVFCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3280*/        /*SwitchType*/ 30, MVT::f32,// ->3312
/*3282*/          OPC_Scope, 14, /*->3298*/ // 2 children in Scope
/*3284*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3286*/            OPC_EmitConvertToTarget, 2,
/*3288*/            OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVS_FCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3298*/          /*Scope*/ 12, /*->3311*/
/*3299*/            OPC_EmitConvertToTarget, 2,
/*3301*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*3311*/          0, /*End of Scope*/
/*3312*/        /*SwitchType*/ 30, MVT::f64,// ->3344
/*3314*/          OPC_Scope, 14, /*->3330*/ // 2 children in Scope
/*3316*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3318*/            OPC_EmitConvertToTarget, 2,
/*3320*/            OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVD_FCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3330*/          /*Scope*/ 12, /*->3343*/
/*3331*/            OPC_EmitConvertToTarget, 2,
/*3333*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*3343*/          0, /*End of Scope*/
/*3344*/        /*SwitchType*/ 30, MVT::f128,// ->3376
/*3346*/          OPC_Scope, 14, /*->3362*/ // 2 children in Scope
/*3348*/            OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*3350*/            OPC_EmitConvertToTarget, 2,
/*3352*/            OPC_MorphNodeTo, TARGET_VAL(SP::FMOVQ_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVQ_FCC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3362*/          /*Scope*/ 12, /*->3375*/
/*3363*/            OPC_EmitConvertToTarget, 2,
/*3365*/            OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_QFP_FCC), 0|OPFL_GlueInput,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_FCC:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond)
/*3375*/          0, /*End of Scope*/
/*3376*/        0, // EndSwitchType
/*3377*/      0, /*End of Scope*/
/*3378*/    /*SwitchOpcode*/ 23|128,1/*151*/, TARGET_VAL(SPISD::SELECT_XCC),// ->3533
/*3382*/      OPC_CaptureGlueInput,
/*3383*/      OPC_RecordChild0, // #0 = $simm11
/*3384*/      OPC_Scope, 55, /*->3441*/ // 2 children in Scope
/*3386*/        OPC_MoveChild, 0,
/*3388*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3391*/        OPC_CheckPredicate, 25, // Predicate_simm11
/*3393*/        OPC_MoveParent,
/*3394*/        OPC_RecordChild1, // #1 = $f
/*3395*/        OPC_RecordChild2, // #2 = $cond
/*3396*/        OPC_MoveChild, 2,
/*3398*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3401*/        OPC_MoveParent,
/*3402*/        OPC_SwitchType /*2 cases */, 16, MVT::i32,// ->3421
/*3405*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3407*/          OPC_EmitConvertToTarget, 0,
/*3409*/          OPC_EmitConvertToTarget, 2,
/*3411*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3421*/        /*SwitchType*/ 17, MVT::i64,// ->3440
/*3423*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3425*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3428*/          OPC_EmitConvertToTarget, 2,
/*3430*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3440*/        0, // EndSwitchType
/*3441*/      /*Scope*/ 90, /*->3532*/
/*3442*/        OPC_RecordChild1, // #1 = $f
/*3443*/        OPC_RecordChild2, // #2 = $cond
/*3444*/        OPC_MoveChild, 2,
/*3446*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3449*/        OPC_MoveParent,
/*3450*/        OPC_SwitchType /*5 cases */, 14, MVT::i32,// ->3467
/*3453*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3455*/          OPC_EmitConvertToTarget, 2,
/*3457*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3467*/        /*SwitchType*/ 14, MVT::i64,// ->3483
/*3469*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3471*/          OPC_EmitConvertToTarget, 2,
/*3473*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3483*/        /*SwitchType*/ 14, MVT::f32,// ->3499
/*3485*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3487*/          OPC_EmitConvertToTarget, 2,
/*3489*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVS_XCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3499*/        /*SwitchType*/ 14, MVT::f64,// ->3515
/*3501*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3503*/          OPC_EmitConvertToTarget, 2,
/*3505*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVD_XCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3515*/        /*SwitchType*/ 14, MVT::f128,// ->3531
/*3517*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3519*/          OPC_EmitConvertToTarget, 2,
/*3521*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVQ_XCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVQ_XCC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3531*/        0, // EndSwitchType
/*3532*/      0, /*End of Scope*/
/*3533*/    /*SwitchOpcode*/ 25, TARGET_VAL(ISD::CALLSEQ_END),// ->3561
/*3536*/      OPC_RecordNode, // #0 = 'callseq_end' chained node
/*3537*/      OPC_CaptureGlueInput,
/*3538*/      OPC_RecordChild1, // #1 = $amt1
/*3539*/      OPC_MoveChild, 1,
/*3541*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3544*/      OPC_MoveParent,
/*3545*/      OPC_RecordChild2, // #2 = $amt2
/*3546*/      OPC_MoveChild, 2,
/*3548*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3551*/      OPC_MoveParent,
/*3552*/      OPC_EmitMergeInputChains1_0,
/*3553*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
/*3561*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::FrameIndex),// ->3599
/*3564*/      OPC_RecordNode, // #0 = $addr
/*3565*/      OPC_CheckType, MVT::iPTR,
/*3567*/      OPC_Scope, 14, /*->3583*/ // 2 children in Scope
/*3569*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*3571*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*3574*/        OPC_MorphNodeTo, TARGET_VAL(SP::LEA_ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:iPTR:$addr - Complexity = 9
                // Dst: (LEA_ADDri:iPTR ADDRri:iPTR:$addr)
/*3583*/      /*Scope*/ 14, /*->3598*/
/*3584*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3586*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*3589*/        OPC_MorphNodeTo, TARGET_VAL(SP::LEAX_ADDri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:iPTR:$addr - Complexity = 9
                // Dst: (LEAX_ADDri:i64 ADDRri:iPTR:$addr)
/*3598*/      0, /*End of Scope*/
/*3599*/    /*SwitchOpcode*/ 25, TARGET_VAL(SPISD::TLS_CALL),// ->3627
/*3602*/      OPC_RecordNode, // #0 = 'tlscall' chained node
/*3603*/      OPC_CaptureGlueInput,
/*3604*/      OPC_RecordChild1, // #1 = $disp
/*3605*/      OPC_MoveChild, 1,
/*3607*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetExternalSymbol),
/*3610*/      OPC_MoveParent,
/*3611*/      OPC_RecordChild2, // #2 = $sym
/*3612*/      OPC_MoveChild, 2,
/*3614*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*3617*/      OPC_MoveParent,
/*3618*/      OPC_EmitMergeInputChains1_0,
/*3619*/      OPC_MorphNodeTo, TARGET_VAL(SP::TLS_CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (tlscall (texternalsym:i32):$disp, (tglobaltlsaddr:iPTR):$sym) - Complexity = 9
              // Dst: (TLS_CALL (texternalsym:i32):$disp, (tglobaltlsaddr:iPTR):$sym)
/*3627*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::ATOMIC_FENCE),// ->3669
/*3630*/      OPC_RecordNode, // #0 = 'atomic_fence' chained node
/*3631*/      OPC_MoveChild, 1,
/*3633*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3636*/      OPC_MoveParent,
/*3637*/      OPC_MoveChild, 2,
/*3639*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3642*/      OPC_MoveParent,
/*3643*/      OPC_Scope, 9, /*->3654*/ // 2 children in Scope
/*3645*/        OPC_CheckPatternPredicate, 4, // (!Subtarget.isV9())
/*3647*/        OPC_EmitMergeInputChains1_0,
/*3648*/        OPC_MorphNodeTo, TARGET_VAL(SP::STBAR), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
                // Dst: (STBAR)
/*3654*/      /*Scope*/ 13, /*->3668*/
/*3655*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3657*/        OPC_EmitMergeInputChains1_0,
/*3658*/        OPC_EmitInteger, MVT::i32, 15, 
/*3661*/        OPC_MorphNodeTo, TARGET_VAL(SP::MEMBARi), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
                // Dst: (MEMBARi 15:i32)
/*3668*/      0, /*End of Scope*/
/*3669*/    /*SwitchOpcode*/ 21, TARGET_VAL(SPISD::RET_FLAG),// ->3693
/*3672*/      OPC_RecordNode, // #0 = 'retflag' chained node
/*3673*/      OPC_CaptureGlueInput,
/*3674*/      OPC_RecordChild1, // #1 = $val
/*3675*/      OPC_MoveChild, 1,
/*3677*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3680*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*3682*/      OPC_MoveParent,
/*3683*/      OPC_EmitMergeInputChains1_0,
/*3684*/      OPC_EmitConvertToTarget, 1,
/*3686*/      OPC_MorphNodeTo, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (RETL (imm:i32):$val)
/*3693*/    /*SwitchOpcode*/ 77, TARGET_VAL(ISD::SHL),// ->3773
/*3696*/      OPC_RecordChild0, // #0 = $rs1
/*3697*/      OPC_RecordChild1, // #1 = $simm13
/*3698*/      OPC_Scope, 43, /*->3743*/ // 2 children in Scope
/*3700*/        OPC_MoveChild, 1,
/*3702*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3705*/        OPC_CheckType, MVT::i32,
/*3707*/        OPC_Scope, 16, /*->3725*/ // 2 children in Scope
/*3709*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3711*/          OPC_MoveParent,
/*3712*/          OPC_CheckType, MVT::i32,
/*3714*/          OPC_EmitConvertToTarget, 1,
/*3716*/          OPC_MorphNodeTo, TARGET_VAL(SP::SLLri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SLLri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3725*/        /*Scope*/ 16, /*->3742*/
/*3726*/          OPC_MoveParent,
/*3727*/          OPC_CheckType, MVT::i64,
/*3729*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3731*/          OPC_EmitConvertToTarget, 1,
/*3733*/          OPC_MorphNodeTo, TARGET_VAL(SP::SLLXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SLLXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3742*/        0, /*End of Scope*/
/*3743*/      /*Scope*/ 28, /*->3772*/
/*3744*/        OPC_CheckChild1Type, MVT::i32,
/*3746*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->3758
/*3749*/          OPC_MorphNodeTo, TARGET_VAL(SP::SLLrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SLLrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3758*/        /*SwitchType*/ 11, MVT::i64,// ->3771
/*3760*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3762*/          OPC_MorphNodeTo, TARGET_VAL(SP::SLLXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SLLXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*3771*/        0, // EndSwitchType
/*3772*/      0, /*End of Scope*/
/*3773*/    /*SwitchOpcode*/ 77, TARGET_VAL(ISD::SRL),// ->3853
/*3776*/      OPC_RecordChild0, // #0 = $rs1
/*3777*/      OPC_RecordChild1, // #1 = $simm13
/*3778*/      OPC_Scope, 43, /*->3823*/ // 2 children in Scope
/*3780*/        OPC_MoveChild, 1,
/*3782*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3785*/        OPC_CheckType, MVT::i32,
/*3787*/        OPC_Scope, 16, /*->3805*/ // 2 children in Scope
/*3789*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3791*/          OPC_MoveParent,
/*3792*/          OPC_CheckType, MVT::i32,
/*3794*/          OPC_EmitConvertToTarget, 1,
/*3796*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRLri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3805*/        /*Scope*/ 16, /*->3822*/
/*3806*/          OPC_MoveParent,
/*3807*/          OPC_CheckType, MVT::i64,
/*3809*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3811*/          OPC_EmitConvertToTarget, 1,
/*3813*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRLXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SRLXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3822*/        0, /*End of Scope*/
/*3823*/      /*Scope*/ 28, /*->3852*/
/*3824*/        OPC_CheckChild1Type, MVT::i32,
/*3826*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->3838
/*3829*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRLrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRLrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3838*/        /*SwitchType*/ 11, MVT::i64,// ->3851
/*3840*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3842*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRLXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRLXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*3851*/        0, // EndSwitchType
/*3852*/      0, /*End of Scope*/
/*3853*/    /*SwitchOpcode*/ 77, TARGET_VAL(ISD::SRA),// ->3933
/*3856*/      OPC_RecordChild0, // #0 = $rs1
/*3857*/      OPC_RecordChild1, // #1 = $simm13
/*3858*/      OPC_Scope, 43, /*->3903*/ // 2 children in Scope
/*3860*/        OPC_MoveChild, 1,
/*3862*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3865*/        OPC_CheckType, MVT::i32,
/*3867*/        OPC_Scope, 16, /*->3885*/ // 2 children in Scope
/*3869*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3871*/          OPC_MoveParent,
/*3872*/          OPC_CheckType, MVT::i32,
/*3874*/          OPC_EmitConvertToTarget, 1,
/*3876*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRAri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3885*/        /*Scope*/ 16, /*->3902*/
/*3886*/          OPC_MoveParent,
/*3887*/          OPC_CheckType, MVT::i64,
/*3889*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3891*/          OPC_EmitConvertToTarget, 1,
/*3893*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRAXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SRAXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3902*/        0, /*End of Scope*/
/*3903*/      /*Scope*/ 28, /*->3932*/
/*3904*/        OPC_CheckChild1Type, MVT::i32,
/*3906*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->3918
/*3909*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRArr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRArr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3918*/        /*SwitchType*/ 11, MVT::i64,// ->3931
/*3920*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3922*/          OPC_MorphNodeTo, TARGET_VAL(SP::SRAXrr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRAXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*3931*/        0, // EndSwitchType
/*3932*/      0, /*End of Scope*/
/*3933*/    /*SwitchOpcode*/ 38, TARGET_VAL(ISD::ADDC),// ->3974
/*3936*/      OPC_RecordChild0, // #0 = $rs1
/*3937*/      OPC_RecordChild1, // #1 = $simm13
/*3938*/      OPC_Scope, 21, /*->3961*/ // 2 children in Scope
/*3940*/        OPC_MoveChild, 1,
/*3942*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3945*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*3947*/        OPC_MoveParent,
/*3948*/        OPC_CheckType, MVT::i32,
/*3950*/        OPC_EmitConvertToTarget, 1,
/*3952*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDCCri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3961*/      /*Scope*/ 11, /*->3973*/
/*3962*/        OPC_CheckType, MVT::i32,
/*3964*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (ADDCCrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3973*/      0, /*End of Scope*/
/*3974*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::ADDE),// ->4016
/*3977*/      OPC_CaptureGlueInput,
/*3978*/      OPC_RecordChild0, // #0 = $rs1
/*3979*/      OPC_RecordChild1, // #1 = $simm13
/*3980*/      OPC_Scope, 21, /*->4003*/ // 2 children in Scope
/*3982*/        OPC_MoveChild, 1,
/*3984*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3987*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*3989*/        OPC_MoveParent,
/*3990*/        OPC_CheckType, MVT::i32,
/*3992*/        OPC_EmitConvertToTarget, 1,
/*3994*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (adde:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDEri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4003*/      /*Scope*/ 11, /*->4015*/
/*4004*/        OPC_CheckType, MVT::i32,
/*4006*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (ADDErr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4015*/      0, /*End of Scope*/
/*4016*/    /*SwitchOpcode*/ 69, TARGET_VAL(ISD::SUB),// ->4088
/*4019*/      OPC_RecordChild0, // #0 = $rs1
/*4020*/      OPC_RecordChild1, // #1 = $simm13
/*4021*/      OPC_Scope, 38, /*->4061*/ // 3 children in Scope
/*4023*/        OPC_MoveChild, 1,
/*4025*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4028*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4030*/        OPC_MoveParent,
/*4031*/        OPC_SwitchType /*2 cases */, 11, MVT::i32,// ->4045
/*4034*/          OPC_EmitConvertToTarget, 1,
/*4036*/          OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4045*/        /*SwitchType*/ 13, MVT::i64,// ->4060
/*4047*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4049*/          OPC_EmitConvertToTarget, 1,
/*4051*/          OPC_MorphNodeTo, TARGET_VAL(SP::SUBXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4060*/        0, // EndSwitchType
/*4061*/      /*Scope*/ 11, /*->4073*/
/*4062*/        OPC_CheckType, MVT::i32,
/*4064*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4073*/      /*Scope*/ 13, /*->4087*/
/*4074*/        OPC_CheckType, MVT::i64,
/*4076*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4078*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (SUBXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4087*/      0, /*End of Scope*/
/*4088*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::SUBE),// ->4130
/*4091*/      OPC_CaptureGlueInput,
/*4092*/      OPC_RecordChild0, // #0 = $rs1
/*4093*/      OPC_RecordChild1, // #1 = $simm13
/*4094*/      OPC_Scope, 21, /*->4117*/ // 2 children in Scope
/*4096*/        OPC_MoveChild, 1,
/*4098*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4101*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4103*/        OPC_MoveParent,
/*4104*/        OPC_CheckType, MVT::i32,
/*4106*/        OPC_EmitConvertToTarget, 1,
/*4108*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sube:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBEri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4117*/      /*Scope*/ 11, /*->4129*/
/*4118*/        OPC_CheckType, MVT::i32,
/*4120*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBErr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4129*/      0, /*End of Scope*/
/*4130*/    /*SwitchOpcode*/ 38, TARGET_VAL(ISD::SUBC),// ->4171
/*4133*/      OPC_RecordChild0, // #0 = $rs1
/*4134*/      OPC_RecordChild1, // #1 = $simm13
/*4135*/      OPC_Scope, 21, /*->4158*/ // 2 children in Scope
/*4137*/        OPC_MoveChild, 1,
/*4139*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4142*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4144*/        OPC_MoveParent,
/*4145*/        OPC_CheckType, MVT::i32,
/*4147*/        OPC_EmitConvertToTarget, 1,
/*4149*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (subc:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBCCri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4158*/      /*Scope*/ 11, /*->4170*/
/*4159*/        OPC_CheckType, MVT::i32,
/*4161*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBCCrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4170*/      0, /*End of Scope*/
/*4171*/    /*SwitchOpcode*/ 76, TARGET_VAL(SPISD::CMPICC),// ->4250
/*4174*/      OPC_RecordChild0, // #0 = $rs1
/*4175*/      OPC_Scope, 33, /*->4210*/ // 2 children in Scope
/*4177*/        OPC_CheckChild0Type, MVT::i32,
/*4179*/        OPC_RecordChild1, // #1 = $simm13
/*4180*/        OPC_Scope, 18, /*->4200*/ // 2 children in Scope
/*4182*/          OPC_MoveChild, 1,
/*4184*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4187*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4189*/          OPC_MoveParent,
/*4190*/          OPC_EmitConvertToTarget, 1,
/*4192*/          OPC_MorphNodeTo, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (CMPri i32:i32:$rs1, (imm:i32):$simm13)
/*4200*/        /*Scope*/ 8, /*->4209*/
/*4201*/          OPC_MorphNodeTo, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (CMPrr i32:i32:$rs1, i32:i32:$rs2)
/*4209*/        0, /*End of Scope*/
/*4210*/      /*Scope*/ 38, /*->4249*/
/*4211*/        OPC_CheckChild0Type, MVT::i64,
/*4213*/        OPC_RecordChild1, // #1 = $b
/*4214*/        OPC_Scope, 21, /*->4237*/ // 2 children in Scope
/*4216*/          OPC_MoveChild, 1,
/*4218*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4221*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4223*/          OPC_MoveParent,
/*4224*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4226*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*4229*/          OPC_MorphNodeTo, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (CMPri ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
/*4237*/        /*Scope*/ 10, /*->4248*/
/*4238*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4240*/          OPC_MorphNodeTo, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i64:i64:$a, i64:i64:$b) - Complexity = 3
                  // Dst: (CMPrr ?:i64:$a, ?:i64:$b)
/*4248*/        0, /*End of Scope*/
/*4249*/      0, /*End of Scope*/
/*4250*/    /*SwitchOpcode*/ 69, TARGET_VAL(ISD::MUL),// ->4322
/*4253*/      OPC_RecordChild0, // #0 = $rs1
/*4254*/      OPC_RecordChild1, // #1 = $simm13
/*4255*/      OPC_Scope, 38, /*->4295*/ // 3 children in Scope
/*4257*/        OPC_MoveChild, 1,
/*4259*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4262*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4264*/        OPC_MoveParent,
/*4265*/        OPC_SwitchType /*2 cases */, 11, MVT::i32,// ->4279
/*4268*/          OPC_EmitConvertToTarget, 1,
/*4270*/          OPC_MorphNodeTo, TARGET_VAL(SP::SMULri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SMULri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4279*/        /*SwitchType*/ 13, MVT::i64,// ->4294
/*4281*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4283*/          OPC_EmitConvertToTarget, 1,
/*4285*/          OPC_MorphNodeTo, TARGET_VAL(SP::MULXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4294*/        0, // EndSwitchType
/*4295*/      /*Scope*/ 11, /*->4307*/
/*4296*/        OPC_CheckType, MVT::i32,
/*4298*/        OPC_MorphNodeTo, TARGET_VAL(SP::SMULrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SMULrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4307*/      /*Scope*/ 13, /*->4321*/
/*4308*/        OPC_CheckType, MVT::i64,
/*4310*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4312*/        OPC_MorphNodeTo, TARGET_VAL(SP::MULXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4321*/      0, /*End of Scope*/
/*4322*/    /*SwitchOpcode*/ 42, TARGET_VAL(ISD::SDIV),// ->4367
/*4325*/      OPC_RecordChild0, // #0 = $rs1
/*4326*/      OPC_RecordChild1, // #1 = $simm13
/*4327*/      OPC_Scope, 23, /*->4352*/ // 2 children in Scope
/*4329*/        OPC_MoveChild, 1,
/*4331*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4334*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4336*/        OPC_MoveParent,
/*4337*/        OPC_CheckType, MVT::i64,
/*4339*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4341*/        OPC_EmitConvertToTarget, 1,
/*4343*/        OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4352*/      /*Scope*/ 13, /*->4366*/
/*4353*/        OPC_CheckType, MVT::i64,
/*4355*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4357*/        OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4366*/      0, /*End of Scope*/
/*4367*/    /*SwitchOpcode*/ 42, TARGET_VAL(ISD::UDIV),// ->4412
/*4370*/      OPC_RecordChild0, // #0 = $rs1
/*4371*/      OPC_RecordChild1, // #1 = $simm13
/*4372*/      OPC_Scope, 23, /*->4397*/ // 2 children in Scope
/*4374*/        OPC_MoveChild, 1,
/*4376*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4379*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4381*/        OPC_MoveParent,
/*4382*/        OPC_CheckType, MVT::i64,
/*4384*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4386*/        OPC_EmitConvertToTarget, 1,
/*4388*/        OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4397*/      /*Scope*/ 13, /*->4411*/
/*4398*/        OPC_CheckType, MVT::i64,
/*4400*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4402*/        OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4411*/      0, /*End of Scope*/
/*4412*/    /*SwitchOpcode*/ 16, TARGET_VAL(ISD::CALLSEQ_START),// ->4431
/*4415*/      OPC_RecordNode, // #0 = 'callseq_start' chained node
/*4416*/      OPC_RecordChild1, // #1 = $amt
/*4417*/      OPC_MoveChild, 1,
/*4419*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*4422*/      OPC_MoveParent,
/*4423*/      OPC_EmitMergeInputChains1_0,
/*4424*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
/*4431*/    /*SwitchOpcode*/ 27, TARGET_VAL(SPISD::BRICC),// ->4461
/*4434*/      OPC_RecordNode, // #0 = 'SPbricc' chained node
/*4435*/      OPC_CaptureGlueInput,
/*4436*/      OPC_RecordChild1, // #1 = $imm22
/*4437*/      OPC_MoveChild, 1,
/*4439*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4442*/      OPC_MoveParent,
/*4443*/      OPC_RecordChild2, // #2 = $cond
/*4444*/      OPC_MoveChild, 2,
/*4446*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4449*/      OPC_MoveParent,
/*4450*/      OPC_EmitMergeInputChains1_0,
/*4451*/      OPC_EmitConvertToTarget, 2,
/*4453*/      OPC_MorphNodeTo, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (SPbricc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
              // Dst: (BCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4461*/    /*SwitchOpcode*/ 27, TARGET_VAL(SPISD::BRFCC),// ->4491
/*4464*/      OPC_RecordNode, // #0 = 'SPbrfcc' chained node
/*4465*/      OPC_CaptureGlueInput,
/*4466*/      OPC_RecordChild1, // #1 = $imm22
/*4467*/      OPC_MoveChild, 1,
/*4469*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4472*/      OPC_MoveParent,
/*4473*/      OPC_RecordChild2, // #2 = $cond
/*4474*/      OPC_MoveChild, 2,
/*4476*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4479*/      OPC_MoveParent,
/*4480*/      OPC_EmitMergeInputChains1_0,
/*4481*/      OPC_EmitConvertToTarget, 2,
/*4483*/      OPC_MorphNodeTo, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (SPbrfcc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
              // Dst: (FBCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4491*/    /*SwitchOpcode*/ 50, TARGET_VAL(SPISD::TLS_ADD),// ->4544
/*4494*/      OPC_RecordChild0, // #0 = $rs1
/*4495*/      OPC_RecordChild1, // #1 = $rs2
/*4496*/      OPC_Scope, 21, /*->4519*/ // 2 children in Scope
/*4498*/        OPC_CheckChild1Type, MVT::i32,
/*4500*/        OPC_RecordChild2, // #2 = $sym
/*4501*/        OPC_MoveChild, 2,
/*4503*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*4506*/        OPC_MoveParent,
/*4507*/        OPC_CheckType, MVT::i32,
/*4509*/        OPC_MorphNodeTo, TARGET_VAL(SP::TLS_ADDrr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:i32 i32:i32:$rs1, i32:i32:$rs2, (tglobaltlsaddr:iPTR):$sym) - Complexity = 6
                // Dst: (TLS_ADDrr:i32 i32:i32:$rs1, i32:i32:$rs2, (tglobaltlsaddr:iPTR):$sym)
/*4519*/      /*Scope*/ 23, /*->4543*/
/*4520*/        OPC_CheckChild1Type, MVT::i64,
/*4522*/        OPC_RecordChild2, // #2 = $sym
/*4523*/        OPC_MoveChild, 2,
/*4525*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*4528*/        OPC_MoveParent,
/*4529*/        OPC_CheckType, MVT::i64,
/*4531*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4533*/        OPC_MorphNodeTo, TARGET_VAL(SP::TLS_ADDXrr), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:i64 i64:i64:$rs1, i64:i64:$rs2, (tglobaltlsaddr:iPTR):$sym) - Complexity = 6
                // Dst: (TLS_ADDXrr:i64 i64:i64:$rs1, i64:i64:$rs2, (tglobaltlsaddr:iPTR):$sym)
/*4543*/      0, /*End of Scope*/
/*4544*/    /*SwitchOpcode*/ 117, TARGET_VAL(SPISD::Hi),// ->4664
/*4547*/      OPC_RecordChild0, // #0 = $in
/*4548*/      OPC_MoveChild, 0,
/*4550*/      OPC_SwitchOpcode /*4 cases */, 25, TARGET_VAL(ISD::TargetGlobalAddress),// ->4579
/*4554*/        OPC_MoveParent,
/*4555*/        OPC_Scope, 10, /*->4567*/ // 2 children in Scope
/*4557*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4559*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
/*4567*/        /*Scope*/ 10, /*->4578*/
/*4568*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4570*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
/*4578*/        0, /*End of Scope*/
/*4579*/      /*SwitchOpcode*/ 25, TARGET_VAL(ISD::TargetConstantPool),// ->4607
/*4582*/        OPC_MoveParent,
/*4583*/        OPC_Scope, 10, /*->4595*/ // 2 children in Scope
/*4585*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4587*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
/*4595*/        /*Scope*/ 10, /*->4606*/
/*4596*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4598*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
/*4606*/        0, /*End of Scope*/
/*4607*/      /*SwitchOpcode*/ 25, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4635
/*4610*/        OPC_MoveParent,
/*4611*/        OPC_Scope, 10, /*->4623*/ // 2 children in Scope
/*4613*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4615*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaltlsaddr:i32):$in)
/*4623*/        /*Scope*/ 10, /*->4634*/
/*4624*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4626*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaltlsaddr:i32):$in)
/*4634*/        0, /*End of Scope*/
/*4635*/      /*SwitchOpcode*/ 25, TARGET_VAL(ISD::TargetBlockAddress),// ->4663
/*4638*/        OPC_MoveParent,
/*4639*/        OPC_Scope, 10, /*->4651*/ // 2 children in Scope
/*4641*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4643*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
/*4651*/        /*Scope*/ 10, /*->4662*/
/*4652*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4654*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
/*4662*/        0, /*End of Scope*/
/*4663*/      0, // EndSwitchOpcode
/*4664*/    /*SwitchOpcode*/ 29|128,1/*157*/, TARGET_VAL(SPISD::Lo),// ->4825
/*4668*/      OPC_RecordChild0, // #0 = $in
/*4669*/      OPC_MoveChild, 0,
/*4671*/      OPC_SwitchOpcode /*4 cases */, 35, TARGET_VAL(ISD::TargetGlobalAddress),// ->4710
/*4675*/        OPC_MoveParent,
/*4676*/        OPC_Scope, 14, /*->4692*/ // 2 children in Scope
/*4678*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4680*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4683*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
/*4692*/        /*Scope*/ 16, /*->4709*/
/*4693*/          OPC_CheckType, MVT::i64,
/*4695*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4697*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4700*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tglobaladdr:i64):$in)
/*4709*/        0, /*End of Scope*/
/*4710*/      /*SwitchOpcode*/ 35, TARGET_VAL(ISD::TargetConstantPool),// ->4748
/*4713*/        OPC_MoveParent,
/*4714*/        OPC_Scope, 14, /*->4730*/ // 2 children in Scope
/*4716*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4718*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4721*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
/*4730*/        /*Scope*/ 16, /*->4747*/
/*4731*/          OPC_CheckType, MVT::i64,
/*4733*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4735*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4738*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tconstpool:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tconstpool:i64):$in)
/*4747*/        0, /*End of Scope*/
/*4748*/      /*SwitchOpcode*/ 35, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4786
/*4751*/        OPC_MoveParent,
/*4752*/        OPC_Scope, 14, /*->4768*/ // 2 children in Scope
/*4754*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4756*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4759*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tglobaltlsaddr:i32):$in)
/*4768*/        /*Scope*/ 16, /*->4785*/
/*4769*/          OPC_CheckType, MVT::i64,
/*4771*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4773*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4776*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tglobaltlsaddr:i64):$in)
/*4785*/        0, /*End of Scope*/
/*4786*/      /*SwitchOpcode*/ 35, TARGET_VAL(ISD::TargetBlockAddress),// ->4824
/*4789*/        OPC_MoveParent,
/*4790*/        OPC_Scope, 14, /*->4806*/ // 2 children in Scope
/*4792*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.is64Bit())
/*4794*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4797*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tblockaddress:i32):$in)
/*4806*/        /*Scope*/ 16, /*->4823*/
/*4807*/          OPC_CheckType, MVT::i64,
/*4809*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4811*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4814*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORXri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tblockaddress:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tblockaddress:i64):$in)
/*4823*/        0, /*End of Scope*/
/*4824*/      0, // EndSwitchOpcode
/*4825*/    /*SwitchOpcode*/ 29, TARGET_VAL(SPISD::BRXCC),// ->4857
/*4828*/      OPC_RecordNode, // #0 = 'SPbrxcc' chained node
/*4829*/      OPC_CaptureGlueInput,
/*4830*/      OPC_RecordChild1, // #1 = $imm19
/*4831*/      OPC_MoveChild, 1,
/*4833*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4836*/      OPC_MoveParent,
/*4837*/      OPC_RecordChild2, // #2 = $cond
/*4838*/      OPC_MoveChild, 2,
/*4840*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4843*/      OPC_MoveParent,
/*4844*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4846*/      OPC_EmitMergeInputChains1_0,
/*4847*/      OPC_EmitConvertToTarget, 2,
/*4849*/      OPC_MorphNodeTo, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (SPbrxcc (bb:Other):$imm19, (imm:i32):$cond) - Complexity = 6
              // Dst: (BPXCC (bb:Other):$imm19, (imm:i32):$cond)
/*4857*/    /*SwitchOpcode*/ 0|128,2/*256*/, TARGET_VAL(ISD::Constant),// ->5117
/*4861*/      OPC_RecordNode, // #0 = $imm22
/*4862*/      OPC_Scope, 17, /*->4881*/ // 7 children in Scope
/*4864*/        OPC_CheckPredicate, 26, // Predicate_SETHIimm
/*4866*/        OPC_CheckType, MVT::i32,
/*4868*/        OPC_EmitConvertToTarget, 0,
/*4870*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*4873*/        OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$imm22))
/*4881*/      /*Scope*/ 37, /*->4919*/
/*4882*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4884*/        OPC_SwitchType /*2 cases */, 14, MVT::i32,// ->4901
/*4887*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4890*/          OPC_EmitConvertToTarget, 0,
/*4892*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
/*4901*/        /*SwitchType*/ 15, MVT::i64,// ->4918
/*4903*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4906*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*4909*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
/*4918*/        0, // EndSwitchType
/*4919*/      /*Scope*/ 34, /*->4954*/
/*4920*/        OPC_CheckPredicate, 26, // Predicate_SETHIimm
/*4922*/        OPC_CheckType, MVT::i64,
/*4924*/        OPC_Scope, 11, /*->4937*/ // 2 children in Scope
/*4926*/          OPC_EmitNodeXForm, 1, 0, // HI22
/*4929*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
                  // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*4937*/        /*Scope*/ 15, /*->4953*/
/*4938*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4940*/          OPC_EmitConvertToTarget, 0,
/*4942*/          OPC_EmitNodeXForm, 1, 1, // HI22
/*4945*/          OPC_MorphNodeTo, TARGET_VAL(SP::SETHIXi), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                  // Dst: (SETHIXi:i64 (HI22:i64 (imm:i64):$imm22))
/*4953*/        0, /*End of Scope*/
/*4954*/      /*Scope*/ 29, /*->4984*/
/*4955*/        OPC_CheckPredicate, 27, // Predicate_uimm32
/*4957*/        OPC_CheckType, MVT::i64,
/*4959*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4961*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*4964*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4972*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*4975*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
                // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*4984*/      /*Scope*/ 29, /*->5014*/
/*4985*/        OPC_CheckPredicate, 28, // Predicate_nimm33
/*4987*/        OPC_CheckType, MVT::i64,
/*4989*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4991*/        OPC_EmitNodeXForm, 3, 0, // HIX22
/*4994*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5002*/        OPC_EmitNodeXForm, 4, 0, // LOX10
/*5005*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
                // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*5014*/      /*Scope*/ 29, /*->5044*/
/*5015*/        OPC_CheckType, MVT::i32,
/*5017*/        OPC_EmitConvertToTarget, 0,
/*5019*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*5022*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*5030*/        OPC_EmitConvertToTarget, 0,
/*5032*/        OPC_EmitNodeXForm, 2, 4, // LO10
/*5035*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$val - Complexity = 3
                // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*5044*/      /*Scope*/ 71, /*->5116*/
/*5045*/        OPC_CheckType, MVT::i64,
/*5047*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5049*/        OPC_EmitNodeXForm, 5, 0, // HH22
/*5052*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5060*/        OPC_EmitNodeXForm, 6, 0, // HM10
/*5063*/        OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*5072*/        OPC_EmitInteger, MVT::i32, 32, 
/*5075*/        OPC_EmitNode, TARGET_VAL(SP::SLLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*5084*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*5087*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*5095*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*5098*/        OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*5107*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 10, 
                // Src: (imm:i64):$val - Complexity = 3
                // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*5116*/      0, /*End of Scope*/
/*5117*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->5156
/*5120*/      OPC_RecordMemRef,
/*5121*/      OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/*5122*/      OPC_RecordChild1, // #1 = $addr
/*5123*/      OPC_RecordChild2, // #2 = $rs2
/*5124*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5139
/*5127*/        OPC_CheckPredicate, 29, // Predicate_atomic_load_add_32
/*5129*/        OPC_EmitMergeInputChains1_0,
/*5130*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_ADD_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5139*/      /*SwitchType*/ 14, MVT::i64,// ->5155
/*5141*/        OPC_CheckPredicate, 30, // Predicate_atomic_load_add_64
/*5143*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5145*/        OPC_EmitMergeInputChains1_0,
/*5146*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_ADD_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5155*/      0, // EndSwitchType
/*5156*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->5195
/*5159*/      OPC_RecordMemRef,
/*5160*/      OPC_RecordNode, // #0 = 'atomic_load_sub' chained node
/*5161*/      OPC_RecordChild1, // #1 = $addr
/*5162*/      OPC_RecordChild2, // #2 = $rs2
/*5163*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5178
/*5166*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_sub_32
/*5168*/        OPC_EmitMergeInputChains1_0,
/*5169*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_SUB_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5178*/      /*SwitchType*/ 14, MVT::i64,// ->5194
/*5180*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_sub_64
/*5182*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5184*/        OPC_EmitMergeInputChains1_0,
/*5185*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_SUB_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5194*/      0, // EndSwitchType
/*5195*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->5234
/*5198*/      OPC_RecordMemRef,
/*5199*/      OPC_RecordNode, // #0 = 'atomic_load_and' chained node
/*5200*/      OPC_RecordChild1, // #1 = $addr
/*5201*/      OPC_RecordChild2, // #2 = $rs2
/*5202*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5217
/*5205*/        OPC_CheckPredicate, 33, // Predicate_atomic_load_and_32
/*5207*/        OPC_EmitMergeInputChains1_0,
/*5208*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_AND_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5217*/      /*SwitchType*/ 14, MVT::i64,// ->5233
/*5219*/        OPC_CheckPredicate, 34, // Predicate_atomic_load_and_64
/*5221*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5223*/        OPC_EmitMergeInputChains1_0,
/*5224*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_AND_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5233*/      0, // EndSwitchType
/*5234*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->5273
/*5237*/      OPC_RecordMemRef,
/*5238*/      OPC_RecordNode, // #0 = 'atomic_load_or' chained node
/*5239*/      OPC_RecordChild1, // #1 = $addr
/*5240*/      OPC_RecordChild2, // #2 = $rs2
/*5241*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5256
/*5244*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_or_32
/*5246*/        OPC_EmitMergeInputChains1_0,
/*5247*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_OR_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5256*/      /*SwitchType*/ 14, MVT::i64,// ->5272
/*5258*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_or_64
/*5260*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5262*/        OPC_EmitMergeInputChains1_0,
/*5263*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_OR_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5272*/      0, // EndSwitchType
/*5273*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->5312
/*5276*/      OPC_RecordMemRef,
/*5277*/      OPC_RecordNode, // #0 = 'atomic_load_xor' chained node
/*5278*/      OPC_RecordChild1, // #1 = $addr
/*5279*/      OPC_RecordChild2, // #2 = $rs2
/*5280*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5295
/*5283*/        OPC_CheckPredicate, 37, // Predicate_atomic_load_xor_32
/*5285*/        OPC_EmitMergeInputChains1_0,
/*5286*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_XOR_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5295*/      /*SwitchType*/ 14, MVT::i64,// ->5311
/*5297*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_xor_64
/*5299*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5301*/        OPC_EmitMergeInputChains1_0,
/*5302*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_XOR_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5311*/      0, // EndSwitchType
/*5312*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->5351
/*5315*/      OPC_RecordMemRef,
/*5316*/      OPC_RecordNode, // #0 = 'atomic_load_nand' chained node
/*5317*/      OPC_RecordChild1, // #1 = $addr
/*5318*/      OPC_RecordChild2, // #2 = $rs2
/*5319*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5334
/*5322*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_nand_32
/*5324*/        OPC_EmitMergeInputChains1_0,
/*5325*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_NAND_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5334*/      /*SwitchType*/ 14, MVT::i64,// ->5350
/*5336*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_nand_64
/*5338*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5340*/        OPC_EmitMergeInputChains1_0,
/*5341*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_NAND_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5350*/      0, // EndSwitchType
/*5351*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->5390
/*5354*/      OPC_RecordMemRef,
/*5355*/      OPC_RecordNode, // #0 = 'atomic_load_min' chained node
/*5356*/      OPC_RecordChild1, // #1 = $addr
/*5357*/      OPC_RecordChild2, // #2 = $rs2
/*5358*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5373
/*5361*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_min_32
/*5363*/        OPC_EmitMergeInputChains1_0,
/*5364*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_min:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_min_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_MIN_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5373*/      /*SwitchType*/ 14, MVT::i64,// ->5389
/*5375*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_min_64
/*5377*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5379*/        OPC_EmitMergeInputChains1_0,
/*5380*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_min:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_min_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_MIN_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5389*/      0, // EndSwitchType
/*5390*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->5429
/*5393*/      OPC_RecordMemRef,
/*5394*/      OPC_RecordNode, // #0 = 'atomic_load_max' chained node
/*5395*/      OPC_RecordChild1, // #1 = $addr
/*5396*/      OPC_RecordChild2, // #2 = $rs2
/*5397*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5412
/*5400*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_max_32
/*5402*/        OPC_EmitMergeInputChains1_0,
/*5403*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_max:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_max_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_MAX_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5412*/      /*SwitchType*/ 14, MVT::i64,// ->5428
/*5414*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_max_64
/*5416*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5418*/        OPC_EmitMergeInputChains1_0,
/*5419*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_max:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_max_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_MAX_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5428*/      0, // EndSwitchType
/*5429*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->5468
/*5432*/      OPC_RecordMemRef,
/*5433*/      OPC_RecordNode, // #0 = 'atomic_load_umin' chained node
/*5434*/      OPC_RecordChild1, // #1 = $addr
/*5435*/      OPC_RecordChild2, // #2 = $rs2
/*5436*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5451
/*5439*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_umin_32
/*5441*/        OPC_EmitMergeInputChains1_0,
/*5442*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_umin:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_UMIN_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5451*/      /*SwitchType*/ 14, MVT::i64,// ->5467
/*5453*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_umin_64
/*5455*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5457*/        OPC_EmitMergeInputChains1_0,
/*5458*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_umin:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_UMIN_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5467*/      0, // EndSwitchType
/*5468*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->5507
/*5471*/      OPC_RecordMemRef,
/*5472*/      OPC_RecordNode, // #0 = 'atomic_load_umax' chained node
/*5473*/      OPC_RecordChild1, // #1 = $addr
/*5474*/      OPC_RecordChild2, // #2 = $rs2
/*5475*/      OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->5490
/*5478*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_umax_32
/*5480*/        OPC_EmitMergeInputChains1_0,
/*5481*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_umax:i32 iPTR:iPTR:$addr, i32:i32:$rs2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_UMAX_32:i32 iPTR:iPTR:$addr, i32:i32:$rs2)
/*5490*/      /*SwitchType*/ 14, MVT::i64,// ->5506
/*5492*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_umax_64
/*5494*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5496*/        OPC_EmitMergeInputChains1_0,
/*5497*/        OPC_MorphNodeTo, TARGET_VAL(SP::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_umax:i64 iPTR:iPTR:$addr, i64:i64:$rs2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_UMAX_64:i64 iPTR:iPTR:$addr, i64:i64:$rs2)
/*5506*/      0, // EndSwitchType
/*5507*/    /*SwitchOpcode*/ 21, TARGET_VAL(SPISD::FLUSHW),// ->5531
/*5510*/      OPC_RecordNode, // #0 = 'flushw' chained node
/*5511*/      OPC_Scope, 9, /*->5522*/ // 2 children in Scope
/*5513*/        OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*5515*/        OPC_EmitMergeInputChains1_0,
/*5516*/        OPC_MorphNodeTo, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (FLUSHW)
/*5522*/      /*Scope*/ 7, /*->5530*/
/*5523*/        OPC_EmitMergeInputChains1_0,
/*5524*/        OPC_MorphNodeTo, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (TA3)
/*5530*/      0, /*End of Scope*/
/*5531*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TRAP),// ->5542
/*5534*/      OPC_RecordNode, // #0 = 'trap' chained node
/*5535*/      OPC_EmitMergeInputChains1_0,
/*5536*/      OPC_MorphNodeTo, TARGET_VAL(SP::TA5), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (TA5)
/*5542*/    /*SwitchOpcode*/ 16, TARGET_VAL(ISD::BR),// ->5561
/*5545*/      OPC_RecordNode, // #0 = 'br' chained node
/*5546*/      OPC_RecordChild1, // #1 = $imm22
/*5547*/      OPC_MoveChild, 1,
/*5549*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5552*/      OPC_MoveParent,
/*5553*/      OPC_EmitMergeInputChains1_0,
/*5554*/      OPC_MorphNodeTo, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm22) - Complexity = 3
              // Dst: (BA (bb:Other):$imm22)
/*5561*/    /*SwitchOpcode*/ 44, TARGET_VAL(SPISD::CMPFCC),// ->5608
/*5564*/      OPC_RecordChild0, // #0 = $rs1
/*5565*/      OPC_Scope, 12, /*->5579*/ // 3 children in Scope
/*5567*/        OPC_CheckChild0Type, MVT::f32,
/*5569*/        OPC_RecordChild1, // #1 = $rs2
/*5570*/        OPC_MorphNodeTo, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FCMPS:i1 f32:f32:$rs1, f32:f32:$rs2)
/*5579*/      /*Scope*/ 12, /*->5592*/
/*5580*/        OPC_CheckChild0Type, MVT::f64,
/*5582*/        OPC_RecordChild1, // #1 = $rs2
/*5583*/        OPC_MorphNodeTo, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FCMPD:i1 f64:f64:$rs1, f64:f64:$rs2)
/*5592*/      /*Scope*/ 14, /*->5607*/
/*5593*/        OPC_CheckChild0Type, MVT::f128,
/*5595*/        OPC_RecordChild1, // #1 = $rs2
/*5596*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*5598*/        OPC_MorphNodeTo, TARGET_VAL(SP::FCMPQ), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FCMPQ:i1 f128:f128:$rs1, f128:f128:$rs2)
/*5607*/      0, /*End of Scope*/
/*5608*/    /*SwitchOpcode*/ 41, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->5652
/*5611*/      OPC_RecordMemRef,
/*5612*/      OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/*5613*/      OPC_RecordChild1, // #1 = $rs1
/*5614*/      OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->5632
/*5617*/        OPC_RecordChild2, // #2 = $rs2
/*5618*/        OPC_RecordChild3, // #3 = $swap
/*5619*/        OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*5621*/        OPC_EmitMergeInputChains1_0,
/*5622*/        OPC_MorphNodeTo, TARGET_VAL(SP::CASrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap) - Complexity = 3
                // Dst: (CASrr:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)
/*5632*/      /*SwitchType*/ 17, MVT::i64,// ->5651
/*5634*/        OPC_CheckChild1Type, MVT::i64,
/*5636*/        OPC_RecordChild2, // #2 = $rs2
/*5637*/        OPC_RecordChild3, // #3 = $swap
/*5638*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5640*/        OPC_EmitMergeInputChains1_0,
/*5641*/        OPC_MorphNodeTo, TARGET_VAL(SP::CASXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 i64:i64:$rs1, i64:i64:$rs2, i64:i64:$swap) - Complexity = 3
                // Dst: (CASXrr:i64 i64:i64:$rs1, i64:i64:$rs2, i64:i64:$swap)
/*5651*/      0, // EndSwitchType
/*5652*/    /*SwitchOpcode*/ 19, TARGET_VAL(ISD::ANY_EXTEND),// ->5674
/*5655*/      OPC_RecordChild0, // #0 = $val
/*5656*/      OPC_CheckChild0Type, MVT::i32,
/*5658*/      OPC_CheckType, MVT::i64,
/*5660*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5662*/      OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*5665*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
/*5674*/    /*SwitchOpcode*/ 17, TARGET_VAL(ISD::TRUNCATE),// ->5694
/*5677*/      OPC_RecordChild0, // #0 = $val
/*5678*/      OPC_CheckType, MVT::i32,
/*5680*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5682*/      OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*5685*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
/*5694*/    /*SwitchOpcode*/ 19, TARGET_VAL(ISD::ZERO_EXTEND),// ->5716
/*5697*/      OPC_RecordChild0, // #0 = $val
/*5698*/      OPC_CheckChild0Type, MVT::i32,
/*5700*/      OPC_CheckType, MVT::i64,
/*5702*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5704*/      OPC_EmitInteger, MVT::i32, 0, 
/*5707*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (zext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
/*5716*/    /*SwitchOpcode*/ 19, TARGET_VAL(ISD::SIGN_EXTEND),// ->5738
/*5719*/      OPC_RecordChild0, // #0 = $val
/*5720*/      OPC_CheckChild0Type, MVT::i32,
/*5722*/      OPC_CheckType, MVT::i64,
/*5724*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5726*/      OPC_EmitInteger, MVT::i32, 0, 
/*5729*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
/*5738*/    /*SwitchOpcode*/ 20, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5761
/*5741*/      OPC_RecordChild0, // #0 = $val
/*5742*/      OPC_MoveChild, 1,
/*5744*/      OPC_CheckValueType, MVT::i32,
/*5746*/      OPC_MoveParent,
/*5747*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5749*/      OPC_EmitInteger, MVT::i32, 0, 
/*5752*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
              // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
/*5761*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::CTPOP),// ->5801
/*5764*/      OPC_RecordChild0, // #0 = $src
/*5765*/      OPC_SwitchType /*2 cases */, 10, MVT::i64,// ->5778
/*5768*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*5770*/        OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctpop:i64 i64:i64:$src) - Complexity = 3
                // Dst: (POPCrr:i64 ?:i64:$src)
/*5778*/      /*SwitchType*/ 20, MVT::i32,// ->5800
/*5780*/        OPC_EmitInteger, MVT::i32, 0, 
/*5783*/        OPC_EmitNode, TARGET_VAL(SP::SRLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5792*/        OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
                // Dst: (POPCrr:i32 (SRLri:i32 ?:i32:$src, 0:i32))
/*5800*/      0, // EndSwitchType
/*5801*/    /*SwitchOpcode*/ 97, TARGET_VAL(ISD::FMUL),// ->5901
/*5804*/      OPC_Scope, 54, /*->5860*/ // 2 children in Scope
/*5806*/        OPC_MoveChild, 0,
/*5808*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5811*/        OPC_RecordChild0, // #0 = $rs1
/*5812*/        OPC_Scope, 19, /*->5833*/ // 2 children in Scope
/*5814*/          OPC_MoveParent,
/*5815*/          OPC_MoveChild, 1,
/*5817*/          OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5820*/          OPC_RecordChild0, // #1 = $rs2
/*5821*/          OPC_MoveParent,
/*5822*/          OPC_CheckType, MVT::f64,
/*5824*/          OPC_MorphNodeTo, TARGET_VAL(SP::FSMULD), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 (fextend:f64 f32:f32:$rs1), (fextend:f64 f32:f32:$rs2)) - Complexity = 9
                  // Dst: (FSMULD:f64 f32:f32:$rs1, f32:f32:$rs2)
/*5833*/        /*Scope*/ 25, /*->5859*/
/*5834*/          OPC_CheckChild0Type, MVT::f64,
/*5836*/          OPC_MoveParent,
/*5837*/          OPC_MoveChild, 1,
/*5839*/          OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5842*/          OPC_RecordChild0, // #1 = $rs2
/*5843*/          OPC_CheckChild0Type, MVT::f64,
/*5845*/          OPC_MoveParent,
/*5846*/          OPC_CheckType, MVT::f128,
/*5848*/          OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*5850*/          OPC_MorphNodeTo, TARGET_VAL(SP::FDMULQ), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 (fextend:f128 f64:f64:$rs1), (fextend:f128 f64:f64:$rs2)) - Complexity = 9
                  // Dst: (FDMULQ:f128 f64:f64:$rs1, f64:f64:$rs2)
/*5859*/        0, /*End of Scope*/
/*5860*/      /*Scope*/ 39, /*->5900*/
/*5861*/        OPC_RecordChild0, // #0 = $rs1
/*5862*/        OPC_RecordChild1, // #1 = $rs2
/*5863*/        OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->5875
/*5866*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMULS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                  // Dst: (FMULS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5875*/        /*SwitchType*/ 9, MVT::f64,// ->5886
/*5877*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMULD), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                  // Dst: (FMULD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5886*/        /*SwitchType*/ 11, MVT::f128,// ->5899
/*5888*/          OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*5890*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMULQ), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                  // Dst: (FMULQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5899*/        0, // EndSwitchType
/*5900*/      0, /*End of Scope*/
/*5901*/    /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::ITOF),// ->5939
/*5904*/      OPC_RecordChild0, // #0 = $rs2
/*5905*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5916
/*5908*/        OPC_MorphNodeTo, TARGET_VAL(SP::FITOS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPitof:f32 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOS:f32 FPRegs:f32:$rs2)
/*5916*/      /*SwitchType*/ 8, MVT::f64,// ->5926
/*5918*/        OPC_MorphNodeTo, TARGET_VAL(SP::FITOD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPitof:f64 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOD:f64 FPRegs:f32:$rs2)
/*5926*/      /*SwitchType*/ 10, MVT::f128,// ->5938
/*5928*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*5930*/        OPC_MorphNodeTo, TARGET_VAL(SP::FITOQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPitof:f128 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOQ:f128 FPRegs:f32:$rs2)
/*5938*/      0, // EndSwitchType
/*5939*/    /*SwitchOpcode*/ 38, TARGET_VAL(SPISD::FTOI),// ->5980
/*5942*/      OPC_RecordChild0, // #0 = $rs2
/*5943*/      OPC_Scope, 10, /*->5955*/ // 3 children in Scope
/*5945*/        OPC_CheckChild0Type, MVT::f32,
/*5947*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSTOI), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FSTOI:f32 FPRegs:f32:$rs2)
/*5955*/      /*Scope*/ 10, /*->5966*/
/*5956*/        OPC_CheckChild0Type, MVT::f64,
/*5958*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDTOI), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FDTOI:f32 DFPRegs:f64:$rs2)
/*5966*/      /*Scope*/ 12, /*->5979*/
/*5967*/        OPC_CheckChild0Type, MVT::f128,
/*5969*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*5971*/        OPC_MorphNodeTo, TARGET_VAL(SP::FQTOI), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 QFPRegs:f128:$rs2) - Complexity = 3
                // Dst: (FQTOI:f32 QFPRegs:f128:$rs2)
/*5979*/      0, /*End of Scope*/
/*5980*/    /*SwitchOpcode*/ 43, TARGET_VAL(ISD::FP_EXTEND),// ->6026
/*5983*/      OPC_RecordChild0, // #0 = $rs2
/*5984*/      OPC_SwitchType /*2 cases */, 8, MVT::f64,// ->5995
/*5987*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSTOD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fextend:f64 f32:f32:$rs2) - Complexity = 3
                // Dst: (FSTOD:f64 f32:f32:$rs2)
/*5995*/      /*SwitchType*/ 28, MVT::f128,// ->6025
/*5997*/        OPC_Scope, 12, /*->6011*/ // 2 children in Scope
/*5999*/          OPC_CheckChild0Type, MVT::f32,
/*6001*/          OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6003*/          OPC_MorphNodeTo, TARGET_VAL(SP::FSTOQ), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fextend:f128 f32:f32:$rs2) - Complexity = 3
                  // Dst: (FSTOQ:f128 f32:f32:$rs2)
/*6011*/        /*Scope*/ 12, /*->6024*/
/*6012*/          OPC_CheckChild0Type, MVT::f64,
/*6014*/          OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6016*/          OPC_MorphNodeTo, TARGET_VAL(SP::FDTOQ), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fextend:f128 f64:f64:$rs2) - Complexity = 3
                  // Dst: (FDTOQ:f128 f64:f64:$rs2)
/*6024*/        0, /*End of Scope*/
/*6025*/      0, // EndSwitchType
/*6026*/    /*SwitchOpcode*/ 43, TARGET_VAL(ISD::FP_ROUND),// ->6072
/*6029*/      OPC_RecordChild0, // #0 = $rs2
/*6030*/      OPC_SwitchType /*2 cases */, 26, MVT::f32,// ->6059
/*6033*/        OPC_Scope, 10, /*->6045*/ // 2 children in Scope
/*6035*/          OPC_CheckChild0Type, MVT::f64,
/*6037*/          OPC_MorphNodeTo, TARGET_VAL(SP::FDTOS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fround:f32 f64:f64:$rs2) - Complexity = 3
                  // Dst: (FDTOS:f32 f64:f64:$rs2)
/*6045*/        /*Scope*/ 12, /*->6058*/
/*6046*/          OPC_CheckChild0Type, MVT::f128,
/*6048*/          OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6050*/          OPC_MorphNodeTo, TARGET_VAL(SP::FQTOS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fround:f32 f128:f128:$rs2) - Complexity = 3
                  // Dst: (FQTOS:f32 f128:f128:$rs2)
/*6058*/        0, /*End of Scope*/
/*6059*/      /*SwitchType*/ 10, MVT::f64,// ->6071
/*6061*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6063*/        OPC_MorphNodeTo, TARGET_VAL(SP::FQTOD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fround:f64 f128:f128:$rs2) - Complexity = 3
                // Dst: (FQTOD:f64 f128:f128:$rs2)
/*6071*/      0, // EndSwitchType
/*6072*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::FNEG),// ->6112
/*6075*/      OPC_RecordChild0, // #0 = $rs2
/*6076*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->6087
/*6079*/        OPC_MorphNodeTo, TARGET_VAL(SP::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$rs2)
/*6087*/      /*SwitchType*/ 10, MVT::f64,// ->6099
/*6089*/        OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*6091*/        OPC_MorphNodeTo, TARGET_VAL(SP::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$rs2)
/*6099*/      /*SwitchType*/ 10, MVT::f128,// ->6111
/*6101*/        OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*6103*/        OPC_MorphNodeTo, TARGET_VAL(SP::FNEGQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FNEGQ:f128 f128:f128:$rs2)
/*6111*/      0, // EndSwitchType
/*6112*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::FABS),// ->6152
/*6115*/      OPC_RecordChild0, // #0 = $rs2
/*6116*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->6127
/*6119*/        OPC_MorphNodeTo, TARGET_VAL(SP::FABSS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fabs:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FABSS:f32 f32:f32:$rs2)
/*6127*/      /*SwitchType*/ 10, MVT::f64,// ->6139
/*6129*/        OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*6131*/        OPC_MorphNodeTo, TARGET_VAL(SP::FABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FABSD:f64 f64:f64:$rs2)
/*6139*/      /*SwitchType*/ 10, MVT::f128,// ->6151
/*6141*/        OPC_CheckPatternPredicate, 3, // (Subtarget.isV9())
/*6143*/        OPC_MorphNodeTo, TARGET_VAL(SP::FABSQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fabs:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FABSQ:f128 f128:f128:$rs2)
/*6151*/      0, // EndSwitchType
/*6152*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::FSQRT),// ->6190
/*6155*/      OPC_RecordChild0, // #0 = $rs2
/*6156*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->6167
/*6159*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FSQRTS:f32 f32:f32:$rs2)
/*6167*/      /*SwitchType*/ 8, MVT::f64,// ->6177
/*6169*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FSQRTD:f64 f64:f64:$rs2)
/*6177*/      /*SwitchType*/ 10, MVT::f128,// ->6189
/*6179*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6181*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FSQRTQ:f128 f128:f128:$rs2)
/*6189*/      0, // EndSwitchType
/*6190*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::FADD),// ->6232
/*6193*/      OPC_RecordChild0, // #0 = $rs1
/*6194*/      OPC_RecordChild1, // #1 = $rs2
/*6195*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->6207
/*6198*/        OPC_MorphNodeTo, TARGET_VAL(SP::FADDS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FADDS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*6207*/      /*SwitchType*/ 9, MVT::f64,// ->6218
/*6209*/        OPC_MorphNodeTo, TARGET_VAL(SP::FADDD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FADDD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*6218*/      /*SwitchType*/ 11, MVT::f128,// ->6231
/*6220*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6222*/        OPC_MorphNodeTo, TARGET_VAL(SP::FADDQ), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FADDQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*6231*/      0, // EndSwitchType
/*6232*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::FSUB),// ->6274
/*6235*/      OPC_RecordChild0, // #0 = $rs1
/*6236*/      OPC_RecordChild1, // #1 = $rs2
/*6237*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->6249
/*6240*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSUBS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FSUBS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*6249*/      /*SwitchType*/ 9, MVT::f64,// ->6260
/*6251*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSUBD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FSUBD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*6260*/      /*SwitchType*/ 11, MVT::f128,// ->6273
/*6262*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6264*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSUBQ), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FSUBQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*6273*/      0, // EndSwitchType
/*6274*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::FDIV),// ->6316
/*6277*/      OPC_RecordChild0, // #0 = $rs1
/*6278*/      OPC_RecordChild1, // #1 = $rs2
/*6279*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->6291
/*6282*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDIVS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FDIVS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*6291*/      /*SwitchType*/ 9, MVT::f64,// ->6302
/*6293*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDIVD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FDIVD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*6302*/      /*SwitchType*/ 11, MVT::f128,// ->6315
/*6304*/        OPC_CheckPatternPredicate, 5, // (Subtarget.hasHardQuad())
/*6306*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDIVQ), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FDIVQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*6315*/      0, // EndSwitchType
/*6316*/    /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::XTOF),// ->6358
/*6319*/      OPC_RecordChild0, // #0 = $rs2
/*6320*/      OPC_SwitchType /*3 cases */, 10, MVT::f32,// ->6333
/*6323*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*6325*/        OPC_MorphNodeTo, TARGET_VAL(SP::FXTOS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f32 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOS:f32 DFPRegs:f64:$rs2)
/*6333*/      /*SwitchType*/ 10, MVT::f64,// ->6345
/*6335*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*6337*/        OPC_MorphNodeTo, TARGET_VAL(SP::FXTOD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f64 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOD:f64 DFPRegs:f64:$rs2)
/*6345*/      /*SwitchType*/ 10, MVT::f128,// ->6357
/*6347*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*6349*/        OPC_MorphNodeTo, TARGET_VAL(SP::FXTOQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f128 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOQ:f128 DFPRegs:f64:$rs2)
/*6357*/      0, // EndSwitchType
/*6358*/    /*SwitchOpcode*/ 42, TARGET_VAL(SPISD::FTOX),// ->6403
/*6361*/      OPC_RecordChild0, // #0 = $rs2
/*6362*/      OPC_Scope, 12, /*->6376*/ // 3 children in Scope
/*6364*/        OPC_CheckChild0Type, MVT::f32,
/*6366*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*6368*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSTOX), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FSTOX:f64 FPRegs:f32:$rs2)
/*6376*/      /*Scope*/ 12, /*->6389*/
/*6377*/        OPC_CheckChild0Type, MVT::f64,
/*6379*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*6381*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDTOX), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FDTOX:f64 DFPRegs:f64:$rs2)
/*6389*/      /*Scope*/ 12, /*->6402*/
/*6390*/        OPC_CheckChild0Type, MVT::f128,
/*6392*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*6394*/        OPC_MorphNodeTo, TARGET_VAL(SP::FQTOX), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 QFPRegs:f128:$rs2) - Complexity = 3
                // Dst: (FQTOX:f64 QFPRegs:f128:$rs2)
/*6402*/      0, /*End of Scope*/
/*6403*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 6405 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 124
  // #OPC_RecordNode                     = 31
  // #OPC_RecordChild                    = 171
  // #OPC_RecordMemRef                   = 16
  // #OPC_CaptureGlueInput               = 12
  // #OPC_MoveChild                      = 76
  // #OPC_MoveParent                     = 99
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 164
  // #OPC_CheckPredicate                 = 107
  // #OPC_CheckOpcode                    = 68
  // #OPC_SwitchOpcode                   = 8
  // #OPC_CheckType                      = 84
  // #OPC_SwitchType                     = 48
  // #OPC_CheckChildType                 = 35
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 10
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 90
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 7
  // #OPC_EmitStringInteger              = 2
  // #OPC_EmitRegister                   = 14
  // #OPC_EmitConvertToTarget            = 66
  // #OPC_EmitMergeInputChains           = 124
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 17
  // #OPC_EmitNodeXForm                  = 18
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 322

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.is64Bit());
  case 1: return (Subtarget.isV9()) && (Subtarget.hasHardQuad());
  case 2: return (!Subtarget.is64Bit());
  case 3: return (Subtarget.isV9());
  case 4: return (!Subtarget.isV9());
  case 5: return (Subtarget.hasHardQuad());
  }
}

bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { // Predicate_simm13
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 7: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 8: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 9: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 12: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 15: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 16: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 17: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 19: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 20: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 22: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 23: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 24: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 25: { // Predicate_simm11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 26: { // Predicate_SETHIimm
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 27: { // Predicate_uimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 28: { // Predicate_nimm33
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

  }
  case 29: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 30: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 31: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 32: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 33: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 34: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 35: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 36: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 37: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 38: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 39: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 40: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 41: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 44: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 45: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 48: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                         SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) override {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  }
}

