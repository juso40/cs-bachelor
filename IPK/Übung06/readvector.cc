#include <iostream>
#include <vector>
#include "io.hh"
#include "statistics.hh"
#include "statistics.cc"
#include "io.cc"

int main(){
	std::vector<double> rv=read_vector();
	for (auto i:rv){
		std::cout<<i<<std::endl;
	}
	std::cout<<"Median:"<<median(rv)<<std::endl;
}
