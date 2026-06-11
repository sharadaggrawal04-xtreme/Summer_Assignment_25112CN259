// Write a program to Write function to find factorial.

#include <stdio.h>

// Function to find the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number); // Read the number from user input

    int result = factorial(number); // Call the factorial function and store the result
    printf("The factorial of %d is: %d\n", number, result); // Print the result

    return 0; // Return 0 to indicate successful execution
}