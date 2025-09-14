/*

    Problem 06: Write a program using a function to compute the nth Fibonacci number

*/

#include <stdio.h>

int fibonacci(int x, int low, int high)
{
    // If series completed break the function
    if (x <= 2)
        return 0;

    printf("%d\t", low + high);
    return fibonacci(x - 1, high, low + high);
}

int main()
{
    int x = 0;
    scanf("%d", &x);
    printf("0\t1\t");
    fibonacci(x, 0, 1);
    return 0;
}