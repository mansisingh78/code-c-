#include<iostream>
using namespace std;
int main(){
    int n = 3;//LINE NUMBER

    int num = 1;//start number
    for(int i=0; i<n; i++ ){
        for(int j=0; j<n; j++){
            cout<< num <<" ";
            num++;
        }
        cout<< endl;
       

    }
    
    return 0;
    // 1 2 3
    // 4 5 6
    // 7 8 9
}