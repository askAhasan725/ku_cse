#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    printf("Enter two number (x y): ");
    scanf("%d %d", &x, &y);

    // findou out small number and learge number
    int small = x > y ? y : x, learge = x > y ? x : y;

    while (small != 0)
    {
        int temp = small;
        small = learge % small; // learge = learge % small
        learge = temp;
    }

    printf("GCD is: %d", learge);

    return 0;
}