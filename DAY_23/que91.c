#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0};
    int freq2[256] = {0};
    int i;

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are Not Anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        freq1[(int)str1[i]]++;
        freq2[(int)str2[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq1[i] != freq2[i])
        {
            printf("Strings are Not Anagrams");
            return 0;
        }
    }

    printf("Strings are Anagrams");
    return 0;
}