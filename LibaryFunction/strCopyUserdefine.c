#include <stdio.h>

// to copy string using user define function
void strCopy(char from[], char to[])
{
    int i = 0;
    while (from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}

int main()
{
    char text[100], str[100];
    printf("Enter a text: ");
    gets(text);

    // Copy the string
    strCopy(text, str);

    printf("Copied string: %s\n", str);

    return 0;
}