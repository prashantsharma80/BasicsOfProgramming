/*
Full Pyramid without spaces
    1
   232
  34543
 4567654
567898765
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
        int print1 = row;
        for(int num1 = 1; num1 <= row; num1++) {
            cout << print1;
            print1++;
        }
        int print2 = print1 - 2;
        for(int num2 = 1; num2 <= (row-1); num2++) {
            cout << print2;
            print2--;
        }
        cout << endl;
    }
}