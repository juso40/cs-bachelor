#include <iostream>
#include <string>

class Tier{
public:
  Tier(){}
  ~Tier(){}
  virtual void food()=0;
  virtual void sound()=0;
};

class Hund : public Tier{
private:
  std::string food_v = "Fleisch";
  std::string sound_v = "woof!";
public:
  Hund(){}
  ~Hund(){}
  void food()
  {
    std::cout<<food_v<<std::endl;
  }
  void sound()
  {
    std::cout<<sound_v<<std::endl;
  }
};

class Baer :public Tier{
private:

public:
  void food(){
    std::cout<<"Lachs"<<std::endl;
  }
  void sound(){
    std::cout<<"Wraaahhh"<<std::endl;
  }
};

 int main()
 {
   Hund Felix;
   Baer Jonathan;
   Felix.food();
   Felix.sound();
   Jonathan.food();
   Jonathan.sound();
 }
