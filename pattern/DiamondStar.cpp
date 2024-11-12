#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n :" <<endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for star
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
      for (int i = n; i >= 1; i--)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for star
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}