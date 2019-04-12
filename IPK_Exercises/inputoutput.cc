#include <iostream>
#include <string>


std::string ascii(std::string line){
  std::string response;
  char first=line[0];

  if (first<='Z' && first >='A' || first<='z' && first >='a' ){
    response="First char is a letter | The lenght of the line is: ";
  }else
  if (first<='9' && first >='0'){
    response="First char is a number | The lenght of the line is: ";
  }
  else{
    response="First char is a special character | The lenght of the line is: ";
  }
  return response;
}


int main(){
  std::string line;

  std::cout<<"Please write some lines:"<<std::endl;
  //stop with break only
  while(true){
    //read in new lines
    std::getline(std::cin, line);
    //break condition
    if (line=="quit" || line=="exit"){
      break;
    }
    std::cout<<(ascii(line))<<line.size()<<std::endl;;
  }
  return 0;
}
