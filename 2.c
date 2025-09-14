/*

Problem 2: Write a program to swap two variables without using a third variable

*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}