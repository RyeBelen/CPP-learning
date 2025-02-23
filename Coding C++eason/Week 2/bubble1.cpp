#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n-1;i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    vector<int> arr = {5,2, 3, 29, 34, 4, 78,1,9};

    cout << setw(20) << "Before Sorting: ";
    for (int num : arr){
        cout << num << ", ";
    }
    cout << '\n';

    bubbleSort(arr);

    cout << setw(20) << "After Sorting: ";
    for (int num : arr){
        cout << num << ", ";
    }
    cout << '\n';



    return 0;
}