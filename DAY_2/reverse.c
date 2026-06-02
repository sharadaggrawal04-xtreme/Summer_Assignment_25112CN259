// write a program to find the reverse of a given number

#include <stdio.h>
int main() 
{
    int n, reverse = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n != 0) {
        reverse = reverse * 10 + n % 10; // Append the last digit to the reverse
        n /= 10; // Remove the last digit
    }
    printf("Reverse of the number is: %d\n", reverse);
    return 0;
}