#include <array>
#include <iostream>
#include <cmath>

bool deck_check(int deck_shuffled[], int n){
  for (unsigned i=0;i<n;i++){
    if (deck_shuffled[i]!=i){
      std::cout<<"False!\n\n\n"<<std::endl;
      return false;
    }
  }
  std::cout<<"\n\nTrue!\n\n"<<std::endl;
  return true;
}

void perfect_out(int deck[], int n){
  int half1[n/2];
  int half2[n/2];
  for (unsigned i=0;i<n/2;i++){
    half1[i]=i;
    half2[i]=n/2+i;
  }

  int steps=0;
  while (true){
    for (int counter=0;counter<n/2;++counter){
      deck[(counter*2)]=half1[counter];
      deck[((counter*2)+1)]=half2[counter];

      half1[counter]=deck[counter];
      half2[counter]=deck[((n/2)+counter)];

    }
    for (int out=0; out<n; ++out){
        std::cout<<"perfect-out: "<<deck[out]<<"| card number: "<<out<<std::endl;
    }
    ++steps;
    //break condition
    if (deck_check(deck, n)==true){
      break;
    }
  }
  std::cout<<"Number of steps: "<<steps<<std::endl;
}

int main(){
  int n=4;
  int deck[n];

  for (unsigned i=0;i<n;++i){
    deck[i]=i;
  }
  perfect_out(deck, n);
  return 0;
}
