#include<iostream>
#include<vector>
using namespace std;
int secondLargest(vector<int> &arr, int n ){
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1;i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }

    }
    return slargest;
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20); 
    arr.push_back(30); 
    arr.push_back(40);
    arr.push_back(50);
    cout<< secondLargest(arr, arr.size())<< endl;   
}