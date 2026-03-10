#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> v2230302;
    int input;

    // Input 6 values 
    cout << "Enter 6 values: ";
    for (int i = 0; i < 6; i++) {
        cin >> input;
        v2230302.push_back(input);
    }
    cout << endl;

    // Display original 
    cout << "Original  : ";
    for (int i = 0; i < v2230302.size(); i++) {
        cout << v2230302[i] << "  ";
    }
    cout << endl;

    // Sort ascending 
    vector<int> sorted = v2230302;
    sort(sorted.begin(), sorted.end());

    cout << "Sorted    : ";
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << "  ";
    }
    cout << endl << endl;

    // Stats using STL 
    int minVal = *min_element(v2230302.begin(), v2230302.end());
    int maxVal = *max_element(v2230302.begin(), v2230302.end());
    int sum    =  accumulate(v2230302.begin(), v2230302.end(), 0);
    double avg = (double)sum / v2230302.size();

    cout << "Min       : " << minVal << endl;
    cout << "Max       : " << maxVal << endl;
    cout << "Sum       : " << sum    << endl;

    // Manual 2 decimal places
    int avgWhole   = (int)avg;
    int avgDecimal = (int)(avg * 100) % 100;
    cout << "Average   : " << avgWhole << ".";
    if (avgDecimal < 10) cout << "0";
    cout << avgDecimal << endl;

    cout << endl << "After removing below average:" << endl;

    vector<int> aboveAvg;
    for (int i = 0; i < v2230302.size(); i++) {
        if (v2230302[i] >= avg) {
            aboveAvg.push_back(v2230302[i]);
        }
    }

    for (int i = 0; i < aboveAvg.size(); i++) {
        cout << aboveAvg[i];
        if (i < aboveAvg.size() - 1) cout << "  ";
    }
    cout << endl;

    return 0;
}