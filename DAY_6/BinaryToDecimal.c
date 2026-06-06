// wap to convert a binary number to decimal

#include <stdio.h>
int main() 
{
    int binary; 
    int decimal = 0; 
    int base = 1; 
    int remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    while (binary > 0) {
        remainder = binary % 10; // Get the last bit
        decimal += remainder * base; // Add the bit to the decimal number
        binary /= 10; // Remove the last bit
        base *= 2; // Move to the next bit position
    }
    
    printf("Decimal representation: %d\n", decimal);
    
    return 0;
}