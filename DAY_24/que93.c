// Q93 - Check String Rotation

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("Strings are Rotation of Each Other");
    else
        printf("Strings are Not Rotation");

    return 0;
}