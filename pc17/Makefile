FLAGS = -Wall -Wextra -pedantic

challenge-17: pc17.o SLNode.o
	g++ -o challenge-17 $(flags) pc17.o SLNode.o

pc17.o: pc17.cpp
	g++ -c $(flags) pc17.cpp
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(flags) SLNode.cpp
	
clean:
	rm -f *.o

cleanall: clean
	rm -f test