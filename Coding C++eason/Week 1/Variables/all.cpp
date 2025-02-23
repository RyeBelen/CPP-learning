// File: data_types_examples.cpp

#include <iostream>
using namespace std;

int main() {
    // 1. Fundamental Data Types
    int age = 25;             // Integer
    float height = 5.9;       // Single-precision floating-point
    double pi = 3.14159;      // Double-precision floating-point
    char grade = 'A';         // Character
    bool isPassed = true;     // Boolean

    cout << "Fundamental Data Types:\n";
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl << endl;

    // 2. Derived Data Types
    int arr[3] = {10, 20, 30};      // Array
    int* ptr = &age;                // Pointer
    int& ref = age;                 // Reference

    cout << "Derived Data Types:\n";
    cout << "Array: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
    cout << "Pointer to Age: " << *ptr << endl;
    cout << "Reference to Age: " << ref << endl << endl;

    // 3. User-Defined Data Types
    struct Point {
        int x, y;
    };
    Point p = {10, 20};

    class Car {
    public:
        string brand;
        int speed;
        Car(string b, int s) : brand(b), speed(s) {}
    };
    Car myCar("Toyota", 120);

    enum Color { RED, GREEN, BLUE };
    Color carColor = GREEN;

    cout << "User-Defined Data Types:\n";
    cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
    cout << "Car: " << myCar.brand << " with speed " << myCar.speed << endl;
    cout << "Car Color (GREEN): " << carColor << endl << endl;

    // 4. Type Modifiers
    unsigned int positive = 300;
    short int smallNumber = -100;

    cout << "Type Modifiers:\n";
    cout << "Unsigned Int: " << positive << endl;
    cout << "Short Int: " << smallNumber << endl << endl;

    // 5. Special Data Types
    auto autoVar = 42;           // Auto-deduced as int
    decltype(age) anotherAge = 30; // Deduced as int (same as age)

    int* nullPtr = nullptr;      // Null pointer

    cout << "Special Data Types:\n";
    cout << "Auto Variable: " << autoVar << endl;
    cout << "Decltype Variable: " << anotherAge << endl;
    cout << "Null Pointer: " << nullPtr << endl << endl;

    // 6. Type Casting
    double number = 42.56;
    int truncated = (int)number;            // Explicit cast
    int truncatedModern = static_cast<int>(number); // Modern C++ cast

    cout << "Type Casting:\n";
    cout << "Original Number: " << number << endl;
    cout << "Truncated (C-Style): " << truncated << endl;
    cout << "Truncated (Static Cast): " << truncatedModern << endl;

    return 0;
}
