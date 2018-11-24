#include <iostream>
#include <string>
#include <vector>

int case_parse_int(std::string number){
  char temp;
  char cancelid;
  int numberascii=0;
  int negative=1;
  for (int i=0; i<number.size(); i++){
    temp=number[i];
    switch (temp){
      case ' ':
        break;
      case '+':
        break;
      case '-':
        negative=-1;
        break;
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5'://if its any number then in skips trough all cases till 9
      case '6': //and then calculates
      case '7':
      case '8':
      case '9':
        numberascii=numberascii*10+(temp-'0');
        break;
      default://if its neither a number, nor a whitespace or a '+' or '-'
        cancelid=number[i];
        i=number.size();//stop condition
    }
  }
  if (negative==-1){
    numberascii=negative*numberascii;
  }
  std::cout<<"Number original: "<<number<<std::endl;//just to test the correct output of the original and new string/int
  std::cout<<"Number after ascii: "<<numberascii<<std::endl;

  //d)
  std::pair<int,int> paird = std::make_pair(numberascii,cancelid);
  std::cout<<paird.first<<"|"<<paird.second<<std::endl;
  return 0;
}

int main(){
  std::cout<<"Enter a Number"<<std::endl;
  std::string s = "47218";//was a given value, no real reason to have it here lmfao
  std::getline(std::cin,s);// to ignore/ include whitespaces
  case_parse_int(s);
}
