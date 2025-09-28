// 19. Write a program to demonstrate local and global variables.

#include <stdio.h>

// Global variable
int global = 100;

// Function to demonstrate access to global variable
void displayGlobal()
{
    printf("Inside displayGlobal() function, global = %d\n", global);
}

int main()
{
    // Local variable
    int local = 50;

    printf("Inside main() function:\n");
    printf("local = %d\n", local);   // Local variable
    printf("global = %d\n", global); // Global variable

    // Modify global variable
    global = 200;
    printf("After modifying in main(), global = %d\n", global);

    // Call another function
    displayGlobal();

    return 0;
}
