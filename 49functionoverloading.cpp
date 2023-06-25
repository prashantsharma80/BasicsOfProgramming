#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << (a+b) << endl;
}

void add(int a, int b, int c) {
    cout << (a+b+c) << endl;
}

int main() {
    // Function Overloading(same function names but different parameters)
    add(2, 3);          // function call by value
    add(2, 4, 6);
    return 0;
}