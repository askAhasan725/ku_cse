#include <stdio.h>

int main() {
    char text[100], str[100];
    printf("Enter a text: ");
    gets(text);

    // Copy the string
    int i = 0;
    while (text[i] != '\0') {
        str[i] = text[i];
        i++;
    }

    str[i] = '\0'; // Null-terminate the copied string

    printf("Copied string: %s\n", str);

    return 0;
}