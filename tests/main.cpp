#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "simplemath.h"

int main() {
    using namespace SimpleMath;

    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    std::cout << "5 / 3 = " << divide(5, 3) << std::endl;

    std::cout << "sin(30) = " << sine(30 * M_PI / 180) << std::endl;
    std::cout << "cos(30) = " << cosine(30 * M_PI / 180) << std::endl;
    std::cout << "tan(30) = " << tangent(30 * M_PI / 180) << std::endl;

    std::cout << "2^3 = " << power(2, 3) << std::endl;
    std::cout << "sqrt(16) = " << squareRoot(16) << std::endl;

    return 0;
}
