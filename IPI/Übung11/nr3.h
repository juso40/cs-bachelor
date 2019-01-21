#ifndef NR3_H
#define NR3_H

template <class T1, typedef T2, typedef T3>
class SimpleVector
{
private:
  T3 _value;
  T3* _entrynr;

public:
//default Konstruktor
  SimpleVector();
//copy Konstruktor
  SimpleVector(T1& copy);
//default destructor
  ~SimpleVector();

//addition mehrerer vektoren
  SimpleVector operator+(const SimpleVector& other);
//multiplikation mit einem skalar
  SimpleVector operator*(const T2& skalar);
//zuweisen eines neuen Vectors
  SimpleVector operator=(SimpleVector& other);
//methode die den maxiamlen eintrag returned
  T3 maximum();

};



#endif NR3_H
