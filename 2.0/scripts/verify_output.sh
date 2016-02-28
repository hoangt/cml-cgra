#!/bin/bash

obj_result=$1
c_output=$2

#Grab Output Print Statements From CGRA Execution
grep -n "Printing Results For CGRA Execution" $obj_result | cut -d : -f 1 > verify_result_line_no.txt
start=$(sed -n "1p" verify_result_line_no.txt)
((start = start + 1))	#Get Result From Next Line

grep -n "Main thread done" $obj_result | cut -d : -f 1 > verify_result_line_no.txt
end=$(sed -n "1p" verify_result_line_no.txt)
((end = end - 1))	#Result Ends Before One Line

sed -n ${start},${end}p $obj_result > cgra_output.txt

#Add Blank Lines At End Of Both Files
printf "\n" >> cgra_output.txt
printf "\n" >>  c_output.txt

#Delete Blank Lines At The Beginning Of CGRA Output File
first_line=$(sed -n 1p cgra_output.txt | grep [[:blank:]])
while [[ -z $first_line ]]
do
	sed -i -e 1d cgra_output.txt
	first_line=$(sed -n 1p cgra_output.txt | grep [[:blank:]])
done

#Delete Blank Lines At The End Of CGRA Output File
last_line_no=$(wc -l < cgra_output.txt)
last_line=$(sed -n "${last_line_no}p" cgra_output.txt | grep [[:blank:]])
while [[ -z $last_line ]]
do
	sed -i -e "${last_line_no}d" cgra_output.txt
	((last_line_no = last_line_no - 1))
	last_line=$(sed -n "${last_line_no}p" cgra_output.txt | grep [[:blank:]])
done

#Delete Blank Lines At The Beginning Of C Output File
first_line=$(sed -n 1p $c_output | grep [[:blank:]])
while [[ -z $first_line ]]
do
	sed -i -e 1d $c_output
	first_line=$(sed -n 1p $c_output | grep [[:blank:]])
done

#Delete Blank Lines At The End Of C Output File
last_line_no=$(wc -l < $c_output)

last_line=$(sed -n "${last_line_no}p" $c_output | grep [[:blank:]])
while [[ -z $last_line ]]
do
	sed -i -e "${last_line_no}d" $c_output
	((last_line_no = last_line_no - 1))
	echo "${last_line_no}" >> shail.txt
	last_line=$(sed -n "${last_line_no}p" $c_output | grep [[:blank:]])
	rm shail.txt
done

#Append Blank Line At End Of Both Files
#printf " " >> cgra_output.txt
#printf " " >> c_output.txt
#line_no=$(wc -l < $c_output)
#((line_no = line_no + 2))
#echo "${line_no}" > shail.txt
#sed -i "${line_no}i\blank" $c_output
#echo " " >> cgra_output.txt

echo ""
echo "$(tput setaf 1)$(tput bold)"
diff -q --from-file $c_output cgra_output.txt
comp_value=$?
echo "$(tput sgr0)"

if [ $comp_value -eq 1 ]
then
    echo "$(tput setaf 1)$(tput bold)Error! Output From CGRA Execution Is Different Than Expected!$(tput sgr0)"
else
    echo "$(tput setaf 2)$(tput bold)Success! CGRA Execution Output Is Same As Expected.$(tput sgr0)"
fi

echo ""
rm verify_result_line_no.txt 

#temp=$(wc -l < final_node.txt)
#echo "${temp}" > shail1234.txt
