#ifndef _INTERPOLATION_HPP_
#define _INTERPOLATION_HPP_

double linearInterpolate(double target, double* x_data, double* y_data, unsigned int size); 

double lagrangeInterpolate(double target, double* x_data, double* y_data, unsigned int size);


#endif
