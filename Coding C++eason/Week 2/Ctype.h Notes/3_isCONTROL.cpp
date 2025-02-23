#include <iostream>
#include <ctype.h>

    // iscntrl() =  This function identifies the control characters(\n, \b, \t, \r).
    //              a control character is a character that is not printable

int main(){

    system("cls");

    char c = '\n';

        std::cout << "Is character control character: ";
        if(iscntrl(c)){               // checks if character is a control character
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }


    return 0;
}