#include <iostream>
using namespace std;
int main(){
    int score;
    cout<<"enter grade :"<<endl;
    cin>>score;

    if(score >= 90){
        cout<<"GRADE A"<<endl;
    }else if(score >=80 && score <= 89){
        cout<<"GRADE B"<<endl;
    }else if(score >=70 && score <= 79){
        cout<<"GRADE C"<<endl;
    }else if(score >= 60 && score <= 69){
        cout<<"GRADE D"<<endl;
    }else{
        cout<<"GRADE E"<<endl;
    }
    return 0;
}