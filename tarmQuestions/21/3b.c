#include <stdio.h>

int main() {
    int amount = 0, reminder = 0;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int n100 = amount/100; reminder = amount % 100;
    int n50 = reminder/50; reminder = reminder % 50;
    int n20 = reminder/20; reminder = reminder % 20;
    int n10 = reminder/10; reminder = reminder % 10;
    int n5 = reminder/5; reminder = reminder % 5;
    int n2 = reminder/2; reminder = reminder % 2;
    int n1 = reminder/1; reminder = reminder % 1;

    printf("There are %d note(s) of 100.00 %d note(s) of 50.00 %d note(s) of 20.00 %d note(s) of 10.00 %d note(s) of 5.00 %d note(s) of 2.00 %d note(s) of 1.00\n", n100, n50, n20, n10, n5, n2, n1);
}