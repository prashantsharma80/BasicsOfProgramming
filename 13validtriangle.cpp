#include <iostream>
using namespace std;

int main() {
    int a, b, c, isValid = 0;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    if(a + b > c) {
        if(a + c > b) {
            if(b + c > a) {
                isValid = 1;
            }
        }
    }
    if(isValid) {
        cout << "Valid triangle" << endl;
    } else {
        cout << "Not valid triangle" << endl;
    }
}