#include <iostream>

double root_analog_to_lecture(double base) {
    double result, approximation = 2.;
    while(true) {
        result = (base / approximation + approximation) / 2;
        if(result == approximation)
          break;
        approximation = result;
    }
    return result;
}

int main() {
    double base;

    std::cout << "Square Root of: " << std::flush;
    std::cin >> base;
    std::cout << "\nSquare root is: " << root_analog_to_lecture(base)<<std::endl;
    return 0;
}
