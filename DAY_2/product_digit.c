// write a program to find  product of the digits of a given number

#include<stdio.h>
int main()
{
    int n; 
    int product = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n != 0) {
        product *= n % 10; // Multiply the last digit to the product
        n /= 10; // Remove the last digit
    }
    printf("Product of the digits is: %d\n", product);
    return 0;
}