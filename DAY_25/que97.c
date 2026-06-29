// Q97 - Merge Two Sorted Arrays

#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0;

    printf("Enter Size of First Array: ");
    scanf("%d", &n1);

    printf("Enter Elements of First Sorted Array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter Size of Second Array: ");
    scanf("%d", &n2);

    printf("Enter Elements of Second Sorted Array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}