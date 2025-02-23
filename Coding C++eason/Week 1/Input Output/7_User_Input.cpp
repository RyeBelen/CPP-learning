#include <iostream>
#include <string>

// cout << (insertions operator)
// cin  >> (extraction operator)

int main (){
    
    // Let's ask a user for their age and name.

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your  name?: ";
//  std::cin >> name;
    std::getline(std::cin >> std::ws, name); // =   the function 'getline' is used to be able to 
//                                                  read strings that contain spaces
//                                              =   'ws' will eliminate any newline character or 
//                                                  any white spaces before the 'getline' funtion
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old";

    return 0;
}


