#include <iostream>
using namespace std;

int main() {
    bool a1 = false, a2 = false, a3 = true, a4 = true;
    bool b1 = false, b2 = true, b3 = false, b4 = true;
    // Bitwise AND operator
    cout << (a1 & b1) << endl;      // 0
    cout << (a2 & b2) << endl;      // 0
    cout << (a3 & b3) << endl;      // 0
    cout << (a4 & b4) << endl;      // 1

    // Bitwise OR operator
    cout << (a1 | b1) << endl;      // 0
    cout << (a2 | b2) << endl;      // 1
    cout << (a3 | b3) << endl;      // 1
    cout << (a4 | b4) << endl;      // 1

    // Bitwise XOR operator
    cout << (a1 ^ b1) << endl;      // 0
    cout << (a2 ^ b2) << endl;      // 1
    cout << (a3 ^ b3) << endl;      // 1
    cout << (a4 ^ b4) << endl;      // 0

    // Bitwise NOT operator
    cout << ~a1 << endl;            // -1
    cout << ~a3 << endl;            // -2
}