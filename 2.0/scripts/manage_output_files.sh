#!/bin/bash

#Manage Dot Files
mkdir dot
mv *.dot ./dot/
cp ./dot/loop*.dot ./

#Manage Bin Files
mkdir bin
mv *.bin ./bin/

#Delete Files Generated For Loop Detection Scripting
rm loop_iterations.txt

#Delete Files Generated For Supporting REGIMap Implementation
rm II.txt mappingCompleted.txt states.txt
rm *latency*

#Delete Files Generated For Supporting Gem5 Implementation
#rm prolog_cnt.txt epilog_cnt.txt
rm livevar_st_ins_count.txt

#Delete Verification Files
rm c_output.txt cgra_output.txt

#Manage LLVM Pass Files
mkdir CompilerFiles
mv *.ll *.s ./CompilerFiles

#Manage DFG Files
mkdir DFGFiles
mv *node.txt *edge.txt *.dfg loop*.dot ./DFGFiles

#Manage Schedule Files
mkdir ScheduleFiles
mv *.sch ./ScheduleFiles

#Manage Instruction Generation Files
mkdir InstructionGeneratorFiles
mv cgra_instructions.txt *elf* ./InstructionGeneratorFiles

#Manage Obj Files
mkdir ObjFiles
mv *.out *obj* ./ObjFiles


