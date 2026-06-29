// Q116 - Create Inventory Management System

#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
};

int main()
{
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("\nInventory Details\n");
    printf("Item ID   : %d\n", item.id);
    printf("Item Name : %s\n", item.name);
    printf("Quantity  : %d\n", item.quantity);

    return 0;
}