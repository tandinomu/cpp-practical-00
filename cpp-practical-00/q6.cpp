#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Tandin";
    string fullName = "Tandin Om";
    string studentNumber = "2230302";

    // Part 1: Print first name N times (N = length of first name)
    int nameLen = firstName.length();
    cout << "Name repeated (" << nameLen << " times):" << endl;
    for (int i = 0; i < nameLen; i++) {
        cout << firstName << endl;
    }

    cout << endl;

    // Part 2: Right-angled triangle (height = length of full name)
    int triangleHeight = fullName.length();
    cout << "Triangle (height = " << triangleHeight << "):" << endl;
    for (int i = 1; i <= triangleHeight; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Part 3: Multiplication table for last digit of student number
    int lastDigit = (studentNumber[studentNumber.length() - 1] - '0');
    cout << "Times Table for " << lastDigit << " (last digit of " << studentNumber << "):" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << lastDigit << " x " << i << " = " << lastDigit * i << endl;
    }

    return 0;
}