// ------------------------------------------------------
// #ifndef
// Use Case: Ensuring code is included if a macro is NOT defined
#ifndef MY_HEADER_H
    #define MY_HEADER_H
    void myFunction();  // Prevent double inclusion
#endif

// ------------------------------------------------------
// #if
// Use Case: Conditional compilation based on constant expressions
#define CONFIG 1
#if CONFIG == 1
    std::cout << "Config is set to 1." << std::endl;
#endif

// ------------------------------------------------------
// #elif
// Use Case: Handling multiple conditions in conditional compilation
#define VERSION 2
#if VERSION == 1
    std::cout << "Version 1 selected." << std::endl;
#elif VERSION == 2
    std::cout << "Version 2 selected." << std::endl;
#endif

// ------------------------------------------------------
// #else
// Use Case: Providing alternative code if conditions are not met
#define OS_LINUX
#ifdef OS_WINDOWS
    std::cout << "Running on Windows." << std::endl;
#else
    std::cout << "Running on a non-Windows OS." << std::endl;
#endif

// ------------------------------------------------------
// #endif
// Use Case: Marking the end of conditional compilation blocks
#ifdef FEATURE_ENABLED
    // Feature-specific code
#endif