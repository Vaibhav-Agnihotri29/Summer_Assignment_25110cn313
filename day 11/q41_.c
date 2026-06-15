#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {

 int num1,num2,sum;

    printf("Enter first no.: ");
    scanf("%d", &num1);

    printf("Enter second no.: ");
    scanf("%d", &num2);

    sum = add(num1,num2);

    printf("Sum : %d\n", sum);
  return 0;
}