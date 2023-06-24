#include <iostream>
#include <climits>
using namespace std;

int reverseInt(int n) {
    bool isNeg = 0;
    if(n < 0) {
        isNeg = 1;
        n = -n;
    }
    int ans = 0;
    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        ans = rem + (ans*10);
    }
    return isNeg? -ans : ans;
}

int main() {
    int number;
    cout << "Enter any number: ";
    cin >> number;
    int reversed = reverseInt(number);
    cout << reversed << endl;
    return 0;
}