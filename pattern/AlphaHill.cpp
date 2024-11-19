#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    //  space
    for(int k=1;k<=(n-i);k++) {
        cout<<" ";
    }
    // character
    char start = 'A';
    for(int j=1;j<=i;j++) {
        cout<<start;
        start++;
    }
  
    // character again
     start = start - 2;
    for(int j=1;j<=i-1;j++) {
         cout<<start;
        start--;
    }
     cout<<endl;
    }
}