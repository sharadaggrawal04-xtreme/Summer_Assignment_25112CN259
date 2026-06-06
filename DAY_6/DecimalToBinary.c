// Wap to convert decimal number to binary number

#include <stdio.h>
int main()
{
    int decimal; 
    int binary = 0; 
    int remainder;
    int base = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        remainder = decimal % 2; // Get the last bit
        binary += remainder * base; // Add the bit to the binary number
        decimal /= 2; // Remove the last bit
        base *= 10; // Move to the next bit position
    }
    
    printf("Binary representation: %d\n", binary);
    
    return 0;
}