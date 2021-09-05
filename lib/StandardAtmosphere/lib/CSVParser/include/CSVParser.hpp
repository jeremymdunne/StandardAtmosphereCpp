#ifndef _CSV_PARSER_HPP_
#define _CSV_PARSER_HPP_

// includes
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

/**
 * @breif Write data into a csv format with a header.
 * @param stream std::ofstream* stream to write the csv into.
 * @param header std::vector<std::string>* header data.
 * @param data std::vector<std::vector<std::string>>* data to write.
 */
void writeCSV(std::ostream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data);

/**
 * @breif Write data into a csv format without a header.
 * @param stream std::ofstream* stream to write the csv into.
 * @param header std::vector<std::string>* header data.
 * @param data std::vector<std::vector<std::string>>* data to write.
 */
void writeCSV(std::ostream *stream, std::vector<std::vector<std::string>>* data);


/**
 * @breif Join a vector of strings with a deliminator.
 * @param elements std::vector<std::string>* elements to join.
 * @param delim char deliminator to use.
 * @return std::string containing the joined elements.
 */
std::string joinDeliminator(std::vector<std::string>* elements, char delim = ',');

/**
 * @breif read a csv file with a header.
 * @details reads a ifstream containing a csv file into a header and data vectors.
 * @param stream std::ifstream* input stream with the csv data.
 * @param header std::vector<std::string>* vector to store the header (1st line) into.
 * @param data std::vector<std::vector<std::string>>* vector to store the data into (everything after line 1).
 */
void readCSV(std::ifstream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data);


/**
 * @breif read a csv file without a header.
 * @details reads a ifstream containing a csv file into a data vectors.
 * @param stream std::ifstream* input stream with the csv data.
 * @param data std::vector<std::vector<std::string>>* vector to store the data into.
 */
void readCSV(std::ifstream* stream, std::vector<std::vector<std::string>>* data);

/**
 * @breif split a line by the comma deliminator.
 * @details splits a std::line into a vector containing the deliminated elements.
 * @param line std::string* line to split.
 * @param elements std::vector<std::string>* vector to store deliminated elements into.
 * @param delim char deliminator to split by.
 */
void splitDeliminator(std::string* line, std::vector<std::string>* elements, char delim = ',');

/**
 * @breif trim a CSV string .
 * @details todo .
 */
std::string trimString(std::string line);

// void trimCSVWhitespace(std::vector<std::string>* data);

// void trimCSVWhitespace(std::vector<std::vector<std::string>>*data);






#endif
