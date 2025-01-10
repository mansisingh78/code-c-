#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int start = 0,end = n-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout<< endl;
}
int main(){
    int arr[7] = {4,2,7,8,1,2,5};
    int brr[5] = {2,6,3,9,4};
    

        reverseArray(arr, 7);

        printArray(arr,5);

       
        return 0;
    

}