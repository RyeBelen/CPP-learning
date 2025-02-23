#include <iostream>
#include <ctype.h>

    // isxdigit() =	This function identifies the hexadecimal digit.
    //              hexadecimal number are a form of number the uses
    //              base 16: 0 0 - 9, a - f, A - F
int main(){

    char c = 'A';

        std::cout << "Is character a Hexadecimal Character: ";
        if(isxdigit(c)){               
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    char d = 'G';

        std::cout << "Is character a Hexadecimal Character: ";
        if(isxdigit(d)){               
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    char e = '0';

        std::cout << "Is character a Hexadecimal Character: ";
        if(isxdigit(e)){               
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    return 0;
}