#include<iostream>
using namespace std;

bool Search( int arr[],int size, int key){
    
    for(int i=0; i<size; i++){
         if(arr[i] == key){
            return 1;
         }
    }
    return 0;
}
int main(){
    int arr[10] = {4,5,7,8,1,2,5,-5,-2,-1};
    
    cout << "enter the element to search for" <<endl;
    int key;
    cin >> key;
    bool found = Search(arr,10,key); 

    if(found){
        cout << "key is present"<< endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }

    return 0;

   
}