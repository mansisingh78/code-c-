#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;

    d.push_back(1);
    d.push_back(2);

    cout <<"print first element->"<<d.at(1)<<endl;

    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;

}