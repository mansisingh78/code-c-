#include<iostream>
using namespace std;

int DecToBin(int DecNum){
    int ans = 0,pow = 1;

    while(DecNum > 0){
        int rem = DecNum % 2;
        DecNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;

}
int main(){
    int DecNum = 25;

    cout << DecToBin(DecNum) << endl ;

    return 0;

}