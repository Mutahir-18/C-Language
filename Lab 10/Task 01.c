Write a recursive function that takes an array and its size as input and prints all the
elements.

#include <stdio.h>

void displayArray(int arr[], int size){

    if (size == 0) {
        return; 
    }

    displayArray(arr, size - 1);
    printf("%d", arr[size - 1]);

}


int main(){

    int size;
    printf("Enter the Number Of Size: ");
    scanf("%d", &size);

    int arr[size];
    
    for (int i = 0; i < size; i++){
        printf("Enter the Num for an array %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    displayArray(arr, size);

}
