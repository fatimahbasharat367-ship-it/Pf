#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "\n--- Calculations ---\n";
    cout << "\tNumber:\t" << num << "\n";
    cout << "\tSquare:\t" << num * num << "\n";
    cout << "\tCube:\t" << num * num * num << "\n";
    return 0;
}
