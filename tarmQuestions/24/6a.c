#include <stdio.h>
#include <math.h>

int fact(int n){
    if( n == 0 || 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n = 0, x = 0, sum;

    //Entrer n
    printf("Enter value of n: ");
    scanf("%d", &n);

    //Enter x
    printf("Enter value of x: ");
    scanf("%d", &x);

    //calculation
    for(int i = 0; i <= n; i++)
        sum += pow(-1, i) * pow(x, i) / fact(i);

    printf("Sum of the series is: %d\n", sum);


    return 0;
}