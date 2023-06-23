/*
Pascal Triangle Pattern
1
11
121
1331
14641
15101051
1615201561
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++) {
        int print1 = 1;
        for(int col = 1; col <= row; col++) {
            cout << print1;
            print1 = print1 * (row-col) / col;
        }
        cout << endl;
    }
}