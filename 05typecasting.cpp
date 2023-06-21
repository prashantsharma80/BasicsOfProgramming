#include <iostream>
using namespace std;

int main() {
    // Implicit Typecasting(Automatic)
    char character = 'a';
    int num_character = character;
    cout << num_character << endl;

    int number = 1024;
    char char_number = number;          // overflow warining
    cout << char_number << endl;

    // Explicit Typecasting
    float float_num = 234.22;
    int int_num = (int) float_num;
    cout << int_num << endl;
}