#include<stdio.h>

//Perform diagonal traversal of a matrix.




void diagonalTraversal(int R, int C, int matrix[R][C]) {
    if (R == 0 || C == 0) return;

   
    int total_diagonals = R + C - 1;

    for (int k = 0; k < total_diagonals; k++) {
        int r_start, c_start;

       
        if (k < C) {
            
            r_start = 0;
            c_start = k;
        } else {
           
            r_start = k - C + 1;
            c_start = C - 1;
        }

       
        
        int r = r_start;
        int c = c_start;

        while (r < R && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
    }
    printf("\n");
}

int main() {
    int R, C;
    
    if (scanf("%d %d", &R, &C) != 2) return 1;

    int matrix[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }

    diagonalTraversal(R, C, matrix);

    return 0;
}