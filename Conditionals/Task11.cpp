#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount >= 5000)
        cout << "Discount: 20%\n";
    else if (amount >= 2000)
        cout << "Discount: 10%\n";
    else
        cout << "No Discount\n";

    return 0;
}