#include <iostream>
using namespace std;

void swap(string &x, string &y);

void pass(int a){
    cout << '\n' << &a;
}
int main(){

    string x = "Gatorade";
    string y = "Water";

   swap(x, y);

    cout << "x: " << x << "y:" << y;

    return 0;
}

void swapByValue(string x, string y){

 

    string temp;
    temp = x; 
    x = y; 
    y = temp; 
}

// Normally when we're passing a variable to a function, we're pasing by value.
// Creating copies of the arguments = pass by value
void swap(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}



