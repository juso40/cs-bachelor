#include <vector>
#include <algorithm>
#include <cmath>
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
    if ((vsort.size()+1)%2!=0){
      mdian=vsort[(vsort.size()+1)/2];
    }
    if ((vsort.size()+1)%2==0){
      mdian=vsort[(vsort.size()/2+(vsort.size()/2+1))/2];
    }
    return mdian;
}

double moment(const std::vector<double>& v, int k){
  double mment=0;
  for (int i=0; i<v.size(); i++){
    mment=mment+pow(v[i],k);
  }

  return mment/v.size();
}

double standard_deviation(const std::vector<double>& v){
  double s=0;
  double n=1;
  for (int i=0; i<v.size(); i++){
    s=((s+sqrt(pow((v[i]-v[i+1]),2))));
    n++;
  }
  return (s/n);
}
