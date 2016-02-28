#!/usr/bin/perl
#use strict;
#use warnings;

mkdir ../temporary_folder_for_cleaning_files
cp run.sh ../temporary_folder_for_cleaning_files/
#cp runthis.sh ../temporary_folder_for_cleaning_files/
cp *.c ../temporary_folder_for_cleaning_files/
rm -rf ./*
cp ../temporary_folder_for_cleaning_files/run.sh ./
#cp ../temporary_folder_for_cleaning_files/runthis.sh ./
cp ../temporary_folder_for_cleaning_files/*.c ./
cp ../cgra_simple_loop.c ./
rm -rf ../temporary_folder_for_cleaning_files
rm cgra_run_loop.c
