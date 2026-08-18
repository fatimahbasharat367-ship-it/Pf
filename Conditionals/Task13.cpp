#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter units consumed: ";
    cin >> units;

    double bill;
    if (units <= 100)
        bill = units * 5;
    else if (units <= 300)
        bill = units * 7;
    else
        bill = units * 10;

    cout << "Total Bill = Rs. " << bill << endl;
    return 0;
}
