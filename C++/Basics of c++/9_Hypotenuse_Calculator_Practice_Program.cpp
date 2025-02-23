#include <iostream>
#include <cmath>
#include <math.h>

// Calculate the hypotenuse of a right triangle given the formula:
// c = Sqaure root of a^2 + b^2

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    /* 

    a = pow(a, 2);
    b = pow(b, 2);          = This is one way of coding it
    c = sqrt(a + b);

    */
    c = hypot(a, b);
    c = sqrt((pow(a, 2) + pow(b, 2)));

    std::cout << "side C: " << c;

    return 0;
}