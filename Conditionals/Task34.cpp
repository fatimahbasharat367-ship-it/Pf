#include <iostream>
using namespace std;

int main() {
    float temp, heartRate, oxygen;
    cout << "Enter Patient Temperature (C): ";
    cin >> temp;
    cout << "Enter Patient Heart Rate (bpm): ";
    cin >> heartRate;
    cout << "Enter Patient Oxygen Level (%): ";
    cin >> oxygen;

    if (temp >= 39) {
        if (heartRate >= 120) {
            if (oxygen < 90) {
                cout << "Condition: CRITICAL - Immediate ICU required!" << endl;
            } else {
                cout << "Condition: Serious - Needs urgent treatment." << endl;
            }
        } else {
            cout << "Condition: Fever detected - Monitor closely." << endl;
        }
    } else if (temp >= 37 && temp < 39) {
        if (heartRate >= 100 || oxygen < 92) {
            cout << "Condition: Needs Attention - Possible infection." << endl;
        } else {
            cout << "Condition: Stable but under observation." << endl;
        }
    } else {
        if (oxygen < 95) {
            cout << "Condition: Mild issue - Oxygen support recommended." << endl;
        } else {
            cout << "Condition: Normal - Patient is stable." << endl;
        }
    }

    return 0;
}
