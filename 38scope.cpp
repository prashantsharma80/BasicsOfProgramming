#include <iostream>
using namespace std;

int number = 20;

int main() {
    // Declaration
    int a;              // Local Variable

    // Initialization
    int b = 5;
    cout << b << endl;      // 5

    // Updation
    b = 10;
    cout << b << endl;      // 10

    // int b = 4;       redeclaration of b
    
    if(true) {
        int b = 4;
        cout << b << endl;           // 4
        int number = 12;
        cout << number << endl;     // 12
    }

    cout << b << endl;          // 10

    cout << number << endl;     // 20
}