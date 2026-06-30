#include <stdio.h>

void compressString(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        int count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
        i++;
    }

    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}