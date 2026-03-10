#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Tandin Om";
    string studentNumber = "2230302";

    int tandin_marks[5] = {85, 72, 90, 65, 78};
    int size = 5;

    cout << "Student: " << name << " | No: " << studentNumber << endl;
    cout << "Index    Mark    Bar" << endl;

    int highest = tandin_marks[0];
    int lowest  = tandin_marks[0];
    int total   = 0;

    for (int i = 0; i < size; i++) {
        int mark = tandin_marks[i];
        total += mark;

        if (mark > highest) highest = mark;
        if (mark < lowest)  lowest  = mark;

        string bar = "";
        for (int j = 0; j < mark / 10; j++) {
            bar += "*";
        }

        cout << "[" << i << "]      " << mark << "      " << bar << endl;
    }

    double average = (double)total / size;

    int aboveAverage = 0;
    for (int i = 0; i < size; i++) {
        if (tandin_marks[i] > average) aboveAverage++;
    }

    cout << "Highest      : " << highest << endl;
    cout << "Lowest       : " << lowest  << endl;
    cout << "Average      : ";
    cout << (int)average << ".";
    int decimal = (int)(average * 100) % 100;
    if (decimal < 10) cout << "0";
    cout << decimal << endl;
    cout << "Above Average: " << aboveAverage << " mark(s)" << endl;

    return 0;
}