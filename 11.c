/*

Problem 11: Write a program to reverse an array

*/

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n], reversedArr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        reversedArr[i] = arr[n - i - 1];

    printf("Reversed array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", reversedArr[i]);

    return 0;
}