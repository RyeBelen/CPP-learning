#include <iostream>
using namespace std;

int main(){

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    string name = "Rye";
    int age = 19;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';
    
    return 0;
}