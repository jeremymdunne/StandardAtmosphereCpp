#include <StandardAtmosphere.hpp>

StandardAtmosphere::StandardAtmosphere(){
  // open and read in the lookup data
  std::ifstream lookup_data("./resources/StandardAtmosphereLookup.csv");
  // read the csv
  std::vector<std::string> header;
  std::vector<std::vector<std::string>> data;
  readCSV(&lookup_data, &header, &data);
  // read the data into the data vectors
  for(unsigned int i = 0; i < data.size(); i ++){
    _altitudes.push_back(stod(data[0][0])); 
  }
}
