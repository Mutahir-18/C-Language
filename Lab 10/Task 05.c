Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order.

#include <stdio.h>
void bubbleSort(int arr[], int n) {

    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, n - 1);
}

