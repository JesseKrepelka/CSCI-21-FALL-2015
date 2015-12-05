# Makefile for programming Project Four
#
# CSCI 21, Fall 2015
#
# Programmer: Jesse Krepelka
#

FLAGS = -Wall -Wextra -pedantic

test: test.o
	g++ -o test $(FLAGS) test.o bstnode.o bstree.o word.o Utility.o
	
test.o: test.cpp bstnode.o bstree.o word.o
	g++ -c $(FLAGS) test.cpp
	
word.o: word.cpp word.h Utility.o
	g++ -c $(FLAGS) word.cpp

bstnode.o: bstnode.cpp bstnode.h
	g++ -c $(FLAGS) bstnode.cpp

bstree.o: bstnode.o bstree.cpp bstree.h
	g++ -c $(FLAGS) bstree.cpp

Utility.o: Utility.cpp Utility.h
	g++ -c $(FLAGS) Utility.cpp

clean:
	rm -f *.o

cleanall: clean
	rm -f test