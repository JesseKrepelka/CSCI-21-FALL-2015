# Makefile for programming challenges
#
# CSCI 21, Fall 2015
#
# Programmer: Jesse Krepelka
#

FLAGS: -Wall -Wextra -pedantic

# Target for programming challenge 1
# Date completed: 
challenge-1: pc1.cpp
	g++ -o challenge-1 pc1.cpp

# Target for programming challenge 1
# Date completed: 8/27/15
challenge-2: pc2.cpp
	g++ -o challenge-2 pc2.cpp

# Target for programming challenge 3
# Date completed: 9-1-2015
challenge-3: pc3.cpp
	g++ -o challenge-3 pc3.cpp
	
# Target for programming challenge 4
# Date completed: 9-1-2015
challenge-4: pc4.cpp
	g++ -o challenge-4 pc4.cpp
	
# Target for programming challenge 5
# Date completed: 9-8-2015
challenge-5: pc5.cpp
	g++ -o challenge-5 pc5.cpp
	
# Target for programming challenge 6
# Date completed: 9-10-15
challenge-6: pc6.cpp
	g++ -o challenge-6 pc6.cpp
	
# Target for programming challenge 7
# Date completed: 9-15-15
challenge-7: pc7.cpp
	g++ -o challenge-7 pc7.cpp
	
# Target for programming challenge 8
# Date completed: 9-17-15
challenge-8: pc8.cpp
	g++ -o challenge-8 pc8.cpp
	
# Target for programming challenge 9
# Date completed: 9-22-15
challenge-9: pc9.cpp
	g++ -o $(FLAGS) challenge-9 pc9.cpp

# Target for programming challenge 10
# Date completed: 9-24-15
challenge-10: pc10.cpp
	g++ -o $(FLAGS) challenge-10 pc10.cpp
	
# Target for programming challenge 11
# Date completed: NOT
challenge-11: pc11.cpp
	g++ -o $(FLAGS) challenge-11 pc11.cpp
	
# Target for programming challenge 12
# Date completed: 10-1-15
challenge-12: pc12.cpp
	g++ -o $(FLAGS) challenge-12 pc12.cpp

# Target for programming challenge 13
# Date completed: 10-6-15
challenge-13: pc13.cpp
	g++ -o $(FLAGS) challenge-13 pc13.cpp

# Target for programming challenge 14
# Date completed: 10-13-15
challenge-14: pc14.cpp
	g++ -o $(FLAGS) challenge-14 pc14.cpp

# Target for programming challenge 16
# Date completed: 10-20-15
challenge-16: pc16.cpp
	g++ -o $(FLAGS) challenge-16 pc16.cpp

# Target for programming challenge 23
# Date completed: 11-12-15
challenge-23: pc23.cpp
	g++ -o $(FLAGS) challenge-23 pc23.cpp

# Target for programming project 1
# Date completed: 9-18-15
project-1: pp1.cpp
	g++ -o project-1 pp1.cpp