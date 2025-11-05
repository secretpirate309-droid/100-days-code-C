#include<stdio.h>

//Add two matrices.


void addMatrices(int rows, int cols, int mat1[][cols], int mat2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}


void printMatrix(int rows, int cols, int mat[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
   
    int rows, cols;

   
    rows = 2;
    cols = 2;

    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };
    
   
    int sumMatrix[2][2];

    printf("Matrix 1:\n");
    printMatrix(rows, cols, matrix1);
    
    printf("\nMatrix 2:\n");
    printMatrix(rows, cols, matrix2);
    
    
    addMatrices(rows, cols, matrix1, matrix2, sumMatrix);

 
    printf("\nOutput (Sum Matrix):\n");
    printMatrix(rows, cols, sumMatrix);
    
    return 0;
}