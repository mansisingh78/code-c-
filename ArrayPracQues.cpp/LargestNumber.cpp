#include<iostream>
using namespace std;
int main(){
    int arr[]  = {1, 5, 2, 9};
    int size = 4;
    int largest = INT_MIN;

    for(int i = 0;i<size;i++){
        if(arr[i] > largest){
            largest = arr[i];

        }
    }
    cout << "largest = "<< largest <<endl;
    return 0;

}