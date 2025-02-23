#include <iostream> 
#include <string> 
#include <thread> 
using namespace std; 

int main(){

    int a = 10;
    int *pA;
    pA = &a;
    char b;
    char *pB = &b;

    cout << "Address is" << pA << '\n'
         << "Sze of integer is " << sizeof(int) << " bytes\n"
         << "Address p+1 is " << pA+1
         << "\nValue p+1 is " << *(pA+1)
         << "\nValue b+1 is " << *(pB+1);

    return 0;
}
