#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName = "Tandin Om";

    // Display full name
    cout << "Full Name     : " << fullName << endl;

    // Total length including spaces
    cout << "Total Length  : " << fullName.length() << endl;

    // Uppercase manually
    string upper = fullName;
    for (int i = 0; i < upper.length(); i++)
        upper[i] = toupper(upper[i]);
    cout << "Uppercase     : " << upper << endl;

    // Lowercase manually
    string lower = fullName;
    for (int i = 0; i < lower.length(); i++)
        lower[i] = tolower(lower[i]);
    cout << "Lowercase     : " << lower << endl;

    // Initials
    int spacePos = fullName.find(" ");
    cout << "Initials      : " << fullName[0] << "." << fullName[spacePos + 1] << "." << endl;

    // First name length
    string firstName = fullName.substr(0, spacePos);
    cout << "First Name Len: " << firstName.length() << endl;

    return 0;
}