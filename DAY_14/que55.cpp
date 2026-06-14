// Write a program to Second largest element.

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
    
    // Find the largest and second largest elements in the array
    int largest = arr[0]; // Initialize largest to the first element
    int secondLargest = arr[0]; // Initialize second largest to the first element
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest before updating largest
            largest = arr[i]; // Update largest if current element is greater
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest if current element is greater than second largest and not equal to largest
        }
    }
    
    // Display the second largest element
    if (secondLargest == largest) {
        printf("There is no second largest element in the array.\n"); // Print a message if there is no second largest element
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest); // Print the second largest element
    }
    
    return 0; // Return 0 to indicate successful execution
}