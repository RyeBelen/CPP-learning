#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;


int main(){

    vector<int> arr = {5,2, 3, 29, 34, 4, 78,1,9};

    cout << setw(20) << "Before Sorting: ";
    for (int num : arr){
        cout << num << ", ";
    }
    cout << '\n';

    sort(arr.begin(), arr.end());

    cout << setw(20) << "After Sorting: ";
    for (int num : arr){
        cout << num << ", ";
    }
    cout << '\n';



    return 0;
}