// wap to check whether the number is perfect number or not

#include <stdio.h>
int main() 
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Calculate the sum of proper divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }
    
    // Check if the sum of divisors is equal to the original number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }
    
    return 0;
}