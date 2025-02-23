#include <iostream>
#include <vector>

int main(){

    // Modifiers: 

    //  assign()        – It assigns new value to the vector elements by replacing old ones
    //  push_back()     – It push the elements into a vector from the back
    //  pop_back()      – It is used to pop or remove elements from a vector from the back.
    //  insert()        – It inserts new elements before the element at the specified position
    //  erase()         – It is used to remove elements from a container from the specified position or range.
    //  swap()          – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    //  clear()         – It is used to remove all the elements of the vector container
    //  emplace()       – It extends the container by inserting new element at position
    //  emplace_back()  – It is used to insert a new element into the vector container, the new element is added to the end of the vector

    std::cout << "\n\nModifiers in vector:\n\n";

    // Assign vector
    std::vector<int> v2;
 
    // fill the array with 10 five times
    v2.assign(5, 10);
 
    std::cout << "The vector elements are: ";
    for (int i = 0; i < v2.size(); i++)
        std::cout << v2[i] << " ";
 
    // inserts 15 to the last position
    v2.push_back(15);
    int n = v2.size();
    std::cout << "\nThe last element is: " << v2[n - 1];
 
    // removes last element
    v2.pop_back();
 
    // prints the vector
    std::cout << "\nThe vector elements are: ";
    for (int i = 0; i < v2.size(); i++)
        std::cout << v2[i] << " ";
 
    // inserts 5 at the beginning
    v2.insert(v2.begin(), 5);
 
    std::cout << "\nThe first element is: " << v2[0];
 
    // removes the first element
    v2.erase(v2.begin());
 
    std::cout << "\nThe first element is: " << v2[0];
 
    // inserts at the beginning
    v2.emplace(v2.begin(), 5);
    std::cout << "\nThe first element is: " << v2[0];
 
    // Inserts 20 at the end
    v2.emplace_back(20);
    n = v2.size();
    std::cout << "\nThe last element is: " << v2[n - 1];
 
    // erases the vector
    v2.clear();
    std::cout << "\nVector size after erase(): " << v2.size();
 
    // two vector to perform swap
    std::vector<int> v3, v4;
    v3.push_back(1);
    v3.push_back(2);
    v4.push_back(3);
    v4.push_back(4);
 
    std::cout << "\n\nVector 3: ";
    for (int i = 0; i < v3.size(); i++)
        std::cout << v3[i] << " ";
 
    std::cout << "\nVector 4: ";
    for (int i = 0; i < v4.size(); i++)
        std::cout << v4[i] << " ";
 
    // Swaps v1 and v2
    v3.swap(v4);
 
    std::cout << "\nAfter Swap \nVector 3: ";
    for (int i = 0; i < v3.size(); i++)
        std::cout << v3[i] << " ";
 
    std::cout << "\nVector 4: ";
    for (int i = 0; i < v4.size(); i++)
        std::cout << v4[i] << " ";

    return 0;
}