//Basic Calculator Using Function 

#include <stdio.h>

int calculate(int a,int b,char oper){
    int result;
    switch (oper){
        case '+':
        result = a+b;
        break;

        case '-':
        result = b-a;
        break;

        case '*':
        result = a*b;
        break;

        case '/':
        result = a/b;
        break;

        default:
        printf("invalid Operator");

        return result;
    }
}
int main(){

    int a,b;
    char oper;
    printf("Enter The First Number: ");
    scanf(" %d", &a);
    printf("Enter The Second Number: ");
    scanf(" %d", &b);
    printf("Enter the Operator (+,-,*,/): ");
    scanf(" %c", &oper);

    printf("The Value is %d",calculate(a,b,oper));


}
