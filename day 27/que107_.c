#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

struct Employee emp[100];
int count = 0;

void addEmployee() {

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    printf("Enter Allowance: ");
    scanf("%f", &emp[count].allowance);

    printf("Enter Deduction: ");
    scanf("%f", &emp[count].deduction);

    emp[count].netSalary = emp[count].basicSalary 
                          + emp[count].allowance 
                          - emp[count].deduction;

    count++;

    printf("Salary record added successfully!\n");
}


void displaySalary() {

    if(count == 0) {
        printf("No salary records found.\n");
        return;
    }

    printf("\n--- Salary Details ---\n");

    for(int i = 0; i < count; i++) {

        printf("\nEmployee ID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nBasic Salary: %.2f", emp[i].basicSalary);
        printf("\nAllowance: %.2f", emp[i].allowance);
        printf("\nDeduction: %.2f", emp[i].deduction);
        printf("\nNet Salary: %.2f\n", emp[i].netSalary);
    }
}


void searchEmployee() {

    int id, found = 0;

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {

        if(emp[i].id == id) {

            printf("\nEmployee Salary Details\n");

            printf("Name: %s\n", emp[i].name);
            printf("Net Salary: %.2f\n", emp[i].netSalary);

            found = 1;
            break;
        }
    }

    if(!found)
        printf("Employee not found.\n");
}


int main() {

    int choice;

    while(1) {

        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Salary Details\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                addEmployee();
                break;

            case 2:
                displaySalary();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}