#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // for space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // for right side space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // for right side star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // for space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // for space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    
}
