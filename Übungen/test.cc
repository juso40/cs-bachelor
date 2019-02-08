#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <locale>

void str_replacer(std::string &line, char vocal){
  for (int i=0; i<line.size(); i++){
    if (line[i]== 'a'| line[i]== 'e'| line[i]== 'i'| line[i]== 'o'| line[i]== 'u'){
      line[i]=std::tolower(vocal, std::locale());
    }
    if (line[i]== 'A'| line[i]== 'E'| line[i]== 'I'| line[i]== 'O'| line[i]== 'U'){
      line[i]=std::toupper(vocal, std::locale());
    }
  }
}

void fhandler(std::string title,char vocal){
  std::string line;
  std::ifstream myfile;
  std::ofstream newfile ("output.txt");
  myfile.open(title);

  if(myfile.is_open()){
    while(std::getline(myfile, line)){
      str_replacer(line, vocal);
      std::cout<<line<<std::endl;
      newfile<<line<<std::endl;;
    }
  }
  else{
    std::cout<<"Couln't open file."<<std::endl;
  }
  myfile.close();
  newfile.close();
}

int main()
{
  char vocal;
  std::string title;
  std::cout << "Enter files name with the extension. " << std::flush;
  std::cin >> title;
  std::cout << "Enter a char to replace all vocals with. " << std::flush;
  std::cin >> vocal;
  fhandler(title, vocal);

  return 0;
}
