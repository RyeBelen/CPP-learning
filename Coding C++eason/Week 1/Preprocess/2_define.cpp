// #define.cpp
// Use Case: Defining constants or macros to simplify code and improve readability

#include <iostream> 

#define MAX_BUFFER_SIZE 1024  // Set buffer size once
#define SQUARE(x) ((x) * (x))  // Macro function for squaring a number

int main() {
    std::cout << "Max Buffer Size: " << MAX_BUFFER_SIZE << std::endl;
    std::cout << "Square of 5: " << SQUARE(5) << std::endl;
    return 0;
}
