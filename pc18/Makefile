FLAGS = -Wall -Wextra -pedantic

challenge-18: pc18.o slnode.o slist.o
	g++ -o challenge-18 $(flags) pc18.o slnode.o slist.o

pc18.o: pc18.cpp
	g++ -c $(flags) pc18.cpp
	
slnode.o: slnode.h slnode.cpp
	g++ -c $(flags) slnode.cpp

slist.o: slist.h slist.cpp
	g++ -c $(flags) slist.cpp

clean:
	rm -f *.o

cleanall: clean
	rm -f test