#include <iostream>

int main() {
  std::cout << "Enter the number of terms: ";
  int n, f1, f2=-1, f3=1 ;  //f2=-1, sodass ich nachher nicht seperat die 0 angeben muss
  std::cin >> n ;

  std::cout<< "Fibonacci Series:" <<std::endl;

  while (n>0){
  f1=f2+f3;  //Mathe
  f2=f3;    //Mathe
  f3=f1;    //Mathe

  std::cout<<" \n"<<f1; //zeielnumbruch nach jeder neuen zahl

    n--; //anzahl der durchläufe
  }

  return 0;
}
