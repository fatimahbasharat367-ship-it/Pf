#include <iostream>
using namespace std;

int main() {
    char light;
    cout << "Enter traffic light color (R/G/Y): ";
    cin >> light;

    switch(light) {
        case 'R': cout << "STOP!"; break;
        case 'G': cout << "GO!"; break;
        case 'Y': cout << "WAIT!"; break;
        default: cout << "Invalid input!";
    }

    return 0;
}
