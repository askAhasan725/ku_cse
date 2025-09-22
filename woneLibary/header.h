// to calculate string length using user define function
int strLen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// to read string using gets function
int sizeOf(char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    return length;
}

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

// to reverse string using user define function
void strReverse(char str[], char rev[])
{
    int length = strLen(str);
    for (int i = 0; i < length; i++)
        rev[i] = str[length - i - 1];
    rev[length] = '\0';
}