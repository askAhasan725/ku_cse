#include <stdio.h>

int main() {
    int x = 5, y, z;
    y = --x; // age -ve hove pore y e assign hobe os, y = 4
    z = x--; // age x er value z e assign hobe, pore x -1 hobe, z = 4, x = 3
    z++; // z er value 1 barabe, z = 5

    printf("%d %d", x, z); // x = 3, z = 5


    return 0;
}