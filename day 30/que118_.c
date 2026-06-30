#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};

struct Book books[MAX];
int count = 0;


// Add Book
void addBook() {

    printf("\nEnter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    books[count].issued = 0;

    count++;

    printf("Book added successfully!\n");
}


// Display Books
void displayBooks() {

    if(count == 0) {
        printf("No books available\n");
        return;
    }


    for(int i = 0; i < count; i++) {

        printf("\nBook ID: %d", books[i].id);
        printf("\nTitle: %s", books[i].title);
        printf("\nAuthor: %s", books[i].author);

        if(books[i].issued)
            printf("\nStatus: Issued\n");
        else
            printf("\nStatus: Available\n");

    }
}


// Search Book
void searchBook() {

    int id;
    int found = 0;


    printf("\nEnter Book ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(books[i].id == id) {

            printf("\nBook Found");
            printf("\nTitle: %s", books[i].title);
            printf("\nAuthor: %s\n", books[i].author);

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Book not found\n");
}


// Issue Book
void issueBook() {

    int id;


    printf("\nEnter Book ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(books[i].id == id) {

            if(books[i].issued)
                printf("Book already issued\n");

            else {
                books[i].issued = 1;
                printf("Book issued successfully\n");
            }

            return;
        }
    }


    printf("Book not found\n");
}


// Return Book
void returnBook() {

    int id;


    printf("\nEnter Book ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(books[i].id == id) {

            if(books[i].issued) {

                books[i].issued = 0;

                printf("Book returned successfully\n");
            }

            else
                printf("Book is already available\n");

            return;
        }
    }


    printf("Book not found\n");
}


// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Mini Library System =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("Exiting...");
                return 0;

            default:
                printf("Invalid choice");
        }
    }


    return 0;
}