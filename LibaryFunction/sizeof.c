#include <stdio.h>

// to read string using gets function
int sizeOf(char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    return length;
}

int main()
{
    char string[100];
    printf("Enter a string: ");
    gets(string);

    // Calculate the size of the string
    int length = sizeOf(string);

    // Output the size of the string
    printf("Size of the string: %d\n", length);

    return 0;
}