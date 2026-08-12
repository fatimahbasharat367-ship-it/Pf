#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // if-else if ladder
    if (number < 0) {
        cout << "Number is negative." << endl;
    } else if (number == 0) {
        cout << "Number is zero." << endl;
    } else {
        cout << "Number is positive." << endl;
    }

    return 0;
}
