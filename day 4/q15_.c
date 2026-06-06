#include <stdio.h>

int main() {
    int num, originalNum, r, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        r = num % 10;
        result += r * r * r; 
        num /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.", originalNum);
    else
        printf("%d is not an Armstrong number.", originalNum);

    return 0;
}