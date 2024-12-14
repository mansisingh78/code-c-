#include <iostream>
#include <vector>
using namespace std;

void findAllSubarrays(const vector<int>& arr) {
    int n = arr.size();

    // Loop to set the starting point of subarray
    for (int i = 0; i < n; i++) {
        // Loop to set the ending point of subarray
        for (int j = i; j < n; j++) {
            // Print the current subarray
            cout << "[ ";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    cout << "All subarrays of the array are:" << endl;
    findAllSubarrays(arr);

    return 0;
}
