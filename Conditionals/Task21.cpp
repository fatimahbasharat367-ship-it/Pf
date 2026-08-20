#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << " Enter the value of A : ";
    cin >> a;

    cout << " Enter the value of B : ";
    cin >> b;

    if (a > b) {
        cout << a << " is greater " << endl;
    } else {
        cout << b << " is greater " << endl;
    }
    return 0;
}