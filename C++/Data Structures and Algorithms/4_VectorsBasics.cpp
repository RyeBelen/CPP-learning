#include <iostream>
#include <vector>

    //  Vectors are the same as dynamic arrays with the ability to resize itself automatically 
    //  when an element is inserted or deleted, with their storage being handled automatically 
    //  by the container. 
    //  Vector elements are placed in contiguous storage so that they can be 
    //  accessed and traversed using iterators. 
    //  In vectors, data is inserted at the end. 
    //  Inserting at the end takes differential time, as sometimes the array may need to be 
    //  extended. 
    //  Removing the last element takes only constant time because no resizing happens. 
    //  Inserting and erasing at the beginning or in the middle is linear in time.

int main(){

    std::vector <int> v;            //  Declaring an int vector named 'v'
    for(int i = 1; i <= 5; i++){      
        v.push_back(i);             // Iterating from 1 - 5 and pushing the value of 1 to the vector
    }
    std::cout << "Elements in the vector: \n";
    for(int i = 0; i <= 4; i++){
        std::cout << v[i] << '\n';  // Prints out the values in the vector
    }

    std::cout << "First element of the vector: " << v.front() << '\n';      // prints the first element of a vector
    std::cout << "Last element of the vector: " << v.back() << '\n';        // prints the first element of a vector
    std::cout << "Element at 3rd index of the vector: " << v.at(3) << '\n'; // prints the the vector in the given index

    return 0;
}