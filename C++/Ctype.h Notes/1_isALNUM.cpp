#include <iostream>
#include <ctype.h>

    // ctype.h = contains inbuilt functions to handle characters in C/C++ respectively.

    // isalnum() =  This function identifies the alphanumeric characters
    //              Alphanumeric means that a characte is a letter like A-Z
    //              or it's a number like 0-9

int main(){

    system("cls");

    char c = ' ';

    while(true){  

        std::cout << "Type in any character: "; std::cin >> c;
        std::cout << "Is character alphanumeric: ";
        if(isalnum(c)){             // checks if character is a-z or 0-9
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
    }

    return 0;
}