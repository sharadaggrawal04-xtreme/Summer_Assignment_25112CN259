// Write a program to Print hollow square pattern.

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the hollow square pattern: ");
    scanf("%d", &size);
    
    // Loop through each row
    for (int i = 1; i <= size; i++) {
        // Loop through each column
        for (int j = 1; j <= size; j++) {
            // Print '*' for the borders and ' ' for the hollow part
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for the hollow part
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}