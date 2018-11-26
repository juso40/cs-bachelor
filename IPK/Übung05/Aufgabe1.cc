#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<double> swapped(std::vector<double> v){
	for (int i=0; i<round(v.size()/2); i++){
		double a=v[i];							//a
		double b=v[v.size()-i];		//b
		std::swap(a,b);					//(a|b)->(b|a)
		v[i]=a;
		v[v.size()-i]=b;
	}
	std::cout<<"Vector using 'swap':\n";
	for (int n=0; n<v.size(); n++){
		std::cout<<v[n]<<std::endl;
	}
	return v;
}


std::vector<double> rounded(std::vector<double> v){
	for (int i=0; i<v.size(); i++){
		v[i]=std::round(v[i]);
		std::cout<<"rounded:"<<v[i]<<std::endl;
	}
	return v;
}

std::vector<double> reversed(std::vector<double> v){
	std::vector<double> rv(v.size());
	for (int i=0; i<v.size(); i++){
		rv[rv.size()-1-i]=v[i];
	}
	std::cout<<"Original:"<<std::endl;
	for (int n=0;n<rv.size();n++){
		std::cout<<v[n]<<"|";
	}
	std::cout<<"\nReversed:"<<std::endl;
	for (int n=0;n<rv.size();n++){
		std::cout<<rv[n]<<"|";
	}
	std::cout<<"\n"<<std::endl;
	return rv;
}

void minmax(std::vector<double> V){
	int n;
	double min=V[0];
	double max=V[0];
	for (n=0; n<V.size(); n++){
		if (V[n]<min){
			min=V[n];
		}
		if (V[n]>max){
			max=V[n];
		}
	}
	std::pair<double,double> pairmm = std::make_pair(min,max);

	std::cout<<"("<<pairmm.first<<"|"<<pairmm.second<<")"<<std::endl;
}


int main(int argc, char** argv){
	int n;

	//Vector empty
	std::vector<double> v1;
	//Vector with known lenght
	std::vector<double> v2(10);
	// Vector with known Values
	std::vector<double> v3 = {{ 0.0, 1.1, 2.2, 3.3, 4.4, 5.5 }};

	for (n=0;n<v1.size();n++){
		std::cout<<v1[n]<<std::endl; //outputs nothing
	}
	for (n=0;n<v2.size();n++){
		std::cout<<v2[n]<<std::endl; //outputs many '0'
	}
	for (n=0;n<v3.size();n++){
		std::cout<<v3[n]<<std::endl; //outputs each number
	}
	minmax(v3);
	reversed(v3);
	rounded(v3);
	swapped(v3);
}
