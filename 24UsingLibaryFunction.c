// 24. Write a program to check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

// to reverse the string
void strRev(char str[], char reversed[])
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
        reversed[i] = str[length - 1 - i];

    reversed[length] = '\0';
}

int main()
{
    char str1[100], revStr[100];

    // input strings
    printf("Input 1st String: ");
    gets(str1);

    // reverse
    strRev(str1, revStr);

    // compair them
    if (strcmp(str1, revStr) == 0)
        printf("\'%s\' is a pelendrom!", str1);
    else
        printf("This is not a pelendrom!");

    return 0;
}