// Write a program to Print repeated-number pattern .

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the repeated-number pattern: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", i); // Print the current row number
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
