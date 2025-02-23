#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

// Function to convert a string to lowercase
void toLowercase(char str[]) {

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to remove whitespace from a string
void removeWhitespace(char str[]) {

/*  
    i = 0, j = 0
    
    j=0
    i=
    ['a','b','c','d','\0','\0']
*/

    int i = 0, j = 0;
    while (str[i]) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

/*
                  3
                  3                      
    ['r','a','c','e','c','a','r']

           1   2             
    ['a','a','a','a']
    ++
    --

 */

// Function to check if a string is a palindrome
bool isPalindrome(const char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100); // cstring
    
    toLowercase(str);
    removeWhitespace(str);
    
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}
