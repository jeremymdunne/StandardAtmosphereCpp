#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "CSVparser.hpp"

class StandardAtmosphere{

public:
  StandardAtmosphere();
  getTemperature(double altitude);
  getPressure(double altitude);
  getDensity(double altitude);
  getGravity(double altitude);
  getViscosity(double altitude);

private:
  std::vector<double> _altitudes;
  std::vector<double> _temperatures;
  std::vector<double> _gravity;
  std::vector<double> _pressure;
  std::vector<double> _density;
  std::vector<double> _viscosity;
};
