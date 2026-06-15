#include <stdio.h>
int main() {
    int n, r, sum = 0, t;
 printf("Enter number: ");

    scanf("%d", &n);
    t = n;
 while (t > 0) {

 r = t % 10;
        sum = sum + (r * r * r);
    t = t / 10;
    }

    if (sum == n)
        printf("Armstrong number");
 else
        printf("Not Armstrong number");

    return 0;
}