//  Q60 Write a program to Move zeroes to end. 

#include <iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n) {
    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining positions with zeroes
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroesToEnd(arr, n);

    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}