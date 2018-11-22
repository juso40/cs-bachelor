#include <iostream>
#include <string>
#include <cmath>

int parse_int(std::string number){
  char temp;
  int n;
  int numberascii=0;
  for (int i=0; i<number.size(); i++){
    temp=number[i];
    temp=temp-'0';
    numberascii=numberascii+temp*pow(10,number.size()-i-1);
  }
  std::cout<<"Number original: "<<number<<std::endl;
  std::cout<<"Number after ascii: "<<numberascii<<std::endl;
  return 0;
}

int main(){
  std::cout<<"Enter a Number"<<std::endl;
  std::string s = "47218";
  std::getline(std::cin,s);
  parse_int(s);
}
