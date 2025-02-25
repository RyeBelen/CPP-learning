#include <iostream>

int main(){

    int a;
    int *p = &a;

    std::cout << p << '\n';
    std::cout << p + 10 << '\n';


    return 0;
}