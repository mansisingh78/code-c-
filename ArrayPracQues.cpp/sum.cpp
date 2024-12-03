#include<iostream>

using namespace std;
int main(){
    int num[] = {1, 2, 3, 4};
    
    int sum = 0;

    for(int i = 0;i<4;i++){
      sum += num[i];
    }
    cout<< "sum = "<<sum << endl;
}