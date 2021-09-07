SRC_DIR 		:= src
INCLUDE_DIR := include

CXX 			:= g++
CXXFLAGS 	:= -Wall -std=c++11

OUT 			:= Interpolation.o

.PHONY: all clean

all: $(OUT)



$(OUT): $(SRC_DIR)/Interpolation.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	del -f *.o *.a
