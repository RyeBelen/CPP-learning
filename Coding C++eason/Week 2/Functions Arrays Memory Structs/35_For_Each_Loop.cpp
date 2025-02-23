#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an 
    //                iterable data set
    //                If you just need to display the elements of an array
    //                for each loop works best

    
    std::string students[] = {"Rye", "Francis", "Kyle", "Encinas", "Belen"};
    int grades[] = {65, 72, 81, 93};


//    What were're  Name of   iterable
//    itterating    current   data set
//    over          element
    for(std::string name : students){
        std::cout << name << '\n';
    }

    return 0;
}