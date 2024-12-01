Create a function to replace a word in a file with another word.
Read the file into memory, perform a search and replace, and write the modified
content back to the file.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace_word_in_file(const char *file_path, const char *old_word, const char *new_word) {
    FILE *file = fopen("documentt.txt", "r");
    if (file == NULL) {
    printf("Error opening file");
        return;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        char *pos = NULL;
        while ((pos = strstr(buffer, old_word)) != NULL) {
            
            fwrite(buffer, 1, pos - buffer, temp);

            fwrite(new_word, 1, strlen(new_word), temp);
        }

        fputs(buffer, temp);
    }

    fclose(file);
    fclose(temp);

    if (remove(file_path) != 0 || rename(temp_file, file_path) != 0) {
        printf("Error replacing the original file");
    }
}

int main() {
    const char *file_path = "document.txt";
    const char *old_word = "oldword";
    const char *new_word = "newword";

    replace_word_in_file(file_path, old_word, new_word);

    return 0;
}
