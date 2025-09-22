#include <stdio.h>

int compare(char str[], char str2[])
{
    int i = 0;
    while (str[i] != '\0' && str2[i] != '\0')
    {
        if (str[i] != str2[i])
            return 0;
        else
            i++;
    }

    if (str[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    char string[100], reversed[100];
    printf("Enter a string: ");
    gets(string);

    // Reverse the string
    int length = 0;
    while (string[length] != '\0')
        length++;

    // store reversed string
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
        reversed[j] = string[i];

    // add a null char at the last index
    reversed[length] = '\0';

    // Check if the string is a palindrome
    if (compare(string, reversed) == 0)
        printf("The string is a palindrome.\n");

    else
        printf("The string is not a palindrome.\n");

    return 0;
}