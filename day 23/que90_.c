#include <stdio.h>

char firstRepeatingChar(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 1) {
            return str[i];
        }
    }

    return '\0'; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    char result = firstRepeatingChar(str);

    if (result != '\0')
        printf("First repeating character: %c\n", result);
    else
        printf("No repeating character found.\n");

    return 0;
}