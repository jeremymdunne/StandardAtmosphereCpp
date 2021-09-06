SRC_DIR		:= src
LIB_DIR 	:= lib

OUT 		:= libStandardAtmosphere.a

CXX			 	:= g++
CXXFLAGS 	:= -std=c++11 -Wall

.PHONY: all clean

all: $(OUT)

# CSV Parser
CSV_PARSER_DIR				:= lib/CSVParser
CSV_PARSER_SRC 				:= $(CSV_PARSER_DIR)/src/CSVParser.cpp
CSV_PARSER_INC_DIR		:= $(CSV_PARSER_DIR)/include
CSV_PARSER						:= $(CSV_PARSER_DIR)/CSVParser.o

$(CSV_PARSER): $(CSV_PARSER_SRC)
	$(CXX) $(CXXFLAGS) -I$(CSV_PARSER_INC_DIR) -c $< -o $@

# Standard Atmosphere
STANDARD_ATMO_DIR 		:= ./
STANDARD_ATMO_SRC 		:= $(STANDARD_ATMO_DIR)src/StandardAtmosphere.cpp
STANDARD_ATMO_INC_DIR := $(STANDARD_ATMO_DIR)include
STANDARD_ATMO					:= $(STANDARD_ATMO_DIR)StandardAtmosphere.o

$(OUT): $(STANDARD_ATMO)
	ar rvs $@ $(STANDARD_ATMO) $(CSV_PARSER)

$(STANDARD_ATMO): $(STANDARD_ATMO_SRC) $(CSV_PARSER)
	$(CXX) $(CXXFLAGS) -I$(STANDARD_ATMO_INC_DIR) -c $< -o $@

clean:
	del -f *.o *.a 
