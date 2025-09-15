#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    printf("Enter two number (x y): ");
    scanf("%d %d", &x, &y);

    // findou out small number and learge number
    int small = x > y ? y : x, learge = x > y ? x : y;

    for (int i = learge;; i++)
        if (i % small == 0 && i % learge == 0)
        {
            printf("LCM is: %d", i);
            break;
        }
    // printf("LCM is: %d", learge);

    return 0;
}