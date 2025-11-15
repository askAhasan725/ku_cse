#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = -6;
    printf("%d\n", a>b && a<c); //Output 0
    printf("%d\n", a<b && a>c); //Output 1
    printf("%d\n", a==c || b>a); //Output 1
    printf("%d\n", b>15 && c < 0 || a>0); //Output 1
    printf("%d\n", (a/2 == 0 && b/2 == 0) || c < 0); //Output 1

    return 0;
}