#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter your name ";
    std::getline(std::cin, name);

    // The length method will give you the length of the string

   if(name.length() > 12){
        std::cout << "Your name can't be greater than 12 characters";
   }
   else{
        std::cout << "Welcome " << name;
   }

    // The Empty method will return if the string is empty or not

    if(name.empty()){
        std::cout << "Input a fucking name";
    }
    else{
        std::cout << "good";
    }

    // This will remove the input of the string

    name.clear();

    std::cout << "Hello" << name;

    // append a string to another string

    name.append("@Gmail.com");

    std::cout << "Your username is now " << name;  

    // Return a character at a given position within a string

    std::cout << name.at(0);

    // We can isnert a character at a given postion

    name.insert(0, "@");

    // We can find a certain caharacter

    name.find(' ');

    // We can erase a portion of a string

    name.erase(0, 3);
    
    return 0;
    
}