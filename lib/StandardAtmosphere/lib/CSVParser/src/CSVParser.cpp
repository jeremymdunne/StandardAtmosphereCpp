#include "CSVParser.hpp"

void writeCSV(std::ostream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data){
  if(stream->good()){
    // write the header
    std::string header_str = joinDeliminator(header, ',');
    *stream << header_str << '\n';
    writeCSV(stream, data);
  }
}

void writeCSV(std::ostream *stream, std::vector<std::vector<std::string>>* data){
  if(stream->good()){
    // write the header
    std::string data_str;
    for(unsigned int i = 0; i < data->size(); i ++){
      data_str = joinDeliminator(&data->at(i), ',');
      *stream << data_str << '\n';
    }
  }
}

std::string joinDeliminator(std::vector<std::string>* elements, char delim){
  std::string joined = "";
  if(elements->size() == 0) return joined;
  joined += elements->at(0);
  for(unsigned int i = 1; i < elements->size(); i ++){
    joined += delim;
    joined += elements->at(i);
  }
  return joined;
}

void readCSV(std::ifstream* stream, std::vector<std::vector<std::string>>* data){
  // check that the ifstream is open
  if(stream->is_open()){
    std::string data_str;
    std::vector<std::string> data_vec;
    while(stream->good()){
      std::getline(*stream, data_str);
      splitDeliminator(&data_str, &data_vec);
      data->push_back(data_vec);
      data_vec.clear();
    }
  }
}

void readCSV(std::ifstream* stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data){
  // check that the ifstream is open
  if(stream->is_open()){
    // read the header
    // std::string line = stream->getline()
    // parse the header
    std::string header_str;
    std::getline(*stream, header_str);
    splitDeliminator(&header_str, header);
    readCSV(stream, data);
  }
}

void splitDeliminator(std::string* line, std::vector<std::string>* elements, char delim){
  // split a line using the comma deliminator
  // TODO not the best method, inefficient at the end of the sequence

  unsigned int loc = 0;
  char c;
  std::string running_str = "";
  // elements->push_back(std::string());
  for(;loc < line->length(); loc ++){
    c = line->at(loc);
    if(c != delim){
      running_str += c;
    }
    else{
      // push back a new element
      elements->push_back(running_str);
      running_str = "";
    }
  }
  elements->push_back(running_str);
}

std::string trimString(std::string line){
  // remvoe any whitespaces
  // TODO: implement
  return line;
}
