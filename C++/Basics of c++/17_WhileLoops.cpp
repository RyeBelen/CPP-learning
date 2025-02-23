#include <iostream>
#include <string>

// Much like an if statement but we can repeat some code potentially an infinite amount of times.
// Can repeat a code as long as a condition remains true.
// while some condition that you set remains true, you will continue to execute some line of code.

int main()
{
    std::string name;
    int num = 1;

    bool flag;

    flag = name.empty();

    std::cout << flag << '\n';
    
    system("pause");
/*
    while(flag == true)
    {
        std::cout << "Enter your name: "; std::getline(std::cin, name);
    }

        std::cout << "Helo " << name;

*/       
    while(num < 10){
        std::cout << num << '\n';
        num *= 2;  
    }


    return 0;
}


