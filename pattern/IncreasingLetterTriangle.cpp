#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char letter = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << letter;
            letter++;
        }
        cout << endl;
    }
    return 0;
}