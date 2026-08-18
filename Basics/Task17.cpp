#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "\n--- Table of " << num << " ---\n";
    for(int i=1; i<=10; i++) {
        cout << num << " x " << i << " = " << num*i << "\n";
    }
    return 0;
}
