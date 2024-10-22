Write a program that calculates the length of a string using a pointer. Do not use the
built-in strlen() or sizeof() function. After length calculation reverse the string using
the same pointers.

#include <stdio.h>
int main()
{
    int i,length=0;
    char *ptr[100];
    int *ptr1;
    char text[100];
    printf("Enter the text Here:");
    scanf("%s", text);
    for (i = 0; text[i] != '\0'; i++)
    {
        ptr[i] = text + i;
        length++;
    }
    ptr1 = &length;
    printf(" The Length is:%d\n", *ptr1);

    for (i = 0; i < length; i++)
    {
        text[length--] = *ptr[i];
    }
    
    printf("The Reversed Text is:");
    for (i = 0; i < length ; i++)
    {
        printf("%c", text[i]);
    }
}
