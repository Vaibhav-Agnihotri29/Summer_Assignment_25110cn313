#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }
    printf("2. Which language is used for C programming?\n");
    printf("1. Python\n");
    printf("2. Java\n");
    printf("3. C\n");
    printf("4. HTML\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }


    // Question 3
    printf("3. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 7.\n\n");
    }


    printf("===== QUIZ RESULT =====\n");
    printf("Your score: %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}