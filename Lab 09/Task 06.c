//Finding the max and minimum values

#include <stdio.h>
void  findmax(int arr[],int size){
    int i;
    int high = -999;
    int low = 999;
    for(i=0 ; i<size ;i++){
        if (arr[i] > high ){
            high = arr[i];
        }
    }

    for(i=0 ; i<size ;i++){
        if (arr[i] < low ){
            low = arr[i];
        }
    }
    printf("The High num is %d and Low Num is %d",high,low);
}
int main(){
    int size;
    printf("Enter the Number of Values you want to enter: ");
    scanf(" %d", &size);
    int arr[size];
    for (int i=0; i<size ;i++){
        printf("Number %d: ",i+1);
        scanf(" %d", &arr[i]);
    }

    findmax(arr,size);

}
    
