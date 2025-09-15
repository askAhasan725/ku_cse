// Find out lcm

#include <stdio.h>

int main()
{
    int x, y, max, lcm;

    printf("Enter two numbers (x y): ");
    scanf("%d %d", &x, &y);

    max = (x > y) ? x : y; // Find the maximum

    while (1)
    {
        if (max % x == 0 && max % y == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is %d\n", x, y, lcm);
    return 0;
}
