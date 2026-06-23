#include <stdio.h>
int main() {
 char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
str[length - 1] = '\0';
        length--;
    }

 for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
 flag = 0;
            break;
        }
    }

    if (flag == 1)
  printf("string is a palindrome");
    else
        printf("string not a palindrome");
 return 0;
}