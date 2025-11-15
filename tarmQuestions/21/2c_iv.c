#include <stdio.h>

void main()
{
    int a[3] = {11, 14, 15}, i = 0;
    a[1] =20;

    while(i<1){
        printf("%d ", a[++i]);
        i++;
    }
    printf("%d", i);
}