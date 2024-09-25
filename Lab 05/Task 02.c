The weekday is true if it is a weekday, and the vacation is true if we are on vacation. We sleep in if it is 
not a weekday or we're on vacation. Print true if we sleep in.

#include <stdio.h>
int main()
{
    char vacation,weekday;
    printf("Enter that if we are on Weekday: T for True and F for False:");
    scanf(" %c",&weekday);
    printf("Enter that if we are on vacation: T for True and F for False:");
    scanf(" %c",&vacation);
    if (weekday=='F' || vacation=='T')
    {
       printf("True");
    }
    else 
    {
        printf("false");
    }
    return(0);
}
