#include <iostream>
#include <ctype.h>

    // tolower()	This function converts uppercase alphabet to lowercase alphabet.	
    //              Returns lowercase alphabet of the corresponding uppercase alphabet

    // toupper()    This function convert lowercase alphabet to uppercase alphabet.	
    //              Returns uppercase alphabet of the corresponding lowercase alphabet

int main(){

    system("cls");
    
    char c = tolower('A');
    char d = tolower('B');
    char e = toupper('c');
    char f = toupper('d');
    char g = toupper('@');

    std::string name = "rye";
    for(int i = 0; i <= name.length(); i++ ){
        name[i] = toupper (name[i]);
    }
    std::cout << '\n' << name;
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n'; // Returns the character if it can't be converted

    return 0;
}