#include <iostream>
using namespace std;

int main() {
    int temp;

    cout << "Enter the temperature in Celsius: ";
    cin >> temp;

    if(temp < 0) {
        cout << "Freezing weather " << endl;
    } else if(temp >= 0 && temp <= 20) {
        cout << "Cold weather " << endl;
    } else if(temp >= 21 && temp <= 35) {
        cout << "Warm weather " << endl;
    } else {
        cout << "Hot weather " << endl;
    }

    return 0;
}
