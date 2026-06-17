// Q68 Write a program to Find common elements. 


#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    set<int> s;

    // Store first array elements
    for(int i = 0; i < n1; i++) {
        s.insert(arr1[i]);
    }

    cout << "Common Elements: ";
    for(int i = 0; i < n2; i++) {
        if(s.find(arr2[i]) != s.end()) {
            cout << arr2[i] << " ";
            s.erase(arr2[i]); // Avoid duplicates
        }
    }

    return 0;
}
