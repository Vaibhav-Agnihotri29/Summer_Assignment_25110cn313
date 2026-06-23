#include <stdio.h>
int main() {
 int n, isSymmetric = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
}
    }

 for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
     if (matrix[i][j] != matrix[j][i]) {
 isSymmetric = 0;
  break;
   }
        }
    }

 if (isSymmetric)
 printf("he matrix is symmetric.\n");
    else
        printf("he matrix is not symmetric.\n");

    return 0;
}