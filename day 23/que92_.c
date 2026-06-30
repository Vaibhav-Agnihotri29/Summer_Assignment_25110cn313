#include <stdio.h>

char maxOccurringChar(char str[]) {
    int freq[256] = {0};
    int max = 0;
    char result;

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Maximum occurring character: %c\n", maxOccurringChar(str));

    return 0;
}