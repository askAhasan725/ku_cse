// 17. Write a program to find the length of a string using pointers.
// or Write a program to find the length of a string using index.
// or Write a program to find the length of a string.

#include <stdio.h>

int main()
{
    // init string
    char name[] = "K.M. Ahasan Abdullah";

    // init counter variable
    int count = 0;

    while (name[count] != '\0')
        count++;

    // print result
    printf("Total element of the array is : %d\n", count);

    // another way, init counter variable
    int i;
    for (i = 0; name[i] != '\0'; i++)
        ;

    printf("Total element of the array is: %d", i);
}