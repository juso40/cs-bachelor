#include<iostream>

namespace power{
	int iterative(int q,int n){
		int f=q;
    while (n>1){
      q=q*f;
      n--;
    }
		if(n==0){
      q=1;
    }
		else if(n<0){
			q=0;
		}
		return q;
	}

	int recursive(int q, int n){
		if(n==1){
		}
		else if(n==0){
			q=1;
		}
		else if(n>1){
			return q*recursive(q,n-1);
		}
		return q;
	}
}

int main(){
	int q;
	int n;

	std::cout<<"Enter a value for 'q':"<<std::flush;
	std::cin>>q;
	std::cout<<"Enter a value for 'n':"<<std::flush;
	std::cin>>n;
	if(n<0){
		std::cout<<"Invalid value for n! Try again."<<std::endl;
		main();
	}
	else{
	std::cout<<"Iterative:"<<q<<"^"<<n<<"="<<power::iterative(q,n)<<std::endl;
	std::cout<<"Recursive:"<<q<<"^"<<n<<"="<<power::recursive(q,n)<<std::endl;
	}
}
