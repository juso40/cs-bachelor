#include <iostream>
#include <cmath>

int main(){
  int n;
  std::cout<<"Enter a value for n:"<<std::flush;
  std::cin>>n;
  float a=pow(10,n);
  float b=pow(-10,n);//test
  float c=pow(10,-n);
  std::cout.precision(16);
  std::cout<<"(a+b)+c="<<(a+b)+c<<std::endl;
  std::cout<<"a+(b+c)="<<a+(b+c)<<std::endl;
  //not associative with n=3, n=5, n=7, n=9.....
}
