#include <iostream>
#include <vector>
#include "io.hh"

int main(){
	int N;
	double min, max;
	std::cout<<"N="<<std::flush;
	std::cin>>N;
	std::cout<<"min="<<std::flush;
	std::cin>>min;
	std::cout<<"max="<<std::flush;
	std::cin>>max;
	std::vector<double> v=uniform_distribution(random_seed(), N, min, max);
	for (auto i:v){
		std::cout<<i<<std::endl;
	};
}
