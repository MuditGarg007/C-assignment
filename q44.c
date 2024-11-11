#include <stdio.h>

int main() {
    int I,J;
    printf("Enter number of rows in matrices: ");
    scanf("%d", &I);
    printf("Enter number of columns in matrices: ");
    scanf("%d", &J);
    int A[I][J], B[I][J], C[I][J];

    printf("Enter the matrix A: \n");
    for(int i=0; i<I; i++) {
        for(int j=0; j<J; j++) {
            printf("Enter the element A(%d, %d): ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the matrix B: \n");
    for(int i=0; i<I; i++) {
        for(int j=0; j<J; j++) {
            printf("Enter the element B(%d, %d): ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("Matrix A: \n");
    for(int i=0; i<I; i++) {
        for(int j=0; j<J; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    print("\n");
    printf("Matrix B: \n");
    for(int i=0; i<I; i++) {
        for(int j=0; j<J; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<I; i++) {
        for(int j=0; j<J; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n");
    printf("Sum of matrix A and matrix B is: \n");
    for(int i=0; i<I; i++) {
        for(int j=0; j<J; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}