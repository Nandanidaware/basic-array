
#include <stdio.h>
//90degree clockwise
int main() {
    int row, column;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &row);
    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d", &column);

    int arr[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("ENTER THE ELEMENT AT [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < row; i++) 
    {
        for (int j = i + 1; j < column; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Reverse the columns
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][column - 1 - j];
            arr[i][column - 1 - j] = temp;
        }
    }

    printf("ROTATED MATRIX:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
//90 degree anticlockwise

#include <stdio.h>

int main() {
    int row, column;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &row);
    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d", &column);

    int arr[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("ENTER THE ELEMENT AT [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < column; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Reverse the rows
    for (int i = 0; i < row / 2; i++) {
        for (int j = 0; j < column; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[row - 1 - i][j];
            arr[row - 1 - i][j] = temp;
        }
    }

    printf("ANTICLOCKWISE ROTATED MATRIX:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
