#include <iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0;
    int second = 1;
    if(n == 1) {
        cout << first << ' ';
    } else if(n == 2) {
        cout << first << ' ';
        cout << second << ' ';
    } else {
        cout << first << ' ';
        cout << second << ' ';
        for(int i = 1; i <= (n-2); i++) {
            int current = first + second;
            cout << current << ' ';
            first = second;
            second = current;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}