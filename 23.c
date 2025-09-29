// 23. Write a program to find the length of a string without using strlen().

#include <stdio.h>

int main()
{
    char name[] = "Electronics and Communication Engineering";
    int length = strlen(name);

    int i = 0;
    while(name[i] != '\0')
        i++;

    printf("Length of \'%s\' is: %d", name, i);

    return 0;
}