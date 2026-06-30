#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student students[100];
int count = 0;

void addStudent() {
    printf("\nEnter roll number: ");
    scanf("%d", &students[count].roll);

    printf("Enter name: ");
    scanf("%s", students[count].name);

    printf("Enter marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    for (int i = 0; i < count; i++) {
        printf("\nRoll No: %d", students[i].roll);
        printf("\nName: %s", students[i].name);
        printf("\nMarks: %.2f\n", students[i].marks);
    }
}

void searchStudent() {
    int roll, found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("\nStudent Found\n");
            printf("Roll No: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

void deleteStudent() {
    int roll, found = 0;

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {

            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;
            found = 1;
            printf("Record deleted successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Exiting system...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}