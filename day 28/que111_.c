#include <stdio.h>
#include <string.h>

#define MAX 100

struct Ticket {
    int ticketID;
    char name[50];
    int age;
    int seatNo;
};

struct Ticket tickets[MAX];
int count = 0;
int availableSeats = 100;


// Book Ticket
void bookTicket() {

    if(availableSeats == 0) {
        printf("No seats available\n");
        return;
    }


    tickets[count].ticketID = count + 1;

    printf("\nEnter Passenger Name: ");
    scanf(" %[^\n]", tickets[count].name);

    printf("Enter Age: ");
    scanf("%d", &tickets[count].age);


    tickets[count].seatNo = 100 - availableSeats + 1;

    availableSeats--;
    count++;


    printf("\nTicket booked successfully!");
    printf("\nTicket ID: %d", tickets[count-1].ticketID);
    printf("\nSeat Number: %d\n", tickets[count-1].seatNo);
}


// Display Tickets
void displayTickets() {

    if(count == 0) {
        printf("No bookings found\n");
        return;
    }


    for(int i = 0; i < count; i++) {

        printf("\nTicket ID: %d", tickets[i].ticketID);
        printf("\nPassenger Name: %s", tickets[i].name);
        printf("\nAge: %d", tickets[i].age);
        printf("\nSeat No: %d\n", tickets[i].seatNo);
    }
}


// Cancel Ticket
void cancelTicket() {

    int id;
    int found = 0;


    printf("\nEnter Ticket ID to cancel: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(tickets[i].ticketID == id) {

            for(int j = i; j < count-1; j++) {
                tickets[j] = tickets[j+1];
            }


            count--;
            availableSeats++;

            found = 1;

            printf("Ticket cancelled successfully\n");
            break;
        }
    }


    if(!found)
        printf("Ticket not found\n");
}


// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Ticket Booking System =====");
        printf("\n1. Book Ticket");
        printf("\n2. Display Bookings");
        printf("\n3. Cancel Ticket");
        printf("\n4. Exit");


        printf("\nEnter your choice: ");
        scanf("%d",&choice);


        switch(choice) {

            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                printf("Thank you!");
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}