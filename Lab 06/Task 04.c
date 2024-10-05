#include <stdio.h>
int main ()
{
    int num,digit,sum=0,a;
    printf("Enter the Number:");
    scanf("%d",&num); //153
    a=num;
    do 
    {
        digit=num%10;  //3 //5 //1
        sum=sum+(digit*digit*digit);  //sum=0+27 // sum=27  // sum=27+125 //sum=152 //sum=152+1 //sum=153
        num=num/10;   //15 //1 //0
    }
    while (num!=0);
     if (sum == a) 
    {
        printf("Armstrong number");
    } 
    else 
    {
        printf("Not Armstrong number");
    }
return(0);
}
