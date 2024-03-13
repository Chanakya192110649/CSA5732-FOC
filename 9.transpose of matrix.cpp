#include <stdio.h>

int main() {
    const int ROWS = 3;
    const int COLS = 3;

    int matrix[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int i, j;
    
    printf("Original Matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
