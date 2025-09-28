#include <stdio.h>

int main()
{
    char a = 'a', b = 'b';

    // init pointers
    char *p1, *p2, *pTemp;

    // assign memory address in pointers
    p1 = &a;
    p2 = &b;
    char temp = a;

    // sweep value
    a = *p2;
    b = *p1;
    printf("a is: %c\n", *p1);
    printf("b is: %c\n", *p1);
}