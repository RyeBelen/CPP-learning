// File: assignment_operators_examples.cpp

#include <iostream>
using namespace std;

int main() {
    // Initial values for demonstration
    int a = 10, b = 20;

    // 1. Basic Assignment Operator '='
    int x = a;  // Assign value of 'a' to 'x'
    cout << "Basic Assignment: x = " << x << endl;

    // 2. Addition Assignment Operator '+='
    x += b;  // Equivalent to: x = x + b
    cout << "Addition Assignment (x += b): x = " << x << endl;

    // 3. Subtraction Assignment Operator '-='
    x -= a;  // Equivalent to: x = x - a
    cout << "Subtraction Assignment (x -= a): x = " << x << endl;

    // 4. Multiplication Assignment Operator '*='
    x *= 2;  // Equivalent to: x = x * 2
    cout << "Multiplication Assignment (x *= 2): x = " << x << endl;

    // 5. Division Assignment Operator '/='
    x /= 4;  // Equivalent to: x = x / 4
    cout << "Division Assignment (x /= 4): x = " << x << endl;

    // 6. Modulus Assignment Operator '%='
    x %= 3;  // Equivalent to: x = x % 3
    cout << "Modulus Assignment (x %= 3): x = " << x << endl;

    // 7. Bitwise AND Assignment Operator '&='
    x = 6;  // Reset x for demonstration
    x &= 3;  // Equivalent to: x = x & 3
    cout << "Bitwise AND Assignment (x &= 3): x = " << x << endl;

    // 8. Bitwise OR Assignment Operator '|='
    x |= 2;  // Equivalent to: x = x | 2
    cout << "Bitwise OR Assignment (x |= 2): x = " << x << endl;

    // 9. Bitwise XOR Assignment Operator '^='
    x ^= 1;  // Equivalent to: x = x ^ 1
    cout << "Bitwise XOR Assignment (x ^= 1): x = " << x << endl;

    // 10. Bitwise Left Shift Assignment Operator '<<='
    x <<= 1;  // Equivalent to: x = x << 1 (shift bits left by 1 position)
    cout << "Left Shift Assignment (x <<= 1): x = " << x << endl;

    // 11. Bitwise Right Shift Assignment Operator '>>='
    x >>= 1;  // Equivalent to: x = x >> 1 (shift bits right by 1 position)
    cout << "Right Shift Assignment (x >>= 1): x = " << x << endl;

    double y = 1.5;




    return 0;
}
