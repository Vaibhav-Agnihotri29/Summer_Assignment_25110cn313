#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee emp[100];
int count = 0;

void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("Employee added successfully!\n");
}

void displayEmployees() {

    if (count == 0) {
        printf("No employee records found.\n");
        return;
    }

    printf("\n--- Employee Records ---\n");

    for (int i = 0; i < count; i++) {
        printf("\nEmployee ID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }
}

void searchEmployee() {

    int id, found = 0;

    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (emp[i].id == id) {

            printf("\nEmployee Found\n");
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found.\n");
}

void deleteEmployee() {

    int id, found = 0;

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (emp[i].id == id) {

            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }

            count--;

            found = 1;
            printf("Employee deleted successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Employee not found.\n");
}


int main() {

    int choice;

    while (1) {

        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                deleteEmployee();
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}