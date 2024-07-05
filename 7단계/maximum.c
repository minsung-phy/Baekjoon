#include <stdio.h>

int main(void) {
    int matrix[9][9];
    int max = 0;
    int row = 1, col = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                row = i+1; col = j+1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", row, col);

    return 0;
}