#include <fstream>
#include <iostream>
#include <string>

void filehandler(std::string& name)
{
  std::string zeile;
  std::string speicher="";;
  std::fstream myfile;
  std::ofstream ofile;
  ofile.open(name+"-a.txt");
  myfile.open(name+".txt");
  int n=0;
  while(myfile.good())
  {
    n++;
    getline(myfile,zeile);
    speicher=speicher+"\n"+std::to_string(n)+": "+zeile;

  }
  ofile<<speicher;
  ofile.close();
  myfile.close();
}


int main()
{
  std::string filename="faust";
  filehandler(filename);
}
