// Write a program to Count even and odd elements.

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size); // Read the size of the array from user input
    
    int arr[size]; // Declare an array of the specified size
    int evenCount = 0; // Initialize even count to 0
    int oddCount = 0; // Initialize odd count to 0
    
    // Input elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Read each element from user input
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count if the element is even
        } else {
            oddCount++; // Increment odd count if the element is odd
        }
    }
    
    // Display the count of even and odd elements
    printf("The number of even elements in the array is: %d\n", evenCount); // Print the count of even elements
    printf("The number of odd elements in the array is: %d\n", oddCount); // Print the count of odd elements
    
    return 0; // Return 0 to indicate successful execution
}