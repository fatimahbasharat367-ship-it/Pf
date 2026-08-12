#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    //  Nested if condition
    if (number > 0) {
        if (number < 10) {
            cout << "Number is a single-digit positive." << endl;
        } else {
            cout << "Number is multi-digit positive." << endl;
        }
    }

    return 0;
}
