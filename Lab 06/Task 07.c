
#include <stdio.h>
int main ()
{
    int i;
    for (i=1;i<=6;i++)
    {
        if (i==1 || i==6)
        printf("%c %c %c %c %c\n",i+64,i+65,i+66,i+67,i+68);
        else 
        printf("%c       %c\n",i+64,i+68);
    }
    return (0);
}
