// 23. Write a program to find the length of a string using strlen().
// 23. Write a program to find the length of a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Electronics and Communication Engineering";
    int length = strlen(name);

    printf("Length of \'%s\' is: %d", name, length);

    return 0;
}