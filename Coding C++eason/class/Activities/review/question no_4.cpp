/*Create a class Calculator with
 methods add, subtract
*/


/*
enter num1 = 10
enter num2 = 10
pick + or -
answer: 0
*/
















#include <iostream>
using namespace std;

class Calculator {
public:
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
        if (b != 0)
            return (double)a / b;
        else{
            cout<<"Error: Cannot be divided!"<<endl;
            return 0;
        }
           
    }
};

int main() {
    Calculator calc;
    int num1, num2, choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\n--- Result ---" << endl;
    switch (choice) {
        case 1:
            cout << "Addition: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Division: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}