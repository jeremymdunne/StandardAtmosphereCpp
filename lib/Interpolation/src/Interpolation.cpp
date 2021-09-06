#include <Interpolation.hpp> 

double linearInterpolate(double target, double* x_data, double* y_data, unsigned int size){

}

double lagrangeInterpolate(double target, double* x_data, double* y_data, unsigned int size){
  double value = 0;
  for(unsigned int i = 0; i < size; i ++){
    double term = y_data[i];
    for(unsigned int j = 0; j < size; j ++){
      if(j != i){
        term = term*(target - x_data[j]) / double(x_data[i] - x_data[j]);
      }
    }
    value += term;
  }
  return value;
}
