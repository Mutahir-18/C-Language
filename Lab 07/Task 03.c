Write a program that calculates the length of a string using a pointer. Do not use the
built-in strlen() or sizeof() function. After length calculation reverse the string using
the same pointers.

#include <stdio.h>

int main() {
    char text[100];
    int length = 0;
    
    printf("Enter the text here: ");
    scanf("%s", text);
    
    while (text[length] != '\0') {
        length++;
    }

    
    for (int i = 0; i < length / 2; i++) {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

    
    printf("The Length is: %d\n", length);
    printf("The Reversed Text is: %s\n", text);

    return 0;
}
