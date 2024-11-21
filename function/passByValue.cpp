#include<iostream>
using namespace std;

// int sum(int a, int b){
//     a = a + 10;
//     b = b + 10;
//     return a + b;
// }

void changeX(int x){
    x = 2*x;
    cout<<"x = " <<x<<endl;
}


int main(){
    int x = 5;
    changeX(x);
    cout<<"x = "<< x <<endl;
    // int a = 5, b = 4;
    //  cout<< sum(a,b);
    //  cout<< a <<endl;
    //  cout<< b <<endl;

     return 0;

}