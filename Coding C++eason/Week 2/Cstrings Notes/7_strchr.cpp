#include <iostream>
#include <cstring>

    // strchr() = is a predefined function used for finding the 
    //            occurrence of a character in a string.

    // The function returns a pointer to the first occurrence of the character in the string.
    // If the character is not found in the string, the function returns a null pointer.

int main(){

    char tweet[] = "Tanginamo ka gago @JhepoyDizon";

    // Finding the first occurence of '@' 
    // return a pointer to the first occurence
    // effectively gives you a substring of teh remaining portion of the string
    char *pMention = strchr(tweet, '@');

    std::cout << "The Tweet: " << tweet << '\n';
    std::cout << "Mention: " << pMention << '\n';

    pMention[0] = '*';  // will modify the tweet string since it only 
    std::cout << '\n' << tweet; // returns to a pointer to a specific part of that string
   
   if(strchr (tweet, '#') == NULL){ // will return null since the character '#' wasn't found
        std::cout << "\n\nNo occurence of the character '#' was found within the string.\n"
                  << "strchr returned NULL";
   }

    return 0;
}