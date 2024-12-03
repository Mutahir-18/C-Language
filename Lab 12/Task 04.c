Write a program that ask the user to enter the total 'N' no of characters in user's name {First
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that has
already been taken from the user before

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *Fname;
    char *Lname;
    char *fullName;
    int n,N;
    printf("Enter how many Character You wanted to Enter in your First name: ");
    scanf("%d", &n);
    Fname = (char*)malloc((n + 1) * sizeof(char*));
    printf("Enter the your First name: ");
    scanf(" %s", Fname);

    printf("Enter how many Character You wanted to Enter in your Last name: ");
    scanf("%d", &N);
    Lname = (char*)malloc((n + 1) * sizeof(char*));
    printf("Enter the your Last name: ");
    scanf(" %s", Lname);

    fullName = (char*)malloc((n+N+1) * sizeof(char));
    fullName = strcat(Fname,Lname);
    printf("%s",fullName);

    free(fullName);
    free(Lname);
    free(Fname);

    return 0;

}
