CC = clang
CXX = clang++

ifeq ($(cc), gcc)
CC = gcc
CXX = g++
endif

ifeq ($(cc), clang)
CC = clang
CXX = clang++
endif

CCFLAGS = -Wall -std=c11
CXXFLAGS = -Wall -std=c++11

OBJECTS = main.o

EXEC = graphs

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC) 

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

.c.o:
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -f *.o

clean-all:
	rm -f *.o $(EXEC)
