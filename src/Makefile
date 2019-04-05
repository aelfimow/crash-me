CXXFLAGS  = -O3 -m64
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

FILES = $(wildcard *.cpp)
FILES_OBJ = $(FILES:.cpp=.o)

all:
	$(CXX) -c main.cpp -o main.o $(CXXFLAGS)
	$(CXX) *.o -o crash-me.exe $(CXXFLAGS)

asm:
	$(AS) func.S -o func.o --64
