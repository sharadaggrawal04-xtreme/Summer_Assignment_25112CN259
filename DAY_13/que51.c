// Write a program to Find largest and smallest element. 

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
    
    int largest = arr[0]; // Initialize largest to the first element
    int smallest = arr[0]; // Initialize smallest to the first element
    
    // Find largest and smallest elements in the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if current element is greater
        }
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if current element is smaller
        }
    }
    
    // Display the largest and smallest elements
    printf("The largest element in the array is: %d\n", largest); // Print the largest element
    printf("The smallest element in the array is: %d\n", smallest); // Print the smallest element
    
    return 0; // Return 0 to indicate successful execution
}
