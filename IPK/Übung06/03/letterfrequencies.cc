#include <map>
#include <iostream>

std::map<char,int> get_frequencies(){
  std::map<char,int> count;
  while (true){
    unsigned char c;
    // read in character
    std::cin >> c;
    // abort if input closed
    if (not std::cin)
      break;
    if(std::isalpha(c))
      c=(toupper(c));
      count[c]=count[c]+1;
  }
  return count;
}

void print_frequencies(const std::map<char,int>& frequencies){
	int count=0;
	for (auto& it: frequencies){
		if(std::isalpha(it.first)){
		std::cout << it.first << ": "<< it.second << std::endl;
		count=count+it.second;
		}
	}
	std::cout<<"Characters total: "<<count<< std::endl;
	for (auto& entry : frequencies){
		if(std::isalpha(entry.first)){
		std::cout << entry.first << ": "<< static_cast<double>(entry.second)/count << std::endl;
		}
	}
}


int main(){
  print_frequencies(get_frequencies());
}
