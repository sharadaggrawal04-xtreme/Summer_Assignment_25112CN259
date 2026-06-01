// write a code to count the number of digits in a given number

#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count of digits
    }
    printf("Number of digits is: %d\n", count);
    return 0;
}