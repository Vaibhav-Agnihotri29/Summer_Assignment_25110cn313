#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

char calculateGrade(float percentage) {

    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 40)
        return 'D';
    else
        return 'F';
}


int main() {

    struct Student s;

    printf("===== MARKSHEET GENERATION SYSTEM =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    s.total = 0;

    printf("Enter marks of 5 subjects:\n");

    for(int i = 0; i < 5; i++) {

        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);

        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    s.grade = calculateGrade(s.percentage);


    printf("\n========== MARKSHEET ==========\n");

    printf("Roll Number: %d\n", s.roll);
    printf("Student Name: %s\n", s.name);

    printf("\nMarks:\n");

    for(int i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, s.marks[i]);
    }

    printf("\nTotal Marks: %d/500\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Grade: %c\n", s.grade);


    if(s.grade == 'F')
        printf("Result: Fail\n");
    else
        printf("Result: Pass\n");


    return 0;
}