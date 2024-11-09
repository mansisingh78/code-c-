#include <iostream>
using namespace std;

int main()
{
   
    int evenNum = 0, oddNum = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            evenNum = evenNum + i;
        }
        else
        {
            oddNum = oddNum + i;
        }
    }
    cout << "sum of even number :" << evenNum << endl;
    cout << "sum of odd  number :" << oddNum << endl;
    return 0;
}