#include <stdio.h>
int main() {

    int a[55], n, i, sum = 0;
    float avg;

scanf("%d", &n);

 for (i = 0; i < n; i++) {

scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;
 printf("Sum = %d\n", sum);
    printf("Avg = %.2f", avg);

return 0;
}