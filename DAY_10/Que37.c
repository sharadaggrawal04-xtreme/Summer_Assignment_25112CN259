// Write a program to Print star pyramid. 

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the star pyramid: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces for the left padding
        for (int j = 1; j <= rows - i; j++) {
            printf("  "); // Print two spaces for better alignment
        }
        // Print stars for the current row
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* "); // Print a star followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}