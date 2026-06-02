// WRITE A PROGRAM TO PRINT THE PRIME NUMBER IN A RANGE 

#include <stdio.h>
int Prime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0; // n is divisible by a number other than 1 and itself
    }
    return 1; // n is prime
}