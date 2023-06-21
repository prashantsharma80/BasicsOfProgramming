#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    cout << (5 + 2) << endl;        // 7
    cout << (5 - 2) << endl;        // 3
    cout << (5 * 2) << endl;        // 10
    cout << (5 / 2) << endl;        // 2
    cout << (5 % 2) << endl;        // 1

    // Relational Operators(returns 0 or 1)
    cout << (5 < 2) << endl;        // 0
    cout << (5 > 2) << endl;        // 1
    cout << (3 <= 2) << endl;       // 0
    cout << (3 >= 2) << endl;       // 1
    cout << (2 != 2) << endl;       // 0
    cout << (4 == 4) << endl;       // 1

    // Assignment Operators
    int a = 2, b = 3;
    a += b;
    cout << a << endl;        // 5
    a -= b;
    cout << a << endl;        // 2
    a *= b;
    cout << a << endl;        // 6
    a /= b;
    cout << a << endl;        // 2
    a %= b;
    cout << a << endl;        // 2

    // Logical Operators
    cout << ((5 > 2) && (2 > 5)) << endl;        // 0
    cout << ((5 > 2) || (2 > 5)) << endl;        // 1
    cout << (!(5 == 5)) << endl;                 // 0
}