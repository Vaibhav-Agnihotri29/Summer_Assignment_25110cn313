#include <stdio.h>
void rightRotate(int arr[], int n, int g) {
    g = g % n;

    while (g--) {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--) {
                 arr[i] = arr[i - 1];
     }

  arr[0] = last;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int g = 1;

    rightRotate(arr, n, g);

    printf("Array after right rotation: ");
for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

return 0;
}