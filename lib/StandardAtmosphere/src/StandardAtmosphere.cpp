#include "StandardAtmosphere.hpp"

StandardAtmosphere::StandardAtmosphere(){
  // open and read in the lookup data
  std::ifstream lookup_data("./lib/StandardAtmosphere/resources/StandardAtmosphereLookup.csv");
  // read the csv
  // if(lookup_data.is_open()) std::cout << " File Opened!" << std::endl;
  // else std::cout << "File Failed to Open! " << std::endl;
  std::vector<std::string> header;
  std::vector<std::vector<std::string>> data;
  readCSV(&lookup_data, &header, &data);
  // read the data into the data vectors
  for(unsigned int i = 0; i < data.size(); i ++){
    _altitudes.push_back(stod(data[i][0]));
    _temperatures.push_back(stod(data[i][1]));
    _gravity.push_back(stod(data[i][2]));
    _pressure.push_back(stod(data[i][3]));
    _density.push_back(stod(data[i][4]));
    _viscosity.push_back(stod(data[i][5]));
  }
}
