Write a program that asks for the number of calories and fat grams in a food. The program 
should display the percentage of calories that come from fat
One gram of fat has 9 calories, so Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as: calories from fat/total calories
Input validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calories. If that 
happens, display an error message indicating that either the calories or fat grams were incorrecty entered

#include <stdio.h>
int main()
{
    int fat_grams,calories,fat_calories;
    int percentage;
    printf("Enter the number of grams in fat:");
    scanf("%d",&fat_grams);
    printf("Enter the number of calories:");
    scanf("%d",&calories);
    if (calories>0 && fat_grams>0)
       {
          fat_calories=fat_grams*9;
          percentage=fat_calories/calories;
          if (fat_calories<calories)
          {
          printf("The Fat in Calories are:%d",percentage);
          }
          else 
          {
          printf("The Fats or grams were incorrectly Entered");
          }
       }
    else 
    {
        printf("Fats or Calories Cannot be less than 0");
    }
return(0);
}
