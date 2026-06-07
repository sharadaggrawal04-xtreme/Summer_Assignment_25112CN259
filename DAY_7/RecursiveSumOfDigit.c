// write a program for recursive sum of digit

#include <stdio.h>
// Function to calculate the sum of digits recursively
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: sum of digits of 0 is 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}