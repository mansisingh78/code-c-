#include<iostream>
using namespace std;

int facNum(int n){
    int fact = 1;
    for(int i = 1;i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout << "enter n :";
    cin >> n;

    int fac = facNum(n);
    cout << "find fact : " <<  fac << endl;
    return 0;

}