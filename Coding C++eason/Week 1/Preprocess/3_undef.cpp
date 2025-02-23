// #undef.cpp
// Use Case: Un-defining macros to avoid conflicts

#include <iostream>


#define VALUE 10
#undef VALUE  // Remove previous definition
#define VALUE 20  // Redefine VALUE safely

int main() {
    std::cout << "New value: " << VALUE << std::endl;
    return 0;
}
