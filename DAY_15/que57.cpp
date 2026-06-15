// Q57 Write a program to Reverse array. 

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    // Output: 5 4 3 2 1
    return 0;
}