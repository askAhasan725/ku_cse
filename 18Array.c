#include <stdio.h>

void arrPrinter(int arrayPointer[])
{
    int *memoryAddress = arrayPointer + 2; // now the memoryAddress will get the memory address of 2 indexed (3rd element) of the array
    printf("%d\n", *memoryAddress);
    printf("%d\n", ++*memoryAddress); // element of the next address
    printf("%d\n", ++*memoryAddress); // element of the next address
}

int main()
{
    int arr[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    arrPrinter(arr); // send memoryt address of 1st (0 indexed) element

    return 0;
}