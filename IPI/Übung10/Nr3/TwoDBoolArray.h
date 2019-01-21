#ifndef TWODBOOLARRAY_H
#define TWODBOOLARRAY_H

class TwoDBoolArray
{
public:
  //Initialisiere ein nxm Array
TwoDBoolArray (int n=0 , int m=0);
// Copy−Konstruktor
TwoDBoolArray (const TwoDBoolArray& other) ;
// Destruktor
∼TwoDBoolArray ();
// Zuweisungsoperator
TwoDBoolArray& operator=(const TwoDBoolArray& other) ;
// Gebe Z e i l e n z a h l   z u r u e c k
int rows () ;
// Gebe S p a l t e n z a h l   z u r u e c k
int cols ();
};

class RowProxy
{
public :
//Konstruktor
RowProxy (bool∗ daten,int zeilenindex,int spaltenzahl) ;
// d e r " i n n e r e " K l a m m e r z u g r i f f s o p e r a t o r
bool& operator[](int j) ;
private :
bool ∗ _daten ;
int zeilenindex ;
int spaltenzahl ;
};
// der"aeussere"Klammerzugriffsoperator
RowProxy operator[](int i) ;
private :
bool∗ daten ;
int m,n ;
};

#endif
