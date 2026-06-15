#include <stdio.h>
int count(int arr[], int size, int val) {

 int i, amt = 0;
   
 for (i = 0; i < size; i++)
        if (arr[i] == val) amt++;
    return amt;

}
int main() {
    int nums[100], n, i, num;

 scanf("%d", &n);

for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
scanf("%d", &num);

printf("%d", count(nums, n, num));
return 0;

}

