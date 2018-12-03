#include <cmath>
#include <vector>
#include "statistics.hh"
#include "statistics.cc"


int main(){

  std::vector<double> emptyvector;
  std::vector<double> fourvalues={{0.,1.,2.,3.}};
  std::vector<double> fivevalues={{0.,1.,2.,3.,4.}};

  bool test_1 = false;
  bool test_2 = false;
  bool test_3 = false;

  double test_val =   median(emptyvector);
  double reference_val = 0;
  if (std::abs(test_val - reference_val) < 1e-10) {
    test_1 = true;// test passed
  }
  test_val =   median(fourvalues);
  reference_val = 1.5;
  if (std::abs(test_val - reference_val) < 1e-10) {
    test_2 = true;// test passed
  }
  test_val =  median(fivevalues);
  reference_val = 2;
  if (std::abs(test_val - reference_val) < 1e-10) {
    test_3 = true;// test passed
  }

  if (test_1 and test_2 and test_3)
    return 0;
  else
    return 1;
}
