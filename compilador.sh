#/!bin/sh
gcc -c bubbleSort.c -o bubbleSort.o
gcc -c main.c -o main.o
gcc bubbleSort.o main.o -o executavel
exit
