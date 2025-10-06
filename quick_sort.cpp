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
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1; 
}