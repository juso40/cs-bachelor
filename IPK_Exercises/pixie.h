#ifndef PIXIE_HH
#define PIXIE_HH
#include "sprite.h"

class Pixie:public Sprite{
private:
  float _size;
public:
  virtual void draw();
   void setSize(const float& si);
   float getSize();
  Pixie();
  Pixie(const float&);
  Pixie(const Pixie&);
};

#endif
