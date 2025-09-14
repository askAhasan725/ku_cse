/*

Problem 09: 9. Write a program to display all prime numbers between 1 and 100

*/

#include <stdio.h>

int main()
{
    printf("Prime numbers between 1 and 100 are: ");
    for (int i = 2; i <= 100; i++)
    {
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }

        if (is_prime)
            printf("%d\t", i);
    }
    printf("\n");
    return 0;
}