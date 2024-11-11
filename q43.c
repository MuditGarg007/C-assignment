#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the matrix A: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("Enter the element A(%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered matrix: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    printf("Transpose of matrix A: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}