// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i = 1;i<=n;i++){
        //for number
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        //for space
         for(int k = 1;k<=n-i;k++){
            cout<<" ";
        }
            //for space
        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        //for number
        for(int k = i;k>=1;k--){
            cout<<k;
        }
       cout<<endl;
    }
   
    
  

    return 0;
}