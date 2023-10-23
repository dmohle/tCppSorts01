#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place, no need to check them
        for (int j = 0; j < n-i-1; j++) {
            // Traverse the array from 0 to n-i-1
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Move the boundary of the unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }
}



int main() {
    int myArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(myArray)/sizeof(myArray[0]);
    bubbleSort(myArray, n);
    cout << "This is the result of the Bubble Sort: \n";
    for (int i=0; i < n; i++)
        cout << myArray[i] << " ";
    cout << "\n\n";

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n02 = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n02);
    cout << "This is the result of the selection sort: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n\n";
    return 0;




    return 0;
}

