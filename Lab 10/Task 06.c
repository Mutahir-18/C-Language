Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.

#include <stdio.h>
#include <string.h>

typedef struct travelPackages {
    char name[50];          
    char destination[50];   
    int duration;
    float cost;
    int seats;
} travel;


void Display(travel travel[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Package %d\n", i + 1);
        printf("Name: %s\n", travel[i].name);
        printf("Destination: %s\n", travel[i].destination);
        printf("Duration: %d Days\n", travel[i].duration);
        printf("Cost: $%.2f\n", travel[i].cost);
        printf("Seats Available: %d\n", travel[i].seats);
        printf("\n");
    }
}

int main() {
    int num;
    travel package[3] = {
        {"Mystic Wanderlust Escape", "Bali, Indonesia", 14, 1200.00, 5},
        {"Cultural Exploration", "Kyoto, Japan", 10, 800.00, 3},
        {"Adventure Paradise", "Queenstown, New Zealand", 7, 1500.00, 2}
    };

    
    Display(package);

    printf("Enter the Package You Want to Book: ");
    scanf(" %d", &num);

    printf("You Booked Package %d , Congratulations!", num);

    return 0;
}
