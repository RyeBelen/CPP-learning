#include <iostream>
#include <vector>

int main(){

    // Iterators:

    //  begin()     – Returns an iterator pointing to the first element in the vector
    //  end()       – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    //  rbegin()    – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    //  rend()      – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    //  cbegin()    – Returns a constant iterator pointing to the first element in the vector.
    //  cend()      – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    //  crbegin()   – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    //  crend()     – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    
    std::vector<int> g1;

    std::cout << "\nIterators in vector:\n\n";
 
    for(int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    std::cout << "Output of begin and end: ";
    for(auto i = g1.begin(); i != g1.end(); ++i){
        std::cout << *i << " ";
    }
 
    std::cout << "\nOutput of cbegin and cend: ";
    for(auto i = g1.cbegin(); i != g1.cend(); ++i){
        std::cout << *i << " ";
    }
 
    std::cout << "\nOutput of rbegin and rend: ";
    for(auto ir = g1.rbegin(); ir != g1.rend(); ++ir){
        std::cout << *ir << " ";
    }
 
    std::cout << "\nOutput of crbegin and crend : ";
    for(auto ir = g1.crbegin(); ir != g1.crend(); ++ir){
        std::cout << *ir << " ";
    }

    return 0;
}