#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<char> vec; 

    cout << "Size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back();

    cout << vec.front() <<endl;
     cout << vec.back() <<endl;
     cout << vec.at(0) <<endl;

    return 0;
}
