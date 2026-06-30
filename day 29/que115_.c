#include <stdio.h>
#include <string.h>

int main() {

    int choice;
    char str1[100], str2[100], temp[100];


    while(1) {

        printf("\n===== String Operation System =====");
        printf("\n1. Find Length of String");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch(choice) {


            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                printf("Length = %d\n", strlen(str1));
                break;



            case 2:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                strcpy(temp, str1);

                printf("Copied String: %s\n", temp);
                break;



            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);


                strcat(str1, str2);

                printf("Concatenated String: %s\n", str1);
                break;



            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);


                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");

                else
                    printf("Strings are not equal\n");

                break;



            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);


                strcpy(temp, str1);

                strrev(temp);


                printf("Reversed String: %s\n", temp);
                break;



            case 6:
                printf("Exiting...");
                return 0;



            default:
                printf("Invalid choice");
        }

    }


    return 0;
}