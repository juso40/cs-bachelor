#include <vector>
#include <algorithm>
#include <cmath>
#include "statistics.hh"

double mean(const std::vector<double>& v){
    double i=0;
    if (v.size()==0)
      return 0;
    for (auto m:v){
        i=i+m;
    }
    return i/(double)v.size();
}

double median(const std::vector<double>& v){
    std::vector<double> vsorted=v;
    std::sort(vsorted.begin(), vsorted.end());
    double mdian;
    if (v.size()==0)
     return 0;
    if ((vsorted.size())%2!=0){
      mdian=vsorted[((vsorted.size()+1)/2)-1];
    }
    if ((vsorted.size())%2==0){
      mdian=(vsorted[vsorted.size()/2.-1]+vsorted[(vsorted.size()/2.)])/2.;
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
