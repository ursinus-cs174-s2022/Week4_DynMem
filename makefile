CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: cmdargs array2d

array2d: array2d.cpp
	$(CC) $(CFLAGS) -o array2d array2d.cpp

cmdargs: cmdargs.cpp
	$(CC) $(CFLAGS) -o cmdargs cmdargs.cpp

clean:
	rm cmdargs array2d