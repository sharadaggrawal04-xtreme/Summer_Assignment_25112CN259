// write a program to calculate x^n without using pow() function

#include <stdio.h>
int main()
{
    double x; 
    double result = 1.0;
    int n;
    printf("Enter the base (x): ");
    scanf("%lf", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    
    // Handle negative exponent
    if (n < 0) {
        x = 1 / x; // Invert the base for negative exponent
        n = -n; // Make the exponent positive
    }
    
    // Calculate x^n using a loop
    for (int i = 0; i < n; i++) {
        result *= x; // Multiply result by x in each iteration
    }
    
    printf("%.2lf raised to the power of %d is: %.2lf\n", x, n, result);
    
    return 0;
}