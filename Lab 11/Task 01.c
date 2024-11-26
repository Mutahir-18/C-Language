Write a program to copy the contents of one file to another. (Create a File with some
dummy data, The data is not required to be formatted)

#include <stdio.h>
int main(){
    FILE *file1;
    FILE *file2;
    file1 = fopen("document.txt", "w");
    if (file1 == NULL){
        printf("Error Opening File");
        return 1;
    }
    else {
        fprintf(file1,"Hello World");
    }

    fclose(file1);

    file2 = fopen("copied.txt","w");
    file1 = fopen("document.txt","r");
    char line[100];
    if (file2 == NULL && file1 == NULL){
        printf("Error Opening File");
        return 1;
    }
    else {
        while (fgets(line,100,file1) != NULL){
            fputs(line,file2);
        }
    }

}
