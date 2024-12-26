#include <iostream>
#include <vector>
using namespace std;

int smallestElement(vector<int> &arr)
{
    int smallest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(80);
    arr.push_back(100);
    cout << smallestElement(arr)<<endl;
    return 0;
}