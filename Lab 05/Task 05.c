Implement the following decision table using nested ternary operators. 
Assume that the grade point average is within the range 0.0 through 4.0

#include <stdio.h>
int main()
{
   float grade;
   printf("Enter the Grade:");
   scanf("%f",&grade);
   (grade>=0.0 && grade<=0.99)? printf("Failed Semester"):
   (grade>=1.00 && grade<=1.99)?printf("On probation for next semester"):
   (grade>=2.00 && grade<=2.99)?printf("---------"):(grade>=3.00 && grade<=3.45)?printf("Dean List for Semester"):
   (grade>=3.5 && grade<=4.00)?printf("Highest honours for Semester"):printf("invalid Input");
   return (0);
}
