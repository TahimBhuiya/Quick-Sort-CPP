// Quick Sort in C++
// This program implements the Quick Sort algorithm to sort an array in ascending order.
// It uses the divide-and-conquer approach by partitioning the array around a pivot element.
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


// Partition function: places the pivot in the correct position
// and arranges smaller elements to the left and greater elements to the right.
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of the smaller element

    // Traverse through the array and rearrange elements
    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap current element with the element at index i
        }
    }
    // Place the pivot in its correct sorted position
    swap(arr[i + 1], arr[high]);
    return i + 1;// Return pivot index
}

// Recursive Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(arr, low, high);


        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
}