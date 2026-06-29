// Q115 - Create Menu-Driven String Operations System

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter String: ");
    scanf("%s", str);

    do
    {
        printf("\n1. String Length");
        printf("\n2. Reverse String");
        printf("\n3. Display String");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
            {
                int i;
                for(i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);

                printf("\n");
                break;
            }

            case 3:
                printf("%s\n", str);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}