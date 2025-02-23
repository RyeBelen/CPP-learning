#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a = 10, b = 20, c = 10;

    // Relational Operators
    cout << "Relational Operators:" << endl;
    cout << "a == c: " << (a == c) << endl;   
    cout << "a != b: " << (a != b) << endl;  
    cout << "a < b: " << (a < b) << endl;     
    cout << "b > a: " << (b > a) << endl;     
    cout << "a <= c: " << (a <= c) << endl;   
    cout << "b >= a: " << (b >= a) << endl;   

    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    bool x = true, y = false;

    cout << "x && y: " << (x && y) << endl;   
    cout << "x || y: " << (x || y) << endl;   
    cout << "!x: " << (!x) << endl;           
    cout << "!(x && y): " << (!(x && y)) << endl;

    // Combined Example
    cout << "\nCombined Relational and Logical Operators:" << endl;
    cout << "(a > b) || (b > a): " << ((a > b) || (b > a)) << endl; 
    cout << "(a == c) && (b > a): " << ((a == c) && (b > a)) << endl;
    cout << "!(a < b): " << (!(a < b)) << endl; 

    return 0;
}
