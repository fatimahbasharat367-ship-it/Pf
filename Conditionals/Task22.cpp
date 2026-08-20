#include <iostream>
using namespace std;

int main() {
    int day;
    cout << " Enter the day number : ";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Invalid Day" << endl;
    }
    return 0;
}