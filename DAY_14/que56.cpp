// Write a program to Find duplicates in array. 

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
    
    // Find and display duplicate elements in the array
    printf("Duplicate elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]); // Print the duplicate element
                break; // Exit the inner loop once a duplicate is found
            }
        }
    }
    
    return 0; // Return 0 to indicate successful execution
}
