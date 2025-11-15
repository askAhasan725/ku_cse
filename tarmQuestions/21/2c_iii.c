#include <stdio.h>

void main()
{
    int arr[5], n =0;

    while(n < 4)
        arr[n] = n++;
    
    for(n = 3; n > 0; n--)
        printf("%d ", arr[n]);
}