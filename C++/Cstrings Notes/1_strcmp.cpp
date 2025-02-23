#include <iostream>
#include <cstring>

    // string comparison = compares the two strings lexicographically means it 
    // starts comparison character by character starting from the first character 
    // until the characters in both strings are equal or a NULL character is encountered.
    //
    // strcmp return values 
    // 
    //  < 0 if the 1st non-matching char has a lower ascii value in s1 than s2
    //
    //    0 if the strings are equal
    //
    //  > 0 if the 1st non-matching char has a higher ascii value in s1 than s2

void stringcomparison(char string1[], char string2[]){

    if (strcmp(string1, string2) == 0){
        std::cout << "\nString 1 and String 2 are equal\n";
        std::cout << strcmp(string1, string2);
    }
    else if (strcmp(string1, string2) < 0){
        std::cout << "\n\nString not equal! String 1 is lesser than String 2\n";
        std::cout << strcmp(string1, string2);
    }
    else if (strcmp(string1, string2) > 0){
        std::cout << "\n\nString not equal! String 1 is greater than String 2\n";
        std::cout << strcmp(string1, string2);
    }
}

int main(){

    system("cls");

    char s1[] = "ABCD"; // Both strings are equal
    char s2[] = "ABCD"; 
    stringcomparison(s1, s2);

    char s3[] = "ABCD"; // ascii value of the first non matching character 'D' is 68
    char s4[] = "ABCE"; // ascii value of the first non matching character 'E' is 69
    stringcomparison(s3, s4);

    char s5[] = "ABCD"; // ascii value of the first non matching character 'D' is 68
    char s6[] = "ABCC"; // ascii value of the first non matching character 'C' is 67
    stringcomparison(s5, s6);

    return 0;
}