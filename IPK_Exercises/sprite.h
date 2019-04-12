#ifndef SPRITE_HH
#define SPRITE_HH

class Sprite{
private:
    float _size;
public:
  virtual void draw() = 0;
  virtual float getSize();
  virtual void setSize(const float& si);
  Sprite();
  Sprite(const float&);
  Sprite(const Sprite&);
};


#endif
