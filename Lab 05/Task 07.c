Using Ternary operators write a C-Program that can identify if the last digit of the 
number is zero or non-zero. If its zero, the program should print “Last Digit is zero” if it’s 
non-zero the program should print “Last Digit non-zero

#include <stdio.h>
int main()
{
    int num,last_digit;
    printf("Enter the num:");
    scanf("%d",num);
    last_digit=num % 10;
    (last_digit==0)?printf("Last digit is Zero"):printf("Last Digit is Non-Zero");
    return (0);
}
