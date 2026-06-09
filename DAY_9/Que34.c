// Write a program to Print reverse number triangle.

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the reverse number triangle: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = rows; i >= 1; i--) {
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Print numbers starting from 1
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
