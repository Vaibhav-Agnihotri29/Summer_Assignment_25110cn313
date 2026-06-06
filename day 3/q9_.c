#include <stdio.h>

int main() {
    int num, i, Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        Prime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}