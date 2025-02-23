#include <iostream>

    // For loop is a loop that will execute a block of code a specified amount of times
    // Better in situation when you only need to repeat code a certain amount of times
int main ()
{
    // There up to 3 statements that we can add

//      sort of a      stopping    increment or
//      counter,       condition,  decrement counter, you can skip iterations so instead of putting index++ you can put index +=2
/*    for(int index = 1; index <= 10000; index++){
        std::cout << index << '\n';
    }

    std::cout << "Hatdog ka!\n";
*/

// Given the integer N, the task is to print all the numbers less than N, which are divisible by 3 and 5.

    int n;

    std::cout << "Input the value of n: "; std::cin >> n;
    std::cout << "The numbers that are divisible by 3 and 5 are: ";
    for(int i = 0; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            std::cout << i << " ";
        }
    }

    return 0;
}