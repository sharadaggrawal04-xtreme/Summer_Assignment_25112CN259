// write a program to print the armstrong number in a range 

#include <stdio.h>
int main() 
{
    int lower, upper, n, original, sum, remainder;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (n = lower; n <= upper; n++) {
        original = n; // Store the original number
        sum = 0; // Reset sum for each number
        while (original != 0) {
            remainder = original % 10; // Get the last digit
            sum += remainder * remainder * remainder; // Add the cube of the digit to the sum
            original /= 10; // Remove the last digit
        }
        if (sum == n) {
            printf("%d ", n); // Print the Armstrong number
        }
    }
    printf("\n");
    return 0;
}