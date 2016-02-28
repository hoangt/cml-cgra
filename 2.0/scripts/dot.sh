#!/bin/bash
mkdir graphs
for i in $(ls *.dot);
do
  src=$i
  fname=${src%.*}

  dest="graphs/$fname.ps"
  dot -Tps $src -o $dest  
 echo $i
 #echo $fname
 #echo $dest
done

exit
