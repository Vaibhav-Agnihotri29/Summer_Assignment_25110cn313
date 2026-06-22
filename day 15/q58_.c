#include <stdio.h>
void leftRotate(int arr[], int n, int p) {
    p = p % n;

    while (p--) {
        int first = arr[0];

  for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

 arr[n - 1] = first;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
 int p = 3;

    leftRotate(arr, n, p);

 printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 return 0;
}