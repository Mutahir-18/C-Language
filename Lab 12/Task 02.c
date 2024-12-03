Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped(). 

#include <stdio.h>
#include <stdlib.h>

void swapped(int *aPtr, int *bPtr, int *cPtr){
   int temp = *aPtr;  
    *aPtr = *bPtr;     
    *bPtr = *cPtr;     
    *cPtr = temp;

    printf("%d %d %d",*aPtr, *bPtr, *cPtr);
}

int main()
{
    int a = 3;
    int b = 5;
    int c = 8;

    swapped(&a, &b, &c);

    return 0;

}
