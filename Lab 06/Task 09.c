#include <stdio.h>
int main()
{
    int i;
    for (i=1;i<=5;i++)
    {
        if (i==1 || i==5)
        {
            printf("* * * * *\n");
        }
        else if (i%2==0)
        {
            printf("  *   * \n");
        }
        else if (i==3)
        {
            printf("    *  \n");
        }
    }
    return(0);
}
