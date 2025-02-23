#include <iostream>
#include <cstring>

    // strstr = fins the  first occurence of one string in another string
    //          returns a pointer to the first character in the match
int main(){

    char haystack[] = "This is the way\n";
    char needle[] = "the";

    // we're going to find "the" in the haystack string

    char *the = strstr(haystack, needle);

    std::cout << "the: " << the;

    char now[] = "now";

    char *fail = strstr(haystack, now);

    if(fail == NULL){
        std::cout << "failed to find string\n";
    }

        // Take any two strings
    char s1[] = "Mama mo blue";
    char s2[] = "mo";
    char* p;
  
    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
  
    // Prints the result
    if (p) {
        std::cout << "String found\n"
                  << "First occurrence of string '" << s2 << "' in '" << s1 << "' is: " << p; 
    } else
        std::cout << "String not found\n";
  
    // REPLACE A STRING


    // Take any two strings
    char s3[] = "\nFun with STL";
    char s4[] = "STL";
   char* q;
    // Find first occurrence of s2 in s1
    q = strstr(s3, s4);
  
    // Prints the result
    if (q) {
        strcpy(q, "Strings");
        std::cout << s3;
    } else
    std::cout << "String not found\n";
  
    return 0;
}