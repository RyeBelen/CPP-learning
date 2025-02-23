#include <iostream>

int main ()
{

    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int SIZE = 9;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "Tangina");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "ayaw");
    fill(foods + (SIZE/3)*2, foods + SIZE, "Gumana");

    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}