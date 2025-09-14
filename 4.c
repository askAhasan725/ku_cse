/*

Problem 04: Write a function to calculate factorial of a number

*/

#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %llu\n", num, factorial(num));
    return 0;
}