//Hill Loops

#include <stdio.h>

int main() {
    char grid[5][105] = {};  
    int i = 4, j = 0, up = 1, s = 1, index = 0;

    while (index < 3) {
        grid[i][j] = '*';
        up ? (i--, j += s++) : (i++, j += s--);

        if (i == 0 && up) {
            up = 0;
            s--;
        } else if (i == 4 && !up) {
            up = 1;
            s = 1;
            index++;
            grid[i][j] = '*';
            j += 2;
            if (index < 3) grid[i][j] = '*';
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 105; j++) {
            printf("%c", grid[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
}
