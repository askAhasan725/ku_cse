/*

Problem 01: Write a program to input radius and calculate area and circumference of a circle

*/

#include <stdio.h>

int main()
{
    // initial r and get input from user
    int r = 0;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    // calculate area and circumference
    float area = 3.14 * r * r;
    float circumference = 2 * 3.14 * r;

    // print area and circumference
    printf("Area of circle is: %.2f\n", area);
    printf("Circumference of circle is: %.2f\n", circumference);

    return 0;
}