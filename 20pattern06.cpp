/*
Numeric Half Pyramid
1
12
123
1234
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            cout << col;
        }
        cout << endl;
    }
}