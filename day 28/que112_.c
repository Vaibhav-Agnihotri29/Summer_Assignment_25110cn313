#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contacts[MAX];
int count = 0;


// Add Contact
void addContact() {

    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    printf("Enter Email: ");
    scanf("%s", contacts[count].email);


    count++;

    printf("Contact added successfully!\n");
}


// Display Contacts
void displayContacts() {

    if(count == 0) {
        printf("No contacts available\n");
        return;
    }


    for(int i = 0; i < count; i++) {

        printf("\nContact %d", i+1);
        printf("\nName: %s", contacts[i].name);
        printf("\nPhone: %s", contacts[i].phone);
        printf("\nEmail: %s\n", contacts[i].email);
    }
}


// Search Contact
void searchContact() {

    char name[50];
    int found = 0;


    printf("\nEnter name to search: ");
    scanf(" %[^\n]", name);


    for(int i = 0; i < count; i++) {

        if(strcmp(contacts[i].name, name) == 0) {

            printf("\nContact Found");
            printf("\nName: %s", contacts[i].name);
            printf("\nPhone: %s", contacts[i].phone);
            printf("\nEmail: %s\n", contacts[i].email);

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Contact not found\n");
}


// Delete Contact
void deleteContact() {

    char name[50];
    int found = 0;


    printf("\nEnter name to delete: ");
    scanf(" %[^\n]", name);


    for(int i = 0; i < count; i++) {

        if(strcmp(contacts[i].name, name) == 0) {


            for(int j = i; j < count-1; j++) {

                contacts[j] = contacts[j+1];

            }


            count--;

            printf("Contact deleted successfully\n");

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Contact not found\n");
}


// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Contact Management System =====");
        printf("\n1. Add Contact");
        printf("\n2. View Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");


        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice) {

            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("Goodbye!");
                return 0;

            default:
                printf("Invalid choice");
        }
    }


    return 0;
}