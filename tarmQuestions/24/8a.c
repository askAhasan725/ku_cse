#include <stdio.h>

struct students{
    char studentID[6];
    char name[100];
    char bloodGroup[2];
    char dateOfBirth[11];
};

int main()
{
    struct student s1;

    printf("Enter number of students: ");
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter Student ID: ");
        gets(s1[studentID])
    }
}