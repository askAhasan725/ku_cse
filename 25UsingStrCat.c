// 25. Write a program to concatenate two strings without using strcat()

#include <stdio.h>
#include <string.h>

int main()
{
    char discipline[] = "Electronics and Communication Engineering Dicsipline";
    char varsity[] = " Of KHULNA UNIVERSITY";

    // connect them
    strcat(discipline, varsity);

    printf("%s", discipline);

    return 0;
}