Which loop system would be better for user input. Justify your answer by creating a program that 
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value
do.....While Loop.

#include <stdio.h>
int main()
{
    int n,sum=0;
    do
    {
        printf("Enter the value:");
        scanf("%d",&n);
        sum=sum+n;
    }
    while (n!=0);
    printf("The sum is %d:",sum);
    return(0);
}
