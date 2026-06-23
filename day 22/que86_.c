#include <stdio.h>
int main() {
char str[200];
int i = 0, words = 0;

    printf("enter a sentence: ");
fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
  words++;
        }
        i++;
    }
    if (str[0] != '\n' && str[0] != '\0') {
        words++;
    }
 printf("number of words = %d\n", words);

    return 0;
}