#include <stdio.h>
int main() {
    int start, end, num, temp, r, digits, sum;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;
        digits = 0;

        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;

        while (temp != 0) {
            r = temp % 10;

            int power = 1;
            for (int i = 1; i <= digits; i++) {
                power *= r;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}