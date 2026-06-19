//Write a program to Find diagonal sum. 

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find diagonal sum
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}