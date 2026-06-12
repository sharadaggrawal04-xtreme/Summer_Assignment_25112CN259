// Write a program to Write function for perfect number.

#include <stdio.h>
// Function to check if a number is a perfect number

int isPerfect(int num) {
    int sum = 0; // Initialize sum to 0
    
    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }
    
    return (sum == num); // Return true if sum equals the original number, false otherwise
}
int main() {
    int number;
    printf("Enter a number to check if it is a perfect number: ");
    scanf("%d", &number); // Read the number from user input
    
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number); // Print if the number is perfect
    } else {
        printf("%d is not a perfect number.\n", number); // Print if the number is not perfect
    }
    
    return 0; // Return 0 to indicate successful execution
}