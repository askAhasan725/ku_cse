// 20. Write a program to show how a static variable retains its value across multiple function calls.

#include <stdio.h>

// Function with static variable
void counterFunction()
{
    static int count = 0; // init er pore er man kokhono 0 hobe na
    count++;
    printf("Function called %d times\n", count);
}

int main()
{
    // Call the function multiple times
    counterFunction(); // After call the function value of static variable is 1
    counterFunction(); // After that 1+1=2
    counterFunction(); // After that 3
    counterFunction(); // After that 4
    return 0;
}
