// 25. Write a program to concatenate two strings without using strcat().

#include <stdio.h>

// strLen
int strLen(char str[])
{
    int i = 0;
    while (str[i] !='\0')
        i++;

    return i;
}

// add string
void strAdd(char to[], char form[])
{
    // find the length of
    int toLength = strLen(to);
    int formLength = strLen(form);

    for (int i = 0; i < formLength; i++)
        to[toLength + i] = form[i];
}

int main()
{
    char discipline[] = "Electronics and Communication Engineering Dicsipline";
    char varsity[] = " Of KHULNA UNIVERSITY";

    // connect them
    strAdd(discipline, varsity);

    printf("%s", discipline);

    return 0;
}