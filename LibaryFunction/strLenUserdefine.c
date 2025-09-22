#include <stdio.h>

// to calculate string length using user define function
int strLen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int main()
{
    // to get a string from user
    printf("Enter a text: ");
    char text[100];
    gets(text);

    //call our function to with *text* argument to calculate length
    int lengthOfString = strLen(text);

    //print the length of string
    printf("Length of the string is: %d\n", lengthOfString);

    return 0;
}