// Write a program to Write function for palindrome. 

#include <stdio.h>
// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0; // Initialize left pointer
    int right = 0; // Initialize right pointer
    
    // Find the length of the string
    while (str[right] != '\0') {
        right++;
    }
    right--; // Move back to the last character
    
    // Check for palindrome
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++; // Move left pointer to the right
        right--; // Move right pointer to the left
    }
    return 1; // Is a palindrome

}

int main() {
    char str[100];
    printf("Enter a string to check if it is a palindrome: ");
    scanf("%s", str); // Read the string from user input
    
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str); // Print if the string is a palindrome
    } else {
        printf("%s is not a palindrome.\n", str); // Print if the string is not a palindrome
    }
    
    return 0; // Return 0 to indicate successful execution
}