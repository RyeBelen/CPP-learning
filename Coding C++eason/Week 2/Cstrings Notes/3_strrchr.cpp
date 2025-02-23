#include <iostream>
#include <cstring>

    // strrchr =    This function returns a pointer to the last occurrence of a character in a string. 

int main(){

    char s[] = "data, within, commas";
    char *comma = strrchr(s, ',');
    std::cout << comma;

    // initializing variables
    char string[] = "Rye Francis";
    char ch = 'F';
    char *pVal;
 
    // Use of strrchr()
    // returns "rancis"
    pVal = strrchr(string, ch);
 
    std::cout << "\nString after last " << *pVal << ": "<< pVal;
    char ch2 = 'm';
 
    // Use of strrchr()
    // returns null
    pVal = strrchr(string, ch2);
 
    std::cout << "\n\nString after last " << ch2 << ": ";
    if (pVal == NULL) // test for null
        std::cout << "NULL";

    return 0;
}