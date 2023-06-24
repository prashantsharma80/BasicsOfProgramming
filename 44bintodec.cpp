#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int ans = 0, i = 0;
    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        ans += (rem * pow(2, i));
        i++;
    }
    return ans;
}

int main() {
    int binary;
    cout << "Enter any binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << decimal << endl;
    return 0;
}