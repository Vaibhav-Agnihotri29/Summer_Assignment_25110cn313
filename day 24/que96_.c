#include <stdio.h>

void removeDuplicates(char str[]) {
    int visited[256] = {0};
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            visited[(unsigned char)str[i]] = 1;
            str[index++] = str[i];
        }
    }

    str[index] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}