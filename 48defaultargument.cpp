#include <iostream>
using namespace std;

void prints(int n = 2) {            // Default Argument
    for(int i = 1; i <= n; i++) {
        cout << "Jai Mata Di" << endl;
    }
    cout << endl;
    return;
}

int main() {
    int n;
    cin >> n;
    prints(n);
    prints();       // when no argument is passed, the default value will be used
    return 0;
}