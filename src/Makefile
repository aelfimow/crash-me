CXXFLAGS  = -O3 -m64
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

FILES = $(wildcard *.cpp)
FILES_OBJ = $(FILES:.cpp=.o)

all: div_arithm
	$(CXX) -c main.cpp -o main.o $(CXXFLAGS)
	$(CXX) *.o -o crash-me.exe $(CXXFLAGS)

div_arithm:
	$(AS) div_arithm.S ${ASFLAGS64} -o div_arithm.o

asm:
	$(AS) func.S -o func.o --64
