#include <iostream>
#include <vector>

// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Use when there is a clear benefit
//           Replace with 'using' (work betther w/ templates)

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int; 
using D = double;

int main (){

    text_t firstName = "Rye";
    number_t age = 19;
    D balance = 10000; 

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;
    std::cout << "Balance: " << balance << std::endl;

    return 0;
}