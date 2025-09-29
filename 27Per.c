// Preparation to solve problem 27

#include <stdio.h>

struct student
{
    char name[100];
    char studentID[6];
    int marks;
};

int main()
{
    struct student abdullah;

    // Enter student name
    printf("Enter name: ");
    gets(abdullah.name);

    // enter id
    printf("Enter Student ID of %s: ", abdullah.name);
    gets(abdullah.studentID);

    // enter marks
    printf("Enter marks of %s: ", abdullah.name);
    scanf("%d", &abdullah.marks);

    // print result
    printf("\n\nDetails:\nName\t\t :  %s\nStudent ID\t :  %s\nMarks\t\t :  %d", abdullah.name, abdullah.studentID, abdullah.marks);
}