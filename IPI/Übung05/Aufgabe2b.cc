#include <iostream>
#include <cmath>

int main()
{
  float n;
  std::cout<<"Enter a value for n:"<<std::flush;
  std::cin>>n;
  float a=pow(10,n);
  float b=-a;
  float c=1.0/a;
  std::cout.precision(16);
  std::cout<<"a="<<a<<" b="<<b<<" c="<<c<<std::endl;
  std::cout<<"(a+b)+c="<<(a+b)+c<<std::endl;//(a+b)=0 everytime -> outputs unrounded c
  std::cout<<"a+(b+c)="<<a+(b+c)<<std::endl;//(b+c)=b, because of too litle digit precision of a float
  //-> (b+c)=b -> a+b=0
}
