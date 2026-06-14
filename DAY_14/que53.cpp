// Write a program to Linear search

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
    
    printf("Enter the target element to search: ");
    scanf("%d", &target); // Read the target element to search from user input
    
    // Perform linear search
    int foundIndex = -1; // Initialize found index to -1 (not found)
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i; // Update found index if target is found
            break; // Exit the loop once the target is found
        }
    }
    
    // Display the result of the search
    if (foundIndex != -1) {
        printf("Element %d found at index %d.\n", target, foundIndex); // Print the index where the target is found
    } else {
        printf("Element %d not found in the array.\n", target); // Print a message if the target is not found
    }
    
    return 0; // Return 0 to indicate successful execution
}