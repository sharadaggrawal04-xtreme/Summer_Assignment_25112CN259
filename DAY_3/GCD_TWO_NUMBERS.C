// WRITE A PROGRAM TO FIND THE GCD OF TWO NUMBERS

#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; // Update b to the remainder of a divided by b
        a = temp; // Update a to the previous value of b
    }
    return a; // The last non-zero value of a is the GCD
}