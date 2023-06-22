/*
Numeric Hallow Full Pyramid with spaces
    1 
   1 2 
  1   3 
 1     4 
1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= (n-row); space++) {
            cout << ' ';
        }
        int print1 = 1;
        for(int star = 1; star <= row; star++) {
            if(star != 1 && star != row && row != 1 && row != n) {
                cout << "  ";
            } else {
                if (star == row) {
                    cout << row << ' ';
                } else {
                    cout << print1 << ' ';
                    print1++;
                }
            }
        }
        cout << endl;
    }
}