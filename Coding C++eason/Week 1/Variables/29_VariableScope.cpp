#include <iostream>

int myNum = 3; //global

std::string name = "skibidi";

void printNum();

int main()
{
    int myNum = 1; //local
    printNum();
    std::cout << "main: " << myNum << '\n'; //local
    //std::cout << ::myNum << '\n'; //global

    std::cout << name;
    std::cout << ::name;
    return 0;
}

void printNum(){
    int myNum = 2; //local
    std::cout << "printNum: "<< myNum << '\n'; //local
    //std::cout << ::myNum << '\n'; //global
}