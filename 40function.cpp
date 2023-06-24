#include <iostream>
using namespace std;

void printRam() {
    int n;
    cout << "Enter number of times: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Ram" << endl;
    }
}

int main() {
    printRam();
    return 0;
}