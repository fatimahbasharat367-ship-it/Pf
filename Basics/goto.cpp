#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a positive number: ";
    cin >> x;

    if (x < 0) goto negative;  

    cout << "You entered: " << x;
    return 0;

negative:
    cout << "Error: Negative number entered!";
}
