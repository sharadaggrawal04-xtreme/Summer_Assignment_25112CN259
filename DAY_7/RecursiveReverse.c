// write a program for the recursive reverse of a number

#include <stdio.h>
// Function to reverse a number recursively
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev; // Base case: when n is 0, return the reversed number
    }
    rev = rev * 10 + (n % 10); // Append the last digit of n to rev
    return reverseNumber(n / 10, rev); // Recursive case: remove the last digit from n
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverseNumber(num, 0));
    return 0;
}