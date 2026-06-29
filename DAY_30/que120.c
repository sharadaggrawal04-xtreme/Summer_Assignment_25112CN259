// Q120 - Develop Complete Mini Project Using Arrays, Strings and Functions
// Student Management System

#include <stdio.h>

void displayStudent(int roll, char name[], float marks)
{
    printf("\nRoll No : %d", roll);
    printf("\nName    : %s", name);
    printf("\nMarks   : %.2f\n", marks);
}

int main()
{
    int roll[3], i;
    char name[3][50];
    float marks[3];

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Student %d Details\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Information\n");

    for(i = 0; i < 3; i++)
    {
        displayStudent(roll[i], name[i], marks[i]);
    }

    return 0;
}