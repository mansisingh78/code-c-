#include <iostream>
using namespace std;


void printRightTriangle(int n) {
    for (int i = n; i >= 1; i--) {       
        for (int j = 1; j <= i; j++) {   
            cout << j;
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
