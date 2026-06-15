#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
 for(i = 2; i < n; i++) {

        if(n % i == 0) {
            printf("No Prime");
return 0;
        }
    }

    if(n > 1)
        printf("Prime");
    else
        printf("No Prime");

    return 0;
}