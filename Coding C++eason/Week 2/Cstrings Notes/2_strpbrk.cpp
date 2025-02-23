#include <iostream>
#include <cstring>

    // strpbrk = This function finds the first character in the string 
    //           that matches any character specified in the another string
    //
    //           It returns a pointer to the character in s1 that 
    //           matches one of the characters in s2, else returns NULL.
int main(){

    char s1[] = "ASDASJKSHF1892372";
    char s2[] = "0123456789";
    char punct[] = ",.;:";

    // We're looking for the first 's1' character in the string 's2'

    char *pMatch = strpbrk(s1, s2); // We're getting a pointer to the first matching character
    std::cout << "First matching character: " << *pMatch; // prints out the matching character
    
    char *pFail = strpbrk(s1, punct); 

    if (pFail == NULL)// Returns null if it can't find matching character
        std::cout << "\nCould not find matching character!";

    return 0;
}