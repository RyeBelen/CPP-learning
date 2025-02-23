using namespace std;
#include <iostream>

    //  The "const" keyword specifies that a variable's value is constant
    //  tell the compiler to prevent anything from modifying it
    //  (read-only)
    
int main (){
   
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const double PI = 3.14159;
    const double GRAVITATIONAL_CONSTANT = 9.807;
    const string VALUE_OF_YOURSELF = "nothing";

    // example in use

    double radius = 10.2;
    double circumference = 2 * PI * radius;

    cout << circumference;
    return 0;
}