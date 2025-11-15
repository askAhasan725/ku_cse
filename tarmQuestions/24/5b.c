#include <stdio.h>

int main() {
    int row = 4, num;

    for(int i =1; i <= row; i++)
    {
        if(i%2 == 0)
            num = 0;
        else
            num = 1;

        for(int j = 0; j < i; j++)
        {
            printf("%d ", num);
            num = (num == 0) ? 1 : 0;
        }
        printf("\n");
        
    }
    return 0;
}