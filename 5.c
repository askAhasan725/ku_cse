/*

Problem 05: Write a function to check whether a given number is prime

*/

#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    int is_prime = 1; // Assume the number is prime

    if (num <= 1)
    {
        is_prime = 0; // 0 and 1 are not prime numbers
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (is_prime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}