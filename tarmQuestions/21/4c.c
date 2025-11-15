#include <stdio.h>

int main()
{
    //swap without 3rd variable
    int a = 5, b = 6;
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a:%d b:%d", a, b);
    return 0;
}