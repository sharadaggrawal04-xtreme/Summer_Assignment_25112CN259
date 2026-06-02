// write a program to find the sum of the digits of a given number

#include<stdio.h>
int main()
{
    int n; 
    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n % 10; // Add the last digit to the sum
        n /= 10; // Remove the last digit
    }
    printf("Sum of the digits is: %d\n", sum);
    return 0;
}