// 27. Define a structure Student with members (name, roll, marks). Write a program to read and display information of num students.

#include <stdio.h>

struct stdDetails
{
    char name[100];
    char studentID[6];
    int marks;
};

int main()
{
    int num = 5;
    struct stdDetails student[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nFor Studen %d Write: \n", i + 1);

        // Enter student name
        printf("Enter Name \t : ");
        gets(student[i].name);

        // enter id
        printf("Student ID \t : ");
        scanf("%s", student[i].studentID);

        // enter marks
        printf("Marks \t\t : ");
        scanf("%d", &student[i].marks);
    }

    // print result
    int n = 1;
    while (n > 0)
    {
        printf("\n\nEnter Roll to see details (or negitive number to end the program): ");
        scanf("%d", &n);

        // break the loop
        if (n < 0)
            break;

        // Print accepted result
        printf("\n\nDetails of %d Student-\nName\t\t :  %s\nStudent ID\t :  %s\nMarks\t\t :  %d", n, student[n - 1].name, student[n - 1].studentID, student[n - 1].marks);
    }
    // printf("\n\nDetails:\nName\t\t :  %s\nStudent ID\t :  %s\nMarks\t\t :  %d", student.name, student.studentID, student.marks);
}