How would you implement a program to count the occurrences of each word in a text
file? Write the approach and code.

#include <stdio.h>

int main() {
    FILE *file1;
    char ch;
    int count = 0;

    file1 = fopen("text.txt", "r");
    if (file1 == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1; 
    }

    while ((ch = fgetc(file1)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            count++;
        }
    }

    fclose(file1); 
    printf("Number of characters: %d\n", count);

    return 0; 
}
