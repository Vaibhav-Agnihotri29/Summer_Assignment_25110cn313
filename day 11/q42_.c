#include <stdio.h>

int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int n1, n2, max;

printf("Enter first nu: ");
    scanf("%d", &n1);

    printf("Enter second nu: ");
scanf("%d", &n2);

max = findMax(n1, n2);

    printf("Maximum : %d\n", max);

return 0;
}
