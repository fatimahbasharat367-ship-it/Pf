#include <iostream>
using namespace std;

int main() {
    unsigned int balance = 5000;
    unsigned int withdraw ;
    cout << "How much do you want to withdraw : " ;
    cin >> withdraw;

    if (withdraw <= balance) {
        balance -= withdraw;
        cout << "Remaining Balance = " << balance << endl;
    } else {
        cout << "Insufficient Balance!" << endl;
    }

    return 0;
}
