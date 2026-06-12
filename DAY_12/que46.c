// Write a program to Write function for Armstrong.

#include <stdio.h>
// Function to check if a number is an Armstrong number

int isArmstrong(int num) {
    int originalNum = num; // Store the original number
    int sum = 0; // Initialize sum to 0
    int n = 0; // Initialize n to count the number of digits
    
    // Count the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    
    originalNum = num; // Reset originalNum to the input number
    
    // Calculate the sum of the digits raised to the power of n
    while (originalNum != 0) {
        int digit = originalNum % 10; // Get the last digit
        sum += pow(digit, n); // Add the digit raised to the power of n to the sum
        originalNum /= 10; // Remove the last digit
    }
    
    return (sum == num); // Return true if sum equals the original number, false otherwise
}

int main() {
    int number;
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &number); // Read the number from user input
    
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number); // Print if the number is an Armstrong number
    } else {
        printf("%d is not an Armstrong number.\n", number); // Print if the number is not an Armstrong number
    }
    
    return 0; // Return 0 to indicate successful execution
}