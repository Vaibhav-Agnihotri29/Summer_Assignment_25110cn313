#include <stdio.h>

int main() {

    int choice;
    float num1, num2, result;


    while(1) {

        printf("\n===== Calculator Menu =====");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        if(choice == 6) {
            printf("Exiting calculator...");
            break;
        }


        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);


        switch(choice) {

            case 1:
                result = num1 + num2;
                printf("Result = %.2f", result);
                break;


            case 2:
                result = num1 - num2;
                printf("Result = %.2f", result);
                break;


            case 3:
                result = num1 * num2;
                printf("Result = %.2f", result);
                break;


            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %.2f", result);
                }
                else {
                    printf("Cannot divide by zero");
                }
                break;


            case 5:
                printf("Modulus works only with integers");
                printf("\nRemainder = %d", (int)num1 % (int)num2);
                break;


            default:
                printf("Invalid choice");
        }
    }


    return 0;
}