#include <stdio.h>
#include <cstring>

using namespace std;

void toLowercase(char str[]);
void removeWhitespace(char str[]);
bool isPalindrome(char str[]);

int main() {
    while (1) {
        char str[100];
        printf("Enter a string to check if it is a palindrome.\n> ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        if (strcmp(str, "exit") == 0) {
            printf("Thank you for using the program!\n");
            return 0;
        }

        toLowercase(str);
        removeWhitespace(str);

        if (isPalindrome(str)) {
            printf("The string is a palindrome.\n\n");
        } else {
            printf("The string is not a palindrome.\n\n");
        }
    }
    return 0;
}

void toLowercase(char str[]) {
    char newStr[strlen(str) + 1];
    strcpy(newStr, str);
    for (int i = 0; newStr[i] != '\0'; i++) {
        if (newStr[i] >= 'A' && newStr[i] <= 'Z') {
            newStr[i] += 32; // Convert to lowercase via ascii
        }
    }
    printf("toLowercase: %s\n", newStr);
}

void removeWhitespace(char str[]) {
    char newStr[strlen(str) + 1];
    strcpy(newStr, str);
    int j = 0;
    for (int i = 0; newStr[i] != '\0'; i++) {
        if (newStr[i] != ' ') {
            newStr[j] = newStr[i];
            j++;
        }
    }
    newStr[j] = '\0';
    printf("removeWhitespace: %s\n", newStr);
}

// Check if a string is a palindrome. Does not account for case sensitivity.
bool isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}