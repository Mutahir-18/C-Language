#include <stdio.h>
int main()
{
    int n,i,a=0,b=1,next;
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
        printf("A Prime Number\n");
        printf("Fibonacci Series: %d, %d", a, b);
        for (int i = 3; i <= n; i++) 
        {
        next= a + b;
        printf(", %d", next);
        a = b;
        b = next;
        }
        break;
        }
    }
    return(0);
}
