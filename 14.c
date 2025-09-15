// Multiply two matrices

#include <stdio.h>

int main()
{
    // initial all variables
    int x = 0, y = 0, m = 0, n = 0;

    // input Matrix A
    printf("Enter the dimention of first matrix (row x column): ");
    scanf("%d %d", &x, &y);
    int mA[x][y];
    printf("Enter elements of matrix A: \n");
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Matrix A (%d x %d): ", i + 1, j + 1);
            scanf("%d", &mA[i][j]);
        }

    // input Matrix B
    printf("Enter the dimention of second matrix (row x column): ");
    scanf("%d %d", &m, &n);
    int mB[m][n];
    printf("Enter elements of matrix B: \n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("Matrix B (%d x %d): ", i + 1, j + 1);
            scanf("%d", &mB[i][j]);
        }

    // check if multiplication is possible
    if (y != m)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }
    
    // multiply
    int mC[x][n];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < n; j++)
        {
            mC[i][j] = 0;
            for (int k = 0; k < y; k++)
                mC[i][j] += mA[i][k] * mB[k][j];
        }

    // print result
    printf("Resultant matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mC[i][j]);
        printf("\n");
    }

    return 0;
}