#include<iostream>
using namespace std;

int sumN(int num){
    int sum = 0;

    for(int i = 1;i<=num;i++){
        sum += i;
    }
    return sum;
}
int main(){
    int num;
    cout << "enter sum :" << endl;
    cin >> num;

    cout << "sum = "<< sumN(num) << endl;

    return 0;

}