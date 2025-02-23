#include <iostream>
#include <ctype.h>

    // isdigit() =  This function identifies numbers in character

int main(){

    system("cls");

    char c = ' ';

    while(true){  

        std::cout << "Type in any character: "; std::cin >> c;
        std::cout << "Is character a digit: ";
        if(isdigit(c)){             // checks if character is 0-9
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
    }

    return 0;
}