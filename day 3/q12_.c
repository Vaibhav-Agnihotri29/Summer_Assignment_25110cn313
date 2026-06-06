#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;


    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;


    lcm = (num1 * num2) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}