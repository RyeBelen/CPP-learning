#include <iostream>

int main(){

    int a = 1;
    int *p = &a;

    std::cout << p << '\n';
    std::cout << p << '\n';

    p = nullptr;

    std::cout << p << '\n';

    return 0;
}