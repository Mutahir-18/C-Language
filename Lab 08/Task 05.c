Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.

#include <stdio.h>
int main()
{
    int star,i,j;
    printf("Enter the rows:");
    scanf("%d", &star);
// for Upper
    for (i=0; i<star; i++)
    {
        for (j=star -i; j>1; j--)
        {
            printf(" ");
        }
        for (j=0; j<=i; j++)
        {   
            printf("* ");
        }
        printf("\n");
    }
// for Lower

}
