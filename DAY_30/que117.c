// Q117 - Create Student Record System Using Arrays and Strings

#include <stdio.h>

int main()
{
    int roll[5], i;
    char name[5][50];
    float marks[5];

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %.2f\n", marks[i]);
    }

    return 0;
}