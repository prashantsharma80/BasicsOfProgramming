/*
Hallow Rectangle
*****
*   *
*****
*/

#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    for(int row = 1; row <= rows; row++) {
        for(int col = 1; col <= columns; col++) {
            if(row != 1 && row != rows && col != 1 && col != columns) {
                cout << ' ';
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
}