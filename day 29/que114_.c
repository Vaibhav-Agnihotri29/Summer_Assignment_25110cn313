#include <stdio.h>

#define MAX 100

int arr[MAX];
int n = 0;


// Create Array
void createArray() {

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array created successfully\n");
}


// Display Array
void displayArray() {

    if(n == 0) {
        printf("Array is empty\n");
        return;
    }


    printf("Array elements: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}


// Insert Element
void insertElement() {

    int pos, value;


    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);


    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }


    arr[pos] = value;
    n++;


    printf("Element inserted\n");
}


// Delete Element
void deleteElement() {

    int pos;


    printf("Enter position to delete: ");
    scanf("%d", &pos);


    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }


    n--;

    printf("Element deleted\n");
}


// Search Element
void searchElement() {

    int value, found = 0;


    printf("Enter element to search: ");
    scanf("%d", &value);


    for(int i = 0; i < n; i++) {

        if(arr[i] == value) {

            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }


    if(!found)
        printf("Element not found\n");
}


// Sort Array
void sortArray() {

    int temp;


    for(int i = 0; i < n-1; i++) {

        for(int j = 0; j < n-i-1; j++) {

            if(arr[j] > arr[j+1]) {

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }


    printf("Array sorted successfully\n");
}


// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n===== Array Operation System =====");
        printf("\n1. Create Array");
        printf("\n2. Display Array");
        printf("\n3. Insert Element");
        printf("\n4. Delete Element");
        printf("\n5. Search Element");
        printf("\n6. Sort Array");
        printf("\n7. Exit");


        printf("\nEnter your choice: ");
        scanf("%d",&choice);


        switch(choice) {

            case 1:
                createArray();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                insertElement();
                break;

            case 4:
                deleteElement();
                break;

            case 5:
                searchElement();
                break;

            case 6:
                sortArray();
                break;

            case 7:
                printf("Exiting...");
                return 0;

            default:
                printf("Invalid choice");
        }
    }


    return 0;
}