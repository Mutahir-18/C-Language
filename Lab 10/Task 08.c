Write a recursive function linearSearch that takes an array, its size, the target element
to search for, and the current index. It checks if the target is at the current index and
continues searching in the subsequent indices until it either finds the target or exhausts
the array.

  
#include <stdio.h>
int linearSearch(int arr[], int size, int target, int index) {

    if (index == size)
        return -1;

    if (arr[index] == target)
        return index;

    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}




