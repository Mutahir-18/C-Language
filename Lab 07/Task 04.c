Write a program which identifies if a given string is a palindrome using arrays.

#include<stdio.h>
#include <string.h>
int main()
{
    char text[100];
    char reverse[100];
    printf("Enter the text:");
    gets(text);
     int size = strlen(text);
    int index = size - 1;
    for ( int i = 0; i < size; i++)
    {
        reverse[index--] = text[i];
    } 

    for ( int i = 0; i < size; i++)
    {
        if (reverse[i] == text[i])
        {
            printf("Its a Palindrome");
            break;
        }
        else
        {
            printf("Its not a Palindrome");
            break;
        }
    }

}
