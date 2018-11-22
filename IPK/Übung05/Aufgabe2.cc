#include <iostream>
#include <string>
#include <cmath>

int parse_int(std::string number){
  char temp;
  int n;
  int numberascii=0;
  for (int i=0; i<number.size(); i++){
    temp=number[i]; //temp is my temporary char, it contains the current char of the string
    temp=temp-'0';  //calculates temp from ascii to normal value
    numberascii=numberascii+temp*pow(10,number.size()-i-1); //gets the size of my string
    //then adds the values of each char to my integer, multiplied by 10^n that it is in the right placement
  }
  std::cout<<"Number original: "<<number<<std::endl;//just to test the correct output of the original and new string/int
  std::cout<<"Number after ascii: "<<numberascii<<std::endl;
  return 0;
}

int main(){
  std::cout<<"Enter a Number"<<std::endl;
  std::string s = "47218";//was a given value, no real reson to have it here lmfao
  std::getline(std::cin,s);// to ignore/ include whitespaces
  parse_int(s);
}
