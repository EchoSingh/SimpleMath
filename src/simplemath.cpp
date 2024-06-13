#include "simplemath.h"
#include <cmath>
#include <stdexcept>

namespace SimpleMath {

    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return static_cast<double>(a) / b;
    }

    // Trigonometric functions
    double sine(double x) {
        return std::sin(x);
    }

    double cosine(double x) {
        return std::cos(x);
    }

    double tangent(double x) {
        return std::tan(x);
    }

    // Advanced mathematical functions
    double power(double base, int exponent) {
        return std::pow(base, exponent);
    }

    double squareRoot(double x) {
        if (x < 0) {
            throw std::invalid_argument("Negative value");
        }
        return std::sqrt(x);
    }

} // namespace SimpleMath
