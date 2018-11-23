#include <iostream>
#include <string>
#include <cmath>

int case_parse_int(std::string number){
  char temp;
  int numberascii=0;
  for (int i=0; i<number.size(); i++){
    temp=number[i];
    switch (temp){
      case ' ':
      temp=temp-' ';
      numberascii=numberascii+temp*pow(10,number.size()-i-1);
      break;
      case '+':
      temp=temp-'0';
      numberascii=numberascii+temp*pow(10,number.size()-i);
      break;
      case '-':
      temp=temp-'-';
      numberascii=numberascii+temp*pow(10,number.size()-i-1);
      numberascii=numberascii*-1;
      break;
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      temp=temp-'0';
      numberascii=numberascii+temp*pow(10,number.size()-i-1);
      break;
      default:
      numberascii=numberascii/pow(10,number.size()-i);
      i=number.size();
    }
  }
  std::cout<<"Number original: "<<number<<std::endl;//just to test the correct output of the original and new string/int
  std::cout<<"Number after ascii: "<<numberascii<<std::endl;
  return 0;
}

int main(){
  std::cout<<"Enter a Number"<<std::endl;
  std::string s = "47218";//was a given value, no real reson to have it here lmfao
  std::getline(std::cin,s);// to ignore/ include whitespaces
  case_parse_int(s);
}
