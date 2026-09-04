#include <iostream>
using namespace std;

int main() {
    float temp, rpm, fuelPressure;
    cout << "Enter Turbine Temperature (C): ";
    cin >> temp;
    cout << "Enter Turbine RPM: ";
    cin >> rpm;
    cout << "Enter Fuel Pressure (psi): ";
    cin >> fuelPressure;

    if (temp > 950) {
        if (rpm > 12000) {
            if (fuelPressure < 200) {
                cout << "CRITICAL: Overheating + Overspeed + Low Fuel Pressure!" << endl;
            } else {
                cout << "ALERT: Overheating with Overspeed." << endl;
            }
        } else {
            cout << "ALERT: Turbine Overheating." << endl;
        }
    } else if (temp >= 700 && temp <= 950) {
        if (rpm > 10000 && fuelPressure < 250) {
            cout << "WARNING: Turbine under stress, monitor closely." << endl;
        } else {
            cout << "Turbine operating within safe limits." << endl;
        }
    } else {
        if (rpm < 8000 && fuelPressure >= 300) {
            cout << "Turbine is stable and safe." << endl;
        } else {
            cout << "Minor irregularities detected, schedule maintenance." << endl;
        }
    }

    return 0;
}
