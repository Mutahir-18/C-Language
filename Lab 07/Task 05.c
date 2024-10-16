Write a program to read 10 integers into an array. Then, use loops to find the
frequency of each element in the array (how many times each number occurs).

#include <stdio.h>
int main()
{
    int number[10];
    int i,j;
    int frequency[10];

    printf("Enter 10 Numbers:\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
        frequency[i]=-1;
    }
    
    for (i=0;i<10;i++)
    {
        if (frequency[i] == -1)
        {
            int count=1;
        
                for (j=i+1;j<10;j++)
                {
                    if (number[i]==number[j])
                    {
                    count++;
                    frequency[j]=0;
                    }
                }
            frequency[i]=count;
        }    
    }
    printf("---------\n");
    for(i=0;i<10;i++)
    {
        if (frequency[i]>0)
        {
            printf("%d  %d\n",number[i],frequency[i]);
        }
    }
return(0);
}
