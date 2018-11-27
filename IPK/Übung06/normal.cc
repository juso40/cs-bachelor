#include <iostream>
#include <vector>
#include "io.hh"

int main(){
	int N;
	double avg, std_dev;
	std::cout<<"N="<<std::flush;
	std::cin>>N;
	std::cout<<"avg="<<std::flush;
	std::cin>>avg;
	std::cout<<"std_dev="<<std::flush;
	std::cin>>std_dev;
	std::vector<double> v=normal_distribution(random_seed(),  N, avg, std_dev);
	for (auto i:v){
		std::cout<<i<<"\n";
	}
}
