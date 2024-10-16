Given an array arr[] of size N which contains elements from 0 to N-1, you need to
find one of the elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=1
Element 2=2
Element 3=3
Element 4=2
Element 5=5
Output:
Number 2 occur more than once.
Note: You cannot utilize nested loops.

#include <stdio.h>
int main()
{
    int i,size;
    int index=0;
    int x=0;
    int temp=0;
    printf("Enter the Size of an array:");
    scanf(" %d",&size);
    int arr[size];
    int arr2[size];
    for (i=0;i<size;i++)
    {
        printf("Elemenet %d: ",i+1);
        scanf(" %d",&arr[i]);
    }
    
    for (;;)
    {
        if (arr[index] == arr[x+1])
        {
            temp=arr[index];
            break;
        }
        else 
        {
            x++;
        }
        if (x>=size)
        {
            index++;
            x=0;
        }
        if (index == size)
        {
            break;
        }
    }
    
    printf("Number %d Occur more than once",temp);

    
    
}
