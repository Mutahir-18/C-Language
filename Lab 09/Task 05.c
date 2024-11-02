//Reversing the string 

#include <stdio.h>
#include <string.h>
int main(){
    char text[10];
    printf("Enter the Text: ");
    scanf("%s", text);

    printf("%s", strrev(text));
}
