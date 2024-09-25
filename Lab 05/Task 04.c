Write a nested if statement for the decision diagrammed in the 
accompanying flowchart. Use a multiple-alternative if statements for 
intermediate decisions where possible

#include <stdio.h>
int main()
{
    int ph;
    printf("Enter the PH level:");
    scanf("%d",&ph);
    if (ph>7)
    {
        if (ph<12)
        {
            printf("Alkaline");
        }
        else 
        {
            printf("Very Alkaline");
        }

    }
    else if (ph==7)
    {
        printf("neutral");
    }   
    else if (ph>2)
    {
        printf("Acidic");
    }
    else 
    {
        printf("very acidic");
    }
}
