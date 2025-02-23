#include <iostream>
#include <cmath>

    //          if statements = do something if a condition you set is true.
    //                          If not, then don't do it.

int main()
{
    //  We'll ask a user if their age is greater than or equal to 18,
    //  then they will be allowed to enter the page, if they're under 18
    //  the program won't let them in.
    //  If you would rather it do something else use the 'else' statement.
    //  If there are other conditions you would like to check before reaching the 'else' statement
    //  use "else if".

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    bool cond = age >= 100;
    
    if(cond){
        std::cout << " You are too old for this shit ";
    }

    else if(age >=18){
        std::cout << "Welcome to the site! ";
    }

    else if(age <= 0){
        std::cout << " You haven't been born yet, forehead ";
    }

    else{
        std::cout << "get older, lul ";
    }

    return 0;
}
/*    std::cout << "Are you sure? (y or n) ";
        std::cin >> choice;
        if (choice == choice1){
            std::cout << "ok";
        }
        else{
            std::cout << "fuck off";
        */
