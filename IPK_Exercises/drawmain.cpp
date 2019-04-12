#include <iostream>
#include "sprite.h"
#include "pixie.h"

Pixie::Pixie(){
  Pixie::setSize(1.0);
}
void Pixie::setSize(const float& newSize){
  this->_size=newSize;
}
float Pixie::getSize(){
  return this->_size;
}
void Pixie::draw(){
  std::cout<<this->_size<<"***"<<std::endl;
}


int main(){
  Pixie p1(1);

}
