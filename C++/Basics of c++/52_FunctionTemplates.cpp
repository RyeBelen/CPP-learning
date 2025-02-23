#include <iostream>
template <typename T, typename U>

    // function templates = describes what a function looks like.
    //                      can be used to generate as many overloaded functions
    //                      as needed. each using different data types
/*
int max(int x, int y){
    return (x > y) ? x : y;
}
double max(double x, double y){
    return (x > y) ? x : y;      // Alot of work for basically the same function
}                                // only difference is it accepts different data types
char max(char x, char y){
    return (x > y) ? x : y;
}

int max(int x, int y){
    return (x > y) ? x : y;
}
*/

    // Using the 'auto' function the compiler will deduce 
    // what the return type should be

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){

    std::cout << max(1, 2) << '\n';


    return 0;
}