#include <iostream>
using namespace std;

void hello(string name);


int main()
{
    // function = a block of reusable code
    string name = "Haruka";
    hello(name);
    hello(name);
    hello(name);
    hello(name);
    hello(name);

    return 0;
}

void hello(string name){
    cout << "Hello " << name << '\n';
}

