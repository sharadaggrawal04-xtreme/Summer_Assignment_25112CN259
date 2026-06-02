// write a program to find the pallindrome of the given number 

#include <stdio.h>
int main()
{
    int n;
    int original;
    int reverse = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n != 0) {
        reverse = reverse * 10 + n % 10; // Append the last digit to the reverse
        n /= 10; // Remove the last digit
    }
    if (original == reverse) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
