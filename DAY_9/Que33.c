// Write a program to Print reverse star pattern

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the reverse star pattern: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = rows; i >= 1; i--) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("* "); // Print a star followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}