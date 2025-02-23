#include <iostream>

int main(){

    system("cls");

    int x = 5;
    int *pX = &x;

    *pX = 6; // changes the value of x to 6
    int **pY = &pX;
    int ***pZ = &pY;

    std::cout << "Adresses of the following:\n"
              << "X     = " << &x << '\n'
              << "*pX   = " << &pX << '\n'
              << "**pY  = " << &pY << '\n'
              << "***pZ = " << &pZ<< '\n';

    std::cout << "\nDereferencing pX = " << *pX << '\n'
              << "Dereferencing pY Once  = " << *pY << '\n' // Adress of X
              << "Dereferencing pY Twice = " << *(*pY) << '\n' // Value of X
              << "Dereferencing pZ Once  = " << *pZ << '\n' // Adress of Px
              << "Dereferencing pZ Twice = " << *(*pZ) << '\n' // Adress of X
              << "Dereferencing pZ Thrice= " << *(*(*pZ)) << '\n' // Value of X
              << "pZ = " << pZ << '\n';

    ***pZ = 10;
    std::cout << "\nValue of X = " << x << '\n';

    **pY = 15;
    std::cout << "\nValue of X = " << x << '\n';

    *pX = 20;
    std::cout << "\nValue of X = " << x << '\n';

    return 0;
}