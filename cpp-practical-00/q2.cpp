#include <iostream>
using namespace std;

int main() {
    int studentNumber = 2230302;
    int number = studentNumber;
    int digitSum = 0;

    while (number > 0) {
        digitSum += number % 10;
        number /= 10;
    }

    cout << "Student Number  : " << studentNumber        << endl;
    cout << "Digit Sum       : " << digitSum             << endl;
    cout << "Odd / Even      : " << (studentNumber % 2 == 0 ? "Even" : "Odd") << endl;
    cout << "Remainder (% 7) : " << studentNumber % 7   << endl;
    cout << "Multiplied by 3 : " << studentNumber * 3   << endl;

    return 0;
}