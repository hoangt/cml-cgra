#!/bin/bash
echo $1
cfile="$1"
name=${cfile%.ll}
llfile="$name.ll"
dfgfile="$name.dfg"

toolchain=$HOME
llvmbin="$toolchain/llvm/build/Release+Asserts/bin"
llvmlib="$toolchain/llvm/build/Release+Asserts/lib"

#$llvmbin/opt -load $llvmlib/LLVMMahdiLoop.so -MahdiLoop $llfile -o $dfgfile
$llvmbin/opt -load $llvmlib/LLVMMahdiLoop.so -MahdiLoop $llfile -o $dfgfile


exit
