SRC_DIR := src
OBJ_DIR := obj
LIB_DIR	:= lib

SUBDIRS 	:= $(LIB_DIR)/StandardAtmosphere

EXE := standardAtmo
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX 			:= g++
CXXFLAGS 	:= -Wall

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS) $(EXE)

# main program
$(EXE): $(OBJ_DIR)\main.o
	$(CXX) $^ -L.\lib\StandardAtmosphere -lStandardAtmosphere -o $@

$(OBJ_DIR)\main.o: $(SRC_DIR)\main.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	del -f *.o
	del -f $(OBJ_DIR)\*.o
	del -f $(EXE).exe
