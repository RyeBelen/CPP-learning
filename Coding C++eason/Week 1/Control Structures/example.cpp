// give boilerplate code

#include <iostream>
using namespace std;



void func(int &x);

int main()
{
    int x = 1;
    
    func(x);

    cout << x;


    return 0;
}


