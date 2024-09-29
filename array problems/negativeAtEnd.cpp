
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {12, -7, 5, -3, -6, 8};

    // Segregate negative and non-negative elements (as previously shown)
    vector<int> negative;
    int j = 0;
    int n = arr.size();  // Initialize n with the size of the array

    // Separate non-negative and negative elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negative.push_back(arr[i]);
        } else {
            arr[j] = arr[i];
            j++;
        }
    }

    // Add negative numbers to the end of the array
    for (int i = 0; i < negative.size(); i++) {
        arr[j] = negative[i];
        j++;
    }

    // Output the segregated array using a traditional for loop
    cout << "Segregated array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";  // Output each element using index
    }
    cout << endl;

    return 0;
}
