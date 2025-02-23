#include <iostream>

int main(){

    system("cls");

    int Array[] = {1, 2, 3, 4, 5};

    std::cout << "Prints the Adress of the first Element = " << Array << '\n'
              << "Prints the Adress of the first Element = " << &Array[0] << '\n'   
              << "\nPrints the Value of the first Element = " << Array[0] << '\n'
              << "Prints the Value of the first Element = " << *Array << '\n';

    int *pArray = Array;
    
    std::cout << "\npArray Dereferenced = " << *pArray << '\n'
              << "Address in pArray     = " << pArray << '\n';


    return 0;
}