// Write a program to Write function to find maximum. 

#include <stdio.h>
// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b; // Return the greater of a and b
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1); // Read the first number from user input
    printf("Enter the second number: ");
    scanf("%d", &num2); // Read the second number from user input
    
    int result = max(num1, num2); // Call the max function and store the result
    printf("The maximum of %d and %d is: %d\n", num1, num2, result); // Print the result
    
    return 0; // Return 0 to indicate successful execution
}