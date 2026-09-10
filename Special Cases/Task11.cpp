#include <iostream>
using namespace std;

int main() {
    unsigned int age;    
    double cnicNumber;    
    bool hasCNIC;       

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CNIC number (0 if none): ";
    cin >> cnicNumber;

    hasCNIC = (cnicNumber != 0);

    if (age >= 18 && hasCNIC) {
        cout << "You are eligible to vote!" << endl;
    } else if (age < 18) {
        cout << "You are too young to vote." << endl;
    } else {
        cout << "You must have a valid CNIC to vote." << endl;
    }

    return 0;
}
