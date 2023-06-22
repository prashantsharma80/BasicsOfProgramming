/*
Hallow Solid Diamond Pattern
    * 
   * * 
  *   * 
 *     * 
*       * 
*       * 
 *     * 
  *   * 
   * * 
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Upper part of Diamond
    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= (n-row); space++) {
            cout << ' ';
        }
        for(int star = 1; star <= row; star++) {
            if(star != 1 && star != row) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // Lower part of Diamond
    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= (row-1); space++) {
            cout << ' ';
        }
        for(int star = 1; star <= (n-row+1); star++) {
            if(star != 1 && star != (n-row+1)) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}