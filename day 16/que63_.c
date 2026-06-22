#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
 int target = 6;

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

if (sum == target) {
      printf("Pair : %d and %d\n", arr[left], arr[right]);
            return 0;
 } else if (sum < target) {
            left++;
        } else {
       right--;
        }
    }

 printf("No pair \n");
    return 0;
}