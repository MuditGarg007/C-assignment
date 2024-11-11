#include <stdio.h>

int main() {
    int matrix[3][4];

    printf("Enter values of matrix A: \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("Enter value for A(%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    int maxI=0, maxJ=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            if(matrix[maxI][maxJ]<matrix[i][j]) {
                maxI = i;
                maxJ = j;
            }
        }
    }
    
    printf("Index of max elment is: %d, %d", maxI, maxJ);
    return 0;
}