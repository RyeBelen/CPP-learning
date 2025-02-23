#include <iostream>
#include <ctype.h>

    // islower() =  This function identifies the lowercase alphabets.
    // isupper() =	This function identifies the uppercase alphabets.

int main(){

    system("cls");

    char c = ' ';

    while(true){  

        std::cout << "Type in any character: "; std::cin >> c;
        std::cout << "Is character in lowercase: ";
        if(islower(c)){             // checks if character is in lowercase
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
        std::cout << "Is character in uppercase: ";
        if(isupper(c)){             // checks if character is in uppercase
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
    }

    return 0;
}