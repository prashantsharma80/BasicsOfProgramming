#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i < 5; i++) {
        cout << "Jai Mata Di" << endl;      // 4 times
        if(i == 3) {
            continue;           // used to skip the iteration
        }
    }
}