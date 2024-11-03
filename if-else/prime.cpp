#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int num;
    cout << "enter number :" << endl;
    cin >> num;

    if (num <= 1)
    {
        cout << "not prime number" << endl;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "not prime number" << endl;
            return 0;
        }
    }
    cout << "prime number" << endl;
    return 0;
}