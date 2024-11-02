//Switch The Values Integers

#include <stdio.h>
int switchIntegers(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;

}
int main(){
    int a,b;
    printf("Enter Num 01: ");
    scanf(" %d",&a);
    printf("Enter Num 02: ");
    scanf(" %d",&b);
    printf("Num 01:%d\t Num 02:%d\n",a,b);

    switchIntegers(&a,&b);
    printf("After Update\n Num 01:%d\t Num 02: %d",a,b);
    
}
