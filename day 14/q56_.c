#include <stdio.h>
int main() {
    int n, x, even = 0, odd = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
   scanf("%d", &x);

if (x % 2 == 0)
            even++;
else
            odd++;
    }
 printf("Even num: %d\n", even);

    printf("Odd num: %d\n", odd);
 return 0;
}