#include <iostream>
using namespace std;

// Function to sort numeric array (Bubble Sort)
void sortNumeric(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort string array (Simple Alphabetical Bubble Sort)
void sortString(string arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int numArr[] = {5, 3, 8, 1, 2};
    string strArr[] = {"banana", "apple", "cherry", "mango"};

    int numSize = sizeof(numArr) / sizeof(numArr[0]);
    int strSize = sizeof(strArr) / sizeof(strArr[0]);

    sortNumeric(numArr, numSize);
    sortString(strArr, strSize);

    cout << "Sorted Numeric Array: ";
    printArray(numArr, numSize);

    cout << "Sorted String Array: ";
    printArray(strArr, strSize);

    return 0;
}
