#include <iostream>
#include <vector>

int main(){

    //  Element access:

    //  reference operator [g]   – Returns a reference to the element at position ‘g’ in the vector
    //  at(g)    – Returns a reference to the element at position ‘g’ in the vector
    //  front()  – Returns a reference to the first element in the vector
    //  back()   – Returns a reference to the last element in the vector
    //  data()   – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

    std::cout << "\nElement access in vector:\n";
    std::vector<int> g2;
 
    for (int i = 1; i <= 10; i++){
        g2.push_back(i * 10);
    }
 
    std::cout << "\nReference operator [g] : g2[2] = " << g2[2];
 
    std::cout << "\nat : g2.at(4) = " << g2.at(4);
 
    std::cout << "\nfront() : g2.front() = " << g2.front();
 
    std::cout << "\nback() : g2.back() = " << g2.back();
 
    // pointer to the first element
    int *pPos = g2.data();
 
    std::cout << "\nThe first element is " << *pPos;

    return 0;
}