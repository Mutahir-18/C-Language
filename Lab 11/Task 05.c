Define a structure Date with fields day, month, and year. Create another structure Event
with fields event_name, date (nested Date structure), and location. Write a program to
display all event details in a readable format.

#include <stdio.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;

typedef struct Event{
    char name[20];
    Date date;
    char location[50];
}Event;

int main(){
    Event event;

    printf("Enter the Name of Event: ");
    scanf(" %s", event.name);

    printf("Enter the Date (DD/MM/YYYY): ");
    scanf("%d %d %d",&event.date.day, &event.date.month, &event.date.year);

    printf("Enter the Location: ");
    scanf(" %s",event.location);

    printf("------ %s ------\n",event.name);
    printf("location %s \t date:%d-%d-%d",event.location,event.date.day, event.date.month, event.date.year);
}
