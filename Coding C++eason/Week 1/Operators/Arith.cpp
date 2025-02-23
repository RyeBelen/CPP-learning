#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a = 10, b = 3;
    float c = 10.5, d = 4.2;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;    // Addition
    cout << "a - b = " << (a - b) << endl;    // Subtraction
    cout << "a * b = " << (a * b) << endl;    // Multiplication
    cout << "a / b = " << (a / b) << endl;    // Integer Division
    cout << "a % b = " << (a % b) << endl;    // Modulus (remainder)

    // Division with floats
    cout << "\nc / d = " << (c / d) << endl;  // Floating-point Division

    // Increment and Decrement
    cout << "\nIncrement and Decrement:" << endl;
    cout << "Initial a: " << a << endl;
    cout << "a++: " << (a++) << " (Post-increment)" << endl;
    cout << "Now a: " << a << endl;
    cout << "++a: " << (++a) << " (Pre-increment)" << endl;
    cout << "\nInitial b: " << b << endl;
    cout << "b--: " << (b--) << " (Post-decrement)" << endl;
    cout << "Now b: " << b << endl;
    cout << "--b: " << (--b) << " (Pre-decrement)" << endl;

    return 0;
}
