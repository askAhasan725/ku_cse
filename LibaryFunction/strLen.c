#include <stdio.h>

int main()
{
    // to get a string from user
    printf("Enter a text: ");
    char text[100];
    gets(text);

    //calculate length of string
    int i = 0;
    while (text[i] != '\0')
        i++;

    //print the length of string
    printf("Length of the string is: %d\n", i);

    return 0;
}