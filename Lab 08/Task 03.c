Write a C program to find the saddle point(s) in each 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column.

#include <stdio.h>
int main(){
    int i, j, x, y, temp;
    int low;
    int saddle[3][3]=
    {
        {4,2,8},
        {3,5,3},
        {6,2,1}
    };

    for (i = 0; i < 3; i++){
        low = 999; 

        for (j = 0; j < 3; j++) {
            
            if (saddle[i][j] < low) {
                temp = saddle[i][j];
                x = j;
                y = i;
                low = saddle[i][j];  
            }
        }

      
        int isSaddlePoint = 1;
        for (int k = 0; k < 3; k++) {
            if (saddle[k][x] > temp) {
                isSaddlePoint = 0;  
                break;
            }
        }

        
        if (isSaddlePoint) {
            printf("The Saddle Point is at (%d,%d) : %d\n", y, x, temp);
            return 0;
        }
    }

    
    printf("No Saddle Point found.\n");
    return 0;
}
