// write a program to Print character triangle. 

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the character triangle: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print characters for the current row
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1); // Print characters starting from 'A'
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}