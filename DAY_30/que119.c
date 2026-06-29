// Q119 - Create Mini Employee Management System

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Records\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID     : %d", emp[i].id);
        printf("\nName   : %s", emp[i].name);
        printf("\nSalary : %.2f\n", emp[i].salary);
    }

    return 0;
}