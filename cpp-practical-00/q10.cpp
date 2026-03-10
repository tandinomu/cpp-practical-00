#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    vector<float> marks;

public:
    Student(string n, int sNum) {
        name          = n;
        studentNumber = sNum;
    }

    // Add a mark
    void addMark(float m) {
        marks.push_back(m);
    }

    // Get average
    float getAverage() {
        float sum = 0;
        for (int i = 0; i < marks.size(); i++) {
            sum += marks[i];
        }
        return sum / marks.size();
    }

    // Get highest
    float getHighest() {
        float highest = marks[0];
        for (int i = 1; i < marks.size(); i++) {
            if (marks[i] > highest) highest = marks[i];
        }
        return highest;
    }

    // Get lowest
    float getLowest() {
        float lowest = marks[0];
        for (int i = 1; i < marks.size(); i++) {
            if (marks[i] < lowest) lowest = marks[i];
        }
        return lowest;
    }

    // Print report
    void printReport() {
        cout << "Name       : " << name          << endl;
        cout << "Student No : " << studentNumber << endl;
        cout << "Marks      : ";
        for (int i = 0; i < marks.size(); i++) {
            cout << marks[i] << "  ";
        }
        cout << endl;
        cout << "Highest    : " << getHighest() << endl;
        cout << "Lowest     : " << getLowest()  << endl;
        cout << "Average    : " << getAverage() << endl;
    }
};

int main() {
    Student s("Tandin Om", 2230302);

    s.addMark(85);
    s.addMark(72);
    s.addMark(90);
    s.addMark(65);
    s.addMark(78);

    s.printReport();

    return 0;
}