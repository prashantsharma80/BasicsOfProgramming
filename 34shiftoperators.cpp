#include <iostream>
using namespace std;

int main() {
    // Left Shift Operator
    int num1 = 10;
    cout << num1 << endl;       // 10
    int num2 = num1 << 1;
    cout << num2 << endl;       // 20
    int num3 = num1 << 2;
    cout << num3 << endl;       // 40
    int num4 = -8;
    cout << num4 << endl;       // -8
    int num5 = num4 << 1;
    cout << num5 << endl;       // -16

    // Right Shift Operator
    int num6 = 10;
    cout << num6 << endl;       // 10
    int num7 = num6 >> 1;
    cout << num7 << endl;       // 5
    int num8 = num6 >> 2;
    cout << num8 << endl;       // 2
    int num9 = -8;
    cout << num9 << endl;       // -8
    int num10 = num9 >> 1;
    cout << num10 << endl;      // -4
}