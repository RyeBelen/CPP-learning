#include <iostream>

int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){  // Technically a linear search
        if(array[i] == element){
            return i;
        }
    }
    return -1;  // Sentinel value = means something wasn't found.
}

int main()
{
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int mynum;

    std::cout << "Enter element to to search for: \n"; std::cin >> mynum;

    index = searchArray(numbers, size, mynum);

    if(index != -1){
    std::cout << "My number is at index " << index;
    }
    else{
        std::cout << mynum << " is not in the array";
    }
    return 0;
}