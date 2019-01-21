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
//Bei der Rechnung (a+b)+c wird zuerst a+b berechnet, was gleich null ist.
//Daraus folgt, dass das Ergebnis c ist.

//Wenn a+(b+c) berechnet wird wird zuerst b+c berechnet.
//Da der float Datentyp eine relativ kleine Gleitkommagenauigkeit hat
//ist die das Ergebnis der Rechnung (b+c) das gleiche wie nur b, wegen rundungsfehler.
//Daraus folgt a+(b+c)=a+b=0 ab n=4.
