/*

    Problem 06: Write a program using a function to compute the nth Fibonacci number

*/

#include <stdio.h>

int fibonacci(int x, int low, int high)
{
    // If series completed break the function
    if (x <= 2)
        return 0;

    return low + high + fibonacci(x - 1, high, low + high);
}

int main()
{
    // init the variables
    int x = 0;
    printf("Enter total number: ");
    scanf("%d", &x);

    // calculation
    int sumOfTheSeries = fibonacci(x, 0, 1);

    // output
    printf("Sum of the series is: %d\n", sumOfTheSeries);
    return 0;
}