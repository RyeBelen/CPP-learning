#include <iostream>
#include <ctype.h>

    // isaplha() =  This function identifies the alphabets from other characters
    //              checks whether a character is alphabetic or not

int main(){

    system("cls");

    char c = ' ';


        std::cout << "Type in any character: "; std::cin >> c;
        std::cout << "Is character alphabetic: ";
        if(isalpha(c)){             // checks if character is a-z or not
            std::cout << "True\n";
        }
        else{
            std::cout << "False\n";
        }
    
    

    return 0;
}