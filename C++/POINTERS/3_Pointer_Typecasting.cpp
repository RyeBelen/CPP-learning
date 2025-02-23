#include <iostream>

int main(){

    system("cls");
    int a = 1025;
    int *pA = &a;

    std::cout << "The size of integer is " << sizeof(int) << " Bytes\n"
              << "Address = " << pA << ", value = " << *pA << '\n'
              << "Address = " << pA + 1 << ", value = " << *(pA + 1) << '\n';

    double *pB;
    pB = (double*)pA; // typecasting

    std::cout << "The size of char is " << sizeof(char) << " Bytes\n"
              << "Address = " << pB << ", value = " << *pB << '\n'
              << "Address = " << pB + 1 << ", value = " << *(pB + 1);
    
    void *p0; // Void pointer - Generic pointer
    p0 = pA;
    std::cout << "\nAdress = " << p0;
    return 0;
}