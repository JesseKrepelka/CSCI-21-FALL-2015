# Makefile for programming challenge 24
#
# CSCI 21, Fall 2015
#
# Programmer: Jesse Krepelka
#

FLAGS = -Wall -Wextra -pedantic

test: test.o BSTNode.o
	g++ -o test $(FLAGS) test.o BSTNode.o
	
test.o: test.cpp
	g++ -c $(FLAGS) test.cpp
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp

clean:
	rm -f *.o

cleanall: clean
	rm -f test