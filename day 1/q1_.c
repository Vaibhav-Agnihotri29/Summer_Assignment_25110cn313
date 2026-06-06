#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = (long long)n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %lld\n", n, sum);

    return 0;
}