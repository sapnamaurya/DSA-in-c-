#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    ///The doUnion function uses an unordered_map to count unique elements from two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        unordered_map<int, int> mp; // Using unordered_map for unique elements
        int n = arr1.size();
        int m = arr2.size();

        // Insert elements from arr1 into the map
        for (int i = 0; i < n; i++) {
            mp[arr1[i]]++; // Corrected syntax
        }

        // Insert elements from arr2 into the map
        for (int i = 0; i < m; i++) {
            mp[arr2[i]]++; // Corrected syntax
        }

        // The size of the map gives the count of unique elements
        return mp.size();
    }
};

int main() {
    Solution sol; // Corrected the instance name
    vector<int> arr1 = {2, 3, 4, 7, 5, 6};
    vector<int> arr2 = {3, 4, 5, 7};

    int result = sol.doUnion(arr1, arr2); // Corrected the instance name
    cout << "Result: " << result << endl; // Added space for clarity
    return 0; // Successful completion
}
