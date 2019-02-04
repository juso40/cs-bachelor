#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v={10};
  int i=0;
  std::cout << "Start!" << '\n';
  while(true){
    v.push_back(i);
    i++;
  }
}
