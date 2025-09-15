#include <stdio.h>

int isPrime(int n)
{
    // check n is devided by any number or not, if devided then return 0
    //(If a number devided by without 1 and this number its not a prime number,so using return 0, we break the function)
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0; // As we don't need to see the number if its become not prime

    printf("%d\t", n);
}

int main()
{
    printf("Enter n: ");
    int number = 0;
    scanf("%d", &number);

    if (number > 1)
        for (int i = 2; i <= number; i++)
            isPrime(i);

    else
        printf("Invalid number!");

    return 0;
}