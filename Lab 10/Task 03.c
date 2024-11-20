Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.

#include <stdio.h>
#include <stdbool.h>

int count(){
    static int cnt = 0;
    cnt++;
    return cnt;
}

const int temp = 18;
bool flag = true;
int num;
int result;

int main(){
printf("Enter the Tempertaure (-1 for Exit): ");

while (flag){
    scanf(" %d", &num);

    if(num > temp){
        count();
    }
    else if (num == -1){
        flag = false;
    }
}

result = count();
printf("The Number Of Times, The Temperature Exceeded is: %d", result);
}
