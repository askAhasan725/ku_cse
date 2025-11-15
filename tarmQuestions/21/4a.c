#include <stdio.h>

void main() 
{
    int arr[4][3] = {1,2,3, 2,3,4, 3,4,5, 4,5,7};

    int sum = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            // top row or bottom row
            if(i == 0 || i == 3)
                sum += arr[i][j];

            // left or right column (middle rows only)
            else if(j == 0 || j == 2)
                sum += arr[i][j];
        }
    }

    printf("%d", sum);
}