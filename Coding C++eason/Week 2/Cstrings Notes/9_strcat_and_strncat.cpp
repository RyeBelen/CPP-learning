#include <iostream>
#include <cstring>

    // strcat() = strcat is a function in the C++ standard library that is used to concatenate (append) 
    //            one string (the second argument) to the end of another string (the first argument).

    // strncat() = strncat is a similar function to strcat, but it appends only a specified number of 
    //             characters (the third argument) from the source string to the destination string.

    // It's important to note that both functions do not check if the first string have enough space to 
    // append the second string, so make sure to have a big enough buffer to prevent buffer overflow and 
    // undefined behavior.

int main(){

    // Declare the destination string with enough space
    char dest[20] = "Hello";
    // Declare the source string-
    char src[] = " World";
    // Append the source string to the end of the destination string
    std::strcat(dest, src);
    std::cout << "Concatenated string: " << dest << std::endl;

    // Declare the destination string with enough space
    char dest2[20] = "Hello";
    // Declare the source string
    char src2[] = "World";
    // Append the first 4 characters of the source string to the end of the destination string
    std::strncat(dest2, src2, 4);
    std::cout << "Concatenated string: " << dest2 << std::endl;   


    return 0;
}