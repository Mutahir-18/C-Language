Define a Book structure with fields like title, author, publication_year, and price. Create
an array of books and write functions to:
1. Display all books in the library
2. Search for a book by title
3. List book by a specific author

#include <stdio.h>
#include <string.h>

// Structure
typedef struct Library {
    char title[10];
    char author[10];
    int year;
    float price;
} lib;

// Display Function
void Display(lib book[]) {
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Year: %d\n", book[i].year);
        printf("Price: %.2f\n", book[i].price);
    }
}

// Search by Title
void Search(lib book[]) {
    char S_title[10];
    printf("Search by Title: ");
    scanf(" %s", S_title);

    int found = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(S_title, book[i].title) == 0) {
            printf("\nTitle: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("Year: %d\n", book[i].year);
            printf("Price: %.2f\n", book[i].price);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("\nBook with title '%s' not found.\n", S_title);
    }
}

// List by Author
void List(lib book[]) {
    char S_author[10];
    printf("Search by Author: ");
    scanf(" %s", S_author);

    int found = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(S_author, book[i].author) == 0) {
            printf("\nTitle: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("Year: %d\n", book[i].year);
            printf("Price: %.2f\n", book[i].price);
            found = 1;
        }
    }

    if (found == 0) {
        printf("\nNo books found by author '%s'.\n", S_author);
    }
}

int main() {
    char choice;
    lib book[3];


    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Enter the title: ");
        scanf(" %s", book[i].title);

        printf("Enter the author: ");
        scanf(" %s", book[i].author);

        printf("Enter the published year: ");
        scanf(" %d", &book[i].year);

        printf("Enter the price: ");
        scanf(" %f", &book[i].price);
    }

    
    printf("\nEnter your choice:\n");
    printf("D for Display\n");
    printf("S for Search by Title\n");
    printf("L for List of Books by Author\n");
    scanf(" %c", &choice);


    switch (choice) {
        case 'D':
        case 'd':
            Display(book);
            break;

        case 'S':
        case 's':
            Search(book);
            break;

        case 'L':
        case 'l':
            List(book);
            break;

        default:
            printf("\nInvalid Input\n");
    }

    return 0;
}
