# Makefile for programming project 3
#
# CSCI 21, Fall 2015
#
# Programmer: Jesse Krepelka
#

FLAGS = -Wall -Wextra -pedantic

test: test.o dlnode.o dlist.o
	g++ -o  test $(flags) test.o dlnode.o dlist.o

test.o: test.cpp
	g++ -c $(flags) test.cpp

dlnode.o: dlnode.h dlnode.cpp
	g++ -c $(flags) dlnode.cpp

dlist.o: dlist.h dlist.cpp
	g++ -c $(flags) dlist.cpp

clean:
	rm -f *.o

cleanall: clean
	rm -f test