#!/bin/bash
#Currently Loop File is Same As Input C file. Later, It should detect loops and pass ahead for DFG.
#Code below processes the loop file and creates loop file to run on cgra.

loopfile="$1" 

grep -n "for" $loopfile | cut -d : -f 1 > for_line_no.txt
END=$(wc -l < for_line_no.txt)

i=1;
while [[ $i -le $END ]]
do
    grep -n "for" $loopfile | cut -d "<" -f 2 | cut -d ";" -f 1 > loop_iterations.txt
    ((i = i + 1))
done


#cp $txtfile cgra_temp_loop1.c

grep 'int ' $loopfile > intfile.txt
sed '/main/d' intfile.txt > infile.txt
sed -e 's/\(=\).*\(;\)/\1\2/' infile.txt > in2.txt
sed 's/=//' in2.txt > in3.txt
grep -vFf infile.txt loop.c > cgra_run_loop.c

awk '/for/{while(getline line<"in3.txt"){print line}} //' cgra_run_loop.c  > tmp
mv tmp cgra_run_loop.c 

rm intfile.txt infile.txt in2.txt in3.txt for_line_no.txt

############################################
## Author : Shail Dave   	          ##
##          Arizona State University	  ##
##					  ##
## Notes: gem5out directory contains the  ##
##	  gem5 output files.	  	  ##
##	  m5out directory contains  	  ##
##	  the stats files	          ##
##					  ##
############################################
