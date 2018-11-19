#include <iostream>

namespace power{
    int iterative(int q,int n){
        while(n>0){
            q=q*q;
            n--;
        }
        return q;
    }
}

int main(){ 
    
    int q,n;
    
    std::cout<< "Enter a q:"<< std::flush;
    std::cin>> q;
    std::cout<< "Enter a n:"<< std::flush;
    std::cin>> n;
    std::cout<< power::iterative(q,n) << std::endl;
}
