#include <array>
#include <iostream>
#include <cmath>

bool deck_check(std::array<int, 52> deck){
  std::array<int, 52> deck_real;
  for (unsigned i=0;i<52;i++){
    deck_real[i]=i;
  }
  if (deck==deck_real){
    return true;
  }
}

std::array<int, 52> perfect_out(std::array<int, 52> deck_out){
  std::array<int, 26> half1;
  std::array<int, 26> half2;
  for (unsigned i=0;i<26;i++){
    half1[i]=i;
    half2[25-i]=52-i-1;
  }
  int counter=0;
  while (true){
    deck_out[counter*2]=half1[counter];
    deck_out[counter*2+1]=half2[counter];

    half1[counter]=deck_out[counter*2];
    half2[counter]=deck_out[counter*2+1];

    std::cout<<"perfect out"<<deck_out[counter]<<std::endl;
    counter++;

    if ((counter%25)==0){
      counter=0;
    }
    //break condition
    if (deck_check(deck_out)==true){
      break;
    }
  }
}

std::array<int, 52> perfect_in(std::array<int, 52> deck_in){
  std::array<int, 26> half1;
  std::array<int, 26> half2;
  for (unsigned i=0;i<26;i++){
    half1[i]=i;
    half2[25-i]=52-i-1;
  }
  int counter=0;
  while (true){
    deck_in[counter*2]=half1[counter];
    deck_in[counter*2+1]=half2[counter];

    half1[counter]=deck_in[counter*2];
    half2[counter]=deck_in[counter*2+1];

    std::cout<<"perfect in:"<<deck_in[counter]<<std::endl;
    counter++;

    if ((counter%25)==0){
      counter=0;
    }
    //break condition
    if (deck_check(deck_in)==true){
      break;
    }
  }
}

int main(){

  std::array<int, 52> deck;

  for (unsigned i=0;i<52;i++){
    deck[i]=i;
  }
  perfect_in(deck);
  perfect_out(deck);
}
