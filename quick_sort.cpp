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

        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
}