#!/bin/bash
echo $1

cfile="$1"
name=${cfile%.c}
llfile="$name.ll"
toolchain="../../"


llvmbin="$toolchain/llvm/build/Release+Asserts/bin"

#version 0.1
#$llvmbin/clang -O0 -S -emit-llvm $cfile -o $llfile

#$llvmbin/clang -O2 $cfile -S -o - -emit-llvm -o $llfile

#Mahesh's version1.0: During array operations "i" was been initiated for each and every basicblock, which caused some skew in the output. using -mem2reg tranformation pass eliminates redundant loads and makes SSA for "i".

#$llvmbin/clang -O3 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize $cfile -S -o - -emit-llvm -o $llfile
#$llvmbin/clang $cfile -S -o - -emit-llvm | opt -S -mem2reg | opt -S -gvn  -o $llfile


############################
#	Version 2.0        #
# same as pervious -O3     #
# except -loop-rotate is   #
#  deleted **no inline     #
#commnad to delete rotate  #
# del:- slp vec, loop vec, #
# unroll, rotate 	   #	
############################


$llvmbin/clang -O0 $cfile -S -o - -emit-llvm | opt -S -no-aa -tbaa -targetlibinfo -basicaa -notti -preverify -domtree -verify -simplifycfg -domtree -sroa -early-cse -lower-expect -targetlibinfo -no-aa -tbaa -basicaa -notti -globalopt -ipsccp -deadargelim -instcombine -simplifycfg -basiccg -prune-eh -inline-cost -inline -functionattrs -argpromotion -sroa -domtree -early-cse -lazy-value-info -jump-threading -correlated-propagation -simplifycfg -instcombine -tailcallelim -simplifycfg -reassociate -domtree -loops -loop-simplify -lcssa -licm -lcssa -loop-unswitch -instcombine -scalar-evolution -loop-simplify -lcssa -indvars -loop-idiom -loop-deletion -memdep -gvn -memdep -memcpyopt -sccp -instcombine -lazy-value-info -jump-threading -correlated-propagation -domtree -memdep -dse -loops -scalar-evolution -adce -simplifycfg -instcombine -domtree -loops -loop-simplify -lcssa -scalar-evolution -loop-simplify -lcssa -instcombine -simplifycfg -strip-dead-prototypes -globaldce -constmerge -preverify -domtree -verify -o $llfile

exit
