# Makefile for programming challenge 19
#
# CSCI 21, Fall 2015
#
# Programmer: Jesse Krepelka
#

FLAGS = -Wall -Wextra -pedantic

challenge-19: pc19.o slnode.o slist.o
	g++ -o challenge-19 $(flags) pc19.o slnode.o slist.o

pc19.o: pc19.cpp
	g++ -c $(flags) pc19.cpp
	
slnode.o: slnode.h slnode.cpp
	g++ -c $(flags) slnode.cpp

slist.o: slist.h slist.cpp
	g++ -c $(flags) slist.cpp

clean:
	rm -f *.o

cleanall: clean
	rm -f challenge-19