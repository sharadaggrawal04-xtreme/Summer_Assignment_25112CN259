// wap to find th\e largest prime factor of a number

#include <stdio.h>
int main() 
{
    int n, largestPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Check for factors from 2 to n
    for (int i = 2; i <= n; i++) {
        // If i is a factor of n
        while (n % i == 0) {
            largestPrime = i; // Update the largest prime factor
            n /= i; // Divide n by i to check for the next factor
        }
    }
    
    if (largestPrime != -1) {
        printf("The largest prime factor is: %d\n", largestPrime);
    } else {
        printf("No prime factors found.\n");
    }
    
    return 0;
}