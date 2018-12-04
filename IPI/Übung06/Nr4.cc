#include <array>
#include <iostream>
#include <cmath>

bool deck_check(int deck[], int n){
  int deck_real[n];
  for (unsigned i=0;i<n;i++){
    deck_real[i]=i;
    if (deck_real[i]!=deck[i]){
      return false;
    }
  }
  return true;
}

int perfect_out(int deck_out[], int n){
  int half1[n/2];
  int half2[n/2];
  for (unsigned i=0;i<n/2;i++){
    half1[i]=i;
    half2[i]=n/2+i;
  }
  int counter=0;
  int counter_small=0;
  int steps=0;
  while (true){
    deck_out[counter_small*2]=half1[counter_small];
    deck_out[counter_small*2+1]=half2[counter_small];

    half1[counter_small]=deck_out[counter_small];
    half2[counter_small]=deck_out[n/2+counter_small];

    std::cout<<"perfect-out: "<<deck_out[counter]<<"| card number: "<<counter<<std::endl;
    counter++;
    counter_small++;

    if ((counter_small%(n/2))==0){
      counter_small=0;
    }
    if ((counter%n)==0){
      counter=0;
    }
    //break condition
    if (deck_check(deck_out, n)==true){
      break;
    }
    steps++;
  }
    std::cout<<"No. of steps:"<<steps/n<<std::endl;
    return 0;
}

int main(){
  int n=52;
  int deck[n];

  for (unsigned i=0;i<n;i++){
    deck[i]=i;
  }
  perfect_out(deck, n);
  //perfect_out(deck);
}
