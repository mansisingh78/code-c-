#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "enter n :";
    cin >> n;

    for(int i = 1; i <= n;i++){
        if(n % 2 == 0){
            cout << "even number ";
        }else{
            cout << "odd number ";
        }
    }

   
    return 0;

}