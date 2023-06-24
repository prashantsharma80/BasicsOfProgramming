#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if(b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    cout << "Enter any three numbers: ";
    cin >> num1 >> num2 >> num3;
    int max = maxOfThree(num1, num2, num3);
    cout << "Maximum is: " << max << endl;
    return 0;
}