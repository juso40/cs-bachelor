#ifndef STATISTICS_HH
#define STATISTICS_HH
#include <algorithm>
#include <vector>
#include <cmath>

//outputs the average value of your Vector
double mean(const std::vector<double>& v);

//outputs the median of the vector
double median(const std::vector<double>& v);

//outputs the moment
double moment(const std::vector<double>& v, int k);

//outputs the standard deviation
double standard_deviation(const std::vector<double>& v);
#endif
