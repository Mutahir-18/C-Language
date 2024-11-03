Create a Function where it accepts a 2D array of strings where it sorts the string in the array
based on the first character’s ASCII Value in ascending order.
Example: {HELLO,JELLO,MELLO,TELLO,BELLO} 
Output from Function: {BELLO,HELLO,JELLO,MELLO,TELLO}
Hint: You can use the strcpy function for this to copy the array.

#include <stdio.h>
#include <string.h>
int main(){
    char arr[4][20];
    char temp[20];
    for (int i=0; i<4; i++){
        printf("Text 0%d: ",i+1);
        scanf(" %s", arr[i]);
    }

    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
             if (strcmp(arr[i],arr[j])>0){
                strcpy(temp, arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
             }
        }
    }

    for(int i=0; i<4; i++){
        printf("%s\n", arr[i]);
    }
}
