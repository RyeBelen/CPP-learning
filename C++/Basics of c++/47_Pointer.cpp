#include <iostream>
using namespace std;

int main(){

    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address         

    // & address-of operator
    // * dereference operator

    string freePizzas[5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4", "Pizza 5"};
    string name = "Rye";
    int age = 19;

    string *pFreePizzas = freePizzas; // No need to use & since freePizzas because that array is already an adress
    string *pName = &name; 
    int *pAge = &age;

    // cout << pName; // contains a memory adress
    cout << *(pFreePizzas+1) << '\n'; // or *pFreePizza = shows "Pizza 1"
    cout << *pName << '\n'; // To access the value at this adress you would use *
    cout << *pAge << '\n';
    return 0;
}