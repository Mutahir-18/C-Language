Write a C program to multiply two matrices of size 3x3 and display the result matrix. Also
subtract the resultant matrix from Matrix A as well.

#include <stdio.h>
int main()
{
    int temp,i,j;
    int MatrixA[3][3]=
    {
        {4,2,1},
        {7,9,0},
        {8,4,6},
    };
    int MatrixB[3][3]=
    {
        {7,0,8},
        {2,4,5},
        {4,3,5}
    };
    int result[3][3],subtraction[3][3];

//Multiplication
    for (i=0; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
            temp = MatrixA[i][j] * MatrixB[i][j];
            result[i][j] = temp;
        }
    }

// Displaying in Tabular Form
printf("Subtractio of A form B\n");
    for (i=0; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
           printf("%d  ",result[i][j]);
        }
        printf("\n");
    }

//Subtraction of result from A
    for (i=0; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
            temp = MatrixA[i][j] - result[i][j];
            subtraction[i][j] = temp;
        }
    }

//subtraction Display
printf("Subtraction of Result form A\n");
    for (i=0; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
           printf("%d  ",subtraction[i][j]);
        }
        printf("\n");
    }
}
