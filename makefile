VET:	driver.o functions.o
	CC -std=c++11 -o VET driver.o functions.o

driver.o:	driver.cpp definitions.h
		CC -std=c++11 -c driver.cpp

functions.o:	functions.cpp
		CC -std=c++11 -c functions.cpp
