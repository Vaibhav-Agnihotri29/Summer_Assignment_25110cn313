#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {

    int id;
    char name[50];
    char department[50];
    float salary;

};


struct Employee emp[MAX];
int count = 0;


// Add Employee
void addEmployee() {

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);


    count++;

    printf("Employee added successfully!\n");
}


// Display Employees
void displayEmployees() {

    if(count == 0) {

        printf("No employee records found\n");
        return;
    }


    for(int i = 0; i < count; i++) {

        printf("\nEmployee %d", i+1);
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nDepartment: %s", emp[i].department);
        printf("\nSalary: %.2f\n", emp[i].salary);

    }
}


// Search Employee
void searchEmployee() {

    int id;
    int found = 0;


    printf("\nEnter Employee ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(emp[i].id == id) {

            printf("\nEmployee Found");
            printf("\nName: %s", emp[i].name);
            printf("\nDepartment: %s", emp[i].department);
            printf("\nSalary: %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Employee not found\n");
}


// Update Salary
void updateSalary() {

    int id;
    float salary;


    printf("\nEnter Employee ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(emp[i].id == id) {

            printf("Enter new salary: ");
            scanf("%f", &salary);


            emp[i].salary = salary;

            printf("Salary updated successfully\n");

            return;
        }
    }


    printf("Employee not found\n");
}


// Delete Employee
void deleteEmployee() {

    int id;
    int found = 0;


    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(emp[i].id == id) {


            for(int j = i; j < count-1; j++) {

                emp[j] = emp[j+1];

            }


            count--;

            printf("Employee deleted successfully\n");

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Employee not found\n");
}



// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Mini Employee Management System =====");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Salary");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
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
                updateSalary();
                break;


            case 5:
                deleteEmployee();
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