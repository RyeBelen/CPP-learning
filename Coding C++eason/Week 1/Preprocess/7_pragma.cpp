// #pragma.cpp
// Use Case: Compiler-specific optimizations or instructions

#pragma once  // Prevent multiple inclusions of the same file

// Disabling a specific compiler warning
#pragma warning(disable : 4996)  // Suppress deprecation warning

// Optimizing for speed
#pragma optimize("O2", on)

int main() {
    std::cout << "Pragma directives are set!" << std::endl;
    return 0;
}
