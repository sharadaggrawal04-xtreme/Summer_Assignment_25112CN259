// write a program to find nth fibonacci term

#include <stdio.h>
int main() 
{
    int n, first = 0, second = 1, next;
    printf("Enter the term number: ");
    scanf("%d", &n);
    
    if (n == 1) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, first);
    } else if (n == 2) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, second);
    } else {
        for (int i = 3; i <= n; i++) {
            next = first + second; // Next term is the sum of the previous two terms
            first = second; // Update first to the previous second
            second = next; // Update second to the new next term
        }
        printf("The %dth term in the Fibonacci series is: %d\n", n, next);
    }
    
    return 0;
}