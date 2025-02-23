#include <iostream>
#include <cstring>

    // strcspn() = calculates the length of the number of characters before the 1st
    //             occurrence of character present in both the string.
    // Return Value:
    // This function returns the number of characters before the 1st occurrence
    // of character present in both the string.

    // It's important to note that the function only search for the first 
    // ocurrence of any character in str2, so it will return the size of the 
    // substring that matches the condition.

    // It's also important to note that the function does not consider 
    // the null-terminating character '\0' as a valid character for comparison.
    
int main(){

    char s[] = "RYE BELEN 202211065";
    char num[] = "1234567890";
    int init = strcspn(s, num); // return number of characters before the first occurence

    std::cout << "string1: " << s << '\n'
              << "string2: " << num << '\n'
              << "The number of characters before first occurence of '" 
              << num << "' in '" << s << "' : " << init;
    
    char *numcode = s + init; // gives a pointer to a character that would start at the first occurence

    std::cout << '\n' << numcode;
    return 0;
}