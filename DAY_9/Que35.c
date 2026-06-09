// Write a program to Print repeated character pattern 

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the repeated character pattern: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print characters for the current row
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + i - 1); // Print the character corresponding to the current row
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}

