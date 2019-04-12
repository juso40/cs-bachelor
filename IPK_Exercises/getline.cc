#include <iostream>
#include <string>

int main(){

  std::string line;

  std::cout<<"Enter some stuff:"<<std::endl;

  std::getline(std::cin,line);

  std::cout<<"your input: "<<line<<std::endl;

}
