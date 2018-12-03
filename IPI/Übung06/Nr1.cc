#include <iostream>

double root_analog_to_lecture(double base) {
    double result, approximation = 2.;
    int iterations=0;
    while(true) {
      iterations++;
      result = (base / approximation + approximation) / 2;
      if(result == approximation)
        break;
      approximation = result;
    }
    std::cout << "Approximated result after: " << iterations << " iteration(s). Is: ";
    return result;
}

int main() {
    double base;

    std::cout << "Square Root of: " << std::flush;
    std::cin >> base;
    std::cout << root_analog_to_lecture(base)<<std::endl;
    return 0;
}
