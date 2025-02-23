#include <iostream>

    // Do while loop = do some block of code first,
    //                 THEN repeat again if condition is true.

int main()
{
    // Program that will ask the user to enter in a positive number

    int number;

    do{
        std::cout << "Enter in a Positive number: "; 
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is: " << number;

        /*  
        std::cout << "Enter in a Positive number: "; 
        std::cin >> number;
    
        while(number < 0){
        std::cout << "Enter in a Positive number: "; 
        std::cin >> number;
        } 
        */
    return 0;
} 