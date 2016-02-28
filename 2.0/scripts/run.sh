#!/bin/bash


#Processing Files
cfile="$1"
templatefile="cgra_simple_loop.c"
name=${cfile%.c}
obj=obj_$name
exec=exec_$name


#Setting Paths
LEVEL=../..
toolchain=$LEVEL/toolchain
script=$toolchain/othertools/scripts
gem5=$HOME/gem5
opcodegen=$LEVEL/cgratoolchain/opcode/milestone6


#Front End Scripting For Loop Detection And Integrating With CGRA TemplateFile
$script/loop_detection.sh $cfile
$script/modify_template.sh $cfile $templatefile


#Compiler Pass - Clang + Opt
$script/clang.sh ./cgra_run_loop.c 
llfile="$(find ./ -name "*.ll")"
$script/opt.sh $llfile 
llvmedge="$(find ./ -name "*.txt" | grep -i loop | grep -i edge)"
llvmnode="$(find ./ -name "*.txt" | grep -i loop | grep -i node)"
echo $llvmedge
echo $llvmnode


#REGIMap - Scheduling and Mapping
$script/regi.sh $llvmnode $llvmedge -X 4 -Y 4 -R 8 
finalnode="$(find ./ -name "*.txt" | grep -i final | grep -i node)"
Regiedge="$(find ./ -name "*.txt" | grep -i REGIDUMP | grep -i edge)"


#ARM Cross Compiler - Compiling Multithreaded File To Be Executed On CGRA
arm-linux-gnueabi-gcc -static -pthread $templatefile -o $obj
arm-linux-gnueabi-gcc -S $templatefile
arm-linux-gnueabi-readelf -s $obj > elf


#Instruction Generator
$opcodegen $finalnode $Regiedge $llvmnode $llvmedge $obj prolog.sch kernel.sch epilog.sch 4 4 > cgra_instructions.txt


#CGRA Gem5 Execution
mkdir cgra_out
CGRA_START=$(date +%s.%N)
$gem5/build/ARM/gem5.opt $gem5/configs/example/se_hetro.py -n 2 --cpu-type timing -c $obj > ./cgra_out/$obj.txt
CGRA_END=$(date +%s.%N)
CGRA_TIME=$(echo "$CGRA_END - $CGRA_START" | bc)
$gem5/build/ARM/gem5.opt --debug-flags=Exec $gem5/configs/example/se_hetro.py -n 2 --cpu-type timing -c $obj > ./cgra_out/$exec.txt
$gem5/build/ARM/gem5.opt $gem5/configs/example/se_hetro.py -n 2 --cpu-type timing -c $obj
echo "*****************************CGRA Execution Complete***********************" 


#Serial Execution on Gem5
#$gem5/build/ARM/gem5.opt -d ./sprun $gem5/configs/example/se.py --cpu-type timing -c sprun/obj_sprun
mkdir mp_standalone_out
arm-linux-gnueabi-gcc -static $cfile -o obj_mp_standalone_run
MP_START=$(date +%s.%N)
$gem5/build/ARM/gem5.opt -d ./mp_standalone_out $gem5/configs/example/se.py --cpu-type timing -c ./obj_mp_standalone_run > ./mp_standalone_out/obj_mp_standalone_run.txt
MP_END=$(date +%s.%N)
MP_STANDALONE_TIME=$(echo "$MP_END - $MP_START" | bc)

#C Execution
echo "*****************************Running C - Object File***********************" 
gcc -static $cfile -o loop_run_c_output.out
./loop_run_c_output.out
./loop_run_c_output.out > c_output.txt


#Post-Processing
$script/verify_output.sh ./cgra_out/$obj.txt c_output.txt
$script/manage_output_files.sh
$script/display_stats.sh $CGRA_TIME $MP_STANDALONE_TIME


############################################
## Author : Shail Dave              	  ##
##          Arizona State University	  ##
##				          ##
## Notes: gem5out directory contains the  ##
##	  gem5 output files.	  	  ##
##	  m5out directory contains  	  ##
##	  the stats files(currectly TODO) ##
##					  ##
############################################
