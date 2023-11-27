#!/bin/bash
mkdir myDirectory
cd myDirectory
mkdir secondDirectory
cd secondDirectory
touch myNotePaper
cp myNotePaper ../
cd myDirectory
ls
mv myNotePaper myOldNotePaper
ls
