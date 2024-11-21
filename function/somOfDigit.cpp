#include<iostream>
using namespace std;

int sumDig(int num){
    int sum = 0;

    while(num > 0){
         sum += num % 10;
        num /= 10;

    }
    return sum;

}


int main(){
    int num;
    cout<<"enter number :";
    cin>>num;
    int result = sumDig(num);
    cout<<"sum ="<< result <<endl;

    return 0;
    

}