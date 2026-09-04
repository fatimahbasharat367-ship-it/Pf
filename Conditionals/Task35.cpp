#include <iostream>
using namespace std;

int main() {
    float temp, pressure, vibration;
    cout << "Enter Engine Temperature (C): ";
    cin >> temp;
    cout << "Enter Engine Pressure (psi): ";
    cin >> pressure;
    cout << "Enter Engine Vibration Level (mm/s): ";
    cin >> vibration;

    if (temp > 900) {
        if (pressure > 300) {
            if (vibration > 5) {
                cout << "CRITICAL ALERT: Engine Overheating + High Pressure + Excessive Vibration!" << endl;
            } else {
                cout << "ALERT: Engine Overheating with High Pressure." << endl;
            }
        } else {
            cout << "ALERT: Engine Overheating." << endl;
        }
    } else if (temp >= 700 && temp <= 900) {
        if (pressure > 250 || vibration > 4) {
            cout << "WARNING: Engine under stress, monitor closely." << endl;
        } else {
            cout << "Engine operating within safe limits." << endl;
        }
    } else {
        if (pressure < 200 && vibration < 3) {
            cout << "Engine is stable and safe." << endl;
        } else {
            cout << "Minor irregularities detected, schedule maintenance." << endl;
        }
    }

    return 0;
}
