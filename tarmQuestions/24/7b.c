#include <stdio.h>

int maxFinder(int n1, int n2, int n3)
{
    if(n1 > n2 && n1 > n3)
        return n1;

    else if(n2 > n1 && n2 > n3)
        return n2;

    else
        return n3;
}

int main()
{
    ////use the function
}