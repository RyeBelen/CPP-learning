#include <iostream>
using std::endl;

// A simple calculator program

int main()
{

    char op;
    float num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ************" << endl;

    std::cout << "What operand would you like? (+ - * / %): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result:" << endl;
            std::cout << result << endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result:" << endl;
            std::cout << result << endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result:" << endl;
            std::cout << result << endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result:" << endl;
            std::cout << result << endl;
            break;
         case '%':
            result = (int)num1 % (int)num2;
            std::cout << "Result:" << endl;
            std::cout << result << endl;
            break;
        default:
            std::cout << "Please input in a valid operator" << endl;
            
    }

    std::cout << "************************************" << endl;

    return 0;
}