#include <iostream>
#include <ctype.h>

    // 	isspace() = This function identifies white-space characters.
    //              there are some character considered as white spaces
    //              ex. \n, \t

int main(){

    system("cls");

    char c = ' ';

        std::cout << "Is character a white-space: ";
        if(isspace(c)){               
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    char d = '\n';

        std::cout << "Is character a white-space: ";
        if(isspace(d)){               
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    char e = '\t';

        std::cout << "Is character a white-space: ";
        if(isspace(d)){               
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    return 0;
}