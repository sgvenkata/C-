
OPT = -std=c++11 -c -g -Wall -Wextra

test1.exe: test1.o
	g++ -o test1.exe test1.o

test1.o:test1.cc header1.h
	g++ ${OPT} test1.cc

