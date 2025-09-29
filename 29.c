// 29. Write a program to store and display details of 5 books (title, author, price) using an array of structures.

// same as 27

#include <stdio.h>

struct stdDetails
{
    char title[40];
    char author[40];
    int price;
};

int main()
{
    int num = 5;
    struct stdDetails books[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nFor Book No %d Write: \n", i + 1);

        // Enter student name
        printf("Title \t : ");
        gets(books[i].title);

        // enter id
        printf("Author \t : ");
        scanf("%s", books[i].author);

        // enter marks
        printf("Price \t\t : ");
        scanf("%d", &books[i].price);
    }

    // print result
    int n = 1;
    while (n > 0)
    {
        printf("\n\nEnter Book No (or negitive number to end the program): ");
        scanf("%d", &n);

        // break the loop
        if (n < 0)
            break;

        // Print accepted result
        printf("\n\nDetails of %d Student-\tTitle\t :  %s\nAuthor\t :  %s\nPrice\t :  %d", n, books[n - 1].title, books[n - 1].author, books[n - 1].price);
    }
    // printf("\n\nDetails:\nName\t\t :  %s\nStudent ID\t :  %s\nMarks\t\t :  %d", student.name, student.studentID, student.marks);
}