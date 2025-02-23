#include <iostream>

void sort(int array[], int size){

    bool isSorted = true;
    int temp;
    
    do {
        for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i - 1; j++){
                if(array[j] > array[j + 1]){
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    isSorted = false;
                }
            }
        }
    }while(isSorted == false);
}

int main (){
    
    int array[] = {10, 2, 3 ,6 ,1, 7, 5, 8, 4, 9};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        if (element % 2 == 0)
        std::cout << element << " ";
    }
    return 0;
}
