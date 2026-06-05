// Wap to check whether the number is strong number or not 

#include <stdio.h>
int main()
{
    int n, original, sum = 0, remainder, factorial;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n; // Store the original number
    
    while (original != 0) {
        remainder = original % 10; // Get the last digit
        
        // Calculate the factorial of the digit
        factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }
        
        sum += factorial; // Add the factorial to the sum
        original /= 10; // Remove the last digit
    }
    
    // Check if the sum of factorials is equal to the original number
    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    
    return 0;
}