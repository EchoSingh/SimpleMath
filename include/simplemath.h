#ifndef SIMPLEMATH_H
#define SIMPLEMATH_H

namespace SimpleMath {

    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(int a, int b);

    double sine(double x);
    double cosine(double x);
    double tangent(double x);


    double power(double base, int exponent);
    double squareRoot(double x);

} // namespace SimpleMath

#endif // SIMPLEMATH_H
