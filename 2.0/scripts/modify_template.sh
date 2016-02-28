#!/bin/bash

loopfile="$1"
templatefile="$2"

#It is assumed that this file will be called upon each CGRA run. So, it declares corresponding global variables everytime.

grep 'int ' $loopfile > intfile.txt
sed '/main/d' intfile.txt > infile.txt
sed -i '/globalvariabledeclarations/r infile.txt' $templatefile #inserts declaration at proper place
sed -i '/globalvariabledeclarations/d' $templatefile

rm intfile.txt infile.txt

#It is assumed that print statements upon each cgra run will be present in the provided loopfile (at end). 
#So, it detects print statements and will put it into the end of templatefile.
#If there are multiple loops, and some sort of non-loop code, top scripting file should take care of the flow.
#Scripting files prior to this should generate loopflile correspondingly everytime.

#Get Start Line No For Print Statements
grep -n "print-statements for CGRA" $loopfile | cut -d : -f 1 > print_line_no.txt
PRINTSTART=$(sed -n "1p" print_line_no.txt)

#Get Line No of Return Statement
grep -n "return" $loopfile | cut -d : -f 1 > print_line_no.txt
PRINTEND=$(sed -n "1p" print_line_no.txt)

#If No Return Present, Get Line No of Last Closing Brace
if [ ! $PRINTEND ]
then
	grep -n "}" $loopfile | cut -d : -f 1 > print_line_no.txt
	tail -n 1 print_line_no.txt > end_of_file.txt
	PRINTEND=$(sed -n "1p" end_of_file.txt)
	rm end_of_file.txt
fi

rm print_line_no.txt

#Get Print Statements Into A Text File And Then Insert Into CGRA Template File

(( PRINTEND = PRINTEND - 1))	#Do not include Line with RETURN OR THE CLOSING BRACE
sed -n ${PRINTSTART},${PRINTEND}p loop.c > printstatementfile.txt
sed -i '/printoutputsaftercgraexecution/r printstatementfile.txt' $templatefile
sed -i '/printoutputsaftercgraexecution/d' $templatefile

rm printstatementfile.txt

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
