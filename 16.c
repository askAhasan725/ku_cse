#include <stdio.h>

int main()
{
    char a = 'a', b = 'b';

    // init pointers
    char *pA, *pB, *pTemp, temp; // temp is a void memory location and pTemp will point the location

    // assign memory address in pointers
    pA = &a; // pA store the address of variable a
    pB = &b; // pB store the address of variable b
    pTemp = &temp;
    *pTemp = a; // to store the value of a to the temporary pointer variable.

    // sweep value
    a = *pB;
    b = *pTemp;
    printf("a is: %c\n", a);
    printf("b is: %c\n", b);

    return 0;
}