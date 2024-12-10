#include <iostream>
using namespace std;

// void divisible(int n) {
//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0) {
//             cout<<i << " ";
//         }
//     }
// }
int main()
{
    int num, count = 0, rem = 1;
    cout << "Enter Number : " << endl;
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        count = count + 1;
        num = num / 10;
    }

    cout << "Total Digitsn of Number is" << count<<endl;
    return 0;
    
}