#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int sum = 0;

    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main(){
    int num;
    cout << "enter num :";
    cin >> num;

    int result = sumOfDigit(num);

    cout << "sum of digit : " << result << endl;

    
}