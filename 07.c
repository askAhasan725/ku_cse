/*

Problem 07: 7. Write a program to print the multiplication table of any number

*/

#include <stdio.h>

int main()
{
    // initial part
    printf("Enter a number to see its multiplication table: ");
    int x = 0;
    scanf("%d", &x);

    // print multiplication table (Namta)
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", x, i, x * i);

    return 0;
}