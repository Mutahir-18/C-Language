You are required to design a calculator utilizing an array. Take a string from the
user i.e. 20+10-30 and store it in an array. Traverse through the array, if there are
values stored them in some variable and if an operation comes perform the
necessary operation and if a null character comes display the result. If the null
character comes after the operator, the program should print an invalid
expression. (Note: Only do this for + and - operator)

#include <stdio.h>

int main() {
    char expression[100];
    int currentValue = 0;   
    int result = 0;         
    char operator = '+';    
    int validExpression = 1; 

    printf("Enter the expression: ");
    scanf("%s", expression);

    for (int i = 0; expression[i] != '\0'; i++) {
        char currentChar = expression[i];

        
        if (currentChar >= '0' && currentChar <= '9') {
            currentValue = currentValue * 10 + (currentChar - '0');
        } else if (currentChar == '+' || currentChar == '-') {
            
            if (operator == '+') {
                result += currentValue; 
            } else if (operator == '-') {
                result -= currentValue; 
            }

            
            operator = currentChar;

            
            currentValue = 0;
        } else {
           
            validExpression = 0;
            break;
        }
    }

    
    if (validExpression) {
        if (operator == '+') {
            result += currentValue; 
        } else if (operator == '-') {
            result -= currentValue; 
        }
    }

    
    if (!validExpression || 
        (operator != '+' && operator != '-' && currentValue == 0 && expression[0] != '0')) {
        printf("Invalid expression.\n");
    } else {
        printf("The result is: %d\n", result);
    }

    return 0;
}

