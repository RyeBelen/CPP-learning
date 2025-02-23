#include <iostream>
#include <ctype.h>

    // 	ispunct() = This function identifies punctuation characters 
    //              (characters that are neither alphanumeric nor space).

int main(){

    system("cls");

    char c = ' ';

    while(true){  

        std::cout << "Type in any character: "; std::cin >> c;
        std::cout << "Is character a punctuation: ";
        if(ispunct(c)){             // checks if character is a punctuation
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
    }

    return 0;
}