// 18. Write a program to demonstrate pointer arithmetic (addition, subtraction).

#include <stdio.h>

int main()
{
    // Addition
    char varsity[] = "Khulna University";

    char *point;            // represent the 0 index
    point = varsity;        // now point store the address of 0 index of varsity variable
    printf("%c\n", *point); // point is memory address, and *point is what value the address store! => K

    point += 1;             // represent the 1 index
    printf("%c\n", *point); // It will indecates the next memory location, like the location of next letter => h

    point += 5;             // represent the 6 index
    printf("%c\n", *point); // It will indecates the index 6 =>  (space)

    printf("%c\n", *++point); // It will point the index 7 =>  U

    // Substraction
    // now our pointer index is 7
    point -= 7; // if we descries it by 7 then it will bw 0 indexed, => K (The first letter)
    printf("%c\n", *point);

    return 0;
}