#include <iostream>
using namespace std;

int main() {
    int num1 = 24;
    int num2 = 26;
    float num3 = 12.24;
    cout << (num1 / num2) << endl;      // 0
    cout << (num1 / num3) << endl;      // 1.96078
    // In arithmetic expressions, always larger datatype is dominant and result is also
    // of the same datatype
}