Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation. Note:
The array must be dynamically resized and initially the array size will be taken by the user and
then resized by the user

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *arr;
    int n;
    int high = -999;
    printf("Enter the The Elements you want in an array: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("ARRAY %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if(arr[i] > high){
            high = arr[i];
        }
    }

    printf("The Highest in this array is: %d\n", high);

    free(arr);

    printf("Enter the The Elements you want in an array: ");
    scanf("%d",&n);
    arr = (int*)realloc(arr,n*sizeof(int));
  
    for (int i = 0; i < n; i++){
        printf("ARRAY %d: ",i+1);
        scanf(" %d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if(arr[i] > high){
            high = arr[i];
        }
    }

    printf("The Highest in this array is: %d", high);

    free(arr);

    return 0;

}
