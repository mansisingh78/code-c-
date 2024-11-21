#include <iostream>
using namespace std;


void printRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= i; j++) {   
            cout << i;
        }
        cout << endl;                    
    }
}

int main() {
    int n;

    cout << "Enter the number : ";
    cin >> n;

    
    printRightTriangle(n);

    return 0;
}
