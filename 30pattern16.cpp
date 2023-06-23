/*
Alphabet Palindrome Pyramid
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++) {
        char print1 = 'A';
        for(int col1 = 1; col1 <= row; col1++) {
            cout << print1;
            print1++;
        }
        char print2 = print1 - 2;
        for(int col2 = 1; col2 <= (row-1); col2++) {
            cout << print2;
            print2--;
        }
        cout << endl;
    }
}