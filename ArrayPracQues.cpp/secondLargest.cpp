#include<iostream>
using namespace std;
int main(){
    int nums[] = {1, 3, 4, 5, 0, 2};
    int size = 6;
    int secondLargest = INT_MIN;

    for(int i = 0;i<size;i++){
        if(nums[2] > secondLargest){
            secondLargest = nums[2];
        }
    }
    cout << "secondLargest = " << secondLargest;
    return 0;
}