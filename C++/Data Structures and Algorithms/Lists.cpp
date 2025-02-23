#include <iostream>
#include <list>

    // list = Are sequence containers that allow non contaigous memory allocations
    //        Compared to vectors, list has slow traversal, but once a position has been found
    //        insertion and deletion are quick  

void showist(std::list <int> g){  // This function prints out the entire list
    
    std::list <int> :: iterator it; // An iterator is an object that can iterate over elements in a C++ Standard Library container and provide access to individual elements.
    for (it = g.begin(); it != g.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << '\n';
}

int main (){

    system("cls");

    std::list <int> gqlist1, gqlist2;
    for (int i = 0; i < 10; i++){       
        gqlist1.push_back(i * 3);       // Inserting elements at the back of the list
        gqlist2.push_front(i * 3);      // Inserting elements at the front of the list
    }

    std::cout << "First list: ";        
    showist(gqlist1);                   // invoking the function that prints out the list

    gqlist1.pop_front();                // .pop_front function removes elements at the front of the list
    std::cout << "\nList after deletion from front: ";
    showist(gqlist1);

    gqlist1.pop_back();                 // .pop_back function removes elements at the back of the list
    std::cout << "\nList after deletion from back: ";
    showist(gqlist1);

    gqlist1.reverse();                  // .reverse function reverse the content of the list
    std::cout << "\nList after reversal: ";
    showist(gqlist1);

    gqlist1.sort();                     // .sort function sorts the order of a list
    std::cout << "\nList after sorting: ";
    showist(gqlist1);

    gqlist1.remove(6);                                  // Remove any element from the list
    std::cout << "\nAfter using the .remove funtion to remove '6': ";   // We pass the value of the element to be deleted
    showist(gqlist1);

    std::cout << "\nSize of list before clearing: " << gqlist1.size();
    gqlist1.clear();                                    // .clear functions Clears the entire list
    std::cout << "\n\nSize of list after clearing: " << gqlist1.size();  // .size function gets the size of the list

    return 0;
}