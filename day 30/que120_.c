#include <stdio.h>
#include <string.h>

#define MAX 100


struct Student {

    int roll;
    char name[50];
    char course[50];
    float marks;

};


struct Student student[MAX];

int count = 0;


// Function to add student
void addStudent() {

    printf("\nEnter Roll Number: ");
    scanf("%d", &student[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", student[count].name);

    printf("Enter Course: ");
    scanf(" %[^\n]", student[count].course);

    printf("Enter Marks: ");
    scanf("%f", &student[count].marks);


    count++;

    printf("Student added successfully!\n");
}



// Function to display students
void displayStudent() {


    if(count == 0) {

        printf("No records available\n");
        return;

    }


    for(int i=0; i<count; i++) {


        printf("\n----- Student Record -----");

        printf("\nRoll No : %d", student[i].roll);

        printf("\nName    : %s", student[i].name);

        printf("\nCourse  : %s", student[i].course);

        printf("\nMarks   : %.2f", student[i].marks);


        if(student[i].marks >= 90)
            printf("\nGrade   : A");

        else if(student[i].marks >= 75)
            printf("\nGrade   : B");

        else if(student[i].marks >= 50)
            printf("\nGrade   : C");

        else
            printf("\nGrade   : Fail");


        printf("\n");

    }

}



// Function to search student
void searchStudent() {


    int roll;
    int found = 0;


    printf("\nEnter Roll Number: ");
    scanf("%d",&roll);



    for(int i=0;i<count;i++) {


        if(student[i].roll == roll) {


            printf("\nStudent Found");

            printf("\nName: %s", student[i].name);

            printf("\nCourse: %s", student[i].course);

            printf("\nMarks: %.2f\n", student[i].marks);


            found = 1;
            break;

        }

    }


    if(found == 0)

        printf("Student not found\n");


}



// Function to update marks
void updateStudent() {


    int roll;
    float marks;


    printf("\nEnter Roll Number: ");
    scanf("%d",&roll);



    for(int i=0;i<count;i++) {


        if(student[i].roll == roll) {


            printf("Enter New Marks: ");
            scanf("%f",&marks);


            student[i].marks = marks;


            printf("Record updated successfully\n");

            return;

        }

    }


    printf("Student not found\n");

}



// Function to delete student
void deleteStudent() {


    int roll;


    printf("\nEnter Roll Number: ");
    scanf("%d",&roll);



    for(int i=0;i<count;i++) {


        if(student[i].roll == roll) {


            for(int j=i;j<count-1;j++) {


                student[j] = student[j+1];

            }


            count--;


            printf("Record deleted successfully\n");

            return;

        }

    }


    printf("Student not found\n");

}



// Main function
int main() {


    int choice;



    while(1) {


        printf("\n\n===== Student Management System =====");

        printf("\n1. Add Student");

        printf("\n2. Display Students");

        printf("\n3. Search Student");

        printf("\n4. Update Marks");

        printf("\n5. Delete Student");

        printf("\n6. Exit");



        printf("\nEnter your choice: ");

        scanf("%d",&choice);



        switch(choice) {


            case 1:
                addStudent();
                break;


            case 2:
                displayStudent();
                break;


            case 3:
                searchStudent();
                break;


            case 4:
                updateStudent();
                break;


            case 5:
                deleteStudent();
                break;


            case 6:

                printf("Thank you!");

                return 0;


            default:

                printf("Invalid choice");

        }

    }


    return 0;
}