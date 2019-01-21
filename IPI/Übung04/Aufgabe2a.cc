#include "fcpp.hh"
#include <time.h>

int binomial_coefficient(int n, int k){
 return cond(n<0 || k<0 || n<k,0,
   cond(k==0 || n == k,1,
     binomial_coefficient(n-1,k-1)+binomial_coefficient(n-1,k)));
}

int main(int argc, char** argv){
  int n = enter_int("Enter a value for n: ");
  int k = enter_int("Enter a value for k: ");
  print(binomial_coefficient(n,k));

  return 0;
}
