// Write a program to Frequency of an element

#include <stdio.h>
int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size); // Read the size of the array from user input
    
    int arr[size]; // Declare an array of the specified size
    
    // Input elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Read each element from user input
    }
    
    printf("Enter the target element to find its frequency: ");
    scanf("%d", &target); // Read the target element to find its frequency from user input
    
    // Calculate the frequency of the target element
    int frequency = 0; // Initialize frequency count to 0
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            frequency++; // Increment frequency count if the current element matches the target
        }
    }
    
    // Display the frequency of the target element
    printf("The frequency of element %d in the array is: %d\n", target, frequency); // Print the frequency of the target element
    
    return 0; // Return 0 to indicate successful execution
}