//Find the transpose of a matrix

#include <stdio.h>

int main() {

    int x = 0, y = 0;
    printf("Enter the dimension of the matrix (row x column): ");
    scanf("%d %d", &x, &y);
    int matrix[x][y];
    printf("Enter elements of the matrix: \n");
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Matrix (%d x %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }

    // Find the transpose
    int transpose[y][x];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            transpose[j][i] = matrix[i][j];

    // Print the transpose
    printf("Transpose of the matrix: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}