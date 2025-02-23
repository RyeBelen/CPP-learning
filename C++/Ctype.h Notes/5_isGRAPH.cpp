#include <iostream>
#include <ctype.h>

    // isgraph() =    is going to let us know whether there is a graphical 
    //                representation for the character 

int main(){

    system("cls");

    char c = ' ';

        std::cout << "Is character graphical: ";
        if(isgraph(c)){               // checks if character is a control character
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }

    char d = '5';

        std::cout << "Is character graphical: ";
        if(isgraph(d)){               // checks if character is a control character
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
        
    return 0;
}