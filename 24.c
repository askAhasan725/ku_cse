// 24. Write a program to check if a string is a palindrome.

#include <stdio.h>

// to get the length
int strLen(char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    return length;
}

// to reverse the string
void strRev(char str[], char reversed[])
{
    int length = strLen(str);

    for (int i = 0; i < length; i++)
        reversed[i] = str[length - 1 - i];
}

// to compair the string
int strComp(char str1[], char str2[])
{
    int length = strLen(str1);
    for (int i = 0; i < length; i++)
        if (str1[i] != str2[i])
            return 1;

    return 0;
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
    if (strComp(str1, revStr) == 0)
        printf("\'%s\' is a pelendrom!", str1);
    else
        printf("This is not a pelendrom!");

    return 0;
}