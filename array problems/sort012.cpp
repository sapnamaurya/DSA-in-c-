#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare the array after reading n
    cout << "Enter the elements (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Populate the array
    }

    int left = 0, mid = 0, right = n - 1;

    // Dutch National Flag Algorithm
    while (mid <= right) {
        if (arr[mid] == 0) {
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[right]);
            right--;
        }
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
