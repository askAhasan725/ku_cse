#include <stdio.h>

int strLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    return length;
}

void strReverse(char str[], char rev[])
{
    int length = strLength(str);
    for (int i = 0; i < length; i++)
        rev[i] = str[length - i - 1];
    rev[length] = '\0';
}

int main()
{
    char string[100], reversed[100];
    printf("Enter a string: ");
    gets(string);

    // Reverse the string
    strReverse(string, reversed);

    // Output the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}