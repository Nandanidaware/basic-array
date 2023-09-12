#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n (size of the matrix): ");
    scanf("%d", &n);

    int matrix[n][n];
    int num = 1;
    int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = n - 1;

    while (num <= n * n) {
        // Traverse right
        for (int i = colStart; i <= colEnd; ++i) {
            matrix[rowStart][i] = num++;
        }
        ++rowStart;

        // Traverse down
        for (int i = rowStart; i <= rowEnd; ++i) {
            matrix[i][colEnd] = num++;
        }
        --colEnd;

        // Traverse left
        for (int i = colEnd; i >= colStart; --i) {
            matrix[rowEnd][i] = num++;
        }
        --rowEnd;

        // Traverse up
        for (int i = rowEnd; i >= rowStart; --i) {
            matrix[i][colStart] = num++;
        }
        ++colStart;
    }

    // Print the spiral matrix
    printf("Spiral Pattern:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

