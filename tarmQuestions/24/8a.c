#include <stdio.h>

struct student {
    char studentID[10];
    char name[100];
    char bloodGroup[5];
    char dateOfBirth[15];
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline from buffer

    struct student s[n];

    // Input
    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Student ID: ");
        scanf("%[^\n]", &s[i].studentID);
        getchar(); // clear newline

        printf("Name: ");
        scanf("%[^\n]", &s[i].name);
        getchar(); // clear newline

        printf("Blood Group: ");
        scanf("%[^\n]", &s[i].bloodGroup);
        getchar(); // clear newline

        printf("Date of Birth (dd-mm-yyyy): ");
        scanf("%[^\n]", &s[i].dateOfBirth);
        getchar(); // clear newline
    }

    // Output
    printf("\n\n===== Student List =====\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %s \n", s[i].studentID);
        printf("Name: %s \n", s[i].name);
        printf("Blood Group: %s \n", s[i].bloodGroup);
        printf("Date of Birth: %s \n", s[i].dateOfBirth);
    }

    return 0;
}
