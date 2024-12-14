#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr)
{
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(80);
    arr.push_back(100);
    cout << largestElement(arr)<<endl;
    return 0;
}