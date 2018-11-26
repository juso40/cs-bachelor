#include <iostream>
#include <vector>
#include "io.hh"
#include "statistics.hh"

int main(){
	std::vector<double> rv=read_vector();
	for (auto i:rv){
		std::cout<<i<<std::endl;
	}	
	std::cout<<median(rv)<<std::endl;
}

