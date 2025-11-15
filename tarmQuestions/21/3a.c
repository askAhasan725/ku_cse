#include <stdio.h>

int isPrime(int n){
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0; // Not prime
        }
    }
    return 1;
}

int main()
{
    for(int i = 11; i < 50; i++)
        if(isPrime(i) == 0)
            printf("%d ", i);
    
    return 0;
}