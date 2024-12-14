#include <iostream>
#include <vector>
using namespace std;

bool isSorted( vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) { 
        if (arr[i] < arr[i - 1]) {    
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr;
    arr.push_back(14);
    arr.push_back(16);
    arr.push_back(25);
    arr.push_back(34);
    cout << isSorted(arr) <<  endl;
    return 0;
}
