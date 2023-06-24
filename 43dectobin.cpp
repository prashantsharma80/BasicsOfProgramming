#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0, i = 0;
    while(n > 0) {
        int rem = n % 2;
        n /= 2;
        ans += (rem * pow(10, i));
        i++;
    }
    return ans;
}

int main() {
    int decimal;
    cout << "Enter any decimal number: ";
    cin >> decimal;
    int binary = decimalToBinary(decimal);
    cout << binary << endl;
    return 0;
}