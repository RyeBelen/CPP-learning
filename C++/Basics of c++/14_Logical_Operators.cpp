#include <iostream>

//  && = check if two conditions are true
//  || = check if at least one condition is true
//   ! = reverses the logical state of its operand

int main()
{
    int temp;
    bool sunny = true;
/*  
    USING && operator

    std::cout << " Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is normal!";
    }
    else{
        std::cout << "The temperature is bad!";
    }
*/
//  USING || operator

    std::cout << " Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!" << std::endl;
    }
    else{
        std::cout << "The temperature is normal!" << std::endl;
    }

    if(!sunny){             // The logical operator ! was used to reverse the value of sunny from true to false
        std::cout << "It is cloudy outside";
    }
    else {
        std::cout << "It is sunny Outside";
    }
    
    return 0;
}   