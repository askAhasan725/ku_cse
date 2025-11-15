#include <stdio.h>

int length(char arr[])
{
    int i = 0;
    while(arr[i] != '\0')
        i++;
    return i;
}

void strRev(char arr1[], char arr2[])
{
    int len = length(arr1);
    for(int i = 0; i < len; i++)
        arr2[i] = arr1[len-1-i];

    arr2[len] = '\0';
}

int compair(char arr1[], char arr2[])
{
    int len = length(arr1);
    for(int i = 0; i < len; i++)
        if(arr1[i] != arr2[i])
            return 0;

    return 1;
}

int main()
{
    char text[100], revText[100];
    gets(text);
    strRev(text, revText);

    if(compair(text, revText) == 1)
        printf("PELANDROM!");
    else
        printf("NOT PELANDROM!");

    return 0;
}