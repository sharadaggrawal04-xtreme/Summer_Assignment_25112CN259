// Q58 Write a program to Rotate array left. 


#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n, int d) {
    d = d % n;               // handle d >= n
    int temp[d];

    // Step 1: store first d elements
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    // Step 2: shift remaining left
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    // Step 3: copy temp to end
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateLeft(arr, n, 2);
    for (int i = 0; i < n; i++)

 cout << arr[i] << " ";
    // Output: 3 4 5 6 7 1 2
    return 0;
}