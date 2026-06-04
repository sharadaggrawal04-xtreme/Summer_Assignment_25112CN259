// write a program to generate the fibonacci series

#include <stdio.h>
int main() {
    int n;
    int first = 0; 
    int second = 1;
    int next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Next term is the sum of the previous two terms
            first = second; // Update first to the previous second
            second = next; // Update second to the new next term
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}