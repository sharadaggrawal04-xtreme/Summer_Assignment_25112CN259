// Q118 - Create Mini Library System

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
};

int main()
{
    struct Book b[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Title: ");
        scanf("%s", b[i].title);
    }

    printf("\nLibrary Records\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook ID    : %d", b[i].id);
        printf("\nBook Title : %s\n", b[i].title);
    }

    return 0;
}