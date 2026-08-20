#include <iostream>
using namespace std;

int main() {
    int num;
    cout << " Enter the number : ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number is Even." << endl;
    } else {
        cout << "This number is Odd." << endl;
    }
    return 0;
}