
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        // for left side star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // for left side space
        for (int j = 1; j <= (n - i); j++)
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
    // for down star
    for (int i = 1; i <= n; i++)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 1; j <= (n - i); j++)
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
    return 0;

    return 0;
}