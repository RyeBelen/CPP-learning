#include <iostream>

int main(){
    double temp;
    char uni;

    std::cout << "************ Temperature converter *************\n";
    std::cout << "\nF = Fahrenheit\n" << "C = Celsius\n";
    std::cout << "\nWhat would you like to convert to: "; std::cin >> uni;

        if(uni == 'F' || uni == 'f'){
            std::cout << "Pls input temperature in Celsius: "; std::cin >> temp;
            temp = temp * (1.8) + 32.0;
            std::cout << "The Temperature is " << temp << "F\n"; 
        }
        else if(uni == 'C' || uni == 'c'){
            std::cout << "Pls input temperature in Fahrenheit: "; std::cin >> temp;
            temp = (temp - 32) / 1.8;
            std::cout << "The Temperature is " << temp << "C\n"; 
        }
        else{
            std::cout << "\nInput a valid unit dumbo\n";
        }

    std::cout << "\n************************************************";

    
    return 0;
}