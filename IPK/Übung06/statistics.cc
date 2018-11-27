#include <vector>
#include <algorithm>
#include "statistics.hh"

double mean(const std::vector<double>& v){
    double i=0;
    for (auto m:v){
        i=i+m;
    }
    return i/(double)v.size();
}

double median(const std::vector<double>& v){
    std::vector<double> vsort=v;
    std::sort(vsort.begin(), vsort.end());
    double mdian;
    
    
    return mdian;
}
