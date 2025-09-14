/*

Problem 08: Write a program to find the sum of digits of a given number

*/

#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += n % 10; // add last digit to sum, 12 % 10 = 2, so sum = sum + 2;
        n /= 10;       // remove last digit from number
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}