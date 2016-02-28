#!/bin/bash
echo $1

cfile="$1"
name=${cfile%.c}
llfile="$name.ll"
toolchain="$HOME"


llvmbin="$toolchain/llvm/build/Release+Asserts/bin"

#version 0.1
#$llvmbin/clang -O0 -S -emit-llvm $cfile -o $llfile

#$llvmbin/clang -O2 $cfile -S -o - -emit-llvm -o $llfile

#Mahesh's version1.0: During array operations "i" was been initiated for each and every basicblock, which caused some skew in the output. using -mem2reg tranformation pass eliminates redundant loads and makes SSA for "i".

$llvmbin/clang -O3 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize $cfile -S -o - -emit-llvm -o $llfile
#$llvmbin/clang $cfile -S -o - -emit-llvm | opt -S -mem2reg | opt -S -gvn  -o $llfile

exit
