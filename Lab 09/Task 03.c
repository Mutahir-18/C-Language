//Checking The Prime number

#include <stdio.h>

void isPrime(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("Not a Prime\n");
            return; 
        }
    }

    printf("A Prime Number\n");
}

int main() {
    int a;
    printf("Enter the Value: ");
    scanf("%d", &a);

    isPrime(a);

    return 0;
}
