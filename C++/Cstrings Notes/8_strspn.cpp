#include <iostream>
#include <cstring>

    // strspn() function returns the length of the initial substring of 
    //          the string pointed to by str1 that is made up of only those character contained in the string pointed to by str2. 
int main(){

    char s1[] = "202211065RFKBLN";
    char nums[] = "0123456789"; // we're gonna try to determine how far in the string we have to go
                                // before we find the first character that is not in this set of characters here

    int position = strspn(s1, nums);
    std::cout << "Pos: " << position << '\n';

    char *pRemaining = s1 + position; // pointer to the remaining part of the string

    std::cout << "Remaining: " << pRemaining << '\n';
    return 0;
}