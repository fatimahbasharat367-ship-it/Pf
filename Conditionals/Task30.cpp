#include<iostream>
using namespace std;

int main() {
    string pin;
    cout << " Enter Your Pin : ";
    cin >> pin;

    float balance;
    
    if ( pin == "1234" ){
        cout << "Enter the Account Balance : ";
        cin >> balance ;
        if ( balance >= 50 ){
            cout << "Transaction Succesful. ";
        }else {
            cout << " Insufficient Balance. ";
        }
    }else {
        cout << "Incorrect Pin.";
        cout << " Try Again. ";
    }
   return 0;
}