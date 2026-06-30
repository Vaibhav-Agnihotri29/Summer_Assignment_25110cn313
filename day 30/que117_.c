#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int rollNo;
    char name[50];
    char course[50];
    float marks;
};

struct Student students[MAX];
int count = 0;


// Add Student
void addStudent() {

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[count].rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Course Name: ");
    scanf(" %[^\n]", students[count].course);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);


    count++;

    printf("Student record added successfully!\n");
}


// Display Students
void displayStudents() {

    if(count == 0) {
        printf("No student records found\n");
        return;
    }


    for(int i = 0; i < count; i++) {

        printf("\nStudent %d", i+1);
        printf("\nRoll No: %d", students[i].rollNo);
        printf("\nName: %s", students[i].name);
        printf("\nCourse: %s", students[i].course);
        printf("\nMarks: %.2f\n", students[i].marks);

    }
}


// Search Student
void searchStudent() {

    int roll;
    int found = 0;


    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);


    for(int i = 0; i < count; i++) {

        if(students[i].rollNo == roll) {

            printf("\nStudent Found");
            printf("\nName: %s", students[i].name);
            printf("\nCourse: %s", students[i].course);
            printf("\nMarks: %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Student not found\n");
}


// Update Marks
void updateMarks() {

    int roll;
    float marks;


    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);


    for(int i = 0; i < count; i++) {

        if(students[i].rollNo == roll) {

            printf("Enter new marks: ");
            scanf("%f", &marks);


            students[i].marks = marks;

            printf("Marks updated successfully\n");
            return;
        }
    }


    printf("Student not found\n");
}


// Delete Student
void deleteStudent() {

    int roll;
    int found = 0;


    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);


    for(int i = 0; i < count; i++) {

        if(students[i].rollNo == roll) {


            for(int j = i; j < count-1; j++) {

                students[j] = students[j+1];

            }


            count--;

            printf("Student record deleted\n");

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Student not found\n");
}


// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Student Record System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Marks");
        printf("\n5. Delete Student");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

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
                updateMarks();
                break;

            case 5:
                deleteStudent();
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