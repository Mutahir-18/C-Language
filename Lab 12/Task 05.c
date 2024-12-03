Appends RollNo to the Full Name

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *Fname;
    char *Lname;
    char *fullName;
    char *rollNo;
    int n, N, len;

   
    printf("Enter how many characters you want to enter in your First name: ");
    scanf("%d", &n);
    Fname = (char *)malloc((n + 1) * sizeof(char)); 
    printf("Enter your First name: ");
    scanf("%s", Fname);

    
    printf("Enter how many characters you want to enter in your Last name: ");
    scanf("%d", &N);
    Lname = (char *)malloc((N + 1) * sizeof(char)); 
    printf("Enter your Last name: ");
    scanf("%s", Lname);

    
    fullName = (char *)malloc((n + N + 1) * sizeof(char)); 
    strcpy(fullName, Fname);   
    strcat(fullName, Lname); 
    printf("Full name: %s\n", fullName);

    
    free(Fname);
    free(Lname);

    rollNo = (char *)malloc(100 * sizeof(char)); 
    printf("Enter Your Roll Number: ");
    scanf("%s", rollNo);


    len = strlen(rollNo) + strlen(fullName) + 1;
    fullName = (char *)realloc(fullName, len * sizeof(char));
    strcat(rollNo, fullName); 
    strcpy(fullName, rollNo); 

    printf("Full name with Roll Number: %s\n", fullName);

    free(fullName);
    free(rollNo);

    return 0;
}
