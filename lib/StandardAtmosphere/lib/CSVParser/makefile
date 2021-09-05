SRC_DIR			:= src
INCLUDE_DIR := include

CXX				:= g++
CXXFLAGS	:= -Wall

.PHONY: all clean

LIB := CSVParser.o
SRC	:= $(wildcard $(SRC_DIR)/*.cpp)

all: $(LIB)

$(LIB): $(SRC)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -o $@ -c $<

clean:
	del *.o
