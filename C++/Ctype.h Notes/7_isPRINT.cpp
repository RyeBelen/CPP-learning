#include <iostream>
#include <ctype.h>

    // isprint() =  This function identifies the printable characters.
    //              printable character are considered things like 
    //              letters, numbers, punctuations and spaces  

int main(){

    system("cls");

    char c = ' ';

        std::cout << "Is character printable: ";
        if(isprint(c)){               // checks if character is printable
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    char d = '\n';

        std::cout << "Is character printable: ";
        if(isprint(d)){               // checks if character is printable
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    return 0;
}