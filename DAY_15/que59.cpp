// Q59 Write a program to Rotate array right. 


#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int d) {
    d = d % n;              // handle d >= n
    if (d == 0) return;
    int temp[d];

    // Step 1: store last d elements
    for (int i = 0; i < d; i++)
        temp[i] = arr[n - d + i];

    // Step 2: shift elements right by d
    for (int i = n - d - 1; i >= 0; i--)
        arr[i + d] = arr[i];

    // Step 3: place saved elements at front
    for (int i = 0; i < d; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateRight(arr, n, 2);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    // Output: 6 7 1 2 3 4 5
    return 0;
}