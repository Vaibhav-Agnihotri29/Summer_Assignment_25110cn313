#include <stdio.h>

int stringLength(char str[]) {
  int count = 0;

    while (str[count] != '\0') { 
           count++;
    }
return count;
}

int main() {
    char str[] = "Hello World";
printf("Length = %d\n", stringLength(str));

    return 0;
}