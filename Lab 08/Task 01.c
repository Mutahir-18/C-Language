Write a C program that generates a sequence of prime numbers within a given range using
nested loops.

#include <stdio.h>
int main()
{
    int range;
    int j;
    int i; 
    printf("Enter the Range of Numbers: ");
    scanf("%d", &range);

    for (i = 2; i<=range; i++)
    {
        for (j = 2; j<i; j++)
        {
            if (i % j == 0)
                {
                    break;
                }
        }

        if (j == i)
        {
            printf("%d, ",i);
        }
    }
}
