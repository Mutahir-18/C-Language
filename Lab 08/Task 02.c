Generate a pattern of odd/even numbers in a multi-dimension array of [2][n][2] where the first
2 is the different arrays for even and odd. The N is the amount of array quantity in each
odd/even array and the 2 are the two even/odd values in each of them, add them in decreasing
order starting from a user-specified number using nested loops.

#include <stdio.h>

int main() {
    int n, start;
    
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the number of pairs (n): ");
    scanf("%d", &n);

    int arr[2][n][2];  
    int even = start % 2 == 0 ? start : start - 1;  
    int odd = start % 2 != 0 ? start : start - 1;   
    
    
    for (int i = 0; i < n; i++) {
        arr[0][i][0] = even;
        arr[0][i][1] = even - 2;
        even -= 4;  
    }
    

    for (int i = 0; i < n; i++) {
        arr[1][i][0] = odd;
        arr[1][i][1] = odd - 2;
        odd -= 4;  
    }
    
    
    printf("\nEven numbers array:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d, %d]\n", arr[0][i][0], arr[0][i][1]);
    }

    printf("\nOdd numbers array:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d, %d]\n", arr[1][i][0], arr[1][i][1]);
    }

    return 0;
}
