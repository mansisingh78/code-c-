#include <iostream>
using namespace std;

int BinaryToDec(int BinNum)
{
    int ans = 0, pow = 1;

    while (BinNum > 0)
    {
        int rem = BinNum % 10;
        ans += (rem * pow);

        BinNum /= 10;
        pow *= 2;
    }
    return ans; // binary form
}

int main()
{

    cout << BinaryToDec(1010) << endl;
    return 0;
}