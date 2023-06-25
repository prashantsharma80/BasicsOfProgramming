#include <iostream>
#include <cmath>
using namespace std;

int onesCompliment(int n) {
    int ans = 0, i = 0;
    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        int set_rem = (rem ^ 1);
        ans += (set_rem * pow(10, i));
        i++;
    }
    return ans;
}

int main() {
    int number;
    cin >> number;
    int compliment = onesCompliment(number);
    cout << compliment << endl;
    return 0;
}

// This program won't take zeros as input and also print zeros at begining