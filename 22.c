/* Concept First (ChatGPT)

Call by Value
When you pass arguments to a function, only copies of the values are sent.
→ Changes happen inside the function only, not in the original variables.

Call by Reference
You pass the addresses of variables (using pointers).
→ Function works directly on original variables, so changes remain outside too. */

#include <stdio.h>

// Function with call by value
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swap function: x = %d, y = %d\n", *x, *y);
}

int main()
{
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b); // Pass by reference -> memory address

    printf("After swap (main): a = %d, b = %d\n", a, b);

    return 0;
}
