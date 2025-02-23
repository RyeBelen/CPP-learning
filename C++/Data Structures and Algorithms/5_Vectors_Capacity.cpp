#include <iostream>
#include <vector>

    //  Capacity:

    //  size()          – Returns the number of elements in the vector.
    //  max_size()      – Returns the maximum number of elements that the vector can hold.
    //  capacity()      – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    //  resize(n)       – Resizes the container so that it contains ‘n’ elements.
    //  empty()         – Returns whether the container is empty.
    //  shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    //  reserve()       – Requests that the vector capacity be at least enough to contain n elements.

int main(){

    std::cout << "Elements in the vector: \n";

    std::vector <int> v;            //  Declaring an int vector named 'v'
    for(int i = 1; i <= 5; i++){      
        v.push_back(i);             // Iterating from 1 - 5 and pushing the value of 1 to the vector
    }
    for(int i = 0; i <= 4; i++){
        std::cout << v[i] << '\n';  // Prints out the values in the vector
    }

    std::cout << "\nSize: " << v.size() << '\n';        // prints the size of the vector
    std::cout << "Capacity: " << v.capacity() << '\n';  // prints the size oif tehg storage space curerntly allocated to the vector as numebr of elements
    std::cout << "Max-size: " << v.max_size() << '\n';  // prints the max size of the vector

    // resizes the vector size to 4
    v.resize(4);
 
    // prints the vector size after resize()
    std::cout << "\nSize : " << v.size();
     

    if(v.empty()){  // checks whether a vector is empty or not;
        std::cout << "\nVector is not empty\n";
    }
    else{
        std::cout << "\nVector is not empty\n";
    }

    // Shrinks the vector
    v.shrink_to_fit();
    std::cout << "\nVector elements are: ";
    for (auto it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
 
    return 0;
}