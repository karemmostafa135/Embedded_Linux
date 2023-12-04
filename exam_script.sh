#!/bin/bash
if [ -d "exam_directory" ] 
then
if [ -s "exam_directory" ]
then
cd exam_directory
du -sh *
echo "the directory was exists and not empty already so i printed the size of its files"
else
touch file1.txt 
touch file2.txt 
touch file3.txt  
echo "the directory was exists and empty so i made three files "
fi 
else 
mkdir exam_directory
cd exam_directory
touch file1.txt 
touch file2.txt 
touch file3.txt
echo "the directory was not exist so i created it and made the three files"
fi

