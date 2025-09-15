#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    printf("Enter two number (x y): ");
    scanf("%d %d", &x, &y);

    // findou out small number and learge number
    int small = x > y ? y : x, learge = x > y ? x : y;

    int i;
    for (i = small; i > 1; i--)
        if (learge % i == 0 && small % i == 0)
            break;

    printf("GCD is: %d", i);

    return 0;
}