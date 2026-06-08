// write a program to Print half pyramid pattern.

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the half pyramid: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}