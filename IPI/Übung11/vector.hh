#ifndef ARRAY_HH
#define ARRAY_HH

#include<iostream>
#include<vector>
#include<algorithm>

template<typename datenform, int laenge> class Vector
{
private:
  std::vector<datenform> _vector;
  int _laenge;
public:
  Vector()  //Default-Konstruktor
  {
    std::vector<datenform> v(laenge);
    _vector = v;
    _laenge = laenge;
  }
  //der wird nie benutzt!!!!
/*  Vector(const Vector<datenform, laenge>& other)  //Copy-Konstruktor
  {
    _vector[other._laenge];
    _laenge=other._laenge;
    for(int i=0;i<laenge;i++)
    {
      _vector[i]=other._vector[i];
    }
  }*/
  ~Vector()        //Destrukor
  {
    //Nothing to do here
  }
  datenform& operator[](int position) //[]
  {
    return _vector[position];
  }
  Vector operator+(Vector& other)    //+
  {
    if(laenge!=other._laenge)
    {
      throw std::runtime_error("Vektor nicht gleichlang");
    }
    Vector<datenform, laenge> out;

    for(int i=0;i<laenge;i++)
    {
      out[i]=_vector[i]+other._vector[i];
    }
    return out;
  }
  Vector operator*(datenform skalar)
  {
      Vector<datenform, laenge> out;
      for(int i=0;i<laenge;i++)
      {
        out[i]=_vector[i]*skalar;
      }
      return out;
  }
  datenform getMax()
  {
    if(laenge==0)
    {
      return 0;
    }
    else
    {
      return *std::max_element(_vector.begin(), _vector.end());
    }
  }
};//End vector

#endif //ARRAY_HH
