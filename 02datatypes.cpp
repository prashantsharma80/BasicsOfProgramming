#include <iostream>
using namespace std;

int main() {
    bool a = true;      // bool can store only 1, 0, true, false
    char b = 's';
    short c = 12;
    int d = 1234;
    float e = 12.234;
    long f = 123456;
    double g = 1234.5678;
    cout << "Size of bool is: " <<  sizeof(a) << endl;          // 1
    cout << "Size of char is: " << sizeof(b) << endl;           // 1
    cout << "Size of short is: " << sizeof(c) << endl;          // 2
    cout << "Size of int is: " << sizeof(d) << endl;            // 4
    cout << "Size of float is: " << sizeof(e) << endl;          // 4
    cout << "Size of long is: " << sizeof(f) << endl;           // 8
    cout << "Size of double is: " << sizeof(g) << endl;         // 8
}