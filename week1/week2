#include <stdio.h>
#include <stdlib.h>
 
void allocatememory(int ***arr, int rows, int cols);
void takeinputs(int **arr, int rows, int cols);
void printtmatrix(int **arr, int rows, int cols);
void matrixmultiplication(int **mat1, int **mat2, int ***result, int r1, int c1, int c2);
 
int main() {
    int **mat1, **mat2, **result;
    int r1, c1, r2, c2;
 
    // Input dimensions for the first matrix
    printf("Enter the rows and columns of the first matrix:\n");
    scanf("%d %d", &r1, &c1);
 
    // Allocate memory for the first matrix
    allocatememory(&mat1, r1, c1);
 
    // Take inputs for the first matrix
    printf("Enter elements of the first matrix:\n");
    takeinputs(mat1, r1, c1);
 
    // Input dimensions for the second matrix
    printf("Enter the rows and columns of the second matrix:\n");
    scanf("%d %d", &r2, &c2);
 
    // Ensure the matrices can be multiplied (c1 == r2)
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }
 
    // Allocate memory for the second matrix
    allocatememory(&mat2, r2, c2);
 
    // Take inputs for the second matrix
    printf("Enter elements of the second matrix:\n");
    takeinputs(mat2, r2, c2);
 
    // Allocate memory for the result matrix
    allocatememory(&result, r1, c2);
 
    // Perform matrix multiplication
    matrixmultiplication(mat1, mat2, &result, r1, c1, c2);
 
    // Print the resulting matrix
    printf("The result of matrix multiplication is:\n");
    printtmatrix(result, r1, c2);
 
    // Free memory for all matrices
    for (int i = 0; i < r1; i++) free(mat1[i]);
    free(mat1);
 
    for (int i = 0; i < r2; i++) free(mat2[i]);
    free(mat2);
 
    for (int i = 0; i < r1; i++) free(result[i]);
    free(result);
 
    return 0;
}
 
void allocatememory(int ***arr, int rows, int cols) {
    *arr = (int **)malloc(rows * sizeof(int *));
    if (*arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
 
    for (int i = 0; i < rows; i++) {
        (*arr)[i] = (int *)malloc(cols * sizeof(int));
        if ((*arr)[i] == NULL) {
            printf("Memory allocation failed for row %d.\n", i);
            exit(1);
        }
    }
}
 
void takeinputs(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
 
void printtmatrix(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
 
void matrixmultiplication(int **mat1, int **mat2, int ***result, int r1, int c1, int c2) {
    // Initialize the result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            (*result)[i][j] = 0;
        }
    }
 
    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                (*result)[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

