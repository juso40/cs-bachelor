#include <iostream>
#include <cmath>

#include "FehlerWert.h"

FehlerWert::FehlerWert()
{}

FehlerWert::FehlerWert(const double& wert,const double& fehler)
:_wert(wert), _fehler(fehler)
{}

FehlerWert FehlerWert::operator+(const FehlerWert& other)
{
  FehlerWert Summe;
  Summe._wert=_wert+other._wert;
  Summe._fehler=sqrt(pow(_fehler,2)+pow(other._fehler,2));
  return Summe;
}

FehlerWert FehlerWert::operator*(const FehlerWert& other)
{
  FehlerWert Produkt;
  Produkt._wert=_wert*other._wert;
  Produkt._fehler=(sqrt(pow((_fehler/_wert),2)+pow((other._fehler/other._wert),2)))*Produkt._wert;
  return Produkt;
}

double FehlerWert::wert()
{
  return _wert;
}
double FehlerWert::absolut()
{
  return _fehler;
}
double FehlerWert::relativ()
{
  return _fehler/_wert;
}

int main ()
{
  // Konstruktor nimmt zwei double-Werte: den Wert und den absoluten Fehler
  FehlerWert a(12.0, 3.0), b(6.0, 2.0);

  FehlerWert s = a + b;

  std::cout << s.wert() << " +- " << s.absolut() <<
    " (" << s.relativ() * 100 << " %)" << std::endl;

  FehlerWert p = a * b;

  std::cout << p.wert() << " +- " << p.absolut() <<
    " (" << p.relativ() * 100 << " %)" << std::endl;
}
