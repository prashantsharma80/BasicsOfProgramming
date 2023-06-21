#include <iostream>
using namespace std;

int main() {
    int number, isPrime = 1;
    cin >> number;
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime) {
        cout << "Prime number" << endl;
    } else {
        cout << "Consonant number" << endl;
    }
}