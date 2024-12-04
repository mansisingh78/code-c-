#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int ,string> m;

    m[1] = "love";
    m[13] = "kumar";
    m[2] = "babbar";
    

    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<"finding 13->"<<m.count(13)<<endl;
}