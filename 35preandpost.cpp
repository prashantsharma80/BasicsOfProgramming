#include <iostream>
using namespace std;

int main() {
    int a = 5;
    // Pre Increment
    cout << ++a << endl;        // 6

    // Pre Decrement
    cout << --a << endl;        // 5

    int b = 8;
    // Post Increment
    cout << b++ << endl;        // 8

    // Post Decrement
    cout << b-- << endl;        // 9

    int d = 5;
    int mul = (++d)*(++d);      // 7 * 7
    cout << mul << endl;        // 49
}