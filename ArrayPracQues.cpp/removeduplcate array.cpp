#include<iostream>
#include<vector>

using namespace std;
int removeDuplicate(vector<int> &arr,int n){
    int i = 0;
    for(int j = 1;j<n;j++){
        if(arr[i]!= arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return 1+1;

}



int main(){
    vector<int> arr = {1,2, 3,3,5};
    cout<< removeDuplicate(arr, arr.size())<<endl;

}