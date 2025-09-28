// 17. Write a program to find the length of a string using pointers.

#include <stdio.h>

int main()
{
    // init string
    char name[] = "K.M. Ahasan Abdullah";

    // get the address of first element
    char *pointer;
    pointer = name;

    // init counter variable
    int count = 0;

    while (*pointer != '\0')
    {
        count++, pointer++;
    }

    printf("Total element of the array is: %d", count);
}