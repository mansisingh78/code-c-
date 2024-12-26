#include<iostream>
#include<vector>
using namespace std;
int secondsmallest(vector<int> &arr, int n ){
    if(n < 2)return -1;
    int smallest = arr[0];
    int sSmallest = -1;
    for(int i = 1;i<n;i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && (sSmallest == -1) || arr[i] < smallest){
            sSmallest = arr[i];
        }

    }
    return sSmallest;
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20); 
    arr.push_back(30); 
    arr.push_back(40);
    arr.push_back(50);
    cout<< secondsmallest(arr, arr.size())<< endl;   
}