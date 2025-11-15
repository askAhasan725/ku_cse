#include <stdio.h>

int allNeg(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        if(array[i] > 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int x = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &x);

    int arr[x];
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("%d", allNeg(arr, x));

    return 0;
}