#include <iostream>
using namespace std;

int main() {
    // if else statement
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18) {
        cout << "You are eligible to vote" << endl;
    } else {
        cout << "You aren't eligible to vote" << endl;
    }

    // if else if else statement
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if(num < 0) {
        cout << "Negative number" << endl;
    } else if(num == 0) {
        cout << "Zero" << endl;
    } else {
        cout << "Positive number" << endl;
    }

    // nested if else statement
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks >= 85) {
        cout << 'A' << endl;
    } else {
        if(marks >= 70) {
            cout << 'B' << endl;
        } else {
            if(marks >= 60) {
                cout << 'C' << endl;
            } else {
                if(marks >= 50) {
                    cout << 'D' << endl;
                } else {
                    if(marks >= 40) {
                        cout << 'E' << endl;
                    } else {
                        cout << 'F' << endl;
                    }
                }
            }
        }
    }
}