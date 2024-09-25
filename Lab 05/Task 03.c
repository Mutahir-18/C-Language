Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black 
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table 
details the time chart for the machine for each coffee type. Display a statement for each step. If the 
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the 
user and to compute the coffee time.

#include <stdio.h>
int main()
{
    int coffee,total_time;
    char coffee_type;
    char size;
    total_time=0;
    printf("Enter the Coffee Type: W for White and B for Black:");
    scanf(" %c",&coffee_type);
    switch (coffee_type)
    {
        case 'W':   
        printf("Enter the Size of Cup: B for Big and S for Small:");
        scanf(" %c",&size);
        switch (size)
             {
                case 'B':
                printf("For adding water 15 min\n");
                total_time += 15;
                printf("For Adding sugar 15 min\n");
                total_time += 15;
                printf("For Mixing Well 20 min\n");
                total_time += 20;
                printf("For Adding Coffee 2 min\n");
                total_time += 2;
                printf("For Adding Milk 4 min\n");
                total_time += 4;
                printf(" For Mixing Well 20 min\n");
                total_time += 20;
                printf("The Total Time is %d miuntes",total_time);
                break;
                case 'S':
                printf("For adding water 15 min\n");
                total_time += 15;
                printf("For Adding sugar 15 min\n");
                total_time += 15;
                printf("For Mixing Well 20 min\n");
                total_time += 20;
                printf("For Adding Coffee 2 min\n");
                total_time += 2;
                printf("For Adding Milk 4 min\n");
                total_time += 4;
                printf(" For Mixing Well 20 min\n");
                total_time += 20;
                printf("The Total Time is %d miuntes",total_time);
                break;
             }  
        break;
        case 'B':
        printf("Enter the Size of Cup:B for Big and S for Small");
        scanf(" %c",&size);
        switch (size) 
        {
          case 'S':
          printf("For adding water 20 min\n");
          total_time += 20;
          printf("For Adding sugar 20 min\n");
          total_time += 20;
          printf("For Mixing Well 25 min\n");
          total_time += 25;
          printf("For Adding Coffee 15 min\n");
          total_time += 15;
          printf(" For Mixing Well 25  min\n");
          total_time += 25;
          printf("The Total Time for Coffee is:%d minutes",total_time);
          break;
          case 'B':
          printf("For adding water 20 min\n");
          total_time += 20;
          printf("For Adding sugar 20 min\n");
          total_time += 20;
          printf("For Mixing Well 25 min\n");
          total_time += 25;
          printf("For Adding Coffee 15 min\n");
          total_time += 15;
          printf(" For Mixing Well 25  min\n");
          total_time += 25;
          printf("Extra Time For Baking");
          total_time=total_time+(total_time*0.50);
          printf("The Total Time for Coffee is:%d minutes",total_time);
          break;
        }
      break;           
    }
    return(0);
}
