#include <iostream>



int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){  // Technically a linear search
        if(array[i] == element){
            return i;
        }
    }
    return -1;  // Sentinel value = means something wasn't found.
}

int main()
{
    std::string foods[] = {"Pizza", "Hatdog", "Ice Cream", "Hamburger", "Spaghetti" };
    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to to search for: \n"; getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
    std::cout << "My number is at index " << index;
    }
    else{
        std::cout << myFood << " is not in the array";
    }
    return 0;
}