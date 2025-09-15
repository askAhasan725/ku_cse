// Add two 3×3 matrices

#include <stdio.h>

int main()
{
    int x = 3;
    // scanf("%d", &x);   => If sir says to take a nxn matrix.....

    // initiate matrix
    int mA[x][x], mB[x][x], mR[x][x];

    // input of Matrix A
    printf("Enter elements of matrix A: \n");
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
        {
            printf("Matrix A (%d x %d): ", i + 1, j + 1);
            scanf("%d", &mA[i][j]);
        }

    // input of Matrix B
    printf("Enter elements of matrix B: \n");
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
        {
            printf("Matrix B (%d x %d): ", i + 1, j + 1);
            scanf("%d", &mB[i][j]);
        }

    // sum of two matrix
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
            mR[i][j] = mA[i][j] + mB[i][j];

    // print result
    printf("Sum of two matrix is: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
            printf("%d\t", mR[i][j]);
        printf("\n");
    }
    return 0;
}