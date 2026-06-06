#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    } 
    else if (n == 1) {
        printf("0");
    } 
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term is: %d", b);
    }

    return 0;
}