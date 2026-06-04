// write a program to check the armstrong number

#include <stdio.h>
int main() 
{
    int n, original, sum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        sum += remainder * remainder * remainder; // Add the cube of the digit to the sum
        n /= 10; // Remove the last digit
    }
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}