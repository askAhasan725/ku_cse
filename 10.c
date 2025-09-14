/*

Problem 10: Write a program to find the largest and smallest elements in an array

*/

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        // to findout the largest number
        if (arr[i] > largest)
            largest = arr[i];

        // to findout the smallest number
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}