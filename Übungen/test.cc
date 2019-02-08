#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


void fhandler(std::string title){
  std::string line;
  std::ifstream myfile;
  myfile.open(title);

  if(myfile.is_open()){
    while(std::getline(myfile, line)){
      std::replace(line.begin(), line.end(), 'a', 'e' );
      std::replace(line.begin(), line.end(), 'e', 'e' );
      std::replace(line.begin(), line.end(), 'i', 'e' );
      std::replace(line.begin(), line.end(), 'o', 'e' );
      std::replace(line.begin(), line.end(), 'u', 'e' );
      std::cout<<line<<std::endl;
    }
  }
  else{
    std::cout<<"Couln't open file."<<std::endl;
  }
}



int main()
{
  std::string title;
  std::cout << "Enter files name with the extension. " << std::flush;
  std::cin >> title;
  fhandler(title);

  return 0;
}
