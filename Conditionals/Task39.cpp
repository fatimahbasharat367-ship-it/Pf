#include<iostream>
using namespace std;

int main() {
    string code;
    int choice, qty;
    int totalBill = 0;

    cout << "Enter Passcode to access Coffee Shop System: ";
    cin >> code;

    if (code == "1234") {
        cout << "\n--- Coffee Shop Menu ---\n";
        cout << "1 : Espresso (Rs. 250)\n";
        cout << "2 : Cappuccino (Rs. 300)\n";
        cout << "3 : Latte (Rs. 350)\n";
        cout << "4 : Mocha (Rs. 400)\n";
        cout << "5 : Exit\n";

        cout << "Choose your drink: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 250;
            cout << "You ordered Espresso x" << qty << endl;
            cout << "Total Bill: Rs. " << totalBill;
        }
        else if (choice == 2) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 300;
            cout << "You ordered Cappuccino x" << qty << endl;
            cout << "Total Bill: Rs. " << totalBill;
        }
        else if (choice == 3) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 350;
            cout << "You ordered Latte x" << qty << endl;
            cout << "Total Bill: Rs. " << totalBill;
        }
        else if (choice == 4) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 400;
            cout << "You ordered Mocha x" << qty << endl;
            cout << "Total Bill: Rs. " << totalBill;
        }
        else if (choice == 5) {
            cout << "Thank you for visiting our Coffee Shop!";
            return 0;
        }
        else {
            cout << "Invalid Option!";
        }
    } else {
        cout << "Invalid Passcode!";
    }

    return 0;
}
