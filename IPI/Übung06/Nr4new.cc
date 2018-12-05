#include <array>
#include <iostream>

bool deck_check(int deck_shuffled[], int n){
  for (int i=0;i<n;i++){    //compares my shuffled deck to the original deck
    if (deck_shuffled[i]!=i){
      std::cout<<"False!\n\n\n"<<std::endl;
      return false;   //as long as my shuffled deck doesent equal my original
    }                  //it returns flase -> loop continous
  }
  std::cout<<"\n\nTrue!\n\n"<<std::endl;
  return true;
}





int main(){
  int n = 52;     //number of cards in my deck
  int deck[n];    //my original deck
  int half1[n/2];//first half of my deck
  int half2[n/2];//second half of my deck
  bool first_shuffle = true;

  for (int i=0; i<n; i++){
    deck[i]=i;    //fills my deck with the original values
  }

  int counter=0;//to count my amount i shuffled the deck
  //perfect out shuffle
  while ((first_shuffle == true) || (deck_check(deck, n)==false)){ //self explanatory
    for (int i=0; i<n/2; i++){  //splits my deck into 2 seperate halfes
      half1[i]=deck[i];
      half2[i]=deck[(n/2)+i];
    }
    for (int i=0; i<n/2; i++){//shuffles my 2 seperate halfs into one shuffled deck
      deck[i*2]=half1[i];
      deck[i*2+1]=half2[i];
    }
    //optional, just for visuals
    for (int i=0; i<n; i++){
      std::cout<<i<<". card is: "<<deck[i]<<"\n";
    }
    first_shuffle=false;
    counter++;//counts number of shuffles
  }
  //outputs 8 with a standard deck of 52 cards
  std::cout << "Number of perfect out shuffles required: "<< counter << std::endl;

  //resets my conditions
  counter=0;//to count my amount i shuffled the deck
  for (int i=0; i<n; i++){
    deck[i]=i;    //fills my deck with the original values
  }
  first_shuffle = true;
  //perfect in shuffle
  while ((first_shuffle == true) || (deck_check(deck, n)==false)){ //self explanatory
    for (int i=0; i<n/2; i++){  //splits my deck into 2 seperate halfes
      half1[i]=deck[i];
      half2[i]=deck[(n/2)+i];
    }
    for (int i=0; i<n/2; i++){//shuffles my 2 seperate halfs into one shuffled deck
      deck[i*2+1]=half1[i]; //opposit of perfect out shuffle
      deck[i*2]=half2[i];
    }
    //optional, just for visuals
    for (int i=0; i<n; i++){
      std::cout<<i<<". card is: "<<deck[i]<<"\n";
    }
    first_shuffle=false;
    counter++;//counts number of shuffles
  }
  //outputs 52 with a standard deck of 52
  std::cout << "Number of perfect in shuffles required: " << counter << std::endl;
}
