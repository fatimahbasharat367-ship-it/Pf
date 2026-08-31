#include <iostream>
using namespace std;

int main() {
    float units;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    float bill;

    if (units <= 100) {
        bill = units * 5; 
    }
    else if (units > 100 && units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;  
    }
    else if (units > 200 && units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10; 
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 15;  
    }

    cout << "Your total electricity bill is: Rs. " << bill << endl;

    if (bill > 5000) {
        cout << " High Usage Alert: Please save electricity!" << endl;
    }
    else if (bill >= 2000 && bill <= 5000) {
        cout << " Moderate Usage: Keep it balanced." << endl;
    }
    else {
        cout << " Low Usage: Great job saving energy!" << endl;
    }

    return 0;
}
