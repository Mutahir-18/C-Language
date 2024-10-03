#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the Valid and Positive number:");
    scanf(" %d",&n);
    if (n<=1)
    {
        printf("Not a Prime Number");
    }
    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
        printf("Not Prime Number");
        break;
        }
        else
        { 
        printf("A Prime Number");
        break;
        }
    }
    return(0);
}
