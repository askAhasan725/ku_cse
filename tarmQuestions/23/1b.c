#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    int temp = b;
    b = c;
    c = a;
    a = temp; 

    printf("a=%d b=%d c=%d", a, b, c);

    return 0;
}