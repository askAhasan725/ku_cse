#include <stdio.h>

int isPrime(int n)
{
    // check n is devided by any number or not, if devided then return 0
    //(If a number devided by without 1 and this number its not a prime number,so using return 0, we break the function)
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            printf("%d is not a prime number!", n);

    // If the avobe code not break, thats meen
    // this is not devided by without it and 1, so its prime
    printf("%d is a prime number.", n);
}

int main()
{
    printf("Enter a number to test: ");
    int number = 0;
    scanf("%d", &number);

    if (number > 1)
        isPrime(number);

    else
        printf("Invalid number!");

    return 0;
}