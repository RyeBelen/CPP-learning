#include <iostream>
using namespace std;

int main(){
    
    // Null Value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represent a null pointer literal

    // nullpts are helpfull when determining if an adress
    // was succesfully assigned to a pointer

    // When using pointer, be careful that your code isn't 
    // dereferencing null or pointing to free memory
    // this will cause undefined behaviour

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout << "Adress was not assigned!\n";
    }
    else{
        cout << "Adress was assigned!\n";
    }
    return 0;
}