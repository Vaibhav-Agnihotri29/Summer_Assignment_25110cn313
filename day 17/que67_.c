#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
 int arr2[] = {2, 3, 5, 7, 9};

int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 int i = 0, j = 0;

printf("Intersection arrays: ");
while (i < n1 && j < n2) {

        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
     i++;
            j++;
        }
  else if (arr1[i] < arr2[j]) {
            i++;
        }
     else {
      j++;
        }
    }
 return 0;
}