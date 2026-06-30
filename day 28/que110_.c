#include <stdio.h>
#include <string.h>

#define MAX 100

struct Account {
    int accountNo;
    char name[50];
    float balance;
};

struct Account accounts[MAX];
int count = 0;


// Create Account
void createAccount() {

    printf("\nEnter Account Number: ");
    scanf("%d", &accounts[count].accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", accounts[count].name);

    printf("Enter Initial Deposit: ");
    scanf("%f", &accounts[count].balance);

    count++;

    printf("Account created successfully!\n");
}


// Display Account
void displayAccount() {

    int accNo;
    int found = 0;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);


    for(int i = 0; i < count; i++) {

        if(accounts[i].accountNo == accNo) {

            printf("\nAccount Number: %d", accounts[i].accountNo);
            printf("\nName: %s", accounts[i].name);
            printf("\nBalance: %.2f\n", accounts[i].balance);

            found = 1;
            break;
        }
    }

    if(!found)
        printf("Account not found\n");
}


// Deposit Money
void deposit() {

    int accNo;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);


    for(int i = 0; i < count; i++) {

        if(accounts[i].accountNo == accNo) {

            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;

            printf("Deposit successful\n");
            return;
        }
    }

    printf("Account not found\n");
}


// Withdraw Money
void withdraw() {

    int accNo;
    float amount;


    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);


    for(int i = 0; i < count; i++) {

        if(accounts[i].accountNo == accNo) {

            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);


            if(amount <= accounts[i].balance) {

                accounts[i].balance -= amount;

                printf("Withdrawal successful\n");
            }

            else {
                printf("Insufficient balance\n");
            }

            return;
        }
    }

    printf("Account not found\n");
}


// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Bank Account Management System =====");
        printf("\n1. Create Account");
        printf("\n2. Display Account");
        printf("\n3. Deposit Money");
        printf("\n4. Withdraw Money");
        printf("\n5. Exit");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                createAccount();
                break;

            case 2:
                displayAccount();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                printf("Thank you!");
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}