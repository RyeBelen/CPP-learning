#include <iostream>

int main()
{
    //std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << "The elements in the grades array are :\n";
    for(int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}