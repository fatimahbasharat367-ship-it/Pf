#include <iostream>
using namespace std;

int main() {
    float pkr;
    cout << "Enter amount in PKR: ";
    cin >> pkr;

    float usd = pkr / 280;
    cout << "\nAmount in USD:\t" << usd << "\n";
    return 0;
}
