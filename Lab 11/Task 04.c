Create a program that defines a structure Student with fields roll_no, name, and
another nested structure Marks (fields: maths, science, and english). Use an array of
Student to store data for 5 students and calculate the average marks for each student.

#include <stdio.h>

typedef struct subjects{
    int math;
    int science;
    int english;
}subjects;

typedef struct student{
    int roll_no;
    char name[10];
    subjects sub;
}student;

int main(){
    student std[5];
    int sum = 0;
    int avg;

    for(int i = 0; i < 5; i++){
        printf("------STUDENT %d------\n",i+1);

        printf("Enter the Roll Number: ");
        scanf(" %d", &std[i].roll_no);

        printf("Enter the Name: ");
        scanf(" %s", std[i].name);

        printf("Enter the Marks For Maths: ");
        scanf(" %d", &std[i].sub.math);

        printf("Enter the Marks For Science: ");
        scanf(" %d", &std[i].sub.science);

        printf("Enter the Marks For English: ");
        scanf(" %d", &std[i].sub.english);
    }

    for (int i = 0; i < 5; i++){
        sum = std[i].sub.math + std[i].sub.science + std[i].sub.english;
        avg = sum / 3;

        printf("The Avgerage of Student %d is: %d", i+1, avg); 
        sum = 0;
    }
}
