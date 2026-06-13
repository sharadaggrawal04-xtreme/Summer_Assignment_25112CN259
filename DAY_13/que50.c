// Write a program to Find sum and average of array. 

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size); // Read the size of the array from user input
    
    int arr[size]; // Declare an array of the specified size
    int sum = 0; // Initialize sum to 0
    
    // Input elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Read each element from user input
        sum += arr[i]; // Add each element to the sum
    }
    
    // Calculate average
    float average = (float)sum / size; // Calculate average by dividing sum by size
    
    // Display the sum and average of the array
    printf("The sum of the array is: %d\n", sum); // Print the sum
    printf("The average of the array is: %.2f\n", average); // Print the average with 2 decimal places
    
    return 0; // Return 0 to indicate successful execution
}