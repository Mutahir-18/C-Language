Write a program that takes a string as input from the user and counts the frequency
of each vowel (A, E, I, O, U) in the string
Input: Hello World
Output: a=0, e=1, I=0, o=2, u= 0

#include <stdio.h>
int main()
{
    char arr[100];
    int a_c=0,e_c=0,i_c=0,o_c=0,u_c=0,i;
    printf("Enter the Word or Text:");
    gets(arr);
    for (i=0; arr[i] != '\0';i++)
    {
        switch (arr[i])
        {
            case 'A':
            case 'a':
            a_c++;
            break;
            case  'E':
            case 'e':
            e_c++;
            break;
            case 'I':
            case 'i':
            i_c++;
            break;
            case 'O':
            case 'o':
            o_c++;
            break;
            case 'U':
            case 'u':
            u_c++;
            break;
        }
    }
    printf(" a= %d\n e= %d\n i= %d\n o= %d\n u= %d",a_c,e_c,i_c,o_c,u_c);
}
