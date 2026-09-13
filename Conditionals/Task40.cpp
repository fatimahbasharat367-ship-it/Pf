#include<iostream>
using namespace std;

int main() {
    string code;
    int choice, qty;
    int totalBill = 0;

    cout << "Enter Passcode to access Flower Shop System: ";
    cin >> code;

    if (code == "4321") {
        cout << "\n--- Flower Shop Menu ---\n";
        cout << "1 : Roses (Rs. 50 each)\n";
        cout << "2 : Tulips (Rs. 70 each)\n";
        cout << "3 : Lilies (Rs. 100 each)\n";
        cout << "4 : Orchids (Rs. 150 each)\n";
        cout << "5 : Exit\n";

        cout << "Choose your flower: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 50;
            cout << "You ordered Roses x" << qty << endl;
        }
        else if (choice == 2) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 70;
            cout << "You ordered Tulips x" << qty << endl;
        }
        else if (choice == 3) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 100;
            cout << "You ordered Lilies x" << qty << endl;
        }
        else if (choice == 4) {
            cout << "Enter quantity: ";
            cin >> qty;
            totalBill = qty * 150;
            cout << "You ordered Orchids x" << qty << endl;
        }
        else if (choice == 5) {
            cout << "Thank you for visiting our Flower Shop!";
            return 0;
        }
        else {
            cout << "Invalid Option!";
            return 0;
        }

       
        if (totalBill >= 1000) {
            cout << "\nSpecial Offer: You get 10% discount!";
            totalBill = totalBill - (totalBill * 0.10);
        }

        if (choice == 1 && qty >= 12) {
            cout << "\nBouquet Offer: Free wrapping service!";
        }

        if (choice == 4 && qty >= 5) {
            cout << "\nLuxury Deal: Free vase with Orchids!";
        }

        cout << "\nFinal Bill: Rs. " << totalBill << endl;
    } else {
        cout << "Invalid Passcode!";
    }

    return 0;
}
