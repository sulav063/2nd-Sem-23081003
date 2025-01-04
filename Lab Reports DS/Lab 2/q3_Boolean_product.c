#include <stdio.h>

void booleanProduct(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    int i, j, k;

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] = result[i][j] || (mat1[i][k] && mat2[k][j]);
            }
        }
    }
}

void printMatrix(int mat[][100], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;
    int i, j;

    printf("Enter the number of rows for Matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for Matrix 1: ");
    scanf("%d", &cols1);

    printf("Enter values for Matrix 1 (%dx%d):\n", rows1, cols1);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows for Matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for Matrix 2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    printf("Enter values for Matrix 2 (%dx%d):\n", rows2, cols2);
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    booleanProduct(mat1, mat2, result, rows1, cols1, rows2, cols2);

    printf("\nMatrix 1:\n");
    printMatrix(mat1, rows1, cols1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2, rows2, cols2);

    printf("\nBoolean Product:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}
