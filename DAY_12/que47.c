// Write a program to Write function for Fibonacci. 

#include <stdio.h>
// Function to find the nth Fibonacci number

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Return 0 for non-positive integers
    } else if (n == 1) {
        return 1; // Return 1 for the first Fibonacci number
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}
int main() {
    int n;
    printf("Enter the position of the Fibonacci number to find: ");
    scanf("%d", &n); // Read the position from user input
    
    int result = fibonacci(n); // Call the fibonacci function and store the result
    printf("The %dth Fibonacci number is: %d\n", n, result); // Print the result
    
    return 0; // Return 0 to indicate successful execution
}