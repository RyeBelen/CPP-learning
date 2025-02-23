#include <iostream>

int main()
{
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"
    //                       0             1         2              
    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    std::cout << cars[0] << '\n';

    cars[0] = "Ford";

    std::cout << cars[0] << '\n';

/*   std::cout << cars[1] << '\n';
  std::cout << cars[2] << '\n';

    double prices[] = {5.00, 6.69, 4.20, 6.66};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';
*/
    return 0;
}