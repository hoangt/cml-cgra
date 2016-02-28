#!/bin/bash
echo $1

cfile="$1"
name=${cfile%.c}
llfile="$name.ll"
toolchain="$HOME"


llvmbin="$toolchain/llvm/build/Release+Asserts/bin"

$llvmbin/clang -O3 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize $cfile -S -o - -emit-llvm -o $llfile

exit
