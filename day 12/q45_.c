#include <stdio.h>

int main() {
    int n, r = 0, t;

    printf("Enter nu: ");

    scanf("%d", &n);

    t = n;

    while (t > 0) {
        r = r * 10 + t % 10;
    t = t / 10;
    
    }

    if (n == r)

        printf("Palindrome");
  else
        printf("Not Palindrome");

    return 0;
}