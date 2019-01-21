#include <iostream>
#include <map>
#include "sanitizeword.hh"
#include "sanitizeword.cc"

void  print_frequencies(std::map<std::string,int> mymap){
	for (std::pair<const std::string, int>& entry : mymap){
		std::cout << entry.first << ": "<< entry.second <<" | "<<(static_cast<double>(entry.second)/mymap.size())*100<<"%"<<std::endl;
		}
}

std::map<std::string,int> get_frequencies(){
	std::map<std::string,int> count;
	int wordcounter=0;
  while (true){
		std::string sanitized;
		//read in string
		std::cin>>sanitized;
		//abort if input closed
    if (not std::cin)
      break;
		sanitized=sanitize_word(sanitized);
		if(sanitized!=""){
			count[sanitized]=count[sanitized]+1;
			wordcounter++;
		}
	}
	std::cout<<"Words total: "<<wordcounter<<std::endl;
	return count;
}

int main(){
	print_frequencies(get_frequencies());
}
