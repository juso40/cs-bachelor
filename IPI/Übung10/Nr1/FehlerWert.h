#ifndef FEHLERWERT_H
#define FEHLERWERT_H

class FehlerWert
{
private:
  double _wert;
  double _fehler;

public:
  //Default Constructor
  FehlerWert();
  //Constructor für 2 double
  FehlerWert(const double& wert,const double& fehler);
  //die jeweiligen operatoren
  FehlerWert operator+(const FehlerWert& other);
  FehlerWert operator*(const FehlerWert& other);
  //access methoden
  double wert();
  double absolut();
  double relativ();
};

#endif
