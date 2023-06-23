/*
Butterfly Pattern
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Upper part
    for(int row = 1; row <= n; row++) {
        for(int star1 = 1; star1 <= row; star1++) {
            cout << '*';
        }
        for(int space1 = 1; space1 <= (n-row); space1++) {
            cout << ' ';
        }
        for(int space2 = 1; space2 <= (n-row); space2++) {
            cout << ' ';
        }
        for(int star2 = 1; star2 <= row; star2++) {
            cout << '*';
        }
        cout << endl;
    }
    // Lower part
    for(int row = 1; row <= n; row++) {
        for(int star1 = 1; star1 <= (n-row+1); star1++) {
            cout << '*';
        }
        for(int space1 = 1; space1 <= (row-1); space1++) {
            cout << ' ';
        }
        for(int space2 = 1; space2 <= (row-1); space2++) {
            cout << ' ';
        }
        for(int star2 = 1; star2 <= (n-row+1); star2++) {
            cout << '*';
        }
        cout << endl;
    }
}