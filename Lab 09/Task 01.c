
Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.

#include <stdio.h>
#include <string.h>
int main(){
    char arr[5][20];
    char reverse[5][20];
    int i,j;

    //INPUT
    printf("Enter your strings here \n");
    for (i=0; i<5; i++){
        printf("Text %d: ",i+1);
        scanf("%s", arr[i]);
    }

    //Array was reversed using strrev 
    for (i=0 ; i<5 ;i++){
             strrev(arr[i]);
             strcpy(reverse[i], arr[i]);
        }
    
    for (i=0 ; i<5 ;i++){
             strrev(arr[i]);
        }

    for(i=0 ; i<5; i++){
        if (reverse[i] ==  arr[i]){
            printf("Text %d is Palindrome\n",i+1);
        }
        else{
            printf("Text %d is not Palindrome\n",i+1);
        }
    }
    
    
}
