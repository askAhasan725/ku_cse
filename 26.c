#include <stdio.h>

// strLen
int strLen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int main()
{
    char string[100];
    printf("Enter the String: ");
    fgets(string, sizeof(string), stdin);

    int vowel = 0, consonant = 0;
    int strLength = strLen(string);

    for (int i = 0; i < strLength; i++)
    {
        // check vowels (both lower & upper case)
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            vowel++;
        }
        // check consonants
        else if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            consonant++;
        }
    }

    printf("The string contains:\nVowels: %d\nConsonants: %d\n", vowel, consonant);

    return 0;
}
