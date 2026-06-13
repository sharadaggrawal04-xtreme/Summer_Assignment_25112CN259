// Write a program to Input and display array

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size); // Read the size of the array from user input
    
    int arr[size]; // Declare an array of the specified size
    
    // Input elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Read each element from user input
    }
    
    // Display the elements of the array
    printf("The elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n"); // Print a newline after displaying all elements
    
    return 0; // Return 0 to indicate successful execution
}